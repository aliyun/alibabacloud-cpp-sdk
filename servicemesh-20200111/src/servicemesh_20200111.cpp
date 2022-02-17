// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/servicemesh_20200111.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Servicemesh20200111;

Alibabacloud_Servicemesh20200111::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("servicemesh"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Servicemesh20200111::Client::getEndpoint(shared_ptr<string> productId,
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

AddBuiltinEnvoyFilterResponse Alibabacloud_Servicemesh20200111::Client::addBuiltinEnvoyFilterWithOptions(shared_ptr<AddBuiltinEnvoyFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->istioVersion)) {
    body->insert(pair<string, string>("IstioVersion", *request->istioVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parameters)) {
    body->insert(pair<string, string>("Parameters", *request->parameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddBuiltinEnvoyFilter"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddBuiltinEnvoyFilterResponse(callApi(params, req, runtime));
}

AddBuiltinEnvoyFilterResponse Alibabacloud_Servicemesh20200111::Client::addBuiltinEnvoyFilter(shared_ptr<AddBuiltinEnvoyFilterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addBuiltinEnvoyFilterWithOptions(request, runtime);
}

AddClusterIntoServiceMeshResponse Alibabacloud_Servicemesh20200111::Client::addClusterIntoServiceMeshWithOptions(shared_ptr<AddClusterIntoServiceMeshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    body->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddClusterIntoServiceMesh"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddClusterIntoServiceMeshResponse(callApi(params, req, runtime));
}

AddClusterIntoServiceMeshResponse Alibabacloud_Servicemesh20200111::Client::addClusterIntoServiceMesh(shared_ptr<AddClusterIntoServiceMeshRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addClusterIntoServiceMeshWithOptions(request, runtime);
}

AddMeshTagToEcsResponse Alibabacloud_Servicemesh20200111::Client::addMeshTagToEcsWithOptions(shared_ptr<AddMeshTagToEcsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsId)) {
    query->insert(pair<string, string>("EcsId", *request->ecsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    query->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddMeshTagToEcs"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddMeshTagToEcsResponse(callApi(params, req, runtime));
}

AddMeshTagToEcsResponse Alibabacloud_Servicemesh20200111::Client::addMeshTagToEcs(shared_ptr<AddMeshTagToEcsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addMeshTagToEcsWithOptions(request, runtime);
}

AddVMIntoServiceMeshResponse Alibabacloud_Servicemesh20200111::Client::addVMIntoServiceMeshWithOptions(shared_ptr<AddVMIntoServiceMeshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsId)) {
    query->insert(pair<string, string>("EcsId", *request->ecsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    query->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddVMIntoServiceMesh"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddVMIntoServiceMeshResponse(callApi(params, req, runtime));
}

AddVMIntoServiceMeshResponse Alibabacloud_Servicemesh20200111::Client::addVMIntoServiceMesh(shared_ptr<AddVMIntoServiceMeshRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addVMIntoServiceMeshWithOptions(request, runtime);
}

CreateASMGatewayResponse Alibabacloud_Servicemesh20200111::Client::createASMGatewayWithOptions(shared_ptr<CreateASMGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->body)) {
    body->insert(pair<string, string>("Body", *request->body));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->istioGatewayName)) {
    body->insert(pair<string, string>("IstioGatewayName", *request->istioGatewayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateASMGateway"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateASMGatewayResponse(callApi(params, req, runtime));
}

CreateASMGatewayResponse Alibabacloud_Servicemesh20200111::Client::createASMGateway(shared_ptr<CreateASMGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createASMGatewayWithOptions(request, runtime);
}

CreateExtensionProviderResponse Alibabacloud_Servicemesh20200111::Client::createExtensionProviderWithOptions(shared_ptr<CreateExtensionProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->config)) {
    body->insert(pair<string, string>("Config", *request->config));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateExtensionProvider"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateExtensionProviderResponse(callApi(params, req, runtime));
}

CreateExtensionProviderResponse Alibabacloud_Servicemesh20200111::Client::createExtensionProvider(shared_ptr<CreateExtensionProviderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createExtensionProviderWithOptions(request, runtime);
}

CreateServiceMeshResponse Alibabacloud_Servicemesh20200111::Client::createServiceMeshWithOptions(shared_ptr<CreateServiceMeshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->accessLogEnabled)) {
    body->insert(pair<string, bool>("AccessLogEnabled", *request->accessLogEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessLogFile)) {
    body->insert(pair<string, string>("AccessLogFile", *request->accessLogFile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessLogFormat)) {
    body->insert(pair<string, string>("AccessLogFormat", *request->accessLogFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessLogProject)) {
    body->insert(pair<string, string>("AccessLogProject", *request->accessLogProject));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->accessLogServiceEnabled)) {
    body->insert(pair<string, bool>("AccessLogServiceEnabled", *request->accessLogServiceEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessLogServiceHost)) {
    body->insert(pair<string, string>("AccessLogServiceHost", *request->accessLogServiceHost));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->accessLogServicePort)) {
    body->insert(pair<string, long>("AccessLogServicePort", *request->accessLogServicePort));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->apiServerPublicEip)) {
    body->insert(pair<string, bool>("ApiServerPublicEip", *request->apiServerPublicEip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->auditProject)) {
    body->insert(pair<string, string>("AuditProject", *request->auditProject));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->CRAggregationEnabled)) {
    body->insert(pair<string, bool>("CRAggregationEnabled", *request->CRAggregationEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->configSourceEnabled)) {
    body->insert(pair<string, bool>("ConfigSourceEnabled", *request->configSourceEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configSourceNacosID)) {
    body->insert(pair<string, string>("ConfigSourceNacosID", *request->configSourceNacosID));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->controlPlaneLogEnabled)) {
    body->insert(pair<string, bool>("ControlPlaneLogEnabled", *request->controlPlaneLogEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->controlPlaneLogProject)) {
    body->insert(pair<string, string>("ControlPlaneLogProject", *request->controlPlaneLogProject));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->customizedPrometheus)) {
    body->insert(pair<string, bool>("CustomizedPrometheus", *request->customizedPrometheus));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->customizedZipkin)) {
    body->insert(pair<string, bool>("CustomizedZipkin", *request->customizedZipkin));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->DNSProxyingEnabled)) {
    body->insert(pair<string, bool>("DNSProxyingEnabled", *request->DNSProxyingEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dubboFilterEnabled)) {
    body->insert(pair<string, bool>("DubboFilterEnabled", *request->dubboFilterEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->edition)) {
    body->insert(pair<string, string>("Edition", *request->edition));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableAudit)) {
    body->insert(pair<string, bool>("EnableAudit", *request->enableAudit));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableCRHistory)) {
    body->insert(pair<string, bool>("EnableCRHistory", *request->enableCRHistory));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableSDSServer)) {
    body->insert(pair<string, bool>("EnableSDSServer", *request->enableSDSServer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeIPRanges)) {
    body->insert(pair<string, string>("ExcludeIPRanges", *request->excludeIPRanges));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeInboundPorts)) {
    body->insert(pair<string, string>("ExcludeInboundPorts", *request->excludeInboundPorts));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeOutboundPorts)) {
    body->insert(pair<string, string>("ExcludeOutboundPorts", *request->excludeOutboundPorts));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->filterGatewayClusterConfig)) {
    body->insert(pair<string, bool>("FilterGatewayClusterConfig", *request->filterGatewayClusterConfig));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->gatewayAPIEnabled)) {
    body->insert(pair<string, bool>("GatewayAPIEnabled", *request->gatewayAPIEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->includeIPRanges)) {
    body->insert(pair<string, string>("IncludeIPRanges", *request->includeIPRanges));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->istioVersion)) {
    body->insert(pair<string, string>("IstioVersion", *request->istioVersion));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->kialiEnabled)) {
    body->insert(pair<string, bool>("KialiEnabled", *request->kialiEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->localityLBConf)) {
    body->insert(pair<string, string>("LocalityLBConf", *request->localityLBConf));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->localityLoadBalancing)) {
    body->insert(pair<string, bool>("LocalityLoadBalancing", *request->localityLoadBalancing));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->MSEEnabled)) {
    body->insert(pair<string, bool>("MSEEnabled", *request->MSEEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->mysqlFilterEnabled)) {
    body->insert(pair<string, bool>("MysqlFilterEnabled", *request->mysqlFilterEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OPALimitCPU)) {
    body->insert(pair<string, string>("OPALimitCPU", *request->OPALimitCPU));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OPALimitMemory)) {
    body->insert(pair<string, string>("OPALimitMemory", *request->OPALimitMemory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OPALogLevel)) {
    body->insert(pair<string, string>("OPALogLevel", *request->OPALogLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OPARequestCPU)) {
    body->insert(pair<string, string>("OPARequestCPU", *request->OPARequestCPU));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OPARequestMemory)) {
    body->insert(pair<string, string>("OPARequestMemory", *request->OPARequestMemory));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->opaEnabled)) {
    body->insert(pair<string, bool>("OpaEnabled", *request->opaEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->openAgentPolicy)) {
    body->insert(pair<string, bool>("OpenAgentPolicy", *request->openAgentPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prometheusUrl)) {
    body->insert(pair<string, string>("PrometheusUrl", *request->prometheusUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyLimitCPU)) {
    body->insert(pair<string, string>("ProxyLimitCPU", *request->proxyLimitCPU));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyLimitMemory)) {
    body->insert(pair<string, string>("ProxyLimitMemory", *request->proxyLimitMemory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyRequestCPU)) {
    body->insert(pair<string, string>("ProxyRequestCPU", *request->proxyRequestCPU));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyRequestMemory)) {
    body->insert(pair<string, string>("ProxyRequestMemory", *request->proxyRequestMemory));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->redisFilterEnabled)) {
    body->insert(pair<string, bool>("RedisFilterEnabled", *request->redisFilterEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->telemetry)) {
    body->insert(pair<string, bool>("Telemetry", *request->telemetry));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->thriftFilterEnabled)) {
    body->insert(pair<string, bool>("ThriftFilterEnabled", *request->thriftFilterEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->traceSampling)) {
    body->insert(pair<string, double>("TraceSampling", *request->traceSampling));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->tracing)) {
    body->insert(pair<string, bool>("Tracing", *request->tracing));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitches)) {
    body->insert(pair<string, string>("VSwitches", *request->vSwitches));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    body->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->webAssemblyFilterEnabled)) {
    body->insert(pair<string, bool>("WebAssemblyFilterEnabled", *request->webAssemblyFilterEnabled));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateServiceMesh"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateServiceMeshResponse(callApi(params, req, runtime));
}

CreateServiceMeshResponse Alibabacloud_Servicemesh20200111::Client::createServiceMesh(shared_ptr<CreateServiceMeshRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createServiceMeshWithOptions(request, runtime);
}

DeleteExtensionProviderResponse Alibabacloud_Servicemesh20200111::Client::deleteExtensionProviderWithOptions(shared_ptr<DeleteExtensionProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteExtensionProvider"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteExtensionProviderResponse(callApi(params, req, runtime));
}

DeleteExtensionProviderResponse Alibabacloud_Servicemesh20200111::Client::deleteExtensionProvider(shared_ptr<DeleteExtensionProviderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteExtensionProviderWithOptions(request, runtime);
}

DeleteServiceMeshResponse Alibabacloud_Servicemesh20200111::Client::deleteServiceMeshWithOptions(shared_ptr<DeleteServiceMeshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->force)) {
    body->insert(pair<string, bool>("Force", *request->force));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->retainResources)) {
    body->insert(pair<string, string>("RetainResources", *request->retainResources));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteServiceMesh"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteServiceMeshResponse(callApi(params, req, runtime));
}

DeleteServiceMeshResponse Alibabacloud_Servicemesh20200111::Client::deleteServiceMesh(shared_ptr<DeleteServiceMeshRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteServiceMeshWithOptions(request, runtime);
}

DescribeASMGatewayImportedServicesResponse Alibabacloud_Servicemesh20200111::Client::describeASMGatewayImportedServicesWithOptions(shared_ptr<DescribeASMGatewayImportedServicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ASMGatewayName)) {
    body->insert(pair<string, string>("ASMGatewayName", *request->ASMGatewayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceNamespace)) {
    body->insert(pair<string, string>("ServiceNamespace", *request->serviceNamespace));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeASMGatewayImportedServices"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeASMGatewayImportedServicesResponse(callApi(params, req, runtime));
}

DescribeASMGatewayImportedServicesResponse Alibabacloud_Servicemesh20200111::Client::describeASMGatewayImportedServices(shared_ptr<DescribeASMGatewayImportedServicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeASMGatewayImportedServicesWithOptions(request, runtime);
}

DescribeAlertActionPoliciesResponse Alibabacloud_Servicemesh20200111::Client::describeAlertActionPoliciesWithOptions(shared_ptr<DescribeAlertActionPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    body->insert(pair<string, long>("Page", *request->page));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAlertActionPolicies"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAlertActionPoliciesResponse(callApi(params, req, runtime));
}

DescribeAlertActionPoliciesResponse Alibabacloud_Servicemesh20200111::Client::describeAlertActionPolicies(shared_ptr<DescribeAlertActionPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAlertActionPoliciesWithOptions(request, runtime);
}

DescribeAvailableNacosInstancesResponse Alibabacloud_Servicemesh20200111::Client::describeAvailableNacosInstancesWithOptions(shared_ptr<DescribeAvailableNacosInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAvailableNacosInstances"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAvailableNacosInstancesResponse(callApi(params, req, runtime));
}

DescribeAvailableNacosInstancesResponse Alibabacloud_Servicemesh20200111::Client::describeAvailableNacosInstances(shared_ptr<DescribeAvailableNacosInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvailableNacosInstancesWithOptions(request, runtime);
}

DescribeCCMVersionResponse Alibabacloud_Servicemesh20200111::Client::describeCCMVersionWithOptions(shared_ptr<DescribeCCMVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    query->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCCMVersion"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCCMVersionResponse(callApi(params, req, runtime));
}

DescribeCCMVersionResponse Alibabacloud_Servicemesh20200111::Client::describeCCMVersion(shared_ptr<DescribeCCMVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCCMVersionWithOptions(request, runtime);
}

DescribeCensResponse Alibabacloud_Servicemesh20200111::Client::describeCensWithOptions(shared_ptr<DescribeCensRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    query->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCens"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCensResponse(callApi(params, req, runtime));
}

DescribeCensResponse Alibabacloud_Servicemesh20200111::Client::describeCens(shared_ptr<DescribeCensRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCensWithOptions(request, runtime);
}

DescribeClusterGrafanaResponse Alibabacloud_Servicemesh20200111::Client::describeClusterGrafanaWithOptions(shared_ptr<DescribeClusterGrafanaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->k8sClusterId)) {
    query->insert(pair<string, string>("K8sClusterId", *request->k8sClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    query->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterGrafana"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterGrafanaResponse(callApi(params, req, runtime));
}

DescribeClusterGrafanaResponse Alibabacloud_Servicemesh20200111::Client::describeClusterGrafana(shared_ptr<DescribeClusterGrafanaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClusterGrafanaWithOptions(request, runtime);
}

DescribeClusterPrometheusResponse Alibabacloud_Servicemesh20200111::Client::describeClusterPrometheusWithOptions(shared_ptr<DescribeClusterPrometheusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->k8sClusterId)) {
    query->insert(pair<string, string>("K8sClusterId", *request->k8sClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->k8sClusterRegionId)) {
    query->insert(pair<string, string>("K8sClusterRegionId", *request->k8sClusterRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    query->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterPrometheus"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterPrometheusResponse(callApi(params, req, runtime));
}

DescribeClusterPrometheusResponse Alibabacloud_Servicemesh20200111::Client::describeClusterPrometheus(shared_ptr<DescribeClusterPrometheusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClusterPrometheusWithOptions(request, runtime);
}

DescribeClustersInServiceMeshResponse Alibabacloud_Servicemesh20200111::Client::describeClustersInServiceMeshWithOptions(shared_ptr<DescribeClustersInServiceMeshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    query->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClustersInServiceMesh"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClustersInServiceMeshResponse(callApi(params, req, runtime));
}

DescribeClustersInServiceMeshResponse Alibabacloud_Servicemesh20200111::Client::describeClustersInServiceMesh(shared_ptr<DescribeClustersInServiceMeshRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClustersInServiceMeshWithOptions(request, runtime);
}

DescribeControlPlaneLogAlertRulesResponse Alibabacloud_Servicemesh20200111::Client::describeControlPlaneLogAlertRulesWithOptions(shared_ptr<DescribeControlPlaneLogAlertRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeControlPlaneLogAlertRules"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeControlPlaneLogAlertRulesResponse(callApi(params, req, runtime));
}

DescribeControlPlaneLogAlertRulesResponse Alibabacloud_Servicemesh20200111::Client::describeControlPlaneLogAlertRules(shared_ptr<DescribeControlPlaneLogAlertRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeControlPlaneLogAlertRulesWithOptions(request, runtime);
}

DescribeCrTemplatesResponse Alibabacloud_Servicemesh20200111::Client::describeCrTemplatesWithOptions(shared_ptr<DescribeCrTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->istioVersion)) {
    body->insert(pair<string, string>("IstioVersion", *request->istioVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->kind)) {
    body->insert(pair<string, string>("Kind", *request->kind));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCrTemplates"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCrTemplatesResponse(callApi(params, req, runtime));
}

DescribeCrTemplatesResponse Alibabacloud_Servicemesh20200111::Client::describeCrTemplates(shared_ptr<DescribeCrTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCrTemplatesWithOptions(request, runtime);
}

DescribeExtensionProviderResponse Alibabacloud_Servicemesh20200111::Client::describeExtensionProviderWithOptions(shared_ptr<DescribeExtensionProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeExtensionProvider"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeExtensionProviderResponse(callApi(params, req, runtime));
}

DescribeExtensionProviderResponse Alibabacloud_Servicemesh20200111::Client::describeExtensionProvider(shared_ptr<DescribeExtensionProviderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExtensionProviderWithOptions(request, runtime);
}

DescribeGuestClusterAccessLogDashboardsResponse Alibabacloud_Servicemesh20200111::Client::describeGuestClusterAccessLogDashboardsWithOptions(shared_ptr<DescribeGuestClusterAccessLogDashboardsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->k8sClusterId)) {
    body->insert(pair<string, string>("K8sClusterId", *request->k8sClusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGuestClusterAccessLogDashboards"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGuestClusterAccessLogDashboardsResponse(callApi(params, req, runtime));
}

DescribeGuestClusterAccessLogDashboardsResponse Alibabacloud_Servicemesh20200111::Client::describeGuestClusterAccessLogDashboards(shared_ptr<DescribeGuestClusterAccessLogDashboardsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGuestClusterAccessLogDashboardsWithOptions(request, runtime);
}

DescribeGuestClusterNamespacesResponse Alibabacloud_Servicemesh20200111::Client::describeGuestClusterNamespacesWithOptions(shared_ptr<DescribeGuestClusterNamespacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->guestClusterID)) {
    body->insert(pair<string, string>("GuestClusterID", *request->guestClusterID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGuestClusterNamespaces"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGuestClusterNamespacesResponse(callApi(params, req, runtime));
}

DescribeGuestClusterNamespacesResponse Alibabacloud_Servicemesh20200111::Client::describeGuestClusterNamespaces(shared_ptr<DescribeGuestClusterNamespacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGuestClusterNamespacesWithOptions(request, runtime);
}

DescribeGuestClusterPodsResponse Alibabacloud_Servicemesh20200111::Client::describeGuestClusterPodsWithOptions(shared_ptr<DescribeGuestClusterPodsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->guestClusterID)) {
    body->insert(pair<string, string>("GuestClusterID", *request->guestClusterID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    body->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGuestClusterPods"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGuestClusterPodsResponse(callApi(params, req, runtime));
}

DescribeGuestClusterPodsResponse Alibabacloud_Servicemesh20200111::Client::describeGuestClusterPods(shared_ptr<DescribeGuestClusterPodsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGuestClusterPodsWithOptions(request, runtime);
}

DescribeImportedServicesDetailResponse Alibabacloud_Servicemesh20200111::Client::describeImportedServicesDetailWithOptions(shared_ptr<DescribeImportedServicesDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ASMGatewayName)) {
    body->insert(pair<string, string>("ASMGatewayName", *request->ASMGatewayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceNamespace)) {
    body->insert(pair<string, string>("ServiceNamespace", *request->serviceNamespace));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeImportedServicesDetail"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeImportedServicesDetailResponse(callApi(params, req, runtime));
}

DescribeImportedServicesDetailResponse Alibabacloud_Servicemesh20200111::Client::describeImportedServicesDetail(shared_ptr<DescribeImportedServicesDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeImportedServicesDetailWithOptions(request, runtime);
}

DescribeIngressGatewaysResponse Alibabacloud_Servicemesh20200111::Client::describeIngressGatewaysWithOptions(shared_ptr<DescribeIngressGatewaysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeIngressGateways"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeIngressGatewaysResponse(callApi(params, req, runtime));
}

DescribeIngressGatewaysResponse Alibabacloud_Servicemesh20200111::Client::describeIngressGateways(shared_ptr<DescribeIngressGatewaysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeIngressGatewaysWithOptions(request, runtime);
}

DescribeNamespaceScopeSidecarConfigResponse Alibabacloud_Servicemesh20200111::Client::describeNamespaceScopeSidecarConfigWithOptions(shared_ptr<DescribeNamespaceScopeSidecarConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    body->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNamespaceScopeSidecarConfig"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeNamespaceScopeSidecarConfigResponse(callApi(params, req, runtime));
}

DescribeNamespaceScopeSidecarConfigResponse Alibabacloud_Servicemesh20200111::Client::describeNamespaceScopeSidecarConfig(shared_ptr<DescribeNamespaceScopeSidecarConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNamespaceScopeSidecarConfigWithOptions(request, runtime);
}

DescribeNodesInstanceTypeResponse Alibabacloud_Servicemesh20200111::Client::describeNodesInstanceTypeWithOptions(shared_ptr<DescribeNodesInstanceTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNodesInstanceType"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeNodesInstanceTypeResponse(callApi(params, req, runtime));
}

DescribeNodesInstanceTypeResponse Alibabacloud_Servicemesh20200111::Client::describeNodesInstanceType(shared_ptr<DescribeNodesInstanceTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNodesInstanceTypeWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Servicemesh20200111::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRegionsResponse(callApi(params, req, runtime));
}

DescribeRegionsResponse Alibabacloud_Servicemesh20200111::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeServiceMeshDetailResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshDetailWithOptions(shared_ptr<DescribeServiceMeshDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServiceMeshDetail"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeServiceMeshDetailResponse(callApi(params, req, runtime));
}

DescribeServiceMeshDetailResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshDetail(shared_ptr<DescribeServiceMeshDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServiceMeshDetailWithOptions(request, runtime);
}

DescribeServiceMeshGatewayPodStatusResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshGatewayPodStatusWithOptions(shared_ptr<DescribeServiceMeshGatewayPodStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    query->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayFullName)) {
    body->insert(pair<string, string>("GatewayFullName", *request->gatewayFullName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->guestClusterIds)) {
    body->insert(pair<string, string>("GuestClusterIds", *request->guestClusterIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServiceMeshGatewayPodStatus"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeServiceMeshGatewayPodStatusResponse(callApi(params, req, runtime));
}

DescribeServiceMeshGatewayPodStatusResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshGatewayPodStatus(shared_ptr<DescribeServiceMeshGatewayPodStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServiceMeshGatewayPodStatusWithOptions(request, runtime);
}

DescribeServiceMeshGatewaySLBStatusResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshGatewaySLBStatusWithOptions(shared_ptr<DescribeServiceMeshGatewaySLBStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    query->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayAddresses)) {
    body->insert(pair<string, string>("GatewayAddresses", *request->gatewayAddresses));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayFullName)) {
    body->insert(pair<string, string>("GatewayFullName", *request->gatewayFullName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServiceMeshGatewaySLBStatus"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeServiceMeshGatewaySLBStatusResponse(callApi(params, req, runtime));
}

DescribeServiceMeshGatewaySLBStatusResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshGatewaySLBStatus(shared_ptr<DescribeServiceMeshGatewaySLBStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServiceMeshGatewaySLBStatusWithOptions(request, runtime);
}

DescribeServiceMeshKubeconfigResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshKubeconfigWithOptions(shared_ptr<DescribeServiceMeshKubeconfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->privateIpAddress)) {
    query->insert(pair<string, bool>("PrivateIpAddress", *request->privateIpAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    query->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServiceMeshKubeconfig"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeServiceMeshKubeconfigResponse(callApi(params, req, runtime));
}

DescribeServiceMeshKubeconfigResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshKubeconfig(shared_ptr<DescribeServiceMeshKubeconfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServiceMeshKubeconfigWithOptions(request, runtime);
}

DescribeServiceMeshUpgradeStatusResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshUpgradeStatusWithOptions(shared_ptr<DescribeServiceMeshUpgradeStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    query->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->allIstioGatewayFullNames)) {
    body->insert(pair<string, string>("AllIstioGatewayFullNames", *request->allIstioGatewayFullNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->guestClusterIds)) {
    body->insert(pair<string, string>("GuestClusterIds", *request->guestClusterIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServiceMeshUpgradeStatus"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeServiceMeshUpgradeStatusResponse(callApi(params, req, runtime));
}

DescribeServiceMeshUpgradeStatusResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshUpgradeStatus(shared_ptr<DescribeServiceMeshUpgradeStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServiceMeshUpgradeStatusWithOptions(request, runtime);
}

DescribeServiceMeshVMsResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshVMsWithOptions(shared_ptr<DescribeServiceMeshVMsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    query->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServiceMeshVMs"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeServiceMeshVMsResponse(callApi(params, req, runtime));
}

DescribeServiceMeshVMsResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshVMs(shared_ptr<DescribeServiceMeshVMsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServiceMeshVMsWithOptions(request, runtime);
}

DescribeServiceMeshesResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServiceMeshes"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeServiceMeshesResponse(callApi(params, req, runtime));
}

DescribeServiceMeshesResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshes() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServiceMeshesWithOptions(runtime);
}

DescribeUpgradeVersionResponse Alibabacloud_Servicemesh20200111::Client::describeUpgradeVersionWithOptions(shared_ptr<DescribeUpgradeVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    query->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUpgradeVersion"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUpgradeVersionResponse(callApi(params, req, runtime));
}

DescribeUpgradeVersionResponse Alibabacloud_Servicemesh20200111::Client::describeUpgradeVersion(shared_ptr<DescribeUpgradeVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUpgradeVersionWithOptions(request, runtime);
}

DescribeUsersWithPermissionsResponse Alibabacloud_Servicemesh20200111::Client::describeUsersWithPermissionsWithOptions(shared_ptr<DescribeUsersWithPermissionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userType)) {
    body->insert(pair<string, string>("UserType", *request->userType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUsersWithPermissions"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUsersWithPermissionsResponse(callApi(params, req, runtime));
}

DescribeUsersWithPermissionsResponse Alibabacloud_Servicemesh20200111::Client::describeUsersWithPermissions(shared_ptr<DescribeUsersWithPermissionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUsersWithPermissionsWithOptions(request, runtime);
}

DescribeVMsInServiceMeshResponse Alibabacloud_Servicemesh20200111::Client::describeVMsInServiceMeshWithOptions(shared_ptr<DescribeVMsInServiceMeshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    query->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVMsInServiceMesh"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVMsInServiceMeshResponse(callApi(params, req, runtime));
}

DescribeVMsInServiceMeshResponse Alibabacloud_Servicemesh20200111::Client::describeVMsInServiceMesh(shared_ptr<DescribeVMsInServiceMeshRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVMsInServiceMeshWithOptions(request, runtime);
}

DescribeVSwitchesResponse Alibabacloud_Servicemesh20200111::Client::describeVSwitchesWithOptions(shared_ptr<DescribeVSwitchesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    body->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVSwitches"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVSwitchesResponse(callApi(params, req, runtime));
}

DescribeVSwitchesResponse Alibabacloud_Servicemesh20200111::Client::describeVSwitches(shared_ptr<DescribeVSwitchesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVSwitchesWithOptions(request, runtime);
}

DescribeVersionsResponse Alibabacloud_Servicemesh20200111::Client::describeVersionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVersions"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVersionsResponse(callApi(params, req, runtime));
}

DescribeVersionsResponse Alibabacloud_Servicemesh20200111::Client::describeVersions() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVersionsWithOptions(runtime);
}

DescribeVpcsResponse Alibabacloud_Servicemesh20200111::Client::describeVpcsWithOptions(shared_ptr<DescribeVpcsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVpcs"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVpcsResponse(callApi(params, req, runtime));
}

DescribeVpcsResponse Alibabacloud_Servicemesh20200111::Client::describeVpcs(shared_ptr<DescribeVpcsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVpcsWithOptions(request, runtime);
}

DisableControlPlaneLogAlertResponse Alibabacloud_Servicemesh20200111::Client::disableControlPlaneLogAlertWithOptions(shared_ptr<DisableControlPlaneLogAlertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    body->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableControlPlaneLogAlert"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableControlPlaneLogAlertResponse(callApi(params, req, runtime));
}

DisableControlPlaneLogAlertResponse Alibabacloud_Servicemesh20200111::Client::disableControlPlaneLogAlert(shared_ptr<DisableControlPlaneLogAlertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableControlPlaneLogAlertWithOptions(request, runtime);
}

EnableControlPlaneLogAlertResponse Alibabacloud_Servicemesh20200111::Client::enableControlPlaneLogAlertWithOptions(shared_ptr<EnableControlPlaneLogAlertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->actionPolicyId)) {
    body->insert(pair<string, string>("ActionPolicyId", *request->actionPolicyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    body->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableControlPlaneLogAlert"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableControlPlaneLogAlertResponse(callApi(params, req, runtime));
}

EnableControlPlaneLogAlertResponse Alibabacloud_Servicemesh20200111::Client::enableControlPlaneLogAlert(shared_ptr<EnableControlPlaneLogAlertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableControlPlaneLogAlertWithOptions(request, runtime);
}

GetAutoInjectionLabelSyncStatusResponse Alibabacloud_Servicemesh20200111::Client::getAutoInjectionLabelSyncStatusWithOptions(shared_ptr<GetAutoInjectionLabelSyncStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    query->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAutoInjectionLabelSyncStatus"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAutoInjectionLabelSyncStatusResponse(callApi(params, req, runtime));
}

GetAutoInjectionLabelSyncStatusResponse Alibabacloud_Servicemesh20200111::Client::getAutoInjectionLabelSyncStatus(shared_ptr<GetAutoInjectionLabelSyncStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAutoInjectionLabelSyncStatusWithOptions(request, runtime);
}

GetBuiltinEnvoyFilterResponse Alibabacloud_Servicemesh20200111::Client::getBuiltinEnvoyFilterWithOptions(shared_ptr<GetBuiltinEnvoyFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->istioVersion)) {
    body->insert(pair<string, string>("IstioVersion", *request->istioVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBuiltinEnvoyFilter"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBuiltinEnvoyFilterResponse(callApi(params, req, runtime));
}

GetBuiltinEnvoyFilterResponse Alibabacloud_Servicemesh20200111::Client::getBuiltinEnvoyFilter(shared_ptr<GetBuiltinEnvoyFilterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBuiltinEnvoyFilterWithOptions(request, runtime);
}

GetBuiltinEnvoyFilterCatalogResponse Alibabacloud_Servicemesh20200111::Client::getBuiltinEnvoyFilterCatalogWithOptions(shared_ptr<GetBuiltinEnvoyFilterCatalogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBuiltinEnvoyFilterCatalog"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBuiltinEnvoyFilterCatalogResponse(callApi(params, req, runtime));
}

GetBuiltinEnvoyFilterCatalogResponse Alibabacloud_Servicemesh20200111::Client::getBuiltinEnvoyFilterCatalog(shared_ptr<GetBuiltinEnvoyFilterCatalogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBuiltinEnvoyFilterCatalogWithOptions(request, runtime);
}

GetCaCertResponse Alibabacloud_Servicemesh20200111::Client::getCaCertWithOptions(shared_ptr<GetCaCertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCaCert"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCaCertResponse(callApi(params, req, runtime));
}

GetCaCertResponse Alibabacloud_Servicemesh20200111::Client::getCaCert(shared_ptr<GetCaCertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCaCertWithOptions(request, runtime);
}

GetDiagnosisResponse Alibabacloud_Servicemesh20200111::Client::getDiagnosisWithOptions(shared_ptr<GetDiagnosisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    query->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDiagnosis"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDiagnosisResponse(callApi(params, req, runtime));
}

GetDiagnosisResponse Alibabacloud_Servicemesh20200111::Client::getDiagnosis(shared_ptr<GetDiagnosisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDiagnosisWithOptions(request, runtime);
}

GetEcsListResponse Alibabacloud_Servicemesh20200111::Client::getEcsListWithOptions(shared_ptr<GetEcsListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEcsList"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEcsListResponse(callApi(params, req, runtime));
}

GetEcsListResponse Alibabacloud_Servicemesh20200111::Client::getEcsList(shared_ptr<GetEcsListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEcsListWithOptions(request, runtime);
}

GetRegisteredServiceEndpointsResponse Alibabacloud_Servicemesh20200111::Client::getRegisteredServiceEndpointsWithOptions(shared_ptr<GetRegisteredServiceEndpointsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterIds)) {
    body->insert(pair<string, string>("ClusterIds", *request->clusterIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    body->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    body->insert(pair<string, string>("ServiceType", *request->serviceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRegisteredServiceEndpoints"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRegisteredServiceEndpointsResponse(callApi(params, req, runtime));
}

GetRegisteredServiceEndpointsResponse Alibabacloud_Servicemesh20200111::Client::getRegisteredServiceEndpoints(shared_ptr<GetRegisteredServiceEndpointsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRegisteredServiceEndpointsWithOptions(request, runtime);
}

GetRegisteredServiceNamespacesResponse Alibabacloud_Servicemesh20200111::Client::getRegisteredServiceNamespacesWithOptions(shared_ptr<GetRegisteredServiceNamespacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRegisteredServiceNamespaces"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRegisteredServiceNamespacesResponse(callApi(params, req, runtime));
}

GetRegisteredServiceNamespacesResponse Alibabacloud_Servicemesh20200111::Client::getRegisteredServiceNamespaces(shared_ptr<GetRegisteredServiceNamespacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRegisteredServiceNamespacesWithOptions(request, runtime);
}

GetRegisteredServicesResponse Alibabacloud_Servicemesh20200111::Client::getRegisteredServicesWithOptions(shared_ptr<GetRegisteredServicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    query->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->guestClusters)) {
    body->insert(pair<string, string>("GuestClusters", *request->guestClusters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->guestLimits)) {
    body->insert(pair<string, string>("GuestLimits", *request->guestLimits));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->guestMarkers)) {
    body->insert(pair<string, string>("GuestMarkers", *request->guestMarkers));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->meshLimit)) {
    body->insert(pair<string, long>("MeshLimit", *request->meshLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->meshMarker)) {
    body->insert(pair<string, string>("MeshMarker", *request->meshMarker));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    body->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRegisteredServices"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRegisteredServicesResponse(callApi(params, req, runtime));
}

GetRegisteredServicesResponse Alibabacloud_Servicemesh20200111::Client::getRegisteredServices(shared_ptr<GetRegisteredServicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRegisteredServicesWithOptions(request, runtime);
}

GetSaTokenResponse Alibabacloud_Servicemesh20200111::Client::getSaTokenWithOptions(shared_ptr<GetSaTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    body->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needRefresh)) {
    body->insert(pair<string, bool>("NeedRefresh", *request->needRefresh));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceAccountName)) {
    body->insert(pair<string, string>("ServiceAccountName", *request->serviceAccountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSaToken"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSaTokenResponse(callApi(params, req, runtime));
}

GetSaTokenResponse Alibabacloud_Servicemesh20200111::Client::getSaToken(shared_ptr<GetSaTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSaTokenWithOptions(request, runtime);
}

GetServiceMeshSlbResponse Alibabacloud_Servicemesh20200111::Client::getServiceMeshSlbWithOptions(shared_ptr<GetServiceMeshSlbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    query->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetServiceMeshSlb"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceMeshSlbResponse(callApi(params, req, runtime));
}

GetServiceMeshSlbResponse Alibabacloud_Servicemesh20200111::Client::getServiceMeshSlb(shared_ptr<GetServiceMeshSlbRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getServiceMeshSlbWithOptions(request, runtime);
}

GetServiceRegistrySourceResponse Alibabacloud_Servicemesh20200111::Client::getServiceRegistrySourceWithOptions(shared_ptr<GetServiceRegistrySourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    query->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetServiceRegistrySource"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceRegistrySourceResponse(callApi(params, req, runtime));
}

GetServiceRegistrySourceResponse Alibabacloud_Servicemesh20200111::Client::getServiceRegistrySource(shared_ptr<GetServiceRegistrySourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getServiceRegistrySourceWithOptions(request, runtime);
}

GetVmAppMeshInfoResponse Alibabacloud_Servicemesh20200111::Client::getVmAppMeshInfoWithOptions(shared_ptr<GetVmAppMeshInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVmAppMeshInfo"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVmAppMeshInfoResponse(callApi(params, req, runtime));
}

GetVmAppMeshInfoResponse Alibabacloud_Servicemesh20200111::Client::getVmAppMeshInfo(shared_ptr<GetVmAppMeshInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVmAppMeshInfoWithOptions(request, runtime);
}

GetVmMetaResponse Alibabacloud_Servicemesh20200111::Client::getVmMetaWithOptions(shared_ptr<GetVmMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVmMeta"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVmMetaResponse(callApi(params, req, runtime));
}

GetVmMetaResponse Alibabacloud_Servicemesh20200111::Client::getVmMeta(shared_ptr<GetVmMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVmMetaWithOptions(request, runtime);
}

InitializeASMRoleResponse Alibabacloud_Servicemesh20200111::Client::initializeASMRoleWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InitializeASMRole"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InitializeASMRoleResponse(callApi(params, req, runtime));
}

InitializeASMRoleResponse Alibabacloud_Servicemesh20200111::Client::initializeASMRole() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return initializeASMRoleWithOptions(runtime);
}

ListBuiltinEnvoyFilterResponse Alibabacloud_Servicemesh20200111::Client::listBuiltinEnvoyFilterWithOptions(shared_ptr<ListBuiltinEnvoyFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBuiltinEnvoyFilter"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBuiltinEnvoyFilterResponse(callApi(params, req, runtime));
}

ListBuiltinEnvoyFilterResponse Alibabacloud_Servicemesh20200111::Client::listBuiltinEnvoyFilter(shared_ptr<ListBuiltinEnvoyFilterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBuiltinEnvoyFilterWithOptions(request, runtime);
}

ModifyBuiltinEnvoyFilterResponse Alibabacloud_Servicemesh20200111::Client::modifyBuiltinEnvoyFilterWithOptions(shared_ptr<ModifyBuiltinEnvoyFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->istioVersion)) {
    body->insert(pair<string, string>("IstioVersion", *request->istioVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parameters)) {
    body->insert(pair<string, string>("Parameters", *request->parameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyBuiltinEnvoyFilter"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyBuiltinEnvoyFilterResponse(callApi(params, req, runtime));
}

ModifyBuiltinEnvoyFilterResponse Alibabacloud_Servicemesh20200111::Client::modifyBuiltinEnvoyFilter(shared_ptr<ModifyBuiltinEnvoyFilterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyBuiltinEnvoyFilterWithOptions(request, runtime);
}

ModifyServiceMeshNameResponse Alibabacloud_Servicemesh20200111::Client::modifyServiceMeshNameWithOptions(shared_ptr<ModifyServiceMeshNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyServiceMeshName"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyServiceMeshNameResponse(callApi(params, req, runtime));
}

ModifyServiceMeshNameResponse Alibabacloud_Servicemesh20200111::Client::modifyServiceMeshName(shared_ptr<ModifyServiceMeshNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyServiceMeshNameWithOptions(request, runtime);
}

ReActivateAuditResponse Alibabacloud_Servicemesh20200111::Client::reActivateAuditWithOptions(shared_ptr<ReActivateAuditRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableAudit)) {
    body->insert(pair<string, bool>("EnableAudit", *request->enableAudit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReActivateAudit"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReActivateAuditResponse(callApi(params, req, runtime));
}

ReActivateAuditResponse Alibabacloud_Servicemesh20200111::Client::reActivateAudit(shared_ptr<ReActivateAuditRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reActivateAuditWithOptions(request, runtime);
}

RemoveBuiltinEnvoyFilterResponse Alibabacloud_Servicemesh20200111::Client::removeBuiltinEnvoyFilterWithOptions(shared_ptr<RemoveBuiltinEnvoyFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->istioVersion)) {
    body->insert(pair<string, string>("IstioVersion", *request->istioVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveBuiltinEnvoyFilter"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveBuiltinEnvoyFilterResponse(callApi(params, req, runtime));
}

RemoveBuiltinEnvoyFilterResponse Alibabacloud_Servicemesh20200111::Client::removeBuiltinEnvoyFilter(shared_ptr<RemoveBuiltinEnvoyFilterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeBuiltinEnvoyFilterWithOptions(request, runtime);
}

RemoveClusterFromServiceMeshResponse Alibabacloud_Servicemesh20200111::Client::removeClusterFromServiceMeshWithOptions(shared_ptr<RemoveClusterFromServiceMeshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    body->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveClusterFromServiceMesh"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveClusterFromServiceMeshResponse(callApi(params, req, runtime));
}

RemoveClusterFromServiceMeshResponse Alibabacloud_Servicemesh20200111::Client::removeClusterFromServiceMesh(shared_ptr<RemoveClusterFromServiceMeshRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeClusterFromServiceMeshWithOptions(request, runtime);
}

RemoveVMFromServiceMeshResponse Alibabacloud_Servicemesh20200111::Client::removeVMFromServiceMeshWithOptions(shared_ptr<RemoveVMFromServiceMeshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsId)) {
    query->insert(pair<string, string>("EcsId", *request->ecsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    query->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveVMFromServiceMesh"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveVMFromServiceMeshResponse(callApi(params, req, runtime));
}

RemoveVMFromServiceMeshResponse Alibabacloud_Servicemesh20200111::Client::removeVMFromServiceMesh(shared_ptr<RemoveVMFromServiceMeshRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeVMFromServiceMeshWithOptions(request, runtime);
}

RevokeKubeconfigResponse Alibabacloud_Servicemesh20200111::Client::revokeKubeconfigWithOptions(shared_ptr<RevokeKubeconfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->privateIpAddress)) {
    body->insert(pair<string, bool>("PrivateIpAddress", *request->privateIpAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RevokeKubeconfig"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RevokeKubeconfigResponse(callApi(params, req, runtime));
}

RevokeKubeconfigResponse Alibabacloud_Servicemesh20200111::Client::revokeKubeconfig(shared_ptr<RevokeKubeconfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeKubeconfigWithOptions(request, runtime);
}

RunDiagnosisResponse Alibabacloud_Servicemesh20200111::Client::runDiagnosisWithOptions(shared_ptr<RunDiagnosisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunDiagnosis"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunDiagnosisResponse(callApi(params, req, runtime));
}

RunDiagnosisResponse Alibabacloud_Servicemesh20200111::Client::runDiagnosis(shared_ptr<RunDiagnosisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runDiagnosisWithOptions(request, runtime);
}

SetServiceRegistrySourceResponse Alibabacloud_Servicemesh20200111::Client::setServiceRegistrySourceWithOptions(shared_ptr<SetServiceRegistrySourceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SetServiceRegistrySourceShrinkRequest> request = make_shared<SetServiceRegistrySourceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->config)) {
    request->configShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->config, make_shared<string>("Config"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configShrink)) {
    body->insert(pair<string, string>("Config", *request->configShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetServiceRegistrySource"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetServiceRegistrySourceResponse(callApi(params, req, runtime));
}

SetServiceRegistrySourceResponse Alibabacloud_Servicemesh20200111::Client::setServiceRegistrySource(shared_ptr<SetServiceRegistrySourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setServiceRegistrySourceWithOptions(request, runtime);
}

UpdateASMGatewayResponse Alibabacloud_Servicemesh20200111::Client::updateASMGatewayWithOptions(shared_ptr<UpdateASMGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->body)) {
    body->insert(pair<string, string>("Body", *request->body));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->istioGatewayName)) {
    body->insert(pair<string, string>("IstioGatewayName", *request->istioGatewayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateASMGateway"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateASMGatewayResponse(callApi(params, req, runtime));
}

UpdateASMGatewayResponse Alibabacloud_Servicemesh20200111::Client::updateASMGateway(shared_ptr<UpdateASMGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateASMGatewayWithOptions(request, runtime);
}

UpdateASMGatewayImportedServicesResponse Alibabacloud_Servicemesh20200111::Client::updateASMGatewayImportedServicesWithOptions(shared_ptr<UpdateASMGatewayImportedServicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ASMGatewayName)) {
    body->insert(pair<string, string>("ASMGatewayName", *request->ASMGatewayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceNames)) {
    body->insert(pair<string, string>("ServiceNames", *request->serviceNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceNamespace)) {
    body->insert(pair<string, string>("ServiceNamespace", *request->serviceNamespace));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateASMGatewayImportedServices"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateASMGatewayImportedServicesResponse(callApi(params, req, runtime));
}

UpdateASMGatewayImportedServicesResponse Alibabacloud_Servicemesh20200111::Client::updateASMGatewayImportedServices(shared_ptr<UpdateASMGatewayImportedServicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateASMGatewayImportedServicesWithOptions(request, runtime);
}

UpdateControlPlaneLogAlertActionPolicyResponse Alibabacloud_Servicemesh20200111::Client::updateControlPlaneLogAlertActionPolicyWithOptions(shared_ptr<UpdateControlPlaneLogAlertActionPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->actionPolicyId)) {
    body->insert(pair<string, string>("ActionPolicyId", *request->actionPolicyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    body->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateControlPlaneLogAlertActionPolicy"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateControlPlaneLogAlertActionPolicyResponse(callApi(params, req, runtime));
}

UpdateControlPlaneLogAlertActionPolicyResponse Alibabacloud_Servicemesh20200111::Client::updateControlPlaneLogAlertActionPolicy(shared_ptr<UpdateControlPlaneLogAlertActionPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateControlPlaneLogAlertActionPolicyWithOptions(request, runtime);
}

UpdateControlPlaneLogConfigResponse Alibabacloud_Servicemesh20200111::Client::updateControlPlaneLogConfigWithOptions(shared_ptr<UpdateControlPlaneLogConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enabled)) {
    body->insert(pair<string, bool>("Enabled", *request->enabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    body->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateControlPlaneLogConfig"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateControlPlaneLogConfigResponse(callApi(params, req, runtime));
}

UpdateControlPlaneLogConfigResponse Alibabacloud_Servicemesh20200111::Client::updateControlPlaneLogConfig(shared_ptr<UpdateControlPlaneLogConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateControlPlaneLogConfigWithOptions(request, runtime);
}

UpdateExtensionProviderResponse Alibabacloud_Servicemesh20200111::Client::updateExtensionProviderWithOptions(shared_ptr<UpdateExtensionProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->config)) {
    body->insert(pair<string, string>("Config", *request->config));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateExtensionProvider"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateExtensionProviderResponse(callApi(params, req, runtime));
}

UpdateExtensionProviderResponse Alibabacloud_Servicemesh20200111::Client::updateExtensionProvider(shared_ptr<UpdateExtensionProviderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateExtensionProviderWithOptions(request, runtime);
}

UpdateIstioInjectionConfigResponse Alibabacloud_Servicemesh20200111::Client::updateIstioInjectionConfigWithOptions(shared_ptr<UpdateIstioInjectionConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableIstioInjection)) {
    body->insert(pair<string, bool>("EnableIstioInjection", *request->enableIstioInjection));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableSidecarSetInjection)) {
    body->insert(pair<string, bool>("EnableSidecarSetInjection", *request->enableSidecarSetInjection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    body->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateIstioInjectionConfig"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateIstioInjectionConfigResponse(callApi(params, req, runtime));
}

UpdateIstioInjectionConfigResponse Alibabacloud_Servicemesh20200111::Client::updateIstioInjectionConfig(shared_ptr<UpdateIstioInjectionConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateIstioInjectionConfigWithOptions(request, runtime);
}

UpdateMeshFeatureResponse Alibabacloud_Servicemesh20200111::Client::updateMeshFeatureWithOptions(shared_ptr<UpdateMeshFeatureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->accessLogEnabled)) {
    body->insert(pair<string, bool>("AccessLogEnabled", *request->accessLogEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessLogFile)) {
    body->insert(pair<string, string>("AccessLogFile", *request->accessLogFile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessLogFormat)) {
    body->insert(pair<string, string>("AccessLogFormat", *request->accessLogFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessLogProject)) {
    body->insert(pair<string, string>("AccessLogProject", *request->accessLogProject));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->accessLogServiceEnabled)) {
    body->insert(pair<string, bool>("AccessLogServiceEnabled", *request->accessLogServiceEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessLogServiceHost)) {
    body->insert(pair<string, string>("AccessLogServiceHost", *request->accessLogServiceHost));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->accessLogServicePort)) {
    body->insert(pair<string, long>("AccessLogServicePort", *request->accessLogServicePort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->auditProject)) {
    body->insert(pair<string, string>("AuditProject", *request->auditProject));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoInjectionPolicyEnabled)) {
    body->insert(pair<string, bool>("AutoInjectionPolicyEnabled", *request->autoInjectionPolicyEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->CRAggregationEnabled)) {
    body->insert(pair<string, bool>("CRAggregationEnabled", *request->CRAggregationEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->cniEnabled)) {
    body->insert(pair<string, bool>("CniEnabled", *request->cniEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cniExcludeNamespaces)) {
    body->insert(pair<string, string>("CniExcludeNamespaces", *request->cniExcludeNamespaces));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->configSourceEnabled)) {
    body->insert(pair<string, bool>("ConfigSourceEnabled", *request->configSourceEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configSourceNacosID)) {
    body->insert(pair<string, string>("ConfigSourceNacosID", *request->configSourceNacosID));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->customizedPrometheus)) {
    body->insert(pair<string, bool>("CustomizedPrometheus", *request->customizedPrometheus));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->customizedZipkin)) {
    body->insert(pair<string, bool>("CustomizedZipkin", *request->customizedZipkin));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->DNSProxyingEnabled)) {
    body->insert(pair<string, bool>("DNSProxyingEnabled", *request->DNSProxyingEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->discoverySelectors)) {
    body->insert(pair<string, string>("DiscoverySelectors", *request->discoverySelectors));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dubboFilterEnabled)) {
    body->insert(pair<string, bool>("DubboFilterEnabled", *request->dubboFilterEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableAudit)) {
    body->insert(pair<string, bool>("EnableAudit", *request->enableAudit));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableCRHistory)) {
    body->insert(pair<string, bool>("EnableCRHistory", *request->enableCRHistory));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableNamespacesByDefault)) {
    body->insert(pair<string, bool>("EnableNamespacesByDefault", *request->enableNamespacesByDefault));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableSDSServer)) {
    body->insert(pair<string, bool>("EnableSDSServer", *request->enableSDSServer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeIPRanges)) {
    body->insert(pair<string, string>("ExcludeIPRanges", *request->excludeIPRanges));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeInboundPorts)) {
    body->insert(pair<string, string>("ExcludeInboundPorts", *request->excludeInboundPorts));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeOutboundPorts)) {
    body->insert(pair<string, string>("ExcludeOutboundPorts", *request->excludeOutboundPorts));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->filterGatewayClusterConfig)) {
    body->insert(pair<string, bool>("FilterGatewayClusterConfig", *request->filterGatewayClusterConfig));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->gatewayAPIEnabled)) {
    body->insert(pair<string, bool>("GatewayAPIEnabled", *request->gatewayAPIEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->http10Enabled)) {
    body->insert(pair<string, bool>("Http10Enabled", *request->http10Enabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->includeIPRanges)) {
    body->insert(pair<string, string>("IncludeIPRanges", *request->includeIPRanges));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->includeInboundPorts)) {
    body->insert(pair<string, string>("IncludeInboundPorts", *request->includeInboundPorts));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->kialiEnabled)) {
    body->insert(pair<string, bool>("KialiEnabled", *request->kialiEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lifecycle)) {
    body->insert(pair<string, string>("Lifecycle", *request->lifecycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->localityLBConf)) {
    body->insert(pair<string, string>("LocalityLBConf", *request->localityLBConf));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->localityLoadBalancing)) {
    body->insert(pair<string, bool>("LocalityLoadBalancing", *request->localityLoadBalancing));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->MSEEnabled)) {
    body->insert(pair<string, bool>("MSEEnabled", *request->MSEEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->multiBufferEnabled)) {
    body->insert(pair<string, bool>("MultiBufferEnabled", *request->multiBufferEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->multiBufferPollDelay)) {
    body->insert(pair<string, string>("MultiBufferPollDelay", *request->multiBufferPollDelay));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->mysqlFilterEnabled)) {
    body->insert(pair<string, bool>("MysqlFilterEnabled", *request->mysqlFilterEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OPALimitCPU)) {
    body->insert(pair<string, string>("OPALimitCPU", *request->OPALimitCPU));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OPALimitMemory)) {
    body->insert(pair<string, string>("OPALimitMemory", *request->OPALimitMemory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OPALogLevel)) {
    body->insert(pair<string, string>("OPALogLevel", *request->OPALogLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OPARequestCPU)) {
    body->insert(pair<string, string>("OPARequestCPU", *request->OPARequestCPU));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OPARequestMemory)) {
    body->insert(pair<string, string>("OPARequestMemory", *request->OPARequestMemory));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->opaEnabled)) {
    body->insert(pair<string, bool>("OpaEnabled", *request->opaEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->openAgentPolicy)) {
    body->insert(pair<string, bool>("OpenAgentPolicy", *request->openAgentPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outboundTrafficPolicy)) {
    body->insert(pair<string, string>("OutboundTrafficPolicy", *request->outboundTrafficPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prometheusUrl)) {
    body->insert(pair<string, string>("PrometheusUrl", *request->prometheusUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyInitCPUResourceLimit)) {
    body->insert(pair<string, string>("ProxyInitCPUResourceLimit", *request->proxyInitCPUResourceLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyInitCPUResourceRequest)) {
    body->insert(pair<string, string>("ProxyInitCPUResourceRequest", *request->proxyInitCPUResourceRequest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyInitMemoryResourceLimit)) {
    body->insert(pair<string, string>("ProxyInitMemoryResourceLimit", *request->proxyInitMemoryResourceLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyInitMemoryResourceRequest)) {
    body->insert(pair<string, string>("ProxyInitMemoryResourceRequest", *request->proxyInitMemoryResourceRequest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyLimitCPU)) {
    body->insert(pair<string, string>("ProxyLimitCPU", *request->proxyLimitCPU));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyLimitMemory)) {
    body->insert(pair<string, string>("ProxyLimitMemory", *request->proxyLimitMemory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyRequestCPU)) {
    body->insert(pair<string, string>("ProxyRequestCPU", *request->proxyRequestCPU));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyRequestMemory)) {
    body->insert(pair<string, string>("ProxyRequestMemory", *request->proxyRequestMemory));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->redisFilterEnabled)) {
    body->insert(pair<string, bool>("RedisFilterEnabled", *request->redisFilterEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sidecarInjectorLimitCPU)) {
    body->insert(pair<string, string>("SidecarInjectorLimitCPU", *request->sidecarInjectorLimitCPU));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sidecarInjectorLimitMemory)) {
    body->insert(pair<string, string>("SidecarInjectorLimitMemory", *request->sidecarInjectorLimitMemory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sidecarInjectorRequestCPU)) {
    body->insert(pair<string, string>("SidecarInjectorRequestCPU", *request->sidecarInjectorRequestCPU));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sidecarInjectorRequestMemory)) {
    body->insert(pair<string, string>("SidecarInjectorRequestMemory", *request->sidecarInjectorRequestMemory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sidecarInjectorWebhookAsYaml)) {
    body->insert(pair<string, string>("SidecarInjectorWebhookAsYaml", *request->sidecarInjectorWebhookAsYaml));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->telemetry)) {
    body->insert(pair<string, bool>("Telemetry", *request->telemetry));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->terminationDrainDuration)) {
    body->insert(pair<string, string>("TerminationDrainDuration", *request->terminationDrainDuration));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->thriftFilterEnabled)) {
    body->insert(pair<string, bool>("ThriftFilterEnabled", *request->thriftFilterEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->traceSampling)) {
    body->insert(pair<string, double>("TraceSampling", *request->traceSampling));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->tracing)) {
    body->insert(pair<string, bool>("Tracing", *request->tracing));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->webAssemblyFilterEnabled)) {
    body->insert(pair<string, bool>("WebAssemblyFilterEnabled", *request->webAssemblyFilterEnabled));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMeshFeature"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMeshFeatureResponse(callApi(params, req, runtime));
}

UpdateMeshFeatureResponse Alibabacloud_Servicemesh20200111::Client::updateMeshFeature(shared_ptr<UpdateMeshFeatureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMeshFeatureWithOptions(request, runtime);
}

UpdateNamespaceScopeSidecarConfigResponse Alibabacloud_Servicemesh20200111::Client::updateNamespaceScopeSidecarConfigWithOptions(shared_ptr<UpdateNamespaceScopeSidecarConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeIPRanges)) {
    body->insert(pair<string, string>("ExcludeIPRanges", *request->excludeIPRanges));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeInboundPorts)) {
    body->insert(pair<string, string>("ExcludeInboundPorts", *request->excludeInboundPorts));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeOutboundPorts)) {
    body->insert(pair<string, string>("ExcludeOutboundPorts", *request->excludeOutboundPorts));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->includeIPRanges)) {
    body->insert(pair<string, string>("IncludeIPRanges", *request->includeIPRanges));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->includeInboundPorts)) {
    body->insert(pair<string, string>("IncludeInboundPorts", *request->includeInboundPorts));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->includeOutboundPorts)) {
    body->insert(pair<string, string>("IncludeOutboundPorts", *request->includeOutboundPorts));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->istioDNSProxyEnabled)) {
    body->insert(pair<string, bool>("IstioDNSProxyEnabled", *request->istioDNSProxyEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lifecycle)) {
    body->insert(pair<string, string>("Lifecycle", *request->lifecycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    body->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyInitCPUResourceLimit)) {
    body->insert(pair<string, string>("ProxyInitCPUResourceLimit", *request->proxyInitCPUResourceLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyInitCPUResourceRequest)) {
    body->insert(pair<string, string>("ProxyInitCPUResourceRequest", *request->proxyInitCPUResourceRequest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyInitMemoryResourceLimit)) {
    body->insert(pair<string, string>("ProxyInitMemoryResourceLimit", *request->proxyInitMemoryResourceLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyInitMemoryResourceRequest)) {
    body->insert(pair<string, string>("ProxyInitMemoryResourceRequest", *request->proxyInitMemoryResourceRequest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sidecarProxyCPUResourceLimit)) {
    body->insert(pair<string, string>("SidecarProxyCPUResourceLimit", *request->sidecarProxyCPUResourceLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sidecarProxyCPUResourceRequest)) {
    body->insert(pair<string, string>("SidecarProxyCPUResourceRequest", *request->sidecarProxyCPUResourceRequest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sidecarProxyMemoryResourceLimit)) {
    body->insert(pair<string, string>("SidecarProxyMemoryResourceLimit", *request->sidecarProxyMemoryResourceLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sidecarProxyMemoryResourceRequest)) {
    body->insert(pair<string, string>("SidecarProxyMemoryResourceRequest", *request->sidecarProxyMemoryResourceRequest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->terminationDrainDuration)) {
    body->insert(pair<string, string>("TerminationDrainDuration", *request->terminationDrainDuration));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateNamespaceScopeSidecarConfig"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateNamespaceScopeSidecarConfigResponse(callApi(params, req, runtime));
}

UpdateNamespaceScopeSidecarConfigResponse Alibabacloud_Servicemesh20200111::Client::updateNamespaceScopeSidecarConfig(shared_ptr<UpdateNamespaceScopeSidecarConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateNamespaceScopeSidecarConfigWithOptions(request, runtime);
}

UpgradeMeshVersionResponse Alibabacloud_Servicemesh20200111::Client::upgradeMeshVersionWithOptions(shared_ptr<UpgradeMeshVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    query->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeMeshVersion"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpgradeMeshVersionResponse(callApi(params, req, runtime));
}

UpgradeMeshVersionResponse Alibabacloud_Servicemesh20200111::Client::upgradeMeshVersion(shared_ptr<UpgradeMeshVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeMeshVersionWithOptions(request, runtime);
}

