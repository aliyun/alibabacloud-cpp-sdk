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
  _signatureAlgorithm = make_shared<string>("v2");
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

CreateGatewaySecretResponse Alibabacloud_Servicemesh20200111::Client::createGatewaySecretWithOptions(shared_ptr<CreateGatewaySecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cert)) {
    body->insert(pair<string, string>("Cert", *request->cert));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->istioGatewayName)) {
    body->insert(pair<string, string>("IstioGatewayName", *request->istioGatewayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    body->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretName)) {
    body->insert(pair<string, string>("SecretName", *request->secretName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGatewaySecret"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGatewaySecretResponse(callApi(params, req, runtime));
}

CreateGatewaySecretResponse Alibabacloud_Servicemesh20200111::Client::createGatewaySecret(shared_ptr<CreateGatewaySecretRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGatewaySecretWithOptions(request, runtime);
}

CreateIstioGatewayDomainsResponse Alibabacloud_Servicemesh20200111::Client::createIstioGatewayDomainsWithOptions(shared_ptr<CreateIstioGatewayDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->credential)) {
    body->insert(pair<string, string>("Credential", *request->credential));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->forceHttps)) {
    body->insert(pair<string, bool>("ForceHttps", *request->forceHttps));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hosts)) {
    body->insert(pair<string, string>("Hosts", *request->hosts));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->istioGatewayName)) {
    body->insert(pair<string, string>("IstioGatewayName", *request->istioGatewayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->limit)) {
    body->insert(pair<string, string>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    body->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->number)) {
    body->insert(pair<string, long>("Number", *request->number));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->portName)) {
    body->insert(pair<string, string>("PortName", *request->portName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocol)) {
    body->insert(pair<string, string>("Protocol", *request->protocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateIstioGatewayDomains"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateIstioGatewayDomainsResponse(callApi(params, req, runtime));
}

CreateIstioGatewayDomainsResponse Alibabacloud_Servicemesh20200111::Client::createIstioGatewayDomains(shared_ptr<CreateIstioGatewayDomainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createIstioGatewayDomainsWithOptions(request, runtime);
}

CreateIstioGatewayRoutesResponse Alibabacloud_Servicemesh20200111::Client::createIstioGatewayRoutesWithOptions(shared_ptr<CreateIstioGatewayRoutesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateIstioGatewayRoutesShrinkRequest> request = make_shared<CreateIstioGatewayRoutesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateIstioGatewayRoutesRequestGatewayRoute>(tmpReq->gatewayRoute)) {
    request->gatewayRouteShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->gatewayRoute->toMap()), make_shared<string>("GatewayRoute"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayRouteShrink)) {
    body->insert(pair<string, string>("GatewayRoute", *request->gatewayRouteShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->istioGatewayName)) {
    body->insert(pair<string, string>("IstioGatewayName", *request->istioGatewayName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    body->insert(pair<string, long>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateIstioGatewayRoutes"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateIstioGatewayRoutesResponse(callApi(params, req, runtime));
}

CreateIstioGatewayRoutesResponse Alibabacloud_Servicemesh20200111::Client::createIstioGatewayRoutes(shared_ptr<CreateIstioGatewayRoutesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createIstioGatewayRoutesWithOptions(request, runtime);
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
  if (!Darabonba_Util::Client::isUnset<string>(request->apiServerLoadBalancerSpec)) {
    body->insert(pair<string, string>("ApiServerLoadBalancerSpec", *request->apiServerLoadBalancerSpec));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->apiServerPublicEip)) {
    body->insert(pair<string, bool>("ApiServerPublicEip", *request->apiServerPublicEip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->auditProject)) {
    body->insert(pair<string, string>("AuditProject", *request->auditProject));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRenew)) {
    body->insert(pair<string, bool>("AutoRenew", *request->autoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->autoRenewPeriod)) {
    body->insert(pair<string, long>("AutoRenewPeriod", *request->autoRenewPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->CRAggregationEnabled)) {
    body->insert(pair<string, bool>("CRAggregationEnabled", *request->CRAggregationEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    body->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterSpec)) {
    body->insert(pair<string, string>("ClusterSpec", *request->clusterSpec));
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
  if (!Darabonba_Util::Client::isUnset<bool>(request->globalRateLimitEnabled)) {
    body->insert(pair<string, bool>("GlobalRateLimitEnabled", *request->globalRateLimitEnabled));
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
  if (!Darabonba_Util::Client::isUnset<bool>(request->multiBufferEnabled)) {
    body->insert(pair<string, bool>("MultiBufferEnabled", *request->multiBufferEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->multiBufferPollDelay)) {
    body->insert(pair<string, string>("MultiBufferPollDelay", *request->multiBufferPollDelay));
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
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    body->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pilotLoadBalancerSpec)) {
    body->insert(pair<string, string>("PilotLoadBalancerSpec", *request->pilotLoadBalancerSpec));
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

CreateSwimLaneResponse Alibabacloud_Servicemesh20200111::Client::createSwimLaneWithOptions(shared_ptr<CreateSwimLaneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    body->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelSelectorKey)) {
    body->insert(pair<string, string>("LabelSelectorKey", *request->labelSelectorKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelSelectorValue)) {
    body->insert(pair<string, string>("LabelSelectorValue", *request->labelSelectorValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->servicesList)) {
    body->insert(pair<string, string>("ServicesList", *request->servicesList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->swimLaneName)) {
    body->insert(pair<string, string>("SwimLaneName", *request->swimLaneName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSwimLane"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSwimLaneResponse(callApi(params, req, runtime));
}

CreateSwimLaneResponse Alibabacloud_Servicemesh20200111::Client::createSwimLane(shared_ptr<CreateSwimLaneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSwimLaneWithOptions(request, runtime);
}

CreateSwimLaneGroupResponse Alibabacloud_Servicemesh20200111::Client::createSwimLaneGroupWithOptions(shared_ptr<CreateSwimLaneGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    body->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ingressGatewayName)) {
    body->insert(pair<string, string>("IngressGatewayName", *request->ingressGatewayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ingressType)) {
    body->insert(pair<string, string>("IngressType", *request->ingressType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->servicesList)) {
    body->insert(pair<string, string>("ServicesList", *request->servicesList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSwimLaneGroup"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSwimLaneGroupResponse(callApi(params, req, runtime));
}

CreateSwimLaneGroupResponse Alibabacloud_Servicemesh20200111::Client::createSwimLaneGroup(shared_ptr<CreateSwimLaneGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSwimLaneGroupWithOptions(request, runtime);
}

DeleteGatewayRouteResponse Alibabacloud_Servicemesh20200111::Client::deleteGatewayRouteWithOptions(shared_ptr<DeleteGatewayRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->istioGatewayName)) {
    body->insert(pair<string, string>("IstioGatewayName", *request->istioGatewayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeName)) {
    body->insert(pair<string, string>("RouteName", *request->routeName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGatewayRoute"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGatewayRouteResponse(callApi(params, req, runtime));
}

DeleteGatewayRouteResponse Alibabacloud_Servicemesh20200111::Client::deleteGatewayRoute(shared_ptr<DeleteGatewayRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGatewayRouteWithOptions(request, runtime);
}

DeleteGatewaySecretResponse Alibabacloud_Servicemesh20200111::Client::deleteGatewaySecretWithOptions(shared_ptr<DeleteGatewaySecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->istioGatewayName)) {
    body->insert(pair<string, string>("IstioGatewayName", *request->istioGatewayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretName)) {
    body->insert(pair<string, string>("SecretName", *request->secretName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGatewaySecret"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGatewaySecretResponse(callApi(params, req, runtime));
}

DeleteGatewaySecretResponse Alibabacloud_Servicemesh20200111::Client::deleteGatewaySecret(shared_ptr<DeleteGatewaySecretRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGatewaySecretWithOptions(request, runtime);
}

DeleteIstioGatewayDomainsResponse Alibabacloud_Servicemesh20200111::Client::deleteIstioGatewayDomainsWithOptions(shared_ptr<DeleteIstioGatewayDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hosts)) {
    body->insert(pair<string, string>("Hosts", *request->hosts));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->istioGatewayName)) {
    body->insert(pair<string, string>("IstioGatewayName", *request->istioGatewayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->limit)) {
    body->insert(pair<string, string>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    body->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->portName)) {
    body->insert(pair<string, string>("PortName", *request->portName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteIstioGatewayDomains"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteIstioGatewayDomainsResponse(callApi(params, req, runtime));
}

DeleteIstioGatewayDomainsResponse Alibabacloud_Servicemesh20200111::Client::deleteIstioGatewayDomains(shared_ptr<DeleteIstioGatewayDomainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteIstioGatewayDomainsWithOptions(request, runtime);
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

DeleteSwimLaneResponse Alibabacloud_Servicemesh20200111::Client::deleteSwimLaneWithOptions(shared_ptr<DeleteSwimLaneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    body->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->swimLaneName)) {
    body->insert(pair<string, string>("SwimLaneName", *request->swimLaneName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSwimLane"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSwimLaneResponse(callApi(params, req, runtime));
}

DeleteSwimLaneResponse Alibabacloud_Servicemesh20200111::Client::deleteSwimLane(shared_ptr<DeleteSwimLaneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSwimLaneWithOptions(request, runtime);
}

DeleteSwimLaneGroupResponse Alibabacloud_Servicemesh20200111::Client::deleteSwimLaneGroupWithOptions(shared_ptr<DeleteSwimLaneGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    body->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSwimLaneGroup"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSwimLaneGroupResponse(callApi(params, req, runtime));
}

DeleteSwimLaneGroupResponse Alibabacloud_Servicemesh20200111::Client::deleteSwimLaneGroup(shared_ptr<DeleteSwimLaneGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSwimLaneGroupWithOptions(request, runtime);
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

DescribeAhasProResponse Alibabacloud_Servicemesh20200111::Client::describeAhasProWithOptions(shared_ptr<DescribeAhasProRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAhasPro"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAhasProResponse(callApi(params, req, runtime));
}

DescribeAhasProResponse Alibabacloud_Servicemesh20200111::Client::describeAhasPro(shared_ptr<DescribeAhasProRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAhasProWithOptions(request, runtime);
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

DescribeEipResourcesResponse Alibabacloud_Servicemesh20200111::Client::describeEipResourcesWithOptions(shared_ptr<DescribeEipResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    body->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEipResources"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEipResourcesResponse(callApi(params, req, runtime));
}

DescribeEipResourcesResponse Alibabacloud_Servicemesh20200111::Client::describeEipResources(shared_ptr<DescribeEipResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEipResourcesWithOptions(request, runtime);
}

DescribeGatewaySecretDetailsResponse Alibabacloud_Servicemesh20200111::Client::describeGatewaySecretDetailsWithOptions(shared_ptr<DescribeGatewaySecretDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("DescribeGatewaySecretDetails"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGatewaySecretDetailsResponse(callApi(params, req, runtime));
}

DescribeGatewaySecretDetailsResponse Alibabacloud_Servicemesh20200111::Client::describeGatewaySecretDetails(shared_ptr<DescribeGatewaySecretDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGatewaySecretDetailsWithOptions(request, runtime);
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
  if (!Darabonba_Util::Client::isUnset<bool>(request->showNsLabels)) {
    body->insert(pair<string, bool>("ShowNsLabels", *request->showNsLabels));
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

DescribeIstioGatewayDomainsResponse Alibabacloud_Servicemesh20200111::Client::describeIstioGatewayDomainsWithOptions(shared_ptr<DescribeIstioGatewayDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->istioGatewayName)) {
    body->insert(pair<string, string>("IstioGatewayName", *request->istioGatewayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->limit)) {
    body->insert(pair<string, string>("Limit", *request->limit));
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
    {"action", boost::any(string("DescribeIstioGatewayDomains"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeIstioGatewayDomainsResponse(callApi(params, req, runtime));
}

DescribeIstioGatewayDomainsResponse Alibabacloud_Servicemesh20200111::Client::describeIstioGatewayDomains(shared_ptr<DescribeIstioGatewayDomainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeIstioGatewayDomainsWithOptions(request, runtime);
}

DescribeIstioGatewayRouteDetailResponse Alibabacloud_Servicemesh20200111::Client::describeIstioGatewayRouteDetailWithOptions(shared_ptr<DescribeIstioGatewayRouteDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->istioGatewayName)) {
    body->insert(pair<string, string>("IstioGatewayName", *request->istioGatewayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeName)) {
    body->insert(pair<string, string>("RouteName", *request->routeName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeIstioGatewayRouteDetail"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeIstioGatewayRouteDetailResponse(callApi(params, req, runtime));
}

DescribeIstioGatewayRouteDetailResponse Alibabacloud_Servicemesh20200111::Client::describeIstioGatewayRouteDetail(shared_ptr<DescribeIstioGatewayRouteDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeIstioGatewayRouteDetailWithOptions(request, runtime);
}

DescribeIstioGatewayRoutesResponse Alibabacloud_Servicemesh20200111::Client::describeIstioGatewayRoutesWithOptions(shared_ptr<DescribeIstioGatewayRoutesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("DescribeIstioGatewayRoutes"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeIstioGatewayRoutesResponse(callApi(params, req, runtime));
}

DescribeIstioGatewayRoutesResponse Alibabacloud_Servicemesh20200111::Client::describeIstioGatewayRoutes(shared_ptr<DescribeIstioGatewayRoutesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeIstioGatewayRoutesWithOptions(request, runtime);
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

DescribeReusableSlbResponse Alibabacloud_Servicemesh20200111::Client::describeReusableSlbWithOptions(shared_ptr<DescribeReusableSlbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->k8sClusterId)) {
    body->insert(pair<string, string>("K8sClusterId", *request->k8sClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkType)) {
    body->insert(pair<string, string>("NetworkType", *request->networkType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeReusableSlb"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeReusableSlbResponse(callApi(params, req, runtime));
}

DescribeReusableSlbResponse Alibabacloud_Servicemesh20200111::Client::describeReusableSlb(shared_ptr<DescribeReusableSlbRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeReusableSlbWithOptions(request, runtime);
}

DescribeServiceMeshAdditionalStatusResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshAdditionalStatusWithOptions(shared_ptr<DescribeServiceMeshAdditionalStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkMode)) {
    body->insert(pair<string, string>("CheckMode", *request->checkMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServiceMeshAdditionalStatus"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeServiceMeshAdditionalStatusResponse(callApi(params, req, runtime));
}

DescribeServiceMeshAdditionalStatusResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshAdditionalStatus(shared_ptr<DescribeServiceMeshAdditionalStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServiceMeshAdditionalStatusWithOptions(request, runtime);
}

DescribeServiceMeshClustersResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshClustersWithOptions(shared_ptr<DescribeServiceMeshClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    query->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    body->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->offset)) {
    body->insert(pair<string, long>("Offset", *request->offset));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServiceMeshClusters"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeServiceMeshClustersResponse(callApi(params, req, runtime));
}

DescribeServiceMeshClustersResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshClusters(shared_ptr<DescribeServiceMeshClustersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServiceMeshClustersWithOptions(request, runtime);
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

DescribeServiceMeshLogsResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshLogsWithOptions(shared_ptr<DescribeServiceMeshLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServiceMeshLogs"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeServiceMeshLogsResponse(callApi(params, req, runtime));
}

DescribeServiceMeshLogsResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshLogs(shared_ptr<DescribeServiceMeshLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServiceMeshLogsWithOptions(request, runtime);
}

DescribeServiceMeshProxyStatusResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshProxyStatusWithOptions(shared_ptr<DescribeServiceMeshProxyStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServiceMeshProxyStatus"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeServiceMeshProxyStatusResponse(callApi(params, req, runtime));
}

DescribeServiceMeshProxyStatusResponse Alibabacloud_Servicemesh20200111::Client::describeServiceMeshProxyStatus(shared_ptr<DescribeServiceMeshProxyStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServiceMeshProxyStatusWithOptions(request, runtime);
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

DescribeUserPermissionsResponse Alibabacloud_Servicemesh20200111::Client::describeUserPermissionsWithOptions(shared_ptr<DescribeUserPermissionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->subAccountUserId)) {
    body->insert(pair<string, string>("SubAccountUserId", *request->subAccountUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUserPermissions"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUserPermissionsResponse(callApi(params, req, runtime));
}

DescribeUserPermissionsResponse Alibabacloud_Servicemesh20200111::Client::describeUserPermissions(shared_ptr<DescribeUserPermissionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserPermissionsWithOptions(request, runtime);
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

GetDeploymentBySelectorResponse Alibabacloud_Servicemesh20200111::Client::getDeploymentBySelectorWithOptions(shared_ptr<GetDeploymentBySelectorRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetDeploymentBySelectorShrinkRequest> request = make_shared<GetDeploymentBySelectorShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->labelSelector)) {
    request->labelSelectorShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->labelSelector, make_shared<string>("LabelSelector"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->guestCluster)) {
    body->insert(pair<string, string>("GuestCluster", *request->guestCluster));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelSelectorShrink)) {
    body->insert(pair<string, string>("LabelSelector", *request->labelSelectorShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    body->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mark)) {
    body->insert(pair<string, string>("Mark", *request->mark));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nameSpace_)) {
    body->insert(pair<string, string>("NameSpace_", *request->nameSpace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeploymentBySelector"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeploymentBySelectorResponse(callApi(params, req, runtime));
}

GetDeploymentBySelectorResponse Alibabacloud_Servicemesh20200111::Client::getDeploymentBySelector(shared_ptr<GetDeploymentBySelectorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeploymentBySelectorWithOptions(request, runtime);
}

GetGrafanaDashboardUrlResponse Alibabacloud_Servicemesh20200111::Client::getGrafanaDashboardUrlWithOptions(shared_ptr<GetGrafanaDashboardUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->k8sClusterId)) {
    body->insert(pair<string, string>("K8sClusterId", *request->k8sClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGrafanaDashboardUrl"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGrafanaDashboardUrlResponse(callApi(params, req, runtime));
}

GetGrafanaDashboardUrlResponse Alibabacloud_Servicemesh20200111::Client::getGrafanaDashboardUrl(shared_ptr<GetGrafanaDashboardUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGrafanaDashboardUrlWithOptions(request, runtime);
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

GetSwimLaneDetailResponse Alibabacloud_Servicemesh20200111::Client::getSwimLaneDetailWithOptions(shared_ptr<GetSwimLaneDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    body->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->swimLaneName)) {
    body->insert(pair<string, string>("SwimLaneName", *request->swimLaneName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSwimLaneDetail"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSwimLaneDetailResponse(callApi(params, req, runtime));
}

GetSwimLaneDetailResponse Alibabacloud_Servicemesh20200111::Client::getSwimLaneDetail(shared_ptr<GetSwimLaneDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSwimLaneDetailWithOptions(request, runtime);
}

GetSwimLaneGroupListResponse Alibabacloud_Servicemesh20200111::Client::getSwimLaneGroupListWithOptions(shared_ptr<GetSwimLaneGroupListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSwimLaneGroupList"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSwimLaneGroupListResponse(callApi(params, req, runtime));
}

GetSwimLaneGroupListResponse Alibabacloud_Servicemesh20200111::Client::getSwimLaneGroupList(shared_ptr<GetSwimLaneGroupListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSwimLaneGroupListWithOptions(request, runtime);
}

GetSwimLaneListResponse Alibabacloud_Servicemesh20200111::Client::getSwimLaneListWithOptions(shared_ptr<GetSwimLaneListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    body->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSwimLaneList"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSwimLaneListResponse(callApi(params, req, runtime));
}

GetSwimLaneListResponse Alibabacloud_Servicemesh20200111::Client::getSwimLaneList(shared_ptr<GetSwimLaneListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSwimLaneListWithOptions(request, runtime);
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

GrantUserPermissionsResponse Alibabacloud_Servicemesh20200111::Client::grantUserPermissionsWithOptions(shared_ptr<GrantUserPermissionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->permissions)) {
    body->insert(pair<string, string>("Permissions", *request->permissions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subAccountUserId)) {
    body->insert(pair<string, string>("SubAccountUserId", *request->subAccountUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GrantUserPermissions"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GrantUserPermissionsResponse(callApi(params, req, runtime));
}

GrantUserPermissionsResponse Alibabacloud_Servicemesh20200111::Client::grantUserPermissions(shared_ptr<GrantUserPermissionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return grantUserPermissionsWithOptions(request, runtime);
}

ModifyApiServerEipResourceResponse Alibabacloud_Servicemesh20200111::Client::modifyApiServerEipResourceWithOptions(shared_ptr<ModifyApiServerEipResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiServerEipId)) {
    body->insert(pair<string, string>("ApiServerEipId", *request->apiServerEipId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operation)) {
    body->insert(pair<string, string>("Operation", *request->operation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyApiServerEipResource"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyApiServerEipResourceResponse(callApi(params, req, runtime));
}

ModifyApiServerEipResourceResponse Alibabacloud_Servicemesh20200111::Client::modifyApiServerEipResource(shared_ptr<ModifyApiServerEipResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyApiServerEipResourceWithOptions(request, runtime);
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

UpdateASMNamespaceFromGuestClusterResponse Alibabacloud_Servicemesh20200111::Client::updateASMNamespaceFromGuestClusterWithOptions(shared_ptr<UpdateASMNamespaceFromGuestClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->k8sClusterId)) {
    body->insert(pair<string, string>("K8sClusterId", *request->k8sClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateASMNamespaceFromGuestCluster"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateASMNamespaceFromGuestClusterResponse(callApi(params, req, runtime));
}

UpdateASMNamespaceFromGuestClusterResponse Alibabacloud_Servicemesh20200111::Client::updateASMNamespaceFromGuestCluster(shared_ptr<UpdateASMNamespaceFromGuestClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateASMNamespaceFromGuestClusterWithOptions(request, runtime);
}

UpdateIstioGatewayRoutesResponse Alibabacloud_Servicemesh20200111::Client::updateIstioGatewayRoutesWithOptions(shared_ptr<UpdateIstioGatewayRoutesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateIstioGatewayRoutesShrinkRequest> request = make_shared<UpdateIstioGatewayRoutesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateIstioGatewayRoutesRequestGatewayRoute>(tmpReq->gatewayRoute)) {
    request->gatewayRouteShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->gatewayRoute->toMap()), make_shared<string>("GatewayRoute"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayRouteShrink)) {
    body->insert(pair<string, string>("GatewayRoute", *request->gatewayRouteShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->istioGatewayName)) {
    body->insert(pair<string, string>("IstioGatewayName", *request->istioGatewayName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    body->insert(pair<string, long>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateIstioGatewayRoutes"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateIstioGatewayRoutesResponse(callApi(params, req, runtime));
}

UpdateIstioGatewayRoutesResponse Alibabacloud_Servicemesh20200111::Client::updateIstioGatewayRoutes(shared_ptr<UpdateIstioGatewayRoutesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateIstioGatewayRoutesWithOptions(request, runtime);
}

UpdateIstioRouteAdditionalStatusResponse Alibabacloud_Servicemesh20200111::Client::updateIstioRouteAdditionalStatusWithOptions(shared_ptr<UpdateIstioRouteAdditionalStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    query->insert(pair<string, long>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeName)) {
    query->insert(pair<string, string>("RouteName", *request->routeName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->istioGatewayName)) {
    body->insert(pair<string, string>("IstioGatewayName", *request->istioGatewayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateIstioRouteAdditionalStatus"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateIstioRouteAdditionalStatusResponse(callApi(params, req, runtime));
}

UpdateIstioRouteAdditionalStatusResponse Alibabacloud_Servicemesh20200111::Client::updateIstioRouteAdditionalStatus(shared_ptr<UpdateIstioRouteAdditionalStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateIstioRouteAdditionalStatusWithOptions(request, runtime);
}

UpdateMeshCRAggregationResponse Alibabacloud_Servicemesh20200111::Client::updateMeshCRAggregationWithOptions(shared_ptr<UpdateMeshCRAggregationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->CPULimit)) {
    body->insert(pair<string, string>("CPULimit", *request->CPULimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->CPURequirement)) {
    body->insert(pair<string, string>("CPURequirement", *request->CPURequirement));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enabled)) {
    body->insert(pair<string, bool>("Enabled", *request->enabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memoryLimit)) {
    body->insert(pair<string, string>("MemoryLimit", *request->memoryLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memoryRequirement)) {
    body->insert(pair<string, string>("MemoryRequirement", *request->memoryRequirement));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->usePublicApiServer)) {
    body->insert(pair<string, bool>("UsePublicApiServer", *request->usePublicApiServer));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMeshCRAggregation"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMeshCRAggregationResponse(callApi(params, req, runtime));
}

UpdateMeshCRAggregationResponse Alibabacloud_Servicemesh20200111::Client::updateMeshCRAggregation(shared_ptr<UpdateMeshCRAggregationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMeshCRAggregationWithOptions(request, runtime);
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
  if (!Darabonba_Util::Client::isUnset<long>(request->accessLogGatewayLifecycle)) {
    body->insert(pair<string, long>("AccessLogGatewayLifecycle", *request->accessLogGatewayLifecycle));
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
  if (!Darabonba_Util::Client::isUnset<long>(request->accessLogSidecarLifecycle)) {
    body->insert(pair<string, long>("AccessLogSidecarLifecycle", *request->accessLogSidecarLifecycle));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterSpec)) {
    body->insert(pair<string, string>("ClusterSpec", *request->clusterSpec));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->cniEnabled)) {
    body->insert(pair<string, bool>("CniEnabled", *request->cniEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cniExcludeNamespaces)) {
    body->insert(pair<string, string>("CniExcludeNamespaces", *request->cniExcludeNamespaces));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->concurrency)) {
    body->insert(pair<string, long>("Concurrency", *request->concurrency));
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
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableAutoDiagnosis)) {
    body->insert(pair<string, bool>("EnableAutoDiagnosis", *request->enableAutoDiagnosis));
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
  if (!Darabonba_Util::Client::isUnset<bool>(request->globalRateLimitEnabled)) {
    body->insert(pair<string, bool>("GlobalRateLimitEnabled", *request->globalRateLimitEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->holdApplicationUntilProxyStarts)) {
    body->insert(pair<string, bool>("HoldApplicationUntilProxyStarts", *request->holdApplicationUntilProxyStarts));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->includeOutboundPorts)) {
    body->insert(pair<string, string>("IncludeOutboundPorts", *request->includeOutboundPorts));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->integrateKiali)) {
    body->insert(pair<string, bool>("IntegrateKiali", *request->integrateKiali));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->logLevel)) {
    body->insert(pair<string, string>("LogLevel", *request->logLevel));
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
  if (!Darabonba_Util::Client::isUnset<bool>(request->NFDEnabled)) {
    body->insert(pair<string, bool>("NFDEnabled", *request->NFDEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->NFDLabelPruned)) {
    body->insert(pair<string, bool>("NFDLabelPruned", *request->NFDLabelPruned));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OPAInjectorCPULimit)) {
    body->insert(pair<string, string>("OPAInjectorCPULimit", *request->OPAInjectorCPULimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OPAInjectorCPURequirement)) {
    body->insert(pair<string, string>("OPAInjectorCPURequirement", *request->OPAInjectorCPURequirement));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OPAInjectorMemoryLimit)) {
    body->insert(pair<string, string>("OPAInjectorMemoryLimit", *request->OPAInjectorMemoryLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OPAInjectorMemoryRequirement)) {
    body->insert(pair<string, string>("OPAInjectorMemoryRequirement", *request->OPAInjectorMemoryRequirement));
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
  if (!Darabonba_Util::Client::isUnset<bool>(request->OPAScopeInjected)) {
    body->insert(pair<string, bool>("OPAScopeInjected", *request->OPAScopeInjected));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyStatsMatcher)) {
    body->insert(pair<string, string>("ProxyStatsMatcher", *request->proxyStatsMatcher));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->traceCustomTags)) {
    body->insert(pair<string, string>("TraceCustomTags", *request->traceCustomTags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->traceMaxPathTagLength)) {
    body->insert(pair<string, string>("TraceMaxPathTagLength", *request->traceMaxPathTagLength));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->traceSampling)) {
    body->insert(pair<string, double>("TraceSampling", *request->traceSampling));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->tracing)) {
    body->insert(pair<string, bool>("Tracing", *request->tracing));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tracingOnExtZipkinLimitCPU)) {
    body->insert(pair<string, string>("TracingOnExtZipkinLimitCPU", *request->tracingOnExtZipkinLimitCPU));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tracingOnExtZipkinLimitMemory)) {
    body->insert(pair<string, string>("TracingOnExtZipkinLimitMemory", *request->tracingOnExtZipkinLimitMemory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tracingOnExtZipkinRequestCPU)) {
    body->insert(pair<string, string>("TracingOnExtZipkinRequestCPU", *request->tracingOnExtZipkinRequestCPU));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tracingOnExtZipkinRequestMemory)) {
    body->insert(pair<string, string>("TracingOnExtZipkinRequestMemory", *request->tracingOnExtZipkinRequestMemory));
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
  if (!Darabonba_Util::Client::isUnset<long>(request->concurrency)) {
    body->insert(pair<string, long>("Concurrency", *request->concurrency));
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
  if (!Darabonba_Util::Client::isUnset<bool>(request->holdApplicationUntilProxyStarts)) {
    body->insert(pair<string, bool>("HoldApplicationUntilProxyStarts", *request->holdApplicationUntilProxyStarts));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->logLevel)) {
    body->insert(pair<string, string>("LogLevel", *request->logLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    body->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->postStart)) {
    body->insert(pair<string, string>("PostStart", *request->postStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preStop)) {
    body->insert(pair<string, string>("PreStop", *request->preStop));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyStatsMatcher)) {
    body->insert(pair<string, string>("ProxyStatsMatcher", *request->proxyStatsMatcher));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->tracing)) {
    body->insert(pair<string, string>("Tracing", *request->tracing));
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

UpdateSwimLaneResponse Alibabacloud_Servicemesh20200111::Client::updateSwimLaneWithOptions(shared_ptr<UpdateSwimLaneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    body->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelSelectorKey)) {
    body->insert(pair<string, string>("LabelSelectorKey", *request->labelSelectorKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelSelectorValue)) {
    body->insert(pair<string, string>("LabelSelectorValue", *request->labelSelectorValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->servicesList)) {
    body->insert(pair<string, string>("ServicesList", *request->servicesList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->swimLaneName)) {
    body->insert(pair<string, string>("SwimLaneName", *request->swimLaneName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSwimLane"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSwimLaneResponse(callApi(params, req, runtime));
}

UpdateSwimLaneResponse Alibabacloud_Servicemesh20200111::Client::updateSwimLane(shared_ptr<UpdateSwimLaneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSwimLaneWithOptions(request, runtime);
}

UpdateSwimLaneGroupResponse Alibabacloud_Servicemesh20200111::Client::updateSwimLaneGroupWithOptions(shared_ptr<UpdateSwimLaneGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    body->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->servicesList)) {
    body->insert(pair<string, string>("ServicesList", *request->servicesList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSwimLaneGroup"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSwimLaneGroupResponse(callApi(params, req, runtime));
}

UpdateSwimLaneGroupResponse Alibabacloud_Servicemesh20200111::Client::updateSwimLaneGroup(shared_ptr<UpdateSwimLaneGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSwimLaneGroupWithOptions(request, runtime);
}

UpgradeMeshEditionPartiallyResponse Alibabacloud_Servicemesh20200111::Client::upgradeMeshEditionPartiallyWithOptions(shared_ptr<UpgradeMeshEditionPartiallyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->ASMGatewayContinue)) {
    body->insert(pair<string, bool>("ASMGatewayContinue", *request->ASMGatewayContinue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expectedVersion)) {
    body->insert(pair<string, string>("ExpectedVersion", *request->expectedVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMeshId)) {
    body->insert(pair<string, string>("ServiceMeshId", *request->serviceMeshId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->switchToPro)) {
    body->insert(pair<string, bool>("SwitchToPro", *request->switchToPro));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->upgradeGatewayRecords)) {
    body->insert(pair<string, string>("UpgradeGatewayRecords", *request->upgradeGatewayRecords));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeMeshEditionPartially"))},
    {"version", boost::any(string("2020-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpgradeMeshEditionPartiallyResponse(callApi(params, req, runtime));
}

UpgradeMeshEditionPartiallyResponse Alibabacloud_Servicemesh20200111::Client::upgradeMeshEditionPartially(shared_ptr<UpgradeMeshEditionPartiallyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeMeshEditionPartiallyWithOptions(request, runtime);
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

