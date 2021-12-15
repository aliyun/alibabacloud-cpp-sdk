// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cddc_20200320.hpp>
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

using namespace Alibabacloud_Cddc20200320;

Alibabacloud_Cddc20200320::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("cddc"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Cddc20200320::Client::getEndpoint(shared_ptr<string> productId,
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

CreateDedicatedHostResponse Alibabacloud_Cddc20200320::Client::createDedicatedHostWithOptions(shared_ptr<CreateDedicatedHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AutoRenew", *request->autoRenew));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("DedicatedHostGroupId", *request->dedicatedHostGroupId));
  query->insert(pair<string, string>("HostClass", *request->hostClass));
  query->insert(pair<string, string>("HostName", *request->hostName));
  query->insert(pair<string, string>("ImageCategory", *request->imageCategory));
  query->insert(pair<string, string>("OsPassword", *request->osPassword));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("PayType", *request->payType));
  query->insert(pair<string, string>("Period", *request->period));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("UsedTime", *request->usedTime));
  query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  query->insert(pair<string, string>("ZoneId", *request->zoneId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDedicatedHost"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDedicatedHostResponse(callApi(params, req, runtime));
}

CreateDedicatedHostResponse Alibabacloud_Cddc20200320::Client::createDedicatedHost(shared_ptr<CreateDedicatedHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDedicatedHostWithOptions(request, runtime);
}

CreateDedicatedHostAccountResponse Alibabacloud_Cddc20200320::Client::createDedicatedHostAccountWithOptions(shared_ptr<CreateDedicatedHostAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AccountName", *request->accountName));
  query->insert(pair<string, string>("AccountPassword", *request->accountPassword));
  query->insert(pair<string, string>("AccountType", *request->accountType));
  query->insert(pair<string, string>("BastionInstanceId", *request->bastionInstanceId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("DedicatedHostId", *request->dedicatedHostId));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDedicatedHostAccount"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDedicatedHostAccountResponse(callApi(params, req, runtime));
}

CreateDedicatedHostAccountResponse Alibabacloud_Cddc20200320::Client::createDedicatedHostAccount(shared_ptr<CreateDedicatedHostAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDedicatedHostAccountWithOptions(request, runtime);
}

CreateDedicatedHostGroupResponse Alibabacloud_Cddc20200320::Client::createDedicatedHostGroupWithOptions(shared_ptr<CreateDedicatedHostGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AllocationPolicy", *request->allocationPolicy));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, long>("CpuAllocationRatio", *request->cpuAllocationRatio));
  query->insert(pair<string, string>("DedicatedHostGroupDesc", *request->dedicatedHostGroupDesc));
  query->insert(pair<string, long>("DiskAllocationRatio", *request->diskAllocationRatio));
  query->insert(pair<string, string>("Engine", *request->engine));
  query->insert(pair<string, string>("HostReplacePolicy", *request->hostReplacePolicy));
  query->insert(pair<string, long>("MemAllocationRatio", *request->memAllocationRatio));
  query->insert(pair<string, long>("OpenPermission", *request->openPermission));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("VPCId", *request->VPCId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDedicatedHostGroup"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDedicatedHostGroupResponse(callApi(params, req, runtime));
}

CreateDedicatedHostGroupResponse Alibabacloud_Cddc20200320::Client::createDedicatedHostGroup(shared_ptr<CreateDedicatedHostGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDedicatedHostGroupWithOptions(request, runtime);
}

DeleteDedicatedHostAccountResponse Alibabacloud_Cddc20200320::Client::deleteDedicatedHostAccountWithOptions(shared_ptr<DeleteDedicatedHostAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AccountName", *request->accountName));
  query->insert(pair<string, string>("DedicatedHostId", *request->dedicatedHostId));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDedicatedHostAccount"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDedicatedHostAccountResponse(callApi(params, req, runtime));
}

DeleteDedicatedHostAccountResponse Alibabacloud_Cddc20200320::Client::deleteDedicatedHostAccount(shared_ptr<DeleteDedicatedHostAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDedicatedHostAccountWithOptions(request, runtime);
}

DeleteDedicatedHostGroupResponse Alibabacloud_Cddc20200320::Client::deleteDedicatedHostGroupWithOptions(shared_ptr<DeleteDedicatedHostGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DedicatedHostGroupId", *request->dedicatedHostGroupId));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDedicatedHostGroup"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDedicatedHostGroupResponse(callApi(params, req, runtime));
}

DeleteDedicatedHostGroupResponse Alibabacloud_Cddc20200320::Client::deleteDedicatedHostGroup(shared_ptr<DeleteDedicatedHostGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDedicatedHostGroupWithOptions(request, runtime);
}

DescribeDedicatedHostAttributeResponse Alibabacloud_Cddc20200320::Client::describeDedicatedHostAttributeWithOptions(shared_ptr<DescribeDedicatedHostAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DedicatedHostGroupId", *request->dedicatedHostGroupId));
  query->insert(pair<string, string>("DedicatedHostId", *request->dedicatedHostId));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDedicatedHostAttribute"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDedicatedHostAttributeResponse(callApi(params, req, runtime));
}

DescribeDedicatedHostAttributeResponse Alibabacloud_Cddc20200320::Client::describeDedicatedHostAttribute(shared_ptr<DescribeDedicatedHostAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDedicatedHostAttributeWithOptions(request, runtime);
}

DescribeDedicatedHostDisksResponse Alibabacloud_Cddc20200320::Client::describeDedicatedHostDisksWithOptions(shared_ptr<DescribeDedicatedHostDisksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DedicatedHostId", *request->dedicatedHostId));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDedicatedHostDisks"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDedicatedHostDisksResponse(callApi(params, req, runtime));
}

DescribeDedicatedHostDisksResponse Alibabacloud_Cddc20200320::Client::describeDedicatedHostDisks(shared_ptr<DescribeDedicatedHostDisksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDedicatedHostDisksWithOptions(request, runtime);
}

DescribeDedicatedHostGroupsResponse Alibabacloud_Cddc20200320::Client::describeDedicatedHostGroupsWithOptions(shared_ptr<DescribeDedicatedHostGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DedicatedHostGroupId", *request->dedicatedHostGroupId));
  query->insert(pair<string, string>("Engine", *request->engine));
  query->insert(pair<string, string>("ImageCategory", *request->imageCategory));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDedicatedHostGroups"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDedicatedHostGroupsResponse(callApi(params, req, runtime));
}

DescribeDedicatedHostGroupsResponse Alibabacloud_Cddc20200320::Client::describeDedicatedHostGroups(shared_ptr<DescribeDedicatedHostGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDedicatedHostGroupsWithOptions(request, runtime);
}

DescribeDedicatedHostsResponse Alibabacloud_Cddc20200320::Client::describeDedicatedHostsWithOptions(shared_ptr<DescribeDedicatedHostsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AllocationStatus", *request->allocationStatus));
  query->insert(pair<string, string>("DedicatedHostGroupId", *request->dedicatedHostGroupId));
  query->insert(pair<string, string>("DedicatedHostId", *request->dedicatedHostId));
  query->insert(pair<string, string>("HostStatus", *request->hostStatus));
  query->insert(pair<string, string>("HostType", *request->hostType));
  query->insert(pair<string, long>("OrderId", *request->orderId));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, long>("PageNumbers", *request->pageNumbers));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("Tags", *request->tags));
  query->insert(pair<string, string>("ZoneId", *request->zoneId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDedicatedHosts"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDedicatedHostsResponse(callApi(params, req, runtime));
}

DescribeDedicatedHostsResponse Alibabacloud_Cddc20200320::Client::describeDedicatedHosts(shared_ptr<DescribeDedicatedHostsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDedicatedHostsWithOptions(request, runtime);
}

DescribeHostEcsLevelInfoResponse Alibabacloud_Cddc20200320::Client::describeHostEcsLevelInfoWithOptions(shared_ptr<DescribeHostEcsLevelInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbType", *request->dbType));
  query->insert(pair<string, string>("ImageCategory", *request->imageCategory));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("StorageType", *request->storageType));
  query->insert(pair<string, string>("ZoneId", *request->zoneId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHostEcsLevelInfo"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHostEcsLevelInfoResponse(callApi(params, req, runtime));
}

DescribeHostEcsLevelInfoResponse Alibabacloud_Cddc20200320::Client::describeHostEcsLevelInfo(shared_ptr<DescribeHostEcsLevelInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHostEcsLevelInfoWithOptions(request, runtime);
}

DescribeHostWebShellResponse Alibabacloud_Cddc20200320::Client::describeHostWebShellWithOptions(shared_ptr<DescribeHostWebShellRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DedicatedHostId", *request->dedicatedHostId));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ZoneId", *request->zoneId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHostWebShell"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHostWebShellResponse(callApi(params, req, runtime));
}

DescribeHostWebShellResponse Alibabacloud_Cddc20200320::Client::describeHostWebShell(shared_ptr<DescribeHostWebShellRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHostWebShellWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Cddc20200320::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2020-03-20"))},
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

DescribeRegionsResponse Alibabacloud_Cddc20200320::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Cddc20200320::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ResourceType", *request->resourceType));
  query->insert(pair<string, vector<ListTagResourcesRequestTag>>("Tag", *request->tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagResources"))},
    {"version", boost::any(string("2020-03-20"))},
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

ListTagResourcesResponse Alibabacloud_Cddc20200320::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ModifyDedicatedHostAccountResponse Alibabacloud_Cddc20200320::Client::modifyDedicatedHostAccountWithOptions(shared_ptr<ModifyDedicatedHostAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AccountName", *request->accountName));
  query->insert(pair<string, string>("AccountPassword", *request->accountPassword));
  query->insert(pair<string, string>("DedicatedHostId", *request->dedicatedHostId));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDedicatedHostAccount"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDedicatedHostAccountResponse(callApi(params, req, runtime));
}

ModifyDedicatedHostAccountResponse Alibabacloud_Cddc20200320::Client::modifyDedicatedHostAccount(shared_ptr<ModifyDedicatedHostAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDedicatedHostAccountWithOptions(request, runtime);
}

ModifyDedicatedHostAttributeResponse Alibabacloud_Cddc20200320::Client::modifyDedicatedHostAttributeWithOptions(shared_ptr<ModifyDedicatedHostAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AllocationStatus", *request->allocationStatus));
  query->insert(pair<string, string>("DedicatedHostId", *request->dedicatedHostId));
  query->insert(pair<string, string>("HostName", *request->hostName));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDedicatedHostAttribute"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDedicatedHostAttributeResponse(callApi(params, req, runtime));
}

ModifyDedicatedHostAttributeResponse Alibabacloud_Cddc20200320::Client::modifyDedicatedHostAttribute(shared_ptr<ModifyDedicatedHostAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDedicatedHostAttributeWithOptions(request, runtime);
}

ModifyDedicatedHostClassResponse Alibabacloud_Cddc20200320::Client::modifyDedicatedHostClassWithOptions(shared_ptr<ModifyDedicatedHostClassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DedicatedHostId", *request->dedicatedHostId));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("SwitchTime", *request->switchTime));
  query->insert(pair<string, string>("SwitchTimeMode", *request->switchTimeMode));
  query->insert(pair<string, string>("TargetClassCode", *request->targetClassCode));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDedicatedHostClass"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDedicatedHostClassResponse(callApi(params, req, runtime));
}

ModifyDedicatedHostClassResponse Alibabacloud_Cddc20200320::Client::modifyDedicatedHostClass(shared_ptr<ModifyDedicatedHostClassRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDedicatedHostClassWithOptions(request, runtime);
}

ModifyDedicatedHostGroupAttributeResponse Alibabacloud_Cddc20200320::Client::modifyDedicatedHostGroupAttributeWithOptions(shared_ptr<ModifyDedicatedHostGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AllocationPolicy", *request->allocationPolicy));
  query->insert(pair<string, long>("CpuAllocationRatio", *request->cpuAllocationRatio));
  query->insert(pair<string, string>("DedicatedHostGroupDesc", *request->dedicatedHostGroupDesc));
  query->insert(pair<string, string>("DedicatedHostGroupId", *request->dedicatedHostGroupId));
  query->insert(pair<string, long>("DiskAllocationRatio", *request->diskAllocationRatio));
  query->insert(pair<string, string>("HostReplacePolicy", *request->hostReplacePolicy));
  query->insert(pair<string, long>("MemAllocationRatio", *request->memAllocationRatio));
  query->insert(pair<string, string>("OpenPermission", *request->openPermission));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDedicatedHostGroupAttribute"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDedicatedHostGroupAttributeResponse(callApi(params, req, runtime));
}

ModifyDedicatedHostGroupAttributeResponse Alibabacloud_Cddc20200320::Client::modifyDedicatedHostGroupAttribute(shared_ptr<ModifyDedicatedHostGroupAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDedicatedHostGroupAttributeWithOptions(request, runtime);
}

ModifyDedicatedHostPasswordResponse Alibabacloud_Cddc20200320::Client::modifyDedicatedHostPasswordWithOptions(shared_ptr<ModifyDedicatedHostPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DedicatedHostId", *request->dedicatedHostId));
  query->insert(pair<string, string>("NewPassword", *request->newPassword));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDedicatedHostPassword"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDedicatedHostPasswordResponse(callApi(params, req, runtime));
}

ModifyDedicatedHostPasswordResponse Alibabacloud_Cddc20200320::Client::modifyDedicatedHostPassword(shared_ptr<ModifyDedicatedHostPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDedicatedHostPasswordWithOptions(request, runtime);
}

QueryHostBaseInfoByInstanceResponse Alibabacloud_Cddc20200320::Client::queryHostBaseInfoByInstanceWithOptions(shared_ptr<QueryHostBaseInfoByInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryHostBaseInfoByInstance"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryHostBaseInfoByInstanceResponse(callApi(params, req, runtime));
}

QueryHostBaseInfoByInstanceResponse Alibabacloud_Cddc20200320::Client::queryHostBaseInfoByInstance(shared_ptr<QueryHostBaseInfoByInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryHostBaseInfoByInstanceWithOptions(request, runtime);
}

QueryHostInstanceConsoleInfoResponse Alibabacloud_Cddc20200320::Client::queryHostInstanceConsoleInfoWithOptions(shared_ptr<QueryHostInstanceConsoleInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DedicatedHostId", *request->dedicatedHostId));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryHostInstanceConsoleInfo"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryHostInstanceConsoleInfoResponse(callApi(params, req, runtime));
}

QueryHostInstanceConsoleInfoResponse Alibabacloud_Cddc20200320::Client::queryHostInstanceConsoleInfo(shared_ptr<QueryHostInstanceConsoleInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryHostInstanceConsoleInfoWithOptions(request, runtime);
}

ReplaceDedicatedHostResponse Alibabacloud_Cddc20200320::Client::replaceDedicatedHostWithOptions(shared_ptr<ReplaceDedicatedHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DedicatedHostId", *request->dedicatedHostId));
  query->insert(pair<string, string>("FailoverMode", *request->failoverMode));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReplaceDedicatedHost"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReplaceDedicatedHostResponse(callApi(params, req, runtime));
}

ReplaceDedicatedHostResponse Alibabacloud_Cddc20200320::Client::replaceDedicatedHost(shared_ptr<ReplaceDedicatedHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return replaceDedicatedHostWithOptions(request, runtime);
}

RestartDedicatedHostResponse Alibabacloud_Cddc20200320::Client::restartDedicatedHostWithOptions(shared_ptr<RestartDedicatedHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DedicatedHostId", *request->dedicatedHostId));
  query->insert(pair<string, string>("FailoverMode", *request->failoverMode));
  query->insert(pair<string, bool>("ForceStop", *request->forceStop));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestartDedicatedHost"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RestartDedicatedHostResponse(callApi(params, req, runtime));
}

RestartDedicatedHostResponse Alibabacloud_Cddc20200320::Client::restartDedicatedHost(shared_ptr<RestartDedicatedHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restartDedicatedHostWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Cddc20200320::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ResourceType", *request->resourceType));
  query->insert(pair<string, vector<TagResourcesRequestTag>>("Tag", *request->tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2020-03-20"))},
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

TagResourcesResponse Alibabacloud_Cddc20200320::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Cddc20200320::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, bool>("All", *request->all));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ResourceType", *request->resourceType));
  query->insert(pair<string, vector<string>>("TagKey", *request->tagKey));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2020-03-20"))},
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

UntagResourcesResponse Alibabacloud_Cddc20200320::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

