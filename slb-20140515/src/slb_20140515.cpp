// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/slb_20140515.hpp>
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
    {"us-east-1", "slb.aliyuncs.com"},
    {"us-west-1", "slb.aliyuncs.com"},
    {"cn-shanghai-finance-1", "slb.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "slb.aliyuncs.com"},
    {"cn-north-2-gov-1", "slb.aliyuncs.com"},
    {"ap-northeast-2-pop", "slb.aliyuncs.com"},
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
    {"cn-zhangbei", "slb.aliyuncs.com"},
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
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclEntrys)) {
    query->insert(pair<string, string>("AclEntrys", *request->aclEntrys));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclId)) {
    query->insert(pair<string, string>("AclId", *request->aclId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddAccessControlListEntry"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddAccessControlListEntryResponse(callApi(params, req, runtime));
}

AddAccessControlListEntryResponse Alibabacloud_Slb20140515::Client::addAccessControlListEntry(shared_ptr<AddAccessControlListEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addAccessControlListEntryWithOptions(request, runtime);
}

AddBackendServersResponse Alibabacloud_Slb20140515::Client::addBackendServersWithOptions(shared_ptr<AddBackendServersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backendServers)) {
    query->insert(pair<string, string>("BackendServers", *request->backendServers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddBackendServers"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddBackendServersResponse(callApi(params, req, runtime));
}

AddBackendServersResponse Alibabacloud_Slb20140515::Client::addBackendServers(shared_ptr<AddBackendServersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addBackendServersWithOptions(request, runtime);
}

AddListenerWhiteListItemResponse Alibabacloud_Slb20140515::Client::addListenerWhiteListItemWithOptions(shared_ptr<AddListenerWhiteListItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerProtocol)) {
    query->insert(pair<string, string>("ListenerProtocol", *request->listenerProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceItems)) {
    query->insert(pair<string, string>("SourceItems", *request->sourceItems));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddListenerWhiteListItem"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddListenerWhiteListItemResponse(callApi(params, req, runtime));
}

AddListenerWhiteListItemResponse Alibabacloud_Slb20140515::Client::addListenerWhiteListItem(shared_ptr<AddListenerWhiteListItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addListenerWhiteListItemWithOptions(request, runtime);
}

AddTagsResponse Alibabacloud_Slb20140515::Client::addTagsWithOptions(shared_ptr<AddTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddTags"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddTagsResponse(callApi(params, req, runtime));
}

AddTagsResponse Alibabacloud_Slb20140515::Client::addTags(shared_ptr<AddTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addTagsWithOptions(request, runtime);
}

AddVServerGroupBackendServersResponse Alibabacloud_Slb20140515::Client::addVServerGroupBackendServersWithOptions(shared_ptr<AddVServerGroupBackendServersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backendServers)) {
    query->insert(pair<string, string>("BackendServers", *request->backendServers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VServerGroupId)) {
    query->insert(pair<string, string>("VServerGroupId", *request->VServerGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddVServerGroupBackendServers"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddVServerGroupBackendServersResponse(callApi(params, req, runtime));
}

AddVServerGroupBackendServersResponse Alibabacloud_Slb20140515::Client::addVServerGroupBackendServers(shared_ptr<AddVServerGroupBackendServersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addVServerGroupBackendServersWithOptions(request, runtime);
}

CreateAccessControlListResponse Alibabacloud_Slb20140515::Client::createAccessControlListWithOptions(shared_ptr<CreateAccessControlListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclName)) {
    query->insert(pair<string, string>("AclName", *request->aclName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->addressIPVersion)) {
    query->insert(pair<string, string>("AddressIPVersion", *request->addressIPVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateAccessControlListRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateAccessControlListRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAccessControlList"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAccessControlListResponse(callApi(params, req, runtime));
}

CreateAccessControlListResponse Alibabacloud_Slb20140515::Client::createAccessControlList(shared_ptr<CreateAccessControlListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAccessControlListWithOptions(request, runtime);
}

CreateDomainExtensionResponse Alibabacloud_Slb20140515::Client::createDomainExtensionWithOptions(shared_ptr<CreateDomainExtensionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverCertificateId)) {
    query->insert(pair<string, string>("ServerCertificateId", *request->serverCertificateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDomainExtension"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDomainExtensionResponse(callApi(params, req, runtime));
}

CreateDomainExtensionResponse Alibabacloud_Slb20140515::Client::createDomainExtension(shared_ptr<CreateDomainExtensionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDomainExtensionWithOptions(request, runtime);
}

CreateLoadBalancerResponse Alibabacloud_Slb20140515::Client::createLoadBalancerWithOptions(shared_ptr<CreateLoadBalancerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("Address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->addressIPVersion)) {
    query->insert(pair<string, string>("AddressIPVersion", *request->addressIPVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->addressType)) {
    query->insert(pair<string, string>("AddressType", *request->addressType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bandwidth)) {
    query->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deleteProtection)) {
    query->insert(pair<string, string>("DeleteProtection", *request->deleteProtection));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->duration)) {
    query->insert(pair<string, long>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceChargeType)) {
    query->insert(pair<string, string>("InstanceChargeType", *request->instanceChargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internetChargeType)) {
    query->insert(pair<string, string>("InternetChargeType", *request->internetChargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerName)) {
    query->insert(pair<string, string>("LoadBalancerName", *request->loadBalancerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerSpec)) {
    query->insert(pair<string, string>("LoadBalancerSpec", *request->loadBalancerSpec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterZoneId)) {
    query->insert(pair<string, string>("MasterZoneId", *request->masterZoneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modificationProtectionReason)) {
    query->insert(pair<string, string>("ModificationProtectionReason", *request->modificationProtectionReason));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modificationProtectionStatus)) {
    query->insert(pair<string, string>("ModificationProtectionStatus", *request->modificationProtectionStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payType)) {
    query->insert(pair<string, string>("PayType", *request->payType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pricingCycle)) {
    query->insert(pair<string, string>("PricingCycle", *request->pricingCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slaveZoneId)) {
    query->insert(pair<string, string>("SlaveZoneId", *request->slaveZoneId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateLoadBalancerRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateLoadBalancerRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLoadBalancer"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLoadBalancerResponse(callApi(params, req, runtime));
}

CreateLoadBalancerResponse Alibabacloud_Slb20140515::Client::createLoadBalancer(shared_ptr<CreateLoadBalancerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLoadBalancerWithOptions(request, runtime);
}

CreateLoadBalancerHTTPListenerResponse Alibabacloud_Slb20140515::Client::createLoadBalancerHTTPListenerWithOptions(shared_ptr<CreateLoadBalancerHTTPListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclId)) {
    query->insert(pair<string, string>("AclId", *request->aclId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclStatus)) {
    query->insert(pair<string, string>("AclStatus", *request->aclStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclType)) {
    query->insert(pair<string, string>("AclType", *request->aclType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->backendServerPort)) {
    query->insert(pair<string, long>("BackendServerPort", *request->backendServerPort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bandwidth)) {
    query->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cookie)) {
    query->insert(pair<string, string>("Cookie", *request->cookie));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cookieTimeout)) {
    query->insert(pair<string, long>("CookieTimeout", *request->cookieTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->forwardPort)) {
    query->insert(pair<string, long>("ForwardPort", *request->forwardPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gzip)) {
    query->insert(pair<string, string>("Gzip", *request->gzip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheck)) {
    query->insert(pair<string, string>("HealthCheck", *request->healthCheck));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckConnectPort)) {
    query->insert(pair<string, long>("HealthCheckConnectPort", *request->healthCheckConnectPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckDomain)) {
    query->insert(pair<string, string>("HealthCheckDomain", *request->healthCheckDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckHttpCode)) {
    query->insert(pair<string, string>("HealthCheckHttpCode", *request->healthCheckHttpCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckInterval)) {
    query->insert(pair<string, long>("HealthCheckInterval", *request->healthCheckInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckMethod)) {
    query->insert(pair<string, string>("HealthCheckMethod", *request->healthCheckMethod));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckTimeout)) {
    query->insert(pair<string, long>("HealthCheckTimeout", *request->healthCheckTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckURI)) {
    query->insert(pair<string, string>("HealthCheckURI", *request->healthCheckURI));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthyThreshold)) {
    query->insert(pair<string, long>("HealthyThreshold", *request->healthyThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->idleTimeout)) {
    query->insert(pair<string, long>("IdleTimeout", *request->idleTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerForward)) {
    query->insert(pair<string, string>("ListenerForward", *request->listenerForward));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->requestTimeout)) {
    query->insert(pair<string, long>("RequestTimeout", *request->requestTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduler)) {
    query->insert(pair<string, string>("Scheduler", *request->scheduler));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stickySession)) {
    query->insert(pair<string, string>("StickySession", *request->stickySession));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stickySessionType)) {
    query->insert(pair<string, string>("StickySessionType", *request->stickySessionType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateLoadBalancerHTTPListenerRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateLoadBalancerHTTPListenerRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->unhealthyThreshold)) {
    query->insert(pair<string, long>("UnhealthyThreshold", *request->unhealthyThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VServerGroupId)) {
    query->insert(pair<string, string>("VServerGroupId", *request->VServerGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->XForwardedFor)) {
    query->insert(pair<string, string>("XForwardedFor", *request->XForwardedFor));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->XForwardedFor_ClientSrcPort)) {
    query->insert(pair<string, string>("XForwardedFor_ClientSrcPort", *request->XForwardedFor_ClientSrcPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->XForwardedFor_SLBID)) {
    query->insert(pair<string, string>("XForwardedFor_SLBID", *request->XForwardedFor_SLBID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->XForwardedFor_SLBIP)) {
    query->insert(pair<string, string>("XForwardedFor_SLBIP", *request->XForwardedFor_SLBIP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->XForwardedFor_SLBPORT)) {
    query->insert(pair<string, string>("XForwardedFor_SLBPORT", *request->XForwardedFor_SLBPORT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->XForwardedFor_proto)) {
    query->insert(pair<string, string>("XForwardedFor_proto", *request->XForwardedFor_proto));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLoadBalancerHTTPListener"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLoadBalancerHTTPListenerResponse(callApi(params, req, runtime));
}

CreateLoadBalancerHTTPListenerResponse Alibabacloud_Slb20140515::Client::createLoadBalancerHTTPListener(shared_ptr<CreateLoadBalancerHTTPListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLoadBalancerHTTPListenerWithOptions(request, runtime);
}

CreateLoadBalancerHTTPSListenerResponse Alibabacloud_Slb20140515::Client::createLoadBalancerHTTPSListenerWithOptions(shared_ptr<CreateLoadBalancerHTTPSListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclId)) {
    query->insert(pair<string, string>("AclId", *request->aclId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclStatus)) {
    query->insert(pair<string, string>("AclStatus", *request->aclStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclType)) {
    query->insert(pair<string, string>("AclType", *request->aclType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->backendServerPort)) {
    query->insert(pair<string, long>("BackendServerPort", *request->backendServerPort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bandwidth)) {
    query->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->CACertificateId)) {
    query->insert(pair<string, string>("CACertificateId", *request->CACertificateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cookie)) {
    query->insert(pair<string, string>("Cookie", *request->cookie));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cookieTimeout)) {
    query->insert(pair<string, long>("CookieTimeout", *request->cookieTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enableHttp2)) {
    query->insert(pair<string, string>("EnableHttp2", *request->enableHttp2));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gzip)) {
    query->insert(pair<string, string>("Gzip", *request->gzip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheck)) {
    query->insert(pair<string, string>("HealthCheck", *request->healthCheck));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckConnectPort)) {
    query->insert(pair<string, long>("HealthCheckConnectPort", *request->healthCheckConnectPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckDomain)) {
    query->insert(pair<string, string>("HealthCheckDomain", *request->healthCheckDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckHttpCode)) {
    query->insert(pair<string, string>("HealthCheckHttpCode", *request->healthCheckHttpCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckInterval)) {
    query->insert(pair<string, long>("HealthCheckInterval", *request->healthCheckInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckMethod)) {
    query->insert(pair<string, string>("HealthCheckMethod", *request->healthCheckMethod));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckTimeout)) {
    query->insert(pair<string, long>("HealthCheckTimeout", *request->healthCheckTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckURI)) {
    query->insert(pair<string, string>("HealthCheckURI", *request->healthCheckURI));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthyThreshold)) {
    query->insert(pair<string, long>("HealthyThreshold", *request->healthyThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->idleTimeout)) {
    query->insert(pair<string, long>("IdleTimeout", *request->idleTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->requestTimeout)) {
    query->insert(pair<string, long>("RequestTimeout", *request->requestTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduler)) {
    query->insert(pair<string, string>("Scheduler", *request->scheduler));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverCertificateId)) {
    query->insert(pair<string, string>("ServerCertificateId", *request->serverCertificateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stickySession)) {
    query->insert(pair<string, string>("StickySession", *request->stickySession));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stickySessionType)) {
    query->insert(pair<string, string>("StickySessionType", *request->stickySessionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->TLSCipherPolicy)) {
    query->insert(pair<string, string>("TLSCipherPolicy", *request->TLSCipherPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateLoadBalancerHTTPSListenerRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateLoadBalancerHTTPSListenerRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->unhealthyThreshold)) {
    query->insert(pair<string, long>("UnhealthyThreshold", *request->unhealthyThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VServerGroupId)) {
    query->insert(pair<string, string>("VServerGroupId", *request->VServerGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->XForwardedFor)) {
    query->insert(pair<string, string>("XForwardedFor", *request->XForwardedFor));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->XForwardedFor_ClientSrcPort)) {
    query->insert(pair<string, string>("XForwardedFor_ClientSrcPort", *request->XForwardedFor_ClientSrcPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->XForwardedFor_SLBID)) {
    query->insert(pair<string, string>("XForwardedFor_SLBID", *request->XForwardedFor_SLBID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->XForwardedFor_SLBIP)) {
    query->insert(pair<string, string>("XForwardedFor_SLBIP", *request->XForwardedFor_SLBIP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->XForwardedFor_SLBPORT)) {
    query->insert(pair<string, string>("XForwardedFor_SLBPORT", *request->XForwardedFor_SLBPORT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->XForwardedFor_proto)) {
    query->insert(pair<string, string>("XForwardedFor_proto", *request->XForwardedFor_proto));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLoadBalancerHTTPSListener"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLoadBalancerHTTPSListenerResponse(callApi(params, req, runtime));
}

CreateLoadBalancerHTTPSListenerResponse Alibabacloud_Slb20140515::Client::createLoadBalancerHTTPSListener(shared_ptr<CreateLoadBalancerHTTPSListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLoadBalancerHTTPSListenerWithOptions(request, runtime);
}

CreateLoadBalancerTCPListenerResponse Alibabacloud_Slb20140515::Client::createLoadBalancerTCPListenerWithOptions(shared_ptr<CreateLoadBalancerTCPListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclId)) {
    query->insert(pair<string, string>("AclId", *request->aclId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclStatus)) {
    query->insert(pair<string, string>("AclStatus", *request->aclStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclType)) {
    query->insert(pair<string, string>("AclType", *request->aclType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->backendServerPort)) {
    query->insert(pair<string, long>("BackendServerPort", *request->backendServerPort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bandwidth)) {
    query->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionDrain)) {
    query->insert(pair<string, string>("ConnectionDrain", *request->connectionDrain));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->connectionDrainTimeout)) {
    query->insert(pair<string, long>("ConnectionDrainTimeout", *request->connectionDrainTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->establishedTimeout)) {
    query->insert(pair<string, long>("EstablishedTimeout", *request->establishedTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckConnectPort)) {
    query->insert(pair<string, long>("HealthCheckConnectPort", *request->healthCheckConnectPort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckConnectTimeout)) {
    query->insert(pair<string, long>("HealthCheckConnectTimeout", *request->healthCheckConnectTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckDomain)) {
    query->insert(pair<string, string>("HealthCheckDomain", *request->healthCheckDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckHttpCode)) {
    query->insert(pair<string, string>("HealthCheckHttpCode", *request->healthCheckHttpCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckSwitch)) {
    query->insert(pair<string, string>("HealthCheckSwitch", *request->healthCheckSwitch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckType)) {
    query->insert(pair<string, string>("HealthCheckType", *request->healthCheckType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckURI)) {
    query->insert(pair<string, string>("HealthCheckURI", *request->healthCheckURI));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthyThreshold)) {
    query->insert(pair<string, long>("HealthyThreshold", *request->healthyThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterSlaveServerGroupId)) {
    query->insert(pair<string, string>("MasterSlaveServerGroupId", *request->masterSlaveServerGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->persistenceTimeout)) {
    query->insert(pair<string, long>("PersistenceTimeout", *request->persistenceTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->proxyProtocolV2Enabled)) {
    query->insert(pair<string, bool>("ProxyProtocolV2Enabled", *request->proxyProtocolV2Enabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduler)) {
    query->insert(pair<string, string>("Scheduler", *request->scheduler));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateLoadBalancerTCPListenerRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateLoadBalancerTCPListenerRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->unhealthyThreshold)) {
    query->insert(pair<string, long>("UnhealthyThreshold", *request->unhealthyThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VServerGroupId)) {
    query->insert(pair<string, string>("VServerGroupId", *request->VServerGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckInterval)) {
    query->insert(pair<string, long>("healthCheckInterval", *request->healthCheckInterval));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLoadBalancerTCPListener"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLoadBalancerTCPListenerResponse(callApi(params, req, runtime));
}

CreateLoadBalancerTCPListenerResponse Alibabacloud_Slb20140515::Client::createLoadBalancerTCPListener(shared_ptr<CreateLoadBalancerTCPListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLoadBalancerTCPListenerWithOptions(request, runtime);
}

CreateLoadBalancerUDPListenerResponse Alibabacloud_Slb20140515::Client::createLoadBalancerUDPListenerWithOptions(shared_ptr<CreateLoadBalancerUDPListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclId)) {
    query->insert(pair<string, string>("AclId", *request->aclId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclStatus)) {
    query->insert(pair<string, string>("AclStatus", *request->aclStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclType)) {
    query->insert(pair<string, string>("AclType", *request->aclType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->backendServerPort)) {
    query->insert(pair<string, long>("BackendServerPort", *request->backendServerPort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bandwidth)) {
    query->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckConnectPort)) {
    query->insert(pair<string, long>("HealthCheckConnectPort", *request->healthCheckConnectPort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckConnectTimeout)) {
    query->insert(pair<string, long>("HealthCheckConnectTimeout", *request->healthCheckConnectTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckSwitch)) {
    query->insert(pair<string, string>("HealthCheckSwitch", *request->healthCheckSwitch));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthyThreshold)) {
    query->insert(pair<string, long>("HealthyThreshold", *request->healthyThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterSlaveServerGroupId)) {
    query->insert(pair<string, string>("MasterSlaveServerGroupId", *request->masterSlaveServerGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->proxyProtocolV2Enabled)) {
    query->insert(pair<string, bool>("ProxyProtocolV2Enabled", *request->proxyProtocolV2Enabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduler)) {
    query->insert(pair<string, string>("Scheduler", *request->scheduler));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateLoadBalancerUDPListenerRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateLoadBalancerUDPListenerRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->unhealthyThreshold)) {
    query->insert(pair<string, long>("UnhealthyThreshold", *request->unhealthyThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VServerGroupId)) {
    query->insert(pair<string, string>("VServerGroupId", *request->VServerGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckExp)) {
    query->insert(pair<string, string>("healthCheckExp", *request->healthCheckExp));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckInterval)) {
    query->insert(pair<string, long>("healthCheckInterval", *request->healthCheckInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckReq)) {
    query->insert(pair<string, string>("healthCheckReq", *request->healthCheckReq));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLoadBalancerUDPListener"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLoadBalancerUDPListenerResponse(callApi(params, req, runtime));
}

CreateLoadBalancerUDPListenerResponse Alibabacloud_Slb20140515::Client::createLoadBalancerUDPListener(shared_ptr<CreateLoadBalancerUDPListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLoadBalancerUDPListenerWithOptions(request, runtime);
}

CreateMasterSlaveServerGroupResponse Alibabacloud_Slb20140515::Client::createMasterSlaveServerGroupWithOptions(shared_ptr<CreateMasterSlaveServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterSlaveBackendServers)) {
    query->insert(pair<string, string>("MasterSlaveBackendServers", *request->masterSlaveBackendServers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterSlaveServerGroupName)) {
    query->insert(pair<string, string>("MasterSlaveServerGroupName", *request->masterSlaveServerGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateMasterSlaveServerGroupRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateMasterSlaveServerGroupRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMasterSlaveServerGroup"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMasterSlaveServerGroupResponse(callApi(params, req, runtime));
}

CreateMasterSlaveServerGroupResponse Alibabacloud_Slb20140515::Client::createMasterSlaveServerGroup(shared_ptr<CreateMasterSlaveServerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMasterSlaveServerGroupWithOptions(request, runtime);
}

CreateRulesResponse Alibabacloud_Slb20140515::Client::createRulesWithOptions(shared_ptr<CreateRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerProtocol)) {
    query->insert(pair<string, string>("ListenerProtocol", *request->listenerProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleList)) {
    query->insert(pair<string, string>("RuleList", *request->ruleList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRules"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRulesResponse(callApi(params, req, runtime));
}

CreateRulesResponse Alibabacloud_Slb20140515::Client::createRules(shared_ptr<CreateRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRulesWithOptions(request, runtime);
}

CreateTLSCipherPolicyResponse Alibabacloud_Slb20140515::Client::createTLSCipherPolicyWithOptions(shared_ptr<CreateTLSCipherPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ciphers)) {
    query->insert(pair<string, vector<string>>("Ciphers", *request->ciphers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->TLSVersions)) {
    query->insert(pair<string, vector<string>>("TLSVersions", *request->TLSVersions));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTLSCipherPolicy"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTLSCipherPolicyResponse(callApi(params, req, runtime));
}

CreateTLSCipherPolicyResponse Alibabacloud_Slb20140515::Client::createTLSCipherPolicy(shared_ptr<CreateTLSCipherPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTLSCipherPolicyWithOptions(request, runtime);
}

CreateVServerGroupResponse Alibabacloud_Slb20140515::Client::createVServerGroupWithOptions(shared_ptr<CreateVServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backendServers)) {
    query->insert(pair<string, string>("BackendServers", *request->backendServers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateVServerGroupRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateVServerGroupRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VServerGroupName)) {
    query->insert(pair<string, string>("VServerGroupName", *request->VServerGroupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVServerGroup"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateVServerGroupResponse(callApi(params, req, runtime));
}

CreateVServerGroupResponse Alibabacloud_Slb20140515::Client::createVServerGroup(shared_ptr<CreateVServerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVServerGroupWithOptions(request, runtime);
}

DeleteAccessControlListResponse Alibabacloud_Slb20140515::Client::deleteAccessControlListWithOptions(shared_ptr<DeleteAccessControlListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclId)) {
    query->insert(pair<string, string>("AclId", *request->aclId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAccessControlList"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAccessControlListResponse(callApi(params, req, runtime));
}

DeleteAccessControlListResponse Alibabacloud_Slb20140515::Client::deleteAccessControlList(shared_ptr<DeleteAccessControlListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAccessControlListWithOptions(request, runtime);
}

DeleteAccessLogsDownloadAttributeResponse Alibabacloud_Slb20140515::Client::deleteAccessLogsDownloadAttributeWithOptions(shared_ptr<DeleteAccessLogsDownloadAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logsDownloadAttributes)) {
    query->insert(pair<string, string>("LogsDownloadAttributes", *request->logsDownloadAttributes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAccessLogsDownloadAttribute"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAccessLogsDownloadAttributeResponse(callApi(params, req, runtime));
}

DeleteAccessLogsDownloadAttributeResponse Alibabacloud_Slb20140515::Client::deleteAccessLogsDownloadAttribute(shared_ptr<DeleteAccessLogsDownloadAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAccessLogsDownloadAttributeWithOptions(request, runtime);
}

DeleteCACertificateResponse Alibabacloud_Slb20140515::Client::deleteCACertificateWithOptions(shared_ptr<DeleteCACertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->CACertificateId)) {
    query->insert(pair<string, string>("CACertificateId", *request->CACertificateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCACertificate"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCACertificateResponse(callApi(params, req, runtime));
}

DeleteCACertificateResponse Alibabacloud_Slb20140515::Client::deleteCACertificate(shared_ptr<DeleteCACertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCACertificateWithOptions(request, runtime);
}

DeleteDomainExtensionResponse Alibabacloud_Slb20140515::Client::deleteDomainExtensionWithOptions(shared_ptr<DeleteDomainExtensionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainExtensionId)) {
    query->insert(pair<string, string>("DomainExtensionId", *request->domainExtensionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDomainExtension"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDomainExtensionResponse(callApi(params, req, runtime));
}

DeleteDomainExtensionResponse Alibabacloud_Slb20140515::Client::deleteDomainExtension(shared_ptr<DeleteDomainExtensionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDomainExtensionWithOptions(request, runtime);
}

DeleteLoadBalancerResponse Alibabacloud_Slb20140515::Client::deleteLoadBalancerWithOptions(shared_ptr<DeleteLoadBalancerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLoadBalancer"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLoadBalancerResponse(callApi(params, req, runtime));
}

DeleteLoadBalancerResponse Alibabacloud_Slb20140515::Client::deleteLoadBalancer(shared_ptr<DeleteLoadBalancerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLoadBalancerWithOptions(request, runtime);
}

DeleteLoadBalancerListenerResponse Alibabacloud_Slb20140515::Client::deleteLoadBalancerListenerWithOptions(shared_ptr<DeleteLoadBalancerListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerProtocol)) {
    query->insert(pair<string, string>("ListenerProtocol", *request->listenerProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLoadBalancerListener"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLoadBalancerListenerResponse(callApi(params, req, runtime));
}

DeleteLoadBalancerListenerResponse Alibabacloud_Slb20140515::Client::deleteLoadBalancerListener(shared_ptr<DeleteLoadBalancerListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLoadBalancerListenerWithOptions(request, runtime);
}

DeleteMasterSlaveServerGroupResponse Alibabacloud_Slb20140515::Client::deleteMasterSlaveServerGroupWithOptions(shared_ptr<DeleteMasterSlaveServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->masterSlaveServerGroupId)) {
    query->insert(pair<string, string>("MasterSlaveServerGroupId", *request->masterSlaveServerGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMasterSlaveServerGroup"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMasterSlaveServerGroupResponse(callApi(params, req, runtime));
}

DeleteMasterSlaveServerGroupResponse Alibabacloud_Slb20140515::Client::deleteMasterSlaveServerGroup(shared_ptr<DeleteMasterSlaveServerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMasterSlaveServerGroupWithOptions(request, runtime);
}

DeleteRulesResponse Alibabacloud_Slb20140515::Client::deleteRulesWithOptions(shared_ptr<DeleteRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleIds)) {
    query->insert(pair<string, string>("RuleIds", *request->ruleIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRules"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRulesResponse(callApi(params, req, runtime));
}

DeleteRulesResponse Alibabacloud_Slb20140515::Client::deleteRules(shared_ptr<DeleteRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRulesWithOptions(request, runtime);
}

DeleteServerCertificateResponse Alibabacloud_Slb20140515::Client::deleteServerCertificateWithOptions(shared_ptr<DeleteServerCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverCertificateId)) {
    query->insert(pair<string, string>("ServerCertificateId", *request->serverCertificateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteServerCertificate"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteServerCertificateResponse(callApi(params, req, runtime));
}

DeleteServerCertificateResponse Alibabacloud_Slb20140515::Client::deleteServerCertificate(shared_ptr<DeleteServerCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteServerCertificateWithOptions(request, runtime);
}

DeleteTLSCipherPolicyResponse Alibabacloud_Slb20140515::Client::deleteTLSCipherPolicyWithOptions(shared_ptr<DeleteTLSCipherPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->TLSCipherPolicyId)) {
    query->insert(pair<string, string>("TLSCipherPolicyId", *request->TLSCipherPolicyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTLSCipherPolicy"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTLSCipherPolicyResponse(callApi(params, req, runtime));
}

DeleteTLSCipherPolicyResponse Alibabacloud_Slb20140515::Client::deleteTLSCipherPolicy(shared_ptr<DeleteTLSCipherPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTLSCipherPolicyWithOptions(request, runtime);
}

DeleteVServerGroupResponse Alibabacloud_Slb20140515::Client::deleteVServerGroupWithOptions(shared_ptr<DeleteVServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VServerGroupId)) {
    query->insert(pair<string, string>("VServerGroupId", *request->VServerGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVServerGroup"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteVServerGroupResponse(callApi(params, req, runtime));
}

DeleteVServerGroupResponse Alibabacloud_Slb20140515::Client::deleteVServerGroup(shared_ptr<DeleteVServerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVServerGroupWithOptions(request, runtime);
}

DescribeAccessControlListAttributeResponse Alibabacloud_Slb20140515::Client::describeAccessControlListAttributeWithOptions(shared_ptr<DescribeAccessControlListAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclEntryComment)) {
    query->insert(pair<string, string>("AclEntryComment", *request->aclEntryComment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclId)) {
    query->insert(pair<string, string>("AclId", *request->aclId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAccessControlListAttribute"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAccessControlListAttributeResponse(callApi(params, req, runtime));
}

DescribeAccessControlListAttributeResponse Alibabacloud_Slb20140515::Client::describeAccessControlListAttribute(shared_ptr<DescribeAccessControlListAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAccessControlListAttributeWithOptions(request, runtime);
}

DescribeAccessControlListsResponse Alibabacloud_Slb20140515::Client::describeAccessControlListsWithOptions(shared_ptr<DescribeAccessControlListsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclName)) {
    query->insert(pair<string, string>("AclName", *request->aclName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->addressIPVersion)) {
    query->insert(pair<string, string>("AddressIPVersion", *request->addressIPVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeAccessControlListsRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeAccessControlListsRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAccessControlLists"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAccessControlListsResponse(callApi(params, req, runtime));
}

DescribeAccessControlListsResponse Alibabacloud_Slb20140515::Client::describeAccessControlLists(shared_ptr<DescribeAccessControlListsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAccessControlListsWithOptions(request, runtime);
}

DescribeAccessLogsDownloadAttributeResponse Alibabacloud_Slb20140515::Client::describeAccessLogsDownloadAttributeWithOptions(shared_ptr<DescribeAccessLogsDownloadAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logType)) {
    query->insert(pair<string, string>("LogType", *request->logType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAccessLogsDownloadAttribute"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAccessLogsDownloadAttributeResponse(callApi(params, req, runtime));
}

DescribeAccessLogsDownloadAttributeResponse Alibabacloud_Slb20140515::Client::describeAccessLogsDownloadAttribute(shared_ptr<DescribeAccessLogsDownloadAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAccessLogsDownloadAttributeWithOptions(request, runtime);
}

DescribeAvailableResourceResponse Alibabacloud_Slb20140515::Client::describeAvailableResourceWithOptions(shared_ptr<DescribeAvailableResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addressIPVersion)) {
    query->insert(pair<string, string>("AddressIPVersion", *request->addressIPVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->addressType)) {
    query->insert(pair<string, string>("AddressType", *request->addressType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAvailableResource"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAvailableResourceResponse(callApi(params, req, runtime));
}

DescribeAvailableResourceResponse Alibabacloud_Slb20140515::Client::describeAvailableResource(shared_ptr<DescribeAvailableResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvailableResourceWithOptions(request, runtime);
}

DescribeCACertificatesResponse Alibabacloud_Slb20140515::Client::describeCACertificatesWithOptions(shared_ptr<DescribeCACertificatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->CACertificateId)) {
    query->insert(pair<string, string>("CACertificateId", *request->CACertificateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeCACertificatesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeCACertificatesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCACertificates"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCACertificatesResponse(callApi(params, req, runtime));
}

DescribeCACertificatesResponse Alibabacloud_Slb20140515::Client::describeCACertificates(shared_ptr<DescribeCACertificatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCACertificatesWithOptions(request, runtime);
}

DescribeDomainExtensionAttributeResponse Alibabacloud_Slb20140515::Client::describeDomainExtensionAttributeWithOptions(shared_ptr<DescribeDomainExtensionAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainExtensionId)) {
    query->insert(pair<string, string>("DomainExtensionId", *request->domainExtensionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomainExtensionAttribute"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainExtensionAttributeResponse(callApi(params, req, runtime));
}

DescribeDomainExtensionAttributeResponse Alibabacloud_Slb20140515::Client::describeDomainExtensionAttribute(shared_ptr<DescribeDomainExtensionAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainExtensionAttributeWithOptions(request, runtime);
}

DescribeDomainExtensionsResponse Alibabacloud_Slb20140515::Client::describeDomainExtensionsWithOptions(shared_ptr<DescribeDomainExtensionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainExtensionId)) {
    query->insert(pair<string, string>("DomainExtensionId", *request->domainExtensionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomainExtensions"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainExtensionsResponse(callApi(params, req, runtime));
}

DescribeDomainExtensionsResponse Alibabacloud_Slb20140515::Client::describeDomainExtensions(shared_ptr<DescribeDomainExtensionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainExtensionsWithOptions(request, runtime);
}

DescribeHealthStatusResponse Alibabacloud_Slb20140515::Client::describeHealthStatusWithOptions(shared_ptr<DescribeHealthStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerProtocol)) {
    query->insert(pair<string, string>("ListenerProtocol", *request->listenerProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHealthStatus"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHealthStatusResponse(callApi(params, req, runtime));
}

DescribeHealthStatusResponse Alibabacloud_Slb20140515::Client::describeHealthStatus(shared_ptr<DescribeHealthStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHealthStatusWithOptions(request, runtime);
}

DescribeHighDefinationMonitorResponse Alibabacloud_Slb20140515::Client::describeHighDefinationMonitorWithOptions(shared_ptr<DescribeHighDefinationMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHighDefinationMonitor"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHighDefinationMonitorResponse(callApi(params, req, runtime));
}

DescribeHighDefinationMonitorResponse Alibabacloud_Slb20140515::Client::describeHighDefinationMonitor(shared_ptr<DescribeHighDefinationMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHighDefinationMonitorWithOptions(request, runtime);
}

DescribeListenerAccessControlAttributeResponse Alibabacloud_Slb20140515::Client::describeListenerAccessControlAttributeWithOptions(shared_ptr<DescribeListenerAccessControlAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerProtocol)) {
    query->insert(pair<string, string>("ListenerProtocol", *request->listenerProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeListenerAccessControlAttribute"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeListenerAccessControlAttributeResponse(callApi(params, req, runtime));
}

DescribeListenerAccessControlAttributeResponse Alibabacloud_Slb20140515::Client::describeListenerAccessControlAttribute(shared_ptr<DescribeListenerAccessControlAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeListenerAccessControlAttributeWithOptions(request, runtime);
}

DescribeLoadBalancerAttributeResponse Alibabacloud_Slb20140515::Client::describeLoadBalancerAttributeWithOptions(shared_ptr<DescribeLoadBalancerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLoadBalancerAttribute"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLoadBalancerAttributeResponse(callApi(params, req, runtime));
}

DescribeLoadBalancerAttributeResponse Alibabacloud_Slb20140515::Client::describeLoadBalancerAttribute(shared_ptr<DescribeLoadBalancerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLoadBalancerAttributeWithOptions(request, runtime);
}

DescribeLoadBalancerHTTPListenerAttributeResponse Alibabacloud_Slb20140515::Client::describeLoadBalancerHTTPListenerAttributeWithOptions(shared_ptr<DescribeLoadBalancerHTTPListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLoadBalancerHTTPListenerAttribute"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLoadBalancerHTTPListenerAttributeResponse(callApi(params, req, runtime));
}

DescribeLoadBalancerHTTPListenerAttributeResponse Alibabacloud_Slb20140515::Client::describeLoadBalancerHTTPListenerAttribute(shared_ptr<DescribeLoadBalancerHTTPListenerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLoadBalancerHTTPListenerAttributeWithOptions(request, runtime);
}

DescribeLoadBalancerHTTPSListenerAttributeResponse Alibabacloud_Slb20140515::Client::describeLoadBalancerHTTPSListenerAttributeWithOptions(shared_ptr<DescribeLoadBalancerHTTPSListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLoadBalancerHTTPSListenerAttribute"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLoadBalancerHTTPSListenerAttributeResponse(callApi(params, req, runtime));
}

DescribeLoadBalancerHTTPSListenerAttributeResponse Alibabacloud_Slb20140515::Client::describeLoadBalancerHTTPSListenerAttribute(shared_ptr<DescribeLoadBalancerHTTPSListenerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLoadBalancerHTTPSListenerAttributeWithOptions(request, runtime);
}

DescribeLoadBalancerListenersResponse Alibabacloud_Slb20140515::Client::describeLoadBalancerListenersWithOptions(shared_ptr<DescribeLoadBalancerListenersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerProtocol)) {
    query->insert(pair<string, string>("ListenerProtocol", *request->listenerProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->loadBalancerId)) {
    query->insert(pair<string, vector<string>>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeLoadBalancerListenersRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeLoadBalancerListenersRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLoadBalancerListeners"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLoadBalancerListenersResponse(callApi(params, req, runtime));
}

DescribeLoadBalancerListenersResponse Alibabacloud_Slb20140515::Client::describeLoadBalancerListeners(shared_ptr<DescribeLoadBalancerListenersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLoadBalancerListenersWithOptions(request, runtime);
}

DescribeLoadBalancerTCPListenerAttributeResponse Alibabacloud_Slb20140515::Client::describeLoadBalancerTCPListenerAttributeWithOptions(shared_ptr<DescribeLoadBalancerTCPListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLoadBalancerTCPListenerAttribute"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLoadBalancerTCPListenerAttributeResponse(callApi(params, req, runtime));
}

DescribeLoadBalancerTCPListenerAttributeResponse Alibabacloud_Slb20140515::Client::describeLoadBalancerTCPListenerAttribute(shared_ptr<DescribeLoadBalancerTCPListenerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLoadBalancerTCPListenerAttributeWithOptions(request, runtime);
}

DescribeLoadBalancerUDPListenerAttributeResponse Alibabacloud_Slb20140515::Client::describeLoadBalancerUDPListenerAttributeWithOptions(shared_ptr<DescribeLoadBalancerUDPListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLoadBalancerUDPListenerAttribute"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLoadBalancerUDPListenerAttributeResponse(callApi(params, req, runtime));
}

DescribeLoadBalancerUDPListenerAttributeResponse Alibabacloud_Slb20140515::Client::describeLoadBalancerUDPListenerAttribute(shared_ptr<DescribeLoadBalancerUDPListenerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLoadBalancerUDPListenerAttributeWithOptions(request, runtime);
}

DescribeLoadBalancersResponse Alibabacloud_Slb20140515::Client::describeLoadBalancersWithOptions(shared_ptr<DescribeLoadBalancersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("Address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->addressIPVersion)) {
    query->insert(pair<string, string>("AddressIPVersion", *request->addressIPVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->addressType)) {
    query->insert(pair<string, string>("AddressType", *request->addressType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internetChargeType)) {
    query->insert(pair<string, string>("InternetChargeType", *request->internetChargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerName)) {
    query->insert(pair<string, string>("LoadBalancerName", *request->loadBalancerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerStatus)) {
    query->insert(pair<string, string>("LoadBalancerStatus", *request->loadBalancerStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterZoneId)) {
    query->insert(pair<string, string>("MasterZoneId", *request->masterZoneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkType)) {
    query->insert(pair<string, string>("NetworkType", *request->networkType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payType)) {
    query->insert(pair<string, string>("PayType", *request->payType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverId)) {
    query->insert(pair<string, string>("ServerId", *request->serverId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverIntranetAddress)) {
    query->insert(pair<string, string>("ServerIntranetAddress", *request->serverIntranetAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slaveZoneId)) {
    query->insert(pair<string, string>("SlaveZoneId", *request->slaveZoneId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeLoadBalancersRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeLoadBalancersRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLoadBalancers"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLoadBalancersResponse(callApi(params, req, runtime));
}

DescribeLoadBalancersResponse Alibabacloud_Slb20140515::Client::describeLoadBalancers(shared_ptr<DescribeLoadBalancersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLoadBalancersWithOptions(request, runtime);
}

DescribeMasterSlaveServerGroupAttributeResponse Alibabacloud_Slb20140515::Client::describeMasterSlaveServerGroupAttributeWithOptions(shared_ptr<DescribeMasterSlaveServerGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->masterSlaveServerGroupId)) {
    query->insert(pair<string, string>("MasterSlaveServerGroupId", *request->masterSlaveServerGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMasterSlaveServerGroupAttribute"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMasterSlaveServerGroupAttributeResponse(callApi(params, req, runtime));
}

DescribeMasterSlaveServerGroupAttributeResponse Alibabacloud_Slb20140515::Client::describeMasterSlaveServerGroupAttribute(shared_ptr<DescribeMasterSlaveServerGroupAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMasterSlaveServerGroupAttributeWithOptions(request, runtime);
}

DescribeMasterSlaveServerGroupsResponse Alibabacloud_Slb20140515::Client::describeMasterSlaveServerGroupsWithOptions(shared_ptr<DescribeMasterSlaveServerGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeListener)) {
    query->insert(pair<string, bool>("IncludeListener", *request->includeListener));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeMasterSlaveServerGroupsRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeMasterSlaveServerGroupsRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMasterSlaveServerGroups"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMasterSlaveServerGroupsResponse(callApi(params, req, runtime));
}

DescribeMasterSlaveServerGroupsResponse Alibabacloud_Slb20140515::Client::describeMasterSlaveServerGroups(shared_ptr<DescribeMasterSlaveServerGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMasterSlaveServerGroupsWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Slb20140515::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2014-05-15"))},
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

DescribeRegionsResponse Alibabacloud_Slb20140515::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeRuleAttributeResponse Alibabacloud_Slb20140515::Client::describeRuleAttributeWithOptions(shared_ptr<DescribeRuleAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRuleAttribute"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRuleAttributeResponse(callApi(params, req, runtime));
}

DescribeRuleAttributeResponse Alibabacloud_Slb20140515::Client::describeRuleAttribute(shared_ptr<DescribeRuleAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRuleAttributeWithOptions(request, runtime);
}

DescribeRulesResponse Alibabacloud_Slb20140515::Client::describeRulesWithOptions(shared_ptr<DescribeRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerProtocol)) {
    query->insert(pair<string, string>("ListenerProtocol", *request->listenerProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRules"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRulesResponse(callApi(params, req, runtime));
}

DescribeRulesResponse Alibabacloud_Slb20140515::Client::describeRules(shared_ptr<DescribeRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRulesWithOptions(request, runtime);
}

DescribeServerCertificatesResponse Alibabacloud_Slb20140515::Client::describeServerCertificatesWithOptions(shared_ptr<DescribeServerCertificatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverCertificateId)) {
    query->insert(pair<string, string>("ServerCertificateId", *request->serverCertificateId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeServerCertificatesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeServerCertificatesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServerCertificates"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeServerCertificatesResponse(callApi(params, req, runtime));
}

DescribeServerCertificatesResponse Alibabacloud_Slb20140515::Client::describeServerCertificates(shared_ptr<DescribeServerCertificatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServerCertificatesWithOptions(request, runtime);
}

DescribeTagsResponse Alibabacloud_Slb20140515::Client::describeTagsWithOptions(shared_ptr<DescribeTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->distinctKey)) {
    query->insert(pair<string, bool>("DistinctKey", *request->distinctKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTags"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTagsResponse(callApi(params, req, runtime));
}

DescribeTagsResponse Alibabacloud_Slb20140515::Client::describeTags(shared_ptr<DescribeTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTagsWithOptions(request, runtime);
}

DescribeVServerGroupAttributeResponse Alibabacloud_Slb20140515::Client::describeVServerGroupAttributeWithOptions(shared_ptr<DescribeVServerGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VServerGroupId)) {
    query->insert(pair<string, string>("VServerGroupId", *request->VServerGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVServerGroupAttribute"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVServerGroupAttributeResponse(callApi(params, req, runtime));
}

DescribeVServerGroupAttributeResponse Alibabacloud_Slb20140515::Client::describeVServerGroupAttribute(shared_ptr<DescribeVServerGroupAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVServerGroupAttributeWithOptions(request, runtime);
}

DescribeVServerGroupsResponse Alibabacloud_Slb20140515::Client::describeVServerGroupsWithOptions(shared_ptr<DescribeVServerGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeListener)) {
    query->insert(pair<string, bool>("IncludeListener", *request->includeListener));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeRule)) {
    query->insert(pair<string, bool>("IncludeRule", *request->includeRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeVServerGroupsRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeVServerGroupsRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVServerGroups"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVServerGroupsResponse(callApi(params, req, runtime));
}

DescribeVServerGroupsResponse Alibabacloud_Slb20140515::Client::describeVServerGroups(shared_ptr<DescribeVServerGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVServerGroupsWithOptions(request, runtime);
}

DescribeZonesResponse Alibabacloud_Slb20140515::Client::describeZonesWithOptions(shared_ptr<DescribeZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeZones"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeZonesResponse(callApi(params, req, runtime));
}

DescribeZonesResponse Alibabacloud_Slb20140515::Client::describeZones(shared_ptr<DescribeZonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeZonesWithOptions(request, runtime);
}

EnableHighDefinationMonitorResponse Alibabacloud_Slb20140515::Client::enableHighDefinationMonitorWithOptions(shared_ptr<EnableHighDefinationMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->logProject)) {
    query->insert(pair<string, string>("LogProject", *request->logProject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logStore)) {
    query->insert(pair<string, string>("LogStore", *request->logStore));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableHighDefinationMonitor"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableHighDefinationMonitorResponse(callApi(params, req, runtime));
}

EnableHighDefinationMonitorResponse Alibabacloud_Slb20140515::Client::enableHighDefinationMonitor(shared_ptr<EnableHighDefinationMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableHighDefinationMonitorWithOptions(request, runtime);
}

ListTLSCipherPoliciesResponse Alibabacloud_Slb20140515::Client::listTLSCipherPoliciesWithOptions(shared_ptr<ListTLSCipherPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeListener)) {
    query->insert(pair<string, bool>("IncludeListener", *request->includeListener));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxItems)) {
    query->insert(pair<string, long>("MaxItems", *request->maxItems));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->TLSCipherPolicyId)) {
    query->insert(pair<string, string>("TLSCipherPolicyId", *request->TLSCipherPolicyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTLSCipherPolicies"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTLSCipherPoliciesResponse(callApi(params, req, runtime));
}

ListTLSCipherPoliciesResponse Alibabacloud_Slb20140515::Client::listTLSCipherPolicies(shared_ptr<ListTLSCipherPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTLSCipherPoliciesWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Slb20140515::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
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
    {"version", boost::any(string("2014-05-15"))},
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

ListTagResourcesResponse Alibabacloud_Slb20140515::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ModifyHighDefinationMonitorResponse Alibabacloud_Slb20140515::Client::modifyHighDefinationMonitorWithOptions(shared_ptr<ModifyHighDefinationMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->logProject)) {
    query->insert(pair<string, string>("LogProject", *request->logProject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logStore)) {
    query->insert(pair<string, string>("LogStore", *request->logStore));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyHighDefinationMonitor"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyHighDefinationMonitorResponse(callApi(params, req, runtime));
}

ModifyHighDefinationMonitorResponse Alibabacloud_Slb20140515::Client::modifyHighDefinationMonitor(shared_ptr<ModifyHighDefinationMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyHighDefinationMonitorWithOptions(request, runtime);
}

ModifyLoadBalancerInstanceChargeTypeResponse Alibabacloud_Slb20140515::Client::modifyLoadBalancerInstanceChargeTypeWithOptions(shared_ptr<ModifyLoadBalancerInstanceChargeTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->bandwidth)) {
    query->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceChargeType)) {
    query->insert(pair<string, string>("InstanceChargeType", *request->instanceChargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internetChargeType)) {
    query->insert(pair<string, string>("InternetChargeType", *request->internetChargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerSpec)) {
    query->insert(pair<string, string>("LoadBalancerSpec", *request->loadBalancerSpec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyLoadBalancerInstanceChargeType"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyLoadBalancerInstanceChargeTypeResponse(callApi(params, req, runtime));
}

ModifyLoadBalancerInstanceChargeTypeResponse Alibabacloud_Slb20140515::Client::modifyLoadBalancerInstanceChargeType(shared_ptr<ModifyLoadBalancerInstanceChargeTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyLoadBalancerInstanceChargeTypeWithOptions(request, runtime);
}

ModifyLoadBalancerInstanceSpecResponse Alibabacloud_Slb20140515::Client::modifyLoadBalancerInstanceSpecWithOptions(shared_ptr<ModifyLoadBalancerInstanceSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerSpec)) {
    query->insert(pair<string, string>("LoadBalancerSpec", *request->loadBalancerSpec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyLoadBalancerInstanceSpec"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyLoadBalancerInstanceSpecResponse(callApi(params, req, runtime));
}

ModifyLoadBalancerInstanceSpecResponse Alibabacloud_Slb20140515::Client::modifyLoadBalancerInstanceSpec(shared_ptr<ModifyLoadBalancerInstanceSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyLoadBalancerInstanceSpecWithOptions(request, runtime);
}

ModifyLoadBalancerInternetSpecResponse Alibabacloud_Slb20140515::Client::modifyLoadBalancerInternetSpecWithOptions(shared_ptr<ModifyLoadBalancerInternetSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bandwidth)) {
    query->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internetChargeType)) {
    query->insert(pair<string, string>("InternetChargeType", *request->internetChargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyLoadBalancerInternetSpec"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyLoadBalancerInternetSpecResponse(callApi(params, req, runtime));
}

ModifyLoadBalancerInternetSpecResponse Alibabacloud_Slb20140515::Client::modifyLoadBalancerInternetSpec(shared_ptr<ModifyLoadBalancerInternetSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyLoadBalancerInternetSpecWithOptions(request, runtime);
}

ModifyLoadBalancerPayTypeResponse Alibabacloud_Slb20140515::Client::modifyLoadBalancerPayTypeWithOptions(shared_ptr<ModifyLoadBalancerPayTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->duration)) {
    query->insert(pair<string, long>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payType)) {
    query->insert(pair<string, string>("PayType", *request->payType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pricingCycle)) {
    query->insert(pair<string, string>("PricingCycle", *request->pricingCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyLoadBalancerPayType"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyLoadBalancerPayTypeResponse(callApi(params, req, runtime));
}

ModifyLoadBalancerPayTypeResponse Alibabacloud_Slb20140515::Client::modifyLoadBalancerPayType(shared_ptr<ModifyLoadBalancerPayTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyLoadBalancerPayTypeWithOptions(request, runtime);
}

ModifyVServerGroupBackendServersResponse Alibabacloud_Slb20140515::Client::modifyVServerGroupBackendServersWithOptions(shared_ptr<ModifyVServerGroupBackendServersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->newBackendServers)) {
    query->insert(pair<string, string>("NewBackendServers", *request->newBackendServers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oldBackendServers)) {
    query->insert(pair<string, string>("OldBackendServers", *request->oldBackendServers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VServerGroupId)) {
    query->insert(pair<string, string>("VServerGroupId", *request->VServerGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyVServerGroupBackendServers"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyVServerGroupBackendServersResponse(callApi(params, req, runtime));
}

ModifyVServerGroupBackendServersResponse Alibabacloud_Slb20140515::Client::modifyVServerGroupBackendServers(shared_ptr<ModifyVServerGroupBackendServersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyVServerGroupBackendServersWithOptions(request, runtime);
}

MoveResourceGroupResponse Alibabacloud_Slb20140515::Client::moveResourceGroupWithOptions(shared_ptr<MoveResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->newResourceGroupId)) {
    query->insert(pair<string, string>("NewResourceGroupId", *request->newResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessKeyId)) {
    query->insert(pair<string, string>("access_key_id", *request->accessKeyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MoveResourceGroup"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MoveResourceGroupResponse(callApi(params, req, runtime));
}

MoveResourceGroupResponse Alibabacloud_Slb20140515::Client::moveResourceGroup(shared_ptr<MoveResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return moveResourceGroupWithOptions(request, runtime);
}

RemoveAccessControlListEntryResponse Alibabacloud_Slb20140515::Client::removeAccessControlListEntryWithOptions(shared_ptr<RemoveAccessControlListEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclEntrys)) {
    query->insert(pair<string, string>("AclEntrys", *request->aclEntrys));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclId)) {
    query->insert(pair<string, string>("AclId", *request->aclId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveAccessControlListEntry"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveAccessControlListEntryResponse(callApi(params, req, runtime));
}

RemoveAccessControlListEntryResponse Alibabacloud_Slb20140515::Client::removeAccessControlListEntry(shared_ptr<RemoveAccessControlListEntryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeAccessControlListEntryWithOptions(request, runtime);
}

RemoveBackendServersResponse Alibabacloud_Slb20140515::Client::removeBackendServersWithOptions(shared_ptr<RemoveBackendServersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backendServers)) {
    query->insert(pair<string, string>("BackendServers", *request->backendServers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveBackendServers"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveBackendServersResponse(callApi(params, req, runtime));
}

RemoveBackendServersResponse Alibabacloud_Slb20140515::Client::removeBackendServers(shared_ptr<RemoveBackendServersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeBackendServersWithOptions(request, runtime);
}

RemoveListenerWhiteListItemResponse Alibabacloud_Slb20140515::Client::removeListenerWhiteListItemWithOptions(shared_ptr<RemoveListenerWhiteListItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerProtocol)) {
    query->insert(pair<string, string>("ListenerProtocol", *request->listenerProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceItems)) {
    query->insert(pair<string, string>("SourceItems", *request->sourceItems));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveListenerWhiteListItem"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveListenerWhiteListItemResponse(callApi(params, req, runtime));
}

RemoveListenerWhiteListItemResponse Alibabacloud_Slb20140515::Client::removeListenerWhiteListItem(shared_ptr<RemoveListenerWhiteListItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeListenerWhiteListItemWithOptions(request, runtime);
}

RemoveTagsResponse Alibabacloud_Slb20140515::Client::removeTagsWithOptions(shared_ptr<RemoveTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveTags"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveTagsResponse(callApi(params, req, runtime));
}

RemoveTagsResponse Alibabacloud_Slb20140515::Client::removeTags(shared_ptr<RemoveTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeTagsWithOptions(request, runtime);
}

RemoveVServerGroupBackendServersResponse Alibabacloud_Slb20140515::Client::removeVServerGroupBackendServersWithOptions(shared_ptr<RemoveVServerGroupBackendServersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backendServers)) {
    query->insert(pair<string, string>("BackendServers", *request->backendServers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VServerGroupId)) {
    query->insert(pair<string, string>("VServerGroupId", *request->VServerGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveVServerGroupBackendServers"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveVServerGroupBackendServersResponse(callApi(params, req, runtime));
}

RemoveVServerGroupBackendServersResponse Alibabacloud_Slb20140515::Client::removeVServerGroupBackendServers(shared_ptr<RemoveVServerGroupBackendServersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeVServerGroupBackendServersWithOptions(request, runtime);
}

SetAccessControlListAttributeResponse Alibabacloud_Slb20140515::Client::setAccessControlListAttributeWithOptions(shared_ptr<SetAccessControlListAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclId)) {
    query->insert(pair<string, string>("AclId", *request->aclId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclName)) {
    query->insert(pair<string, string>("AclName", *request->aclName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetAccessControlListAttribute"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetAccessControlListAttributeResponse(callApi(params, req, runtime));
}

SetAccessControlListAttributeResponse Alibabacloud_Slb20140515::Client::setAccessControlListAttribute(shared_ptr<SetAccessControlListAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setAccessControlListAttributeWithOptions(request, runtime);
}

SetAccessLogsDownloadAttributeResponse Alibabacloud_Slb20140515::Client::setAccessLogsDownloadAttributeWithOptions(shared_ptr<SetAccessLogsDownloadAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logsDownloadAttributes)) {
    query->insert(pair<string, string>("LogsDownloadAttributes", *request->logsDownloadAttributes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetAccessLogsDownloadAttribute"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetAccessLogsDownloadAttributeResponse(callApi(params, req, runtime));
}

SetAccessLogsDownloadAttributeResponse Alibabacloud_Slb20140515::Client::setAccessLogsDownloadAttribute(shared_ptr<SetAccessLogsDownloadAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setAccessLogsDownloadAttributeWithOptions(request, runtime);
}

SetBackendServersResponse Alibabacloud_Slb20140515::Client::setBackendServersWithOptions(shared_ptr<SetBackendServersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backendServers)) {
    query->insert(pair<string, string>("BackendServers", *request->backendServers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetBackendServers"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetBackendServersResponse(callApi(params, req, runtime));
}

SetBackendServersResponse Alibabacloud_Slb20140515::Client::setBackendServers(shared_ptr<SetBackendServersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setBackendServersWithOptions(request, runtime);
}

SetCACertificateNameResponse Alibabacloud_Slb20140515::Client::setCACertificateNameWithOptions(shared_ptr<SetCACertificateNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->CACertificateId)) {
    query->insert(pair<string, string>("CACertificateId", *request->CACertificateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->CACertificateName)) {
    query->insert(pair<string, string>("CACertificateName", *request->CACertificateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetCACertificateName"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetCACertificateNameResponse(callApi(params, req, runtime));
}

SetCACertificateNameResponse Alibabacloud_Slb20140515::Client::setCACertificateName(shared_ptr<SetCACertificateNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setCACertificateNameWithOptions(request, runtime);
}

SetDomainExtensionAttributeResponse Alibabacloud_Slb20140515::Client::setDomainExtensionAttributeWithOptions(shared_ptr<SetDomainExtensionAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainExtensionId)) {
    query->insert(pair<string, string>("DomainExtensionId", *request->domainExtensionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverCertificateId)) {
    query->insert(pair<string, string>("ServerCertificateId", *request->serverCertificateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDomainExtensionAttribute"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDomainExtensionAttributeResponse(callApi(params, req, runtime));
}

SetDomainExtensionAttributeResponse Alibabacloud_Slb20140515::Client::setDomainExtensionAttribute(shared_ptr<SetDomainExtensionAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDomainExtensionAttributeWithOptions(request, runtime);
}

SetListenerAccessControlStatusResponse Alibabacloud_Slb20140515::Client::setListenerAccessControlStatusWithOptions(shared_ptr<SetListenerAccessControlStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessControlStatus)) {
    query->insert(pair<string, string>("AccessControlStatus", *request->accessControlStatus));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetListenerAccessControlStatus"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetListenerAccessControlStatusResponse(callApi(params, req, runtime));
}

SetListenerAccessControlStatusResponse Alibabacloud_Slb20140515::Client::setListenerAccessControlStatus(shared_ptr<SetListenerAccessControlStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setListenerAccessControlStatusWithOptions(request, runtime);
}

SetLoadBalancerDeleteProtectionResponse Alibabacloud_Slb20140515::Client::setLoadBalancerDeleteProtectionWithOptions(shared_ptr<SetLoadBalancerDeleteProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deleteProtection)) {
    query->insert(pair<string, string>("DeleteProtection", *request->deleteProtection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetLoadBalancerDeleteProtection"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetLoadBalancerDeleteProtectionResponse(callApi(params, req, runtime));
}

SetLoadBalancerDeleteProtectionResponse Alibabacloud_Slb20140515::Client::setLoadBalancerDeleteProtection(shared_ptr<SetLoadBalancerDeleteProtectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setLoadBalancerDeleteProtectionWithOptions(request, runtime);
}

SetLoadBalancerHTTPListenerAttributeResponse Alibabacloud_Slb20140515::Client::setLoadBalancerHTTPListenerAttributeWithOptions(shared_ptr<SetLoadBalancerHTTPListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclId)) {
    query->insert(pair<string, string>("AclId", *request->aclId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclStatus)) {
    query->insert(pair<string, string>("AclStatus", *request->aclStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclType)) {
    query->insert(pair<string, string>("AclType", *request->aclType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bandwidth)) {
    query->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cookie)) {
    query->insert(pair<string, string>("Cookie", *request->cookie));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cookieTimeout)) {
    query->insert(pair<string, long>("CookieTimeout", *request->cookieTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gzip)) {
    query->insert(pair<string, string>("Gzip", *request->gzip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheck)) {
    query->insert(pair<string, string>("HealthCheck", *request->healthCheck));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckConnectPort)) {
    query->insert(pair<string, long>("HealthCheckConnectPort", *request->healthCheckConnectPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckDomain)) {
    query->insert(pair<string, string>("HealthCheckDomain", *request->healthCheckDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckHttpCode)) {
    query->insert(pair<string, string>("HealthCheckHttpCode", *request->healthCheckHttpCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckInterval)) {
    query->insert(pair<string, long>("HealthCheckInterval", *request->healthCheckInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckMethod)) {
    query->insert(pair<string, string>("HealthCheckMethod", *request->healthCheckMethod));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckTimeout)) {
    query->insert(pair<string, long>("HealthCheckTimeout", *request->healthCheckTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckURI)) {
    query->insert(pair<string, string>("HealthCheckURI", *request->healthCheckURI));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthyThreshold)) {
    query->insert(pair<string, long>("HealthyThreshold", *request->healthyThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->idleTimeout)) {
    query->insert(pair<string, long>("IdleTimeout", *request->idleTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->requestTimeout)) {
    query->insert(pair<string, long>("RequestTimeout", *request->requestTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduler)) {
    query->insert(pair<string, string>("Scheduler", *request->scheduler));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stickySession)) {
    query->insert(pair<string, string>("StickySession", *request->stickySession));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stickySessionType)) {
    query->insert(pair<string, string>("StickySessionType", *request->stickySessionType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->unhealthyThreshold)) {
    query->insert(pair<string, long>("UnhealthyThreshold", *request->unhealthyThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VServerGroup)) {
    query->insert(pair<string, string>("VServerGroup", *request->VServerGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VServerGroupId)) {
    query->insert(pair<string, string>("VServerGroupId", *request->VServerGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->XForwardedFor)) {
    query->insert(pair<string, string>("XForwardedFor", *request->XForwardedFor));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->XForwardedFor_ClientSrcPort)) {
    query->insert(pair<string, string>("XForwardedFor_ClientSrcPort", *request->XForwardedFor_ClientSrcPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->XForwardedFor_SLBID)) {
    query->insert(pair<string, string>("XForwardedFor_SLBID", *request->XForwardedFor_SLBID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->XForwardedFor_SLBIP)) {
    query->insert(pair<string, string>("XForwardedFor_SLBIP", *request->XForwardedFor_SLBIP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->XForwardedFor_SLBPORT)) {
    query->insert(pair<string, string>("XForwardedFor_SLBPORT", *request->XForwardedFor_SLBPORT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->XForwardedFor_proto)) {
    query->insert(pair<string, string>("XForwardedFor_proto", *request->XForwardedFor_proto));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetLoadBalancerHTTPListenerAttribute"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetLoadBalancerHTTPListenerAttributeResponse(callApi(params, req, runtime));
}

SetLoadBalancerHTTPListenerAttributeResponse Alibabacloud_Slb20140515::Client::setLoadBalancerHTTPListenerAttribute(shared_ptr<SetLoadBalancerHTTPListenerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setLoadBalancerHTTPListenerAttributeWithOptions(request, runtime);
}

SetLoadBalancerHTTPSListenerAttributeResponse Alibabacloud_Slb20140515::Client::setLoadBalancerHTTPSListenerAttributeWithOptions(shared_ptr<SetLoadBalancerHTTPSListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclId)) {
    query->insert(pair<string, string>("AclId", *request->aclId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclStatus)) {
    query->insert(pair<string, string>("AclStatus", *request->aclStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclType)) {
    query->insert(pair<string, string>("AclType", *request->aclType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bandwidth)) {
    query->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->CACertificateId)) {
    query->insert(pair<string, string>("CACertificateId", *request->CACertificateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cookie)) {
    query->insert(pair<string, string>("Cookie", *request->cookie));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cookieTimeout)) {
    query->insert(pair<string, long>("CookieTimeout", *request->cookieTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enableHttp2)) {
    query->insert(pair<string, string>("EnableHttp2", *request->enableHttp2));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gzip)) {
    query->insert(pair<string, string>("Gzip", *request->gzip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheck)) {
    query->insert(pair<string, string>("HealthCheck", *request->healthCheck));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckConnectPort)) {
    query->insert(pair<string, long>("HealthCheckConnectPort", *request->healthCheckConnectPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckDomain)) {
    query->insert(pair<string, string>("HealthCheckDomain", *request->healthCheckDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckHttpCode)) {
    query->insert(pair<string, string>("HealthCheckHttpCode", *request->healthCheckHttpCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckInterval)) {
    query->insert(pair<string, long>("HealthCheckInterval", *request->healthCheckInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckMethod)) {
    query->insert(pair<string, string>("HealthCheckMethod", *request->healthCheckMethod));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckTimeout)) {
    query->insert(pair<string, long>("HealthCheckTimeout", *request->healthCheckTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckURI)) {
    query->insert(pair<string, string>("HealthCheckURI", *request->healthCheckURI));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthyThreshold)) {
    query->insert(pair<string, long>("HealthyThreshold", *request->healthyThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->idleTimeout)) {
    query->insert(pair<string, long>("IdleTimeout", *request->idleTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->requestTimeout)) {
    query->insert(pair<string, long>("RequestTimeout", *request->requestTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduler)) {
    query->insert(pair<string, string>("Scheduler", *request->scheduler));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverCertificateId)) {
    query->insert(pair<string, string>("ServerCertificateId", *request->serverCertificateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stickySession)) {
    query->insert(pair<string, string>("StickySession", *request->stickySession));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stickySessionType)) {
    query->insert(pair<string, string>("StickySessionType", *request->stickySessionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->TLSCipherPolicy)) {
    query->insert(pair<string, string>("TLSCipherPolicy", *request->TLSCipherPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->unhealthyThreshold)) {
    query->insert(pair<string, long>("UnhealthyThreshold", *request->unhealthyThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VServerGroup)) {
    query->insert(pair<string, string>("VServerGroup", *request->VServerGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VServerGroupId)) {
    query->insert(pair<string, string>("VServerGroupId", *request->VServerGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->XForwardedFor)) {
    query->insert(pair<string, string>("XForwardedFor", *request->XForwardedFor));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->XForwardedFor_ClientSrcPort)) {
    query->insert(pair<string, string>("XForwardedFor_ClientSrcPort", *request->XForwardedFor_ClientSrcPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->XForwardedFor_SLBID)) {
    query->insert(pair<string, string>("XForwardedFor_SLBID", *request->XForwardedFor_SLBID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->XForwardedFor_SLBIP)) {
    query->insert(pair<string, string>("XForwardedFor_SLBIP", *request->XForwardedFor_SLBIP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->XForwardedFor_SLBPORT)) {
    query->insert(pair<string, string>("XForwardedFor_SLBPORT", *request->XForwardedFor_SLBPORT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->XForwardedFor_proto)) {
    query->insert(pair<string, string>("XForwardedFor_proto", *request->XForwardedFor_proto));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetLoadBalancerHTTPSListenerAttribute"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetLoadBalancerHTTPSListenerAttributeResponse(callApi(params, req, runtime));
}

SetLoadBalancerHTTPSListenerAttributeResponse Alibabacloud_Slb20140515::Client::setLoadBalancerHTTPSListenerAttribute(shared_ptr<SetLoadBalancerHTTPSListenerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setLoadBalancerHTTPSListenerAttributeWithOptions(request, runtime);
}

SetLoadBalancerModificationProtectionResponse Alibabacloud_Slb20140515::Client::setLoadBalancerModificationProtectionWithOptions(shared_ptr<SetLoadBalancerModificationProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modificationProtectionReason)) {
    query->insert(pair<string, string>("ModificationProtectionReason", *request->modificationProtectionReason));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modificationProtectionStatus)) {
    query->insert(pair<string, string>("ModificationProtectionStatus", *request->modificationProtectionStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetLoadBalancerModificationProtection"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetLoadBalancerModificationProtectionResponse(callApi(params, req, runtime));
}

SetLoadBalancerModificationProtectionResponse Alibabacloud_Slb20140515::Client::setLoadBalancerModificationProtection(shared_ptr<SetLoadBalancerModificationProtectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setLoadBalancerModificationProtectionWithOptions(request, runtime);
}

SetLoadBalancerNameResponse Alibabacloud_Slb20140515::Client::setLoadBalancerNameWithOptions(shared_ptr<SetLoadBalancerNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerName)) {
    query->insert(pair<string, string>("LoadBalancerName", *request->loadBalancerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetLoadBalancerName"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetLoadBalancerNameResponse(callApi(params, req, runtime));
}

SetLoadBalancerNameResponse Alibabacloud_Slb20140515::Client::setLoadBalancerName(shared_ptr<SetLoadBalancerNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setLoadBalancerNameWithOptions(request, runtime);
}

SetLoadBalancerStatusResponse Alibabacloud_Slb20140515::Client::setLoadBalancerStatusWithOptions(shared_ptr<SetLoadBalancerStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerStatus)) {
    query->insert(pair<string, string>("LoadBalancerStatus", *request->loadBalancerStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetLoadBalancerStatus"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetLoadBalancerStatusResponse(callApi(params, req, runtime));
}

SetLoadBalancerStatusResponse Alibabacloud_Slb20140515::Client::setLoadBalancerStatus(shared_ptr<SetLoadBalancerStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setLoadBalancerStatusWithOptions(request, runtime);
}

SetLoadBalancerTCPListenerAttributeResponse Alibabacloud_Slb20140515::Client::setLoadBalancerTCPListenerAttributeWithOptions(shared_ptr<SetLoadBalancerTCPListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclId)) {
    query->insert(pair<string, string>("AclId", *request->aclId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclStatus)) {
    query->insert(pair<string, string>("AclStatus", *request->aclStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclType)) {
    query->insert(pair<string, string>("AclType", *request->aclType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bandwidth)) {
    query->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionDrain)) {
    query->insert(pair<string, string>("ConnectionDrain", *request->connectionDrain));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->connectionDrainTimeout)) {
    query->insert(pair<string, long>("ConnectionDrainTimeout", *request->connectionDrainTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->establishedTimeout)) {
    query->insert(pair<string, long>("EstablishedTimeout", *request->establishedTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckConnectPort)) {
    query->insert(pair<string, long>("HealthCheckConnectPort", *request->healthCheckConnectPort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckConnectTimeout)) {
    query->insert(pair<string, long>("HealthCheckConnectTimeout", *request->healthCheckConnectTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckDomain)) {
    query->insert(pair<string, string>("HealthCheckDomain", *request->healthCheckDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckHttpCode)) {
    query->insert(pair<string, string>("HealthCheckHttpCode", *request->healthCheckHttpCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckInterval)) {
    query->insert(pair<string, long>("HealthCheckInterval", *request->healthCheckInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckSwitch)) {
    query->insert(pair<string, string>("HealthCheckSwitch", *request->healthCheckSwitch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckType)) {
    query->insert(pair<string, string>("HealthCheckType", *request->healthCheckType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckURI)) {
    query->insert(pair<string, string>("HealthCheckURI", *request->healthCheckURI));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthyThreshold)) {
    query->insert(pair<string, long>("HealthyThreshold", *request->healthyThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterSlaveServerGroup)) {
    query->insert(pair<string, string>("MasterSlaveServerGroup", *request->masterSlaveServerGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterSlaveServerGroupId)) {
    query->insert(pair<string, string>("MasterSlaveServerGroupId", *request->masterSlaveServerGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->persistenceTimeout)) {
    query->insert(pair<string, long>("PersistenceTimeout", *request->persistenceTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->proxyProtocolV2Enabled)) {
    query->insert(pair<string, bool>("ProxyProtocolV2Enabled", *request->proxyProtocolV2Enabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduler)) {
    query->insert(pair<string, string>("Scheduler", *request->scheduler));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synProxy)) {
    query->insert(pair<string, string>("SynProxy", *request->synProxy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->unhealthyThreshold)) {
    query->insert(pair<string, long>("UnhealthyThreshold", *request->unhealthyThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VServerGroup)) {
    query->insert(pair<string, string>("VServerGroup", *request->VServerGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VServerGroupId)) {
    query->insert(pair<string, string>("VServerGroupId", *request->VServerGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetLoadBalancerTCPListenerAttribute"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetLoadBalancerTCPListenerAttributeResponse(callApi(params, req, runtime));
}

SetLoadBalancerTCPListenerAttributeResponse Alibabacloud_Slb20140515::Client::setLoadBalancerTCPListenerAttribute(shared_ptr<SetLoadBalancerTCPListenerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setLoadBalancerTCPListenerAttributeWithOptions(request, runtime);
}

SetLoadBalancerUDPListenerAttributeResponse Alibabacloud_Slb20140515::Client::setLoadBalancerUDPListenerAttributeWithOptions(shared_ptr<SetLoadBalancerUDPListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclId)) {
    query->insert(pair<string, string>("AclId", *request->aclId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclStatus)) {
    query->insert(pair<string, string>("AclStatus", *request->aclStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclType)) {
    query->insert(pair<string, string>("AclType", *request->aclType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bandwidth)) {
    query->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckConnectPort)) {
    query->insert(pair<string, long>("HealthCheckConnectPort", *request->healthCheckConnectPort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckConnectTimeout)) {
    query->insert(pair<string, long>("HealthCheckConnectTimeout", *request->healthCheckConnectTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckInterval)) {
    query->insert(pair<string, long>("HealthCheckInterval", *request->healthCheckInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckSwitch)) {
    query->insert(pair<string, string>("HealthCheckSwitch", *request->healthCheckSwitch));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthyThreshold)) {
    query->insert(pair<string, long>("HealthyThreshold", *request->healthyThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterSlaveServerGroup)) {
    query->insert(pair<string, string>("MasterSlaveServerGroup", *request->masterSlaveServerGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterSlaveServerGroupId)) {
    query->insert(pair<string, string>("MasterSlaveServerGroupId", *request->masterSlaveServerGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->proxyProtocolV2Enabled)) {
    query->insert(pair<string, bool>("ProxyProtocolV2Enabled", *request->proxyProtocolV2Enabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduler)) {
    query->insert(pair<string, string>("Scheduler", *request->scheduler));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->unhealthyThreshold)) {
    query->insert(pair<string, long>("UnhealthyThreshold", *request->unhealthyThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VServerGroup)) {
    query->insert(pair<string, string>("VServerGroup", *request->VServerGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VServerGroupId)) {
    query->insert(pair<string, string>("VServerGroupId", *request->VServerGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckExp)) {
    query->insert(pair<string, string>("healthCheckExp", *request->healthCheckExp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckReq)) {
    query->insert(pair<string, string>("healthCheckReq", *request->healthCheckReq));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetLoadBalancerUDPListenerAttribute"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetLoadBalancerUDPListenerAttributeResponse(callApi(params, req, runtime));
}

SetLoadBalancerUDPListenerAttributeResponse Alibabacloud_Slb20140515::Client::setLoadBalancerUDPListenerAttribute(shared_ptr<SetLoadBalancerUDPListenerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setLoadBalancerUDPListenerAttributeWithOptions(request, runtime);
}

SetRuleResponse Alibabacloud_Slb20140515::Client::setRuleWithOptions(shared_ptr<SetRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cookie)) {
    query->insert(pair<string, string>("Cookie", *request->cookie));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cookieTimeout)) {
    query->insert(pair<string, long>("CookieTimeout", *request->cookieTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheck)) {
    query->insert(pair<string, string>("HealthCheck", *request->healthCheck));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckConnectPort)) {
    query->insert(pair<string, long>("HealthCheckConnectPort", *request->healthCheckConnectPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckDomain)) {
    query->insert(pair<string, string>("HealthCheckDomain", *request->healthCheckDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckHttpCode)) {
    query->insert(pair<string, string>("HealthCheckHttpCode", *request->healthCheckHttpCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckInterval)) {
    query->insert(pair<string, long>("HealthCheckInterval", *request->healthCheckInterval));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckTimeout)) {
    query->insert(pair<string, long>("HealthCheckTimeout", *request->healthCheckTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckURI)) {
    query->insert(pair<string, string>("HealthCheckURI", *request->healthCheckURI));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthyThreshold)) {
    query->insert(pair<string, long>("HealthyThreshold", *request->healthyThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerSync)) {
    query->insert(pair<string, string>("ListenerSync", *request->listenerSync));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduler)) {
    query->insert(pair<string, string>("Scheduler", *request->scheduler));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stickySession)) {
    query->insert(pair<string, string>("StickySession", *request->stickySession));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stickySessionType)) {
    query->insert(pair<string, string>("StickySessionType", *request->stickySessionType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->unhealthyThreshold)) {
    query->insert(pair<string, long>("UnhealthyThreshold", *request->unhealthyThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VServerGroupId)) {
    query->insert(pair<string, string>("VServerGroupId", *request->VServerGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetRule"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetRuleResponse(callApi(params, req, runtime));
}

SetRuleResponse Alibabacloud_Slb20140515::Client::setRule(shared_ptr<SetRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setRuleWithOptions(request, runtime);
}

SetServerCertificateNameResponse Alibabacloud_Slb20140515::Client::setServerCertificateNameWithOptions(shared_ptr<SetServerCertificateNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverCertificateId)) {
    query->insert(pair<string, string>("ServerCertificateId", *request->serverCertificateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverCertificateName)) {
    query->insert(pair<string, string>("ServerCertificateName", *request->serverCertificateName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetServerCertificateName"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetServerCertificateNameResponse(callApi(params, req, runtime));
}

SetServerCertificateNameResponse Alibabacloud_Slb20140515::Client::setServerCertificateName(shared_ptr<SetServerCertificateNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setServerCertificateNameWithOptions(request, runtime);
}

SetTLSCipherPolicyAttributeResponse Alibabacloud_Slb20140515::Client::setTLSCipherPolicyAttributeWithOptions(shared_ptr<SetTLSCipherPolicyAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ciphers)) {
    query->insert(pair<string, vector<string>>("Ciphers", *request->ciphers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->TLSCipherPolicyId)) {
    query->insert(pair<string, string>("TLSCipherPolicyId", *request->TLSCipherPolicyId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->TLSVersions)) {
    query->insert(pair<string, vector<string>>("TLSVersions", *request->TLSVersions));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetTLSCipherPolicyAttribute"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetTLSCipherPolicyAttributeResponse(callApi(params, req, runtime));
}

SetTLSCipherPolicyAttributeResponse Alibabacloud_Slb20140515::Client::setTLSCipherPolicyAttribute(shared_ptr<SetTLSCipherPolicyAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setTLSCipherPolicyAttributeWithOptions(request, runtime);
}

SetVServerGroupAttributeResponse Alibabacloud_Slb20140515::Client::setVServerGroupAttributeWithOptions(shared_ptr<SetVServerGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backendServers)) {
    query->insert(pair<string, string>("BackendServers", *request->backendServers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VServerGroupId)) {
    query->insert(pair<string, string>("VServerGroupId", *request->VServerGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VServerGroupName)) {
    query->insert(pair<string, string>("VServerGroupName", *request->VServerGroupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetVServerGroupAttribute"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetVServerGroupAttributeResponse(callApi(params, req, runtime));
}

SetVServerGroupAttributeResponse Alibabacloud_Slb20140515::Client::setVServerGroupAttribute(shared_ptr<SetVServerGroupAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setVServerGroupAttributeWithOptions(request, runtime);
}

StartLoadBalancerListenerResponse Alibabacloud_Slb20140515::Client::startLoadBalancerListenerWithOptions(shared_ptr<StartLoadBalancerListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerProtocol)) {
    query->insert(pair<string, string>("ListenerProtocol", *request->listenerProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartLoadBalancerListener"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartLoadBalancerListenerResponse(callApi(params, req, runtime));
}

StartLoadBalancerListenerResponse Alibabacloud_Slb20140515::Client::startLoadBalancerListener(shared_ptr<StartLoadBalancerListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startLoadBalancerListenerWithOptions(request, runtime);
}

StopLoadBalancerListenerResponse Alibabacloud_Slb20140515::Client::stopLoadBalancerListenerWithOptions(shared_ptr<StopLoadBalancerListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerProtocol)) {
    query->insert(pair<string, string>("ListenerProtocol", *request->listenerProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    query->insert(pair<string, string>("LoadBalancerId", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopLoadBalancerListener"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopLoadBalancerListenerResponse(callApi(params, req, runtime));
}

StopLoadBalancerListenerResponse Alibabacloud_Slb20140515::Client::stopLoadBalancerListener(shared_ptr<StopLoadBalancerListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopLoadBalancerListenerWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Slb20140515::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
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
    {"version", boost::any(string("2014-05-15"))},
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

TagResourcesResponse Alibabacloud_Slb20140515::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Slb20140515::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("All", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
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
    {"version", boost::any(string("2014-05-15"))},
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

UntagResourcesResponse Alibabacloud_Slb20140515::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UploadCACertificateResponse Alibabacloud_Slb20140515::Client::uploadCACertificateWithOptions(shared_ptr<UploadCACertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->CACertificate)) {
    query->insert(pair<string, string>("CACertificate", *request->CACertificate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->CACertificateName)) {
    query->insert(pair<string, string>("CACertificateName", *request->CACertificateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UploadCACertificateRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<UploadCACertificateRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadCACertificate"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadCACertificateResponse(callApi(params, req, runtime));
}

UploadCACertificateResponse Alibabacloud_Slb20140515::Client::uploadCACertificate(shared_ptr<UploadCACertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadCACertificateWithOptions(request, runtime);
}

UploadServerCertificateResponse Alibabacloud_Slb20140515::Client::uploadServerCertificateWithOptions(shared_ptr<UploadServerCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliCloudCertificateId)) {
    query->insert(pair<string, string>("AliCloudCertificateId", *request->aliCloudCertificateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aliCloudCertificateName)) {
    query->insert(pair<string, string>("AliCloudCertificateName", *request->aliCloudCertificateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aliCloudCertificateRegionId)) {
    query->insert(pair<string, string>("AliCloudCertificateRegionId", *request->aliCloudCertificateRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->privateKey)) {
    query->insert(pair<string, string>("PrivateKey", *request->privateKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverCertificate)) {
    query->insert(pair<string, string>("ServerCertificate", *request->serverCertificate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverCertificateName)) {
    query->insert(pair<string, string>("ServerCertificateName", *request->serverCertificateName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UploadServerCertificateRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<UploadServerCertificateRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadServerCertificate"))},
    {"version", boost::any(string("2014-05-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadServerCertificateResponse(callApi(params, req, runtime));
}

UploadServerCertificateResponse Alibabacloud_Slb20140515::Client::uploadServerCertificate(shared_ptr<UploadServerCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadServerCertificateWithOptions(request, runtime);
}

