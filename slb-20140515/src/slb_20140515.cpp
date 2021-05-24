// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/slb_20140515.hpp>
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

using namespace Alibabacloud_Slb20140515;

Alibabacloud_Slb20140515::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-qingdao", "slb.aliyuncs.com"},
    {"cn-beijing", "slb.aliyuncs.com"},
    {"cn-hangzhou", "slb.aliyuncs.com"},
    {"cn-shanghai", "slb.aliyuncs.com"},
    {"cn-shenzhen", "slb.aliyuncs.com"},
    {"cn-hongkong", "slb.aliyuncs.com"},
    {"ap-southeast-1", "slb.aliyuncs.com"},
    {"us-west-1", "slb.aliyuncs.com"},
    {"us-east-1", "slb.aliyuncs.com"},
    {"cn-shanghai-finance-1", "slb.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "slb.aliyuncs.com"},
    {"cn-north-2-gov-1", "slb.aliyuncs.com"},
    {"ap-northeast-2-pop", "slb.aliyuncs.com"},
    {"cn-beijing-finance-1", "slb.aliyuncs.com"},
    {"cn-beijing-finance-pop", "slb.aliyuncs.com"},
    {"cn-beijing-gov-1", "slb.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "slb.aliyuncs.com"},
    {"cn-edge-1", "slb.aliyuncs.com"},
    {"cn-fujian", "slb.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "slb.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "slb.aliyuncs.com"},
    {"cn-hangzhou-finance", "slb.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "slb.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "slb.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "slb.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "slb.aliyuncs.com"},
    {"cn-hangzhou-test-306", "slb.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "slb.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "slb-api.cn-qingdao-nebula.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "slb.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "slb.aliyuncs.com"},
    {"cn-shanghai-inner", "slb.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "slb.aliyuncs.com"},
    {"cn-shenzhen-inner", "slb.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "slb.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "slb.aliyuncs.com"},
    {"cn-wuhan", "slb.aliyuncs.com"},
    {"cn-yushanfang", "slb.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "slb.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "slb.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "slb.aliyuncs.com"},
    {"eu-west-1-oxs", "slb.aliyuncs.com"},
    {"rus-west-1-pop", "slb.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("slb"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Slb20140515::Client::getEndpoint(shared_ptr<string> productId,
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

AddAccessControlListEntryResponse Alibabacloud_Slb20140515::Client::addAccessControlListEntryWithOptions(shared_ptr<AddAccessControlListEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddAccessControlListEntryResponse(doRPCRequest(make_shared<string>("AddAccessControlListEntry"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddAccessControlListEntryResponse Alibabacloud_Slb20140515::Client::addAccessControlListEntry(shared_ptr<AddAccessControlListEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addAccessControlListEntryWithOptions(request, runtime);
}

AddBackendServersResponse Alibabacloud_Slb20140515::Client::addBackendServersWithOptions(shared_ptr<AddBackendServersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddBackendServersResponse(doRPCRequest(make_shared<string>("AddBackendServers"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddBackendServersResponse Alibabacloud_Slb20140515::Client::addBackendServers(shared_ptr<AddBackendServersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addBackendServersWithOptions(request, runtime);
}

AddListenerWhiteListItemResponse Alibabacloud_Slb20140515::Client::addListenerWhiteListItemWithOptions(shared_ptr<AddListenerWhiteListItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddListenerWhiteListItemResponse(doRPCRequest(make_shared<string>("AddListenerWhiteListItem"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddListenerWhiteListItemResponse Alibabacloud_Slb20140515::Client::addListenerWhiteListItem(shared_ptr<AddListenerWhiteListItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addListenerWhiteListItemWithOptions(request, runtime);
}

AddTagsResponse Alibabacloud_Slb20140515::Client::addTagsWithOptions(shared_ptr<AddTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddTagsResponse(doRPCRequest(make_shared<string>("AddTags"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddTagsResponse Alibabacloud_Slb20140515::Client::addTags(shared_ptr<AddTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addTagsWithOptions(request, runtime);
}

AddVServerGroupBackendServersResponse Alibabacloud_Slb20140515::Client::addVServerGroupBackendServersWithOptions(shared_ptr<AddVServerGroupBackendServersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddVServerGroupBackendServersResponse(doRPCRequest(make_shared<string>("AddVServerGroupBackendServers"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddVServerGroupBackendServersResponse Alibabacloud_Slb20140515::Client::addVServerGroupBackendServers(shared_ptr<AddVServerGroupBackendServersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addVServerGroupBackendServersWithOptions(request, runtime);
}

CreateAccessControlListResponse Alibabacloud_Slb20140515::Client::createAccessControlListWithOptions(shared_ptr<CreateAccessControlListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAccessControlListResponse(doRPCRequest(make_shared<string>("CreateAccessControlList"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAccessControlListResponse Alibabacloud_Slb20140515::Client::createAccessControlList(shared_ptr<CreateAccessControlListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAccessControlListWithOptions(request, runtime);
}

CreateDomainExtensionResponse Alibabacloud_Slb20140515::Client::createDomainExtensionWithOptions(shared_ptr<CreateDomainExtensionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDomainExtensionResponse(doRPCRequest(make_shared<string>("CreateDomainExtension"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDomainExtensionResponse Alibabacloud_Slb20140515::Client::createDomainExtension(shared_ptr<CreateDomainExtensionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDomainExtensionWithOptions(request, runtime);
}

CreateLoadBalancerResponse Alibabacloud_Slb20140515::Client::createLoadBalancerWithOptions(shared_ptr<CreateLoadBalancerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateLoadBalancerResponse(doRPCRequest(make_shared<string>("CreateLoadBalancer"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateLoadBalancerResponse Alibabacloud_Slb20140515::Client::createLoadBalancer(shared_ptr<CreateLoadBalancerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLoadBalancerWithOptions(request, runtime);
}

CreateLoadBalancerHTTPListenerResponse Alibabacloud_Slb20140515::Client::createLoadBalancerHTTPListenerWithOptions(shared_ptr<CreateLoadBalancerHTTPListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateLoadBalancerHTTPListenerResponse(doRPCRequest(make_shared<string>("CreateLoadBalancerHTTPListener"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateLoadBalancerHTTPListenerResponse Alibabacloud_Slb20140515::Client::createLoadBalancerHTTPListener(shared_ptr<CreateLoadBalancerHTTPListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLoadBalancerHTTPListenerWithOptions(request, runtime);
}

CreateLoadBalancerHTTPSListenerResponse Alibabacloud_Slb20140515::Client::createLoadBalancerHTTPSListenerWithOptions(shared_ptr<CreateLoadBalancerHTTPSListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateLoadBalancerHTTPSListenerResponse(doRPCRequest(make_shared<string>("CreateLoadBalancerHTTPSListener"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateLoadBalancerHTTPSListenerResponse Alibabacloud_Slb20140515::Client::createLoadBalancerHTTPSListener(shared_ptr<CreateLoadBalancerHTTPSListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLoadBalancerHTTPSListenerWithOptions(request, runtime);
}

CreateLoadBalancerTCPListenerResponse Alibabacloud_Slb20140515::Client::createLoadBalancerTCPListenerWithOptions(shared_ptr<CreateLoadBalancerTCPListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateLoadBalancerTCPListenerResponse(doRPCRequest(make_shared<string>("CreateLoadBalancerTCPListener"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateLoadBalancerTCPListenerResponse Alibabacloud_Slb20140515::Client::createLoadBalancerTCPListener(shared_ptr<CreateLoadBalancerTCPListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLoadBalancerTCPListenerWithOptions(request, runtime);
}

CreateLoadBalancerUDPListenerResponse Alibabacloud_Slb20140515::Client::createLoadBalancerUDPListenerWithOptions(shared_ptr<CreateLoadBalancerUDPListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateLoadBalancerUDPListenerResponse(doRPCRequest(make_shared<string>("CreateLoadBalancerUDPListener"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateLoadBalancerUDPListenerResponse Alibabacloud_Slb20140515::Client::createLoadBalancerUDPListener(shared_ptr<CreateLoadBalancerUDPListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLoadBalancerUDPListenerWithOptions(request, runtime);
}

CreateMasterSlaveServerGroupResponse Alibabacloud_Slb20140515::Client::createMasterSlaveServerGroupWithOptions(shared_ptr<CreateMasterSlaveServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateMasterSlaveServerGroupResponse(doRPCRequest(make_shared<string>("CreateMasterSlaveServerGroup"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateMasterSlaveServerGroupResponse Alibabacloud_Slb20140515::Client::createMasterSlaveServerGroup(shared_ptr<CreateMasterSlaveServerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMasterSlaveServerGroupWithOptions(request, runtime);
}

CreateRulesResponse Alibabacloud_Slb20140515::Client::createRulesWithOptions(shared_ptr<CreateRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateRulesResponse(doRPCRequest(make_shared<string>("CreateRules"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateRulesResponse Alibabacloud_Slb20140515::Client::createRules(shared_ptr<CreateRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRulesWithOptions(request, runtime);
}

CreateTLSCipherPolicyResponse Alibabacloud_Slb20140515::Client::createTLSCipherPolicyWithOptions(shared_ptr<CreateTLSCipherPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateTLSCipherPolicyResponse(doRPCRequest(make_shared<string>("CreateTLSCipherPolicy"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateTLSCipherPolicyResponse Alibabacloud_Slb20140515::Client::createTLSCipherPolicy(shared_ptr<CreateTLSCipherPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTLSCipherPolicyWithOptions(request, runtime);
}

CreateVServerGroupResponse Alibabacloud_Slb20140515::Client::createVServerGroupWithOptions(shared_ptr<CreateVServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateVServerGroupResponse(doRPCRequest(make_shared<string>("CreateVServerGroup"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateVServerGroupResponse Alibabacloud_Slb20140515::Client::createVServerGroup(shared_ptr<CreateVServerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVServerGroupWithOptions(request, runtime);
}

DeleteAccessControlListResponse Alibabacloud_Slb20140515::Client::deleteAccessControlListWithOptions(shared_ptr<DeleteAccessControlListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAccessControlListResponse(doRPCRequest(make_shared<string>("DeleteAccessControlList"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAccessControlListResponse Alibabacloud_Slb20140515::Client::deleteAccessControlList(shared_ptr<DeleteAccessControlListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAccessControlListWithOptions(request, runtime);
}

DeleteCACertificateResponse Alibabacloud_Slb20140515::Client::deleteCACertificateWithOptions(shared_ptr<DeleteCACertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteCACertificateResponse(doRPCRequest(make_shared<string>("DeleteCACertificate"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteCACertificateResponse Alibabacloud_Slb20140515::Client::deleteCACertificate(shared_ptr<DeleteCACertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCACertificateWithOptions(request, runtime);
}

DeleteDomainExtensionResponse Alibabacloud_Slb20140515::Client::deleteDomainExtensionWithOptions(shared_ptr<DeleteDomainExtensionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDomainExtensionResponse(doRPCRequest(make_shared<string>("DeleteDomainExtension"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDomainExtensionResponse Alibabacloud_Slb20140515::Client::deleteDomainExtension(shared_ptr<DeleteDomainExtensionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDomainExtensionWithOptions(request, runtime);
}

DeleteLoadBalancerResponse Alibabacloud_Slb20140515::Client::deleteLoadBalancerWithOptions(shared_ptr<DeleteLoadBalancerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteLoadBalancerResponse(doRPCRequest(make_shared<string>("DeleteLoadBalancer"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteLoadBalancerResponse Alibabacloud_Slb20140515::Client::deleteLoadBalancer(shared_ptr<DeleteLoadBalancerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLoadBalancerWithOptions(request, runtime);
}

DeleteLoadBalancerListenerResponse Alibabacloud_Slb20140515::Client::deleteLoadBalancerListenerWithOptions(shared_ptr<DeleteLoadBalancerListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteLoadBalancerListenerResponse(doRPCRequest(make_shared<string>("DeleteLoadBalancerListener"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteLoadBalancerListenerResponse Alibabacloud_Slb20140515::Client::deleteLoadBalancerListener(shared_ptr<DeleteLoadBalancerListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLoadBalancerListenerWithOptions(request, runtime);
}

DeleteMasterSlaveServerGroupResponse Alibabacloud_Slb20140515::Client::deleteMasterSlaveServerGroupWithOptions(shared_ptr<DeleteMasterSlaveServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteMasterSlaveServerGroupResponse(doRPCRequest(make_shared<string>("DeleteMasterSlaveServerGroup"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteMasterSlaveServerGroupResponse Alibabacloud_Slb20140515::Client::deleteMasterSlaveServerGroup(shared_ptr<DeleteMasterSlaveServerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMasterSlaveServerGroupWithOptions(request, runtime);
}

DeleteRulesResponse Alibabacloud_Slb20140515::Client::deleteRulesWithOptions(shared_ptr<DeleteRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteRulesResponse(doRPCRequest(make_shared<string>("DeleteRules"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteRulesResponse Alibabacloud_Slb20140515::Client::deleteRules(shared_ptr<DeleteRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRulesWithOptions(request, runtime);
}

DeleteServerCertificateResponse Alibabacloud_Slb20140515::Client::deleteServerCertificateWithOptions(shared_ptr<DeleteServerCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteServerCertificateResponse(doRPCRequest(make_shared<string>("DeleteServerCertificate"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteServerCertificateResponse Alibabacloud_Slb20140515::Client::deleteServerCertificate(shared_ptr<DeleteServerCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteServerCertificateWithOptions(request, runtime);
}

DeleteTLSCipherPolicyResponse Alibabacloud_Slb20140515::Client::deleteTLSCipherPolicyWithOptions(shared_ptr<DeleteTLSCipherPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteTLSCipherPolicyResponse(doRPCRequest(make_shared<string>("DeleteTLSCipherPolicy"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteTLSCipherPolicyResponse Alibabacloud_Slb20140515::Client::deleteTLSCipherPolicy(shared_ptr<DeleteTLSCipherPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTLSCipherPolicyWithOptions(request, runtime);
}

DeleteVServerGroupResponse Alibabacloud_Slb20140515::Client::deleteVServerGroupWithOptions(shared_ptr<DeleteVServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteVServerGroupResponse(doRPCRequest(make_shared<string>("DeleteVServerGroup"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteVServerGroupResponse Alibabacloud_Slb20140515::Client::deleteVServerGroup(shared_ptr<DeleteVServerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVServerGroupWithOptions(request, runtime);
}

DescribeAccessControlListAttributeResponse Alibabacloud_Slb20140515::Client::describeAccessControlListAttributeWithOptions(shared_ptr<DescribeAccessControlListAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAccessControlListAttributeResponse(doRPCRequest(make_shared<string>("DescribeAccessControlListAttribute"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAccessControlListAttributeResponse Alibabacloud_Slb20140515::Client::describeAccessControlListAttribute(shared_ptr<DescribeAccessControlListAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAccessControlListAttributeWithOptions(request, runtime);
}

DescribeAccessControlListsResponse Alibabacloud_Slb20140515::Client::describeAccessControlListsWithOptions(shared_ptr<DescribeAccessControlListsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAccessControlListsResponse(doRPCRequest(make_shared<string>("DescribeAccessControlLists"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAccessControlListsResponse Alibabacloud_Slb20140515::Client::describeAccessControlLists(shared_ptr<DescribeAccessControlListsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAccessControlListsWithOptions(request, runtime);
}

DescribeAvailableResourceResponse Alibabacloud_Slb20140515::Client::describeAvailableResourceWithOptions(shared_ptr<DescribeAvailableResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAvailableResourceResponse(doRPCRequest(make_shared<string>("DescribeAvailableResource"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAvailableResourceResponse Alibabacloud_Slb20140515::Client::describeAvailableResource(shared_ptr<DescribeAvailableResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvailableResourceWithOptions(request, runtime);
}

DescribeCACertificatesResponse Alibabacloud_Slb20140515::Client::describeCACertificatesWithOptions(shared_ptr<DescribeCACertificatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCACertificatesResponse(doRPCRequest(make_shared<string>("DescribeCACertificates"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCACertificatesResponse Alibabacloud_Slb20140515::Client::describeCACertificates(shared_ptr<DescribeCACertificatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCACertificatesWithOptions(request, runtime);
}

DescribeDomainExtensionAttributeResponse Alibabacloud_Slb20140515::Client::describeDomainExtensionAttributeWithOptions(shared_ptr<DescribeDomainExtensionAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDomainExtensionAttributeResponse(doRPCRequest(make_shared<string>("DescribeDomainExtensionAttribute"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDomainExtensionAttributeResponse Alibabacloud_Slb20140515::Client::describeDomainExtensionAttribute(shared_ptr<DescribeDomainExtensionAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainExtensionAttributeWithOptions(request, runtime);
}

DescribeDomainExtensionsResponse Alibabacloud_Slb20140515::Client::describeDomainExtensionsWithOptions(shared_ptr<DescribeDomainExtensionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDomainExtensionsResponse(doRPCRequest(make_shared<string>("DescribeDomainExtensions"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDomainExtensionsResponse Alibabacloud_Slb20140515::Client::describeDomainExtensions(shared_ptr<DescribeDomainExtensionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainExtensionsWithOptions(request, runtime);
}

DescribeHealthStatusResponse Alibabacloud_Slb20140515::Client::describeHealthStatusWithOptions(shared_ptr<DescribeHealthStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeHealthStatusResponse(doRPCRequest(make_shared<string>("DescribeHealthStatus"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeHealthStatusResponse Alibabacloud_Slb20140515::Client::describeHealthStatus(shared_ptr<DescribeHealthStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHealthStatusWithOptions(request, runtime);
}

DescribeListenerAccessControlAttributeResponse Alibabacloud_Slb20140515::Client::describeListenerAccessControlAttributeWithOptions(shared_ptr<DescribeListenerAccessControlAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeListenerAccessControlAttributeResponse(doRPCRequest(make_shared<string>("DescribeListenerAccessControlAttribute"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeListenerAccessControlAttributeResponse Alibabacloud_Slb20140515::Client::describeListenerAccessControlAttribute(shared_ptr<DescribeListenerAccessControlAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeListenerAccessControlAttributeWithOptions(request, runtime);
}

DescribeLoadBalancerAttributeResponse Alibabacloud_Slb20140515::Client::describeLoadBalancerAttributeWithOptions(shared_ptr<DescribeLoadBalancerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeLoadBalancerAttributeResponse(doRPCRequest(make_shared<string>("DescribeLoadBalancerAttribute"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeLoadBalancerAttributeResponse Alibabacloud_Slb20140515::Client::describeLoadBalancerAttribute(shared_ptr<DescribeLoadBalancerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLoadBalancerAttributeWithOptions(request, runtime);
}

DescribeLoadBalancerHTTPListenerAttributeResponse Alibabacloud_Slb20140515::Client::describeLoadBalancerHTTPListenerAttributeWithOptions(shared_ptr<DescribeLoadBalancerHTTPListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeLoadBalancerHTTPListenerAttributeResponse(doRPCRequest(make_shared<string>("DescribeLoadBalancerHTTPListenerAttribute"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeLoadBalancerHTTPListenerAttributeResponse Alibabacloud_Slb20140515::Client::describeLoadBalancerHTTPListenerAttribute(shared_ptr<DescribeLoadBalancerHTTPListenerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLoadBalancerHTTPListenerAttributeWithOptions(request, runtime);
}

DescribeLoadBalancerHTTPSListenerAttributeResponse Alibabacloud_Slb20140515::Client::describeLoadBalancerHTTPSListenerAttributeWithOptions(shared_ptr<DescribeLoadBalancerHTTPSListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeLoadBalancerHTTPSListenerAttributeResponse(doRPCRequest(make_shared<string>("DescribeLoadBalancerHTTPSListenerAttribute"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeLoadBalancerHTTPSListenerAttributeResponse Alibabacloud_Slb20140515::Client::describeLoadBalancerHTTPSListenerAttribute(shared_ptr<DescribeLoadBalancerHTTPSListenerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLoadBalancerHTTPSListenerAttributeWithOptions(request, runtime);
}

DescribeLoadBalancerListenersResponse Alibabacloud_Slb20140515::Client::describeLoadBalancerListenersWithOptions(shared_ptr<DescribeLoadBalancerListenersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeLoadBalancerListenersResponse(doRPCRequest(make_shared<string>("DescribeLoadBalancerListeners"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeLoadBalancerListenersResponse Alibabacloud_Slb20140515::Client::describeLoadBalancerListeners(shared_ptr<DescribeLoadBalancerListenersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLoadBalancerListenersWithOptions(request, runtime);
}

DescribeLoadBalancersResponse Alibabacloud_Slb20140515::Client::describeLoadBalancersWithOptions(shared_ptr<DescribeLoadBalancersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeLoadBalancersResponse(doRPCRequest(make_shared<string>("DescribeLoadBalancers"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeLoadBalancersResponse Alibabacloud_Slb20140515::Client::describeLoadBalancers(shared_ptr<DescribeLoadBalancersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLoadBalancersWithOptions(request, runtime);
}

DescribeLoadBalancerTCPListenerAttributeResponse Alibabacloud_Slb20140515::Client::describeLoadBalancerTCPListenerAttributeWithOptions(shared_ptr<DescribeLoadBalancerTCPListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeLoadBalancerTCPListenerAttributeResponse(doRPCRequest(make_shared<string>("DescribeLoadBalancerTCPListenerAttribute"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeLoadBalancerTCPListenerAttributeResponse Alibabacloud_Slb20140515::Client::describeLoadBalancerTCPListenerAttribute(shared_ptr<DescribeLoadBalancerTCPListenerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLoadBalancerTCPListenerAttributeWithOptions(request, runtime);
}

DescribeLoadBalancerUDPListenerAttributeResponse Alibabacloud_Slb20140515::Client::describeLoadBalancerUDPListenerAttributeWithOptions(shared_ptr<DescribeLoadBalancerUDPListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeLoadBalancerUDPListenerAttributeResponse(doRPCRequest(make_shared<string>("DescribeLoadBalancerUDPListenerAttribute"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeLoadBalancerUDPListenerAttributeResponse Alibabacloud_Slb20140515::Client::describeLoadBalancerUDPListenerAttribute(shared_ptr<DescribeLoadBalancerUDPListenerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLoadBalancerUDPListenerAttributeWithOptions(request, runtime);
}

DescribeMasterSlaveServerGroupAttributeResponse Alibabacloud_Slb20140515::Client::describeMasterSlaveServerGroupAttributeWithOptions(shared_ptr<DescribeMasterSlaveServerGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeMasterSlaveServerGroupAttributeResponse(doRPCRequest(make_shared<string>("DescribeMasterSlaveServerGroupAttribute"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeMasterSlaveServerGroupAttributeResponse Alibabacloud_Slb20140515::Client::describeMasterSlaveServerGroupAttribute(shared_ptr<DescribeMasterSlaveServerGroupAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMasterSlaveServerGroupAttributeWithOptions(request, runtime);
}

DescribeMasterSlaveServerGroupsResponse Alibabacloud_Slb20140515::Client::describeMasterSlaveServerGroupsWithOptions(shared_ptr<DescribeMasterSlaveServerGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeMasterSlaveServerGroupsResponse(doRPCRequest(make_shared<string>("DescribeMasterSlaveServerGroups"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeMasterSlaveServerGroupsResponse Alibabacloud_Slb20140515::Client::describeMasterSlaveServerGroups(shared_ptr<DescribeMasterSlaveServerGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMasterSlaveServerGroupsWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Slb20140515::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRegionsResponse(doRPCRequest(make_shared<string>("DescribeRegions"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionsResponse Alibabacloud_Slb20140515::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeRuleAttributeResponse Alibabacloud_Slb20140515::Client::describeRuleAttributeWithOptions(shared_ptr<DescribeRuleAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRuleAttributeResponse(doRPCRequest(make_shared<string>("DescribeRuleAttribute"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRuleAttributeResponse Alibabacloud_Slb20140515::Client::describeRuleAttribute(shared_ptr<DescribeRuleAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRuleAttributeWithOptions(request, runtime);
}

DescribeRulesResponse Alibabacloud_Slb20140515::Client::describeRulesWithOptions(shared_ptr<DescribeRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRulesResponse(doRPCRequest(make_shared<string>("DescribeRules"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRulesResponse Alibabacloud_Slb20140515::Client::describeRules(shared_ptr<DescribeRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRulesWithOptions(request, runtime);
}

DescribeServerCertificatesResponse Alibabacloud_Slb20140515::Client::describeServerCertificatesWithOptions(shared_ptr<DescribeServerCertificatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeServerCertificatesResponse(doRPCRequest(make_shared<string>("DescribeServerCertificates"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeServerCertificatesResponse Alibabacloud_Slb20140515::Client::describeServerCertificates(shared_ptr<DescribeServerCertificatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServerCertificatesWithOptions(request, runtime);
}

DescribeTagsResponse Alibabacloud_Slb20140515::Client::describeTagsWithOptions(shared_ptr<DescribeTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeTagsResponse(doRPCRequest(make_shared<string>("DescribeTags"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeTagsResponse Alibabacloud_Slb20140515::Client::describeTags(shared_ptr<DescribeTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTagsWithOptions(request, runtime);
}

DescribeVServerGroupAttributeResponse Alibabacloud_Slb20140515::Client::describeVServerGroupAttributeWithOptions(shared_ptr<DescribeVServerGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVServerGroupAttributeResponse(doRPCRequest(make_shared<string>("DescribeVServerGroupAttribute"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVServerGroupAttributeResponse Alibabacloud_Slb20140515::Client::describeVServerGroupAttribute(shared_ptr<DescribeVServerGroupAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVServerGroupAttributeWithOptions(request, runtime);
}

DescribeVServerGroupsResponse Alibabacloud_Slb20140515::Client::describeVServerGroupsWithOptions(shared_ptr<DescribeVServerGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVServerGroupsResponse(doRPCRequest(make_shared<string>("DescribeVServerGroups"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVServerGroupsResponse Alibabacloud_Slb20140515::Client::describeVServerGroups(shared_ptr<DescribeVServerGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVServerGroupsWithOptions(request, runtime);
}

DescribeZonesResponse Alibabacloud_Slb20140515::Client::describeZonesWithOptions(shared_ptr<DescribeZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeZonesResponse(doRPCRequest(make_shared<string>("DescribeZones"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeZonesResponse Alibabacloud_Slb20140515::Client::describeZones(shared_ptr<DescribeZonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeZonesWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Slb20140515::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTagResourcesResponse(doRPCRequest(make_shared<string>("ListTagResources"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagResourcesResponse Alibabacloud_Slb20140515::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ListTLSCipherPoliciesResponse Alibabacloud_Slb20140515::Client::listTLSCipherPoliciesWithOptions(shared_ptr<ListTLSCipherPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTLSCipherPoliciesResponse(doRPCRequest(make_shared<string>("ListTLSCipherPolicies"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTLSCipherPoliciesResponse Alibabacloud_Slb20140515::Client::listTLSCipherPolicies(shared_ptr<ListTLSCipherPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTLSCipherPoliciesWithOptions(request, runtime);
}

ModifyLoadBalancerInstanceSpecResponse Alibabacloud_Slb20140515::Client::modifyLoadBalancerInstanceSpecWithOptions(shared_ptr<ModifyLoadBalancerInstanceSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyLoadBalancerInstanceSpecResponse(doRPCRequest(make_shared<string>("ModifyLoadBalancerInstanceSpec"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyLoadBalancerInstanceSpecResponse Alibabacloud_Slb20140515::Client::modifyLoadBalancerInstanceSpec(shared_ptr<ModifyLoadBalancerInstanceSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyLoadBalancerInstanceSpecWithOptions(request, runtime);
}

ModifyLoadBalancerInternetSpecResponse Alibabacloud_Slb20140515::Client::modifyLoadBalancerInternetSpecWithOptions(shared_ptr<ModifyLoadBalancerInternetSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyLoadBalancerInternetSpecResponse(doRPCRequest(make_shared<string>("ModifyLoadBalancerInternetSpec"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyLoadBalancerInternetSpecResponse Alibabacloud_Slb20140515::Client::modifyLoadBalancerInternetSpec(shared_ptr<ModifyLoadBalancerInternetSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyLoadBalancerInternetSpecWithOptions(request, runtime);
}

ModifyLoadBalancerPayTypeResponse Alibabacloud_Slb20140515::Client::modifyLoadBalancerPayTypeWithOptions(shared_ptr<ModifyLoadBalancerPayTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyLoadBalancerPayTypeResponse(doRPCRequest(make_shared<string>("ModifyLoadBalancerPayType"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyLoadBalancerPayTypeResponse Alibabacloud_Slb20140515::Client::modifyLoadBalancerPayType(shared_ptr<ModifyLoadBalancerPayTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyLoadBalancerPayTypeWithOptions(request, runtime);
}

ModifyVServerGroupBackendServersResponse Alibabacloud_Slb20140515::Client::modifyVServerGroupBackendServersWithOptions(shared_ptr<ModifyVServerGroupBackendServersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyVServerGroupBackendServersResponse(doRPCRequest(make_shared<string>("ModifyVServerGroupBackendServers"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyVServerGroupBackendServersResponse Alibabacloud_Slb20140515::Client::modifyVServerGroupBackendServers(shared_ptr<ModifyVServerGroupBackendServersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyVServerGroupBackendServersWithOptions(request, runtime);
}

RemoveAccessControlListEntryResponse Alibabacloud_Slb20140515::Client::removeAccessControlListEntryWithOptions(shared_ptr<RemoveAccessControlListEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveAccessControlListEntryResponse(doRPCRequest(make_shared<string>("RemoveAccessControlListEntry"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveAccessControlListEntryResponse Alibabacloud_Slb20140515::Client::removeAccessControlListEntry(shared_ptr<RemoveAccessControlListEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeAccessControlListEntryWithOptions(request, runtime);
}

RemoveBackendServersResponse Alibabacloud_Slb20140515::Client::removeBackendServersWithOptions(shared_ptr<RemoveBackendServersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveBackendServersResponse(doRPCRequest(make_shared<string>("RemoveBackendServers"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveBackendServersResponse Alibabacloud_Slb20140515::Client::removeBackendServers(shared_ptr<RemoveBackendServersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeBackendServersWithOptions(request, runtime);
}

RemoveListenerWhiteListItemResponse Alibabacloud_Slb20140515::Client::removeListenerWhiteListItemWithOptions(shared_ptr<RemoveListenerWhiteListItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveListenerWhiteListItemResponse(doRPCRequest(make_shared<string>("RemoveListenerWhiteListItem"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveListenerWhiteListItemResponse Alibabacloud_Slb20140515::Client::removeListenerWhiteListItem(shared_ptr<RemoveListenerWhiteListItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeListenerWhiteListItemWithOptions(request, runtime);
}

RemoveTagsResponse Alibabacloud_Slb20140515::Client::removeTagsWithOptions(shared_ptr<RemoveTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveTagsResponse(doRPCRequest(make_shared<string>("RemoveTags"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveTagsResponse Alibabacloud_Slb20140515::Client::removeTags(shared_ptr<RemoveTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeTagsWithOptions(request, runtime);
}

RemoveVServerGroupBackendServersResponse Alibabacloud_Slb20140515::Client::removeVServerGroupBackendServersWithOptions(shared_ptr<RemoveVServerGroupBackendServersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveVServerGroupBackendServersResponse(doRPCRequest(make_shared<string>("RemoveVServerGroupBackendServers"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveVServerGroupBackendServersResponse Alibabacloud_Slb20140515::Client::removeVServerGroupBackendServers(shared_ptr<RemoveVServerGroupBackendServersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeVServerGroupBackendServersWithOptions(request, runtime);
}

SetAccessControlListAttributeResponse Alibabacloud_Slb20140515::Client::setAccessControlListAttributeWithOptions(shared_ptr<SetAccessControlListAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetAccessControlListAttributeResponse(doRPCRequest(make_shared<string>("SetAccessControlListAttribute"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetAccessControlListAttributeResponse Alibabacloud_Slb20140515::Client::setAccessControlListAttribute(shared_ptr<SetAccessControlListAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setAccessControlListAttributeWithOptions(request, runtime);
}

SetBackendServersResponse Alibabacloud_Slb20140515::Client::setBackendServersWithOptions(shared_ptr<SetBackendServersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetBackendServersResponse(doRPCRequest(make_shared<string>("SetBackendServers"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetBackendServersResponse Alibabacloud_Slb20140515::Client::setBackendServers(shared_ptr<SetBackendServersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setBackendServersWithOptions(request, runtime);
}

SetCACertificateNameResponse Alibabacloud_Slb20140515::Client::setCACertificateNameWithOptions(shared_ptr<SetCACertificateNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetCACertificateNameResponse(doRPCRequest(make_shared<string>("SetCACertificateName"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetCACertificateNameResponse Alibabacloud_Slb20140515::Client::setCACertificateName(shared_ptr<SetCACertificateNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setCACertificateNameWithOptions(request, runtime);
}

SetDomainExtensionAttributeResponse Alibabacloud_Slb20140515::Client::setDomainExtensionAttributeWithOptions(shared_ptr<SetDomainExtensionAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetDomainExtensionAttributeResponse(doRPCRequest(make_shared<string>("SetDomainExtensionAttribute"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetDomainExtensionAttributeResponse Alibabacloud_Slb20140515::Client::setDomainExtensionAttribute(shared_ptr<SetDomainExtensionAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDomainExtensionAttributeWithOptions(request, runtime);
}

SetListenerAccessControlStatusResponse Alibabacloud_Slb20140515::Client::setListenerAccessControlStatusWithOptions(shared_ptr<SetListenerAccessControlStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetListenerAccessControlStatusResponse(doRPCRequest(make_shared<string>("SetListenerAccessControlStatus"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetListenerAccessControlStatusResponse Alibabacloud_Slb20140515::Client::setListenerAccessControlStatus(shared_ptr<SetListenerAccessControlStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setListenerAccessControlStatusWithOptions(request, runtime);
}

SetLoadBalancerDeleteProtectionResponse Alibabacloud_Slb20140515::Client::setLoadBalancerDeleteProtectionWithOptions(shared_ptr<SetLoadBalancerDeleteProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetLoadBalancerDeleteProtectionResponse(doRPCRequest(make_shared<string>("SetLoadBalancerDeleteProtection"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetLoadBalancerDeleteProtectionResponse Alibabacloud_Slb20140515::Client::setLoadBalancerDeleteProtection(shared_ptr<SetLoadBalancerDeleteProtectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setLoadBalancerDeleteProtectionWithOptions(request, runtime);
}

SetLoadBalancerHTTPListenerAttributeResponse Alibabacloud_Slb20140515::Client::setLoadBalancerHTTPListenerAttributeWithOptions(shared_ptr<SetLoadBalancerHTTPListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetLoadBalancerHTTPListenerAttributeResponse(doRPCRequest(make_shared<string>("SetLoadBalancerHTTPListenerAttribute"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetLoadBalancerHTTPListenerAttributeResponse Alibabacloud_Slb20140515::Client::setLoadBalancerHTTPListenerAttribute(shared_ptr<SetLoadBalancerHTTPListenerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setLoadBalancerHTTPListenerAttributeWithOptions(request, runtime);
}

SetLoadBalancerHTTPSListenerAttributeResponse Alibabacloud_Slb20140515::Client::setLoadBalancerHTTPSListenerAttributeWithOptions(shared_ptr<SetLoadBalancerHTTPSListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetLoadBalancerHTTPSListenerAttributeResponse(doRPCRequest(make_shared<string>("SetLoadBalancerHTTPSListenerAttribute"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetLoadBalancerHTTPSListenerAttributeResponse Alibabacloud_Slb20140515::Client::setLoadBalancerHTTPSListenerAttribute(shared_ptr<SetLoadBalancerHTTPSListenerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setLoadBalancerHTTPSListenerAttributeWithOptions(request, runtime);
}

SetLoadBalancerModificationProtectionResponse Alibabacloud_Slb20140515::Client::setLoadBalancerModificationProtectionWithOptions(shared_ptr<SetLoadBalancerModificationProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetLoadBalancerModificationProtectionResponse(doRPCRequest(make_shared<string>("SetLoadBalancerModificationProtection"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetLoadBalancerModificationProtectionResponse Alibabacloud_Slb20140515::Client::setLoadBalancerModificationProtection(shared_ptr<SetLoadBalancerModificationProtectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setLoadBalancerModificationProtectionWithOptions(request, runtime);
}

SetLoadBalancerNameResponse Alibabacloud_Slb20140515::Client::setLoadBalancerNameWithOptions(shared_ptr<SetLoadBalancerNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetLoadBalancerNameResponse(doRPCRequest(make_shared<string>("SetLoadBalancerName"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetLoadBalancerNameResponse Alibabacloud_Slb20140515::Client::setLoadBalancerName(shared_ptr<SetLoadBalancerNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setLoadBalancerNameWithOptions(request, runtime);
}

SetLoadBalancerStatusResponse Alibabacloud_Slb20140515::Client::setLoadBalancerStatusWithOptions(shared_ptr<SetLoadBalancerStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetLoadBalancerStatusResponse(doRPCRequest(make_shared<string>("SetLoadBalancerStatus"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetLoadBalancerStatusResponse Alibabacloud_Slb20140515::Client::setLoadBalancerStatus(shared_ptr<SetLoadBalancerStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setLoadBalancerStatusWithOptions(request, runtime);
}

SetLoadBalancerTCPListenerAttributeResponse Alibabacloud_Slb20140515::Client::setLoadBalancerTCPListenerAttributeWithOptions(shared_ptr<SetLoadBalancerTCPListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetLoadBalancerTCPListenerAttributeResponse(doRPCRequest(make_shared<string>("SetLoadBalancerTCPListenerAttribute"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetLoadBalancerTCPListenerAttributeResponse Alibabacloud_Slb20140515::Client::setLoadBalancerTCPListenerAttribute(shared_ptr<SetLoadBalancerTCPListenerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setLoadBalancerTCPListenerAttributeWithOptions(request, runtime);
}

SetLoadBalancerUDPListenerAttributeResponse Alibabacloud_Slb20140515::Client::setLoadBalancerUDPListenerAttributeWithOptions(shared_ptr<SetLoadBalancerUDPListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetLoadBalancerUDPListenerAttributeResponse(doRPCRequest(make_shared<string>("SetLoadBalancerUDPListenerAttribute"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetLoadBalancerUDPListenerAttributeResponse Alibabacloud_Slb20140515::Client::setLoadBalancerUDPListenerAttribute(shared_ptr<SetLoadBalancerUDPListenerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setLoadBalancerUDPListenerAttributeWithOptions(request, runtime);
}

SetRuleResponse Alibabacloud_Slb20140515::Client::setRuleWithOptions(shared_ptr<SetRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetRuleResponse(doRPCRequest(make_shared<string>("SetRule"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetRuleResponse Alibabacloud_Slb20140515::Client::setRule(shared_ptr<SetRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setRuleWithOptions(request, runtime);
}

SetServerCertificateNameResponse Alibabacloud_Slb20140515::Client::setServerCertificateNameWithOptions(shared_ptr<SetServerCertificateNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetServerCertificateNameResponse(doRPCRequest(make_shared<string>("SetServerCertificateName"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetServerCertificateNameResponse Alibabacloud_Slb20140515::Client::setServerCertificateName(shared_ptr<SetServerCertificateNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setServerCertificateNameWithOptions(request, runtime);
}

SetTLSCipherPolicyAttributeResponse Alibabacloud_Slb20140515::Client::setTLSCipherPolicyAttributeWithOptions(shared_ptr<SetTLSCipherPolicyAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetTLSCipherPolicyAttributeResponse(doRPCRequest(make_shared<string>("SetTLSCipherPolicyAttribute"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetTLSCipherPolicyAttributeResponse Alibabacloud_Slb20140515::Client::setTLSCipherPolicyAttribute(shared_ptr<SetTLSCipherPolicyAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setTLSCipherPolicyAttributeWithOptions(request, runtime);
}

SetVServerGroupAttributeResponse Alibabacloud_Slb20140515::Client::setVServerGroupAttributeWithOptions(shared_ptr<SetVServerGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetVServerGroupAttributeResponse(doRPCRequest(make_shared<string>("SetVServerGroupAttribute"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetVServerGroupAttributeResponse Alibabacloud_Slb20140515::Client::setVServerGroupAttribute(shared_ptr<SetVServerGroupAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setVServerGroupAttributeWithOptions(request, runtime);
}

StartLoadBalancerListenerResponse Alibabacloud_Slb20140515::Client::startLoadBalancerListenerWithOptions(shared_ptr<StartLoadBalancerListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartLoadBalancerListenerResponse(doRPCRequest(make_shared<string>("StartLoadBalancerListener"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartLoadBalancerListenerResponse Alibabacloud_Slb20140515::Client::startLoadBalancerListener(shared_ptr<StartLoadBalancerListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startLoadBalancerListenerWithOptions(request, runtime);
}

StopLoadBalancerListenerResponse Alibabacloud_Slb20140515::Client::stopLoadBalancerListenerWithOptions(shared_ptr<StopLoadBalancerListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopLoadBalancerListenerResponse(doRPCRequest(make_shared<string>("StopLoadBalancerListener"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopLoadBalancerListenerResponse Alibabacloud_Slb20140515::Client::stopLoadBalancerListener(shared_ptr<StopLoadBalancerListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopLoadBalancerListenerWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Slb20140515::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TagResourcesResponse(doRPCRequest(make_shared<string>("TagResources"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TagResourcesResponse Alibabacloud_Slb20140515::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Slb20140515::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UntagResourcesResponse(doRPCRequest(make_shared<string>("UntagResources"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UntagResourcesResponse Alibabacloud_Slb20140515::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UploadCACertificateResponse Alibabacloud_Slb20140515::Client::uploadCACertificateWithOptions(shared_ptr<UploadCACertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UploadCACertificateResponse(doRPCRequest(make_shared<string>("UploadCACertificate"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UploadCACertificateResponse Alibabacloud_Slb20140515::Client::uploadCACertificate(shared_ptr<UploadCACertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadCACertificateWithOptions(request, runtime);
}

UploadServerCertificateResponse Alibabacloud_Slb20140515::Client::uploadServerCertificateWithOptions(shared_ptr<UploadServerCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UploadServerCertificateResponse(doRPCRequest(make_shared<string>("UploadServerCertificate"), make_shared<string>("2014-05-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UploadServerCertificateResponse Alibabacloud_Slb20140515::Client::uploadServerCertificate(shared_ptr<UploadServerCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadServerCertificateWithOptions(request, runtime);
}

