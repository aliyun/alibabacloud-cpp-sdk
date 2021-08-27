// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ecs_20140526.hpp>
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

using namespace Alibabacloud_Ecs20140526;

Alibabacloud_Ecs20140526::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-qingdao", "ecs-cn-hangzhou.aliyuncs.com"},
    {"cn-beijing", "ecs-cn-hangzhou.aliyuncs.com"},
    {"cn-hangzhou", "ecs-cn-hangzhou.aliyuncs.com"},
    {"cn-shanghai", "ecs-cn-hangzhou.aliyuncs.com"},
    {"cn-shenzhen", "ecs-cn-hangzhou.aliyuncs.com"},
    {"cn-hongkong", "ecs-cn-hangzhou.aliyuncs.com"},
    {"ap-southeast-1", "ecs-cn-hangzhou.aliyuncs.com"},
    {"us-west-1", "ecs-cn-hangzhou.aliyuncs.com"},
    {"us-east-1", "ecs-cn-hangzhou.aliyuncs.com"},
    {"cn-shanghai-finance-1", "ecs-cn-hangzhou.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "ecs-cn-hangzhou.aliyuncs.com"},
    {"cn-north-2-gov-1", "ecs.aliyuncs.com"},
    {"ap-northeast-2-pop", "ecs.ap-northeast-1.aliyuncs.com"},
    {"cn-beijing-finance-1", "ecs.aliyuncs.com"},
    {"cn-beijing-finance-pop", "ecs.aliyuncs.com"},
    {"cn-beijing-gov-1", "ecs.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "ecs-cn-hangzhou.aliyuncs.com"},
    {"cn-edge-1", "ecs.cn-qingdao-nebula.aliyuncs.com"},
    {"cn-fujian", "ecs-cn-hangzhou.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "ecs-cn-hangzhou.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "ecs-cn-hangzhou.aliyuncs.com"},
    {"cn-hangzhou-finance", "ecs.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "ecs-cn-hangzhou.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "ecs-cn-hangzhou.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "ecs-cn-hangzhou.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "ecs-cn-hangzhou.aliyuncs.com"},
    {"cn-hangzhou-test-306", "ecs-cn-hangzhou.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "ecs.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "ecs-cn-hangzhou.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "ecs-cn-hangzhou.aliyuncs.com"},
    {"cn-shanghai-inner", "ecs.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "ecs-cn-hangzhou.aliyuncs.com"},
    {"cn-shenzhen-inner", "ecs.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "ecs-cn-hangzhou.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "ecs-cn-hangzhou.aliyuncs.com"},
    {"cn-wuhan", "ecs.aliyuncs.com"},
    {"cn-yushanfang", "ecs.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "ecs-cn-hangzhou.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "ecs.cn-zhangjiakou.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "ecs.cn-qingdao-nebula.aliyuncs.com"},
    {"eu-west-1-oxs", "ecs.cn-shenzhen-cloudstone.aliyuncs.com"},
    {"rus-west-1-pop", "ecs.ap-northeast-1.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("ecs"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Ecs20140526::Client::getEndpoint(shared_ptr<string> productId,
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

AcceptInquiredSystemEventResponse Alibabacloud_Ecs20140526::Client::acceptInquiredSystemEventWithOptions(shared_ptr<AcceptInquiredSystemEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AcceptInquiredSystemEventResponse(doRPCRequest(make_shared<string>("AcceptInquiredSystemEvent"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AcceptInquiredSystemEventResponse Alibabacloud_Ecs20140526::Client::acceptInquiredSystemEvent(shared_ptr<AcceptInquiredSystemEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return acceptInquiredSystemEventWithOptions(request, runtime);
}

ActivateRouterInterfaceResponse Alibabacloud_Ecs20140526::Client::activateRouterInterfaceWithOptions(shared_ptr<ActivateRouterInterfaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ActivateRouterInterfaceResponse(doRPCRequest(make_shared<string>("ActivateRouterInterface"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ActivateRouterInterfaceResponse Alibabacloud_Ecs20140526::Client::activateRouterInterface(shared_ptr<ActivateRouterInterfaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return activateRouterInterfaceWithOptions(request, runtime);
}

AddBandwidthPackageIpsResponse Alibabacloud_Ecs20140526::Client::addBandwidthPackageIpsWithOptions(shared_ptr<AddBandwidthPackageIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddBandwidthPackageIpsResponse(doRPCRequest(make_shared<string>("AddBandwidthPackageIps"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddBandwidthPackageIpsResponse Alibabacloud_Ecs20140526::Client::addBandwidthPackageIps(shared_ptr<AddBandwidthPackageIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addBandwidthPackageIpsWithOptions(request, runtime);
}

AddTagsResponse Alibabacloud_Ecs20140526::Client::addTagsWithOptions(shared_ptr<AddTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddTagsResponse(doRPCRequest(make_shared<string>("AddTags"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddTagsResponse Alibabacloud_Ecs20140526::Client::addTags(shared_ptr<AddTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addTagsWithOptions(request, runtime);
}

AllocateDedicatedHostsResponse Alibabacloud_Ecs20140526::Client::allocateDedicatedHostsWithOptions(shared_ptr<AllocateDedicatedHostsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AllocateDedicatedHostsResponse(doRPCRequest(make_shared<string>("AllocateDedicatedHosts"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AllocateDedicatedHostsResponse Alibabacloud_Ecs20140526::Client::allocateDedicatedHosts(shared_ptr<AllocateDedicatedHostsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return allocateDedicatedHostsWithOptions(request, runtime);
}

AllocateEipAddressResponse Alibabacloud_Ecs20140526::Client::allocateEipAddressWithOptions(shared_ptr<AllocateEipAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AllocateEipAddressResponse(doRPCRequest(make_shared<string>("AllocateEipAddress"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AllocateEipAddressResponse Alibabacloud_Ecs20140526::Client::allocateEipAddress(shared_ptr<AllocateEipAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return allocateEipAddressWithOptions(request, runtime);
}

AllocatePublicIpAddressResponse Alibabacloud_Ecs20140526::Client::allocatePublicIpAddressWithOptions(shared_ptr<AllocatePublicIpAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AllocatePublicIpAddressResponse(doRPCRequest(make_shared<string>("AllocatePublicIpAddress"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AllocatePublicIpAddressResponse Alibabacloud_Ecs20140526::Client::allocatePublicIpAddress(shared_ptr<AllocatePublicIpAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return allocatePublicIpAddressWithOptions(request, runtime);
}

ApplyAutoSnapshotPolicyResponse Alibabacloud_Ecs20140526::Client::applyAutoSnapshotPolicyWithOptions(shared_ptr<ApplyAutoSnapshotPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ApplyAutoSnapshotPolicyResponse(doRPCRequest(make_shared<string>("ApplyAutoSnapshotPolicy"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ApplyAutoSnapshotPolicyResponse Alibabacloud_Ecs20140526::Client::applyAutoSnapshotPolicy(shared_ptr<ApplyAutoSnapshotPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyAutoSnapshotPolicyWithOptions(request, runtime);
}

AssignIpv6AddressesResponse Alibabacloud_Ecs20140526::Client::assignIpv6AddressesWithOptions(shared_ptr<AssignIpv6AddressesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AssignIpv6AddressesResponse(doRPCRequest(make_shared<string>("AssignIpv6Addresses"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AssignIpv6AddressesResponse Alibabacloud_Ecs20140526::Client::assignIpv6Addresses(shared_ptr<AssignIpv6AddressesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return assignIpv6AddressesWithOptions(request, runtime);
}

AssignPrivateIpAddressesResponse Alibabacloud_Ecs20140526::Client::assignPrivateIpAddressesWithOptions(shared_ptr<AssignPrivateIpAddressesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AssignPrivateIpAddressesResponse(doRPCRequest(make_shared<string>("AssignPrivateIpAddresses"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AssignPrivateIpAddressesResponse Alibabacloud_Ecs20140526::Client::assignPrivateIpAddresses(shared_ptr<AssignPrivateIpAddressesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return assignPrivateIpAddressesWithOptions(request, runtime);
}

AssociateEipAddressResponse Alibabacloud_Ecs20140526::Client::associateEipAddressWithOptions(shared_ptr<AssociateEipAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AssociateEipAddressResponse(doRPCRequest(make_shared<string>("AssociateEipAddress"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AssociateEipAddressResponse Alibabacloud_Ecs20140526::Client::associateEipAddress(shared_ptr<AssociateEipAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateEipAddressWithOptions(request, runtime);
}

AssociateHaVipResponse Alibabacloud_Ecs20140526::Client::associateHaVipWithOptions(shared_ptr<AssociateHaVipRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AssociateHaVipResponse(doRPCRequest(make_shared<string>("AssociateHaVip"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AssociateHaVipResponse Alibabacloud_Ecs20140526::Client::associateHaVip(shared_ptr<AssociateHaVipRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateHaVipWithOptions(request, runtime);
}

AttachClassicLinkVpcResponse Alibabacloud_Ecs20140526::Client::attachClassicLinkVpcWithOptions(shared_ptr<AttachClassicLinkVpcRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AttachClassicLinkVpcResponse(doRPCRequest(make_shared<string>("AttachClassicLinkVpc"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AttachClassicLinkVpcResponse Alibabacloud_Ecs20140526::Client::attachClassicLinkVpc(shared_ptr<AttachClassicLinkVpcRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachClassicLinkVpcWithOptions(request, runtime);
}

AttachDiskResponse Alibabacloud_Ecs20140526::Client::attachDiskWithOptions(shared_ptr<AttachDiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AttachDiskResponse(doRPCRequest(make_shared<string>("AttachDisk"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AttachDiskResponse Alibabacloud_Ecs20140526::Client::attachDisk(shared_ptr<AttachDiskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachDiskWithOptions(request, runtime);
}

AttachInstanceRamRoleResponse Alibabacloud_Ecs20140526::Client::attachInstanceRamRoleWithOptions(shared_ptr<AttachInstanceRamRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AttachInstanceRamRoleResponse(doRPCRequest(make_shared<string>("AttachInstanceRamRole"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AttachInstanceRamRoleResponse Alibabacloud_Ecs20140526::Client::attachInstanceRamRole(shared_ptr<AttachInstanceRamRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachInstanceRamRoleWithOptions(request, runtime);
}

AttachKeyPairResponse Alibabacloud_Ecs20140526::Client::attachKeyPairWithOptions(shared_ptr<AttachKeyPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AttachKeyPairResponse(doRPCRequest(make_shared<string>("AttachKeyPair"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AttachKeyPairResponse Alibabacloud_Ecs20140526::Client::attachKeyPair(shared_ptr<AttachKeyPairRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachKeyPairWithOptions(request, runtime);
}

AttachNetworkInterfaceResponse Alibabacloud_Ecs20140526::Client::attachNetworkInterfaceWithOptions(shared_ptr<AttachNetworkInterfaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AttachNetworkInterfaceResponse(doRPCRequest(make_shared<string>("AttachNetworkInterface"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AttachNetworkInterfaceResponse Alibabacloud_Ecs20140526::Client::attachNetworkInterface(shared_ptr<AttachNetworkInterfaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachNetworkInterfaceWithOptions(request, runtime);
}

AuthorizeSecurityGroupResponse Alibabacloud_Ecs20140526::Client::authorizeSecurityGroupWithOptions(shared_ptr<AuthorizeSecurityGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AuthorizeSecurityGroupResponse(doRPCRequest(make_shared<string>("AuthorizeSecurityGroup"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AuthorizeSecurityGroupResponse Alibabacloud_Ecs20140526::Client::authorizeSecurityGroup(shared_ptr<AuthorizeSecurityGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return authorizeSecurityGroupWithOptions(request, runtime);
}

AuthorizeSecurityGroupEgressResponse Alibabacloud_Ecs20140526::Client::authorizeSecurityGroupEgressWithOptions(shared_ptr<AuthorizeSecurityGroupEgressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AuthorizeSecurityGroupEgressResponse(doRPCRequest(make_shared<string>("AuthorizeSecurityGroupEgress"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AuthorizeSecurityGroupEgressResponse Alibabacloud_Ecs20140526::Client::authorizeSecurityGroupEgress(shared_ptr<AuthorizeSecurityGroupEgressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return authorizeSecurityGroupEgressWithOptions(request, runtime);
}

CancelAutoSnapshotPolicyResponse Alibabacloud_Ecs20140526::Client::cancelAutoSnapshotPolicyWithOptions(shared_ptr<CancelAutoSnapshotPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelAutoSnapshotPolicyResponse(doRPCRequest(make_shared<string>("CancelAutoSnapshotPolicy"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelAutoSnapshotPolicyResponse Alibabacloud_Ecs20140526::Client::cancelAutoSnapshotPolicy(shared_ptr<CancelAutoSnapshotPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelAutoSnapshotPolicyWithOptions(request, runtime);
}

CancelCopyImageResponse Alibabacloud_Ecs20140526::Client::cancelCopyImageWithOptions(shared_ptr<CancelCopyImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelCopyImageResponse(doRPCRequest(make_shared<string>("CancelCopyImage"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelCopyImageResponse Alibabacloud_Ecs20140526::Client::cancelCopyImage(shared_ptr<CancelCopyImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelCopyImageWithOptions(request, runtime);
}

CancelImagePipelineExecutionResponse Alibabacloud_Ecs20140526::Client::cancelImagePipelineExecutionWithOptions(shared_ptr<CancelImagePipelineExecutionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelImagePipelineExecutionResponse(doRPCRequest(make_shared<string>("CancelImagePipelineExecution"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelImagePipelineExecutionResponse Alibabacloud_Ecs20140526::Client::cancelImagePipelineExecution(shared_ptr<CancelImagePipelineExecutionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelImagePipelineExecutionWithOptions(request, runtime);
}

CancelPhysicalConnectionResponse Alibabacloud_Ecs20140526::Client::cancelPhysicalConnectionWithOptions(shared_ptr<CancelPhysicalConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelPhysicalConnectionResponse(doRPCRequest(make_shared<string>("CancelPhysicalConnection"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelPhysicalConnectionResponse Alibabacloud_Ecs20140526::Client::cancelPhysicalConnection(shared_ptr<CancelPhysicalConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelPhysicalConnectionWithOptions(request, runtime);
}

CancelSimulatedSystemEventsResponse Alibabacloud_Ecs20140526::Client::cancelSimulatedSystemEventsWithOptions(shared_ptr<CancelSimulatedSystemEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelSimulatedSystemEventsResponse(doRPCRequest(make_shared<string>("CancelSimulatedSystemEvents"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelSimulatedSystemEventsResponse Alibabacloud_Ecs20140526::Client::cancelSimulatedSystemEvents(shared_ptr<CancelSimulatedSystemEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelSimulatedSystemEventsWithOptions(request, runtime);
}

CancelTaskResponse Alibabacloud_Ecs20140526::Client::cancelTaskWithOptions(shared_ptr<CancelTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelTaskResponse(doRPCRequest(make_shared<string>("CancelTask"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelTaskResponse Alibabacloud_Ecs20140526::Client::cancelTask(shared_ptr<CancelTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelTaskWithOptions(request, runtime);
}

ConnectRouterInterfaceResponse Alibabacloud_Ecs20140526::Client::connectRouterInterfaceWithOptions(shared_ptr<ConnectRouterInterfaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ConnectRouterInterfaceResponse(doRPCRequest(make_shared<string>("ConnectRouterInterface"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ConnectRouterInterfaceResponse Alibabacloud_Ecs20140526::Client::connectRouterInterface(shared_ptr<ConnectRouterInterfaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return connectRouterInterfaceWithOptions(request, runtime);
}

ConvertNatPublicIpToEipResponse Alibabacloud_Ecs20140526::Client::convertNatPublicIpToEipWithOptions(shared_ptr<ConvertNatPublicIpToEipRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ConvertNatPublicIpToEipResponse(doRPCRequest(make_shared<string>("ConvertNatPublicIpToEip"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ConvertNatPublicIpToEipResponse Alibabacloud_Ecs20140526::Client::convertNatPublicIpToEip(shared_ptr<ConvertNatPublicIpToEipRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return convertNatPublicIpToEipWithOptions(request, runtime);
}

CopyImageResponse Alibabacloud_Ecs20140526::Client::copyImageWithOptions(shared_ptr<CopyImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CopyImageResponse(doRPCRequest(make_shared<string>("CopyImage"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CopyImageResponse Alibabacloud_Ecs20140526::Client::copyImage(shared_ptr<CopyImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return copyImageWithOptions(request, runtime);
}

CopySnapshotResponse Alibabacloud_Ecs20140526::Client::copySnapshotWithOptions(shared_ptr<CopySnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CopySnapshotResponse(doRPCRequest(make_shared<string>("CopySnapshot"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CopySnapshotResponse Alibabacloud_Ecs20140526::Client::copySnapshot(shared_ptr<CopySnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return copySnapshotWithOptions(request, runtime);
}

CreateActivationResponse Alibabacloud_Ecs20140526::Client::createActivationWithOptions(shared_ptr<CreateActivationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateActivationResponse(doRPCRequest(make_shared<string>("CreateActivation"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateActivationResponse Alibabacloud_Ecs20140526::Client::createActivation(shared_ptr<CreateActivationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createActivationWithOptions(request, runtime);
}

CreateAutoProvisioningGroupResponse Alibabacloud_Ecs20140526::Client::createAutoProvisioningGroupWithOptions(shared_ptr<CreateAutoProvisioningGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAutoProvisioningGroupResponse(doRPCRequest(make_shared<string>("CreateAutoProvisioningGroup"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAutoProvisioningGroupResponse Alibabacloud_Ecs20140526::Client::createAutoProvisioningGroup(shared_ptr<CreateAutoProvisioningGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAutoProvisioningGroupWithOptions(request, runtime);
}

CreateAutoSnapshotPolicyResponse Alibabacloud_Ecs20140526::Client::createAutoSnapshotPolicyWithOptions(shared_ptr<CreateAutoSnapshotPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAutoSnapshotPolicyResponse(doRPCRequest(make_shared<string>("CreateAutoSnapshotPolicy"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAutoSnapshotPolicyResponse Alibabacloud_Ecs20140526::Client::createAutoSnapshotPolicy(shared_ptr<CreateAutoSnapshotPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAutoSnapshotPolicyWithOptions(request, runtime);
}

CreateCapacityReservationResponse Alibabacloud_Ecs20140526::Client::createCapacityReservationWithOptions(shared_ptr<CreateCapacityReservationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateCapacityReservationResponse(doRPCRequest(make_shared<string>("CreateCapacityReservation"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateCapacityReservationResponse Alibabacloud_Ecs20140526::Client::createCapacityReservation(shared_ptr<CreateCapacityReservationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCapacityReservationWithOptions(request, runtime);
}

CreateCommandResponse Alibabacloud_Ecs20140526::Client::createCommandWithOptions(shared_ptr<CreateCommandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateCommandResponse(doRPCRequest(make_shared<string>("CreateCommand"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateCommandResponse Alibabacloud_Ecs20140526::Client::createCommand(shared_ptr<CreateCommandRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCommandWithOptions(request, runtime);
}

CreateDedicatedBlockStorageClusterResponse Alibabacloud_Ecs20140526::Client::createDedicatedBlockStorageClusterWithOptions(shared_ptr<CreateDedicatedBlockStorageClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDedicatedBlockStorageClusterResponse(doRPCRequest(make_shared<string>("CreateDedicatedBlockStorageCluster"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDedicatedBlockStorageClusterResponse Alibabacloud_Ecs20140526::Client::createDedicatedBlockStorageCluster(shared_ptr<CreateDedicatedBlockStorageClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDedicatedBlockStorageClusterWithOptions(request, runtime);
}

CreateDedicatedHostClusterResponse Alibabacloud_Ecs20140526::Client::createDedicatedHostClusterWithOptions(shared_ptr<CreateDedicatedHostClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDedicatedHostClusterResponse(doRPCRequest(make_shared<string>("CreateDedicatedHostCluster"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDedicatedHostClusterResponse Alibabacloud_Ecs20140526::Client::createDedicatedHostCluster(shared_ptr<CreateDedicatedHostClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDedicatedHostClusterWithOptions(request, runtime);
}

CreateDemandResponse Alibabacloud_Ecs20140526::Client::createDemandWithOptions(shared_ptr<CreateDemandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDemandResponse(doRPCRequest(make_shared<string>("CreateDemand"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDemandResponse Alibabacloud_Ecs20140526::Client::createDemand(shared_ptr<CreateDemandRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDemandWithOptions(request, runtime);
}

CreateDeploymentSetResponse Alibabacloud_Ecs20140526::Client::createDeploymentSetWithOptions(shared_ptr<CreateDeploymentSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDeploymentSetResponse(doRPCRequest(make_shared<string>("CreateDeploymentSet"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDeploymentSetResponse Alibabacloud_Ecs20140526::Client::createDeploymentSet(shared_ptr<CreateDeploymentSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDeploymentSetWithOptions(request, runtime);
}

CreateDiskResponse Alibabacloud_Ecs20140526::Client::createDiskWithOptions(shared_ptr<CreateDiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDiskResponse(doRPCRequest(make_shared<string>("CreateDisk"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDiskResponse Alibabacloud_Ecs20140526::Client::createDisk(shared_ptr<CreateDiskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDiskWithOptions(request, runtime);
}

CreateDiskReplicaPairResponse Alibabacloud_Ecs20140526::Client::createDiskReplicaPairWithOptions(shared_ptr<CreateDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDiskReplicaPairResponse(doRPCRequest(make_shared<string>("CreateDiskReplicaPair"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDiskReplicaPairResponse Alibabacloud_Ecs20140526::Client::createDiskReplicaPair(shared_ptr<CreateDiskReplicaPairRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDiskReplicaPairWithOptions(request, runtime);
}

CreateElasticityAssuranceResponse Alibabacloud_Ecs20140526::Client::createElasticityAssuranceWithOptions(shared_ptr<CreateElasticityAssuranceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateElasticityAssuranceResponse(doRPCRequest(make_shared<string>("CreateElasticityAssurance"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateElasticityAssuranceResponse Alibabacloud_Ecs20140526::Client::createElasticityAssurance(shared_ptr<CreateElasticityAssuranceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createElasticityAssuranceWithOptions(request, runtime);
}

CreateForwardEntryResponse Alibabacloud_Ecs20140526::Client::createForwardEntryWithOptions(shared_ptr<CreateForwardEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateForwardEntryResponse(doRPCRequest(make_shared<string>("CreateForwardEntry"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateForwardEntryResponse Alibabacloud_Ecs20140526::Client::createForwardEntry(shared_ptr<CreateForwardEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createForwardEntryWithOptions(request, runtime);
}

CreateHaVipResponse Alibabacloud_Ecs20140526::Client::createHaVipWithOptions(shared_ptr<CreateHaVipRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateHaVipResponse(doRPCRequest(make_shared<string>("CreateHaVip"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateHaVipResponse Alibabacloud_Ecs20140526::Client::createHaVip(shared_ptr<CreateHaVipRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createHaVipWithOptions(request, runtime);
}

CreateHpcClusterResponse Alibabacloud_Ecs20140526::Client::createHpcClusterWithOptions(shared_ptr<CreateHpcClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateHpcClusterResponse(doRPCRequest(make_shared<string>("CreateHpcCluster"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateHpcClusterResponse Alibabacloud_Ecs20140526::Client::createHpcCluster(shared_ptr<CreateHpcClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createHpcClusterWithOptions(request, runtime);
}

CreateImageResponse Alibabacloud_Ecs20140526::Client::createImageWithOptions(shared_ptr<CreateImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateImageResponse(doRPCRequest(make_shared<string>("CreateImage"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateImageResponse Alibabacloud_Ecs20140526::Client::createImage(shared_ptr<CreateImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createImageWithOptions(request, runtime);
}

CreateImageComponentResponse Alibabacloud_Ecs20140526::Client::createImageComponentWithOptions(shared_ptr<CreateImageComponentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateImageComponentResponse(doRPCRequest(make_shared<string>("CreateImageComponent"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateImageComponentResponse Alibabacloud_Ecs20140526::Client::createImageComponent(shared_ptr<CreateImageComponentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createImageComponentWithOptions(request, runtime);
}

CreateImagePipelineResponse Alibabacloud_Ecs20140526::Client::createImagePipelineWithOptions(shared_ptr<CreateImagePipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateImagePipelineResponse(doRPCRequest(make_shared<string>("CreateImagePipeline"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateImagePipelineResponse Alibabacloud_Ecs20140526::Client::createImagePipeline(shared_ptr<CreateImagePipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createImagePipelineWithOptions(request, runtime);
}

CreateInstanceResponse Alibabacloud_Ecs20140526::Client::createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateInstanceResponse(doRPCRequest(make_shared<string>("CreateInstance"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateInstanceResponse Alibabacloud_Ecs20140526::Client::createInstance(shared_ptr<CreateInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createInstanceWithOptions(request, runtime);
}

CreateKeyPairResponse Alibabacloud_Ecs20140526::Client::createKeyPairWithOptions(shared_ptr<CreateKeyPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateKeyPairResponse(doRPCRequest(make_shared<string>("CreateKeyPair"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateKeyPairResponse Alibabacloud_Ecs20140526::Client::createKeyPair(shared_ptr<CreateKeyPairRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createKeyPairWithOptions(request, runtime);
}

CreateLaunchTemplateResponse Alibabacloud_Ecs20140526::Client::createLaunchTemplateWithOptions(shared_ptr<CreateLaunchTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateLaunchTemplateResponse(doRPCRequest(make_shared<string>("CreateLaunchTemplate"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateLaunchTemplateResponse Alibabacloud_Ecs20140526::Client::createLaunchTemplate(shared_ptr<CreateLaunchTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLaunchTemplateWithOptions(request, runtime);
}

CreateLaunchTemplateVersionResponse Alibabacloud_Ecs20140526::Client::createLaunchTemplateVersionWithOptions(shared_ptr<CreateLaunchTemplateVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateLaunchTemplateVersionResponse(doRPCRequest(make_shared<string>("CreateLaunchTemplateVersion"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateLaunchTemplateVersionResponse Alibabacloud_Ecs20140526::Client::createLaunchTemplateVersion(shared_ptr<CreateLaunchTemplateVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLaunchTemplateVersionWithOptions(request, runtime);
}

CreateNatGatewayResponse Alibabacloud_Ecs20140526::Client::createNatGatewayWithOptions(shared_ptr<CreateNatGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateNatGatewayResponse(doRPCRequest(make_shared<string>("CreateNatGateway"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateNatGatewayResponse Alibabacloud_Ecs20140526::Client::createNatGateway(shared_ptr<CreateNatGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createNatGatewayWithOptions(request, runtime);
}

CreateNetworkInterfaceResponse Alibabacloud_Ecs20140526::Client::createNetworkInterfaceWithOptions(shared_ptr<CreateNetworkInterfaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateNetworkInterfaceResponse(doRPCRequest(make_shared<string>("CreateNetworkInterface"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateNetworkInterfaceResponse Alibabacloud_Ecs20140526::Client::createNetworkInterface(shared_ptr<CreateNetworkInterfaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createNetworkInterfaceWithOptions(request, runtime);
}

CreateNetworkInterfacePermissionResponse Alibabacloud_Ecs20140526::Client::createNetworkInterfacePermissionWithOptions(shared_ptr<CreateNetworkInterfacePermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateNetworkInterfacePermissionResponse(doRPCRequest(make_shared<string>("CreateNetworkInterfacePermission"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateNetworkInterfacePermissionResponse Alibabacloud_Ecs20140526::Client::createNetworkInterfacePermission(shared_ptr<CreateNetworkInterfacePermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createNetworkInterfacePermissionWithOptions(request, runtime);
}

CreatePhysicalConnectionResponse Alibabacloud_Ecs20140526::Client::createPhysicalConnectionWithOptions(shared_ptr<CreatePhysicalConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreatePhysicalConnectionResponse(doRPCRequest(make_shared<string>("CreatePhysicalConnection"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreatePhysicalConnectionResponse Alibabacloud_Ecs20140526::Client::createPhysicalConnection(shared_ptr<CreatePhysicalConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPhysicalConnectionWithOptions(request, runtime);
}

CreatePrefixListResponse Alibabacloud_Ecs20140526::Client::createPrefixListWithOptions(shared_ptr<CreatePrefixListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreatePrefixListResponse(doRPCRequest(make_shared<string>("CreatePrefixList"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreatePrefixListResponse Alibabacloud_Ecs20140526::Client::createPrefixList(shared_ptr<CreatePrefixListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPrefixListWithOptions(request, runtime);
}

CreateResource02Response Alibabacloud_Ecs20140526::Client::createResource02WithOptions(shared_ptr<CreateResource02Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateResource02Response(doRPCRequest(make_shared<string>("CreateResource02"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateResource02Response Alibabacloud_Ecs20140526::Client::createResource02(shared_ptr<CreateResource02Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createResource02WithOptions(request, runtime);
}

CreateRouteEntryResponse Alibabacloud_Ecs20140526::Client::createRouteEntryWithOptions(shared_ptr<CreateRouteEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateRouteEntryResponse(doRPCRequest(make_shared<string>("CreateRouteEntry"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateRouteEntryResponse Alibabacloud_Ecs20140526::Client::createRouteEntry(shared_ptr<CreateRouteEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRouteEntryWithOptions(request, runtime);
}

CreateRouterInterfaceResponse Alibabacloud_Ecs20140526::Client::createRouterInterfaceWithOptions(shared_ptr<CreateRouterInterfaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateRouterInterfaceResponse(doRPCRequest(make_shared<string>("CreateRouterInterface"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateRouterInterfaceResponse Alibabacloud_Ecs20140526::Client::createRouterInterface(shared_ptr<CreateRouterInterfaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRouterInterfaceWithOptions(request, runtime);
}

CreateSecurityGroupResponse Alibabacloud_Ecs20140526::Client::createSecurityGroupWithOptions(shared_ptr<CreateSecurityGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSecurityGroupResponse(doRPCRequest(make_shared<string>("CreateSecurityGroup"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSecurityGroupResponse Alibabacloud_Ecs20140526::Client::createSecurityGroup(shared_ptr<CreateSecurityGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSecurityGroupWithOptions(request, runtime);
}

CreateSimulatedSystemEventsResponse Alibabacloud_Ecs20140526::Client::createSimulatedSystemEventsWithOptions(shared_ptr<CreateSimulatedSystemEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSimulatedSystemEventsResponse(doRPCRequest(make_shared<string>("CreateSimulatedSystemEvents"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSimulatedSystemEventsResponse Alibabacloud_Ecs20140526::Client::createSimulatedSystemEvents(shared_ptr<CreateSimulatedSystemEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSimulatedSystemEventsWithOptions(request, runtime);
}

CreateSnapshotResponse Alibabacloud_Ecs20140526::Client::createSnapshotWithOptions(shared_ptr<CreateSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSnapshotResponse(doRPCRequest(make_shared<string>("CreateSnapshot"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSnapshotResponse Alibabacloud_Ecs20140526::Client::createSnapshot(shared_ptr<CreateSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSnapshotWithOptions(request, runtime);
}

CreateSnapshotGroupResponse Alibabacloud_Ecs20140526::Client::createSnapshotGroupWithOptions(shared_ptr<CreateSnapshotGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSnapshotGroupResponse(doRPCRequest(make_shared<string>("CreateSnapshotGroup"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSnapshotGroupResponse Alibabacloud_Ecs20140526::Client::createSnapshotGroup(shared_ptr<CreateSnapshotGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSnapshotGroupWithOptions(request, runtime);
}

CreateStorageSetResponse Alibabacloud_Ecs20140526::Client::createStorageSetWithOptions(shared_ptr<CreateStorageSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateStorageSetResponse(doRPCRequest(make_shared<string>("CreateStorageSet"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateStorageSetResponse Alibabacloud_Ecs20140526::Client::createStorageSet(shared_ptr<CreateStorageSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createStorageSetWithOptions(request, runtime);
}

CreateVirtualBorderRouterResponse Alibabacloud_Ecs20140526::Client::createVirtualBorderRouterWithOptions(shared_ptr<CreateVirtualBorderRouterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateVirtualBorderRouterResponse(doRPCRequest(make_shared<string>("CreateVirtualBorderRouter"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateVirtualBorderRouterResponse Alibabacloud_Ecs20140526::Client::createVirtualBorderRouter(shared_ptr<CreateVirtualBorderRouterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVirtualBorderRouterWithOptions(request, runtime);
}

CreateVpcResponse Alibabacloud_Ecs20140526::Client::createVpcWithOptions(shared_ptr<CreateVpcRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateVpcResponse(doRPCRequest(make_shared<string>("CreateVpc"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateVpcResponse Alibabacloud_Ecs20140526::Client::createVpc(shared_ptr<CreateVpcRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVpcWithOptions(request, runtime);
}

CreateVSwitchResponse Alibabacloud_Ecs20140526::Client::createVSwitchWithOptions(shared_ptr<CreateVSwitchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateVSwitchResponse(doRPCRequest(make_shared<string>("CreateVSwitch"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateVSwitchResponse Alibabacloud_Ecs20140526::Client::createVSwitch(shared_ptr<CreateVSwitchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVSwitchWithOptions(request, runtime);
}

DeactivateRouterInterfaceResponse Alibabacloud_Ecs20140526::Client::deactivateRouterInterfaceWithOptions(shared_ptr<DeactivateRouterInterfaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeactivateRouterInterfaceResponse(doRPCRequest(make_shared<string>("DeactivateRouterInterface"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeactivateRouterInterfaceResponse Alibabacloud_Ecs20140526::Client::deactivateRouterInterface(shared_ptr<DeactivateRouterInterfaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deactivateRouterInterfaceWithOptions(request, runtime);
}

DeleteActivationResponse Alibabacloud_Ecs20140526::Client::deleteActivationWithOptions(shared_ptr<DeleteActivationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteActivationResponse(doRPCRequest(make_shared<string>("DeleteActivation"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteActivationResponse Alibabacloud_Ecs20140526::Client::deleteActivation(shared_ptr<DeleteActivationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteActivationWithOptions(request, runtime);
}

DeleteAutoProvisioningGroupResponse Alibabacloud_Ecs20140526::Client::deleteAutoProvisioningGroupWithOptions(shared_ptr<DeleteAutoProvisioningGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAutoProvisioningGroupResponse(doRPCRequest(make_shared<string>("DeleteAutoProvisioningGroup"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAutoProvisioningGroupResponse Alibabacloud_Ecs20140526::Client::deleteAutoProvisioningGroup(shared_ptr<DeleteAutoProvisioningGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAutoProvisioningGroupWithOptions(request, runtime);
}

DeleteAutoSnapshotPolicyResponse Alibabacloud_Ecs20140526::Client::deleteAutoSnapshotPolicyWithOptions(shared_ptr<DeleteAutoSnapshotPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAutoSnapshotPolicyResponse(doRPCRequest(make_shared<string>("DeleteAutoSnapshotPolicy"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAutoSnapshotPolicyResponse Alibabacloud_Ecs20140526::Client::deleteAutoSnapshotPolicy(shared_ptr<DeleteAutoSnapshotPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAutoSnapshotPolicyWithOptions(request, runtime);
}

DeleteBandwidthPackageResponse Alibabacloud_Ecs20140526::Client::deleteBandwidthPackageWithOptions(shared_ptr<DeleteBandwidthPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteBandwidthPackageResponse(doRPCRequest(make_shared<string>("DeleteBandwidthPackage"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteBandwidthPackageResponse Alibabacloud_Ecs20140526::Client::deleteBandwidthPackage(shared_ptr<DeleteBandwidthPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBandwidthPackageWithOptions(request, runtime);
}

DeleteCommandResponse Alibabacloud_Ecs20140526::Client::deleteCommandWithOptions(shared_ptr<DeleteCommandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteCommandResponse(doRPCRequest(make_shared<string>("DeleteCommand"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteCommandResponse Alibabacloud_Ecs20140526::Client::deleteCommand(shared_ptr<DeleteCommandRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCommandWithOptions(request, runtime);
}

DeleteDedicatedHostClusterResponse Alibabacloud_Ecs20140526::Client::deleteDedicatedHostClusterWithOptions(shared_ptr<DeleteDedicatedHostClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDedicatedHostClusterResponse(doRPCRequest(make_shared<string>("DeleteDedicatedHostCluster"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDedicatedHostClusterResponse Alibabacloud_Ecs20140526::Client::deleteDedicatedHostCluster(shared_ptr<DeleteDedicatedHostClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDedicatedHostClusterWithOptions(request, runtime);
}

DeleteDemandResponse Alibabacloud_Ecs20140526::Client::deleteDemandWithOptions(shared_ptr<DeleteDemandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDemandResponse(doRPCRequest(make_shared<string>("DeleteDemand"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDemandResponse Alibabacloud_Ecs20140526::Client::deleteDemand(shared_ptr<DeleteDemandRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDemandWithOptions(request, runtime);
}

DeleteDeploymentSetResponse Alibabacloud_Ecs20140526::Client::deleteDeploymentSetWithOptions(shared_ptr<DeleteDeploymentSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDeploymentSetResponse(doRPCRequest(make_shared<string>("DeleteDeploymentSet"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDeploymentSetResponse Alibabacloud_Ecs20140526::Client::deleteDeploymentSet(shared_ptr<DeleteDeploymentSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDeploymentSetWithOptions(request, runtime);
}

DeleteDiskResponse Alibabacloud_Ecs20140526::Client::deleteDiskWithOptions(shared_ptr<DeleteDiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDiskResponse(doRPCRequest(make_shared<string>("DeleteDisk"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDiskResponse Alibabacloud_Ecs20140526::Client::deleteDisk(shared_ptr<DeleteDiskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDiskWithOptions(request, runtime);
}

DeleteDiskReplicaPairResponse Alibabacloud_Ecs20140526::Client::deleteDiskReplicaPairWithOptions(shared_ptr<DeleteDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDiskReplicaPairResponse(doRPCRequest(make_shared<string>("DeleteDiskReplicaPair"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDiskReplicaPairResponse Alibabacloud_Ecs20140526::Client::deleteDiskReplicaPair(shared_ptr<DeleteDiskReplicaPairRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDiskReplicaPairWithOptions(request, runtime);
}

DeleteForwardEntryResponse Alibabacloud_Ecs20140526::Client::deleteForwardEntryWithOptions(shared_ptr<DeleteForwardEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteForwardEntryResponse(doRPCRequest(make_shared<string>("DeleteForwardEntry"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteForwardEntryResponse Alibabacloud_Ecs20140526::Client::deleteForwardEntry(shared_ptr<DeleteForwardEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteForwardEntryWithOptions(request, runtime);
}

DeleteHaVipResponse Alibabacloud_Ecs20140526::Client::deleteHaVipWithOptions(shared_ptr<DeleteHaVipRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteHaVipResponse(doRPCRequest(make_shared<string>("DeleteHaVip"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteHaVipResponse Alibabacloud_Ecs20140526::Client::deleteHaVip(shared_ptr<DeleteHaVipRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteHaVipWithOptions(request, runtime);
}

DeleteHpcClusterResponse Alibabacloud_Ecs20140526::Client::deleteHpcClusterWithOptions(shared_ptr<DeleteHpcClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteHpcClusterResponse(doRPCRequest(make_shared<string>("DeleteHpcCluster"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteHpcClusterResponse Alibabacloud_Ecs20140526::Client::deleteHpcCluster(shared_ptr<DeleteHpcClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteHpcClusterWithOptions(request, runtime);
}

DeleteImageResponse Alibabacloud_Ecs20140526::Client::deleteImageWithOptions(shared_ptr<DeleteImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteImageResponse(doRPCRequest(make_shared<string>("DeleteImage"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteImageResponse Alibabacloud_Ecs20140526::Client::deleteImage(shared_ptr<DeleteImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteImageWithOptions(request, runtime);
}

DeleteImageComponentResponse Alibabacloud_Ecs20140526::Client::deleteImageComponentWithOptions(shared_ptr<DeleteImageComponentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteImageComponentResponse(doRPCRequest(make_shared<string>("DeleteImageComponent"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteImageComponentResponse Alibabacloud_Ecs20140526::Client::deleteImageComponent(shared_ptr<DeleteImageComponentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteImageComponentWithOptions(request, runtime);
}

DeleteImagePipelineResponse Alibabacloud_Ecs20140526::Client::deleteImagePipelineWithOptions(shared_ptr<DeleteImagePipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteImagePipelineResponse(doRPCRequest(make_shared<string>("DeleteImagePipeline"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteImagePipelineResponse Alibabacloud_Ecs20140526::Client::deleteImagePipeline(shared_ptr<DeleteImagePipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteImagePipelineWithOptions(request, runtime);
}

DeleteInstanceResponse Alibabacloud_Ecs20140526::Client::deleteInstanceWithOptions(shared_ptr<DeleteInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteInstanceResponse(doRPCRequest(make_shared<string>("DeleteInstance"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteInstanceResponse Alibabacloud_Ecs20140526::Client::deleteInstance(shared_ptr<DeleteInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteInstanceWithOptions(request, runtime);
}

DeleteInstancesResponse Alibabacloud_Ecs20140526::Client::deleteInstancesWithOptions(shared_ptr<DeleteInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteInstancesResponse(doRPCRequest(make_shared<string>("DeleteInstances"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteInstancesResponse Alibabacloud_Ecs20140526::Client::deleteInstances(shared_ptr<DeleteInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteInstancesWithOptions(request, runtime);
}

DeleteKeyPairsResponse Alibabacloud_Ecs20140526::Client::deleteKeyPairsWithOptions(shared_ptr<DeleteKeyPairsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteKeyPairsResponse(doRPCRequest(make_shared<string>("DeleteKeyPairs"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteKeyPairsResponse Alibabacloud_Ecs20140526::Client::deleteKeyPairs(shared_ptr<DeleteKeyPairsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteKeyPairsWithOptions(request, runtime);
}

DeleteLaunchTemplateResponse Alibabacloud_Ecs20140526::Client::deleteLaunchTemplateWithOptions(shared_ptr<DeleteLaunchTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteLaunchTemplateResponse(doRPCRequest(make_shared<string>("DeleteLaunchTemplate"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteLaunchTemplateResponse Alibabacloud_Ecs20140526::Client::deleteLaunchTemplate(shared_ptr<DeleteLaunchTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLaunchTemplateWithOptions(request, runtime);
}

DeleteLaunchTemplateVersionResponse Alibabacloud_Ecs20140526::Client::deleteLaunchTemplateVersionWithOptions(shared_ptr<DeleteLaunchTemplateVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteLaunchTemplateVersionResponse(doRPCRequest(make_shared<string>("DeleteLaunchTemplateVersion"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteLaunchTemplateVersionResponse Alibabacloud_Ecs20140526::Client::deleteLaunchTemplateVersion(shared_ptr<DeleteLaunchTemplateVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLaunchTemplateVersionWithOptions(request, runtime);
}

DeleteNatGatewayResponse Alibabacloud_Ecs20140526::Client::deleteNatGatewayWithOptions(shared_ptr<DeleteNatGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteNatGatewayResponse(doRPCRequest(make_shared<string>("DeleteNatGateway"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteNatGatewayResponse Alibabacloud_Ecs20140526::Client::deleteNatGateway(shared_ptr<DeleteNatGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteNatGatewayWithOptions(request, runtime);
}

DeleteNetworkInterfaceResponse Alibabacloud_Ecs20140526::Client::deleteNetworkInterfaceWithOptions(shared_ptr<DeleteNetworkInterfaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteNetworkInterfaceResponse(doRPCRequest(make_shared<string>("DeleteNetworkInterface"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteNetworkInterfaceResponse Alibabacloud_Ecs20140526::Client::deleteNetworkInterface(shared_ptr<DeleteNetworkInterfaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteNetworkInterfaceWithOptions(request, runtime);
}

DeleteNetworkInterfacePermissionResponse Alibabacloud_Ecs20140526::Client::deleteNetworkInterfacePermissionWithOptions(shared_ptr<DeleteNetworkInterfacePermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteNetworkInterfacePermissionResponse(doRPCRequest(make_shared<string>("DeleteNetworkInterfacePermission"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteNetworkInterfacePermissionResponse Alibabacloud_Ecs20140526::Client::deleteNetworkInterfacePermission(shared_ptr<DeleteNetworkInterfacePermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteNetworkInterfacePermissionWithOptions(request, runtime);
}

DeletePhysicalConnectionResponse Alibabacloud_Ecs20140526::Client::deletePhysicalConnectionWithOptions(shared_ptr<DeletePhysicalConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeletePhysicalConnectionResponse(doRPCRequest(make_shared<string>("DeletePhysicalConnection"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeletePhysicalConnectionResponse Alibabacloud_Ecs20140526::Client::deletePhysicalConnection(shared_ptr<DeletePhysicalConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePhysicalConnectionWithOptions(request, runtime);
}

DeletePrefixListResponse Alibabacloud_Ecs20140526::Client::deletePrefixListWithOptions(shared_ptr<DeletePrefixListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeletePrefixListResponse(doRPCRequest(make_shared<string>("DeletePrefixList"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeletePrefixListResponse Alibabacloud_Ecs20140526::Client::deletePrefixList(shared_ptr<DeletePrefixListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePrefixListWithOptions(request, runtime);
}

DeleteReplicaPairResponse Alibabacloud_Ecs20140526::Client::deleteReplicaPairWithOptions(shared_ptr<DeleteReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteReplicaPairResponse(doRPCRequest(make_shared<string>("DeleteReplicaPair"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteReplicaPairResponse Alibabacloud_Ecs20140526::Client::deleteReplicaPair(shared_ptr<DeleteReplicaPairRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteReplicaPairWithOptions(request, runtime);
}

DeleteRouteEntryResponse Alibabacloud_Ecs20140526::Client::deleteRouteEntryWithOptions(shared_ptr<DeleteRouteEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteRouteEntryResponse(doRPCRequest(make_shared<string>("DeleteRouteEntry"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteRouteEntryResponse Alibabacloud_Ecs20140526::Client::deleteRouteEntry(shared_ptr<DeleteRouteEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRouteEntryWithOptions(request, runtime);
}

DeleteRouterInterfaceResponse Alibabacloud_Ecs20140526::Client::deleteRouterInterfaceWithOptions(shared_ptr<DeleteRouterInterfaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteRouterInterfaceResponse(doRPCRequest(make_shared<string>("DeleteRouterInterface"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteRouterInterfaceResponse Alibabacloud_Ecs20140526::Client::deleteRouterInterface(shared_ptr<DeleteRouterInterfaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRouterInterfaceWithOptions(request, runtime);
}

DeleteSecurityGroupResponse Alibabacloud_Ecs20140526::Client::deleteSecurityGroupWithOptions(shared_ptr<DeleteSecurityGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSecurityGroupResponse(doRPCRequest(make_shared<string>("DeleteSecurityGroup"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSecurityGroupResponse Alibabacloud_Ecs20140526::Client::deleteSecurityGroup(shared_ptr<DeleteSecurityGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSecurityGroupWithOptions(request, runtime);
}

DeleteSnapshotResponse Alibabacloud_Ecs20140526::Client::deleteSnapshotWithOptions(shared_ptr<DeleteSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSnapshotResponse(doRPCRequest(make_shared<string>("DeleteSnapshot"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSnapshotResponse Alibabacloud_Ecs20140526::Client::deleteSnapshot(shared_ptr<DeleteSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSnapshotWithOptions(request, runtime);
}

DeleteSnapshotGroupResponse Alibabacloud_Ecs20140526::Client::deleteSnapshotGroupWithOptions(shared_ptr<DeleteSnapshotGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSnapshotGroupResponse(doRPCRequest(make_shared<string>("DeleteSnapshotGroup"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSnapshotGroupResponse Alibabacloud_Ecs20140526::Client::deleteSnapshotGroup(shared_ptr<DeleteSnapshotGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSnapshotGroupWithOptions(request, runtime);
}

DeleteStorageSetResponse Alibabacloud_Ecs20140526::Client::deleteStorageSetWithOptions(shared_ptr<DeleteStorageSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteStorageSetResponse(doRPCRequest(make_shared<string>("DeleteStorageSet"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteStorageSetResponse Alibabacloud_Ecs20140526::Client::deleteStorageSet(shared_ptr<DeleteStorageSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteStorageSetWithOptions(request, runtime);
}

DeleteVirtualBorderRouterResponse Alibabacloud_Ecs20140526::Client::deleteVirtualBorderRouterWithOptions(shared_ptr<DeleteVirtualBorderRouterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteVirtualBorderRouterResponse(doRPCRequest(make_shared<string>("DeleteVirtualBorderRouter"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteVirtualBorderRouterResponse Alibabacloud_Ecs20140526::Client::deleteVirtualBorderRouter(shared_ptr<DeleteVirtualBorderRouterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVirtualBorderRouterWithOptions(request, runtime);
}

DeleteVpcResponse Alibabacloud_Ecs20140526::Client::deleteVpcWithOptions(shared_ptr<DeleteVpcRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteVpcResponse(doRPCRequest(make_shared<string>("DeleteVpc"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteVpcResponse Alibabacloud_Ecs20140526::Client::deleteVpc(shared_ptr<DeleteVpcRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVpcWithOptions(request, runtime);
}

DeleteVSwitchResponse Alibabacloud_Ecs20140526::Client::deleteVSwitchWithOptions(shared_ptr<DeleteVSwitchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteVSwitchResponse(doRPCRequest(make_shared<string>("DeleteVSwitch"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteVSwitchResponse Alibabacloud_Ecs20140526::Client::deleteVSwitch(shared_ptr<DeleteVSwitchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVSwitchWithOptions(request, runtime);
}

DeregisterManagedInstanceResponse Alibabacloud_Ecs20140526::Client::deregisterManagedInstanceWithOptions(shared_ptr<DeregisterManagedInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeregisterManagedInstanceResponse(doRPCRequest(make_shared<string>("DeregisterManagedInstance"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeregisterManagedInstanceResponse Alibabacloud_Ecs20140526::Client::deregisterManagedInstance(shared_ptr<DeregisterManagedInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deregisterManagedInstanceWithOptions(request, runtime);
}

DescribeAccessPointsResponse Alibabacloud_Ecs20140526::Client::describeAccessPointsWithOptions(shared_ptr<DescribeAccessPointsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAccessPointsResponse(doRPCRequest(make_shared<string>("DescribeAccessPoints"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAccessPointsResponse Alibabacloud_Ecs20140526::Client::describeAccessPoints(shared_ptr<DescribeAccessPointsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAccessPointsWithOptions(request, runtime);
}

DescribeAccountAttributesResponse Alibabacloud_Ecs20140526::Client::describeAccountAttributesWithOptions(shared_ptr<DescribeAccountAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAccountAttributesResponse(doRPCRequest(make_shared<string>("DescribeAccountAttributes"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAccountAttributesResponse Alibabacloud_Ecs20140526::Client::describeAccountAttributes(shared_ptr<DescribeAccountAttributesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAccountAttributesWithOptions(request, runtime);
}

DescribeActivationsResponse Alibabacloud_Ecs20140526::Client::describeActivationsWithOptions(shared_ptr<DescribeActivationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeActivationsResponse(doRPCRequest(make_shared<string>("DescribeActivations"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeActivationsResponse Alibabacloud_Ecs20140526::Client::describeActivations(shared_ptr<DescribeActivationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeActivationsWithOptions(request, runtime);
}

DescribeAutoProvisioningGroupHistoryResponse Alibabacloud_Ecs20140526::Client::describeAutoProvisioningGroupHistoryWithOptions(shared_ptr<DescribeAutoProvisioningGroupHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAutoProvisioningGroupHistoryResponse(doRPCRequest(make_shared<string>("DescribeAutoProvisioningGroupHistory"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAutoProvisioningGroupHistoryResponse Alibabacloud_Ecs20140526::Client::describeAutoProvisioningGroupHistory(shared_ptr<DescribeAutoProvisioningGroupHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAutoProvisioningGroupHistoryWithOptions(request, runtime);
}

DescribeAutoProvisioningGroupInstancesResponse Alibabacloud_Ecs20140526::Client::describeAutoProvisioningGroupInstancesWithOptions(shared_ptr<DescribeAutoProvisioningGroupInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAutoProvisioningGroupInstancesResponse(doRPCRequest(make_shared<string>("DescribeAutoProvisioningGroupInstances"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAutoProvisioningGroupInstancesResponse Alibabacloud_Ecs20140526::Client::describeAutoProvisioningGroupInstances(shared_ptr<DescribeAutoProvisioningGroupInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAutoProvisioningGroupInstancesWithOptions(request, runtime);
}

DescribeAutoProvisioningGroupsResponse Alibabacloud_Ecs20140526::Client::describeAutoProvisioningGroupsWithOptions(shared_ptr<DescribeAutoProvisioningGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAutoProvisioningGroupsResponse(doRPCRequest(make_shared<string>("DescribeAutoProvisioningGroups"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAutoProvisioningGroupsResponse Alibabacloud_Ecs20140526::Client::describeAutoProvisioningGroups(shared_ptr<DescribeAutoProvisioningGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAutoProvisioningGroupsWithOptions(request, runtime);
}

DescribeAutoSnapshotPolicyExResponse Alibabacloud_Ecs20140526::Client::describeAutoSnapshotPolicyExWithOptions(shared_ptr<DescribeAutoSnapshotPolicyExRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAutoSnapshotPolicyExResponse(doRPCRequest(make_shared<string>("DescribeAutoSnapshotPolicyEx"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAutoSnapshotPolicyExResponse Alibabacloud_Ecs20140526::Client::describeAutoSnapshotPolicyEx(shared_ptr<DescribeAutoSnapshotPolicyExRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAutoSnapshotPolicyExWithOptions(request, runtime);
}

DescribeAvailableResourceResponse Alibabacloud_Ecs20140526::Client::describeAvailableResourceWithOptions(shared_ptr<DescribeAvailableResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAvailableResourceResponse(doRPCRequest(make_shared<string>("DescribeAvailableResource"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAvailableResourceResponse Alibabacloud_Ecs20140526::Client::describeAvailableResource(shared_ptr<DescribeAvailableResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvailableResourceWithOptions(request, runtime);
}

DescribeBandwidthLimitationResponse Alibabacloud_Ecs20140526::Client::describeBandwidthLimitationWithOptions(shared_ptr<DescribeBandwidthLimitationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBandwidthLimitationResponse(doRPCRequest(make_shared<string>("DescribeBandwidthLimitation"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBandwidthLimitationResponse Alibabacloud_Ecs20140526::Client::describeBandwidthLimitation(shared_ptr<DescribeBandwidthLimitationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBandwidthLimitationWithOptions(request, runtime);
}

DescribeBandwidthPackagesResponse Alibabacloud_Ecs20140526::Client::describeBandwidthPackagesWithOptions(shared_ptr<DescribeBandwidthPackagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBandwidthPackagesResponse(doRPCRequest(make_shared<string>("DescribeBandwidthPackages"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBandwidthPackagesResponse Alibabacloud_Ecs20140526::Client::describeBandwidthPackages(shared_ptr<DescribeBandwidthPackagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBandwidthPackagesWithOptions(request, runtime);
}

DescribeCapacityReservationInstancesResponse Alibabacloud_Ecs20140526::Client::describeCapacityReservationInstancesWithOptions(shared_ptr<DescribeCapacityReservationInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCapacityReservationInstancesResponse(doRPCRequest(make_shared<string>("DescribeCapacityReservationInstances"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCapacityReservationInstancesResponse Alibabacloud_Ecs20140526::Client::describeCapacityReservationInstances(shared_ptr<DescribeCapacityReservationInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCapacityReservationInstancesWithOptions(request, runtime);
}

DescribeCapacityReservationsResponse Alibabacloud_Ecs20140526::Client::describeCapacityReservationsWithOptions(shared_ptr<DescribeCapacityReservationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCapacityReservationsResponse(doRPCRequest(make_shared<string>("DescribeCapacityReservations"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCapacityReservationsResponse Alibabacloud_Ecs20140526::Client::describeCapacityReservations(shared_ptr<DescribeCapacityReservationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCapacityReservationsWithOptions(request, runtime);
}

DescribeClassicLinkInstancesResponse Alibabacloud_Ecs20140526::Client::describeClassicLinkInstancesWithOptions(shared_ptr<DescribeClassicLinkInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeClassicLinkInstancesResponse(doRPCRequest(make_shared<string>("DescribeClassicLinkInstances"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeClassicLinkInstancesResponse Alibabacloud_Ecs20140526::Client::describeClassicLinkInstances(shared_ptr<DescribeClassicLinkInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClassicLinkInstancesWithOptions(request, runtime);
}

DescribeCloudAssistantStatusResponse Alibabacloud_Ecs20140526::Client::describeCloudAssistantStatusWithOptions(shared_ptr<DescribeCloudAssistantStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCloudAssistantStatusResponse(doRPCRequest(make_shared<string>("DescribeCloudAssistantStatus"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCloudAssistantStatusResponse Alibabacloud_Ecs20140526::Client::describeCloudAssistantStatus(shared_ptr<DescribeCloudAssistantStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCloudAssistantStatusWithOptions(request, runtime);
}

DescribeClustersResponse Alibabacloud_Ecs20140526::Client::describeClustersWithOptions(shared_ptr<DescribeClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeClustersResponse(doRPCRequest(make_shared<string>("DescribeClusters"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeClustersResponse Alibabacloud_Ecs20140526::Client::describeClusters(shared_ptr<DescribeClustersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClustersWithOptions(request, runtime);
}

DescribeCommandsResponse Alibabacloud_Ecs20140526::Client::describeCommandsWithOptions(shared_ptr<DescribeCommandsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCommandsResponse(doRPCRequest(make_shared<string>("DescribeCommands"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCommandsResponse Alibabacloud_Ecs20140526::Client::describeCommands(shared_ptr<DescribeCommandsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCommandsWithOptions(request, runtime);
}

DescribeDedicatedBlockStorageClustersResponse Alibabacloud_Ecs20140526::Client::describeDedicatedBlockStorageClustersWithOptions(shared_ptr<DescribeDedicatedBlockStorageClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDedicatedBlockStorageClustersResponse(doRPCRequest(make_shared<string>("DescribeDedicatedBlockStorageClusters"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDedicatedBlockStorageClustersResponse Alibabacloud_Ecs20140526::Client::describeDedicatedBlockStorageClusters(shared_ptr<DescribeDedicatedBlockStorageClustersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDedicatedBlockStorageClustersWithOptions(request, runtime);
}

DescribeDedicatedHostAutoRenewResponse Alibabacloud_Ecs20140526::Client::describeDedicatedHostAutoRenewWithOptions(shared_ptr<DescribeDedicatedHostAutoRenewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDedicatedHostAutoRenewResponse(doRPCRequest(make_shared<string>("DescribeDedicatedHostAutoRenew"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDedicatedHostAutoRenewResponse Alibabacloud_Ecs20140526::Client::describeDedicatedHostAutoRenew(shared_ptr<DescribeDedicatedHostAutoRenewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDedicatedHostAutoRenewWithOptions(request, runtime);
}

DescribeDedicatedHostClustersResponse Alibabacloud_Ecs20140526::Client::describeDedicatedHostClustersWithOptions(shared_ptr<DescribeDedicatedHostClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDedicatedHostClustersResponse(doRPCRequest(make_shared<string>("DescribeDedicatedHostClusters"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDedicatedHostClustersResponse Alibabacloud_Ecs20140526::Client::describeDedicatedHostClusters(shared_ptr<DescribeDedicatedHostClustersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDedicatedHostClustersWithOptions(request, runtime);
}

DescribeDedicatedHostsResponse Alibabacloud_Ecs20140526::Client::describeDedicatedHostsWithOptions(shared_ptr<DescribeDedicatedHostsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDedicatedHostsResponse(doRPCRequest(make_shared<string>("DescribeDedicatedHosts"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDedicatedHostsResponse Alibabacloud_Ecs20140526::Client::describeDedicatedHosts(shared_ptr<DescribeDedicatedHostsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDedicatedHostsWithOptions(request, runtime);
}

DescribeDedicatedHostTypesResponse Alibabacloud_Ecs20140526::Client::describeDedicatedHostTypesWithOptions(shared_ptr<DescribeDedicatedHostTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDedicatedHostTypesResponse(doRPCRequest(make_shared<string>("DescribeDedicatedHostTypes"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDedicatedHostTypesResponse Alibabacloud_Ecs20140526::Client::describeDedicatedHostTypes(shared_ptr<DescribeDedicatedHostTypesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDedicatedHostTypesWithOptions(request, runtime);
}

DescribeDemandsResponse Alibabacloud_Ecs20140526::Client::describeDemandsWithOptions(shared_ptr<DescribeDemandsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDemandsResponse(doRPCRequest(make_shared<string>("DescribeDemands"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDemandsResponse Alibabacloud_Ecs20140526::Client::describeDemands(shared_ptr<DescribeDemandsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDemandsWithOptions(request, runtime);
}

DescribeDeploymentSetsResponse Alibabacloud_Ecs20140526::Client::describeDeploymentSetsWithOptions(shared_ptr<DescribeDeploymentSetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDeploymentSetsResponse(doRPCRequest(make_shared<string>("DescribeDeploymentSets"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDeploymentSetsResponse Alibabacloud_Ecs20140526::Client::describeDeploymentSets(shared_ptr<DescribeDeploymentSetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDeploymentSetsWithOptions(request, runtime);
}

DescribeDeploymentSetSupportedInstanceTypeFamilyResponse Alibabacloud_Ecs20140526::Client::describeDeploymentSetSupportedInstanceTypeFamilyWithOptions(shared_ptr<DescribeDeploymentSetSupportedInstanceTypeFamilyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDeploymentSetSupportedInstanceTypeFamilyResponse(doRPCRequest(make_shared<string>("DescribeDeploymentSetSupportedInstanceTypeFamily"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDeploymentSetSupportedInstanceTypeFamilyResponse Alibabacloud_Ecs20140526::Client::describeDeploymentSetSupportedInstanceTypeFamily(shared_ptr<DescribeDeploymentSetSupportedInstanceTypeFamilyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDeploymentSetSupportedInstanceTypeFamilyWithOptions(request, runtime);
}

DescribeDiskMonitorDataResponse Alibabacloud_Ecs20140526::Client::describeDiskMonitorDataWithOptions(shared_ptr<DescribeDiskMonitorDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDiskMonitorDataResponse(doRPCRequest(make_shared<string>("DescribeDiskMonitorData"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDiskMonitorDataResponse Alibabacloud_Ecs20140526::Client::describeDiskMonitorData(shared_ptr<DescribeDiskMonitorDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDiskMonitorDataWithOptions(request, runtime);
}

DescribeDiskReplicaPairsResponse Alibabacloud_Ecs20140526::Client::describeDiskReplicaPairsWithOptions(shared_ptr<DescribeDiskReplicaPairsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDiskReplicaPairsResponse(doRPCRequest(make_shared<string>("DescribeDiskReplicaPairs"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDiskReplicaPairsResponse Alibabacloud_Ecs20140526::Client::describeDiskReplicaPairs(shared_ptr<DescribeDiskReplicaPairsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDiskReplicaPairsWithOptions(request, runtime);
}

DescribeDisksResponse Alibabacloud_Ecs20140526::Client::describeDisksWithOptions(shared_ptr<DescribeDisksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDisksResponse(doRPCRequest(make_shared<string>("DescribeDisks"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDisksResponse Alibabacloud_Ecs20140526::Client::describeDisks(shared_ptr<DescribeDisksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDisksWithOptions(request, runtime);
}

DescribeDisksFullStatusResponse Alibabacloud_Ecs20140526::Client::describeDisksFullStatusWithOptions(shared_ptr<DescribeDisksFullStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDisksFullStatusResponse(doRPCRequest(make_shared<string>("DescribeDisksFullStatus"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDisksFullStatusResponse Alibabacloud_Ecs20140526::Client::describeDisksFullStatus(shared_ptr<DescribeDisksFullStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDisksFullStatusWithOptions(request, runtime);
}

DescribeEipAddressesResponse Alibabacloud_Ecs20140526::Client::describeEipAddressesWithOptions(shared_ptr<DescribeEipAddressesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeEipAddressesResponse(doRPCRequest(make_shared<string>("DescribeEipAddresses"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeEipAddressesResponse Alibabacloud_Ecs20140526::Client::describeEipAddresses(shared_ptr<DescribeEipAddressesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEipAddressesWithOptions(request, runtime);
}

DescribeEipMonitorDataResponse Alibabacloud_Ecs20140526::Client::describeEipMonitorDataWithOptions(shared_ptr<DescribeEipMonitorDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeEipMonitorDataResponse(doRPCRequest(make_shared<string>("DescribeEipMonitorData"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeEipMonitorDataResponse Alibabacloud_Ecs20140526::Client::describeEipMonitorData(shared_ptr<DescribeEipMonitorDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEipMonitorDataWithOptions(request, runtime);
}

DescribeElasticityAssuranceInstancesResponse Alibabacloud_Ecs20140526::Client::describeElasticityAssuranceInstancesWithOptions(shared_ptr<DescribeElasticityAssuranceInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeElasticityAssuranceInstancesResponse(doRPCRequest(make_shared<string>("DescribeElasticityAssuranceInstances"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeElasticityAssuranceInstancesResponse Alibabacloud_Ecs20140526::Client::describeElasticityAssuranceInstances(shared_ptr<DescribeElasticityAssuranceInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeElasticityAssuranceInstancesWithOptions(request, runtime);
}

DescribeElasticityAssurancesResponse Alibabacloud_Ecs20140526::Client::describeElasticityAssurancesWithOptions(shared_ptr<DescribeElasticityAssurancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeElasticityAssurancesResponse(doRPCRequest(make_shared<string>("DescribeElasticityAssurances"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeElasticityAssurancesResponse Alibabacloud_Ecs20140526::Client::describeElasticityAssurances(shared_ptr<DescribeElasticityAssurancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeElasticityAssurancesWithOptions(request, runtime);
}

DescribeEniMonitorDataResponse Alibabacloud_Ecs20140526::Client::describeEniMonitorDataWithOptions(shared_ptr<DescribeEniMonitorDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeEniMonitorDataResponse(doRPCRequest(make_shared<string>("DescribeEniMonitorData"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeEniMonitorDataResponse Alibabacloud_Ecs20140526::Client::describeEniMonitorData(shared_ptr<DescribeEniMonitorDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEniMonitorDataWithOptions(request, runtime);
}

DescribeForwardTableEntriesResponse Alibabacloud_Ecs20140526::Client::describeForwardTableEntriesWithOptions(shared_ptr<DescribeForwardTableEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeForwardTableEntriesResponse(doRPCRequest(make_shared<string>("DescribeForwardTableEntries"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeForwardTableEntriesResponse Alibabacloud_Ecs20140526::Client::describeForwardTableEntries(shared_ptr<DescribeForwardTableEntriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeForwardTableEntriesWithOptions(request, runtime);
}

DescribeHaVipsResponse Alibabacloud_Ecs20140526::Client::describeHaVipsWithOptions(shared_ptr<DescribeHaVipsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeHaVipsResponse(doRPCRequest(make_shared<string>("DescribeHaVips"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeHaVipsResponse Alibabacloud_Ecs20140526::Client::describeHaVips(shared_ptr<DescribeHaVipsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHaVipsWithOptions(request, runtime);
}

DescribeHpcClustersResponse Alibabacloud_Ecs20140526::Client::describeHpcClustersWithOptions(shared_ptr<DescribeHpcClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeHpcClustersResponse(doRPCRequest(make_shared<string>("DescribeHpcClusters"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeHpcClustersResponse Alibabacloud_Ecs20140526::Client::describeHpcClusters(shared_ptr<DescribeHpcClustersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHpcClustersWithOptions(request, runtime);
}

DescribeImageComponentsResponse Alibabacloud_Ecs20140526::Client::describeImageComponentsWithOptions(shared_ptr<DescribeImageComponentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeImageComponentsResponse(doRPCRequest(make_shared<string>("DescribeImageComponents"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeImageComponentsResponse Alibabacloud_Ecs20140526::Client::describeImageComponents(shared_ptr<DescribeImageComponentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeImageComponentsWithOptions(request, runtime);
}

DescribeImageFromFamilyResponse Alibabacloud_Ecs20140526::Client::describeImageFromFamilyWithOptions(shared_ptr<DescribeImageFromFamilyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeImageFromFamilyResponse(doRPCRequest(make_shared<string>("DescribeImageFromFamily"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeImageFromFamilyResponse Alibabacloud_Ecs20140526::Client::describeImageFromFamily(shared_ptr<DescribeImageFromFamilyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeImageFromFamilyWithOptions(request, runtime);
}

DescribeImagePipelineExecutionsResponse Alibabacloud_Ecs20140526::Client::describeImagePipelineExecutionsWithOptions(shared_ptr<DescribeImagePipelineExecutionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeImagePipelineExecutionsResponse(doRPCRequest(make_shared<string>("DescribeImagePipelineExecutions"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeImagePipelineExecutionsResponse Alibabacloud_Ecs20140526::Client::describeImagePipelineExecutions(shared_ptr<DescribeImagePipelineExecutionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeImagePipelineExecutionsWithOptions(request, runtime);
}

DescribeImagePipelinesResponse Alibabacloud_Ecs20140526::Client::describeImagePipelinesWithOptions(shared_ptr<DescribeImagePipelinesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeImagePipelinesResponse(doRPCRequest(make_shared<string>("DescribeImagePipelines"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeImagePipelinesResponse Alibabacloud_Ecs20140526::Client::describeImagePipelines(shared_ptr<DescribeImagePipelinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeImagePipelinesWithOptions(request, runtime);
}

DescribeImagesResponse Alibabacloud_Ecs20140526::Client::describeImagesWithOptions(shared_ptr<DescribeImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeImagesResponse(doRPCRequest(make_shared<string>("DescribeImages"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeImagesResponse Alibabacloud_Ecs20140526::Client::describeImages(shared_ptr<DescribeImagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeImagesWithOptions(request, runtime);
}

DescribeImageSharePermissionResponse Alibabacloud_Ecs20140526::Client::describeImageSharePermissionWithOptions(shared_ptr<DescribeImageSharePermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeImageSharePermissionResponse(doRPCRequest(make_shared<string>("DescribeImageSharePermission"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeImageSharePermissionResponse Alibabacloud_Ecs20140526::Client::describeImageSharePermission(shared_ptr<DescribeImageSharePermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeImageSharePermissionWithOptions(request, runtime);
}

DescribeImageSupportInstanceTypesResponse Alibabacloud_Ecs20140526::Client::describeImageSupportInstanceTypesWithOptions(shared_ptr<DescribeImageSupportInstanceTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeImageSupportInstanceTypesResponse(doRPCRequest(make_shared<string>("DescribeImageSupportInstanceTypes"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeImageSupportInstanceTypesResponse Alibabacloud_Ecs20140526::Client::describeImageSupportInstanceTypes(shared_ptr<DescribeImageSupportInstanceTypesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeImageSupportInstanceTypesWithOptions(request, runtime);
}

DescribeInstanceAttachmentAttributesResponse Alibabacloud_Ecs20140526::Client::describeInstanceAttachmentAttributesWithOptions(shared_ptr<DescribeInstanceAttachmentAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceAttachmentAttributesResponse(doRPCRequest(make_shared<string>("DescribeInstanceAttachmentAttributes"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceAttachmentAttributesResponse Alibabacloud_Ecs20140526::Client::describeInstanceAttachmentAttributes(shared_ptr<DescribeInstanceAttachmentAttributesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceAttachmentAttributesWithOptions(request, runtime);
}

DescribeInstanceAttributeResponse Alibabacloud_Ecs20140526::Client::describeInstanceAttributeWithOptions(shared_ptr<DescribeInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceAttributeResponse(doRPCRequest(make_shared<string>("DescribeInstanceAttribute"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceAttributeResponse Alibabacloud_Ecs20140526::Client::describeInstanceAttribute(shared_ptr<DescribeInstanceAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceAttributeWithOptions(request, runtime);
}

DescribeInstanceAutoRenewAttributeResponse Alibabacloud_Ecs20140526::Client::describeInstanceAutoRenewAttributeWithOptions(shared_ptr<DescribeInstanceAutoRenewAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceAutoRenewAttributeResponse(doRPCRequest(make_shared<string>("DescribeInstanceAutoRenewAttribute"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceAutoRenewAttributeResponse Alibabacloud_Ecs20140526::Client::describeInstanceAutoRenewAttribute(shared_ptr<DescribeInstanceAutoRenewAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceAutoRenewAttributeWithOptions(request, runtime);
}

DescribeInstanceHistoryEventsResponse Alibabacloud_Ecs20140526::Client::describeInstanceHistoryEventsWithOptions(shared_ptr<DescribeInstanceHistoryEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceHistoryEventsResponse(doRPCRequest(make_shared<string>("DescribeInstanceHistoryEvents"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceHistoryEventsResponse Alibabacloud_Ecs20140526::Client::describeInstanceHistoryEvents(shared_ptr<DescribeInstanceHistoryEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceHistoryEventsWithOptions(request, runtime);
}

DescribeInstanceMaintenanceAttributesResponse Alibabacloud_Ecs20140526::Client::describeInstanceMaintenanceAttributesWithOptions(shared_ptr<DescribeInstanceMaintenanceAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceMaintenanceAttributesResponse(doRPCRequest(make_shared<string>("DescribeInstanceMaintenanceAttributes"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceMaintenanceAttributesResponse Alibabacloud_Ecs20140526::Client::describeInstanceMaintenanceAttributes(shared_ptr<DescribeInstanceMaintenanceAttributesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceMaintenanceAttributesWithOptions(request, runtime);
}

DescribeInstanceModificationPriceResponse Alibabacloud_Ecs20140526::Client::describeInstanceModificationPriceWithOptions(shared_ptr<DescribeInstanceModificationPriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceModificationPriceResponse(doRPCRequest(make_shared<string>("DescribeInstanceModificationPrice"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceModificationPriceResponse Alibabacloud_Ecs20140526::Client::describeInstanceModificationPrice(shared_ptr<DescribeInstanceModificationPriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceModificationPriceWithOptions(request, runtime);
}

DescribeInstanceMonitorDataResponse Alibabacloud_Ecs20140526::Client::describeInstanceMonitorDataWithOptions(shared_ptr<DescribeInstanceMonitorDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceMonitorDataResponse(doRPCRequest(make_shared<string>("DescribeInstanceMonitorData"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceMonitorDataResponse Alibabacloud_Ecs20140526::Client::describeInstanceMonitorData(shared_ptr<DescribeInstanceMonitorDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceMonitorDataWithOptions(request, runtime);
}

DescribeInstanceRamRoleResponse Alibabacloud_Ecs20140526::Client::describeInstanceRamRoleWithOptions(shared_ptr<DescribeInstanceRamRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceRamRoleResponse(doRPCRequest(make_shared<string>("DescribeInstanceRamRole"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceRamRoleResponse Alibabacloud_Ecs20140526::Client::describeInstanceRamRole(shared_ptr<DescribeInstanceRamRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceRamRoleWithOptions(request, runtime);
}

DescribeInstancesResponse Alibabacloud_Ecs20140526::Client::describeInstancesWithOptions(shared_ptr<DescribeInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstancesResponse(doRPCRequest(make_shared<string>("DescribeInstances"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstancesResponse Alibabacloud_Ecs20140526::Client::describeInstances(shared_ptr<DescribeInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstancesWithOptions(request, runtime);
}

DescribeInstancesFullStatusResponse Alibabacloud_Ecs20140526::Client::describeInstancesFullStatusWithOptions(shared_ptr<DescribeInstancesFullStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstancesFullStatusResponse(doRPCRequest(make_shared<string>("DescribeInstancesFullStatus"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstancesFullStatusResponse Alibabacloud_Ecs20140526::Client::describeInstancesFullStatus(shared_ptr<DescribeInstancesFullStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstancesFullStatusWithOptions(request, runtime);
}

DescribeInstanceStatusResponse Alibabacloud_Ecs20140526::Client::describeInstanceStatusWithOptions(shared_ptr<DescribeInstanceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceStatusResponse(doRPCRequest(make_shared<string>("DescribeInstanceStatus"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceStatusResponse Alibabacloud_Ecs20140526::Client::describeInstanceStatus(shared_ptr<DescribeInstanceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceStatusWithOptions(request, runtime);
}

DescribeInstanceTopologyResponse Alibabacloud_Ecs20140526::Client::describeInstanceTopologyWithOptions(shared_ptr<DescribeInstanceTopologyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceTopologyResponse(doRPCRequest(make_shared<string>("DescribeInstanceTopology"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceTopologyResponse Alibabacloud_Ecs20140526::Client::describeInstanceTopology(shared_ptr<DescribeInstanceTopologyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceTopologyWithOptions(request, runtime);
}

DescribeInstanceTypeFamiliesResponse Alibabacloud_Ecs20140526::Client::describeInstanceTypeFamiliesWithOptions(shared_ptr<DescribeInstanceTypeFamiliesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceTypeFamiliesResponse(doRPCRequest(make_shared<string>("DescribeInstanceTypeFamilies"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceTypeFamiliesResponse Alibabacloud_Ecs20140526::Client::describeInstanceTypeFamilies(shared_ptr<DescribeInstanceTypeFamiliesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceTypeFamiliesWithOptions(request, runtime);
}

DescribeInstanceTypesResponse Alibabacloud_Ecs20140526::Client::describeInstanceTypesWithOptions(shared_ptr<DescribeInstanceTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceTypesResponse(doRPCRequest(make_shared<string>("DescribeInstanceTypes"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceTypesResponse Alibabacloud_Ecs20140526::Client::describeInstanceTypes(shared_ptr<DescribeInstanceTypesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceTypesWithOptions(request, runtime);
}

DescribeInstanceVncPasswdResponse Alibabacloud_Ecs20140526::Client::describeInstanceVncPasswdWithOptions(shared_ptr<DescribeInstanceVncPasswdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceVncPasswdResponse(doRPCRequest(make_shared<string>("DescribeInstanceVncPasswd"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceVncPasswdResponse Alibabacloud_Ecs20140526::Client::describeInstanceVncPasswd(shared_ptr<DescribeInstanceVncPasswdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceVncPasswdWithOptions(request, runtime);
}

DescribeInstanceVncUrlResponse Alibabacloud_Ecs20140526::Client::describeInstanceVncUrlWithOptions(shared_ptr<DescribeInstanceVncUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceVncUrlResponse(doRPCRequest(make_shared<string>("DescribeInstanceVncUrl"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceVncUrlResponse Alibabacloud_Ecs20140526::Client::describeInstanceVncUrl(shared_ptr<DescribeInstanceVncUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceVncUrlWithOptions(request, runtime);
}

DescribeInvocationResultsResponse Alibabacloud_Ecs20140526::Client::describeInvocationResultsWithOptions(shared_ptr<DescribeInvocationResultsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInvocationResultsResponse(doRPCRequest(make_shared<string>("DescribeInvocationResults"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInvocationResultsResponse Alibabacloud_Ecs20140526::Client::describeInvocationResults(shared_ptr<DescribeInvocationResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInvocationResultsWithOptions(request, runtime);
}

DescribeInvocationsResponse Alibabacloud_Ecs20140526::Client::describeInvocationsWithOptions(shared_ptr<DescribeInvocationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInvocationsResponse(doRPCRequest(make_shared<string>("DescribeInvocations"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInvocationsResponse Alibabacloud_Ecs20140526::Client::describeInvocations(shared_ptr<DescribeInvocationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInvocationsWithOptions(request, runtime);
}

DescribeKeyPairsResponse Alibabacloud_Ecs20140526::Client::describeKeyPairsWithOptions(shared_ptr<DescribeKeyPairsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeKeyPairsResponse(doRPCRequest(make_shared<string>("DescribeKeyPairs"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeKeyPairsResponse Alibabacloud_Ecs20140526::Client::describeKeyPairs(shared_ptr<DescribeKeyPairsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeKeyPairsWithOptions(request, runtime);
}

DescribeLaunchTemplatesResponse Alibabacloud_Ecs20140526::Client::describeLaunchTemplatesWithOptions(shared_ptr<DescribeLaunchTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeLaunchTemplatesResponse(doRPCRequest(make_shared<string>("DescribeLaunchTemplates"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeLaunchTemplatesResponse Alibabacloud_Ecs20140526::Client::describeLaunchTemplates(shared_ptr<DescribeLaunchTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLaunchTemplatesWithOptions(request, runtime);
}

DescribeLaunchTemplateVersionsResponse Alibabacloud_Ecs20140526::Client::describeLaunchTemplateVersionsWithOptions(shared_ptr<DescribeLaunchTemplateVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeLaunchTemplateVersionsResponse(doRPCRequest(make_shared<string>("DescribeLaunchTemplateVersions"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeLaunchTemplateVersionsResponse Alibabacloud_Ecs20140526::Client::describeLaunchTemplateVersions(shared_ptr<DescribeLaunchTemplateVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLaunchTemplateVersionsWithOptions(request, runtime);
}

DescribeLimitationResponse Alibabacloud_Ecs20140526::Client::describeLimitationWithOptions(shared_ptr<DescribeLimitationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeLimitationResponse(doRPCRequest(make_shared<string>("DescribeLimitation"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeLimitationResponse Alibabacloud_Ecs20140526::Client::describeLimitation(shared_ptr<DescribeLimitationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLimitationWithOptions(request, runtime);
}

DescribeManagedInstancesResponse Alibabacloud_Ecs20140526::Client::describeManagedInstancesWithOptions(shared_ptr<DescribeManagedInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeManagedInstancesResponse(doRPCRequest(make_shared<string>("DescribeManagedInstances"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeManagedInstancesResponse Alibabacloud_Ecs20140526::Client::describeManagedInstances(shared_ptr<DescribeManagedInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeManagedInstancesWithOptions(request, runtime);
}

DescribeNatGatewaysResponse Alibabacloud_Ecs20140526::Client::describeNatGatewaysWithOptions(shared_ptr<DescribeNatGatewaysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeNatGatewaysResponse(doRPCRequest(make_shared<string>("DescribeNatGateways"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeNatGatewaysResponse Alibabacloud_Ecs20140526::Client::describeNatGateways(shared_ptr<DescribeNatGatewaysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNatGatewaysWithOptions(request, runtime);
}

DescribeNetworkInterfaceAttributeResponse Alibabacloud_Ecs20140526::Client::describeNetworkInterfaceAttributeWithOptions(shared_ptr<DescribeNetworkInterfaceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeNetworkInterfaceAttributeResponse(doRPCRequest(make_shared<string>("DescribeNetworkInterfaceAttribute"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeNetworkInterfaceAttributeResponse Alibabacloud_Ecs20140526::Client::describeNetworkInterfaceAttribute(shared_ptr<DescribeNetworkInterfaceAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNetworkInterfaceAttributeWithOptions(request, runtime);
}

DescribeNetworkInterfacePermissionsResponse Alibabacloud_Ecs20140526::Client::describeNetworkInterfacePermissionsWithOptions(shared_ptr<DescribeNetworkInterfacePermissionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeNetworkInterfacePermissionsResponse(doRPCRequest(make_shared<string>("DescribeNetworkInterfacePermissions"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeNetworkInterfacePermissionsResponse Alibabacloud_Ecs20140526::Client::describeNetworkInterfacePermissions(shared_ptr<DescribeNetworkInterfacePermissionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNetworkInterfacePermissionsWithOptions(request, runtime);
}

DescribeNetworkInterfacesResponse Alibabacloud_Ecs20140526::Client::describeNetworkInterfacesWithOptions(shared_ptr<DescribeNetworkInterfacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeNetworkInterfacesResponse(doRPCRequest(make_shared<string>("DescribeNetworkInterfaces"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeNetworkInterfacesResponse Alibabacloud_Ecs20140526::Client::describeNetworkInterfaces(shared_ptr<DescribeNetworkInterfacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNetworkInterfacesWithOptions(request, runtime);
}

DescribeNewProjectEipMonitorDataResponse Alibabacloud_Ecs20140526::Client::describeNewProjectEipMonitorDataWithOptions(shared_ptr<DescribeNewProjectEipMonitorDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeNewProjectEipMonitorDataResponse(doRPCRequest(make_shared<string>("DescribeNewProjectEipMonitorData"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeNewProjectEipMonitorDataResponse Alibabacloud_Ecs20140526::Client::describeNewProjectEipMonitorData(shared_ptr<DescribeNewProjectEipMonitorDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNewProjectEipMonitorDataWithOptions(request, runtime);
}

DescribePhysicalConnectionsResponse Alibabacloud_Ecs20140526::Client::describePhysicalConnectionsWithOptions(shared_ptr<DescribePhysicalConnectionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePhysicalConnectionsResponse(doRPCRequest(make_shared<string>("DescribePhysicalConnections"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePhysicalConnectionsResponse Alibabacloud_Ecs20140526::Client::describePhysicalConnections(shared_ptr<DescribePhysicalConnectionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePhysicalConnectionsWithOptions(request, runtime);
}

DescribePrefixListAssociationsResponse Alibabacloud_Ecs20140526::Client::describePrefixListAssociationsWithOptions(shared_ptr<DescribePrefixListAssociationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePrefixListAssociationsResponse(doRPCRequest(make_shared<string>("DescribePrefixListAssociations"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePrefixListAssociationsResponse Alibabacloud_Ecs20140526::Client::describePrefixListAssociations(shared_ptr<DescribePrefixListAssociationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePrefixListAssociationsWithOptions(request, runtime);
}

DescribePrefixListAttributesResponse Alibabacloud_Ecs20140526::Client::describePrefixListAttributesWithOptions(shared_ptr<DescribePrefixListAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePrefixListAttributesResponse(doRPCRequest(make_shared<string>("DescribePrefixListAttributes"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePrefixListAttributesResponse Alibabacloud_Ecs20140526::Client::describePrefixListAttributes(shared_ptr<DescribePrefixListAttributesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePrefixListAttributesWithOptions(request, runtime);
}

DescribePrefixListsResponse Alibabacloud_Ecs20140526::Client::describePrefixListsWithOptions(shared_ptr<DescribePrefixListsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePrefixListsResponse(doRPCRequest(make_shared<string>("DescribePrefixLists"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePrefixListsResponse Alibabacloud_Ecs20140526::Client::describePrefixLists(shared_ptr<DescribePrefixListsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePrefixListsWithOptions(request, runtime);
}

DescribePriceResponse Alibabacloud_Ecs20140526::Client::describePriceWithOptions(shared_ptr<DescribePriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePriceResponse(doRPCRequest(make_shared<string>("DescribePrice"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePriceResponse Alibabacloud_Ecs20140526::Client::describePrice(shared_ptr<DescribePriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePriceWithOptions(request, runtime);
}

DescribeRecommendInstanceTypeResponse Alibabacloud_Ecs20140526::Client::describeRecommendInstanceTypeWithOptions(shared_ptr<DescribeRecommendInstanceTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRecommendInstanceTypeResponse(doRPCRequest(make_shared<string>("DescribeRecommendInstanceType"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRecommendInstanceTypeResponse Alibabacloud_Ecs20140526::Client::describeRecommendInstanceType(shared_ptr<DescribeRecommendInstanceTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRecommendInstanceTypeWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Ecs20140526::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRegionsResponse(doRPCRequest(make_shared<string>("DescribeRegions"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionsResponse Alibabacloud_Ecs20140526::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeRenewalPriceResponse Alibabacloud_Ecs20140526::Client::describeRenewalPriceWithOptions(shared_ptr<DescribeRenewalPriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRenewalPriceResponse(doRPCRequest(make_shared<string>("DescribeRenewalPrice"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRenewalPriceResponse Alibabacloud_Ecs20140526::Client::describeRenewalPrice(shared_ptr<DescribeRenewalPriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRenewalPriceWithOptions(request, runtime);
}

DescribeReservedInstancesResponse Alibabacloud_Ecs20140526::Client::describeReservedInstancesWithOptions(shared_ptr<DescribeReservedInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeReservedInstancesResponse(doRPCRequest(make_shared<string>("DescribeReservedInstances"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeReservedInstancesResponse Alibabacloud_Ecs20140526::Client::describeReservedInstances(shared_ptr<DescribeReservedInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeReservedInstancesWithOptions(request, runtime);
}

DescribeResourceByTagsResponse Alibabacloud_Ecs20140526::Client::describeResourceByTagsWithOptions(shared_ptr<DescribeResourceByTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeResourceByTagsResponse(doRPCRequest(make_shared<string>("DescribeResourceByTags"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeResourceByTagsResponse Alibabacloud_Ecs20140526::Client::describeResourceByTags(shared_ptr<DescribeResourceByTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeResourceByTagsWithOptions(request, runtime);
}

DescribeResourcesModificationResponse Alibabacloud_Ecs20140526::Client::describeResourcesModificationWithOptions(shared_ptr<DescribeResourcesModificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeResourcesModificationResponse(doRPCRequest(make_shared<string>("DescribeResourcesModification"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeResourcesModificationResponse Alibabacloud_Ecs20140526::Client::describeResourcesModification(shared_ptr<DescribeResourcesModificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeResourcesModificationWithOptions(request, runtime);
}

DescribeRouterInterfacesResponse Alibabacloud_Ecs20140526::Client::describeRouterInterfacesWithOptions(shared_ptr<DescribeRouterInterfacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRouterInterfacesResponse(doRPCRequest(make_shared<string>("DescribeRouterInterfaces"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRouterInterfacesResponse Alibabacloud_Ecs20140526::Client::describeRouterInterfaces(shared_ptr<DescribeRouterInterfacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRouterInterfacesWithOptions(request, runtime);
}

DescribeRouteTablesResponse Alibabacloud_Ecs20140526::Client::describeRouteTablesWithOptions(shared_ptr<DescribeRouteTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRouteTablesResponse(doRPCRequest(make_shared<string>("DescribeRouteTables"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRouteTablesResponse Alibabacloud_Ecs20140526::Client::describeRouteTables(shared_ptr<DescribeRouteTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRouteTablesWithOptions(request, runtime);
}

DescribeSecurityGroupAttributeResponse Alibabacloud_Ecs20140526::Client::describeSecurityGroupAttributeWithOptions(shared_ptr<DescribeSecurityGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSecurityGroupAttributeResponse(doRPCRequest(make_shared<string>("DescribeSecurityGroupAttribute"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSecurityGroupAttributeResponse Alibabacloud_Ecs20140526::Client::describeSecurityGroupAttribute(shared_ptr<DescribeSecurityGroupAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSecurityGroupAttributeWithOptions(request, runtime);
}

DescribeSecurityGroupReferencesResponse Alibabacloud_Ecs20140526::Client::describeSecurityGroupReferencesWithOptions(shared_ptr<DescribeSecurityGroupReferencesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSecurityGroupReferencesResponse(doRPCRequest(make_shared<string>("DescribeSecurityGroupReferences"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSecurityGroupReferencesResponse Alibabacloud_Ecs20140526::Client::describeSecurityGroupReferences(shared_ptr<DescribeSecurityGroupReferencesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSecurityGroupReferencesWithOptions(request, runtime);
}

DescribeSecurityGroupsResponse Alibabacloud_Ecs20140526::Client::describeSecurityGroupsWithOptions(shared_ptr<DescribeSecurityGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSecurityGroupsResponse(doRPCRequest(make_shared<string>("DescribeSecurityGroups"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSecurityGroupsResponse Alibabacloud_Ecs20140526::Client::describeSecurityGroups(shared_ptr<DescribeSecurityGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSecurityGroupsWithOptions(request, runtime);
}

DescribeSendFileResultsResponse Alibabacloud_Ecs20140526::Client::describeSendFileResultsWithOptions(shared_ptr<DescribeSendFileResultsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSendFileResultsResponse(doRPCRequest(make_shared<string>("DescribeSendFileResults"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSendFileResultsResponse Alibabacloud_Ecs20140526::Client::describeSendFileResults(shared_ptr<DescribeSendFileResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSendFileResultsWithOptions(request, runtime);
}

DescribeSnapshotGroupsResponse Alibabacloud_Ecs20140526::Client::describeSnapshotGroupsWithOptions(shared_ptr<DescribeSnapshotGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSnapshotGroupsResponse(doRPCRequest(make_shared<string>("DescribeSnapshotGroups"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSnapshotGroupsResponse Alibabacloud_Ecs20140526::Client::describeSnapshotGroups(shared_ptr<DescribeSnapshotGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSnapshotGroupsWithOptions(request, runtime);
}

DescribeSnapshotLinksResponse Alibabacloud_Ecs20140526::Client::describeSnapshotLinksWithOptions(shared_ptr<DescribeSnapshotLinksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSnapshotLinksResponse(doRPCRequest(make_shared<string>("DescribeSnapshotLinks"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSnapshotLinksResponse Alibabacloud_Ecs20140526::Client::describeSnapshotLinks(shared_ptr<DescribeSnapshotLinksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSnapshotLinksWithOptions(request, runtime);
}

DescribeSnapshotMonitorDataResponse Alibabacloud_Ecs20140526::Client::describeSnapshotMonitorDataWithOptions(shared_ptr<DescribeSnapshotMonitorDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSnapshotMonitorDataResponse(doRPCRequest(make_shared<string>("DescribeSnapshotMonitorData"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSnapshotMonitorDataResponse Alibabacloud_Ecs20140526::Client::describeSnapshotMonitorData(shared_ptr<DescribeSnapshotMonitorDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSnapshotMonitorDataWithOptions(request, runtime);
}

DescribeSnapshotPackageResponse Alibabacloud_Ecs20140526::Client::describeSnapshotPackageWithOptions(shared_ptr<DescribeSnapshotPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSnapshotPackageResponse(doRPCRequest(make_shared<string>("DescribeSnapshotPackage"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSnapshotPackageResponse Alibabacloud_Ecs20140526::Client::describeSnapshotPackage(shared_ptr<DescribeSnapshotPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSnapshotPackageWithOptions(request, runtime);
}

DescribeSnapshotsResponse Alibabacloud_Ecs20140526::Client::describeSnapshotsWithOptions(shared_ptr<DescribeSnapshotsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSnapshotsResponse(doRPCRequest(make_shared<string>("DescribeSnapshots"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSnapshotsResponse Alibabacloud_Ecs20140526::Client::describeSnapshots(shared_ptr<DescribeSnapshotsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSnapshotsWithOptions(request, runtime);
}

DescribeSnapshotsUsageResponse Alibabacloud_Ecs20140526::Client::describeSnapshotsUsageWithOptions(shared_ptr<DescribeSnapshotsUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSnapshotsUsageResponse(doRPCRequest(make_shared<string>("DescribeSnapshotsUsage"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSnapshotsUsageResponse Alibabacloud_Ecs20140526::Client::describeSnapshotsUsage(shared_ptr<DescribeSnapshotsUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSnapshotsUsageWithOptions(request, runtime);
}

DescribeSpotAdviceResponse Alibabacloud_Ecs20140526::Client::describeSpotAdviceWithOptions(shared_ptr<DescribeSpotAdviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSpotAdviceResponse(doRPCRequest(make_shared<string>("DescribeSpotAdvice"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSpotAdviceResponse Alibabacloud_Ecs20140526::Client::describeSpotAdvice(shared_ptr<DescribeSpotAdviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSpotAdviceWithOptions(request, runtime);
}

DescribeSpotPriceHistoryResponse Alibabacloud_Ecs20140526::Client::describeSpotPriceHistoryWithOptions(shared_ptr<DescribeSpotPriceHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSpotPriceHistoryResponse(doRPCRequest(make_shared<string>("DescribeSpotPriceHistory"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSpotPriceHistoryResponse Alibabacloud_Ecs20140526::Client::describeSpotPriceHistory(shared_ptr<DescribeSpotPriceHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSpotPriceHistoryWithOptions(request, runtime);
}

DescribeStorageCapacityUnitsResponse Alibabacloud_Ecs20140526::Client::describeStorageCapacityUnitsWithOptions(shared_ptr<DescribeStorageCapacityUnitsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeStorageCapacityUnitsResponse(doRPCRequest(make_shared<string>("DescribeStorageCapacityUnits"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeStorageCapacityUnitsResponse Alibabacloud_Ecs20140526::Client::describeStorageCapacityUnits(shared_ptr<DescribeStorageCapacityUnitsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeStorageCapacityUnitsWithOptions(request, runtime);
}

DescribeStorageSetDetailsResponse Alibabacloud_Ecs20140526::Client::describeStorageSetDetailsWithOptions(shared_ptr<DescribeStorageSetDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeStorageSetDetailsResponse(doRPCRequest(make_shared<string>("DescribeStorageSetDetails"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeStorageSetDetailsResponse Alibabacloud_Ecs20140526::Client::describeStorageSetDetails(shared_ptr<DescribeStorageSetDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeStorageSetDetailsWithOptions(request, runtime);
}

DescribeStorageSetsResponse Alibabacloud_Ecs20140526::Client::describeStorageSetsWithOptions(shared_ptr<DescribeStorageSetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeStorageSetsResponse(doRPCRequest(make_shared<string>("DescribeStorageSets"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeStorageSetsResponse Alibabacloud_Ecs20140526::Client::describeStorageSets(shared_ptr<DescribeStorageSetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeStorageSetsWithOptions(request, runtime);
}

DescribeTagsResponse Alibabacloud_Ecs20140526::Client::describeTagsWithOptions(shared_ptr<DescribeTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeTagsResponse(doRPCRequest(make_shared<string>("DescribeTags"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeTagsResponse Alibabacloud_Ecs20140526::Client::describeTags(shared_ptr<DescribeTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTagsWithOptions(request, runtime);
}

DescribeTaskAttributeResponse Alibabacloud_Ecs20140526::Client::describeTaskAttributeWithOptions(shared_ptr<DescribeTaskAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeTaskAttributeResponse(doRPCRequest(make_shared<string>("DescribeTaskAttribute"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeTaskAttributeResponse Alibabacloud_Ecs20140526::Client::describeTaskAttribute(shared_ptr<DescribeTaskAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTaskAttributeWithOptions(request, runtime);
}

DescribeTasksResponse Alibabacloud_Ecs20140526::Client::describeTasksWithOptions(shared_ptr<DescribeTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeTasksResponse(doRPCRequest(make_shared<string>("DescribeTasks"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeTasksResponse Alibabacloud_Ecs20140526::Client::describeTasks(shared_ptr<DescribeTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTasksWithOptions(request, runtime);
}

DescribeUserBusinessBehaviorResponse Alibabacloud_Ecs20140526::Client::describeUserBusinessBehaviorWithOptions(shared_ptr<DescribeUserBusinessBehaviorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeUserBusinessBehaviorResponse(doRPCRequest(make_shared<string>("DescribeUserBusinessBehavior"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeUserBusinessBehaviorResponse Alibabacloud_Ecs20140526::Client::describeUserBusinessBehavior(shared_ptr<DescribeUserBusinessBehaviorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserBusinessBehaviorWithOptions(request, runtime);
}

DescribeUserDataResponse Alibabacloud_Ecs20140526::Client::describeUserDataWithOptions(shared_ptr<DescribeUserDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeUserDataResponse(doRPCRequest(make_shared<string>("DescribeUserData"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeUserDataResponse Alibabacloud_Ecs20140526::Client::describeUserData(shared_ptr<DescribeUserDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserDataWithOptions(request, runtime);
}

DescribeVirtualBorderRoutersResponse Alibabacloud_Ecs20140526::Client::describeVirtualBorderRoutersWithOptions(shared_ptr<DescribeVirtualBorderRoutersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVirtualBorderRoutersResponse(doRPCRequest(make_shared<string>("DescribeVirtualBorderRouters"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVirtualBorderRoutersResponse Alibabacloud_Ecs20140526::Client::describeVirtualBorderRouters(shared_ptr<DescribeVirtualBorderRoutersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVirtualBorderRoutersWithOptions(request, runtime);
}

DescribeVirtualBorderRoutersForPhysicalConnectionResponse Alibabacloud_Ecs20140526::Client::describeVirtualBorderRoutersForPhysicalConnectionWithOptions(shared_ptr<DescribeVirtualBorderRoutersForPhysicalConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVirtualBorderRoutersForPhysicalConnectionResponse(doRPCRequest(make_shared<string>("DescribeVirtualBorderRoutersForPhysicalConnection"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVirtualBorderRoutersForPhysicalConnectionResponse Alibabacloud_Ecs20140526::Client::describeVirtualBorderRoutersForPhysicalConnection(shared_ptr<DescribeVirtualBorderRoutersForPhysicalConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVirtualBorderRoutersForPhysicalConnectionWithOptions(request, runtime);
}

DescribeVpcsResponse Alibabacloud_Ecs20140526::Client::describeVpcsWithOptions(shared_ptr<DescribeVpcsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVpcsResponse(doRPCRequest(make_shared<string>("DescribeVpcs"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVpcsResponse Alibabacloud_Ecs20140526::Client::describeVpcs(shared_ptr<DescribeVpcsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVpcsWithOptions(request, runtime);
}

DescribeVRoutersResponse Alibabacloud_Ecs20140526::Client::describeVRoutersWithOptions(shared_ptr<DescribeVRoutersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVRoutersResponse(doRPCRequest(make_shared<string>("DescribeVRouters"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVRoutersResponse Alibabacloud_Ecs20140526::Client::describeVRouters(shared_ptr<DescribeVRoutersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVRoutersWithOptions(request, runtime);
}

DescribeVSwitchesResponse Alibabacloud_Ecs20140526::Client::describeVSwitchesWithOptions(shared_ptr<DescribeVSwitchesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVSwitchesResponse(doRPCRequest(make_shared<string>("DescribeVSwitches"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVSwitchesResponse Alibabacloud_Ecs20140526::Client::describeVSwitches(shared_ptr<DescribeVSwitchesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVSwitchesWithOptions(request, runtime);
}

DescribeZonesResponse Alibabacloud_Ecs20140526::Client::describeZonesWithOptions(shared_ptr<DescribeZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeZonesResponse(doRPCRequest(make_shared<string>("DescribeZones"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeZonesResponse Alibabacloud_Ecs20140526::Client::describeZones(shared_ptr<DescribeZonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeZonesWithOptions(request, runtime);
}

DetachClassicLinkVpcResponse Alibabacloud_Ecs20140526::Client::detachClassicLinkVpcWithOptions(shared_ptr<DetachClassicLinkVpcRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetachClassicLinkVpcResponse(doRPCRequest(make_shared<string>("DetachClassicLinkVpc"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetachClassicLinkVpcResponse Alibabacloud_Ecs20140526::Client::detachClassicLinkVpc(shared_ptr<DetachClassicLinkVpcRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachClassicLinkVpcWithOptions(request, runtime);
}

DetachDiskResponse Alibabacloud_Ecs20140526::Client::detachDiskWithOptions(shared_ptr<DetachDiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetachDiskResponse(doRPCRequest(make_shared<string>("DetachDisk"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetachDiskResponse Alibabacloud_Ecs20140526::Client::detachDisk(shared_ptr<DetachDiskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachDiskWithOptions(request, runtime);
}

DetachInstanceRamRoleResponse Alibabacloud_Ecs20140526::Client::detachInstanceRamRoleWithOptions(shared_ptr<DetachInstanceRamRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetachInstanceRamRoleResponse(doRPCRequest(make_shared<string>("DetachInstanceRamRole"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetachInstanceRamRoleResponse Alibabacloud_Ecs20140526::Client::detachInstanceRamRole(shared_ptr<DetachInstanceRamRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachInstanceRamRoleWithOptions(request, runtime);
}

DetachKeyPairResponse Alibabacloud_Ecs20140526::Client::detachKeyPairWithOptions(shared_ptr<DetachKeyPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetachKeyPairResponse(doRPCRequest(make_shared<string>("DetachKeyPair"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetachKeyPairResponse Alibabacloud_Ecs20140526::Client::detachKeyPair(shared_ptr<DetachKeyPairRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachKeyPairWithOptions(request, runtime);
}

DetachNetworkInterfaceResponse Alibabacloud_Ecs20140526::Client::detachNetworkInterfaceWithOptions(shared_ptr<DetachNetworkInterfaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetachNetworkInterfaceResponse(doRPCRequest(make_shared<string>("DetachNetworkInterface"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetachNetworkInterfaceResponse Alibabacloud_Ecs20140526::Client::detachNetworkInterface(shared_ptr<DetachNetworkInterfaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachNetworkInterfaceWithOptions(request, runtime);
}

DisableActivationResponse Alibabacloud_Ecs20140526::Client::disableActivationWithOptions(shared_ptr<DisableActivationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DisableActivationResponse(doRPCRequest(make_shared<string>("DisableActivation"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DisableActivationResponse Alibabacloud_Ecs20140526::Client::disableActivation(shared_ptr<DisableActivationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableActivationWithOptions(request, runtime);
}

EipFillParamsResponse Alibabacloud_Ecs20140526::Client::eipFillParamsWithOptions(shared_ptr<EipFillParamsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EipFillParamsResponse(doRPCRequest(make_shared<string>("EipFillParams"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EipFillParamsResponse Alibabacloud_Ecs20140526::Client::eipFillParams(shared_ptr<EipFillParamsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return eipFillParamsWithOptions(request, runtime);
}

EipFillProductResponse Alibabacloud_Ecs20140526::Client::eipFillProductWithOptions(shared_ptr<EipFillProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EipFillProductResponse(doRPCRequest(make_shared<string>("EipFillProduct"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EipFillProductResponse Alibabacloud_Ecs20140526::Client::eipFillProduct(shared_ptr<EipFillProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return eipFillProductWithOptions(request, runtime);
}

EipNotifyPaidResponse Alibabacloud_Ecs20140526::Client::eipNotifyPaidWithOptions(shared_ptr<EipNotifyPaidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EipNotifyPaidResponse(doRPCRequest(make_shared<string>("EipNotifyPaid"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EipNotifyPaidResponse Alibabacloud_Ecs20140526::Client::eipNotifyPaid(shared_ptr<EipNotifyPaidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return eipNotifyPaidWithOptions(request, runtime);
}

EnablePhysicalConnectionResponse Alibabacloud_Ecs20140526::Client::enablePhysicalConnectionWithOptions(shared_ptr<EnablePhysicalConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EnablePhysicalConnectionResponse(doRPCRequest(make_shared<string>("EnablePhysicalConnection"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EnablePhysicalConnectionResponse Alibabacloud_Ecs20140526::Client::enablePhysicalConnection(shared_ptr<EnablePhysicalConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enablePhysicalConnectionWithOptions(request, runtime);
}

ExportImageResponse Alibabacloud_Ecs20140526::Client::exportImageWithOptions(shared_ptr<ExportImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ExportImageResponse(doRPCRequest(make_shared<string>("ExportImage"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ExportImageResponse Alibabacloud_Ecs20140526::Client::exportImage(shared_ptr<ExportImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return exportImageWithOptions(request, runtime);
}

ExportSnapshotResponse Alibabacloud_Ecs20140526::Client::exportSnapshotWithOptions(shared_ptr<ExportSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ExportSnapshotResponse(doRPCRequest(make_shared<string>("ExportSnapshot"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ExportSnapshotResponse Alibabacloud_Ecs20140526::Client::exportSnapshot(shared_ptr<ExportSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return exportSnapshotWithOptions(request, runtime);
}

GetInstanceConsoleOutputResponse Alibabacloud_Ecs20140526::Client::getInstanceConsoleOutputWithOptions(shared_ptr<GetInstanceConsoleOutputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetInstanceConsoleOutputResponse(doRPCRequest(make_shared<string>("GetInstanceConsoleOutput"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetInstanceConsoleOutputResponse Alibabacloud_Ecs20140526::Client::getInstanceConsoleOutput(shared_ptr<GetInstanceConsoleOutputRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceConsoleOutputWithOptions(request, runtime);
}

GetInstanceScreenshotResponse Alibabacloud_Ecs20140526::Client::getInstanceScreenshotWithOptions(shared_ptr<GetInstanceScreenshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetInstanceScreenshotResponse(doRPCRequest(make_shared<string>("GetInstanceScreenshot"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetInstanceScreenshotResponse Alibabacloud_Ecs20140526::Client::getInstanceScreenshot(shared_ptr<GetInstanceScreenshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceScreenshotWithOptions(request, runtime);
}

ImportImageResponse Alibabacloud_Ecs20140526::Client::importImageWithOptions(shared_ptr<ImportImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ImportImageResponse(doRPCRequest(make_shared<string>("ImportImage"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ImportImageResponse Alibabacloud_Ecs20140526::Client::importImage(shared_ptr<ImportImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importImageWithOptions(request, runtime);
}

ImportKeyPairResponse Alibabacloud_Ecs20140526::Client::importKeyPairWithOptions(shared_ptr<ImportKeyPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ImportKeyPairResponse(doRPCRequest(make_shared<string>("ImportKeyPair"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ImportKeyPairResponse Alibabacloud_Ecs20140526::Client::importKeyPair(shared_ptr<ImportKeyPairRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importKeyPairWithOptions(request, runtime);
}

ImportSnapshotResponse Alibabacloud_Ecs20140526::Client::importSnapshotWithOptions(shared_ptr<ImportSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ImportSnapshotResponse(doRPCRequest(make_shared<string>("ImportSnapshot"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ImportSnapshotResponse Alibabacloud_Ecs20140526::Client::importSnapshot(shared_ptr<ImportSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importSnapshotWithOptions(request, runtime);
}

InstallCloudAssistantResponse Alibabacloud_Ecs20140526::Client::installCloudAssistantWithOptions(shared_ptr<InstallCloudAssistantRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return InstallCloudAssistantResponse(doRPCRequest(make_shared<string>("InstallCloudAssistant"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

InstallCloudAssistantResponse Alibabacloud_Ecs20140526::Client::installCloudAssistant(shared_ptr<InstallCloudAssistantRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return installCloudAssistantWithOptions(request, runtime);
}

InvokeCommandResponse Alibabacloud_Ecs20140526::Client::invokeCommandWithOptions(shared_ptr<InvokeCommandRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<InvokeCommandShrinkRequest> request = make_shared<InvokeCommandShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->parameters)) {
    request->parametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->parameters, make_shared<string>("Parameters"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return InvokeCommandResponse(doRPCRequest(make_shared<string>("InvokeCommand"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

InvokeCommandResponse Alibabacloud_Ecs20140526::Client::invokeCommand(shared_ptr<InvokeCommandRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return invokeCommandWithOptions(request, runtime);
}

JoinResourceGroupResponse Alibabacloud_Ecs20140526::Client::joinResourceGroupWithOptions(shared_ptr<JoinResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return JoinResourceGroupResponse(doRPCRequest(make_shared<string>("JoinResourceGroup"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

JoinResourceGroupResponse Alibabacloud_Ecs20140526::Client::joinResourceGroup(shared_ptr<JoinResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return joinResourceGroupWithOptions(request, runtime);
}

JoinSecurityGroupResponse Alibabacloud_Ecs20140526::Client::joinSecurityGroupWithOptions(shared_ptr<JoinSecurityGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return JoinSecurityGroupResponse(doRPCRequest(make_shared<string>("JoinSecurityGroup"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

JoinSecurityGroupResponse Alibabacloud_Ecs20140526::Client::joinSecurityGroup(shared_ptr<JoinSecurityGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return joinSecurityGroupWithOptions(request, runtime);
}

LeaveSecurityGroupResponse Alibabacloud_Ecs20140526::Client::leaveSecurityGroupWithOptions(shared_ptr<LeaveSecurityGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return LeaveSecurityGroupResponse(doRPCRequest(make_shared<string>("LeaveSecurityGroup"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

LeaveSecurityGroupResponse Alibabacloud_Ecs20140526::Client::leaveSecurityGroup(shared_ptr<LeaveSecurityGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return leaveSecurityGroupWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Ecs20140526::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTagResourcesResponse(doRPCRequest(make_shared<string>("ListTagResources"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagResourcesResponse Alibabacloud_Ecs20140526::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ModifyAutoProvisioningGroupResponse Alibabacloud_Ecs20140526::Client::modifyAutoProvisioningGroupWithOptions(shared_ptr<ModifyAutoProvisioningGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyAutoProvisioningGroupResponse(doRPCRequest(make_shared<string>("ModifyAutoProvisioningGroup"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyAutoProvisioningGroupResponse Alibabacloud_Ecs20140526::Client::modifyAutoProvisioningGroup(shared_ptr<ModifyAutoProvisioningGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAutoProvisioningGroupWithOptions(request, runtime);
}

ModifyAutoSnapshotPolicyResponse Alibabacloud_Ecs20140526::Client::modifyAutoSnapshotPolicyWithOptions(shared_ptr<ModifyAutoSnapshotPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyAutoSnapshotPolicyResponse(doRPCRequest(make_shared<string>("ModifyAutoSnapshotPolicy"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyAutoSnapshotPolicyResponse Alibabacloud_Ecs20140526::Client::modifyAutoSnapshotPolicy(shared_ptr<ModifyAutoSnapshotPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAutoSnapshotPolicyWithOptions(request, runtime);
}

ModifyAutoSnapshotPolicyExResponse Alibabacloud_Ecs20140526::Client::modifyAutoSnapshotPolicyExWithOptions(shared_ptr<ModifyAutoSnapshotPolicyExRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyAutoSnapshotPolicyExResponse(doRPCRequest(make_shared<string>("ModifyAutoSnapshotPolicyEx"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyAutoSnapshotPolicyExResponse Alibabacloud_Ecs20140526::Client::modifyAutoSnapshotPolicyEx(shared_ptr<ModifyAutoSnapshotPolicyExRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAutoSnapshotPolicyExWithOptions(request, runtime);
}

ModifyBandwidthPackageSpecResponse Alibabacloud_Ecs20140526::Client::modifyBandwidthPackageSpecWithOptions(shared_ptr<ModifyBandwidthPackageSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyBandwidthPackageSpecResponse(doRPCRequest(make_shared<string>("ModifyBandwidthPackageSpec"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyBandwidthPackageSpecResponse Alibabacloud_Ecs20140526::Client::modifyBandwidthPackageSpec(shared_ptr<ModifyBandwidthPackageSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyBandwidthPackageSpecWithOptions(request, runtime);
}

ModifyCapacityReservationResponse Alibabacloud_Ecs20140526::Client::modifyCapacityReservationWithOptions(shared_ptr<ModifyCapacityReservationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyCapacityReservationResponse(doRPCRequest(make_shared<string>("ModifyCapacityReservation"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyCapacityReservationResponse Alibabacloud_Ecs20140526::Client::modifyCapacityReservation(shared_ptr<ModifyCapacityReservationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyCapacityReservationWithOptions(request, runtime);
}

ModifyCommandResponse Alibabacloud_Ecs20140526::Client::modifyCommandWithOptions(shared_ptr<ModifyCommandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyCommandResponse(doRPCRequest(make_shared<string>("ModifyCommand"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyCommandResponse Alibabacloud_Ecs20140526::Client::modifyCommand(shared_ptr<ModifyCommandRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyCommandWithOptions(request, runtime);
}

ModifyDedicatedHostAttributeResponse Alibabacloud_Ecs20140526::Client::modifyDedicatedHostAttributeWithOptions(shared_ptr<ModifyDedicatedHostAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDedicatedHostAttributeResponse(doRPCRequest(make_shared<string>("ModifyDedicatedHostAttribute"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDedicatedHostAttributeResponse Alibabacloud_Ecs20140526::Client::modifyDedicatedHostAttribute(shared_ptr<ModifyDedicatedHostAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDedicatedHostAttributeWithOptions(request, runtime);
}

ModifyDedicatedHostAutoReleaseTimeResponse Alibabacloud_Ecs20140526::Client::modifyDedicatedHostAutoReleaseTimeWithOptions(shared_ptr<ModifyDedicatedHostAutoReleaseTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDedicatedHostAutoReleaseTimeResponse(doRPCRequest(make_shared<string>("ModifyDedicatedHostAutoReleaseTime"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDedicatedHostAutoReleaseTimeResponse Alibabacloud_Ecs20140526::Client::modifyDedicatedHostAutoReleaseTime(shared_ptr<ModifyDedicatedHostAutoReleaseTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDedicatedHostAutoReleaseTimeWithOptions(request, runtime);
}

ModifyDedicatedHostAutoRenewAttributeResponse Alibabacloud_Ecs20140526::Client::modifyDedicatedHostAutoRenewAttributeWithOptions(shared_ptr<ModifyDedicatedHostAutoRenewAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDedicatedHostAutoRenewAttributeResponse(doRPCRequest(make_shared<string>("ModifyDedicatedHostAutoRenewAttribute"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDedicatedHostAutoRenewAttributeResponse Alibabacloud_Ecs20140526::Client::modifyDedicatedHostAutoRenewAttribute(shared_ptr<ModifyDedicatedHostAutoRenewAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDedicatedHostAutoRenewAttributeWithOptions(request, runtime);
}

ModifyDedicatedHostClusterAttributeResponse Alibabacloud_Ecs20140526::Client::modifyDedicatedHostClusterAttributeWithOptions(shared_ptr<ModifyDedicatedHostClusterAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDedicatedHostClusterAttributeResponse(doRPCRequest(make_shared<string>("ModifyDedicatedHostClusterAttribute"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDedicatedHostClusterAttributeResponse Alibabacloud_Ecs20140526::Client::modifyDedicatedHostClusterAttribute(shared_ptr<ModifyDedicatedHostClusterAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDedicatedHostClusterAttributeWithOptions(request, runtime);
}

ModifyDedicatedHostsChargeTypeResponse Alibabacloud_Ecs20140526::Client::modifyDedicatedHostsChargeTypeWithOptions(shared_ptr<ModifyDedicatedHostsChargeTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDedicatedHostsChargeTypeResponse(doRPCRequest(make_shared<string>("ModifyDedicatedHostsChargeType"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDedicatedHostsChargeTypeResponse Alibabacloud_Ecs20140526::Client::modifyDedicatedHostsChargeType(shared_ptr<ModifyDedicatedHostsChargeTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDedicatedHostsChargeTypeWithOptions(request, runtime);
}

ModifyDemandResponse Alibabacloud_Ecs20140526::Client::modifyDemandWithOptions(shared_ptr<ModifyDemandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDemandResponse(doRPCRequest(make_shared<string>("ModifyDemand"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDemandResponse Alibabacloud_Ecs20140526::Client::modifyDemand(shared_ptr<ModifyDemandRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDemandWithOptions(request, runtime);
}

ModifyDeploymentSetAttributeResponse Alibabacloud_Ecs20140526::Client::modifyDeploymentSetAttributeWithOptions(shared_ptr<ModifyDeploymentSetAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDeploymentSetAttributeResponse(doRPCRequest(make_shared<string>("ModifyDeploymentSetAttribute"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDeploymentSetAttributeResponse Alibabacloud_Ecs20140526::Client::modifyDeploymentSetAttribute(shared_ptr<ModifyDeploymentSetAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDeploymentSetAttributeWithOptions(request, runtime);
}

ModifyDiskAttributeResponse Alibabacloud_Ecs20140526::Client::modifyDiskAttributeWithOptions(shared_ptr<ModifyDiskAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDiskAttributeResponse(doRPCRequest(make_shared<string>("ModifyDiskAttribute"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDiskAttributeResponse Alibabacloud_Ecs20140526::Client::modifyDiskAttribute(shared_ptr<ModifyDiskAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDiskAttributeWithOptions(request, runtime);
}

ModifyDiskChargeTypeResponse Alibabacloud_Ecs20140526::Client::modifyDiskChargeTypeWithOptions(shared_ptr<ModifyDiskChargeTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDiskChargeTypeResponse(doRPCRequest(make_shared<string>("ModifyDiskChargeType"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDiskChargeTypeResponse Alibabacloud_Ecs20140526::Client::modifyDiskChargeType(shared_ptr<ModifyDiskChargeTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDiskChargeTypeWithOptions(request, runtime);
}

ModifyDiskSpecResponse Alibabacloud_Ecs20140526::Client::modifyDiskSpecWithOptions(shared_ptr<ModifyDiskSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDiskSpecResponse(doRPCRequest(make_shared<string>("ModifyDiskSpec"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDiskSpecResponse Alibabacloud_Ecs20140526::Client::modifyDiskSpec(shared_ptr<ModifyDiskSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDiskSpecWithOptions(request, runtime);
}

ModifyEipAddressAttributeResponse Alibabacloud_Ecs20140526::Client::modifyEipAddressAttributeWithOptions(shared_ptr<ModifyEipAddressAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyEipAddressAttributeResponse(doRPCRequest(make_shared<string>("ModifyEipAddressAttribute"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyEipAddressAttributeResponse Alibabacloud_Ecs20140526::Client::modifyEipAddressAttribute(shared_ptr<ModifyEipAddressAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyEipAddressAttributeWithOptions(request, runtime);
}

ModifyElasticityAssuranceResponse Alibabacloud_Ecs20140526::Client::modifyElasticityAssuranceWithOptions(shared_ptr<ModifyElasticityAssuranceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyElasticityAssuranceResponse(doRPCRequest(make_shared<string>("ModifyElasticityAssurance"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyElasticityAssuranceResponse Alibabacloud_Ecs20140526::Client::modifyElasticityAssurance(shared_ptr<ModifyElasticityAssuranceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyElasticityAssuranceWithOptions(request, runtime);
}

ModifyForwardEntryResponse Alibabacloud_Ecs20140526::Client::modifyForwardEntryWithOptions(shared_ptr<ModifyForwardEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyForwardEntryResponse(doRPCRequest(make_shared<string>("ModifyForwardEntry"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyForwardEntryResponse Alibabacloud_Ecs20140526::Client::modifyForwardEntry(shared_ptr<ModifyForwardEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyForwardEntryWithOptions(request, runtime);
}

ModifyHaVipAttributeResponse Alibabacloud_Ecs20140526::Client::modifyHaVipAttributeWithOptions(shared_ptr<ModifyHaVipAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyHaVipAttributeResponse(doRPCRequest(make_shared<string>("ModifyHaVipAttribute"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyHaVipAttributeResponse Alibabacloud_Ecs20140526::Client::modifyHaVipAttribute(shared_ptr<ModifyHaVipAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyHaVipAttributeWithOptions(request, runtime);
}

ModifyHpcClusterAttributeResponse Alibabacloud_Ecs20140526::Client::modifyHpcClusterAttributeWithOptions(shared_ptr<ModifyHpcClusterAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyHpcClusterAttributeResponse(doRPCRequest(make_shared<string>("ModifyHpcClusterAttribute"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyHpcClusterAttributeResponse Alibabacloud_Ecs20140526::Client::modifyHpcClusterAttribute(shared_ptr<ModifyHpcClusterAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyHpcClusterAttributeWithOptions(request, runtime);
}

ModifyImageAttributeResponse Alibabacloud_Ecs20140526::Client::modifyImageAttributeWithOptions(shared_ptr<ModifyImageAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyImageAttributeResponse(doRPCRequest(make_shared<string>("ModifyImageAttribute"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyImageAttributeResponse Alibabacloud_Ecs20140526::Client::modifyImageAttribute(shared_ptr<ModifyImageAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyImageAttributeWithOptions(request, runtime);
}

ModifyImageShareGroupPermissionResponse Alibabacloud_Ecs20140526::Client::modifyImageShareGroupPermissionWithOptions(shared_ptr<ModifyImageShareGroupPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyImageShareGroupPermissionResponse(doRPCRequest(make_shared<string>("ModifyImageShareGroupPermission"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyImageShareGroupPermissionResponse Alibabacloud_Ecs20140526::Client::modifyImageShareGroupPermission(shared_ptr<ModifyImageShareGroupPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyImageShareGroupPermissionWithOptions(request, runtime);
}

ModifyImageSharePermissionResponse Alibabacloud_Ecs20140526::Client::modifyImageSharePermissionWithOptions(shared_ptr<ModifyImageSharePermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyImageSharePermissionResponse(doRPCRequest(make_shared<string>("ModifyImageSharePermission"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyImageSharePermissionResponse Alibabacloud_Ecs20140526::Client::modifyImageSharePermission(shared_ptr<ModifyImageSharePermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyImageSharePermissionWithOptions(request, runtime);
}

ModifyInstanceAttachmentAttributesResponse Alibabacloud_Ecs20140526::Client::modifyInstanceAttachmentAttributesWithOptions(shared_ptr<ModifyInstanceAttachmentAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceAttachmentAttributesResponse(doRPCRequest(make_shared<string>("ModifyInstanceAttachmentAttributes"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceAttachmentAttributesResponse Alibabacloud_Ecs20140526::Client::modifyInstanceAttachmentAttributes(shared_ptr<ModifyInstanceAttachmentAttributesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceAttachmentAttributesWithOptions(request, runtime);
}

ModifyInstanceAttributeResponse Alibabacloud_Ecs20140526::Client::modifyInstanceAttributeWithOptions(shared_ptr<ModifyInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceAttributeResponse(doRPCRequest(make_shared<string>("ModifyInstanceAttribute"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceAttributeResponse Alibabacloud_Ecs20140526::Client::modifyInstanceAttribute(shared_ptr<ModifyInstanceAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceAttributeWithOptions(request, runtime);
}

ModifyInstanceAutoReleaseTimeResponse Alibabacloud_Ecs20140526::Client::modifyInstanceAutoReleaseTimeWithOptions(shared_ptr<ModifyInstanceAutoReleaseTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceAutoReleaseTimeResponse(doRPCRequest(make_shared<string>("ModifyInstanceAutoReleaseTime"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceAutoReleaseTimeResponse Alibabacloud_Ecs20140526::Client::modifyInstanceAutoReleaseTime(shared_ptr<ModifyInstanceAutoReleaseTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceAutoReleaseTimeWithOptions(request, runtime);
}

ModifyInstanceAutoRenewAttributeResponse Alibabacloud_Ecs20140526::Client::modifyInstanceAutoRenewAttributeWithOptions(shared_ptr<ModifyInstanceAutoRenewAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceAutoRenewAttributeResponse(doRPCRequest(make_shared<string>("ModifyInstanceAutoRenewAttribute"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceAutoRenewAttributeResponse Alibabacloud_Ecs20140526::Client::modifyInstanceAutoRenewAttribute(shared_ptr<ModifyInstanceAutoRenewAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceAutoRenewAttributeWithOptions(request, runtime);
}

ModifyInstanceChargeTypeResponse Alibabacloud_Ecs20140526::Client::modifyInstanceChargeTypeWithOptions(shared_ptr<ModifyInstanceChargeTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceChargeTypeResponse(doRPCRequest(make_shared<string>("ModifyInstanceChargeType"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceChargeTypeResponse Alibabacloud_Ecs20140526::Client::modifyInstanceChargeType(shared_ptr<ModifyInstanceChargeTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceChargeTypeWithOptions(request, runtime);
}

ModifyInstanceDeploymentResponse Alibabacloud_Ecs20140526::Client::modifyInstanceDeploymentWithOptions(shared_ptr<ModifyInstanceDeploymentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceDeploymentResponse(doRPCRequest(make_shared<string>("ModifyInstanceDeployment"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceDeploymentResponse Alibabacloud_Ecs20140526::Client::modifyInstanceDeployment(shared_ptr<ModifyInstanceDeploymentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceDeploymentWithOptions(request, runtime);
}

ModifyInstanceMaintenanceAttributesResponse Alibabacloud_Ecs20140526::Client::modifyInstanceMaintenanceAttributesWithOptions(shared_ptr<ModifyInstanceMaintenanceAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceMaintenanceAttributesResponse(doRPCRequest(make_shared<string>("ModifyInstanceMaintenanceAttributes"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceMaintenanceAttributesResponse Alibabacloud_Ecs20140526::Client::modifyInstanceMaintenanceAttributes(shared_ptr<ModifyInstanceMaintenanceAttributesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceMaintenanceAttributesWithOptions(request, runtime);
}

ModifyInstanceMetadataOptionsResponse Alibabacloud_Ecs20140526::Client::modifyInstanceMetadataOptionsWithOptions(shared_ptr<ModifyInstanceMetadataOptionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceMetadataOptionsResponse(doRPCRequest(make_shared<string>("ModifyInstanceMetadataOptions"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceMetadataOptionsResponse Alibabacloud_Ecs20140526::Client::modifyInstanceMetadataOptions(shared_ptr<ModifyInstanceMetadataOptionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceMetadataOptionsWithOptions(request, runtime);
}

ModifyInstanceNetworkSpecResponse Alibabacloud_Ecs20140526::Client::modifyInstanceNetworkSpecWithOptions(shared_ptr<ModifyInstanceNetworkSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceNetworkSpecResponse(doRPCRequest(make_shared<string>("ModifyInstanceNetworkSpec"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceNetworkSpecResponse Alibabacloud_Ecs20140526::Client::modifyInstanceNetworkSpec(shared_ptr<ModifyInstanceNetworkSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceNetworkSpecWithOptions(request, runtime);
}

ModifyInstanceSpecResponse Alibabacloud_Ecs20140526::Client::modifyInstanceSpecWithOptions(shared_ptr<ModifyInstanceSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceSpecResponse(doRPCRequest(make_shared<string>("ModifyInstanceSpec"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceSpecResponse Alibabacloud_Ecs20140526::Client::modifyInstanceSpec(shared_ptr<ModifyInstanceSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceSpecWithOptions(request, runtime);
}

ModifyInstanceVncPasswdResponse Alibabacloud_Ecs20140526::Client::modifyInstanceVncPasswdWithOptions(shared_ptr<ModifyInstanceVncPasswdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceVncPasswdResponse(doRPCRequest(make_shared<string>("ModifyInstanceVncPasswd"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceVncPasswdResponse Alibabacloud_Ecs20140526::Client::modifyInstanceVncPasswd(shared_ptr<ModifyInstanceVncPasswdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceVncPasswdWithOptions(request, runtime);
}

ModifyInstanceVpcAttributeResponse Alibabacloud_Ecs20140526::Client::modifyInstanceVpcAttributeWithOptions(shared_ptr<ModifyInstanceVpcAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceVpcAttributeResponse(doRPCRequest(make_shared<string>("ModifyInstanceVpcAttribute"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceVpcAttributeResponse Alibabacloud_Ecs20140526::Client::modifyInstanceVpcAttribute(shared_ptr<ModifyInstanceVpcAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceVpcAttributeWithOptions(request, runtime);
}

ModifyLaunchTemplateDefaultVersionResponse Alibabacloud_Ecs20140526::Client::modifyLaunchTemplateDefaultVersionWithOptions(shared_ptr<ModifyLaunchTemplateDefaultVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyLaunchTemplateDefaultVersionResponse(doRPCRequest(make_shared<string>("ModifyLaunchTemplateDefaultVersion"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyLaunchTemplateDefaultVersionResponse Alibabacloud_Ecs20140526::Client::modifyLaunchTemplateDefaultVersion(shared_ptr<ModifyLaunchTemplateDefaultVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyLaunchTemplateDefaultVersionWithOptions(request, runtime);
}

ModifyManagedInstanceResponse Alibabacloud_Ecs20140526::Client::modifyManagedInstanceWithOptions(shared_ptr<ModifyManagedInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyManagedInstanceResponse(doRPCRequest(make_shared<string>("ModifyManagedInstance"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyManagedInstanceResponse Alibabacloud_Ecs20140526::Client::modifyManagedInstance(shared_ptr<ModifyManagedInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyManagedInstanceWithOptions(request, runtime);
}

ModifyNetworkInterfaceAttributeResponse Alibabacloud_Ecs20140526::Client::modifyNetworkInterfaceAttributeWithOptions(shared_ptr<ModifyNetworkInterfaceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyNetworkInterfaceAttributeResponse(doRPCRequest(make_shared<string>("ModifyNetworkInterfaceAttribute"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyNetworkInterfaceAttributeResponse Alibabacloud_Ecs20140526::Client::modifyNetworkInterfaceAttribute(shared_ptr<ModifyNetworkInterfaceAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyNetworkInterfaceAttributeWithOptions(request, runtime);
}

ModifyPhysicalConnectionAttributeResponse Alibabacloud_Ecs20140526::Client::modifyPhysicalConnectionAttributeWithOptions(shared_ptr<ModifyPhysicalConnectionAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyPhysicalConnectionAttributeResponse(doRPCRequest(make_shared<string>("ModifyPhysicalConnectionAttribute"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyPhysicalConnectionAttributeResponse Alibabacloud_Ecs20140526::Client::modifyPhysicalConnectionAttribute(shared_ptr<ModifyPhysicalConnectionAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyPhysicalConnectionAttributeWithOptions(request, runtime);
}

ModifyPrefixListResponse Alibabacloud_Ecs20140526::Client::modifyPrefixListWithOptions(shared_ptr<ModifyPrefixListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyPrefixListResponse(doRPCRequest(make_shared<string>("ModifyPrefixList"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyPrefixListResponse Alibabacloud_Ecs20140526::Client::modifyPrefixList(shared_ptr<ModifyPrefixListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyPrefixListWithOptions(request, runtime);
}

ModifyPrepayInstanceSpecResponse Alibabacloud_Ecs20140526::Client::modifyPrepayInstanceSpecWithOptions(shared_ptr<ModifyPrepayInstanceSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyPrepayInstanceSpecResponse(doRPCRequest(make_shared<string>("ModifyPrepayInstanceSpec"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyPrepayInstanceSpecResponse Alibabacloud_Ecs20140526::Client::modifyPrepayInstanceSpec(shared_ptr<ModifyPrepayInstanceSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyPrepayInstanceSpecWithOptions(request, runtime);
}

ModifyReservedInstanceAttributeResponse Alibabacloud_Ecs20140526::Client::modifyReservedInstanceAttributeWithOptions(shared_ptr<ModifyReservedInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyReservedInstanceAttributeResponse(doRPCRequest(make_shared<string>("ModifyReservedInstanceAttribute"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyReservedInstanceAttributeResponse Alibabacloud_Ecs20140526::Client::modifyReservedInstanceAttribute(shared_ptr<ModifyReservedInstanceAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyReservedInstanceAttributeWithOptions(request, runtime);
}

ModifyReservedInstancesResponse Alibabacloud_Ecs20140526::Client::modifyReservedInstancesWithOptions(shared_ptr<ModifyReservedInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyReservedInstancesResponse(doRPCRequest(make_shared<string>("ModifyReservedInstances"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyReservedInstancesResponse Alibabacloud_Ecs20140526::Client::modifyReservedInstances(shared_ptr<ModifyReservedInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyReservedInstancesWithOptions(request, runtime);
}

ModifyRouterInterfaceAttributeResponse Alibabacloud_Ecs20140526::Client::modifyRouterInterfaceAttributeWithOptions(shared_ptr<ModifyRouterInterfaceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyRouterInterfaceAttributeResponse(doRPCRequest(make_shared<string>("ModifyRouterInterfaceAttribute"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyRouterInterfaceAttributeResponse Alibabacloud_Ecs20140526::Client::modifyRouterInterfaceAttribute(shared_ptr<ModifyRouterInterfaceAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyRouterInterfaceAttributeWithOptions(request, runtime);
}

ModifyRouterInterfaceSpecResponse Alibabacloud_Ecs20140526::Client::modifyRouterInterfaceSpecWithOptions(shared_ptr<ModifyRouterInterfaceSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyRouterInterfaceSpecResponse(doRPCRequest(make_shared<string>("ModifyRouterInterfaceSpec"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyRouterInterfaceSpecResponse Alibabacloud_Ecs20140526::Client::modifyRouterInterfaceSpec(shared_ptr<ModifyRouterInterfaceSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyRouterInterfaceSpecWithOptions(request, runtime);
}

ModifySecurityGroupAttributeResponse Alibabacloud_Ecs20140526::Client::modifySecurityGroupAttributeWithOptions(shared_ptr<ModifySecurityGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySecurityGroupAttributeResponse(doRPCRequest(make_shared<string>("ModifySecurityGroupAttribute"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySecurityGroupAttributeResponse Alibabacloud_Ecs20140526::Client::modifySecurityGroupAttribute(shared_ptr<ModifySecurityGroupAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySecurityGroupAttributeWithOptions(request, runtime);
}

ModifySecurityGroupEgressRuleResponse Alibabacloud_Ecs20140526::Client::modifySecurityGroupEgressRuleWithOptions(shared_ptr<ModifySecurityGroupEgressRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySecurityGroupEgressRuleResponse(doRPCRequest(make_shared<string>("ModifySecurityGroupEgressRule"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySecurityGroupEgressRuleResponse Alibabacloud_Ecs20140526::Client::modifySecurityGroupEgressRule(shared_ptr<ModifySecurityGroupEgressRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySecurityGroupEgressRuleWithOptions(request, runtime);
}

ModifySecurityGroupPolicyResponse Alibabacloud_Ecs20140526::Client::modifySecurityGroupPolicyWithOptions(shared_ptr<ModifySecurityGroupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySecurityGroupPolicyResponse(doRPCRequest(make_shared<string>("ModifySecurityGroupPolicy"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySecurityGroupPolicyResponse Alibabacloud_Ecs20140526::Client::modifySecurityGroupPolicy(shared_ptr<ModifySecurityGroupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySecurityGroupPolicyWithOptions(request, runtime);
}

ModifySecurityGroupRuleResponse Alibabacloud_Ecs20140526::Client::modifySecurityGroupRuleWithOptions(shared_ptr<ModifySecurityGroupRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySecurityGroupRuleResponse(doRPCRequest(make_shared<string>("ModifySecurityGroupRule"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySecurityGroupRuleResponse Alibabacloud_Ecs20140526::Client::modifySecurityGroupRule(shared_ptr<ModifySecurityGroupRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySecurityGroupRuleWithOptions(request, runtime);
}

ModifySnapshotAttributeResponse Alibabacloud_Ecs20140526::Client::modifySnapshotAttributeWithOptions(shared_ptr<ModifySnapshotAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySnapshotAttributeResponse(doRPCRequest(make_shared<string>("ModifySnapshotAttribute"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySnapshotAttributeResponse Alibabacloud_Ecs20140526::Client::modifySnapshotAttribute(shared_ptr<ModifySnapshotAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySnapshotAttributeWithOptions(request, runtime);
}

ModifySnapshotGroupResponse Alibabacloud_Ecs20140526::Client::modifySnapshotGroupWithOptions(shared_ptr<ModifySnapshotGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySnapshotGroupResponse(doRPCRequest(make_shared<string>("ModifySnapshotGroup"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySnapshotGroupResponse Alibabacloud_Ecs20140526::Client::modifySnapshotGroup(shared_ptr<ModifySnapshotGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySnapshotGroupWithOptions(request, runtime);
}

ModifyStorageCapacityUnitAttributeResponse Alibabacloud_Ecs20140526::Client::modifyStorageCapacityUnitAttributeWithOptions(shared_ptr<ModifyStorageCapacityUnitAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyStorageCapacityUnitAttributeResponse(doRPCRequest(make_shared<string>("ModifyStorageCapacityUnitAttribute"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyStorageCapacityUnitAttributeResponse Alibabacloud_Ecs20140526::Client::modifyStorageCapacityUnitAttribute(shared_ptr<ModifyStorageCapacityUnitAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyStorageCapacityUnitAttributeWithOptions(request, runtime);
}

ModifyStorageSetAttributeResponse Alibabacloud_Ecs20140526::Client::modifyStorageSetAttributeWithOptions(shared_ptr<ModifyStorageSetAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyStorageSetAttributeResponse(doRPCRequest(make_shared<string>("ModifyStorageSetAttribute"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyStorageSetAttributeResponse Alibabacloud_Ecs20140526::Client::modifyStorageSetAttribute(shared_ptr<ModifyStorageSetAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyStorageSetAttributeWithOptions(request, runtime);
}

ModifyUserBusinessBehaviorResponse Alibabacloud_Ecs20140526::Client::modifyUserBusinessBehaviorWithOptions(shared_ptr<ModifyUserBusinessBehaviorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyUserBusinessBehaviorResponse(doRPCRequest(make_shared<string>("ModifyUserBusinessBehavior"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyUserBusinessBehaviorResponse Alibabacloud_Ecs20140526::Client::modifyUserBusinessBehavior(shared_ptr<ModifyUserBusinessBehaviorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyUserBusinessBehaviorWithOptions(request, runtime);
}

ModifyVirtualBorderRouterAttributeResponse Alibabacloud_Ecs20140526::Client::modifyVirtualBorderRouterAttributeWithOptions(shared_ptr<ModifyVirtualBorderRouterAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyVirtualBorderRouterAttributeResponse(doRPCRequest(make_shared<string>("ModifyVirtualBorderRouterAttribute"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyVirtualBorderRouterAttributeResponse Alibabacloud_Ecs20140526::Client::modifyVirtualBorderRouterAttribute(shared_ptr<ModifyVirtualBorderRouterAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyVirtualBorderRouterAttributeWithOptions(request, runtime);
}

ModifyVpcAttributeResponse Alibabacloud_Ecs20140526::Client::modifyVpcAttributeWithOptions(shared_ptr<ModifyVpcAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyVpcAttributeResponse(doRPCRequest(make_shared<string>("ModifyVpcAttribute"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyVpcAttributeResponse Alibabacloud_Ecs20140526::Client::modifyVpcAttribute(shared_ptr<ModifyVpcAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyVpcAttributeWithOptions(request, runtime);
}

ModifyVRouterAttributeResponse Alibabacloud_Ecs20140526::Client::modifyVRouterAttributeWithOptions(shared_ptr<ModifyVRouterAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyVRouterAttributeResponse(doRPCRequest(make_shared<string>("ModifyVRouterAttribute"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyVRouterAttributeResponse Alibabacloud_Ecs20140526::Client::modifyVRouterAttribute(shared_ptr<ModifyVRouterAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyVRouterAttributeWithOptions(request, runtime);
}

ModifyVSwitchAttributeResponse Alibabacloud_Ecs20140526::Client::modifyVSwitchAttributeWithOptions(shared_ptr<ModifyVSwitchAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyVSwitchAttributeResponse(doRPCRequest(make_shared<string>("ModifyVSwitchAttribute"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyVSwitchAttributeResponse Alibabacloud_Ecs20140526::Client::modifyVSwitchAttribute(shared_ptr<ModifyVSwitchAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyVSwitchAttributeWithOptions(request, runtime);
}

PurchaseReservedInstancesOfferingResponse Alibabacloud_Ecs20140526::Client::purchaseReservedInstancesOfferingWithOptions(shared_ptr<PurchaseReservedInstancesOfferingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PurchaseReservedInstancesOfferingResponse(doRPCRequest(make_shared<string>("PurchaseReservedInstancesOffering"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PurchaseReservedInstancesOfferingResponse Alibabacloud_Ecs20140526::Client::purchaseReservedInstancesOffering(shared_ptr<PurchaseReservedInstancesOfferingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return purchaseReservedInstancesOfferingWithOptions(request, runtime);
}

PurchaseStorageCapacityUnitResponse Alibabacloud_Ecs20140526::Client::purchaseStorageCapacityUnitWithOptions(shared_ptr<PurchaseStorageCapacityUnitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PurchaseStorageCapacityUnitResponse(doRPCRequest(make_shared<string>("PurchaseStorageCapacityUnit"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PurchaseStorageCapacityUnitResponse Alibabacloud_Ecs20140526::Client::purchaseStorageCapacityUnit(shared_ptr<PurchaseStorageCapacityUnitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return purchaseStorageCapacityUnitWithOptions(request, runtime);
}

ReActivateInstancesResponse Alibabacloud_Ecs20140526::Client::reActivateInstancesWithOptions(shared_ptr<ReActivateInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReActivateInstancesResponse(doRPCRequest(make_shared<string>("ReActivateInstances"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReActivateInstancesResponse Alibabacloud_Ecs20140526::Client::reActivateInstances(shared_ptr<ReActivateInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reActivateInstancesWithOptions(request, runtime);
}

RebootInstanceResponse Alibabacloud_Ecs20140526::Client::rebootInstanceWithOptions(shared_ptr<RebootInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RebootInstanceResponse(doRPCRequest(make_shared<string>("RebootInstance"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RebootInstanceResponse Alibabacloud_Ecs20140526::Client::rebootInstance(shared_ptr<RebootInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rebootInstanceWithOptions(request, runtime);
}

RebootInstancesResponse Alibabacloud_Ecs20140526::Client::rebootInstancesWithOptions(shared_ptr<RebootInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RebootInstancesResponse(doRPCRequest(make_shared<string>("RebootInstances"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RebootInstancesResponse Alibabacloud_Ecs20140526::Client::rebootInstances(shared_ptr<RebootInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rebootInstancesWithOptions(request, runtime);
}

RecoverVirtualBorderRouterResponse Alibabacloud_Ecs20140526::Client::recoverVirtualBorderRouterWithOptions(shared_ptr<RecoverVirtualBorderRouterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RecoverVirtualBorderRouterResponse(doRPCRequest(make_shared<string>("RecoverVirtualBorderRouter"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecoverVirtualBorderRouterResponse Alibabacloud_Ecs20140526::Client::recoverVirtualBorderRouter(shared_ptr<RecoverVirtualBorderRouterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recoverVirtualBorderRouterWithOptions(request, runtime);
}

RedeployDedicatedHostResponse Alibabacloud_Ecs20140526::Client::redeployDedicatedHostWithOptions(shared_ptr<RedeployDedicatedHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RedeployDedicatedHostResponse(doRPCRequest(make_shared<string>("RedeployDedicatedHost"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RedeployDedicatedHostResponse Alibabacloud_Ecs20140526::Client::redeployDedicatedHost(shared_ptr<RedeployDedicatedHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return redeployDedicatedHostWithOptions(request, runtime);
}

RedeployInstanceResponse Alibabacloud_Ecs20140526::Client::redeployInstanceWithOptions(shared_ptr<RedeployInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RedeployInstanceResponse(doRPCRequest(make_shared<string>("RedeployInstance"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RedeployInstanceResponse Alibabacloud_Ecs20140526::Client::redeployInstance(shared_ptr<RedeployInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return redeployInstanceWithOptions(request, runtime);
}

ReInitDiskResponse Alibabacloud_Ecs20140526::Client::reInitDiskWithOptions(shared_ptr<ReInitDiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReInitDiskResponse(doRPCRequest(make_shared<string>("ReInitDisk"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReInitDiskResponse Alibabacloud_Ecs20140526::Client::reInitDisk(shared_ptr<ReInitDiskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reInitDiskWithOptions(request, runtime);
}

ReleaseCapacityReservationResponse Alibabacloud_Ecs20140526::Client::releaseCapacityReservationWithOptions(shared_ptr<ReleaseCapacityReservationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReleaseCapacityReservationResponse(doRPCRequest(make_shared<string>("ReleaseCapacityReservation"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReleaseCapacityReservationResponse Alibabacloud_Ecs20140526::Client::releaseCapacityReservation(shared_ptr<ReleaseCapacityReservationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseCapacityReservationWithOptions(request, runtime);
}

ReleaseDedicatedHostResponse Alibabacloud_Ecs20140526::Client::releaseDedicatedHostWithOptions(shared_ptr<ReleaseDedicatedHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReleaseDedicatedHostResponse(doRPCRequest(make_shared<string>("ReleaseDedicatedHost"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReleaseDedicatedHostResponse Alibabacloud_Ecs20140526::Client::releaseDedicatedHost(shared_ptr<ReleaseDedicatedHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseDedicatedHostWithOptions(request, runtime);
}

ReleaseEipAddressResponse Alibabacloud_Ecs20140526::Client::releaseEipAddressWithOptions(shared_ptr<ReleaseEipAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReleaseEipAddressResponse(doRPCRequest(make_shared<string>("ReleaseEipAddress"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReleaseEipAddressResponse Alibabacloud_Ecs20140526::Client::releaseEipAddress(shared_ptr<ReleaseEipAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseEipAddressWithOptions(request, runtime);
}

ReleasePublicIpAddressResponse Alibabacloud_Ecs20140526::Client::releasePublicIpAddressWithOptions(shared_ptr<ReleasePublicIpAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReleasePublicIpAddressResponse(doRPCRequest(make_shared<string>("ReleasePublicIpAddress"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReleasePublicIpAddressResponse Alibabacloud_Ecs20140526::Client::releasePublicIpAddress(shared_ptr<ReleasePublicIpAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releasePublicIpAddressWithOptions(request, runtime);
}

RemoveBandwidthPackageIpsResponse Alibabacloud_Ecs20140526::Client::removeBandwidthPackageIpsWithOptions(shared_ptr<RemoveBandwidthPackageIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveBandwidthPackageIpsResponse(doRPCRequest(make_shared<string>("RemoveBandwidthPackageIps"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveBandwidthPackageIpsResponse Alibabacloud_Ecs20140526::Client::removeBandwidthPackageIps(shared_ptr<RemoveBandwidthPackageIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeBandwidthPackageIpsWithOptions(request, runtime);
}

RemoveTagsResponse Alibabacloud_Ecs20140526::Client::removeTagsWithOptions(shared_ptr<RemoveTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveTagsResponse(doRPCRequest(make_shared<string>("RemoveTags"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveTagsResponse Alibabacloud_Ecs20140526::Client::removeTags(shared_ptr<RemoveTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeTagsWithOptions(request, runtime);
}

RenewDedicatedHostsResponse Alibabacloud_Ecs20140526::Client::renewDedicatedHostsWithOptions(shared_ptr<RenewDedicatedHostsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RenewDedicatedHostsResponse(doRPCRequest(make_shared<string>("RenewDedicatedHosts"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RenewDedicatedHostsResponse Alibabacloud_Ecs20140526::Client::renewDedicatedHosts(shared_ptr<RenewDedicatedHostsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renewDedicatedHostsWithOptions(request, runtime);
}

RenewInstanceResponse Alibabacloud_Ecs20140526::Client::renewInstanceWithOptions(shared_ptr<RenewInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RenewInstanceResponse(doRPCRequest(make_shared<string>("RenewInstance"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RenewInstanceResponse Alibabacloud_Ecs20140526::Client::renewInstance(shared_ptr<RenewInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renewInstanceWithOptions(request, runtime);
}

ReplaceSystemDiskResponse Alibabacloud_Ecs20140526::Client::replaceSystemDiskWithOptions(shared_ptr<ReplaceSystemDiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReplaceSystemDiskResponse(doRPCRequest(make_shared<string>("ReplaceSystemDisk"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReplaceSystemDiskResponse Alibabacloud_Ecs20140526::Client::replaceSystemDisk(shared_ptr<ReplaceSystemDiskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return replaceSystemDiskWithOptions(request, runtime);
}

ReportInstancesStatusResponse Alibabacloud_Ecs20140526::Client::reportInstancesStatusWithOptions(shared_ptr<ReportInstancesStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReportInstancesStatusResponse(doRPCRequest(make_shared<string>("ReportInstancesStatus"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReportInstancesStatusResponse Alibabacloud_Ecs20140526::Client::reportInstancesStatus(shared_ptr<ReportInstancesStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reportInstancesStatusWithOptions(request, runtime);
}

ResetDiskResponse Alibabacloud_Ecs20140526::Client::resetDiskWithOptions(shared_ptr<ResetDiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResetDiskResponse(doRPCRequest(make_shared<string>("ResetDisk"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResetDiskResponse Alibabacloud_Ecs20140526::Client::resetDisk(shared_ptr<ResetDiskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetDiskWithOptions(request, runtime);
}

ResetDisksResponse Alibabacloud_Ecs20140526::Client::resetDisksWithOptions(shared_ptr<ResetDisksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResetDisksResponse(doRPCRequest(make_shared<string>("ResetDisks"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResetDisksResponse Alibabacloud_Ecs20140526::Client::resetDisks(shared_ptr<ResetDisksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetDisksWithOptions(request, runtime);
}

ResizeDiskResponse Alibabacloud_Ecs20140526::Client::resizeDiskWithOptions(shared_ptr<ResizeDiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResizeDiskResponse(doRPCRequest(make_shared<string>("ResizeDisk"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResizeDiskResponse Alibabacloud_Ecs20140526::Client::resizeDisk(shared_ptr<ResizeDiskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resizeDiskWithOptions(request, runtime);
}

RevokeSecurityGroupResponse Alibabacloud_Ecs20140526::Client::revokeSecurityGroupWithOptions(shared_ptr<RevokeSecurityGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RevokeSecurityGroupResponse(doRPCRequest(make_shared<string>("RevokeSecurityGroup"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RevokeSecurityGroupResponse Alibabacloud_Ecs20140526::Client::revokeSecurityGroup(shared_ptr<RevokeSecurityGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeSecurityGroupWithOptions(request, runtime);
}

RevokeSecurityGroupEgressResponse Alibabacloud_Ecs20140526::Client::revokeSecurityGroupEgressWithOptions(shared_ptr<RevokeSecurityGroupEgressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RevokeSecurityGroupEgressResponse(doRPCRequest(make_shared<string>("RevokeSecurityGroupEgress"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RevokeSecurityGroupEgressResponse Alibabacloud_Ecs20140526::Client::revokeSecurityGroupEgress(shared_ptr<RevokeSecurityGroupEgressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeSecurityGroupEgressWithOptions(request, runtime);
}

RunCommandResponse Alibabacloud_Ecs20140526::Client::runCommandWithOptions(shared_ptr<RunCommandRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RunCommandShrinkRequest> request = make_shared<RunCommandShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->parameters)) {
    request->parametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->parameters, make_shared<string>("Parameters"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RunCommandResponse(doRPCRequest(make_shared<string>("RunCommand"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RunCommandResponse Alibabacloud_Ecs20140526::Client::runCommand(shared_ptr<RunCommandRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runCommandWithOptions(request, runtime);
}

RunInstancesResponse Alibabacloud_Ecs20140526::Client::runInstancesWithOptions(shared_ptr<RunInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RunInstancesResponse(doRPCRequest(make_shared<string>("RunInstances"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RunInstancesResponse Alibabacloud_Ecs20140526::Client::runInstances(shared_ptr<RunInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runInstancesWithOptions(request, runtime);
}

SendFileResponse Alibabacloud_Ecs20140526::Client::sendFileWithOptions(shared_ptr<SendFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SendFileResponse(doRPCRequest(make_shared<string>("SendFile"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SendFileResponse Alibabacloud_Ecs20140526::Client::sendFile(shared_ptr<SendFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendFileWithOptions(request, runtime);
}

StartDiskReplicaPairResponse Alibabacloud_Ecs20140526::Client::startDiskReplicaPairWithOptions(shared_ptr<StartDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartDiskReplicaPairResponse(doRPCRequest(make_shared<string>("StartDiskReplicaPair"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartDiskReplicaPairResponse Alibabacloud_Ecs20140526::Client::startDiskReplicaPair(shared_ptr<StartDiskReplicaPairRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startDiskReplicaPairWithOptions(request, runtime);
}

StartElasticityAssuranceResponse Alibabacloud_Ecs20140526::Client::startElasticityAssuranceWithOptions(shared_ptr<StartElasticityAssuranceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartElasticityAssuranceResponse(doRPCRequest(make_shared<string>("StartElasticityAssurance"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartElasticityAssuranceResponse Alibabacloud_Ecs20140526::Client::startElasticityAssurance(shared_ptr<StartElasticityAssuranceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startElasticityAssuranceWithOptions(request, runtime);
}

StartImagePipelineExecutionResponse Alibabacloud_Ecs20140526::Client::startImagePipelineExecutionWithOptions(shared_ptr<StartImagePipelineExecutionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartImagePipelineExecutionResponse(doRPCRequest(make_shared<string>("StartImagePipelineExecution"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartImagePipelineExecutionResponse Alibabacloud_Ecs20140526::Client::startImagePipelineExecution(shared_ptr<StartImagePipelineExecutionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startImagePipelineExecutionWithOptions(request, runtime);
}

StartInstanceResponse Alibabacloud_Ecs20140526::Client::startInstanceWithOptions(shared_ptr<StartInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartInstanceResponse(doRPCRequest(make_shared<string>("StartInstance"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartInstanceResponse Alibabacloud_Ecs20140526::Client::startInstance(shared_ptr<StartInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startInstanceWithOptions(request, runtime);
}

StartInstancesResponse Alibabacloud_Ecs20140526::Client::startInstancesWithOptions(shared_ptr<StartInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartInstancesResponse(doRPCRequest(make_shared<string>("StartInstances"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartInstancesResponse Alibabacloud_Ecs20140526::Client::startInstances(shared_ptr<StartInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startInstancesWithOptions(request, runtime);
}

StartTerminalSessionResponse Alibabacloud_Ecs20140526::Client::startTerminalSessionWithOptions(shared_ptr<StartTerminalSessionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartTerminalSessionResponse(doRPCRequest(make_shared<string>("StartTerminalSession"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartTerminalSessionResponse Alibabacloud_Ecs20140526::Client::startTerminalSession(shared_ptr<StartTerminalSessionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startTerminalSessionWithOptions(request, runtime);
}

StopDiskReplicaPairResponse Alibabacloud_Ecs20140526::Client::stopDiskReplicaPairWithOptions(shared_ptr<StopDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopDiskReplicaPairResponse(doRPCRequest(make_shared<string>("StopDiskReplicaPair"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopDiskReplicaPairResponse Alibabacloud_Ecs20140526::Client::stopDiskReplicaPair(shared_ptr<StopDiskReplicaPairRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopDiskReplicaPairWithOptions(request, runtime);
}

StopInstanceResponse Alibabacloud_Ecs20140526::Client::stopInstanceWithOptions(shared_ptr<StopInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopInstanceResponse(doRPCRequest(make_shared<string>("StopInstance"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopInstanceResponse Alibabacloud_Ecs20140526::Client::stopInstance(shared_ptr<StopInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopInstanceWithOptions(request, runtime);
}

StopInstancesResponse Alibabacloud_Ecs20140526::Client::stopInstancesWithOptions(shared_ptr<StopInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopInstancesResponse(doRPCRequest(make_shared<string>("StopInstances"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopInstancesResponse Alibabacloud_Ecs20140526::Client::stopInstances(shared_ptr<StopInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopInstancesWithOptions(request, runtime);
}

StopInvocationResponse Alibabacloud_Ecs20140526::Client::stopInvocationWithOptions(shared_ptr<StopInvocationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopInvocationResponse(doRPCRequest(make_shared<string>("StopInvocation"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopInvocationResponse Alibabacloud_Ecs20140526::Client::stopInvocation(shared_ptr<StopInvocationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopInvocationWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Ecs20140526::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TagResourcesResponse(doRPCRequest(make_shared<string>("TagResources"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TagResourcesResponse Alibabacloud_Ecs20140526::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

TerminatePhysicalConnectionResponse Alibabacloud_Ecs20140526::Client::terminatePhysicalConnectionWithOptions(shared_ptr<TerminatePhysicalConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TerminatePhysicalConnectionResponse(doRPCRequest(make_shared<string>("TerminatePhysicalConnection"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TerminatePhysicalConnectionResponse Alibabacloud_Ecs20140526::Client::terminatePhysicalConnection(shared_ptr<TerminatePhysicalConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return terminatePhysicalConnectionWithOptions(request, runtime);
}

TerminateVirtualBorderRouterResponse Alibabacloud_Ecs20140526::Client::terminateVirtualBorderRouterWithOptions(shared_ptr<TerminateVirtualBorderRouterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TerminateVirtualBorderRouterResponse(doRPCRequest(make_shared<string>("TerminateVirtualBorderRouter"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TerminateVirtualBorderRouterResponse Alibabacloud_Ecs20140526::Client::terminateVirtualBorderRouter(shared_ptr<TerminateVirtualBorderRouterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return terminateVirtualBorderRouterWithOptions(request, runtime);
}

UnassignIpv6AddressesResponse Alibabacloud_Ecs20140526::Client::unassignIpv6AddressesWithOptions(shared_ptr<UnassignIpv6AddressesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnassignIpv6AddressesResponse(doRPCRequest(make_shared<string>("UnassignIpv6Addresses"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnassignIpv6AddressesResponse Alibabacloud_Ecs20140526::Client::unassignIpv6Addresses(shared_ptr<UnassignIpv6AddressesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unassignIpv6AddressesWithOptions(request, runtime);
}

UnassignPrivateIpAddressesResponse Alibabacloud_Ecs20140526::Client::unassignPrivateIpAddressesWithOptions(shared_ptr<UnassignPrivateIpAddressesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnassignPrivateIpAddressesResponse(doRPCRequest(make_shared<string>("UnassignPrivateIpAddresses"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnassignPrivateIpAddressesResponse Alibabacloud_Ecs20140526::Client::unassignPrivateIpAddresses(shared_ptr<UnassignPrivateIpAddressesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unassignPrivateIpAddressesWithOptions(request, runtime);
}

UnassociateEipAddressResponse Alibabacloud_Ecs20140526::Client::unassociateEipAddressWithOptions(shared_ptr<UnassociateEipAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnassociateEipAddressResponse(doRPCRequest(make_shared<string>("UnassociateEipAddress"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnassociateEipAddressResponse Alibabacloud_Ecs20140526::Client::unassociateEipAddress(shared_ptr<UnassociateEipAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unassociateEipAddressWithOptions(request, runtime);
}

UnassociateHaVipResponse Alibabacloud_Ecs20140526::Client::unassociateHaVipWithOptions(shared_ptr<UnassociateHaVipRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnassociateHaVipResponse(doRPCRequest(make_shared<string>("UnassociateHaVip"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnassociateHaVipResponse Alibabacloud_Ecs20140526::Client::unassociateHaVip(shared_ptr<UnassociateHaVipRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unassociateHaVipWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Ecs20140526::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UntagResourcesResponse(doRPCRequest(make_shared<string>("UntagResources"), make_shared<string>("2014-05-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UntagResourcesResponse Alibabacloud_Ecs20140526::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

