// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ga_20191120.hpp>
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

using namespace Alibabacloud_Ga20191120;

Alibabacloud_Ga20191120::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("ga"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Ga20191120::Client::getEndpoint(shared_ptr<string> productId,
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

AddEntriesToAclResponse Alibabacloud_Ga20191120::Client::addEntriesToAclWithOptions(shared_ptr<AddEntriesToAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddEntriesToAcl"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddEntriesToAclResponse(callApi(params, req, runtime));
}

AddEntriesToAclResponse Alibabacloud_Ga20191120::Client::addEntriesToAcl(shared_ptr<AddEntriesToAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addEntriesToAclWithOptions(request, runtime);
}

AssociateAclsWithListenerResponse Alibabacloud_Ga20191120::Client::associateAclsWithListenerWithOptions(shared_ptr<AssociateAclsWithListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssociateAclsWithListener"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AssociateAclsWithListenerResponse(callApi(params, req, runtime));
}

AssociateAclsWithListenerResponse Alibabacloud_Ga20191120::Client::associateAclsWithListener(shared_ptr<AssociateAclsWithListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateAclsWithListenerWithOptions(request, runtime);
}

AssociateAdditionalCertificatesWithListenerResponse Alibabacloud_Ga20191120::Client::associateAdditionalCertificatesWithListenerWithOptions(shared_ptr<AssociateAdditionalCertificatesWithListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AssociateAdditionalCertificatesWithListenerRequestCertificates>>(request->certificates)) {
    query->insert(pair<string, vector<AssociateAdditionalCertificatesWithListenerRequestCertificates>>("Certificates", *request->certificates));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssociateAdditionalCertificatesWithListener"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AssociateAdditionalCertificatesWithListenerResponse(callApi(params, req, runtime));
}

AssociateAdditionalCertificatesWithListenerResponse Alibabacloud_Ga20191120::Client::associateAdditionalCertificatesWithListener(shared_ptr<AssociateAdditionalCertificatesWithListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateAdditionalCertificatesWithListenerWithOptions(request, runtime);
}

AttachDdosToAcceleratorResponse Alibabacloud_Ga20191120::Client::attachDdosToAcceleratorWithOptions(shared_ptr<AttachDdosToAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ddosId)) {
    query->insert(pair<string, string>("DdosId", *request->ddosId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ddosRegionId)) {
    query->insert(pair<string, string>("DdosRegionId", *request->ddosRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachDdosToAccelerator"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachDdosToAcceleratorResponse(callApi(params, req, runtime));
}

AttachDdosToAcceleratorResponse Alibabacloud_Ga20191120::Client::attachDdosToAccelerator(shared_ptr<AttachDdosToAcceleratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachDdosToAcceleratorWithOptions(request, runtime);
}

AttachLogStoreToEndpointGroupResponse Alibabacloud_Ga20191120::Client::attachLogStoreToEndpointGroupWithOptions(shared_ptr<AttachLogStoreToEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->endpointGroupIds)) {
    query->insert(pair<string, vector<string>>("EndpointGroupIds", *request->endpointGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slsLogStoreName)) {
    query->insert(pair<string, string>("SlsLogStoreName", *request->slsLogStoreName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slsProjectName)) {
    query->insert(pair<string, string>("SlsProjectName", *request->slsProjectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slsRegionId)) {
    query->insert(pair<string, string>("SlsRegionId", *request->slsRegionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachLogStoreToEndpointGroup"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachLogStoreToEndpointGroupResponse(callApi(params, req, runtime));
}

AttachLogStoreToEndpointGroupResponse Alibabacloud_Ga20191120::Client::attachLogStoreToEndpointGroup(shared_ptr<AttachLogStoreToEndpointGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachLogStoreToEndpointGroupWithOptions(request, runtime);
}

BandwidthPackageAddAcceleratorResponse Alibabacloud_Ga20191120::Client::bandwidthPackageAddAcceleratorWithOptions(shared_ptr<BandwidthPackageAddAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bandwidthPackageId)) {
    query->insert(pair<string, string>("BandwidthPackageId", *request->bandwidthPackageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BandwidthPackageAddAccelerator"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BandwidthPackageAddAcceleratorResponse(callApi(params, req, runtime));
}

BandwidthPackageAddAcceleratorResponse Alibabacloud_Ga20191120::Client::bandwidthPackageAddAccelerator(shared_ptr<BandwidthPackageAddAcceleratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bandwidthPackageAddAcceleratorWithOptions(request, runtime);
}

BandwidthPackageRemoveAcceleratorResponse Alibabacloud_Ga20191120::Client::bandwidthPackageRemoveAcceleratorWithOptions(shared_ptr<BandwidthPackageRemoveAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bandwidthPackageId)) {
    query->insert(pair<string, string>("BandwidthPackageId", *request->bandwidthPackageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BandwidthPackageRemoveAccelerator"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BandwidthPackageRemoveAcceleratorResponse(callApi(params, req, runtime));
}

BandwidthPackageRemoveAcceleratorResponse Alibabacloud_Ga20191120::Client::bandwidthPackageRemoveAccelerator(shared_ptr<BandwidthPackageRemoveAcceleratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bandwidthPackageRemoveAcceleratorWithOptions(request, runtime);
}

ChangeResourceGroupResponse Alibabacloud_Ga20191120::Client::changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newResourceGroupId)) {
    query->insert(pair<string, string>("NewResourceGroupId", *request->newResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
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
    {"action", boost::any(string("ChangeResourceGroup"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeResourceGroupResponse(callApi(params, req, runtime));
}

ChangeResourceGroupResponse Alibabacloud_Ga20191120::Client::changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeResourceGroupWithOptions(request, runtime);
}

ConfigEndpointProbeResponse Alibabacloud_Ga20191120::Client::configEndpointProbeWithOptions(shared_ptr<ConfigEndpointProbeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enable)) {
    query->insert(pair<string, string>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpoint)) {
    query->insert(pair<string, string>("Endpoint", *request->endpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupId)) {
    query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointType)) {
    query->insert(pair<string, string>("EndpointType", *request->endpointType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->probePort)) {
    query->insert(pair<string, string>("ProbePort", *request->probePort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->probeProtocol)) {
    query->insert(pair<string, string>("ProbeProtocol", *request->probeProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfigEndpointProbe"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfigEndpointProbeResponse(callApi(params, req, runtime));
}

ConfigEndpointProbeResponse Alibabacloud_Ga20191120::Client::configEndpointProbe(shared_ptr<ConfigEndpointProbeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return configEndpointProbeWithOptions(request, runtime);
}

CreateAcceleratorResponse Alibabacloud_Ga20191120::Client::createAcceleratorWithOptions(shared_ptr<CreateAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRenew)) {
    query->insert(pair<string, bool>("AutoRenew", *request->autoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->autoRenewDuration)) {
    query->insert(pair<string, long>("AutoRenewDuration", *request->autoRenewDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->autoUseCoupon)) {
    query->insert(pair<string, string>("AutoUseCoupon", *request->autoUseCoupon));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bandwidthBillingType)) {
    query->insert(pair<string, string>("BandwidthBillingType", *request->bandwidthBillingType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->duration)) {
    query->insert(pair<string, long>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceChargeType)) {
    query->insert(pair<string, string>("InstanceChargeType", *request->instanceChargeType));
  }
  if (!Darabonba_Util::Client::isUnset<CreateAcceleratorRequestIpSetConfig>(request->ipSetConfig)) {
    query->insert(pair<string, CreateAcceleratorRequestIpSetConfig>("IpSetConfig", *request->ipSetConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pricingCycle)) {
    query->insert(pair<string, string>("PricingCycle", *request->pricingCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionOptionNo)) {
    query->insert(pair<string, string>("PromotionOptionNo", *request->promotionOptionNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spec)) {
    query->insert(pair<string, string>("Spec", *request->spec));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateAcceleratorRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateAcceleratorRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAccelerator"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAcceleratorResponse(callApi(params, req, runtime));
}

CreateAcceleratorResponse Alibabacloud_Ga20191120::Client::createAccelerator(shared_ptr<CreateAcceleratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAcceleratorWithOptions(request, runtime);
}

CreateAclResponse Alibabacloud_Ga20191120::Client::createAclWithOptions(shared_ptr<CreateAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateAclRequestAclEntries>>(request->aclEntries)) {
    query->insert(pair<string, vector<CreateAclRequestAclEntries>>("AclEntries", *request->aclEntries));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclName)) {
    query->insert(pair<string, string>("AclName", *request->aclName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->addressIPVersion)) {
    query->insert(pair<string, string>("AddressIPVersion", *request->addressIPVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
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
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAclResponse(callApi(params, req, runtime));
}

CreateAclResponse Alibabacloud_Ga20191120::Client::createAcl(shared_ptr<CreateAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAclWithOptions(request, runtime);
}

CreateApplicationMonitorResponse Alibabacloud_Ga20191120::Client::createApplicationMonitorWithOptions(shared_ptr<CreateApplicationMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("Address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->detectEnable)) {
    query->insert(pair<string, bool>("DetectEnable", *request->detectEnable));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->detectThreshold)) {
    query->insert(pair<string, long>("DetectThreshold", *request->detectThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->detectTimes)) {
    query->insert(pair<string, long>("DetectTimes", *request->detectTimes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->optionsJson)) {
    query->insert(pair<string, string>("OptionsJson", *request->optionsJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->silenceTime)) {
    query->insert(pair<string, long>("SilenceTime", *request->silenceTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    query->insert(pair<string, string>("TaskName", *request->taskName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateApplicationMonitor"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateApplicationMonitorResponse(callApi(params, req, runtime));
}

CreateApplicationMonitorResponse Alibabacloud_Ga20191120::Client::createApplicationMonitor(shared_ptr<CreateApplicationMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createApplicationMonitorWithOptions(request, runtime);
}

CreateBandwidthPackageResponse Alibabacloud_Ga20191120::Client::createBandwidthPackageWithOptions(shared_ptr<CreateBandwidthPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRenew)) {
    query->insert(pair<string, bool>("AutoRenew", *request->autoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->autoRenewDuration)) {
    query->insert(pair<string, long>("AutoRenewDuration", *request->autoRenewDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->autoUseCoupon)) {
    query->insert(pair<string, string>("AutoUseCoupon", *request->autoUseCoupon));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bandwidth)) {
    query->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bandwidthType)) {
    query->insert(pair<string, string>("BandwidthType", *request->bandwidthType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->billingType)) {
    query->insert(pair<string, string>("BillingType", *request->billingType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cbnGeographicRegionIdA)) {
    query->insert(pair<string, string>("CbnGeographicRegionIdA", *request->cbnGeographicRegionIdA));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cbnGeographicRegionIdB)) {
    query->insert(pair<string, string>("CbnGeographicRegionIdB", *request->cbnGeographicRegionIdB));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    query->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->duration)) {
    query->insert(pair<string, string>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pricingCycle)) {
    query->insert(pair<string, string>("PricingCycle", *request->pricingCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionOptionNo)) {
    query->insert(pair<string, string>("PromotionOptionNo", *request->promotionOptionNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ratio)) {
    query->insert(pair<string, long>("Ratio", *request->ratio));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateBandwidthPackageRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateBandwidthPackageRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBandwidthPackage"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBandwidthPackageResponse(callApi(params, req, runtime));
}

CreateBandwidthPackageResponse Alibabacloud_Ga20191120::Client::createBandwidthPackage(shared_ptr<CreateBandwidthPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBandwidthPackageWithOptions(request, runtime);
}

CreateBasicAccelerateIpResponse Alibabacloud_Ga20191120::Client::createBasicAccelerateIpWithOptions(shared_ptr<CreateBasicAccelerateIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipSetId)) {
    query->insert(pair<string, string>("IpSetId", *request->ipSetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBasicAccelerateIp"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBasicAccelerateIpResponse(callApi(params, req, runtime));
}

CreateBasicAccelerateIpResponse Alibabacloud_Ga20191120::Client::createBasicAccelerateIp(shared_ptr<CreateBasicAccelerateIpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBasicAccelerateIpWithOptions(request, runtime);
}

CreateBasicAccelerateIpEndpointRelationResponse Alibabacloud_Ga20191120::Client::createBasicAccelerateIpEndpointRelationWithOptions(shared_ptr<CreateBasicAccelerateIpEndpointRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accelerateIpId)) {
    query->insert(pair<string, string>("AccelerateIpId", *request->accelerateIpId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointId)) {
    query->insert(pair<string, string>("EndpointId", *request->endpointId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBasicAccelerateIpEndpointRelation"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBasicAccelerateIpEndpointRelationResponse(callApi(params, req, runtime));
}

CreateBasicAccelerateIpEndpointRelationResponse Alibabacloud_Ga20191120::Client::createBasicAccelerateIpEndpointRelation(shared_ptr<CreateBasicAccelerateIpEndpointRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBasicAccelerateIpEndpointRelationWithOptions(request, runtime);
}

CreateBasicAccelerateIpEndpointRelationsResponse Alibabacloud_Ga20191120::Client::createBasicAccelerateIpEndpointRelationsWithOptions(shared_ptr<CreateBasicAccelerateIpEndpointRelationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateBasicAccelerateIpEndpointRelationsRequestAccelerateIpEndpointRelations>>(request->accelerateIpEndpointRelations)) {
    query->insert(pair<string, vector<CreateBasicAccelerateIpEndpointRelationsRequestAccelerateIpEndpointRelations>>("AccelerateIpEndpointRelations", *request->accelerateIpEndpointRelations));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBasicAccelerateIpEndpointRelations"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBasicAccelerateIpEndpointRelationsResponse(callApi(params, req, runtime));
}

CreateBasicAccelerateIpEndpointRelationsResponse Alibabacloud_Ga20191120::Client::createBasicAccelerateIpEndpointRelations(shared_ptr<CreateBasicAccelerateIpEndpointRelationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBasicAccelerateIpEndpointRelationsWithOptions(request, runtime);
}

CreateBasicAcceleratorResponse Alibabacloud_Ga20191120::Client::createBasicAcceleratorWithOptions(shared_ptr<CreateBasicAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRenew)) {
    query->insert(pair<string, bool>("AutoRenew", *request->autoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->autoRenewDuration)) {
    query->insert(pair<string, long>("AutoRenewDuration", *request->autoRenewDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->autoUseCoupon)) {
    query->insert(pair<string, string>("AutoUseCoupon", *request->autoUseCoupon));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bandwidthBillingType)) {
    query->insert(pair<string, string>("BandwidthBillingType", *request->bandwidthBillingType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    query->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->duration)) {
    query->insert(pair<string, long>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pricingCycle)) {
    query->insert(pair<string, string>("PricingCycle", *request->pricingCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionOptionNo)) {
    query->insert(pair<string, string>("PromotionOptionNo", *request->promotionOptionNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateBasicAcceleratorRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateBasicAcceleratorRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBasicAccelerator"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBasicAcceleratorResponse(callApi(params, req, runtime));
}

CreateBasicAcceleratorResponse Alibabacloud_Ga20191120::Client::createBasicAccelerator(shared_ptr<CreateBasicAcceleratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBasicAcceleratorWithOptions(request, runtime);
}

CreateBasicEndpointResponse Alibabacloud_Ga20191120::Client::createBasicEndpointWithOptions(shared_ptr<CreateBasicEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointAddress)) {
    query->insert(pair<string, string>("EndpointAddress", *request->endpointAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupId)) {
    query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointSubAddress)) {
    query->insert(pair<string, string>("EndpointSubAddress", *request->endpointSubAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointSubAddressType)) {
    query->insert(pair<string, string>("EndpointSubAddressType", *request->endpointSubAddressType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointType)) {
    query->insert(pair<string, string>("EndpointType", *request->endpointType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointZoneId)) {
    query->insert(pair<string, string>("EndpointZoneId", *request->endpointZoneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBasicEndpoint"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBasicEndpointResponse(callApi(params, req, runtime));
}

CreateBasicEndpointResponse Alibabacloud_Ga20191120::Client::createBasicEndpoint(shared_ptr<CreateBasicEndpointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBasicEndpointWithOptions(request, runtime);
}

CreateBasicEndpointGroupResponse Alibabacloud_Ga20191120::Client::createBasicEndpointGroupWithOptions(shared_ptr<CreateBasicEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointAddress)) {
    query->insert(pair<string, string>("EndpointAddress", *request->endpointAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupRegion)) {
    query->insert(pair<string, string>("EndpointGroupRegion", *request->endpointGroupRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointSubAddress)) {
    query->insert(pair<string, string>("EndpointSubAddress", *request->endpointSubAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointType)) {
    query->insert(pair<string, string>("EndpointType", *request->endpointType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBasicEndpointGroup"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBasicEndpointGroupResponse(callApi(params, req, runtime));
}

CreateBasicEndpointGroupResponse Alibabacloud_Ga20191120::Client::createBasicEndpointGroup(shared_ptr<CreateBasicEndpointGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBasicEndpointGroupWithOptions(request, runtime);
}

CreateBasicEndpointsResponse Alibabacloud_Ga20191120::Client::createBasicEndpointsWithOptions(shared_ptr<CreateBasicEndpointsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupId)) {
    query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateBasicEndpointsRequestEndpoints>>(request->endpoints)) {
    query->insert(pair<string, vector<CreateBasicEndpointsRequestEndpoints>>("Endpoints", *request->endpoints));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBasicEndpoints"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBasicEndpointsResponse(callApi(params, req, runtime));
}

CreateBasicEndpointsResponse Alibabacloud_Ga20191120::Client::createBasicEndpoints(shared_ptr<CreateBasicEndpointsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBasicEndpointsWithOptions(request, runtime);
}

CreateBasicIpSetResponse Alibabacloud_Ga20191120::Client::createBasicIpSetWithOptions(shared_ptr<CreateBasicIpSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accelerateRegionId)) {
    query->insert(pair<string, string>("AccelerateRegionId", *request->accelerateRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bandwidth)) {
    query->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ispType)) {
    query->insert(pair<string, string>("IspType", *request->ispType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBasicIpSet"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBasicIpSetResponse(callApi(params, req, runtime));
}

CreateBasicIpSetResponse Alibabacloud_Ga20191120::Client::createBasicIpSet(shared_ptr<CreateBasicIpSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBasicIpSetWithOptions(request, runtime);
}

CreateCustomRoutingEndpointGroupDestinationsResponse Alibabacloud_Ga20191120::Client::createCustomRoutingEndpointGroupDestinationsWithOptions(shared_ptr<CreateCustomRoutingEndpointGroupDestinationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateCustomRoutingEndpointGroupDestinationsRequestDestinationConfigurations>>(request->destinationConfigurations)) {
    query->insert(pair<string, vector<CreateCustomRoutingEndpointGroupDestinationsRequestDestinationConfigurations>>("DestinationConfigurations", *request->destinationConfigurations));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupId)) {
    query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCustomRoutingEndpointGroupDestinations"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCustomRoutingEndpointGroupDestinationsResponse(callApi(params, req, runtime));
}

CreateCustomRoutingEndpointGroupDestinationsResponse Alibabacloud_Ga20191120::Client::createCustomRoutingEndpointGroupDestinations(shared_ptr<CreateCustomRoutingEndpointGroupDestinationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCustomRoutingEndpointGroupDestinationsWithOptions(request, runtime);
}

CreateCustomRoutingEndpointGroupsResponse Alibabacloud_Ga20191120::Client::createCustomRoutingEndpointGroupsWithOptions(shared_ptr<CreateCustomRoutingEndpointGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateCustomRoutingEndpointGroupsRequestEndpointGroupConfigurations>>(request->endpointGroupConfigurations)) {
    query->insert(pair<string, vector<CreateCustomRoutingEndpointGroupsRequestEndpointGroupConfigurations>>("EndpointGroupConfigurations", *request->endpointGroupConfigurations));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCustomRoutingEndpointGroups"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCustomRoutingEndpointGroupsResponse(callApi(params, req, runtime));
}

CreateCustomRoutingEndpointGroupsResponse Alibabacloud_Ga20191120::Client::createCustomRoutingEndpointGroups(shared_ptr<CreateCustomRoutingEndpointGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCustomRoutingEndpointGroupsWithOptions(request, runtime);
}

CreateCustomRoutingEndpointTrafficPoliciesResponse Alibabacloud_Ga20191120::Client::createCustomRoutingEndpointTrafficPoliciesWithOptions(shared_ptr<CreateCustomRoutingEndpointTrafficPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointId)) {
    query->insert(pair<string, string>("EndpointId", *request->endpointId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateCustomRoutingEndpointTrafficPoliciesRequestPolicyConfigurations>>(request->policyConfigurations)) {
    query->insert(pair<string, vector<CreateCustomRoutingEndpointTrafficPoliciesRequestPolicyConfigurations>>("PolicyConfigurations", *request->policyConfigurations));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCustomRoutingEndpointTrafficPolicies"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCustomRoutingEndpointTrafficPoliciesResponse(callApi(params, req, runtime));
}

CreateCustomRoutingEndpointTrafficPoliciesResponse Alibabacloud_Ga20191120::Client::createCustomRoutingEndpointTrafficPolicies(shared_ptr<CreateCustomRoutingEndpointTrafficPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCustomRoutingEndpointTrafficPoliciesWithOptions(request, runtime);
}

CreateCustomRoutingEndpointsResponse Alibabacloud_Ga20191120::Client::createCustomRoutingEndpointsWithOptions(shared_ptr<CreateCustomRoutingEndpointsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateCustomRoutingEndpointsRequestEndpointConfigurations>>(request->endpointConfigurations)) {
    query->insert(pair<string, vector<CreateCustomRoutingEndpointsRequestEndpointConfigurations>>("EndpointConfigurations", *request->endpointConfigurations));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupId)) {
    query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCustomRoutingEndpoints"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCustomRoutingEndpointsResponse(callApi(params, req, runtime));
}

CreateCustomRoutingEndpointsResponse Alibabacloud_Ga20191120::Client::createCustomRoutingEndpoints(shared_ptr<CreateCustomRoutingEndpointsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCustomRoutingEndpointsWithOptions(request, runtime);
}

CreateDomainResponse Alibabacloud_Ga20191120::Client::createDomainWithOptions(shared_ptr<CreateDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->acceleratorIds)) {
    query->insert(pair<string, vector<string>>("AcceleratorIds", *request->acceleratorIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDomain"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDomainResponse(callApi(params, req, runtime));
}

CreateDomainResponse Alibabacloud_Ga20191120::Client::createDomain(shared_ptr<CreateDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDomainWithOptions(request, runtime);
}

CreateEndpointGroupResponse Alibabacloud_Ga20191120::Client::createEndpointGroupWithOptions(shared_ptr<CreateEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateEndpointGroupRequestEndpointConfigurations>>(request->endpointConfigurations)) {
    query->insert(pair<string, vector<CreateEndpointGroupRequestEndpointConfigurations>>("EndpointConfigurations", *request->endpointConfigurations));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupRegion)) {
    query->insert(pair<string, string>("EndpointGroupRegion", *request->endpointGroupRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupType)) {
    query->insert(pair<string, string>("EndpointGroupType", *request->endpointGroupType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointProtocolVersion)) {
    query->insert(pair<string, string>("EndpointProtocolVersion", *request->endpointProtocolVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointRequestProtocol)) {
    query->insert(pair<string, string>("EndpointRequestProtocol", *request->endpointRequestProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->healthCheckEnabled)) {
    query->insert(pair<string, bool>("HealthCheckEnabled", *request->healthCheckEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckIntervalSeconds)) {
    query->insert(pair<string, long>("HealthCheckIntervalSeconds", *request->healthCheckIntervalSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckPath)) {
    query->insert(pair<string, string>("HealthCheckPath", *request->healthCheckPath));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckPort)) {
    query->insert(pair<string, long>("HealthCheckPort", *request->healthCheckPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckProtocol)) {
    query->insert(pair<string, string>("HealthCheckProtocol", *request->healthCheckProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateEndpointGroupRequestPortOverrides>>(request->portOverrides)) {
    query->insert(pair<string, vector<CreateEndpointGroupRequestPortOverrides>>("PortOverrides", *request->portOverrides));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateEndpointGroupRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateEndpointGroupRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->thresholdCount)) {
    query->insert(pair<string, long>("ThresholdCount", *request->thresholdCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->trafficPercentage)) {
    query->insert(pair<string, long>("TrafficPercentage", *request->trafficPercentage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEndpointGroup"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEndpointGroupResponse(callApi(params, req, runtime));
}

CreateEndpointGroupResponse Alibabacloud_Ga20191120::Client::createEndpointGroup(shared_ptr<CreateEndpointGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEndpointGroupWithOptions(request, runtime);
}

CreateEndpointGroupsResponse Alibabacloud_Ga20191120::Client::createEndpointGroupsWithOptions(shared_ptr<CreateEndpointGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateEndpointGroupsRequestEndpointGroupConfigurations>>(request->endpointGroupConfigurations)) {
    bodyFlat->insert(pair<string, vector<CreateEndpointGroupsRequestEndpointGroupConfigurations>>("EndpointGroupConfigurations", *request->endpointGroupConfigurations));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEndpointGroups"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEndpointGroupsResponse(callApi(params, req, runtime));
}

CreateEndpointGroupsResponse Alibabacloud_Ga20191120::Client::createEndpointGroups(shared_ptr<CreateEndpointGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEndpointGroupsWithOptions(request, runtime);
}

CreateForwardingRulesResponse Alibabacloud_Ga20191120::Client::createForwardingRulesWithOptions(shared_ptr<CreateForwardingRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateForwardingRulesRequestForwardingRules>>(request->forwardingRules)) {
    bodyFlat->insert(pair<string, vector<CreateForwardingRulesRequestForwardingRules>>("ForwardingRules", *request->forwardingRules));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateForwardingRules"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateForwardingRulesResponse(callApi(params, req, runtime));
}

CreateForwardingRulesResponse Alibabacloud_Ga20191120::Client::createForwardingRules(shared_ptr<CreateForwardingRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createForwardingRulesWithOptions(request, runtime);
}

CreateIpSetsResponse Alibabacloud_Ga20191120::Client::createIpSetsWithOptions(shared_ptr<CreateIpSetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateIpSetsRequestAccelerateRegion>>(request->accelerateRegion)) {
    query->insert(pair<string, vector<CreateIpSetsRequestAccelerateRegion>>("AccelerateRegion", *request->accelerateRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateIpSets"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateIpSetsResponse(callApi(params, req, runtime));
}

CreateIpSetsResponse Alibabacloud_Ga20191120::Client::createIpSets(shared_ptr<CreateIpSetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createIpSetsWithOptions(request, runtime);
}

CreateListenerResponse Alibabacloud_Ga20191120::Client::createListenerWithOptions(shared_ptr<CreateListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateListenerRequestCertificates>>(request->certificates)) {
    query->insert(pair<string, vector<CreateListenerRequestCertificates>>("Certificates", *request->certificates));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientAffinity)) {
    query->insert(pair<string, string>("ClientAffinity", *request->clientAffinity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateListenerRequestCustomRoutingEndpointGroupConfigurations>>(request->customRoutingEndpointGroupConfigurations)) {
    query->insert(pair<string, vector<CreateListenerRequestCustomRoutingEndpointGroupConfigurations>>("CustomRoutingEndpointGroupConfigurations", *request->customRoutingEndpointGroupConfigurations));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateListenerRequestEndpointGroupConfigurations>>(request->endpointGroupConfigurations)) {
    query->insert(pair<string, vector<CreateListenerRequestEndpointGroupConfigurations>>("EndpointGroupConfigurations", *request->endpointGroupConfigurations));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpVersion)) {
    query->insert(pair<string, string>("HttpVersion", *request->httpVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->idleTimeout)) {
    query->insert(pair<string, long>("IdleTimeout", *request->idleTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateListenerRequestPortRanges>>(request->portRanges)) {
    query->insert(pair<string, vector<CreateListenerRequestPortRanges>>("PortRanges", *request->portRanges));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocol)) {
    query->insert(pair<string, string>("Protocol", *request->protocol));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->proxyProtocol)) {
    query->insert(pair<string, bool>("ProxyProtocol", *request->proxyProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->requestTimeout)) {
    query->insert(pair<string, long>("RequestTimeout", *request->requestTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityPolicyId)) {
    query->insert(pair<string, string>("SecurityPolicyId", *request->securityPolicyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<CreateListenerRequestXForwardedForConfig>(request->XForwardedForConfig)) {
    query->insert(pair<string, CreateListenerRequestXForwardedForConfig>("XForwardedForConfig", *request->XForwardedForConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateListener"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateListenerResponse(callApi(params, req, runtime));
}

CreateListenerResponse Alibabacloud_Ga20191120::Client::createListener(shared_ptr<CreateListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createListenerWithOptions(request, runtime);
}

CreateSpareIpsResponse Alibabacloud_Ga20191120::Client::createSpareIpsWithOptions(shared_ptr<CreateSpareIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->spareIps)) {
    query->insert(pair<string, vector<string>>("SpareIps", *request->spareIps));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSpareIps"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSpareIpsResponse(callApi(params, req, runtime));
}

CreateSpareIpsResponse Alibabacloud_Ga20191120::Client::createSpareIps(shared_ptr<CreateSpareIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSpareIpsWithOptions(request, runtime);
}

DeleteAcceleratorResponse Alibabacloud_Ga20191120::Client::deleteAcceleratorWithOptions(shared_ptr<DeleteAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAccelerator"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAcceleratorResponse(callApi(params, req, runtime));
}

DeleteAcceleratorResponse Alibabacloud_Ga20191120::Client::deleteAccelerator(shared_ptr<DeleteAcceleratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAcceleratorWithOptions(request, runtime);
}

DeleteAclResponse Alibabacloud_Ga20191120::Client::deleteAclWithOptions(shared_ptr<DeleteAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAcl"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAclResponse(callApi(params, req, runtime));
}

DeleteAclResponse Alibabacloud_Ga20191120::Client::deleteAcl(shared_ptr<DeleteAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAclWithOptions(request, runtime);
}

DeleteApplicationMonitorResponse Alibabacloud_Ga20191120::Client::deleteApplicationMonitorWithOptions(shared_ptr<DeleteApplicationMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteApplicationMonitor"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteApplicationMonitorResponse(callApi(params, req, runtime));
}

DeleteApplicationMonitorResponse Alibabacloud_Ga20191120::Client::deleteApplicationMonitor(shared_ptr<DeleteApplicationMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteApplicationMonitorWithOptions(request, runtime);
}

DeleteBandwidthPackageResponse Alibabacloud_Ga20191120::Client::deleteBandwidthPackageWithOptions(shared_ptr<DeleteBandwidthPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bandwidthPackageId)) {
    query->insert(pair<string, string>("BandwidthPackageId", *request->bandwidthPackageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBandwidthPackage"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteBandwidthPackageResponse(callApi(params, req, runtime));
}

DeleteBandwidthPackageResponse Alibabacloud_Ga20191120::Client::deleteBandwidthPackage(shared_ptr<DeleteBandwidthPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBandwidthPackageWithOptions(request, runtime);
}

DeleteBasicAccelerateIpResponse Alibabacloud_Ga20191120::Client::deleteBasicAccelerateIpWithOptions(shared_ptr<DeleteBasicAccelerateIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accelerateIpId)) {
    query->insert(pair<string, string>("AccelerateIpId", *request->accelerateIpId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBasicAccelerateIp"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteBasicAccelerateIpResponse(callApi(params, req, runtime));
}

DeleteBasicAccelerateIpResponse Alibabacloud_Ga20191120::Client::deleteBasicAccelerateIp(shared_ptr<DeleteBasicAccelerateIpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBasicAccelerateIpWithOptions(request, runtime);
}

DeleteBasicAccelerateIpEndpointRelationResponse Alibabacloud_Ga20191120::Client::deleteBasicAccelerateIpEndpointRelationWithOptions(shared_ptr<DeleteBasicAccelerateIpEndpointRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accelerateIpId)) {
    query->insert(pair<string, string>("AccelerateIpId", *request->accelerateIpId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointId)) {
    query->insert(pair<string, string>("EndpointId", *request->endpointId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBasicAccelerateIpEndpointRelation"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteBasicAccelerateIpEndpointRelationResponse(callApi(params, req, runtime));
}

DeleteBasicAccelerateIpEndpointRelationResponse Alibabacloud_Ga20191120::Client::deleteBasicAccelerateIpEndpointRelation(shared_ptr<DeleteBasicAccelerateIpEndpointRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBasicAccelerateIpEndpointRelationWithOptions(request, runtime);
}

DeleteBasicAcceleratorResponse Alibabacloud_Ga20191120::Client::deleteBasicAcceleratorWithOptions(shared_ptr<DeleteBasicAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBasicAccelerator"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteBasicAcceleratorResponse(callApi(params, req, runtime));
}

DeleteBasicAcceleratorResponse Alibabacloud_Ga20191120::Client::deleteBasicAccelerator(shared_ptr<DeleteBasicAcceleratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBasicAcceleratorWithOptions(request, runtime);
}

DeleteBasicEndpointResponse Alibabacloud_Ga20191120::Client::deleteBasicEndpointWithOptions(shared_ptr<DeleteBasicEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupId)) {
    query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointId)) {
    query->insert(pair<string, string>("EndpointId", *request->endpointId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBasicEndpoint"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteBasicEndpointResponse(callApi(params, req, runtime));
}

DeleteBasicEndpointResponse Alibabacloud_Ga20191120::Client::deleteBasicEndpoint(shared_ptr<DeleteBasicEndpointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBasicEndpointWithOptions(request, runtime);
}

DeleteBasicEndpointGroupResponse Alibabacloud_Ga20191120::Client::deleteBasicEndpointGroupWithOptions(shared_ptr<DeleteBasicEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupId)) {
    query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBasicEndpointGroup"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteBasicEndpointGroupResponse(callApi(params, req, runtime));
}

DeleteBasicEndpointGroupResponse Alibabacloud_Ga20191120::Client::deleteBasicEndpointGroup(shared_ptr<DeleteBasicEndpointGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBasicEndpointGroupWithOptions(request, runtime);
}

DeleteBasicIpSetResponse Alibabacloud_Ga20191120::Client::deleteBasicIpSetWithOptions(shared_ptr<DeleteBasicIpSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipSetId)) {
    query->insert(pair<string, string>("IpSetId", *request->ipSetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBasicIpSet"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteBasicIpSetResponse(callApi(params, req, runtime));
}

DeleteBasicIpSetResponse Alibabacloud_Ga20191120::Client::deleteBasicIpSet(shared_ptr<DeleteBasicIpSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBasicIpSetWithOptions(request, runtime);
}

DeleteCustomRoutingEndpointGroupDestinationsResponse Alibabacloud_Ga20191120::Client::deleteCustomRoutingEndpointGroupDestinationsWithOptions(shared_ptr<DeleteCustomRoutingEndpointGroupDestinationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->destinationIds)) {
    query->insert(pair<string, vector<string>>("DestinationIds", *request->destinationIds));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupId)) {
    query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCustomRoutingEndpointGroupDestinations"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCustomRoutingEndpointGroupDestinationsResponse(callApi(params, req, runtime));
}

DeleteCustomRoutingEndpointGroupDestinationsResponse Alibabacloud_Ga20191120::Client::deleteCustomRoutingEndpointGroupDestinations(shared_ptr<DeleteCustomRoutingEndpointGroupDestinationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCustomRoutingEndpointGroupDestinationsWithOptions(request, runtime);
}

DeleteCustomRoutingEndpointGroupsResponse Alibabacloud_Ga20191120::Client::deleteCustomRoutingEndpointGroupsWithOptions(shared_ptr<DeleteCustomRoutingEndpointGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->endpointGroupIds)) {
    query->insert(pair<string, vector<string>>("EndpointGroupIds", *request->endpointGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCustomRoutingEndpointGroups"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCustomRoutingEndpointGroupsResponse(callApi(params, req, runtime));
}

DeleteCustomRoutingEndpointGroupsResponse Alibabacloud_Ga20191120::Client::deleteCustomRoutingEndpointGroups(shared_ptr<DeleteCustomRoutingEndpointGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCustomRoutingEndpointGroupsWithOptions(request, runtime);
}

DeleteCustomRoutingEndpointTrafficPoliciesResponse Alibabacloud_Ga20191120::Client::deleteCustomRoutingEndpointTrafficPoliciesWithOptions(shared_ptr<DeleteCustomRoutingEndpointTrafficPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointId)) {
    query->insert(pair<string, string>("EndpointId", *request->endpointId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->policyIds)) {
    query->insert(pair<string, vector<string>>("PolicyIds", *request->policyIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCustomRoutingEndpointTrafficPolicies"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCustomRoutingEndpointTrafficPoliciesResponse(callApi(params, req, runtime));
}

DeleteCustomRoutingEndpointTrafficPoliciesResponse Alibabacloud_Ga20191120::Client::deleteCustomRoutingEndpointTrafficPolicies(shared_ptr<DeleteCustomRoutingEndpointTrafficPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCustomRoutingEndpointTrafficPoliciesWithOptions(request, runtime);
}

DeleteCustomRoutingEndpointsResponse Alibabacloud_Ga20191120::Client::deleteCustomRoutingEndpointsWithOptions(shared_ptr<DeleteCustomRoutingEndpointsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupId)) {
    query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->endpointIds)) {
    query->insert(pair<string, vector<string>>("EndpointIds", *request->endpointIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCustomRoutingEndpoints"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCustomRoutingEndpointsResponse(callApi(params, req, runtime));
}

DeleteCustomRoutingEndpointsResponse Alibabacloud_Ga20191120::Client::deleteCustomRoutingEndpoints(shared_ptr<DeleteCustomRoutingEndpointsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCustomRoutingEndpointsWithOptions(request, runtime);
}

DeleteDomainAcceleratorRelationResponse Alibabacloud_Ga20191120::Client::deleteDomainAcceleratorRelationWithOptions(shared_ptr<DeleteDomainAcceleratorRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->acceleratorIds)) {
    query->insert(pair<string, vector<string>>("AcceleratorIds", *request->acceleratorIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDomainAcceleratorRelation"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDomainAcceleratorRelationResponse(callApi(params, req, runtime));
}

DeleteDomainAcceleratorRelationResponse Alibabacloud_Ga20191120::Client::deleteDomainAcceleratorRelation(shared_ptr<DeleteDomainAcceleratorRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDomainAcceleratorRelationWithOptions(request, runtime);
}

DeleteEndpointGroupResponse Alibabacloud_Ga20191120::Client::deleteEndpointGroupWithOptions(shared_ptr<DeleteEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupId)) {
    query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEndpointGroup"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEndpointGroupResponse(callApi(params, req, runtime));
}

DeleteEndpointGroupResponse Alibabacloud_Ga20191120::Client::deleteEndpointGroup(shared_ptr<DeleteEndpointGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEndpointGroupWithOptions(request, runtime);
}

DeleteEndpointGroupsResponse Alibabacloud_Ga20191120::Client::deleteEndpointGroupsWithOptions(shared_ptr<DeleteEndpointGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->endpointGroupIds)) {
    query->insert(pair<string, vector<string>>("EndpointGroupIds", *request->endpointGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEndpointGroups"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEndpointGroupsResponse(callApi(params, req, runtime));
}

DeleteEndpointGroupsResponse Alibabacloud_Ga20191120::Client::deleteEndpointGroups(shared_ptr<DeleteEndpointGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEndpointGroupsWithOptions(request, runtime);
}

DeleteForwardingRulesResponse Alibabacloud_Ga20191120::Client::deleteForwardingRulesWithOptions(shared_ptr<DeleteForwardingRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->forwardingRuleIds)) {
    query->insert(pair<string, vector<string>>("ForwardingRuleIds", *request->forwardingRuleIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteForwardingRules"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteForwardingRulesResponse(callApi(params, req, runtime));
}

DeleteForwardingRulesResponse Alibabacloud_Ga20191120::Client::deleteForwardingRules(shared_ptr<DeleteForwardingRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteForwardingRulesWithOptions(request, runtime);
}

DeleteIpSetResponse Alibabacloud_Ga20191120::Client::deleteIpSetWithOptions(shared_ptr<DeleteIpSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipSetId)) {
    query->insert(pair<string, string>("IpSetId", *request->ipSetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteIpSet"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteIpSetResponse(callApi(params, req, runtime));
}

DeleteIpSetResponse Alibabacloud_Ga20191120::Client::deleteIpSet(shared_ptr<DeleteIpSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteIpSetWithOptions(request, runtime);
}

DeleteIpSetsResponse Alibabacloud_Ga20191120::Client::deleteIpSetsWithOptions(shared_ptr<DeleteIpSetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ipSetIds)) {
    query->insert(pair<string, vector<string>>("IpSetIds", *request->ipSetIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteIpSets"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteIpSetsResponse(callApi(params, req, runtime));
}

DeleteIpSetsResponse Alibabacloud_Ga20191120::Client::deleteIpSets(shared_ptr<DeleteIpSetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteIpSetsWithOptions(request, runtime);
}

DeleteListenerResponse Alibabacloud_Ga20191120::Client::deleteListenerWithOptions(shared_ptr<DeleteListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteListener"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteListenerResponse(callApi(params, req, runtime));
}

DeleteListenerResponse Alibabacloud_Ga20191120::Client::deleteListener(shared_ptr<DeleteListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteListenerWithOptions(request, runtime);
}

DeleteSpareIpsResponse Alibabacloud_Ga20191120::Client::deleteSpareIpsWithOptions(shared_ptr<DeleteSpareIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->spareIps)) {
    query->insert(pair<string, vector<string>>("SpareIps", *request->spareIps));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSpareIps"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSpareIpsResponse(callApi(params, req, runtime));
}

DeleteSpareIpsResponse Alibabacloud_Ga20191120::Client::deleteSpareIps(shared_ptr<DeleteSpareIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSpareIpsWithOptions(request, runtime);
}

DescribeAcceleratorResponse Alibabacloud_Ga20191120::Client::describeAcceleratorWithOptions(shared_ptr<DescribeAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAccelerator"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAcceleratorResponse(callApi(params, req, runtime));
}

DescribeAcceleratorResponse Alibabacloud_Ga20191120::Client::describeAccelerator(shared_ptr<DescribeAcceleratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAcceleratorWithOptions(request, runtime);
}

DescribeAcceleratorAutoRenewAttributeResponse Alibabacloud_Ga20191120::Client::describeAcceleratorAutoRenewAttributeWithOptions(shared_ptr<DescribeAcceleratorAutoRenewAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAcceleratorAutoRenewAttribute"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAcceleratorAutoRenewAttributeResponse(callApi(params, req, runtime));
}

DescribeAcceleratorAutoRenewAttributeResponse Alibabacloud_Ga20191120::Client::describeAcceleratorAutoRenewAttribute(shared_ptr<DescribeAcceleratorAutoRenewAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAcceleratorAutoRenewAttributeWithOptions(request, runtime);
}

DescribeAcceleratorServiceStatusResponse Alibabacloud_Ga20191120::Client::describeAcceleratorServiceStatusWithOptions(shared_ptr<DescribeAcceleratorServiceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAcceleratorServiceStatus"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAcceleratorServiceStatusResponse(callApi(params, req, runtime));
}

DescribeAcceleratorServiceStatusResponse Alibabacloud_Ga20191120::Client::describeAcceleratorServiceStatus(shared_ptr<DescribeAcceleratorServiceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAcceleratorServiceStatusWithOptions(request, runtime);
}

DescribeApplicationMonitorResponse Alibabacloud_Ga20191120::Client::describeApplicationMonitorWithOptions(shared_ptr<DescribeApplicationMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApplicationMonitor"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApplicationMonitorResponse(callApi(params, req, runtime));
}

DescribeApplicationMonitorResponse Alibabacloud_Ga20191120::Client::describeApplicationMonitor(shared_ptr<DescribeApplicationMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApplicationMonitorWithOptions(request, runtime);
}

DescribeBandwidthPackageResponse Alibabacloud_Ga20191120::Client::describeBandwidthPackageWithOptions(shared_ptr<DescribeBandwidthPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bandwidthPackageId)) {
    query->insert(pair<string, string>("BandwidthPackageId", *request->bandwidthPackageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBandwidthPackage"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBandwidthPackageResponse(callApi(params, req, runtime));
}

DescribeBandwidthPackageResponse Alibabacloud_Ga20191120::Client::describeBandwidthPackage(shared_ptr<DescribeBandwidthPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBandwidthPackageWithOptions(request, runtime);
}

DescribeBandwidthPackageAutoRenewAttributeResponse Alibabacloud_Ga20191120::Client::describeBandwidthPackageAutoRenewAttributeWithOptions(shared_ptr<DescribeBandwidthPackageAutoRenewAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBandwidthPackageAutoRenewAttribute"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBandwidthPackageAutoRenewAttributeResponse(callApi(params, req, runtime));
}

DescribeBandwidthPackageAutoRenewAttributeResponse Alibabacloud_Ga20191120::Client::describeBandwidthPackageAutoRenewAttribute(shared_ptr<DescribeBandwidthPackageAutoRenewAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBandwidthPackageAutoRenewAttributeWithOptions(request, runtime);
}

DescribeCommodityResponse Alibabacloud_Ga20191120::Client::describeCommodityWithOptions(shared_ptr<DescribeCommodityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->commodityCode)) {
    query->insert(pair<string, string>("CommodityCode", *request->commodityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderType)) {
    query->insert(pair<string, string>("OrderType", *request->orderType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCommodity"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCommodityResponse(callApi(params, req, runtime));
}

DescribeCommodityResponse Alibabacloud_Ga20191120::Client::describeCommodity(shared_ptr<DescribeCommodityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCommodityWithOptions(request, runtime);
}

DescribeCommodityPriceResponse Alibabacloud_Ga20191120::Client::describeCommodityPriceWithOptions(shared_ptr<DescribeCommodityPriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<DescribeCommodityPriceRequestOrders>>(request->orders)) {
    query->insert(pair<string, vector<DescribeCommodityPriceRequestOrders>>("Orders", *request->orders));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionOptionNo)) {
    query->insert(pair<string, string>("PromotionOptionNo", *request->promotionOptionNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCommodityPrice"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCommodityPriceResponse(callApi(params, req, runtime));
}

DescribeCommodityPriceResponse Alibabacloud_Ga20191120::Client::describeCommodityPrice(shared_ptr<DescribeCommodityPriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCommodityPriceWithOptions(request, runtime);
}

DescribeCustomRoutingEndPointTrafficPolicyResponse Alibabacloud_Ga20191120::Client::describeCustomRoutingEndPointTrafficPolicyWithOptions(shared_ptr<DescribeCustomRoutingEndPointTrafficPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointId)) {
    query->insert(pair<string, string>("EndpointId", *request->endpointId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    query->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCustomRoutingEndPointTrafficPolicy"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCustomRoutingEndPointTrafficPolicyResponse(callApi(params, req, runtime));
}

DescribeCustomRoutingEndPointTrafficPolicyResponse Alibabacloud_Ga20191120::Client::describeCustomRoutingEndPointTrafficPolicy(shared_ptr<DescribeCustomRoutingEndPointTrafficPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCustomRoutingEndPointTrafficPolicyWithOptions(request, runtime);
}

DescribeCustomRoutingEndpointResponse Alibabacloud_Ga20191120::Client::describeCustomRoutingEndpointWithOptions(shared_ptr<DescribeCustomRoutingEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroup)) {
    query->insert(pair<string, string>("EndpointGroup", *request->endpointGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointId)) {
    query->insert(pair<string, string>("EndpointId", *request->endpointId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCustomRoutingEndpoint"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCustomRoutingEndpointResponse(callApi(params, req, runtime));
}

DescribeCustomRoutingEndpointResponse Alibabacloud_Ga20191120::Client::describeCustomRoutingEndpoint(shared_ptr<DescribeCustomRoutingEndpointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCustomRoutingEndpointWithOptions(request, runtime);
}

DescribeCustomRoutingEndpointGroupResponse Alibabacloud_Ga20191120::Client::describeCustomRoutingEndpointGroupWithOptions(shared_ptr<DescribeCustomRoutingEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupId)) {
    query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCustomRoutingEndpointGroup"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCustomRoutingEndpointGroupResponse(callApi(params, req, runtime));
}

DescribeCustomRoutingEndpointGroupResponse Alibabacloud_Ga20191120::Client::describeCustomRoutingEndpointGroup(shared_ptr<DescribeCustomRoutingEndpointGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCustomRoutingEndpointGroupWithOptions(request, runtime);
}

DescribeCustomRoutingEndpointGroupDestinationsResponse Alibabacloud_Ga20191120::Client::describeCustomRoutingEndpointGroupDestinationsWithOptions(shared_ptr<DescribeCustomRoutingEndpointGroupDestinationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationId)) {
    query->insert(pair<string, string>("DestinationId", *request->destinationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupId)) {
    query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCustomRoutingEndpointGroupDestinations"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCustomRoutingEndpointGroupDestinationsResponse(callApi(params, req, runtime));
}

DescribeCustomRoutingEndpointGroupDestinationsResponse Alibabacloud_Ga20191120::Client::describeCustomRoutingEndpointGroupDestinations(shared_ptr<DescribeCustomRoutingEndpointGroupDestinationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCustomRoutingEndpointGroupDestinationsWithOptions(request, runtime);
}

DescribeEndpointGroupResponse Alibabacloud_Ga20191120::Client::describeEndpointGroupWithOptions(shared_ptr<DescribeEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupId)) {
    query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEndpointGroup"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEndpointGroupResponse(callApi(params, req, runtime));
}

DescribeEndpointGroupResponse Alibabacloud_Ga20191120::Client::describeEndpointGroup(shared_ptr<DescribeEndpointGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEndpointGroupWithOptions(request, runtime);
}

DescribeIpSetResponse Alibabacloud_Ga20191120::Client::describeIpSetWithOptions(shared_ptr<DescribeIpSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ipSetId)) {
    query->insert(pair<string, string>("IpSetId", *request->ipSetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeIpSet"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeIpSetResponse(callApi(params, req, runtime));
}

DescribeIpSetResponse Alibabacloud_Ga20191120::Client::describeIpSet(shared_ptr<DescribeIpSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeIpSetWithOptions(request, runtime);
}

DescribeListenerResponse Alibabacloud_Ga20191120::Client::describeListenerWithOptions(shared_ptr<DescribeListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeListener"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeListenerResponse(callApi(params, req, runtime));
}

DescribeListenerResponse Alibabacloud_Ga20191120::Client::describeListener(shared_ptr<DescribeListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeListenerWithOptions(request, runtime);
}

DescribeLogStoreOfEndpointGroupResponse Alibabacloud_Ga20191120::Client::describeLogStoreOfEndpointGroupWithOptions(shared_ptr<DescribeLogStoreOfEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupId)) {
    query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLogStoreOfEndpointGroup"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLogStoreOfEndpointGroupResponse(callApi(params, req, runtime));
}

DescribeLogStoreOfEndpointGroupResponse Alibabacloud_Ga20191120::Client::describeLogStoreOfEndpointGroup(shared_ptr<DescribeLogStoreOfEndpointGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLogStoreOfEndpointGroupWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Ga20191120::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRegionsResponse(callApi(params, req, runtime));
}

DescribeRegionsResponse Alibabacloud_Ga20191120::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DetachDdosFromAcceleratorResponse Alibabacloud_Ga20191120::Client::detachDdosFromAcceleratorWithOptions(shared_ptr<DetachDdosFromAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachDdosFromAccelerator"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachDdosFromAcceleratorResponse(callApi(params, req, runtime));
}

DetachDdosFromAcceleratorResponse Alibabacloud_Ga20191120::Client::detachDdosFromAccelerator(shared_ptr<DetachDdosFromAcceleratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachDdosFromAcceleratorWithOptions(request, runtime);
}

DetachLogStoreFromEndpointGroupResponse Alibabacloud_Ga20191120::Client::detachLogStoreFromEndpointGroupWithOptions(shared_ptr<DetachLogStoreFromEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->endpointGroupIds)) {
    query->insert(pair<string, vector<string>>("EndpointGroupIds", *request->endpointGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachLogStoreFromEndpointGroup"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachLogStoreFromEndpointGroupResponse(callApi(params, req, runtime));
}

DetachLogStoreFromEndpointGroupResponse Alibabacloud_Ga20191120::Client::detachLogStoreFromEndpointGroup(shared_ptr<DetachLogStoreFromEndpointGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachLogStoreFromEndpointGroupWithOptions(request, runtime);
}

DetectApplicationMonitorResponse Alibabacloud_Ga20191120::Client::detectApplicationMonitorWithOptions(shared_ptr<DetectApplicationMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetectApplicationMonitor"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectApplicationMonitorResponse(callApi(params, req, runtime));
}

DetectApplicationMonitorResponse Alibabacloud_Ga20191120::Client::detectApplicationMonitor(shared_ptr<DetectApplicationMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectApplicationMonitorWithOptions(request, runtime);
}

DisableApplicationMonitorResponse Alibabacloud_Ga20191120::Client::disableApplicationMonitorWithOptions(shared_ptr<DisableApplicationMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableApplicationMonitor"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableApplicationMonitorResponse(callApi(params, req, runtime));
}

DisableApplicationMonitorResponse Alibabacloud_Ga20191120::Client::disableApplicationMonitor(shared_ptr<DisableApplicationMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableApplicationMonitorWithOptions(request, runtime);
}

DissociateAclsFromListenerResponse Alibabacloud_Ga20191120::Client::dissociateAclsFromListenerWithOptions(shared_ptr<DissociateAclsFromListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DissociateAclsFromListener"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DissociateAclsFromListenerResponse(callApi(params, req, runtime));
}

DissociateAclsFromListenerResponse Alibabacloud_Ga20191120::Client::dissociateAclsFromListener(shared_ptr<DissociateAclsFromListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dissociateAclsFromListenerWithOptions(request, runtime);
}

DissociateAdditionalCertificatesFromListenerResponse Alibabacloud_Ga20191120::Client::dissociateAdditionalCertificatesFromListenerWithOptions(shared_ptr<DissociateAdditionalCertificatesFromListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->domains)) {
    query->insert(pair<string, vector<string>>("Domains", *request->domains));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DissociateAdditionalCertificatesFromListener"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DissociateAdditionalCertificatesFromListenerResponse(callApi(params, req, runtime));
}

DissociateAdditionalCertificatesFromListenerResponse Alibabacloud_Ga20191120::Client::dissociateAdditionalCertificatesFromListener(shared_ptr<DissociateAdditionalCertificatesFromListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dissociateAdditionalCertificatesFromListenerWithOptions(request, runtime);
}

EnableApplicationMonitorResponse Alibabacloud_Ga20191120::Client::enableApplicationMonitorWithOptions(shared_ptr<EnableApplicationMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableApplicationMonitor"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableApplicationMonitorResponse(callApi(params, req, runtime));
}

EnableApplicationMonitorResponse Alibabacloud_Ga20191120::Client::enableApplicationMonitor(shared_ptr<EnableApplicationMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableApplicationMonitorWithOptions(request, runtime);
}

GetAclResponse Alibabacloud_Ga20191120::Client::getAclWithOptions(shared_ptr<GetAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclId)) {
    query->insert(pair<string, string>("AclId", *request->aclId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAcl"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAclResponse(callApi(params, req, runtime));
}

GetAclResponse Alibabacloud_Ga20191120::Client::getAcl(shared_ptr<GetAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAclWithOptions(request, runtime);
}

GetBasicAccelerateIpResponse Alibabacloud_Ga20191120::Client::getBasicAccelerateIpWithOptions(shared_ptr<GetBasicAccelerateIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accelerateIpId)) {
    query->insert(pair<string, string>("AccelerateIpId", *request->accelerateIpId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBasicAccelerateIp"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBasicAccelerateIpResponse(callApi(params, req, runtime));
}

GetBasicAccelerateIpResponse Alibabacloud_Ga20191120::Client::getBasicAccelerateIp(shared_ptr<GetBasicAccelerateIpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBasicAccelerateIpWithOptions(request, runtime);
}

GetBasicAccelerateIpEndpointRelationResponse Alibabacloud_Ga20191120::Client::getBasicAccelerateIpEndpointRelationWithOptions(shared_ptr<GetBasicAccelerateIpEndpointRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accelerateIpId)) {
    query->insert(pair<string, string>("AccelerateIpId", *request->accelerateIpId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointId)) {
    query->insert(pair<string, string>("EndpointId", *request->endpointId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBasicAccelerateIpEndpointRelation"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBasicAccelerateIpEndpointRelationResponse(callApi(params, req, runtime));
}

GetBasicAccelerateIpEndpointRelationResponse Alibabacloud_Ga20191120::Client::getBasicAccelerateIpEndpointRelation(shared_ptr<GetBasicAccelerateIpEndpointRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBasicAccelerateIpEndpointRelationWithOptions(request, runtime);
}

GetBasicAccelerateIpIdleCountResponse Alibabacloud_Ga20191120::Client::getBasicAccelerateIpIdleCountWithOptions(shared_ptr<GetBasicAccelerateIpIdleCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipSetId)) {
    query->insert(pair<string, string>("IpSetId", *request->ipSetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBasicAccelerateIpIdleCount"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBasicAccelerateIpIdleCountResponse(callApi(params, req, runtime));
}

GetBasicAccelerateIpIdleCountResponse Alibabacloud_Ga20191120::Client::getBasicAccelerateIpIdleCount(shared_ptr<GetBasicAccelerateIpIdleCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBasicAccelerateIpIdleCountWithOptions(request, runtime);
}

GetBasicAcceleratorResponse Alibabacloud_Ga20191120::Client::getBasicAcceleratorWithOptions(shared_ptr<GetBasicAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBasicAccelerator"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBasicAcceleratorResponse(callApi(params, req, runtime));
}

GetBasicAcceleratorResponse Alibabacloud_Ga20191120::Client::getBasicAccelerator(shared_ptr<GetBasicAcceleratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBasicAcceleratorWithOptions(request, runtime);
}

GetBasicEndpointResponse Alibabacloud_Ga20191120::Client::getBasicEndpointWithOptions(shared_ptr<GetBasicEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointId)) {
    query->insert(pair<string, string>("EndpointId", *request->endpointId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBasicEndpoint"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBasicEndpointResponse(callApi(params, req, runtime));
}

GetBasicEndpointResponse Alibabacloud_Ga20191120::Client::getBasicEndpoint(shared_ptr<GetBasicEndpointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBasicEndpointWithOptions(request, runtime);
}

GetBasicEndpointGroupResponse Alibabacloud_Ga20191120::Client::getBasicEndpointGroupWithOptions(shared_ptr<GetBasicEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupId)) {
    query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBasicEndpointGroup"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBasicEndpointGroupResponse(callApi(params, req, runtime));
}

GetBasicEndpointGroupResponse Alibabacloud_Ga20191120::Client::getBasicEndpointGroup(shared_ptr<GetBasicEndpointGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBasicEndpointGroupWithOptions(request, runtime);
}

GetBasicIpSetResponse Alibabacloud_Ga20191120::Client::getBasicIpSetWithOptions(shared_ptr<GetBasicIpSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipSetId)) {
    query->insert(pair<string, string>("IpSetId", *request->ipSetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBasicIpSet"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBasicIpSetResponse(callApi(params, req, runtime));
}

GetBasicIpSetResponse Alibabacloud_Ga20191120::Client::getBasicIpSet(shared_ptr<GetBasicIpSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBasicIpSetWithOptions(request, runtime);
}

GetHealthStatusResponse Alibabacloud_Ga20191120::Client::getHealthStatusWithOptions(shared_ptr<GetHealthStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHealthStatus"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHealthStatusResponse(callApi(params, req, runtime));
}

GetHealthStatusResponse Alibabacloud_Ga20191120::Client::getHealthStatus(shared_ptr<GetHealthStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHealthStatusWithOptions(request, runtime);
}

GetInvalidDomainCountResponse Alibabacloud_Ga20191120::Client::getInvalidDomainCountWithOptions(shared_ptr<GetInvalidDomainCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInvalidDomainCount"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInvalidDomainCountResponse(callApi(params, req, runtime));
}

GetInvalidDomainCountResponse Alibabacloud_Ga20191120::Client::getInvalidDomainCount(shared_ptr<GetInvalidDomainCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInvalidDomainCountWithOptions(request, runtime);
}

GetIpsetsBandwidthLimitResponse Alibabacloud_Ga20191120::Client::getIpsetsBandwidthLimitWithOptions(shared_ptr<GetIpsetsBandwidthLimitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetIpsetsBandwidthLimit"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetIpsetsBandwidthLimitResponse(callApi(params, req, runtime));
}

GetIpsetsBandwidthLimitResponse Alibabacloud_Ga20191120::Client::getIpsetsBandwidthLimit(shared_ptr<GetIpsetsBandwidthLimitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getIpsetsBandwidthLimitWithOptions(request, runtime);
}

GetSpareIpResponse Alibabacloud_Ga20191120::Client::getSpareIpWithOptions(shared_ptr<GetSpareIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spareIp)) {
    query->insert(pair<string, string>("SpareIp", *request->spareIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSpareIp"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSpareIpResponse(callApi(params, req, runtime));
}

GetSpareIpResponse Alibabacloud_Ga20191120::Client::getSpareIp(shared_ptr<GetSpareIpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSpareIpWithOptions(request, runtime);
}

ListAccelerateAreasResponse Alibabacloud_Ga20191120::Client::listAccelerateAreasWithOptions(shared_ptr<ListAccelerateAreasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAccelerateAreas"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAccelerateAreasResponse(callApi(params, req, runtime));
}

ListAccelerateAreasResponse Alibabacloud_Ga20191120::Client::listAccelerateAreas(shared_ptr<ListAccelerateAreasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAccelerateAreasWithOptions(request, runtime);
}

ListAcceleratorsResponse Alibabacloud_Ga20191120::Client::listAcceleratorsWithOptions(shared_ptr<ListAcceleratorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    query->insert(pair<string, string>("State", *request->state));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListAcceleratorsRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListAcceleratorsRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAccelerators"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAcceleratorsResponse(callApi(params, req, runtime));
}

ListAcceleratorsResponse Alibabacloud_Ga20191120::Client::listAccelerators(shared_ptr<ListAcceleratorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAcceleratorsWithOptions(request, runtime);
}

ListAclsResponse Alibabacloud_Ga20191120::Client::listAclsWithOptions(shared_ptr<ListAclsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->aclIds)) {
    query->insert(pair<string, vector<string>>("AclIds", *request->aclIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclName)) {
    query->insert(pair<string, string>("AclName", *request->aclName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
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
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAclsResponse(callApi(params, req, runtime));
}

ListAclsResponse Alibabacloud_Ga20191120::Client::listAcls(shared_ptr<ListAclsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAclsWithOptions(request, runtime);
}

ListApplicationMonitorResponse Alibabacloud_Ga20191120::Client::listApplicationMonitorWithOptions(shared_ptr<ListApplicationMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchValue)) {
    query->insert(pair<string, string>("SearchValue", *request->searchValue));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListApplicationMonitor"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListApplicationMonitorResponse(callApi(params, req, runtime));
}

ListApplicationMonitorResponse Alibabacloud_Ga20191120::Client::listApplicationMonitor(shared_ptr<ListApplicationMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listApplicationMonitorWithOptions(request, runtime);
}

ListApplicationMonitorDetectResultResponse Alibabacloud_Ga20191120::Client::listApplicationMonitorDetectResultWithOptions(shared_ptr<ListApplicationMonitorDetectResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("BeginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListApplicationMonitorDetectResult"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListApplicationMonitorDetectResultResponse(callApi(params, req, runtime));
}

ListApplicationMonitorDetectResultResponse Alibabacloud_Ga20191120::Client::listApplicationMonitorDetectResult(shared_ptr<ListApplicationMonitorDetectResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listApplicationMonitorDetectResultWithOptions(request, runtime);
}

ListAvailableAccelerateAreasResponse Alibabacloud_Ga20191120::Client::listAvailableAccelerateAreasWithOptions(shared_ptr<ListAvailableAccelerateAreasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAvailableAccelerateAreas"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAvailableAccelerateAreasResponse(callApi(params, req, runtime));
}

ListAvailableAccelerateAreasResponse Alibabacloud_Ga20191120::Client::listAvailableAccelerateAreas(shared_ptr<ListAvailableAccelerateAreasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAvailableAccelerateAreasWithOptions(request, runtime);
}

ListAvailableBusiRegionsResponse Alibabacloud_Ga20191120::Client::listAvailableBusiRegionsWithOptions(shared_ptr<ListAvailableBusiRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAvailableBusiRegions"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAvailableBusiRegionsResponse(callApi(params, req, runtime));
}

ListAvailableBusiRegionsResponse Alibabacloud_Ga20191120::Client::listAvailableBusiRegions(shared_ptr<ListAvailableBusiRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAvailableBusiRegionsWithOptions(request, runtime);
}

ListBandwidthPackagesResponse Alibabacloud_Ga20191120::Client::listBandwidthPackagesWithOptions(shared_ptr<ListBandwidthPackagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bandwidthPackageId)) {
    query->insert(pair<string, string>("BandwidthPackageId", *request->bandwidthPackageId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    query->insert(pair<string, string>("State", *request->state));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListBandwidthPackagesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListBandwidthPackagesRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBandwidthPackages"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBandwidthPackagesResponse(callApi(params, req, runtime));
}

ListBandwidthPackagesResponse Alibabacloud_Ga20191120::Client::listBandwidthPackages(shared_ptr<ListBandwidthPackagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBandwidthPackagesWithOptions(request, runtime);
}

ListBandwidthackagesResponse Alibabacloud_Ga20191120::Client::listBandwidthackagesWithOptions(shared_ptr<ListBandwidthackagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBandwidthackages"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBandwidthackagesResponse(callApi(params, req, runtime));
}

ListBandwidthackagesResponse Alibabacloud_Ga20191120::Client::listBandwidthackages(shared_ptr<ListBandwidthackagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBandwidthackagesWithOptions(request, runtime);
}

ListBasicAccelerateIpEndpointRelationsResponse Alibabacloud_Ga20191120::Client::listBasicAccelerateIpEndpointRelationsWithOptions(shared_ptr<ListBasicAccelerateIpEndpointRelationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accelerateIpId)) {
    query->insert(pair<string, string>("AccelerateIpId", *request->accelerateIpId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointId)) {
    query->insert(pair<string, string>("EndpointId", *request->endpointId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBasicAccelerateIpEndpointRelations"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBasicAccelerateIpEndpointRelationsResponse(callApi(params, req, runtime));
}

ListBasicAccelerateIpEndpointRelationsResponse Alibabacloud_Ga20191120::Client::listBasicAccelerateIpEndpointRelations(shared_ptr<ListBasicAccelerateIpEndpointRelationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBasicAccelerateIpEndpointRelationsWithOptions(request, runtime);
}

ListBasicAccelerateIpsResponse Alibabacloud_Ga20191120::Client::listBasicAccelerateIpsWithOptions(shared_ptr<ListBasicAccelerateIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accelerateIpAddress)) {
    query->insert(pair<string, string>("AccelerateIpAddress", *request->accelerateIpAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accelerateIpId)) {
    query->insert(pair<string, string>("AccelerateIpId", *request->accelerateIpId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipSetId)) {
    query->insert(pair<string, string>("IpSetId", *request->ipSetId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBasicAccelerateIps"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBasicAccelerateIpsResponse(callApi(params, req, runtime));
}

ListBasicAccelerateIpsResponse Alibabacloud_Ga20191120::Client::listBasicAccelerateIps(shared_ptr<ListBasicAccelerateIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBasicAccelerateIpsWithOptions(request, runtime);
}

ListBasicAcceleratorsResponse Alibabacloud_Ga20191120::Client::listBasicAcceleratorsWithOptions(shared_ptr<ListBasicAcceleratorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    query->insert(pair<string, string>("State", *request->state));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListBasicAcceleratorsRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListBasicAcceleratorsRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBasicAccelerators"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBasicAcceleratorsResponse(callApi(params, req, runtime));
}

ListBasicAcceleratorsResponse Alibabacloud_Ga20191120::Client::listBasicAccelerators(shared_ptr<ListBasicAcceleratorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBasicAcceleratorsWithOptions(request, runtime);
}

ListBasicEndpointsResponse Alibabacloud_Ga20191120::Client::listBasicEndpointsWithOptions(shared_ptr<ListBasicEndpointsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupId)) {
    query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointId)) {
    query->insert(pair<string, string>("EndpointId", *request->endpointId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointType)) {
    query->insert(pair<string, string>("EndpointType", *request->endpointType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBasicEndpoints"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBasicEndpointsResponse(callApi(params, req, runtime));
}

ListBasicEndpointsResponse Alibabacloud_Ga20191120::Client::listBasicEndpoints(shared_ptr<ListBasicEndpointsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBasicEndpointsWithOptions(request, runtime);
}

ListBusiRegionsResponse Alibabacloud_Ga20191120::Client::listBusiRegionsWithOptions(shared_ptr<ListBusiRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBusiRegions"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBusiRegionsResponse(callApi(params, req, runtime));
}

ListBusiRegionsResponse Alibabacloud_Ga20191120::Client::listBusiRegions(shared_ptr<ListBusiRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBusiRegionsWithOptions(request, runtime);
}

ListCommonAreasResponse Alibabacloud_Ga20191120::Client::listCommonAreasWithOptions(shared_ptr<ListCommonAreasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ipVersion)) {
    query->insert(pair<string, string>("IpVersion", *request->ipVersion));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isEpg)) {
    query->insert(pair<string, bool>("IsEpg", *request->isEpg));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isIpSet)) {
    query->insert(pair<string, bool>("IsIpSet", *request->isIpSet));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCommonAreas"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCommonAreasResponse(callApi(params, req, runtime));
}

ListCommonAreasResponse Alibabacloud_Ga20191120::Client::listCommonAreas(shared_ptr<ListCommonAreasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCommonAreasWithOptions(request, runtime);
}

ListCustomRoutingEndpointGroupDestinationsResponse Alibabacloud_Ga20191120::Client::listCustomRoutingEndpointGroupDestinationsWithOptions(shared_ptr<ListCustomRoutingEndpointGroupDestinationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupId)) {
    query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fromPort)) {
    query->insert(pair<string, long>("FromPort", *request->fromPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->protocols)) {
    query->insert(pair<string, vector<string>>("Protocols", *request->protocols));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->toPort)) {
    query->insert(pair<string, long>("ToPort", *request->toPort));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCustomRoutingEndpointGroupDestinations"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCustomRoutingEndpointGroupDestinationsResponse(callApi(params, req, runtime));
}

ListCustomRoutingEndpointGroupDestinationsResponse Alibabacloud_Ga20191120::Client::listCustomRoutingEndpointGroupDestinations(shared_ptr<ListCustomRoutingEndpointGroupDestinationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCustomRoutingEndpointGroupDestinationsWithOptions(request, runtime);
}

ListCustomRoutingEndpointGroupsResponse Alibabacloud_Ga20191120::Client::listCustomRoutingEndpointGroupsWithOptions(shared_ptr<ListCustomRoutingEndpointGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessLogSwitch)) {
    query->insert(pair<string, string>("AccessLogSwitch", *request->accessLogSwitch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupId)) {
    query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCustomRoutingEndpointGroups"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCustomRoutingEndpointGroupsResponse(callApi(params, req, runtime));
}

ListCustomRoutingEndpointGroupsResponse Alibabacloud_Ga20191120::Client::listCustomRoutingEndpointGroups(shared_ptr<ListCustomRoutingEndpointGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCustomRoutingEndpointGroupsWithOptions(request, runtime);
}

ListCustomRoutingEndpointTrafficPoliciesResponse Alibabacloud_Ga20191120::Client::listCustomRoutingEndpointTrafficPoliciesWithOptions(shared_ptr<ListCustomRoutingEndpointTrafficPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("Address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupId)) {
    query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointId)) {
    query->insert(pair<string, string>("EndpointId", *request->endpointId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCustomRoutingEndpointTrafficPolicies"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCustomRoutingEndpointTrafficPoliciesResponse(callApi(params, req, runtime));
}

ListCustomRoutingEndpointTrafficPoliciesResponse Alibabacloud_Ga20191120::Client::listCustomRoutingEndpointTrafficPolicies(shared_ptr<ListCustomRoutingEndpointTrafficPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCustomRoutingEndpointTrafficPoliciesWithOptions(request, runtime);
}

ListCustomRoutingEndpointsResponse Alibabacloud_Ga20191120::Client::listCustomRoutingEndpointsWithOptions(shared_ptr<ListCustomRoutingEndpointsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupId)) {
    query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCustomRoutingEndpoints"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCustomRoutingEndpointsResponse(callApi(params, req, runtime));
}

ListCustomRoutingEndpointsResponse Alibabacloud_Ga20191120::Client::listCustomRoutingEndpoints(shared_ptr<ListCustomRoutingEndpointsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCustomRoutingEndpointsWithOptions(request, runtime);
}

ListCustomRoutingPortMappingsResponse Alibabacloud_Ga20191120::Client::listCustomRoutingPortMappingsWithOptions(shared_ptr<ListCustomRoutingPortMappingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupId)) {
    query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCustomRoutingPortMappings"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCustomRoutingPortMappingsResponse(callApi(params, req, runtime));
}

ListCustomRoutingPortMappingsResponse Alibabacloud_Ga20191120::Client::listCustomRoutingPortMappings(shared_ptr<ListCustomRoutingPortMappingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCustomRoutingPortMappingsWithOptions(request, runtime);
}

ListCustomRoutingPortMappingsByDestinationResponse Alibabacloud_Ga20191120::Client::listCustomRoutingPortMappingsByDestinationWithOptions(shared_ptr<ListCustomRoutingPortMappingsByDestinationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationAddress)) {
    query->insert(pair<string, string>("DestinationAddress", *request->destinationAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointId)) {
    query->insert(pair<string, string>("EndpointId", *request->endpointId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCustomRoutingPortMappingsByDestination"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCustomRoutingPortMappingsByDestinationResponse(callApi(params, req, runtime));
}

ListCustomRoutingPortMappingsByDestinationResponse Alibabacloud_Ga20191120::Client::listCustomRoutingPortMappingsByDestination(shared_ptr<ListCustomRoutingPortMappingsByDestinationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCustomRoutingPortMappingsByDestinationWithOptions(request, runtime);
}

ListDomainsResponse Alibabacloud_Ga20191120::Client::listDomainsWithOptions(shared_ptr<ListDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    query->insert(pair<string, string>("State", *request->state));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDomains"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDomainsResponse(callApi(params, req, runtime));
}

ListDomainsResponse Alibabacloud_Ga20191120::Client::listDomains(shared_ptr<ListDomainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDomainsWithOptions(request, runtime);
}

ListEndpointGroupIpAddressCidrBlocksResponse Alibabacloud_Ga20191120::Client::listEndpointGroupIpAddressCidrBlocksWithOptions(shared_ptr<ListEndpointGroupIpAddressCidrBlocksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupRegion)) {
    query->insert(pair<string, string>("EndpointGroupRegion", *request->endpointGroupRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEndpointGroupIpAddressCidrBlocks"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEndpointGroupIpAddressCidrBlocksResponse(callApi(params, req, runtime));
}

ListEndpointGroupIpAddressCidrBlocksResponse Alibabacloud_Ga20191120::Client::listEndpointGroupIpAddressCidrBlocks(shared_ptr<ListEndpointGroupIpAddressCidrBlocksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEndpointGroupIpAddressCidrBlocksWithOptions(request, runtime);
}

ListEndpointGroupsResponse Alibabacloud_Ga20191120::Client::listEndpointGroupsWithOptions(shared_ptr<ListEndpointGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessLogSwitch)) {
    query->insert(pair<string, string>("AccessLogSwitch", *request->accessLogSwitch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupId)) {
    query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupType)) {
    query->insert(pair<string, string>("EndpointGroupType", *request->endpointGroupType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListEndpointGroupsRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListEndpointGroupsRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEndpointGroups"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEndpointGroupsResponse(callApi(params, req, runtime));
}

ListEndpointGroupsResponse Alibabacloud_Ga20191120::Client::listEndpointGroups(shared_ptr<ListEndpointGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEndpointGroupsWithOptions(request, runtime);
}

ListForwardingRulesResponse Alibabacloud_Ga20191120::Client::listForwardingRulesWithOptions(shared_ptr<ListForwardingRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->forwardingRuleId)) {
    query->insert(pair<string, string>("ForwardingRuleId", *request->forwardingRuleId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListForwardingRules"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListForwardingRulesResponse(callApi(params, req, runtime));
}

ListForwardingRulesResponse Alibabacloud_Ga20191120::Client::listForwardingRules(shared_ptr<ListForwardingRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listForwardingRulesWithOptions(request, runtime);
}

ListIpSetsResponse Alibabacloud_Ga20191120::Client::listIpSetsWithOptions(shared_ptr<ListIpSetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIpSets"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListIpSetsResponse(callApi(params, req, runtime));
}

ListIpSetsResponse Alibabacloud_Ga20191120::Client::listIpSets(shared_ptr<ListIpSetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listIpSetsWithOptions(request, runtime);
}

ListIspTypesResponse Alibabacloud_Ga20191120::Client::listIspTypesWithOptions(shared_ptr<ListIspTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorType)) {
    query->insert(pair<string, string>("AcceleratorType", *request->acceleratorType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessRegionId)) {
    query->insert(pair<string, string>("BusinessRegionId", *request->businessRegionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIspTypes"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListIspTypesResponse(callApi(params, req, runtime));
}

ListIspTypesResponse Alibabacloud_Ga20191120::Client::listIspTypes(shared_ptr<ListIspTypesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listIspTypesWithOptions(request, runtime);
}

ListListenerCertificatesResponse Alibabacloud_Ga20191120::Client::listListenerCertificatesWithOptions(shared_ptr<ListListenerCertificatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->role)) {
    query->insert(pair<string, string>("Role", *request->role));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListListenerCertificates"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListListenerCertificatesResponse(callApi(params, req, runtime));
}

ListListenerCertificatesResponse Alibabacloud_Ga20191120::Client::listListenerCertificates(shared_ptr<ListListenerCertificatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listListenerCertificatesWithOptions(request, runtime);
}

ListListenersResponse Alibabacloud_Ga20191120::Client::listListenersWithOptions(shared_ptr<ListListenersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListListeners"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListListenersResponse(callApi(params, req, runtime));
}

ListListenersResponse Alibabacloud_Ga20191120::Client::listListeners(shared_ptr<ListListenersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listListenersWithOptions(request, runtime);
}

ListSpareIpsResponse Alibabacloud_Ga20191120::Client::listSpareIpsWithOptions(shared_ptr<ListSpareIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSpareIps"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSpareIpsResponse(callApi(params, req, runtime));
}

ListSpareIpsResponse Alibabacloud_Ga20191120::Client::listSpareIps(shared_ptr<ListSpareIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSpareIpsWithOptions(request, runtime);
}

ListSystemSecurityPoliciesResponse Alibabacloud_Ga20191120::Client::listSystemSecurityPoliciesWithOptions(shared_ptr<ListSystemSecurityPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSystemSecurityPolicies"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSystemSecurityPoliciesResponse(callApi(params, req, runtime));
}

ListSystemSecurityPoliciesResponse Alibabacloud_Ga20191120::Client::listSystemSecurityPolicies(shared_ptr<ListSystemSecurityPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSystemSecurityPoliciesWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Ga20191120::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
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
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagResourcesResponse(callApi(params, req, runtime));
}

ListTagResourcesResponse Alibabacloud_Ga20191120::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

OpenAcceleratorServiceResponse Alibabacloud_Ga20191120::Client::openAcceleratorServiceWithOptions(shared_ptr<OpenAcceleratorServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenAcceleratorService"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenAcceleratorServiceResponse(callApi(params, req, runtime));
}

OpenAcceleratorServiceResponse Alibabacloud_Ga20191120::Client::openAcceleratorService(shared_ptr<OpenAcceleratorServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openAcceleratorServiceWithOptions(request, runtime);
}

QueryCrossBorderApprovalStatusResponse Alibabacloud_Ga20191120::Client::queryCrossBorderApprovalStatusWithOptions(shared_ptr<QueryCrossBorderApprovalStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCrossBorderApprovalStatus"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryCrossBorderApprovalStatusResponse(callApi(params, req, runtime));
}

QueryCrossBorderApprovalStatusResponse Alibabacloud_Ga20191120::Client::queryCrossBorderApprovalStatus(shared_ptr<QueryCrossBorderApprovalStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCrossBorderApprovalStatusWithOptions(request, runtime);
}

RemoveEntriesFromAclResponse Alibabacloud_Ga20191120::Client::removeEntriesFromAclWithOptions(shared_ptr<RemoveEntriesFromAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<RemoveEntriesFromAclRequestAclEntries>>(request->aclEntries)) {
    query->insert(pair<string, vector<RemoveEntriesFromAclRequestAclEntries>>("AclEntries", *request->aclEntries));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveEntriesFromAcl"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveEntriesFromAclResponse(callApi(params, req, runtime));
}

RemoveEntriesFromAclResponse Alibabacloud_Ga20191120::Client::removeEntriesFromAcl(shared_ptr<RemoveEntriesFromAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeEntriesFromAclWithOptions(request, runtime);
}

ReplaceBandwidthPackageResponse Alibabacloud_Ga20191120::Client::replaceBandwidthPackageWithOptions(shared_ptr<ReplaceBandwidthPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bandwidthPackageId)) {
    query->insert(pair<string, string>("BandwidthPackageId", *request->bandwidthPackageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetBandwidthPackageId)) {
    query->insert(pair<string, string>("TargetBandwidthPackageId", *request->targetBandwidthPackageId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReplaceBandwidthPackage"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReplaceBandwidthPackageResponse(callApi(params, req, runtime));
}

ReplaceBandwidthPackageResponse Alibabacloud_Ga20191120::Client::replaceBandwidthPackage(shared_ptr<ReplaceBandwidthPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return replaceBandwidthPackageWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Ga20191120::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
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
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagResourcesResponse(callApi(params, req, runtime));
}

TagResourcesResponse Alibabacloud_Ga20191120::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Ga20191120::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("All", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagKey)) {
    query->insert(pair<string, vector<string>>("TagKey", *request->tagKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UntagResourcesResponse(callApi(params, req, runtime));
}

UntagResourcesResponse Alibabacloud_Ga20191120::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UpdateAcceleratorResponse Alibabacloud_Ga20191120::Client::updateAcceleratorWithOptions(shared_ptr<UpdateAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoUseCoupon)) {
    query->insert(pair<string, bool>("AutoUseCoupon", *request->autoUseCoupon));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spec)) {
    query->insert(pair<string, string>("Spec", *request->spec));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAccelerator"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAcceleratorResponse(callApi(params, req, runtime));
}

UpdateAcceleratorResponse Alibabacloud_Ga20191120::Client::updateAccelerator(shared_ptr<UpdateAcceleratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAcceleratorWithOptions(request, runtime);
}

UpdateAcceleratorAutoRenewAttributeResponse Alibabacloud_Ga20191120::Client::updateAcceleratorAutoRenewAttributeWithOptions(shared_ptr<UpdateAcceleratorAutoRenewAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRenew)) {
    query->insert(pair<string, bool>("AutoRenew", *request->autoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->autoRenewDuration)) {
    query->insert(pair<string, long>("AutoRenewDuration", *request->autoRenewDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->renewalStatus)) {
    query->insert(pair<string, string>("RenewalStatus", *request->renewalStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAcceleratorAutoRenewAttribute"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAcceleratorAutoRenewAttributeResponse(callApi(params, req, runtime));
}

UpdateAcceleratorAutoRenewAttributeResponse Alibabacloud_Ga20191120::Client::updateAcceleratorAutoRenewAttribute(shared_ptr<UpdateAcceleratorAutoRenewAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAcceleratorAutoRenewAttributeWithOptions(request, runtime);
}

UpdateAcceleratorConfirmResponse Alibabacloud_Ga20191120::Client::updateAcceleratorConfirmWithOptions(shared_ptr<UpdateAcceleratorConfirmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAcceleratorConfirm"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAcceleratorConfirmResponse(callApi(params, req, runtime));
}

UpdateAcceleratorConfirmResponse Alibabacloud_Ga20191120::Client::updateAcceleratorConfirm(shared_ptr<UpdateAcceleratorConfirmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAcceleratorConfirmWithOptions(request, runtime);
}

UpdateAcceleratorCrossBorderModeResponse Alibabacloud_Ga20191120::Client::updateAcceleratorCrossBorderModeWithOptions(shared_ptr<UpdateAcceleratorCrossBorderModeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crossBorderMode)) {
    query->insert(pair<string, string>("CrossBorderMode", *request->crossBorderMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAcceleratorCrossBorderMode"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAcceleratorCrossBorderModeResponse(callApi(params, req, runtime));
}

UpdateAcceleratorCrossBorderModeResponse Alibabacloud_Ga20191120::Client::updateAcceleratorCrossBorderMode(shared_ptr<UpdateAcceleratorCrossBorderModeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAcceleratorCrossBorderModeWithOptions(request, runtime);
}

UpdateAcceleratorCrossBorderStatusResponse Alibabacloud_Ga20191120::Client::updateAcceleratorCrossBorderStatusWithOptions(shared_ptr<UpdateAcceleratorCrossBorderStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->crossBorderStatus)) {
    query->insert(pair<string, bool>("CrossBorderStatus", *request->crossBorderStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAcceleratorCrossBorderStatus"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAcceleratorCrossBorderStatusResponse(callApi(params, req, runtime));
}

UpdateAcceleratorCrossBorderStatusResponse Alibabacloud_Ga20191120::Client::updateAcceleratorCrossBorderStatus(shared_ptr<UpdateAcceleratorCrossBorderStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAcceleratorCrossBorderStatusWithOptions(request, runtime);
}

UpdateAclAttributeResponse Alibabacloud_Ga20191120::Client::updateAclAttributeWithOptions(shared_ptr<UpdateAclAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAclAttribute"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAclAttributeResponse(callApi(params, req, runtime));
}

UpdateAclAttributeResponse Alibabacloud_Ga20191120::Client::updateAclAttribute(shared_ptr<UpdateAclAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAclAttributeWithOptions(request, runtime);
}

UpdateAdditionalCertificateWithListenerResponse Alibabacloud_Ga20191120::Client::updateAdditionalCertificateWithListenerWithOptions(shared_ptr<UpdateAdditionalCertificateWithListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certificateId)) {
    query->insert(pair<string, string>("CertificateId", *request->certificateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAdditionalCertificateWithListener"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAdditionalCertificateWithListenerResponse(callApi(params, req, runtime));
}

UpdateAdditionalCertificateWithListenerResponse Alibabacloud_Ga20191120::Client::updateAdditionalCertificateWithListener(shared_ptr<UpdateAdditionalCertificateWithListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAdditionalCertificateWithListenerWithOptions(request, runtime);
}

UpdateApplicationMonitorResponse Alibabacloud_Ga20191120::Client::updateApplicationMonitorWithOptions(shared_ptr<UpdateApplicationMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("Address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->detectEnable)) {
    query->insert(pair<string, bool>("DetectEnable", *request->detectEnable));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->detectThreshold)) {
    query->insert(pair<string, long>("DetectThreshold", *request->detectThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->detectTimes)) {
    query->insert(pair<string, long>("DetectTimes", *request->detectTimes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->optionsJson)) {
    query->insert(pair<string, string>("OptionsJson", *request->optionsJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->silenceTime)) {
    query->insert(pair<string, long>("SilenceTime", *request->silenceTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    query->insert(pair<string, string>("TaskName", *request->taskName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateApplicationMonitor"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateApplicationMonitorResponse(callApi(params, req, runtime));
}

UpdateApplicationMonitorResponse Alibabacloud_Ga20191120::Client::updateApplicationMonitor(shared_ptr<UpdateApplicationMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateApplicationMonitorWithOptions(request, runtime);
}

UpdateBandwidthPackagaAutoRenewAttributeResponse Alibabacloud_Ga20191120::Client::updateBandwidthPackagaAutoRenewAttributeWithOptions(shared_ptr<UpdateBandwidthPackagaAutoRenewAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRenew)) {
    query->insert(pair<string, bool>("AutoRenew", *request->autoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->autoRenewDuration)) {
    query->insert(pair<string, long>("AutoRenewDuration", *request->autoRenewDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->renewalStatus)) {
    query->insert(pair<string, string>("RenewalStatus", *request->renewalStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateBandwidthPackagaAutoRenewAttribute"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateBandwidthPackagaAutoRenewAttributeResponse(callApi(params, req, runtime));
}

UpdateBandwidthPackagaAutoRenewAttributeResponse Alibabacloud_Ga20191120::Client::updateBandwidthPackagaAutoRenewAttribute(shared_ptr<UpdateBandwidthPackagaAutoRenewAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateBandwidthPackagaAutoRenewAttributeWithOptions(request, runtime);
}

UpdateBandwidthPackageResponse Alibabacloud_Ga20191120::Client::updateBandwidthPackageWithOptions(shared_ptr<UpdateBandwidthPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoUseCoupon)) {
    query->insert(pair<string, bool>("AutoUseCoupon", *request->autoUseCoupon));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bandwidth)) {
    query->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bandwidthPackageId)) {
    query->insert(pair<string, string>("BandwidthPackageId", *request->bandwidthPackageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bandwidthType)) {
    query->insert(pair<string, string>("BandwidthType", *request->bandwidthType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateBandwidthPackage"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateBandwidthPackageResponse(callApi(params, req, runtime));
}

UpdateBandwidthPackageResponse Alibabacloud_Ga20191120::Client::updateBandwidthPackage(shared_ptr<UpdateBandwidthPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateBandwidthPackageWithOptions(request, runtime);
}

UpdateBasicAcceleratorResponse Alibabacloud_Ga20191120::Client::updateBasicAcceleratorWithOptions(shared_ptr<UpdateBasicAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateBasicAccelerator"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateBasicAcceleratorResponse(callApi(params, req, runtime));
}

UpdateBasicAcceleratorResponse Alibabacloud_Ga20191120::Client::updateBasicAccelerator(shared_ptr<UpdateBasicAcceleratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateBasicAcceleratorWithOptions(request, runtime);
}

UpdateBasicEndpointResponse Alibabacloud_Ga20191120::Client::updateBasicEndpointWithOptions(shared_ptr<UpdateBasicEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupId)) {
    query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointId)) {
    query->insert(pair<string, string>("EndpointId", *request->endpointId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateBasicEndpoint"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateBasicEndpointResponse(callApi(params, req, runtime));
}

UpdateBasicEndpointResponse Alibabacloud_Ga20191120::Client::updateBasicEndpoint(shared_ptr<UpdateBasicEndpointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateBasicEndpointWithOptions(request, runtime);
}

UpdateBasicEndpointGroupResponse Alibabacloud_Ga20191120::Client::updateBasicEndpointGroupWithOptions(shared_ptr<UpdateBasicEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointAddress)) {
    query->insert(pair<string, string>("EndpointAddress", *request->endpointAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupId)) {
    query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointSubAddress)) {
    query->insert(pair<string, string>("EndpointSubAddress", *request->endpointSubAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointType)) {
    query->insert(pair<string, string>("EndpointType", *request->endpointType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateBasicEndpointGroup"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateBasicEndpointGroupResponse(callApi(params, req, runtime));
}

UpdateBasicEndpointGroupResponse Alibabacloud_Ga20191120::Client::updateBasicEndpointGroup(shared_ptr<UpdateBasicEndpointGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateBasicEndpointGroupWithOptions(request, runtime);
}

UpdateBasicIpSetResponse Alibabacloud_Ga20191120::Client::updateBasicIpSetWithOptions(shared_ptr<UpdateBasicIpSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->bandwidth)) {
    query->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipSetId)) {
    query->insert(pair<string, string>("IpSetId", *request->ipSetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateBasicIpSet"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateBasicIpSetResponse(callApi(params, req, runtime));
}

UpdateBasicIpSetResponse Alibabacloud_Ga20191120::Client::updateBasicIpSet(shared_ptr<UpdateBasicIpSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateBasicIpSetWithOptions(request, runtime);
}

UpdateCustomRoutingEndpointGroupAttributeResponse Alibabacloud_Ga20191120::Client::updateCustomRoutingEndpointGroupAttributeWithOptions(shared_ptr<UpdateCustomRoutingEndpointGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupId)) {
    query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCustomRoutingEndpointGroupAttribute"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateCustomRoutingEndpointGroupAttributeResponse(callApi(params, req, runtime));
}

UpdateCustomRoutingEndpointGroupAttributeResponse Alibabacloud_Ga20191120::Client::updateCustomRoutingEndpointGroupAttribute(shared_ptr<UpdateCustomRoutingEndpointGroupAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCustomRoutingEndpointGroupAttributeWithOptions(request, runtime);
}

UpdateCustomRoutingEndpointGroupDestinationsResponse Alibabacloud_Ga20191120::Client::updateCustomRoutingEndpointGroupDestinationsWithOptions(shared_ptr<UpdateCustomRoutingEndpointGroupDestinationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateCustomRoutingEndpointGroupDestinationsRequestDestinationConfigurations>>(request->destinationConfigurations)) {
    query->insert(pair<string, vector<UpdateCustomRoutingEndpointGroupDestinationsRequestDestinationConfigurations>>("DestinationConfigurations", *request->destinationConfigurations));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupId)) {
    query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCustomRoutingEndpointGroupDestinations"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateCustomRoutingEndpointGroupDestinationsResponse(callApi(params, req, runtime));
}

UpdateCustomRoutingEndpointGroupDestinationsResponse Alibabacloud_Ga20191120::Client::updateCustomRoutingEndpointGroupDestinations(shared_ptr<UpdateCustomRoutingEndpointGroupDestinationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCustomRoutingEndpointGroupDestinationsWithOptions(request, runtime);
}

UpdateCustomRoutingEndpointTrafficPoliciesResponse Alibabacloud_Ga20191120::Client::updateCustomRoutingEndpointTrafficPoliciesWithOptions(shared_ptr<UpdateCustomRoutingEndpointTrafficPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointId)) {
    query->insert(pair<string, string>("EndpointId", *request->endpointId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateCustomRoutingEndpointTrafficPoliciesRequestPolicyConfigurations>>(request->policyConfigurations)) {
    query->insert(pair<string, vector<UpdateCustomRoutingEndpointTrafficPoliciesRequestPolicyConfigurations>>("PolicyConfigurations", *request->policyConfigurations));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCustomRoutingEndpointTrafficPolicies"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateCustomRoutingEndpointTrafficPoliciesResponse(callApi(params, req, runtime));
}

UpdateCustomRoutingEndpointTrafficPoliciesResponse Alibabacloud_Ga20191120::Client::updateCustomRoutingEndpointTrafficPolicies(shared_ptr<UpdateCustomRoutingEndpointTrafficPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCustomRoutingEndpointTrafficPoliciesWithOptions(request, runtime);
}

UpdateCustomRoutingEndpointsResponse Alibabacloud_Ga20191120::Client::updateCustomRoutingEndpointsWithOptions(shared_ptr<UpdateCustomRoutingEndpointsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateCustomRoutingEndpointsRequestEndpointConfigurations>>(request->endpointConfigurations)) {
    query->insert(pair<string, vector<UpdateCustomRoutingEndpointsRequestEndpointConfigurations>>("EndpointConfigurations", *request->endpointConfigurations));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupId)) {
    query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCustomRoutingEndpoints"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateCustomRoutingEndpointsResponse(callApi(params, req, runtime));
}

UpdateCustomRoutingEndpointsResponse Alibabacloud_Ga20191120::Client::updateCustomRoutingEndpoints(shared_ptr<UpdateCustomRoutingEndpointsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCustomRoutingEndpointsWithOptions(request, runtime);
}

UpdateDomainResponse Alibabacloud_Ga20191120::Client::updateDomainWithOptions(shared_ptr<UpdateDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetDomain)) {
    query->insert(pair<string, string>("TargetDomain", *request->targetDomain));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDomain"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDomainResponse(callApi(params, req, runtime));
}

UpdateDomainResponse Alibabacloud_Ga20191120::Client::updateDomain(shared_ptr<UpdateDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDomainWithOptions(request, runtime);
}

UpdateDomainStateResponse Alibabacloud_Ga20191120::Client::updateDomainStateWithOptions(shared_ptr<UpdateDomainStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDomainState"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDomainStateResponse(callApi(params, req, runtime));
}

UpdateDomainStateResponse Alibabacloud_Ga20191120::Client::updateDomainState(shared_ptr<UpdateDomainStateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDomainStateWithOptions(request, runtime);
}

UpdateEndpointGroupResponse Alibabacloud_Ga20191120::Client::updateEndpointGroupWithOptions(shared_ptr<UpdateEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateEndpointGroupRequestEndpointConfigurations>>(request->endpointConfigurations)) {
    query->insert(pair<string, vector<UpdateEndpointGroupRequestEndpointConfigurations>>("EndpointConfigurations", *request->endpointConfigurations));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupId)) {
    query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupRegion)) {
    query->insert(pair<string, string>("EndpointGroupRegion", *request->endpointGroupRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointProtocolVersion)) {
    query->insert(pair<string, string>("EndpointProtocolVersion", *request->endpointProtocolVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointRequestProtocol)) {
    query->insert(pair<string, string>("EndpointRequestProtocol", *request->endpointRequestProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->healthCheckEnabled)) {
    query->insert(pair<string, bool>("HealthCheckEnabled", *request->healthCheckEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckIntervalSeconds)) {
    query->insert(pair<string, long>("HealthCheckIntervalSeconds", *request->healthCheckIntervalSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckPath)) {
    query->insert(pair<string, string>("HealthCheckPath", *request->healthCheckPath));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckPort)) {
    query->insert(pair<string, long>("HealthCheckPort", *request->healthCheckPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckProtocol)) {
    query->insert(pair<string, string>("HealthCheckProtocol", *request->healthCheckProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateEndpointGroupRequestPortOverrides>>(request->portOverrides)) {
    query->insert(pair<string, vector<UpdateEndpointGroupRequestPortOverrides>>("PortOverrides", *request->portOverrides));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->thresholdCount)) {
    query->insert(pair<string, long>("ThresholdCount", *request->thresholdCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->trafficPercentage)) {
    query->insert(pair<string, long>("TrafficPercentage", *request->trafficPercentage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEndpointGroup"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEndpointGroupResponse(callApi(params, req, runtime));
}

UpdateEndpointGroupResponse Alibabacloud_Ga20191120::Client::updateEndpointGroup(shared_ptr<UpdateEndpointGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEndpointGroupWithOptions(request, runtime);
}

UpdateEndpointGroupAttributeResponse Alibabacloud_Ga20191120::Client::updateEndpointGroupAttributeWithOptions(shared_ptr<UpdateEndpointGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointGroupId)) {
    query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEndpointGroupAttribute"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEndpointGroupAttributeResponse(callApi(params, req, runtime));
}

UpdateEndpointGroupAttributeResponse Alibabacloud_Ga20191120::Client::updateEndpointGroupAttribute(shared_ptr<UpdateEndpointGroupAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEndpointGroupAttributeWithOptions(request, runtime);
}

UpdateEndpointGroupsResponse Alibabacloud_Ga20191120::Client::updateEndpointGroupsWithOptions(shared_ptr<UpdateEndpointGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateEndpointGroupsRequestEndpointGroupConfigurations>>(request->endpointGroupConfigurations)) {
    query->insert(pair<string, vector<UpdateEndpointGroupsRequestEndpointGroupConfigurations>>("EndpointGroupConfigurations", *request->endpointGroupConfigurations));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEndpointGroups"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEndpointGroupsResponse(callApi(params, req, runtime));
}

UpdateEndpointGroupsResponse Alibabacloud_Ga20191120::Client::updateEndpointGroups(shared_ptr<UpdateEndpointGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEndpointGroupsWithOptions(request, runtime);
}

UpdateForwardingRulesResponse Alibabacloud_Ga20191120::Client::updateForwardingRulesWithOptions(shared_ptr<UpdateForwardingRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorId)) {
    query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateForwardingRulesRequestForwardingRules>>(request->forwardingRules)) {
    query->insert(pair<string, vector<UpdateForwardingRulesRequestForwardingRules>>("ForwardingRules", *request->forwardingRules));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateForwardingRules"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateForwardingRulesResponse(callApi(params, req, runtime));
}

UpdateForwardingRulesResponse Alibabacloud_Ga20191120::Client::updateForwardingRules(shared_ptr<UpdateForwardingRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateForwardingRulesWithOptions(request, runtime);
}

UpdateIpSetResponse Alibabacloud_Ga20191120::Client::updateIpSetWithOptions(shared_ptr<UpdateIpSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->bandwidth)) {
    query->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipSetId)) {
    query->insert(pair<string, string>("IpSetId", *request->ipSetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateIpSet"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateIpSetResponse(callApi(params, req, runtime));
}

UpdateIpSetResponse Alibabacloud_Ga20191120::Client::updateIpSet(shared_ptr<UpdateIpSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateIpSetWithOptions(request, runtime);
}

UpdateIpSetsResponse Alibabacloud_Ga20191120::Client::updateIpSetsWithOptions(shared_ptr<UpdateIpSetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpdateIpSetsRequestIpSets>>(request->ipSets)) {
    query->insert(pair<string, vector<UpdateIpSetsRequestIpSets>>("IpSets", *request->ipSets));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateIpSets"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateIpSetsResponse(callApi(params, req, runtime));
}

UpdateIpSetsResponse Alibabacloud_Ga20191120::Client::updateIpSets(shared_ptr<UpdateIpSetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateIpSetsWithOptions(request, runtime);
}

UpdateListenerResponse Alibabacloud_Ga20191120::Client::updateListenerWithOptions(shared_ptr<UpdateListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpdateListenerRequestBackendPorts>>(request->backendPorts)) {
    query->insert(pair<string, vector<UpdateListenerRequestBackendPorts>>("BackendPorts", *request->backendPorts));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateListenerRequestCertificates>>(request->certificates)) {
    query->insert(pair<string, vector<UpdateListenerRequestCertificates>>("Certificates", *request->certificates));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientAffinity)) {
    query->insert(pair<string, string>("ClientAffinity", *request->clientAffinity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpVersion)) {
    query->insert(pair<string, string>("HttpVersion", *request->httpVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->idleTimeout)) {
    query->insert(pair<string, long>("IdleTimeout", *request->idleTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerId)) {
    query->insert(pair<string, string>("ListenerId", *request->listenerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateListenerRequestPortRanges>>(request->portRanges)) {
    query->insert(pair<string, vector<UpdateListenerRequestPortRanges>>("PortRanges", *request->portRanges));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocol)) {
    query->insert(pair<string, string>("Protocol", *request->protocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyProtocol)) {
    query->insert(pair<string, string>("ProxyProtocol", *request->proxyProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->requestTimeout)) {
    query->insert(pair<string, long>("RequestTimeout", *request->requestTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityPolicyId)) {
    query->insert(pair<string, string>("SecurityPolicyId", *request->securityPolicyId));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateListenerRequestXForwardedForConfig>(request->XForwardedForConfig)) {
    query->insert(pair<string, UpdateListenerRequestXForwardedForConfig>("XForwardedForConfig", *request->XForwardedForConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateListener"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateListenerResponse(callApi(params, req, runtime));
}

UpdateListenerResponse Alibabacloud_Ga20191120::Client::updateListener(shared_ptr<UpdateListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateListenerWithOptions(request, runtime);
}

UpdateServiceManagedControlResponse Alibabacloud_Ga20191120::Client::updateServiceManagedControlWithOptions(shared_ptr<UpdateServiceManagedControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->serviceManaged)) {
    query->insert(pair<string, bool>("ServiceManaged", *request->serviceManaged));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateServiceManagedControl"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateServiceManagedControlResponse(callApi(params, req, runtime));
}

UpdateServiceManagedControlResponse Alibabacloud_Ga20191120::Client::updateServiceManagedControl(shared_ptr<UpdateServiceManagedControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateServiceManagedControlWithOptions(request, runtime);
}

