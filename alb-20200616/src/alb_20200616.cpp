// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/alb_20200616.hpp>
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

using namespace Alibabacloud_Alb20200616;

Alibabacloud_Alb20200616::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("alb"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Alb20200616::Client::getEndpoint(shared_ptr<string> productId,
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

AddEntriesToAclResponse Alibabacloud_Alb20200616::Client::addEntriesToAclWithOptions(shared_ptr<AddEntriesToAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<AddEntriesToAclRequestAclEntries>>(request->aclEntries)) {
    query->insert(pair<string, vector<AddEntriesToAclRequestAclEntries>>("AclEntries", *request->aclEntries));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclId)) {
    query->insert(pair<string, string>("AclId", *request->aclId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddEntriesToAcl"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AddEntriesToAclResponse(callApi(params, req, runtime));
  }
  else {
    return AddEntriesToAclResponse(execute(params, req, runtime));
  }
}

AddEntriesToAclResponse Alibabacloud_Alb20200616::Client::addEntriesToAcl(shared_ptr<AddEntriesToAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addEntriesToAclWithOptions(request, runtime);
}

AddServersToServerGroupResponse Alibabacloud_Alb20200616::Client::addServersToServerGroupWithOptions(shared_ptr<AddServersToServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverGroupId)) {
    query->insert(pair<string, string>("ServerGroupId", *request->serverGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AddServersToServerGroupRequestServers>>(request->servers)) {
    query->insert(pair<string, vector<AddServersToServerGroupRequestServers>>("Servers", *request->servers));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddServersToServerGroup"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AddServersToServerGroupResponse(callApi(params, req, runtime));
  }
  else {
    return AddServersToServerGroupResponse(execute(params, req, runtime));
  }
}

AddServersToServerGroupResponse Alibabacloud_Alb20200616::Client::addServersToServerGroup(shared_ptr<AddServersToServerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addServersToServerGroupWithOptions(request, runtime);
}

ApplyHealthCheckTemplateToServerGroupResponse Alibabacloud_Alb20200616::Client::applyHealthCheckTemplateToServerGroupWithOptions(shared_ptr<ApplyHealthCheckTemplateToServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckTemplateId)) {
    query->insert(pair<string, string>("HealthCheckTemplateId", *request->healthCheckTemplateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverGroupId)) {
    query->insert(pair<string, string>("ServerGroupId", *request->serverGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyHealthCheckTemplateToServerGroup"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ApplyHealthCheckTemplateToServerGroupResponse(callApi(params, req, runtime));
  }
  else {
    return ApplyHealthCheckTemplateToServerGroupResponse(execute(params, req, runtime));
  }
}

ApplyHealthCheckTemplateToServerGroupResponse Alibabacloud_Alb20200616::Client::applyHealthCheckTemplateToServerGroup(shared_ptr<ApplyHealthCheckTemplateToServerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyHealthCheckTemplateToServerGroupWithOptions(request, runtime);
}

AssociateAclsWithListenerResponse Alibabacloud_Alb20200616::Client::associateAclsWithListenerWithOptions(shared_ptr<AssociateAclsWithListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->aclIds)) {
    query->insert(pair<string, vector<string>>("AclIds", *request->aclIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclType)) {
    query->insert(pair<string, string>("AclType", *request->aclType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssociateAclsWithListener"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AssociateAclsWithListenerResponse(callApi(params, req, runtime));
  }
  else {
    return AssociateAclsWithListenerResponse(execute(params, req, runtime));
  }
}

AssociateAclsWithListenerResponse Alibabacloud_Alb20200616::Client::associateAclsWithListener(shared_ptr<AssociateAclsWithListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateAclsWithListenerWithOptions(request, runtime);
}

AssociateAdditionalCertificatesWithListenerResponse Alibabacloud_Alb20200616::Client::associateAdditionalCertificatesWithListenerWithOptions(shared_ptr<AssociateAdditionalCertificatesWithListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<AssociateAdditionalCertificatesWithListenerRequestCertificates>>(request->certificates)) {
    query->insert(pair<string, vector<AssociateAdditionalCertificatesWithListenerRequestCertificates>>("Certificates", *request->certificates));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssociateAdditionalCertificatesWithListener"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AssociateAdditionalCertificatesWithListenerResponse(callApi(params, req, runtime));
  }
  else {
    return AssociateAdditionalCertificatesWithListenerResponse(execute(params, req, runtime));
  }
}

AssociateAdditionalCertificatesWithListenerResponse Alibabacloud_Alb20200616::Client::associateAdditionalCertificatesWithListener(shared_ptr<AssociateAdditionalCertificatesWithListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateAdditionalCertificatesWithListenerWithOptions(request, runtime);
}

AttachCommonBandwidthPackageToLoadBalancerResponse Alibabacloud_Alb20200616::Client::attachCommonBandwidthPackageToLoadBalancerWithOptions(shared_ptr<AttachCommonBandwidthPackageToLoadBalancerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bandwidthPackageId)) {
    query->insert(pair<string, string>("BandwidthPackageId", *request->bandwidthPackageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachCommonBandwidthPackageToLoadBalancer"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AttachCommonBandwidthPackageToLoadBalancerResponse(callApi(params, req, runtime));
  }
  else {
    return AttachCommonBandwidthPackageToLoadBalancerResponse(execute(params, req, runtime));
  }
}

AttachCommonBandwidthPackageToLoadBalancerResponse Alibabacloud_Alb20200616::Client::attachCommonBandwidthPackageToLoadBalancer(shared_ptr<AttachCommonBandwidthPackageToLoadBalancerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachCommonBandwidthPackageToLoadBalancerWithOptions(request, runtime);
}

CancelShiftLoadBalancerZonesResponse Alibabacloud_Alb20200616::Client::cancelShiftLoadBalancerZonesWithOptions(shared_ptr<CancelShiftLoadBalancerZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CancelShiftLoadBalancerZonesRequestZoneMappings>>(request->zoneMappings)) {
    query->insert(pair<string, vector<CancelShiftLoadBalancerZonesRequestZoneMappings>>("ZoneMappings", *request->zoneMappings));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelShiftLoadBalancerZones"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CancelShiftLoadBalancerZonesResponse(callApi(params, req, runtime));
  }
  else {
    return CancelShiftLoadBalancerZonesResponse(execute(params, req, runtime));
  }
}

CancelShiftLoadBalancerZonesResponse Alibabacloud_Alb20200616::Client::cancelShiftLoadBalancerZones(shared_ptr<CancelShiftLoadBalancerZonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelShiftLoadBalancerZonesWithOptions(request, runtime);
}

CreateAScriptsResponse Alibabacloud_Alb20200616::Client::createAScriptsWithOptions(shared_ptr<CreateAScriptsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateAScriptsRequestAScripts>>(request->AScripts)) {
    query->insert(pair<string, vector<CreateAScriptsRequestAScripts>>("AScripts", *request->AScripts));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAScripts"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateAScriptsResponse(callApi(params, req, runtime));
  }
  else {
    return CreateAScriptsResponse(execute(params, req, runtime));
  }
}

CreateAScriptsResponse Alibabacloud_Alb20200616::Client::createAScripts(shared_ptr<CreateAScriptsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAScriptsWithOptions(request, runtime);
}

CreateAclResponse Alibabacloud_Alb20200616::Client::createAclWithOptions(shared_ptr<CreateAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclName)) {
    query->insert(pair<string, string>("AclName", *request->aclName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateAclRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateAclRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAcl"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateAclResponse(callApi(params, req, runtime));
  }
  else {
    return CreateAclResponse(execute(params, req, runtime));
  }
}

CreateAclResponse Alibabacloud_Alb20200616::Client::createAcl(shared_ptr<CreateAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAclWithOptions(request, runtime);
}

CreateHealthCheckTemplateResponse Alibabacloud_Alb20200616::Client::createHealthCheckTemplateWithOptions(shared_ptr<CreateHealthCheckTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->healthCheckCodes)) {
    query->insert(pair<string, vector<string>>("HealthCheckCodes", *request->healthCheckCodes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckConnectPort)) {
    query->insert(pair<string, long>("HealthCheckConnectPort", *request->healthCheckConnectPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckHost)) {
    query->insert(pair<string, string>("HealthCheckHost", *request->healthCheckHost));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckHttpVersion)) {
    query->insert(pair<string, string>("HealthCheckHttpVersion", *request->healthCheckHttpVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckInterval)) {
    query->insert(pair<string, long>("HealthCheckInterval", *request->healthCheckInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckMethod)) {
    query->insert(pair<string, string>("HealthCheckMethod", *request->healthCheckMethod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckPath)) {
    query->insert(pair<string, string>("HealthCheckPath", *request->healthCheckPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckProtocol)) {
    query->insert(pair<string, string>("HealthCheckProtocol", *request->healthCheckProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckTemplateName)) {
    query->insert(pair<string, string>("HealthCheckTemplateName", *request->healthCheckTemplateName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckTimeout)) {
    query->insert(pair<string, long>("HealthCheckTimeout", *request->healthCheckTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthyThreshold)) {
    query->insert(pair<string, long>("HealthyThreshold", *request->healthyThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateHealthCheckTemplateRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateHealthCheckTemplateRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->unhealthyThreshold)) {
    query->insert(pair<string, long>("UnhealthyThreshold", *request->unhealthyThreshold));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateHealthCheckTemplate"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateHealthCheckTemplateResponse(callApi(params, req, runtime));
  }
  else {
    return CreateHealthCheckTemplateResponse(execute(params, req, runtime));
  }
}

CreateHealthCheckTemplateResponse Alibabacloud_Alb20200616::Client::createHealthCheckTemplate(shared_ptr<CreateHealthCheckTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createHealthCheckTemplateWithOptions(request, runtime);
}

CreateListenerResponse Alibabacloud_Alb20200616::Client::createListenerWithOptions(shared_ptr<CreateListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateListenerRequestCaCertificates>>(request->caCertificates)) {
    query->insert(pair<string, vector<CreateListenerRequestCaCertificates>>("CaCertificates", *request->caCertificates));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->caEnabled)) {
    query->insert(pair<string, bool>("CaEnabled", *request->caEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateListenerRequestCertificates>>(request->certificates)) {
    query->insert(pair<string, vector<CreateListenerRequestCertificates>>("Certificates", *request->certificates));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateListenerRequestDefaultActions>>(request->defaultActions)) {
    query->insert(pair<string, vector<CreateListenerRequestDefaultActions>>("DefaultActions", *request->defaultActions));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->gzipEnabled)) {
    query->insert(pair<string, bool>("GzipEnabled", *request->gzipEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->http2Enabled)) {
    query->insert(pair<string, bool>("Http2Enabled", *request->http2Enabled));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->idleTimeout)) {
    query->insert(pair<string, long>("IdleTimeout", *request->idleTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerDescription)) {
    query->insert(pair<string, string>("ListenerDescription", *request->listenerDescription));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerProtocol)) {
    query->insert(pair<string, string>("ListenerProtocol", *request->listenerProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<CreateListenerRequestQuicConfig>(request->quicConfig)) {
    query->insert(pair<string, CreateListenerRequestQuicConfig>("QuicConfig", *request->quicConfig));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->requestTimeout)) {
    query->insert(pair<string, long>("RequestTimeout", *request->requestTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityPolicyId)) {
    query->insert(pair<string, string>("SecurityPolicyId", *request->securityPolicyId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateListenerRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateListenerRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<CreateListenerRequestXForwardedForConfig>(request->XForwardedForConfig)) {
    query->insert(pair<string, CreateListenerRequestXForwardedForConfig>("XForwardedForConfig", *request->XForwardedForConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateListener"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateListenerResponse(callApi(params, req, runtime));
  }
  else {
    return CreateListenerResponse(execute(params, req, runtime));
  }
}

CreateListenerResponse Alibabacloud_Alb20200616::Client::createListener(shared_ptr<CreateListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createListenerWithOptions(request, runtime);
}

CreateLoadBalancerResponse Alibabacloud_Alb20200616::Client::createLoadBalancerWithOptions(shared_ptr<CreateLoadBalancerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addressAllocatedMode)) {
    query->insert(pair<string, string>("AddressAllocatedMode", *request->addressAllocatedMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->addressIpVersion)) {
    query->insert(pair<string, string>("AddressIpVersion", *request->addressIpVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->addressType)) {
    query->insert(pair<string, string>("AddressType", *request->addressType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->deletionProtectionEnabled)) {
    query->insert(pair<string, bool>("DeletionProtectionEnabled", *request->deletionProtectionEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<CreateLoadBalancerRequestLoadBalancerBillingConfig>(request->loadBalancerBillingConfig)) {
    query->insert(pair<string, CreateLoadBalancerRequestLoadBalancerBillingConfig>("LoadBalancerBillingConfig", *request->loadBalancerBillingConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerEdition)) {
    query->insert(pair<string, string>("LoadBalancerEdition", *request->loadBalancerEdition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerName)) {
    query->insert(pair<string, string>("LoadBalancerName", *request->loadBalancerName));
  }
  if (!Darabonba_Util::Client::isUnset<CreateLoadBalancerRequestModificationProtectionConfig>(request->modificationProtectionConfig)) {
    query->insert(pair<string, CreateLoadBalancerRequestModificationProtectionConfig>("ModificationProtectionConfig", *request->modificationProtectionConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateLoadBalancerRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateLoadBalancerRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateLoadBalancerRequestZoneMappings>>(request->zoneMappings)) {
    query->insert(pair<string, vector<CreateLoadBalancerRequestZoneMappings>>("ZoneMappings", *request->zoneMappings));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLoadBalancer"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateLoadBalancerResponse(callApi(params, req, runtime));
  }
  else {
    return CreateLoadBalancerResponse(execute(params, req, runtime));
  }
}

CreateLoadBalancerResponse Alibabacloud_Alb20200616::Client::createLoadBalancer(shared_ptr<CreateLoadBalancerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLoadBalancerWithOptions(request, runtime);
}

CreateRuleResponse Alibabacloud_Alb20200616::Client::createRuleWithOptions(shared_ptr<CreateRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("Direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    query->insert(pair<string, long>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateRuleRequestRuleActions>>(request->ruleActions)) {
    query->insert(pair<string, vector<CreateRuleRequestRuleActions>>("RuleActions", *request->ruleActions));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateRuleRequestRuleConditions>>(request->ruleConditions)) {
    query->insert(pair<string, vector<CreateRuleRequestRuleConditions>>("RuleConditions", *request->ruleConditions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateRuleRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateRuleRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRule"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateRuleResponse(callApi(params, req, runtime));
  }
  else {
    return CreateRuleResponse(execute(params, req, runtime));
  }
}

CreateRuleResponse Alibabacloud_Alb20200616::Client::createRule(shared_ptr<CreateRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRuleWithOptions(request, runtime);
}

CreateRulesResponse Alibabacloud_Alb20200616::Client::createRulesWithOptions(shared_ptr<CreateRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateRulesRequestRules>>(request->rules)) {
    bodyFlat->insert(pair<string, vector<CreateRulesRequestRules>>("Rules", *request->rules));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRules"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateRulesResponse(callApi(params, req, runtime));
  }
  else {
    return CreateRulesResponse(execute(params, req, runtime));
  }
}

CreateRulesResponse Alibabacloud_Alb20200616::Client::createRules(shared_ptr<CreateRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRulesWithOptions(request, runtime);
}

CreateSecurityPolicyResponse Alibabacloud_Alb20200616::Client::createSecurityPolicyWithOptions(shared_ptr<CreateSecurityPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ciphers)) {
    query->insert(pair<string, vector<string>>("Ciphers", *request->ciphers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityPolicyName)) {
    query->insert(pair<string, string>("SecurityPolicyName", *request->securityPolicyName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->TLSVersions)) {
    query->insert(pair<string, vector<string>>("TLSVersions", *request->TLSVersions));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateSecurityPolicyRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateSecurityPolicyRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSecurityPolicy"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateSecurityPolicyResponse(callApi(params, req, runtime));
  }
  else {
    return CreateSecurityPolicyResponse(execute(params, req, runtime));
  }
}

CreateSecurityPolicyResponse Alibabacloud_Alb20200616::Client::createSecurityPolicy(shared_ptr<CreateSecurityPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSecurityPolicyWithOptions(request, runtime);
}

CreateServerGroupResponse Alibabacloud_Alb20200616::Client::createServerGroupWithOptions(shared_ptr<CreateServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<CreateServerGroupRequestConnectionDrainConfig>(request->connectionDrainConfig)) {
    query->insert(pair<string, CreateServerGroupRequestConnectionDrainConfig>("ConnectionDrainConfig", *request->connectionDrainConfig));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->crossZoneEnabled)) {
    query->insert(pair<string, bool>("CrossZoneEnabled", *request->crossZoneEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<CreateServerGroupRequestHealthCheckConfig>(request->healthCheckConfig)) {
    query->insert(pair<string, CreateServerGroupRequestHealthCheckConfig>("HealthCheckConfig", *request->healthCheckConfig));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ipv6Enabled)) {
    query->insert(pair<string, bool>("Ipv6Enabled", *request->ipv6Enabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocol)) {
    query->insert(pair<string, string>("Protocol", *request->protocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduler)) {
    query->insert(pair<string, string>("Scheduler", *request->scheduler));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverGroupName)) {
    query->insert(pair<string, string>("ServerGroupName", *request->serverGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverGroupType)) {
    query->insert(pair<string, string>("ServerGroupType", *request->serverGroupType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  if (!Darabonba_Util::Client::isUnset<CreateServerGroupRequestSlowStartConfig>(request->slowStartConfig)) {
    query->insert(pair<string, CreateServerGroupRequestSlowStartConfig>("SlowStartConfig", *request->slowStartConfig));
  }
  if (!Darabonba_Util::Client::isUnset<CreateServerGroupRequestStickySessionConfig>(request->stickySessionConfig)) {
    query->insert(pair<string, CreateServerGroupRequestStickySessionConfig>("StickySessionConfig", *request->stickySessionConfig));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateServerGroupRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateServerGroupRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<CreateServerGroupRequestUchConfig>(request->uchConfig)) {
    query->insert(pair<string, CreateServerGroupRequestUchConfig>("UchConfig", *request->uchConfig));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->upstreamKeepaliveEnabled)) {
    query->insert(pair<string, bool>("UpstreamKeepaliveEnabled", *request->upstreamKeepaliveEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateServerGroup"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateServerGroupResponse(callApi(params, req, runtime));
  }
  else {
    return CreateServerGroupResponse(execute(params, req, runtime));
  }
}

CreateServerGroupResponse Alibabacloud_Alb20200616::Client::createServerGroup(shared_ptr<CreateServerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createServerGroupWithOptions(request, runtime);
}

DeleteAScriptsResponse Alibabacloud_Alb20200616::Client::deleteAScriptsWithOptions(shared_ptr<DeleteAScriptsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->AScriptIds)) {
    query->insert(pair<string, vector<string>>("AScriptIds", *request->AScriptIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAScripts"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteAScriptsResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteAScriptsResponse(execute(params, req, runtime));
  }
}

DeleteAScriptsResponse Alibabacloud_Alb20200616::Client::deleteAScripts(shared_ptr<DeleteAScriptsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAScriptsWithOptions(request, runtime);
}

DeleteAclResponse Alibabacloud_Alb20200616::Client::deleteAclWithOptions(shared_ptr<DeleteAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclId)) {
    query->insert(pair<string, string>("AclId", *request->aclId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAcl"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteAclResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteAclResponse(execute(params, req, runtime));
  }
}

DeleteAclResponse Alibabacloud_Alb20200616::Client::deleteAcl(shared_ptr<DeleteAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAclWithOptions(request, runtime);
}

DeleteHealthCheckTemplatesResponse Alibabacloud_Alb20200616::Client::deleteHealthCheckTemplatesWithOptions(shared_ptr<DeleteHealthCheckTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->healthCheckTemplateIds)) {
    query->insert(pair<string, vector<string>>("HealthCheckTemplateIds", *request->healthCheckTemplateIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteHealthCheckTemplates"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteHealthCheckTemplatesResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteHealthCheckTemplatesResponse(execute(params, req, runtime));
  }
}

DeleteHealthCheckTemplatesResponse Alibabacloud_Alb20200616::Client::deleteHealthCheckTemplates(shared_ptr<DeleteHealthCheckTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteHealthCheckTemplatesWithOptions(request, runtime);
}

DeleteListenerResponse Alibabacloud_Alb20200616::Client::deleteListenerWithOptions(shared_ptr<DeleteListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteListener"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteListenerResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteListenerResponse(execute(params, req, runtime));
  }
}

DeleteListenerResponse Alibabacloud_Alb20200616::Client::deleteListener(shared_ptr<DeleteListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteListenerWithOptions(request, runtime);
}

DeleteLoadBalancerResponse Alibabacloud_Alb20200616::Client::deleteLoadBalancerWithOptions(shared_ptr<DeleteLoadBalancerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLoadBalancer"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteLoadBalancerResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteLoadBalancerResponse(execute(params, req, runtime));
  }
}

DeleteLoadBalancerResponse Alibabacloud_Alb20200616::Client::deleteLoadBalancer(shared_ptr<DeleteLoadBalancerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLoadBalancerWithOptions(request, runtime);
}

DeleteRuleResponse Alibabacloud_Alb20200616::Client::deleteRuleWithOptions(shared_ptr<DeleteRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRule"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteRuleResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteRuleResponse(execute(params, req, runtime));
  }
}

DeleteRuleResponse Alibabacloud_Alb20200616::Client::deleteRule(shared_ptr<DeleteRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRuleWithOptions(request, runtime);
}

DeleteRulesResponse Alibabacloud_Alb20200616::Client::deleteRulesWithOptions(shared_ptr<DeleteRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ruleIds)) {
    query->insert(pair<string, vector<string>>("RuleIds", *request->ruleIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRules"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteRulesResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteRulesResponse(execute(params, req, runtime));
  }
}

DeleteRulesResponse Alibabacloud_Alb20200616::Client::deleteRules(shared_ptr<DeleteRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRulesWithOptions(request, runtime);
}

DeleteSecurityPolicyResponse Alibabacloud_Alb20200616::Client::deleteSecurityPolicyWithOptions(shared_ptr<DeleteSecurityPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityPolicyId)) {
    query->insert(pair<string, string>("SecurityPolicyId", *request->securityPolicyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSecurityPolicy"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteSecurityPolicyResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteSecurityPolicyResponse(execute(params, req, runtime));
  }
}

DeleteSecurityPolicyResponse Alibabacloud_Alb20200616::Client::deleteSecurityPolicy(shared_ptr<DeleteSecurityPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSecurityPolicyWithOptions(request, runtime);
}

DeleteServerGroupResponse Alibabacloud_Alb20200616::Client::deleteServerGroupWithOptions(shared_ptr<DeleteServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverGroupId)) {
    query->insert(pair<string, string>("ServerGroupId", *request->serverGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteServerGroup"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteServerGroupResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteServerGroupResponse(execute(params, req, runtime));
  }
}

DeleteServerGroupResponse Alibabacloud_Alb20200616::Client::deleteServerGroup(shared_ptr<DeleteServerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteServerGroupWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Alb20200616::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeRegionsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeRegionsResponse(execute(params, req, runtime));
  }
}

DescribeRegionsResponse Alibabacloud_Alb20200616::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeZonesResponse Alibabacloud_Alb20200616::Client::describeZonesWithOptions(shared_ptr<DescribeZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeZones"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeZonesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeZonesResponse(execute(params, req, runtime));
  }
}

DescribeZonesResponse Alibabacloud_Alb20200616::Client::describeZones(shared_ptr<DescribeZonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeZonesWithOptions(request, runtime);
}

DetachCommonBandwidthPackageFromLoadBalancerResponse Alibabacloud_Alb20200616::Client::detachCommonBandwidthPackageFromLoadBalancerWithOptions(shared_ptr<DetachCommonBandwidthPackageFromLoadBalancerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bandwidthPackageId)) {
    query->insert(pair<string, string>("BandwidthPackageId", *request->bandwidthPackageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachCommonBandwidthPackageFromLoadBalancer"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DetachCommonBandwidthPackageFromLoadBalancerResponse(callApi(params, req, runtime));
  }
  else {
    return DetachCommonBandwidthPackageFromLoadBalancerResponse(execute(params, req, runtime));
  }
}

DetachCommonBandwidthPackageFromLoadBalancerResponse Alibabacloud_Alb20200616::Client::detachCommonBandwidthPackageFromLoadBalancer(shared_ptr<DetachCommonBandwidthPackageFromLoadBalancerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachCommonBandwidthPackageFromLoadBalancerWithOptions(request, runtime);
}

DisableDeletionProtectionResponse Alibabacloud_Alb20200616::Client::disableDeletionProtectionWithOptions(shared_ptr<DisableDeletionProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableDeletionProtection"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DisableDeletionProtectionResponse(callApi(params, req, runtime));
  }
  else {
    return DisableDeletionProtectionResponse(execute(params, req, runtime));
  }
}

DisableDeletionProtectionResponse Alibabacloud_Alb20200616::Client::disableDeletionProtection(shared_ptr<DisableDeletionProtectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableDeletionProtectionWithOptions(request, runtime);
}

DisableLoadBalancerAccessLogResponse Alibabacloud_Alb20200616::Client::disableLoadBalancerAccessLogWithOptions(shared_ptr<DisableLoadBalancerAccessLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableLoadBalancerAccessLog"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DisableLoadBalancerAccessLogResponse(callApi(params, req, runtime));
  }
  else {
    return DisableLoadBalancerAccessLogResponse(execute(params, req, runtime));
  }
}

DisableLoadBalancerAccessLogResponse Alibabacloud_Alb20200616::Client::disableLoadBalancerAccessLog(shared_ptr<DisableLoadBalancerAccessLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableLoadBalancerAccessLogWithOptions(request, runtime);
}

DisableLoadBalancerIpv6InternetResponse Alibabacloud_Alb20200616::Client::disableLoadBalancerIpv6InternetWithOptions(shared_ptr<DisableLoadBalancerIpv6InternetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableLoadBalancerIpv6Internet"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DisableLoadBalancerIpv6InternetResponse(callApi(params, req, runtime));
  }
  else {
    return DisableLoadBalancerIpv6InternetResponse(execute(params, req, runtime));
  }
}

DisableLoadBalancerIpv6InternetResponse Alibabacloud_Alb20200616::Client::disableLoadBalancerIpv6Internet(shared_ptr<DisableLoadBalancerIpv6InternetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableLoadBalancerIpv6InternetWithOptions(request, runtime);
}

DissociateAclsFromListenerResponse Alibabacloud_Alb20200616::Client::dissociateAclsFromListenerWithOptions(shared_ptr<DissociateAclsFromListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->aclIds)) {
    query->insert(pair<string, vector<string>>("AclIds", *request->aclIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DissociateAclsFromListener"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DissociateAclsFromListenerResponse(callApi(params, req, runtime));
  }
  else {
    return DissociateAclsFromListenerResponse(execute(params, req, runtime));
  }
}

DissociateAclsFromListenerResponse Alibabacloud_Alb20200616::Client::dissociateAclsFromListener(shared_ptr<DissociateAclsFromListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dissociateAclsFromListenerWithOptions(request, runtime);
}

DissociateAdditionalCertificatesFromListenerResponse Alibabacloud_Alb20200616::Client::dissociateAdditionalCertificatesFromListenerWithOptions(shared_ptr<DissociateAdditionalCertificatesFromListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<DissociateAdditionalCertificatesFromListenerRequestCertificates>>(request->certificates)) {
    query->insert(pair<string, vector<DissociateAdditionalCertificatesFromListenerRequestCertificates>>("Certificates", *request->certificates));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DissociateAdditionalCertificatesFromListener"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DissociateAdditionalCertificatesFromListenerResponse(callApi(params, req, runtime));
  }
  else {
    return DissociateAdditionalCertificatesFromListenerResponse(execute(params, req, runtime));
  }
}

DissociateAdditionalCertificatesFromListenerResponse Alibabacloud_Alb20200616::Client::dissociateAdditionalCertificatesFromListener(shared_ptr<DissociateAdditionalCertificatesFromListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dissociateAdditionalCertificatesFromListenerWithOptions(request, runtime);
}

EnableDeletionProtectionResponse Alibabacloud_Alb20200616::Client::enableDeletionProtectionWithOptions(shared_ptr<EnableDeletionProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableDeletionProtection"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return EnableDeletionProtectionResponse(callApi(params, req, runtime));
  }
  else {
    return EnableDeletionProtectionResponse(execute(params, req, runtime));
  }
}

EnableDeletionProtectionResponse Alibabacloud_Alb20200616::Client::enableDeletionProtection(shared_ptr<EnableDeletionProtectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableDeletionProtectionWithOptions(request, runtime);
}

EnableLoadBalancerAccessLogResponse Alibabacloud_Alb20200616::Client::enableLoadBalancerAccessLogWithOptions(shared_ptr<EnableLoadBalancerAccessLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logProject)) {
    query->insert(pair<string, string>("LogProject", *request->logProject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logStore)) {
    query->insert(pair<string, string>("LogStore", *request->logStore));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableLoadBalancerAccessLog"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return EnableLoadBalancerAccessLogResponse(callApi(params, req, runtime));
  }
  else {
    return EnableLoadBalancerAccessLogResponse(execute(params, req, runtime));
  }
}

EnableLoadBalancerAccessLogResponse Alibabacloud_Alb20200616::Client::enableLoadBalancerAccessLog(shared_ptr<EnableLoadBalancerAccessLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableLoadBalancerAccessLogWithOptions(request, runtime);
}

EnableLoadBalancerIpv6InternetResponse Alibabacloud_Alb20200616::Client::enableLoadBalancerIpv6InternetWithOptions(shared_ptr<EnableLoadBalancerIpv6InternetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableLoadBalancerIpv6Internet"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return EnableLoadBalancerIpv6InternetResponse(callApi(params, req, runtime));
  }
  else {
    return EnableLoadBalancerIpv6InternetResponse(execute(params, req, runtime));
  }
}

EnableLoadBalancerIpv6InternetResponse Alibabacloud_Alb20200616::Client::enableLoadBalancerIpv6Internet(shared_ptr<EnableLoadBalancerIpv6InternetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableLoadBalancerIpv6InternetWithOptions(request, runtime);
}

GetHealthCheckTemplateAttributeResponse Alibabacloud_Alb20200616::Client::getHealthCheckTemplateAttributeWithOptions(shared_ptr<GetHealthCheckTemplateAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckTemplateId)) {
    query->insert(pair<string, string>("HealthCheckTemplateId", *request->healthCheckTemplateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHealthCheckTemplateAttribute"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetHealthCheckTemplateAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return GetHealthCheckTemplateAttributeResponse(execute(params, req, runtime));
  }
}

GetHealthCheckTemplateAttributeResponse Alibabacloud_Alb20200616::Client::getHealthCheckTemplateAttribute(shared_ptr<GetHealthCheckTemplateAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHealthCheckTemplateAttributeWithOptions(request, runtime);
}

GetListenerAttributeResponse Alibabacloud_Alb20200616::Client::getListenerAttributeWithOptions(shared_ptr<GetListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetListenerAttribute"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetListenerAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return GetListenerAttributeResponse(execute(params, req, runtime));
  }
}

GetListenerAttributeResponse Alibabacloud_Alb20200616::Client::getListenerAttribute(shared_ptr<GetListenerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getListenerAttributeWithOptions(request, runtime);
}

GetListenerHealthStatusResponse Alibabacloud_Alb20200616::Client::getListenerHealthStatusWithOptions(shared_ptr<GetListenerHealthStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeRule)) {
    query->insert(pair<string, bool>("IncludeRule", *request->includeRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetListenerHealthStatus"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetListenerHealthStatusResponse(callApi(params, req, runtime));
  }
  else {
    return GetListenerHealthStatusResponse(execute(params, req, runtime));
  }
}

GetListenerHealthStatusResponse Alibabacloud_Alb20200616::Client::getListenerHealthStatus(shared_ptr<GetListenerHealthStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getListenerHealthStatusWithOptions(request, runtime);
}

GetLoadBalancerAttributeResponse Alibabacloud_Alb20200616::Client::getLoadBalancerAttributeWithOptions(shared_ptr<GetLoadBalancerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLoadBalancerAttribute"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetLoadBalancerAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return GetLoadBalancerAttributeResponse(execute(params, req, runtime));
  }
}

GetLoadBalancerAttributeResponse Alibabacloud_Alb20200616::Client::getLoadBalancerAttribute(shared_ptr<GetLoadBalancerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLoadBalancerAttributeWithOptions(request, runtime);
}

ListAScriptsResponse Alibabacloud_Alb20200616::Client::listAScriptsWithOptions(shared_ptr<ListAScriptsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->AScriptIds)) {
    query->insert(pair<string, vector<string>>("AScriptIds", *request->AScriptIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->AScriptNames)) {
    query->insert(pair<string, vector<string>>("AScriptNames", *request->AScriptNames));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->listenerIds)) {
    query->insert(pair<string, vector<string>>("ListenerIds", *request->listenerIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAScripts"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListAScriptsResponse(callApi(params, req, runtime));
  }
  else {
    return ListAScriptsResponse(execute(params, req, runtime));
  }
}

ListAScriptsResponse Alibabacloud_Alb20200616::Client::listAScripts(shared_ptr<ListAScriptsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAScriptsWithOptions(request, runtime);
}

ListAclEntriesResponse Alibabacloud_Alb20200616::Client::listAclEntriesWithOptions(shared_ptr<ListAclEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclId)) {
    query->insert(pair<string, string>("AclId", *request->aclId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAclEntries"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListAclEntriesResponse(callApi(params, req, runtime));
  }
  else {
    return ListAclEntriesResponse(execute(params, req, runtime));
  }
}

ListAclEntriesResponse Alibabacloud_Alb20200616::Client::listAclEntries(shared_ptr<ListAclEntriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAclEntriesWithOptions(request, runtime);
}

ListAclRelationsResponse Alibabacloud_Alb20200616::Client::listAclRelationsWithOptions(shared_ptr<ListAclRelationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->aclIds)) {
    query->insert(pair<string, vector<string>>("AclIds", *request->aclIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAclRelations"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListAclRelationsResponse(callApi(params, req, runtime));
  }
  else {
    return ListAclRelationsResponse(execute(params, req, runtime));
  }
}

ListAclRelationsResponse Alibabacloud_Alb20200616::Client::listAclRelations(shared_ptr<ListAclRelationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAclRelationsWithOptions(request, runtime);
}

ListAclsResponse Alibabacloud_Alb20200616::Client::listAclsWithOptions(shared_ptr<ListAclsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->aclIds)) {
    query->insert(pair<string, vector<string>>("AclIds", *request->aclIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->aclNames)) {
    query->insert(pair<string, vector<string>>("AclNames", *request->aclNames));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListAclsRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListAclsRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAcls"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListAclsResponse(callApi(params, req, runtime));
  }
  else {
    return ListAclsResponse(execute(params, req, runtime));
  }
}

ListAclsResponse Alibabacloud_Alb20200616::Client::listAcls(shared_ptr<ListAclsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAclsWithOptions(request, runtime);
}

ListAsynJobsResponse Alibabacloud_Alb20200616::Client::listAsynJobsWithOptions(shared_ptr<ListAsynJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiName)) {
    query->insert(pair<string, string>("ApiName", *request->apiName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("BeginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->jobIds)) {
    query->insert(pair<string, vector<string>>("JobIds", *request->jobIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceIds)) {
    query->insert(pair<string, vector<string>>("ResourceIds", *request->resourceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAsynJobs"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListAsynJobsResponse(callApi(params, req, runtime));
  }
  else {
    return ListAsynJobsResponse(execute(params, req, runtime));
  }
}

ListAsynJobsResponse Alibabacloud_Alb20200616::Client::listAsynJobs(shared_ptr<ListAsynJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAsynJobsWithOptions(request, runtime);
}

ListHealthCheckTemplatesResponse Alibabacloud_Alb20200616::Client::listHealthCheckTemplatesWithOptions(shared_ptr<ListHealthCheckTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->healthCheckTemplateIds)) {
    query->insert(pair<string, vector<string>>("HealthCheckTemplateIds", *request->healthCheckTemplateIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->healthCheckTemplateNames)) {
    query->insert(pair<string, vector<string>>("HealthCheckTemplateNames", *request->healthCheckTemplateNames));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListHealthCheckTemplatesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListHealthCheckTemplatesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHealthCheckTemplates"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListHealthCheckTemplatesResponse(callApi(params, req, runtime));
  }
  else {
    return ListHealthCheckTemplatesResponse(execute(params, req, runtime));
  }
}

ListHealthCheckTemplatesResponse Alibabacloud_Alb20200616::Client::listHealthCheckTemplates(shared_ptr<ListHealthCheckTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHealthCheckTemplatesWithOptions(request, runtime);
}

ListListenerCertificatesResponse Alibabacloud_Alb20200616::Client::listListenerCertificatesWithOptions(shared_ptr<ListListenerCertificatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->certificateIds)) {
    query->insert(pair<string, vector<string>>("CertificateIds", *request->certificateIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certificateType)) {
    query->insert(pair<string, string>("CertificateType", *request->certificateType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListListenerCertificates"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListListenerCertificatesResponse(callApi(params, req, runtime));
  }
  else {
    return ListListenerCertificatesResponse(execute(params, req, runtime));
  }
}

ListListenerCertificatesResponse Alibabacloud_Alb20200616::Client::listListenerCertificates(shared_ptr<ListListenerCertificatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listListenerCertificatesWithOptions(request, runtime);
}

ListListenersResponse Alibabacloud_Alb20200616::Client::listListenersWithOptions(shared_ptr<ListListenersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->listenerIds)) {
    query->insert(pair<string, vector<string>>("ListenerIds", *request->listenerIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerProtocol)) {
    query->insert(pair<string, string>("ListenerProtocol", *request->listenerProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->loadBalancerIds)) {
    query->insert(pair<string, vector<string>>("LoadBalancerIds", *request->loadBalancerIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListListenersRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListListenersRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListListeners"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListListenersResponse(callApi(params, req, runtime));
  }
  else {
    return ListListenersResponse(execute(params, req, runtime));
  }
}

ListListenersResponse Alibabacloud_Alb20200616::Client::listListeners(shared_ptr<ListListenersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listListenersWithOptions(request, runtime);
}

ListLoadBalancersResponse Alibabacloud_Alb20200616::Client::listLoadBalancersWithOptions(shared_ptr<ListLoadBalancersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addressIpVersion)) {
    query->insert(pair<string, string>("AddressIpVersion", *request->addressIpVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->addressType)) {
    query->insert(pair<string, string>("AddressType", *request->addressType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DNSName)) {
    query->insert(pair<string, string>("DNSName", *request->DNSName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipv6AddressType)) {
    query->insert(pair<string, string>("Ipv6AddressType", *request->ipv6AddressType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerBussinessStatus)) {
    query->insert(pair<string, string>("LoadBalancerBussinessStatus", *request->loadBalancerBussinessStatus));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->loadBalancerIds)) {
    query->insert(pair<string, vector<string>>("LoadBalancerIds", *request->loadBalancerIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->loadBalancerNames)) {
    query->insert(pair<string, vector<string>>("LoadBalancerNames", *request->loadBalancerNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerStatus)) {
    query->insert(pair<string, string>("LoadBalancerStatus", *request->loadBalancerStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payType)) {
    query->insert(pair<string, string>("PayType", *request->payType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListLoadBalancersRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListLoadBalancersRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->vpcIds)) {
    query->insert(pair<string, vector<string>>("VpcIds", *request->vpcIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    query->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLoadBalancers"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListLoadBalancersResponse(callApi(params, req, runtime));
  }
  else {
    return ListLoadBalancersResponse(execute(params, req, runtime));
  }
}

ListLoadBalancersResponse Alibabacloud_Alb20200616::Client::listLoadBalancers(shared_ptr<ListLoadBalancersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLoadBalancersWithOptions(request, runtime);
}

ListRulesResponse Alibabacloud_Alb20200616::Client::listRulesWithOptions(shared_ptr<ListRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("Direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->listenerIds)) {
    query->insert(pair<string, vector<string>>("ListenerIds", *request->listenerIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->loadBalancerIds)) {
    query->insert(pair<string, vector<string>>("LoadBalancerIds", *request->loadBalancerIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ruleIds)) {
    query->insert(pair<string, vector<string>>("RuleIds", *request->ruleIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListRulesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListRulesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRules"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListRulesResponse(callApi(params, req, runtime));
  }
  else {
    return ListRulesResponse(execute(params, req, runtime));
  }
}

ListRulesResponse Alibabacloud_Alb20200616::Client::listRules(shared_ptr<ListRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRulesWithOptions(request, runtime);
}

ListSecurityPoliciesResponse Alibabacloud_Alb20200616::Client::listSecurityPoliciesWithOptions(shared_ptr<ListSecurityPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->securityPolicyIds)) {
    query->insert(pair<string, vector<string>>("SecurityPolicyIds", *request->securityPolicyIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->securityPolicyNames)) {
    query->insert(pair<string, vector<string>>("SecurityPolicyNames", *request->securityPolicyNames));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListSecurityPoliciesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListSecurityPoliciesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSecurityPolicies"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListSecurityPoliciesResponse(callApi(params, req, runtime));
  }
  else {
    return ListSecurityPoliciesResponse(execute(params, req, runtime));
  }
}

ListSecurityPoliciesResponse Alibabacloud_Alb20200616::Client::listSecurityPolicies(shared_ptr<ListSecurityPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSecurityPoliciesWithOptions(request, runtime);
}

ListSecurityPolicyRelationsResponse Alibabacloud_Alb20200616::Client::listSecurityPolicyRelationsWithOptions(shared_ptr<ListSecurityPolicyRelationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->securityPolicyIds)) {
    query->insert(pair<string, vector<string>>("SecurityPolicyIds", *request->securityPolicyIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSecurityPolicyRelations"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListSecurityPolicyRelationsResponse(callApi(params, req, runtime));
  }
  else {
    return ListSecurityPolicyRelationsResponse(execute(params, req, runtime));
  }
}

ListSecurityPolicyRelationsResponse Alibabacloud_Alb20200616::Client::listSecurityPolicyRelations(shared_ptr<ListSecurityPolicyRelationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSecurityPolicyRelationsWithOptions(request, runtime);
}

ListServerGroupServersResponse Alibabacloud_Alb20200616::Client::listServerGroupServersWithOptions(shared_ptr<ListServerGroupServersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverGroupId)) {
    query->insert(pair<string, string>("ServerGroupId", *request->serverGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->serverIds)) {
    query->insert(pair<string, vector<string>>("ServerIds", *request->serverIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListServerGroupServersRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListServerGroupServersRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServerGroupServers"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListServerGroupServersResponse(callApi(params, req, runtime));
  }
  else {
    return ListServerGroupServersResponse(execute(params, req, runtime));
  }
}

ListServerGroupServersResponse Alibabacloud_Alb20200616::Client::listServerGroupServers(shared_ptr<ListServerGroupServersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listServerGroupServersWithOptions(request, runtime);
}

ListServerGroupsResponse Alibabacloud_Alb20200616::Client::listServerGroupsWithOptions(shared_ptr<ListServerGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->serverGroupIds)) {
    query->insert(pair<string, vector<string>>("ServerGroupIds", *request->serverGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->serverGroupNames)) {
    query->insert(pair<string, vector<string>>("ServerGroupNames", *request->serverGroupNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverGroupType)) {
    query->insert(pair<string, string>("ServerGroupType", *request->serverGroupType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListServerGroupsRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListServerGroupsRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServerGroups"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListServerGroupsResponse(callApi(params, req, runtime));
  }
  else {
    return ListServerGroupsResponse(execute(params, req, runtime));
  }
}

ListServerGroupsResponse Alibabacloud_Alb20200616::Client::listServerGroups(shared_ptr<ListServerGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listServerGroupsWithOptions(request, runtime);
}

ListSystemSecurityPoliciesResponse Alibabacloud_Alb20200616::Client::listSystemSecurityPoliciesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSystemSecurityPolicies"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListSystemSecurityPoliciesResponse(callApi(params, req, runtime));
  }
  else {
    return ListSystemSecurityPoliciesResponse(execute(params, req, runtime));
  }
}

ListSystemSecurityPoliciesResponse Alibabacloud_Alb20200616::Client::listSystemSecurityPolicies() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSystemSecurityPoliciesWithOptions(runtime);
}

ListTagKeysResponse Alibabacloud_Alb20200616::Client::listTagKeysWithOptions(shared_ptr<ListTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagKeys"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListTagKeysResponse(callApi(params, req, runtime));
  }
  else {
    return ListTagKeysResponse(execute(params, req, runtime));
  }
}

ListTagKeysResponse Alibabacloud_Alb20200616::Client::listTagKeys(shared_ptr<ListTagKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagKeysWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Alb20200616::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListTagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListTagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagResources"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListTagResourcesResponse(callApi(params, req, runtime));
  }
  else {
    return ListTagResourcesResponse(execute(params, req, runtime));
  }
}

ListTagResourcesResponse Alibabacloud_Alb20200616::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ListTagValuesResponse Alibabacloud_Alb20200616::Client::listTagValuesWithOptions(shared_ptr<ListTagValuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKey)) {
    query->insert(pair<string, string>("TagKey", *request->tagKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagValues"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListTagValuesResponse(callApi(params, req, runtime));
  }
  else {
    return ListTagValuesResponse(execute(params, req, runtime));
  }
}

ListTagValuesResponse Alibabacloud_Alb20200616::Client::listTagValues(shared_ptr<ListTagValuesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagValuesWithOptions(request, runtime);
}

LoadBalancerJoinSecurityGroupResponse Alibabacloud_Alb20200616::Client::loadBalancerJoinSecurityGroupWithOptions(shared_ptr<LoadBalancerJoinSecurityGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->securityGroupIds)) {
    query->insert(pair<string, vector<string>>("SecurityGroupIds", *request->securityGroupIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LoadBalancerJoinSecurityGroup"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return LoadBalancerJoinSecurityGroupResponse(callApi(params, req, runtime));
  }
  else {
    return LoadBalancerJoinSecurityGroupResponse(execute(params, req, runtime));
  }
}

LoadBalancerJoinSecurityGroupResponse Alibabacloud_Alb20200616::Client::loadBalancerJoinSecurityGroup(shared_ptr<LoadBalancerJoinSecurityGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return loadBalancerJoinSecurityGroupWithOptions(request, runtime);
}

LoadBalancerLeaveSecurityGroupResponse Alibabacloud_Alb20200616::Client::loadBalancerLeaveSecurityGroupWithOptions(shared_ptr<LoadBalancerLeaveSecurityGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->securityGroupIds)) {
    query->insert(pair<string, vector<string>>("SecurityGroupIds", *request->securityGroupIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LoadBalancerLeaveSecurityGroup"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return LoadBalancerLeaveSecurityGroupResponse(callApi(params, req, runtime));
  }
  else {
    return LoadBalancerLeaveSecurityGroupResponse(execute(params, req, runtime));
  }
}

LoadBalancerLeaveSecurityGroupResponse Alibabacloud_Alb20200616::Client::loadBalancerLeaveSecurityGroup(shared_ptr<LoadBalancerLeaveSecurityGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return loadBalancerLeaveSecurityGroupWithOptions(request, runtime);
}

MoveResourceGroupResponse Alibabacloud_Alb20200616::Client::moveResourceGroupWithOptions(shared_ptr<MoveResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->newResourceGroupId)) {
    query->insert(pair<string, string>("NewResourceGroupId", *request->newResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MoveResourceGroup"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return MoveResourceGroupResponse(callApi(params, req, runtime));
  }
  else {
    return MoveResourceGroupResponse(execute(params, req, runtime));
  }
}

MoveResourceGroupResponse Alibabacloud_Alb20200616::Client::moveResourceGroup(shared_ptr<MoveResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return moveResourceGroupWithOptions(request, runtime);
}

RemoveEntriesFromAclResponse Alibabacloud_Alb20200616::Client::removeEntriesFromAclWithOptions(shared_ptr<RemoveEntriesFromAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclId)) {
    query->insert(pair<string, string>("AclId", *request->aclId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->entries)) {
    query->insert(pair<string, vector<string>>("Entries", *request->entries));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveEntriesFromAcl"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RemoveEntriesFromAclResponse(callApi(params, req, runtime));
  }
  else {
    return RemoveEntriesFromAclResponse(execute(params, req, runtime));
  }
}

RemoveEntriesFromAclResponse Alibabacloud_Alb20200616::Client::removeEntriesFromAcl(shared_ptr<RemoveEntriesFromAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeEntriesFromAclWithOptions(request, runtime);
}

RemoveServersFromServerGroupResponse Alibabacloud_Alb20200616::Client::removeServersFromServerGroupWithOptions(shared_ptr<RemoveServersFromServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverGroupId)) {
    query->insert(pair<string, string>("ServerGroupId", *request->serverGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<RemoveServersFromServerGroupRequestServers>>(request->servers)) {
    query->insert(pair<string, vector<RemoveServersFromServerGroupRequestServers>>("Servers", *request->servers));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveServersFromServerGroup"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RemoveServersFromServerGroupResponse(callApi(params, req, runtime));
  }
  else {
    return RemoveServersFromServerGroupResponse(execute(params, req, runtime));
  }
}

RemoveServersFromServerGroupResponse Alibabacloud_Alb20200616::Client::removeServersFromServerGroup(shared_ptr<RemoveServersFromServerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeServersFromServerGroupWithOptions(request, runtime);
}

ReplaceServersInServerGroupResponse Alibabacloud_Alb20200616::Client::replaceServersInServerGroupWithOptions(shared_ptr<ReplaceServersInServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ReplaceServersInServerGroupRequestAddedServers>>(request->addedServers)) {
    query->insert(pair<string, vector<ReplaceServersInServerGroupRequestAddedServers>>("AddedServers", *request->addedServers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ReplaceServersInServerGroupRequestRemovedServers>>(request->removedServers)) {
    query->insert(pair<string, vector<ReplaceServersInServerGroupRequestRemovedServers>>("RemovedServers", *request->removedServers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverGroupId)) {
    query->insert(pair<string, string>("ServerGroupId", *request->serverGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReplaceServersInServerGroup"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ReplaceServersInServerGroupResponse(callApi(params, req, runtime));
  }
  else {
    return ReplaceServersInServerGroupResponse(execute(params, req, runtime));
  }
}

ReplaceServersInServerGroupResponse Alibabacloud_Alb20200616::Client::replaceServersInServerGroup(shared_ptr<ReplaceServersInServerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return replaceServersInServerGroupWithOptions(request, runtime);
}

StartListenerResponse Alibabacloud_Alb20200616::Client::startListenerWithOptions(shared_ptr<StartListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartListener"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StartListenerResponse(callApi(params, req, runtime));
  }
  else {
    return StartListenerResponse(execute(params, req, runtime));
  }
}

StartListenerResponse Alibabacloud_Alb20200616::Client::startListener(shared_ptr<StartListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startListenerWithOptions(request, runtime);
}

StartShiftLoadBalancerZonesResponse Alibabacloud_Alb20200616::Client::startShiftLoadBalancerZonesWithOptions(shared_ptr<StartShiftLoadBalancerZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<StartShiftLoadBalancerZonesRequestZoneMappings>>(request->zoneMappings)) {
    query->insert(pair<string, vector<StartShiftLoadBalancerZonesRequestZoneMappings>>("ZoneMappings", *request->zoneMappings));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartShiftLoadBalancerZones"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StartShiftLoadBalancerZonesResponse(callApi(params, req, runtime));
  }
  else {
    return StartShiftLoadBalancerZonesResponse(execute(params, req, runtime));
  }
}

StartShiftLoadBalancerZonesResponse Alibabacloud_Alb20200616::Client::startShiftLoadBalancerZones(shared_ptr<StartShiftLoadBalancerZonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startShiftLoadBalancerZonesWithOptions(request, runtime);
}

StopListenerResponse Alibabacloud_Alb20200616::Client::stopListenerWithOptions(shared_ptr<StopListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopListener"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StopListenerResponse(callApi(params, req, runtime));
  }
  else {
    return StopListenerResponse(execute(params, req, runtime));
  }
}

StopListenerResponse Alibabacloud_Alb20200616::Client::stopListener(shared_ptr<StopListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopListenerWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Alb20200616::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<TagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return TagResourcesResponse(callApi(params, req, runtime));
  }
  else {
    return TagResourcesResponse(execute(params, req, runtime));
  }
}

TagResourcesResponse Alibabacloud_Alb20200616::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UnTagResourcesResponse Alibabacloud_Alb20200616::Client::unTagResourcesWithOptions(shared_ptr<UnTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("All", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UnTagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<UnTagResourcesRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagKey)) {
    query->insert(pair<string, vector<string>>("TagKey", *request->tagKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnTagResources"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UnTagResourcesResponse(callApi(params, req, runtime));
  }
  else {
    return UnTagResourcesResponse(execute(params, req, runtime));
  }
}

UnTagResourcesResponse Alibabacloud_Alb20200616::Client::unTagResources(shared_ptr<UnTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unTagResourcesWithOptions(request, runtime);
}

UpdateAScriptsResponse Alibabacloud_Alb20200616::Client::updateAScriptsWithOptions(shared_ptr<UpdateAScriptsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpdateAScriptsRequestAScripts>>(request->AScripts)) {
    query->insert(pair<string, vector<UpdateAScriptsRequestAScripts>>("AScripts", *request->AScripts));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAScripts"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateAScriptsResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateAScriptsResponse(execute(params, req, runtime));
  }
}

UpdateAScriptsResponse Alibabacloud_Alb20200616::Client::updateAScripts(shared_ptr<UpdateAScriptsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAScriptsWithOptions(request, runtime);
}

UpdateAclAttributeResponse Alibabacloud_Alb20200616::Client::updateAclAttributeWithOptions(shared_ptr<UpdateAclAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclId)) {
    query->insert(pair<string, string>("AclId", *request->aclId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclName)) {
    query->insert(pair<string, string>("AclName", *request->aclName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAclAttribute"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateAclAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateAclAttributeResponse(execute(params, req, runtime));
  }
}

UpdateAclAttributeResponse Alibabacloud_Alb20200616::Client::updateAclAttribute(shared_ptr<UpdateAclAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAclAttributeWithOptions(request, runtime);
}

UpdateHealthCheckTemplateAttributeResponse Alibabacloud_Alb20200616::Client::updateHealthCheckTemplateAttributeWithOptions(shared_ptr<UpdateHealthCheckTemplateAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->healthCheckCodes)) {
    query->insert(pair<string, vector<string>>("HealthCheckCodes", *request->healthCheckCodes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckConnectPort)) {
    query->insert(pair<string, long>("HealthCheckConnectPort", *request->healthCheckConnectPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckHost)) {
    query->insert(pair<string, string>("HealthCheckHost", *request->healthCheckHost));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckHttpVersion)) {
    query->insert(pair<string, string>("HealthCheckHttpVersion", *request->healthCheckHttpVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckInterval)) {
    query->insert(pair<string, long>("HealthCheckInterval", *request->healthCheckInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckMethod)) {
    query->insert(pair<string, string>("HealthCheckMethod", *request->healthCheckMethod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckPath)) {
    query->insert(pair<string, string>("HealthCheckPath", *request->healthCheckPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckProtocol)) {
    query->insert(pair<string, string>("HealthCheckProtocol", *request->healthCheckProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckTemplateId)) {
    query->insert(pair<string, string>("HealthCheckTemplateId", *request->healthCheckTemplateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckTemplateName)) {
    query->insert(pair<string, string>("HealthCheckTemplateName", *request->healthCheckTemplateName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckTimeout)) {
    query->insert(pair<string, long>("HealthCheckTimeout", *request->healthCheckTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthyThreshold)) {
    query->insert(pair<string, long>("HealthyThreshold", *request->healthyThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->unhealthyThreshold)) {
    query->insert(pair<string, long>("UnhealthyThreshold", *request->unhealthyThreshold));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateHealthCheckTemplateAttribute"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateHealthCheckTemplateAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateHealthCheckTemplateAttributeResponse(execute(params, req, runtime));
  }
}

UpdateHealthCheckTemplateAttributeResponse Alibabacloud_Alb20200616::Client::updateHealthCheckTemplateAttribute(shared_ptr<UpdateHealthCheckTemplateAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateHealthCheckTemplateAttributeWithOptions(request, runtime);
}

UpdateListenerAttributeResponse Alibabacloud_Alb20200616::Client::updateListenerAttributeWithOptions(shared_ptr<UpdateListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpdateListenerAttributeRequestCaCertificates>>(request->caCertificates)) {
    query->insert(pair<string, vector<UpdateListenerAttributeRequestCaCertificates>>("CaCertificates", *request->caCertificates));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->caEnabled)) {
    query->insert(pair<string, bool>("CaEnabled", *request->caEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateListenerAttributeRequestCertificates>>(request->certificates)) {
    query->insert(pair<string, vector<UpdateListenerAttributeRequestCertificates>>("Certificates", *request->certificates));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateListenerAttributeRequestDefaultActions>>(request->defaultActions)) {
    query->insert(pair<string, vector<UpdateListenerAttributeRequestDefaultActions>>("DefaultActions", *request->defaultActions));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->gzipEnabled)) {
    query->insert(pair<string, bool>("GzipEnabled", *request->gzipEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->http2Enabled)) {
    query->insert(pair<string, bool>("Http2Enabled", *request->http2Enabled));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->idleTimeout)) {
    query->insert(pair<string, long>("IdleTimeout", *request->idleTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerDescription)) {
    query->insert(pair<string, string>("ListenerDescription", *request->listenerDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateListenerAttributeRequestQuicConfig>(request->quicConfig)) {
    query->insert(pair<string, UpdateListenerAttributeRequestQuicConfig>("QuicConfig", *request->quicConfig));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->requestTimeout)) {
    query->insert(pair<string, long>("RequestTimeout", *request->requestTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityPolicyId)) {
    query->insert(pair<string, string>("SecurityPolicyId", *request->securityPolicyId));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateListenerAttributeRequestXForwardedForConfig>(request->XForwardedForConfig)) {
    query->insert(pair<string, UpdateListenerAttributeRequestXForwardedForConfig>("XForwardedForConfig", *request->XForwardedForConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateListenerAttribute"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateListenerAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateListenerAttributeResponse(execute(params, req, runtime));
  }
}

UpdateListenerAttributeResponse Alibabacloud_Alb20200616::Client::updateListenerAttribute(shared_ptr<UpdateListenerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateListenerAttributeWithOptions(request, runtime);
}

UpdateListenerLogConfigResponse Alibabacloud_Alb20200616::Client::updateListenerLogConfigWithOptions(shared_ptr<UpdateListenerLogConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->accessLogRecordCustomizedHeadersEnabled)) {
    query->insert(pair<string, bool>("AccessLogRecordCustomizedHeadersEnabled", *request->accessLogRecordCustomizedHeadersEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateListenerLogConfigRequestAccessLogTracingConfig>(request->accessLogTracingConfig)) {
    query->insert(pair<string, UpdateListenerLogConfigRequestAccessLogTracingConfig>("AccessLogTracingConfig", *request->accessLogTracingConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateListenerLogConfig"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateListenerLogConfigResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateListenerLogConfigResponse(execute(params, req, runtime));
  }
}

UpdateListenerLogConfigResponse Alibabacloud_Alb20200616::Client::updateListenerLogConfig(shared_ptr<UpdateListenerLogConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateListenerLogConfigWithOptions(request, runtime);
}

UpdateLoadBalancerAddressTypeConfigResponse Alibabacloud_Alb20200616::Client::updateLoadBalancerAddressTypeConfigWithOptions(shared_ptr<UpdateLoadBalancerAddressTypeConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addressType)) {
    query->insert(pair<string, string>("AddressType", *request->addressType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dryRun)) {
    query->insert(pair<string, string>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateLoadBalancerAddressTypeConfigRequestZoneMappings>>(request->zoneMappings)) {
    query->insert(pair<string, vector<UpdateLoadBalancerAddressTypeConfigRequestZoneMappings>>("ZoneMappings", *request->zoneMappings));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLoadBalancerAddressTypeConfig"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateLoadBalancerAddressTypeConfigResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateLoadBalancerAddressTypeConfigResponse(execute(params, req, runtime));
  }
}

UpdateLoadBalancerAddressTypeConfigResponse Alibabacloud_Alb20200616::Client::updateLoadBalancerAddressTypeConfig(shared_ptr<UpdateLoadBalancerAddressTypeConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLoadBalancerAddressTypeConfigWithOptions(request, runtime);
}

UpdateLoadBalancerAttributeResponse Alibabacloud_Alb20200616::Client::updateLoadBalancerAttributeWithOptions(shared_ptr<UpdateLoadBalancerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerName)) {
    query->insert(pair<string, string>("LoadBalancerName", *request->loadBalancerName));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateLoadBalancerAttributeRequestModificationProtectionConfig>(request->modificationProtectionConfig)) {
    query->insert(pair<string, UpdateLoadBalancerAttributeRequestModificationProtectionConfig>("ModificationProtectionConfig", *request->modificationProtectionConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLoadBalancerAttribute"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateLoadBalancerAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateLoadBalancerAttributeResponse(execute(params, req, runtime));
  }
}

UpdateLoadBalancerAttributeResponse Alibabacloud_Alb20200616::Client::updateLoadBalancerAttribute(shared_ptr<UpdateLoadBalancerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLoadBalancerAttributeWithOptions(request, runtime);
}

UpdateLoadBalancerEditionResponse Alibabacloud_Alb20200616::Client::updateLoadBalancerEditionWithOptions(shared_ptr<UpdateLoadBalancerEditionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerEdition)) {
    query->insert(pair<string, string>("LoadBalancerEdition", *request->loadBalancerEdition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLoadBalancerEdition"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateLoadBalancerEditionResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateLoadBalancerEditionResponse(execute(params, req, runtime));
  }
}

UpdateLoadBalancerEditionResponse Alibabacloud_Alb20200616::Client::updateLoadBalancerEdition(shared_ptr<UpdateLoadBalancerEditionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLoadBalancerEditionWithOptions(request, runtime);
}

UpdateLoadBalancerZonesResponse Alibabacloud_Alb20200616::Client::updateLoadBalancerZonesWithOptions(shared_ptr<UpdateLoadBalancerZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateLoadBalancerZonesRequestZoneMappings>>(request->zoneMappings)) {
    query->insert(pair<string, vector<UpdateLoadBalancerZonesRequestZoneMappings>>("ZoneMappings", *request->zoneMappings));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLoadBalancerZones"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateLoadBalancerZonesResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateLoadBalancerZonesResponse(execute(params, req, runtime));
  }
}

UpdateLoadBalancerZonesResponse Alibabacloud_Alb20200616::Client::updateLoadBalancerZones(shared_ptr<UpdateLoadBalancerZonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLoadBalancerZonesWithOptions(request, runtime);
}

UpdateRuleAttributeResponse Alibabacloud_Alb20200616::Client::updateRuleAttributeWithOptions(shared_ptr<UpdateRuleAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    query->insert(pair<string, long>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateRuleAttributeRequestRuleActions>>(request->ruleActions)) {
    query->insert(pair<string, vector<UpdateRuleAttributeRequestRuleActions>>("RuleActions", *request->ruleActions));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateRuleAttributeRequestRuleConditions>>(request->ruleConditions)) {
    query->insert(pair<string, vector<UpdateRuleAttributeRequestRuleConditions>>("RuleConditions", *request->ruleConditions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRuleAttribute"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateRuleAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateRuleAttributeResponse(execute(params, req, runtime));
  }
}

UpdateRuleAttributeResponse Alibabacloud_Alb20200616::Client::updateRuleAttribute(shared_ptr<UpdateRuleAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRuleAttributeWithOptions(request, runtime);
}

UpdateRulesAttributeResponse Alibabacloud_Alb20200616::Client::updateRulesAttributeWithOptions(shared_ptr<UpdateRulesAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpdateRulesAttributeRequestRules>>(request->rules)) {
    bodyFlat->insert(pair<string, vector<UpdateRulesAttributeRequestRules>>("Rules", *request->rules));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRulesAttribute"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateRulesAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateRulesAttributeResponse(execute(params, req, runtime));
  }
}

UpdateRulesAttributeResponse Alibabacloud_Alb20200616::Client::updateRulesAttribute(shared_ptr<UpdateRulesAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRulesAttributeWithOptions(request, runtime);
}

UpdateSecurityPolicyAttributeResponse Alibabacloud_Alb20200616::Client::updateSecurityPolicyAttributeWithOptions(shared_ptr<UpdateSecurityPolicyAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ciphers)) {
    query->insert(pair<string, vector<string>>("Ciphers", *request->ciphers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityPolicyId)) {
    query->insert(pair<string, string>("SecurityPolicyId", *request->securityPolicyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityPolicyName)) {
    query->insert(pair<string, string>("SecurityPolicyName", *request->securityPolicyName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->TLSVersions)) {
    query->insert(pair<string, vector<string>>("TLSVersions", *request->TLSVersions));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSecurityPolicyAttribute"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateSecurityPolicyAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateSecurityPolicyAttributeResponse(execute(params, req, runtime));
  }
}

UpdateSecurityPolicyAttributeResponse Alibabacloud_Alb20200616::Client::updateSecurityPolicyAttribute(shared_ptr<UpdateSecurityPolicyAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSecurityPolicyAttributeWithOptions(request, runtime);
}

UpdateServerGroupAttributeResponse Alibabacloud_Alb20200616::Client::updateServerGroupAttributeWithOptions(shared_ptr<UpdateServerGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateServerGroupAttributeRequestConnectionDrainConfig>(request->connectionDrainConfig)) {
    query->insert(pair<string, UpdateServerGroupAttributeRequestConnectionDrainConfig>("ConnectionDrainConfig", *request->connectionDrainConfig));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->crossZoneEnabled)) {
    query->insert(pair<string, bool>("CrossZoneEnabled", *request->crossZoneEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateServerGroupAttributeRequestHealthCheckConfig>(request->healthCheckConfig)) {
    query->insert(pair<string, UpdateServerGroupAttributeRequestHealthCheckConfig>("HealthCheckConfig", *request->healthCheckConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduler)) {
    query->insert(pair<string, string>("Scheduler", *request->scheduler));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverGroupId)) {
    query->insert(pair<string, string>("ServerGroupId", *request->serverGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverGroupName)) {
    query->insert(pair<string, string>("ServerGroupName", *request->serverGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateServerGroupAttributeRequestSlowStartConfig>(request->slowStartConfig)) {
    query->insert(pair<string, UpdateServerGroupAttributeRequestSlowStartConfig>("SlowStartConfig", *request->slowStartConfig));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateServerGroupAttributeRequestStickySessionConfig>(request->stickySessionConfig)) {
    query->insert(pair<string, UpdateServerGroupAttributeRequestStickySessionConfig>("StickySessionConfig", *request->stickySessionConfig));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateServerGroupAttributeRequestUchConfig>(request->uchConfig)) {
    query->insert(pair<string, UpdateServerGroupAttributeRequestUchConfig>("UchConfig", *request->uchConfig));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->upstreamKeepaliveEnabled)) {
    query->insert(pair<string, bool>("UpstreamKeepaliveEnabled", *request->upstreamKeepaliveEnabled));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateServerGroupAttribute"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateServerGroupAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateServerGroupAttributeResponse(execute(params, req, runtime));
  }
}

UpdateServerGroupAttributeResponse Alibabacloud_Alb20200616::Client::updateServerGroupAttribute(shared_ptr<UpdateServerGroupAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateServerGroupAttributeWithOptions(request, runtime);
}

UpdateServerGroupServersAttributeResponse Alibabacloud_Alb20200616::Client::updateServerGroupServersAttributeWithOptions(shared_ptr<UpdateServerGroupServersAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverGroupId)) {
    query->insert(pair<string, string>("ServerGroupId", *request->serverGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateServerGroupServersAttributeRequestServers>>(request->servers)) {
    query->insert(pair<string, vector<UpdateServerGroupServersAttributeRequestServers>>("Servers", *request->servers));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateServerGroupServersAttribute"))},
    {"version", boost::any(string("2020-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateServerGroupServersAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateServerGroupServersAttributeResponse(execute(params, req, runtime));
  }
}

UpdateServerGroupServersAttributeResponse Alibabacloud_Alb20200616::Client::updateServerGroupServersAttribute(shared_ptr<UpdateServerGroupServersAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateServerGroupServersAttributeWithOptions(request, runtime);
}

