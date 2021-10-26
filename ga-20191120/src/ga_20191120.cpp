// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ga_20191120.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddEntriesToAclResponse(doRPCRequest(make_shared<string>("AddEntriesToAcl"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddEntriesToAclResponse Alibabacloud_Ga20191120::Client::addEntriesToAcl(shared_ptr<AddEntriesToAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addEntriesToAclWithOptions(request, runtime);
}

AssociateAclsWithListenerResponse Alibabacloud_Ga20191120::Client::associateAclsWithListenerWithOptions(shared_ptr<AssociateAclsWithListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AssociateAclsWithListenerResponse(doRPCRequest(make_shared<string>("AssociateAclsWithListener"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AssociateAclsWithListenerResponse Alibabacloud_Ga20191120::Client::associateAclsWithListener(shared_ptr<AssociateAclsWithListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateAclsWithListenerWithOptions(request, runtime);
}

AssociateAdditionalCertificatesWithListenerResponse Alibabacloud_Ga20191120::Client::associateAdditionalCertificatesWithListenerWithOptions(shared_ptr<AssociateAdditionalCertificatesWithListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AssociateAdditionalCertificatesWithListenerResponse(doRPCRequest(make_shared<string>("AssociateAdditionalCertificatesWithListener"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AssociateAdditionalCertificatesWithListenerResponse Alibabacloud_Ga20191120::Client::associateAdditionalCertificatesWithListener(shared_ptr<AssociateAdditionalCertificatesWithListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateAdditionalCertificatesWithListenerWithOptions(request, runtime);
}

AttachDdosToAcceleratorResponse Alibabacloud_Ga20191120::Client::attachDdosToAcceleratorWithOptions(shared_ptr<AttachDdosToAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AttachDdosToAcceleratorResponse(doRPCRequest(make_shared<string>("AttachDdosToAccelerator"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AttachDdosToAcceleratorResponse Alibabacloud_Ga20191120::Client::attachDdosToAccelerator(shared_ptr<AttachDdosToAcceleratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachDdosToAcceleratorWithOptions(request, runtime);
}

AttachLogStoreToEndpointGroupResponse Alibabacloud_Ga20191120::Client::attachLogStoreToEndpointGroupWithOptions(shared_ptr<AttachLogStoreToEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AttachLogStoreToEndpointGroupResponse(doRPCRequest(make_shared<string>("AttachLogStoreToEndpointGroup"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AttachLogStoreToEndpointGroupResponse Alibabacloud_Ga20191120::Client::attachLogStoreToEndpointGroup(shared_ptr<AttachLogStoreToEndpointGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachLogStoreToEndpointGroupWithOptions(request, runtime);
}

BandwidthPackageAddAcceleratorResponse Alibabacloud_Ga20191120::Client::bandwidthPackageAddAcceleratorWithOptions(shared_ptr<BandwidthPackageAddAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BandwidthPackageAddAcceleratorResponse(doRPCRequest(make_shared<string>("BandwidthPackageAddAccelerator"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BandwidthPackageAddAcceleratorResponse Alibabacloud_Ga20191120::Client::bandwidthPackageAddAccelerator(shared_ptr<BandwidthPackageAddAcceleratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bandwidthPackageAddAcceleratorWithOptions(request, runtime);
}

BandwidthPackageRemoveAcceleratorResponse Alibabacloud_Ga20191120::Client::bandwidthPackageRemoveAcceleratorWithOptions(shared_ptr<BandwidthPackageRemoveAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BandwidthPackageRemoveAcceleratorResponse(doRPCRequest(make_shared<string>("BandwidthPackageRemoveAccelerator"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BandwidthPackageRemoveAcceleratorResponse Alibabacloud_Ga20191120::Client::bandwidthPackageRemoveAccelerator(shared_ptr<BandwidthPackageRemoveAcceleratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bandwidthPackageRemoveAcceleratorWithOptions(request, runtime);
}

ConfigEndpointProbeResponse Alibabacloud_Ga20191120::Client::configEndpointProbeWithOptions(shared_ptr<ConfigEndpointProbeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ConfigEndpointProbeResponse(doRPCRequest(make_shared<string>("ConfigEndpointProbe"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ConfigEndpointProbeResponse Alibabacloud_Ga20191120::Client::configEndpointProbe(shared_ptr<ConfigEndpointProbeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return configEndpointProbeWithOptions(request, runtime);
}

CreateAcceleratorResponse Alibabacloud_Ga20191120::Client::createAcceleratorWithOptions(shared_ptr<CreateAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAcceleratorResponse(doRPCRequest(make_shared<string>("CreateAccelerator"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAcceleratorResponse Alibabacloud_Ga20191120::Client::createAccelerator(shared_ptr<CreateAcceleratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAcceleratorWithOptions(request, runtime);
}

CreateAclResponse Alibabacloud_Ga20191120::Client::createAclWithOptions(shared_ptr<CreateAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAclResponse(doRPCRequest(make_shared<string>("CreateAcl"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAclResponse Alibabacloud_Ga20191120::Client::createAcl(shared_ptr<CreateAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAclWithOptions(request, runtime);
}

CreateBandwidthPackageResponse Alibabacloud_Ga20191120::Client::createBandwidthPackageWithOptions(shared_ptr<CreateBandwidthPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateBandwidthPackageResponse(doRPCRequest(make_shared<string>("CreateBandwidthPackage"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateBandwidthPackageResponse Alibabacloud_Ga20191120::Client::createBandwidthPackage(shared_ptr<CreateBandwidthPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBandwidthPackageWithOptions(request, runtime);
}

CreateEndpointGroupResponse Alibabacloud_Ga20191120::Client::createEndpointGroupWithOptions(shared_ptr<CreateEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateEndpointGroupResponse(doRPCRequest(make_shared<string>("CreateEndpointGroup"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateEndpointGroupResponse Alibabacloud_Ga20191120::Client::createEndpointGroup(shared_ptr<CreateEndpointGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEndpointGroupWithOptions(request, runtime);
}

CreateEndpointGroupsResponse Alibabacloud_Ga20191120::Client::createEndpointGroupsWithOptions(shared_ptr<CreateEndpointGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateEndpointGroupsResponse(doRPCRequest(make_shared<string>("CreateEndpointGroups"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateEndpointGroupsResponse Alibabacloud_Ga20191120::Client::createEndpointGroups(shared_ptr<CreateEndpointGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEndpointGroupsWithOptions(request, runtime);
}

CreateForwardingRulesResponse Alibabacloud_Ga20191120::Client::createForwardingRulesWithOptions(shared_ptr<CreateForwardingRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateForwardingRulesResponse(doRPCRequest(make_shared<string>("CreateForwardingRules"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateForwardingRulesResponse Alibabacloud_Ga20191120::Client::createForwardingRules(shared_ptr<CreateForwardingRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createForwardingRulesWithOptions(request, runtime);
}

CreateIpSetsResponse Alibabacloud_Ga20191120::Client::createIpSetsWithOptions(shared_ptr<CreateIpSetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateIpSetsResponse(doRPCRequest(make_shared<string>("CreateIpSets"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateIpSetsResponse Alibabacloud_Ga20191120::Client::createIpSets(shared_ptr<CreateIpSetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createIpSetsWithOptions(request, runtime);
}

CreateListenerResponse Alibabacloud_Ga20191120::Client::createListenerWithOptions(shared_ptr<CreateListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateListenerResponse(doRPCRequest(make_shared<string>("CreateListener"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateListenerResponse Alibabacloud_Ga20191120::Client::createListener(shared_ptr<CreateListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createListenerWithOptions(request, runtime);
}

CreateSpareIpsResponse Alibabacloud_Ga20191120::Client::createSpareIpsWithOptions(shared_ptr<CreateSpareIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSpareIpsResponse(doRPCRequest(make_shared<string>("CreateSpareIps"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSpareIpsResponse Alibabacloud_Ga20191120::Client::createSpareIps(shared_ptr<CreateSpareIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSpareIpsWithOptions(request, runtime);
}

DeleteAcceleratorResponse Alibabacloud_Ga20191120::Client::deleteAcceleratorWithOptions(shared_ptr<DeleteAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAcceleratorResponse(doRPCRequest(make_shared<string>("DeleteAccelerator"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAcceleratorResponse Alibabacloud_Ga20191120::Client::deleteAccelerator(shared_ptr<DeleteAcceleratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAcceleratorWithOptions(request, runtime);
}

DeleteAclResponse Alibabacloud_Ga20191120::Client::deleteAclWithOptions(shared_ptr<DeleteAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAclResponse(doRPCRequest(make_shared<string>("DeleteAcl"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAclResponse Alibabacloud_Ga20191120::Client::deleteAcl(shared_ptr<DeleteAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAclWithOptions(request, runtime);
}

DeleteBandwidthPackageResponse Alibabacloud_Ga20191120::Client::deleteBandwidthPackageWithOptions(shared_ptr<DeleteBandwidthPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteBandwidthPackageResponse(doRPCRequest(make_shared<string>("DeleteBandwidthPackage"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteBandwidthPackageResponse Alibabacloud_Ga20191120::Client::deleteBandwidthPackage(shared_ptr<DeleteBandwidthPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBandwidthPackageWithOptions(request, runtime);
}

DeleteEndpointGroupResponse Alibabacloud_Ga20191120::Client::deleteEndpointGroupWithOptions(shared_ptr<DeleteEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteEndpointGroupResponse(doRPCRequest(make_shared<string>("DeleteEndpointGroup"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteEndpointGroupResponse Alibabacloud_Ga20191120::Client::deleteEndpointGroup(shared_ptr<DeleteEndpointGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEndpointGroupWithOptions(request, runtime);
}

DeleteEndpointGroupsResponse Alibabacloud_Ga20191120::Client::deleteEndpointGroupsWithOptions(shared_ptr<DeleteEndpointGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteEndpointGroupsResponse(doRPCRequest(make_shared<string>("DeleteEndpointGroups"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteEndpointGroupsResponse Alibabacloud_Ga20191120::Client::deleteEndpointGroups(shared_ptr<DeleteEndpointGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEndpointGroupsWithOptions(request, runtime);
}

DeleteForwardingRulesResponse Alibabacloud_Ga20191120::Client::deleteForwardingRulesWithOptions(shared_ptr<DeleteForwardingRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteForwardingRulesResponse(doRPCRequest(make_shared<string>("DeleteForwardingRules"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteForwardingRulesResponse Alibabacloud_Ga20191120::Client::deleteForwardingRules(shared_ptr<DeleteForwardingRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteForwardingRulesWithOptions(request, runtime);
}

DeleteIpSetResponse Alibabacloud_Ga20191120::Client::deleteIpSetWithOptions(shared_ptr<DeleteIpSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteIpSetResponse(doRPCRequest(make_shared<string>("DeleteIpSet"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteIpSetResponse Alibabacloud_Ga20191120::Client::deleteIpSet(shared_ptr<DeleteIpSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteIpSetWithOptions(request, runtime);
}

DeleteIpSetsResponse Alibabacloud_Ga20191120::Client::deleteIpSetsWithOptions(shared_ptr<DeleteIpSetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteIpSetsResponse(doRPCRequest(make_shared<string>("DeleteIpSets"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteIpSetsResponse Alibabacloud_Ga20191120::Client::deleteIpSets(shared_ptr<DeleteIpSetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteIpSetsWithOptions(request, runtime);
}

DeleteListenerResponse Alibabacloud_Ga20191120::Client::deleteListenerWithOptions(shared_ptr<DeleteListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteListenerResponse(doRPCRequest(make_shared<string>("DeleteListener"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteListenerResponse Alibabacloud_Ga20191120::Client::deleteListener(shared_ptr<DeleteListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteListenerWithOptions(request, runtime);
}

DeleteSpareIpsResponse Alibabacloud_Ga20191120::Client::deleteSpareIpsWithOptions(shared_ptr<DeleteSpareIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSpareIpsResponse(doRPCRequest(make_shared<string>("DeleteSpareIps"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSpareIpsResponse Alibabacloud_Ga20191120::Client::deleteSpareIps(shared_ptr<DeleteSpareIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSpareIpsWithOptions(request, runtime);
}

DescribeAcceleratorResponse Alibabacloud_Ga20191120::Client::describeAcceleratorWithOptions(shared_ptr<DescribeAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAcceleratorResponse(doRPCRequest(make_shared<string>("DescribeAccelerator"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAcceleratorResponse Alibabacloud_Ga20191120::Client::describeAccelerator(shared_ptr<DescribeAcceleratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAcceleratorWithOptions(request, runtime);
}

DescribeBandwidthPackageResponse Alibabacloud_Ga20191120::Client::describeBandwidthPackageWithOptions(shared_ptr<DescribeBandwidthPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBandwidthPackageResponse(doRPCRequest(make_shared<string>("DescribeBandwidthPackage"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBandwidthPackageResponse Alibabacloud_Ga20191120::Client::describeBandwidthPackage(shared_ptr<DescribeBandwidthPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBandwidthPackageWithOptions(request, runtime);
}

DescribeEndpointGroupResponse Alibabacloud_Ga20191120::Client::describeEndpointGroupWithOptions(shared_ptr<DescribeEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeEndpointGroupResponse(doRPCRequest(make_shared<string>("DescribeEndpointGroup"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeEndpointGroupResponse Alibabacloud_Ga20191120::Client::describeEndpointGroup(shared_ptr<DescribeEndpointGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEndpointGroupWithOptions(request, runtime);
}

DescribeIpSetResponse Alibabacloud_Ga20191120::Client::describeIpSetWithOptions(shared_ptr<DescribeIpSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeIpSetResponse(doRPCRequest(make_shared<string>("DescribeIpSet"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeIpSetResponse Alibabacloud_Ga20191120::Client::describeIpSet(shared_ptr<DescribeIpSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeIpSetWithOptions(request, runtime);
}

DescribeListenerResponse Alibabacloud_Ga20191120::Client::describeListenerWithOptions(shared_ptr<DescribeListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeListenerResponse(doRPCRequest(make_shared<string>("DescribeListener"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeListenerResponse Alibabacloud_Ga20191120::Client::describeListener(shared_ptr<DescribeListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeListenerWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Ga20191120::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRegionsResponse(doRPCRequest(make_shared<string>("DescribeRegions"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionsResponse Alibabacloud_Ga20191120::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DetachDdosFromAcceleratorResponse Alibabacloud_Ga20191120::Client::detachDdosFromAcceleratorWithOptions(shared_ptr<DetachDdosFromAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetachDdosFromAcceleratorResponse(doRPCRequest(make_shared<string>("DetachDdosFromAccelerator"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetachDdosFromAcceleratorResponse Alibabacloud_Ga20191120::Client::detachDdosFromAccelerator(shared_ptr<DetachDdosFromAcceleratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachDdosFromAcceleratorWithOptions(request, runtime);
}

DetachLogStoreFromEndpointGroupResponse Alibabacloud_Ga20191120::Client::detachLogStoreFromEndpointGroupWithOptions(shared_ptr<DetachLogStoreFromEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetachLogStoreFromEndpointGroupResponse(doRPCRequest(make_shared<string>("DetachLogStoreFromEndpointGroup"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetachLogStoreFromEndpointGroupResponse Alibabacloud_Ga20191120::Client::detachLogStoreFromEndpointGroup(shared_ptr<DetachLogStoreFromEndpointGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachLogStoreFromEndpointGroupWithOptions(request, runtime);
}

DissociateAclsFromListenerResponse Alibabacloud_Ga20191120::Client::dissociateAclsFromListenerWithOptions(shared_ptr<DissociateAclsFromListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DissociateAclsFromListenerResponse(doRPCRequest(make_shared<string>("DissociateAclsFromListener"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DissociateAclsFromListenerResponse Alibabacloud_Ga20191120::Client::dissociateAclsFromListener(shared_ptr<DissociateAclsFromListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dissociateAclsFromListenerWithOptions(request, runtime);
}

DissociateAdditionalCertificatesFromListenerResponse Alibabacloud_Ga20191120::Client::dissociateAdditionalCertificatesFromListenerWithOptions(shared_ptr<DissociateAdditionalCertificatesFromListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DissociateAdditionalCertificatesFromListenerResponse(doRPCRequest(make_shared<string>("DissociateAdditionalCertificatesFromListener"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DissociateAdditionalCertificatesFromListenerResponse Alibabacloud_Ga20191120::Client::dissociateAdditionalCertificatesFromListener(shared_ptr<DissociateAdditionalCertificatesFromListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dissociateAdditionalCertificatesFromListenerWithOptions(request, runtime);
}

GetAclResponse Alibabacloud_Ga20191120::Client::getAclWithOptions(shared_ptr<GetAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAclResponse(doRPCRequest(make_shared<string>("GetAcl"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAclResponse Alibabacloud_Ga20191120::Client::getAcl(shared_ptr<GetAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAclWithOptions(request, runtime);
}

GetHealthStatusResponse Alibabacloud_Ga20191120::Client::getHealthStatusWithOptions(shared_ptr<GetHealthStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetHealthStatusResponse(doRPCRequest(make_shared<string>("GetHealthStatus"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetHealthStatusResponse Alibabacloud_Ga20191120::Client::getHealthStatus(shared_ptr<GetHealthStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHealthStatusWithOptions(request, runtime);
}

GetSpareIpResponse Alibabacloud_Ga20191120::Client::getSpareIpWithOptions(shared_ptr<GetSpareIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetSpareIpResponse(doRPCRequest(make_shared<string>("GetSpareIp"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSpareIpResponse Alibabacloud_Ga20191120::Client::getSpareIp(shared_ptr<GetSpareIpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSpareIpWithOptions(request, runtime);
}

ListAccelerateAreasResponse Alibabacloud_Ga20191120::Client::listAccelerateAreasWithOptions(shared_ptr<ListAccelerateAreasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAccelerateAreasResponse(doRPCRequest(make_shared<string>("ListAccelerateAreas"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAccelerateAreasResponse Alibabacloud_Ga20191120::Client::listAccelerateAreas(shared_ptr<ListAccelerateAreasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAccelerateAreasWithOptions(request, runtime);
}

ListAcceleratorsResponse Alibabacloud_Ga20191120::Client::listAcceleratorsWithOptions(shared_ptr<ListAcceleratorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAcceleratorsResponse(doRPCRequest(make_shared<string>("ListAccelerators"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAcceleratorsResponse Alibabacloud_Ga20191120::Client::listAccelerators(shared_ptr<ListAcceleratorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAcceleratorsWithOptions(request, runtime);
}

ListAclsResponse Alibabacloud_Ga20191120::Client::listAclsWithOptions(shared_ptr<ListAclsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAclsResponse(doRPCRequest(make_shared<string>("ListAcls"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAclsResponse Alibabacloud_Ga20191120::Client::listAcls(shared_ptr<ListAclsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAclsWithOptions(request, runtime);
}

ListAvailableAccelerateAreasResponse Alibabacloud_Ga20191120::Client::listAvailableAccelerateAreasWithOptions(shared_ptr<ListAvailableAccelerateAreasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAvailableAccelerateAreasResponse(doRPCRequest(make_shared<string>("ListAvailableAccelerateAreas"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAvailableAccelerateAreasResponse Alibabacloud_Ga20191120::Client::listAvailableAccelerateAreas(shared_ptr<ListAvailableAccelerateAreasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAvailableAccelerateAreasWithOptions(request, runtime);
}

ListAvailableBusiRegionsResponse Alibabacloud_Ga20191120::Client::listAvailableBusiRegionsWithOptions(shared_ptr<ListAvailableBusiRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAvailableBusiRegionsResponse(doRPCRequest(make_shared<string>("ListAvailableBusiRegions"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAvailableBusiRegionsResponse Alibabacloud_Ga20191120::Client::listAvailableBusiRegions(shared_ptr<ListAvailableBusiRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAvailableBusiRegionsWithOptions(request, runtime);
}

ListBandwidthackagesResponse Alibabacloud_Ga20191120::Client::listBandwidthackagesWithOptions(shared_ptr<ListBandwidthackagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListBandwidthackagesResponse(doRPCRequest(make_shared<string>("ListBandwidthackages"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListBandwidthackagesResponse Alibabacloud_Ga20191120::Client::listBandwidthackages(shared_ptr<ListBandwidthackagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBandwidthackagesWithOptions(request, runtime);
}

ListBandwidthPackagesResponse Alibabacloud_Ga20191120::Client::listBandwidthPackagesWithOptions(shared_ptr<ListBandwidthPackagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListBandwidthPackagesResponse(doRPCRequest(make_shared<string>("ListBandwidthPackages"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListBandwidthPackagesResponse Alibabacloud_Ga20191120::Client::listBandwidthPackages(shared_ptr<ListBandwidthPackagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBandwidthPackagesWithOptions(request, runtime);
}

ListBusiRegionsResponse Alibabacloud_Ga20191120::Client::listBusiRegionsWithOptions(shared_ptr<ListBusiRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListBusiRegionsResponse(doRPCRequest(make_shared<string>("ListBusiRegions"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListBusiRegionsResponse Alibabacloud_Ga20191120::Client::listBusiRegions(shared_ptr<ListBusiRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBusiRegionsWithOptions(request, runtime);
}

ListEndpointGroupsResponse Alibabacloud_Ga20191120::Client::listEndpointGroupsWithOptions(shared_ptr<ListEndpointGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListEndpointGroupsResponse(doRPCRequest(make_shared<string>("ListEndpointGroups"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListEndpointGroupsResponse Alibabacloud_Ga20191120::Client::listEndpointGroups(shared_ptr<ListEndpointGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEndpointGroupsWithOptions(request, runtime);
}

ListForwardingRulesResponse Alibabacloud_Ga20191120::Client::listForwardingRulesWithOptions(shared_ptr<ListForwardingRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListForwardingRulesResponse(doRPCRequest(make_shared<string>("ListForwardingRules"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListForwardingRulesResponse Alibabacloud_Ga20191120::Client::listForwardingRules(shared_ptr<ListForwardingRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listForwardingRulesWithOptions(request, runtime);
}

ListIpSetsResponse Alibabacloud_Ga20191120::Client::listIpSetsWithOptions(shared_ptr<ListIpSetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListIpSetsResponse(doRPCRequest(make_shared<string>("ListIpSets"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListIpSetsResponse Alibabacloud_Ga20191120::Client::listIpSets(shared_ptr<ListIpSetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listIpSetsWithOptions(request, runtime);
}

ListListenerCertificatesResponse Alibabacloud_Ga20191120::Client::listListenerCertificatesWithOptions(shared_ptr<ListListenerCertificatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListListenerCertificatesResponse(doRPCRequest(make_shared<string>("ListListenerCertificates"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListListenerCertificatesResponse Alibabacloud_Ga20191120::Client::listListenerCertificates(shared_ptr<ListListenerCertificatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listListenerCertificatesWithOptions(request, runtime);
}

ListListenersResponse Alibabacloud_Ga20191120::Client::listListenersWithOptions(shared_ptr<ListListenersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListListenersResponse(doRPCRequest(make_shared<string>("ListListeners"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListListenersResponse Alibabacloud_Ga20191120::Client::listListeners(shared_ptr<ListListenersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listListenersWithOptions(request, runtime);
}

ListSpareIpsResponse Alibabacloud_Ga20191120::Client::listSpareIpsWithOptions(shared_ptr<ListSpareIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListSpareIpsResponse(doRPCRequest(make_shared<string>("ListSpareIps"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSpareIpsResponse Alibabacloud_Ga20191120::Client::listSpareIps(shared_ptr<ListSpareIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSpareIpsWithOptions(request, runtime);
}

ListSystemSecurityPoliciesResponse Alibabacloud_Ga20191120::Client::listSystemSecurityPoliciesWithOptions(shared_ptr<ListSystemSecurityPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListSystemSecurityPoliciesResponse(doRPCRequest(make_shared<string>("ListSystemSecurityPolicies"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSystemSecurityPoliciesResponse Alibabacloud_Ga20191120::Client::listSystemSecurityPolicies(shared_ptr<ListSystemSecurityPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSystemSecurityPoliciesWithOptions(request, runtime);
}

RemoveEntriesFromAclResponse Alibabacloud_Ga20191120::Client::removeEntriesFromAclWithOptions(shared_ptr<RemoveEntriesFromAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveEntriesFromAclResponse(doRPCRequest(make_shared<string>("RemoveEntriesFromAcl"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveEntriesFromAclResponse Alibabacloud_Ga20191120::Client::removeEntriesFromAcl(shared_ptr<RemoveEntriesFromAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeEntriesFromAclWithOptions(request, runtime);
}

ReplaceBandwidthPackageResponse Alibabacloud_Ga20191120::Client::replaceBandwidthPackageWithOptions(shared_ptr<ReplaceBandwidthPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReplaceBandwidthPackageResponse(doRPCRequest(make_shared<string>("ReplaceBandwidthPackage"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReplaceBandwidthPackageResponse Alibabacloud_Ga20191120::Client::replaceBandwidthPackage(shared_ptr<ReplaceBandwidthPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return replaceBandwidthPackageWithOptions(request, runtime);
}

UpdateAcceleratorResponse Alibabacloud_Ga20191120::Client::updateAcceleratorWithOptions(shared_ptr<UpdateAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateAcceleratorResponse(doRPCRequest(make_shared<string>("UpdateAccelerator"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateAcceleratorResponse Alibabacloud_Ga20191120::Client::updateAccelerator(shared_ptr<UpdateAcceleratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAcceleratorWithOptions(request, runtime);
}

UpdateAcceleratorConfirmResponse Alibabacloud_Ga20191120::Client::updateAcceleratorConfirmWithOptions(shared_ptr<UpdateAcceleratorConfirmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateAcceleratorConfirmResponse(doRPCRequest(make_shared<string>("UpdateAcceleratorConfirm"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateAcceleratorConfirmResponse Alibabacloud_Ga20191120::Client::updateAcceleratorConfirm(shared_ptr<UpdateAcceleratorConfirmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAcceleratorConfirmWithOptions(request, runtime);
}

UpdateAclAttributeResponse Alibabacloud_Ga20191120::Client::updateAclAttributeWithOptions(shared_ptr<UpdateAclAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateAclAttributeResponse(doRPCRequest(make_shared<string>("UpdateAclAttribute"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateAclAttributeResponse Alibabacloud_Ga20191120::Client::updateAclAttribute(shared_ptr<UpdateAclAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAclAttributeWithOptions(request, runtime);
}

UpdateBandwidthPackageResponse Alibabacloud_Ga20191120::Client::updateBandwidthPackageWithOptions(shared_ptr<UpdateBandwidthPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateBandwidthPackageResponse(doRPCRequest(make_shared<string>("UpdateBandwidthPackage"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateBandwidthPackageResponse Alibabacloud_Ga20191120::Client::updateBandwidthPackage(shared_ptr<UpdateBandwidthPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateBandwidthPackageWithOptions(request, runtime);
}

UpdateEndpointGroupResponse Alibabacloud_Ga20191120::Client::updateEndpointGroupWithOptions(shared_ptr<UpdateEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateEndpointGroupResponse(doRPCRequest(make_shared<string>("UpdateEndpointGroup"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateEndpointGroupResponse Alibabacloud_Ga20191120::Client::updateEndpointGroup(shared_ptr<UpdateEndpointGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEndpointGroupWithOptions(request, runtime);
}

UpdateEndpointGroupAttributeResponse Alibabacloud_Ga20191120::Client::updateEndpointGroupAttributeWithOptions(shared_ptr<UpdateEndpointGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateEndpointGroupAttributeResponse(doRPCRequest(make_shared<string>("UpdateEndpointGroupAttribute"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateEndpointGroupAttributeResponse Alibabacloud_Ga20191120::Client::updateEndpointGroupAttribute(shared_ptr<UpdateEndpointGroupAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEndpointGroupAttributeWithOptions(request, runtime);
}

UpdateEndpointGroupsResponse Alibabacloud_Ga20191120::Client::updateEndpointGroupsWithOptions(shared_ptr<UpdateEndpointGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateEndpointGroupsResponse(doRPCRequest(make_shared<string>("UpdateEndpointGroups"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateEndpointGroupsResponse Alibabacloud_Ga20191120::Client::updateEndpointGroups(shared_ptr<UpdateEndpointGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEndpointGroupsWithOptions(request, runtime);
}

UpdateForwardingRulesResponse Alibabacloud_Ga20191120::Client::updateForwardingRulesWithOptions(shared_ptr<UpdateForwardingRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateForwardingRulesResponse(doRPCRequest(make_shared<string>("UpdateForwardingRules"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateForwardingRulesResponse Alibabacloud_Ga20191120::Client::updateForwardingRules(shared_ptr<UpdateForwardingRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateForwardingRulesWithOptions(request, runtime);
}

UpdateIpSetResponse Alibabacloud_Ga20191120::Client::updateIpSetWithOptions(shared_ptr<UpdateIpSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateIpSetResponse(doRPCRequest(make_shared<string>("UpdateIpSet"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateIpSetResponse Alibabacloud_Ga20191120::Client::updateIpSet(shared_ptr<UpdateIpSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateIpSetWithOptions(request, runtime);
}

UpdateIpSetsResponse Alibabacloud_Ga20191120::Client::updateIpSetsWithOptions(shared_ptr<UpdateIpSetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateIpSetsResponse(doRPCRequest(make_shared<string>("UpdateIpSets"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateIpSetsResponse Alibabacloud_Ga20191120::Client::updateIpSets(shared_ptr<UpdateIpSetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateIpSetsWithOptions(request, runtime);
}

UpdateListenerResponse Alibabacloud_Ga20191120::Client::updateListenerWithOptions(shared_ptr<UpdateListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateListenerResponse(doRPCRequest(make_shared<string>("UpdateListener"), make_shared<string>("2019-11-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateListenerResponse Alibabacloud_Ga20191120::Client::updateListener(shared_ptr<UpdateListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateListenerWithOptions(request, runtime);
}

