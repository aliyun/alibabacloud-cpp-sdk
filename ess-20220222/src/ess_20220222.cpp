// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ess_20220222.hpp>
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

using namespace Alibabacloud_Ess20220222;

Alibabacloud_Ess20220222::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-qingdao", "ess.aliyuncs.com"},
    {"cn-beijing", "ess.aliyuncs.com"},
    {"cn-hangzhou", "ess.aliyuncs.com"},
    {"cn-shanghai", "ess.aliyuncs.com"},
    {"cn-shenzhen", "ess.aliyuncs.com"},
    {"cn-hongkong", "ess.aliyuncs.com"},
    {"ap-southeast-1", "ess.aliyuncs.com"},
    {"us-east-1", "ess.aliyuncs.com"},
    {"us-west-1", "ess.aliyuncs.com"},
    {"cn-shanghai-finance-1", "ess.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "ess.aliyuncs.com"},
    {"cn-north-2-gov-1", "ess.aliyuncs.com"},
    {"ap-northeast-2-pop", "ess.aliyuncs.com"},
    {"cn-beijing-finance-pop", "ess.aliyuncs.com"},
    {"cn-beijing-gov-1", "ess.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "ess.aliyuncs.com"},
    {"cn-edge-1", "ess.aliyuncs.com"},
    {"cn-fujian", "ess.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "ess.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "ess.aliyuncs.com"},
    {"cn-hangzhou-finance", "ess.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "ess.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "ess.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "ess.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "ess.aliyuncs.com"},
    {"cn-hangzhou-test-306", "ess.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "ess.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "ess.aliyuncs.com"},
    {"cn-qingdao-nebula", "ess.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "ess.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "ess.aliyuncs.com"},
    {"cn-shanghai-inner", "ess.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "ess.aliyuncs.com"},
    {"cn-shenzhen-inner", "ess.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "ess.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "ess.aliyuncs.com"},
    {"cn-wuhan", "ess.aliyuncs.com"},
    {"cn-yushanfang", "ess.aliyuncs.com"},
    {"cn-zhangbei", "ess.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "ess.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "ess.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "ess.aliyuncs.com"},
    {"eu-west-1-oxs", "ess.aliyuncs.com"},
    {"rus-west-1-pop", "ess.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("ess"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Ess20220222::Client::getEndpoint(shared_ptr<string> productId,
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

ApplyEciScalingConfigurationResponse Alibabacloud_Ess20220222::Client::applyEciScalingConfigurationWithOptions(shared_ptr<ApplyEciScalingConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->format)) {
    query->insert(pair<string, string>("Format", *request->format));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingConfigurationId)) {
    query->insert(pair<string, string>("ScalingConfigurationId", *request->scalingConfigurationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyEciScalingConfiguration"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyEciScalingConfigurationResponse(callApi(params, req, runtime));
}

ApplyEciScalingConfigurationResponse Alibabacloud_Ess20220222::Client::applyEciScalingConfiguration(shared_ptr<ApplyEciScalingConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyEciScalingConfigurationWithOptions(request, runtime);
}

ApplyScalingGroupResponse Alibabacloud_Ess20220222::Client::applyScalingGroupWithOptions(shared_ptr<ApplyScalingGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->format)) {
    query->insert(pair<string, string>("Format", *request->format));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyScalingGroup"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyScalingGroupResponse(callApi(params, req, runtime));
}

ApplyScalingGroupResponse Alibabacloud_Ess20220222::Client::applyScalingGroup(shared_ptr<ApplyScalingGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyScalingGroupWithOptions(request, runtime);
}

AttachAlbServerGroupsResponse Alibabacloud_Ess20220222::Client::attachAlbServerGroupsWithOptions(shared_ptr<AttachAlbServerGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<AttachAlbServerGroupsRequestAlbServerGroups>>(request->albServerGroups)) {
    query->insert(pair<string, vector<AttachAlbServerGroupsRequestAlbServerGroups>>("AlbServerGroups", *request->albServerGroups));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->forceAttach)) {
    query->insert(pair<string, bool>("ForceAttach", *request->forceAttach));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachAlbServerGroups"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachAlbServerGroupsResponse(callApi(params, req, runtime));
}

AttachAlbServerGroupsResponse Alibabacloud_Ess20220222::Client::attachAlbServerGroups(shared_ptr<AttachAlbServerGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachAlbServerGroupsWithOptions(request, runtime);
}

AttachDBInstancesResponse Alibabacloud_Ess20220222::Client::attachDBInstancesWithOptions(shared_ptr<AttachDBInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->attachMode)) {
    query->insert(pair<string, string>("AttachMode", *request->attachMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->DBInstances)) {
    query->insert(pair<string, vector<string>>("DBInstances", *request->DBInstances));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->forceAttach)) {
    query->insert(pair<string, bool>("ForceAttach", *request->forceAttach));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachDBInstances"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachDBInstancesResponse(callApi(params, req, runtime));
}

AttachDBInstancesResponse Alibabacloud_Ess20220222::Client::attachDBInstances(shared_ptr<AttachDBInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachDBInstancesWithOptions(request, runtime);
}

AttachInstancesResponse Alibabacloud_Ess20220222::Client::attachInstancesWithOptions(shared_ptr<AttachInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->entrusted)) {
    query->insert(pair<string, bool>("Entrusted", *request->entrusted));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ignoreInvalidInstance)) {
    query->insert(pair<string, bool>("IgnoreInvalidInstance", *request->ignoreInvalidInstance));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceIds)) {
    query->insert(pair<string, vector<string>>("InstanceIds", *request->instanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->lifecycleHook)) {
    query->insert(pair<string, bool>("LifecycleHook", *request->lifecycleHook));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->loadBalancerWeights)) {
    query->insert(pair<string, vector<long>>("LoadBalancerWeights", *request->loadBalancerWeights));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachInstances"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachInstancesResponse(callApi(params, req, runtime));
}

AttachInstancesResponse Alibabacloud_Ess20220222::Client::attachInstances(shared_ptr<AttachInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachInstancesWithOptions(request, runtime);
}

AttachLoadBalancersResponse Alibabacloud_Ess20220222::Client::attachLoadBalancersWithOptions(shared_ptr<AttachLoadBalancersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->async)) {
    query->insert(pair<string, bool>("Async", *request->async));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->forceAttach)) {
    query->insert(pair<string, bool>("ForceAttach", *request->forceAttach));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AttachLoadBalancersRequestLoadBalancerConfigs>>(request->loadBalancerConfigs)) {
    query->insert(pair<string, vector<AttachLoadBalancersRequestLoadBalancerConfigs>>("LoadBalancerConfigs", *request->loadBalancerConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->loadBalancers)) {
    query->insert(pair<string, vector<string>>("LoadBalancers", *request->loadBalancers));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachLoadBalancers"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachLoadBalancersResponse(callApi(params, req, runtime));
}

AttachLoadBalancersResponse Alibabacloud_Ess20220222::Client::attachLoadBalancers(shared_ptr<AttachLoadBalancersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachLoadBalancersWithOptions(request, runtime);
}

AttachServerGroupsResponse Alibabacloud_Ess20220222::Client::attachServerGroupsWithOptions(shared_ptr<AttachServerGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->forceAttach)) {
    query->insert(pair<string, bool>("ForceAttach", *request->forceAttach));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AttachServerGroupsRequestServerGroups>>(request->serverGroups)) {
    query->insert(pair<string, vector<AttachServerGroupsRequestServerGroups>>("ServerGroups", *request->serverGroups));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachServerGroups"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachServerGroupsResponse(callApi(params, req, runtime));
}

AttachServerGroupsResponse Alibabacloud_Ess20220222::Client::attachServerGroups(shared_ptr<AttachServerGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachServerGroupsWithOptions(request, runtime);
}

AttachVServerGroupsResponse Alibabacloud_Ess20220222::Client::attachVServerGroupsWithOptions(shared_ptr<AttachVServerGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->forceAttach)) {
    query->insert(pair<string, bool>("ForceAttach", *request->forceAttach));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AttachVServerGroupsRequestVServerGroups>>(request->VServerGroups)) {
    query->insert(pair<string, vector<AttachVServerGroupsRequestVServerGroups>>("VServerGroups", *request->VServerGroups));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachVServerGroups"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachVServerGroupsResponse(callApi(params, req, runtime));
}

AttachVServerGroupsResponse Alibabacloud_Ess20220222::Client::attachVServerGroups(shared_ptr<AttachVServerGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachVServerGroupsWithOptions(request, runtime);
}

CancelInstanceRefreshResponse Alibabacloud_Ess20220222::Client::cancelInstanceRefreshWithOptions(shared_ptr<CancelInstanceRefreshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceRefreshTaskId)) {
    query->insert(pair<string, string>("InstanceRefreshTaskId", *request->instanceRefreshTaskId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelInstanceRefresh"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelInstanceRefreshResponse(callApi(params, req, runtime));
}

CancelInstanceRefreshResponse Alibabacloud_Ess20220222::Client::cancelInstanceRefresh(shared_ptr<CancelInstanceRefreshRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelInstanceRefreshWithOptions(request, runtime);
}

ChangeResourceGroupResponse Alibabacloud_Ess20220222::Client::changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->newResourceGroupId)) {
    query->insert(pair<string, string>("NewResourceGroupId", *request->newResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeResourceGroup"))},
    {"version", boost::any(string("2022-02-22"))},
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

ChangeResourceGroupResponse Alibabacloud_Ess20220222::Client::changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeResourceGroupWithOptions(request, runtime);
}

CompleteLifecycleActionResponse Alibabacloud_Ess20220222::Client::completeLifecycleActionWithOptions(shared_ptr<CompleteLifecycleActionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lifecycleActionResult)) {
    query->insert(pair<string, string>("LifecycleActionResult", *request->lifecycleActionResult));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lifecycleActionToken)) {
    query->insert(pair<string, string>("LifecycleActionToken", *request->lifecycleActionToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lifecycleHookId)) {
    query->insert(pair<string, string>("LifecycleHookId", *request->lifecycleHookId));
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CompleteLifecycleAction"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CompleteLifecycleActionResponse(callApi(params, req, runtime));
}

CompleteLifecycleActionResponse Alibabacloud_Ess20220222::Client::completeLifecycleAction(shared_ptr<CompleteLifecycleActionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return completeLifecycleActionWithOptions(request, runtime);
}

CreateAlarmResponse Alibabacloud_Ess20220222::Client::createAlarmWithOptions(shared_ptr<CreateAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->alarmActions)) {
    query->insert(pair<string, vector<string>>("AlarmActions", *request->alarmActions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comparisonOperator)) {
    query->insert(pair<string, string>("ComparisonOperator", *request->comparisonOperator));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateAlarmRequestDimensions>>(request->dimensions)) {
    query->insert(pair<string, vector<CreateAlarmRequestDimensions>>("Dimensions", *request->dimensions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->effective)) {
    query->insert(pair<string, string>("Effective", *request->effective));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->evaluationCount)) {
    query->insert(pair<string, long>("EvaluationCount", *request->evaluationCount));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateAlarmRequestExpressions>>(request->expressions)) {
    query->insert(pair<string, vector<CreateAlarmRequestExpressions>>("Expressions", *request->expressions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expressionsLogicOperator)) {
    query->insert(pair<string, string>("ExpressionsLogicOperator", *request->expressionsLogicOperator));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->groupId)) {
    query->insert(pair<string, long>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricName)) {
    query->insert(pair<string, string>("MetricName", *request->metricName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricType)) {
    query->insert(pair<string, string>("MetricType", *request->metricType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statistics)) {
    query->insert(pair<string, string>("Statistics", *request->statistics));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->threshold)) {
    query->insert(pair<string, double>("Threshold", *request->threshold));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAlarm"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAlarmResponse(callApi(params, req, runtime));
}

CreateAlarmResponse Alibabacloud_Ess20220222::Client::createAlarm(shared_ptr<CreateAlarmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAlarmWithOptions(request, runtime);
}

CreateDiagnoseReportResponse Alibabacloud_Ess20220222::Client::createDiagnoseReportWithOptions(shared_ptr<CreateDiagnoseReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDiagnoseReport"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDiagnoseReportResponse(callApi(params, req, runtime));
}

CreateDiagnoseReportResponse Alibabacloud_Ess20220222::Client::createDiagnoseReport(shared_ptr<CreateDiagnoseReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDiagnoseReportWithOptions(request, runtime);
}

CreateEciScalingConfigurationResponse Alibabacloud_Ess20220222::Client::createEciScalingConfigurationWithOptions(shared_ptr<CreateEciScalingConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateEciScalingConfigurationRequestAcrRegistryInfos>>(request->acrRegistryInfos)) {
    query->insert(pair<string, vector<CreateEciScalingConfigurationRequestAcrRegistryInfos>>("AcrRegistryInfos", *request->acrRegistryInfos));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->activeDeadlineSeconds)) {
    query->insert(pair<string, long>("ActiveDeadlineSeconds", *request->activeDeadlineSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoCreateEip)) {
    query->insert(pair<string, bool>("AutoCreateEip", *request->autoCreateEip));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoMatchImageCache)) {
    query->insert(pair<string, bool>("AutoMatchImageCache", *request->autoMatchImageCache));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->containerGroupName)) {
    query->insert(pair<string, string>("ContainerGroupName", *request->containerGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateEciScalingConfigurationRequestContainers>>(request->containers)) {
    query->insert(pair<string, vector<CreateEciScalingConfigurationRequestContainers>>("Containers", *request->containers));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->costOptimization)) {
    query->insert(pair<string, bool>("CostOptimization", *request->costOptimization));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->cpu)) {
    query->insert(pair<string, double>("Cpu", *request->cpu));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cpuOptionsCore)) {
    query->insert(pair<string, long>("CpuOptionsCore", *request->cpuOptionsCore));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cpuOptionsThreadsPerCore)) {
    query->insert(pair<string, long>("CpuOptionsThreadsPerCore", *request->cpuOptionsThreadsPerCore));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataCacheBucket)) {
    query->insert(pair<string, string>("DataCacheBucket", *request->dataCacheBucket));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dataCacheBurstingEnabled)) {
    query->insert(pair<string, bool>("DataCacheBurstingEnabled", *request->dataCacheBurstingEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataCachePL)) {
    query->insert(pair<string, string>("DataCachePL", *request->dataCachePL));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataCacheProvisionedIops)) {
    query->insert(pair<string, long>("DataCacheProvisionedIops", *request->dataCacheProvisionedIops));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->dnsConfigNameServers)) {
    query->insert(pair<string, vector<string>>("DnsConfigNameServers", *request->dnsConfigNameServers));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateEciScalingConfigurationRequestDnsConfigOptions>>(request->dnsConfigOptions)) {
    query->insert(pair<string, vector<CreateEciScalingConfigurationRequestDnsConfigOptions>>("DnsConfigOptions", *request->dnsConfigOptions));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->dnsConfigSearchs)) {
    query->insert(pair<string, vector<string>>("DnsConfigSearchs", *request->dnsConfigSearchs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dnsPolicy)) {
    query->insert(pair<string, string>("DnsPolicy", *request->dnsPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->egressBandwidth)) {
    query->insert(pair<string, long>("EgressBandwidth", *request->egressBandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eipBandwidth)) {
    query->insert(pair<string, long>("EipBandwidth", *request->eipBandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableSls)) {
    query->insert(pair<string, bool>("EnableSls", *request->enableSls));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ephemeralStorage)) {
    query->insert(pair<string, long>("EphemeralStorage", *request->ephemeralStorage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gpuDriverVersion)) {
    query->insert(pair<string, string>("GpuDriverVersion", *request->gpuDriverVersion));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateEciScalingConfigurationRequestHostAliases>>(request->hostAliases)) {
    query->insert(pair<string, vector<CreateEciScalingConfigurationRequestHostAliases>>("HostAliases", *request->hostAliases));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hostName)) {
    query->insert(pair<string, string>("HostName", *request->hostName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateEciScalingConfigurationRequestImageRegistryCredentials>>(request->imageRegistryCredentials)) {
    query->insert(pair<string, vector<CreateEciScalingConfigurationRequestImageRegistryCredentials>>("ImageRegistryCredentials", *request->imageRegistryCredentials));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageSnapshotId)) {
    query->insert(pair<string, string>("ImageSnapshotId", *request->imageSnapshotId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ingressBandwidth)) {
    query->insert(pair<string, long>("IngressBandwidth", *request->ingressBandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateEciScalingConfigurationRequestInitContainers>>(request->initContainers)) {
    query->insert(pair<string, vector<CreateEciScalingConfigurationRequestInitContainers>>("InitContainers", *request->initContainers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceFamilyLevel)) {
    query->insert(pair<string, string>("InstanceFamilyLevel", *request->instanceFamilyLevel));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceTypes)) {
    query->insert(pair<string, vector<string>>("InstanceTypes", *request->instanceTypes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ipv6AddressCount)) {
    query->insert(pair<string, long>("Ipv6AddressCount", *request->ipv6AddressCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->loadBalancerWeight)) {
    query->insert(pair<string, long>("LoadBalancerWeight", *request->loadBalancerWeight));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->memory)) {
    query->insert(pair<string, double>("Memory", *request->memory));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ntpServers)) {
    query->insert(pair<string, vector<string>>("NtpServers", *request->ntpServers));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ramRoleName)) {
    query->insert(pair<string, string>("RamRoleName", *request->ramRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->restartPolicy)) {
    query->insert(pair<string, string>("RestartPolicy", *request->restartPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingConfigurationName)) {
    query->insert(pair<string, string>("ScalingConfigurationName", *request->scalingConfigurationName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateEciScalingConfigurationRequestSecurityContextSysctls>>(request->securityContextSysctls)) {
    query->insert(pair<string, vector<CreateEciScalingConfigurationRequestSecurityContextSysctls>>("SecurityContextSysctls", *request->securityContextSysctls));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->spotPriceLimit)) {
    query->insert(pair<string, double>("SpotPriceLimit", *request->spotPriceLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spotStrategy)) {
    query->insert(pair<string, string>("SpotStrategy", *request->spotStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateEciScalingConfigurationRequestTags>>(request->tags)) {
    query->insert(pair<string, vector<CreateEciScalingConfigurationRequestTags>>("Tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->terminationGracePeriodSeconds)) {
    query->insert(pair<string, long>("TerminationGracePeriodSeconds", *request->terminationGracePeriodSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateEciScalingConfigurationRequestVolumes>>(request->volumes)) {
    query->insert(pair<string, vector<CreateEciScalingConfigurationRequestVolumes>>("Volumes", *request->volumes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEciScalingConfiguration"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEciScalingConfigurationResponse(callApi(params, req, runtime));
}

CreateEciScalingConfigurationResponse Alibabacloud_Ess20220222::Client::createEciScalingConfiguration(shared_ptr<CreateEciScalingConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEciScalingConfigurationWithOptions(request, runtime);
}

CreateLifecycleHookResponse Alibabacloud_Ess20220222::Client::createLifecycleHookWithOptions(shared_ptr<CreateLifecycleHookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultResult)) {
    query->insert(pair<string, string>("DefaultResult", *request->defaultResult));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->heartbeatTimeout)) {
    query->insert(pair<string, long>("HeartbeatTimeout", *request->heartbeatTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lifecycleHookName)) {
    query->insert(pair<string, string>("LifecycleHookName", *request->lifecycleHookName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lifecycleTransition)) {
    query->insert(pair<string, string>("LifecycleTransition", *request->lifecycleTransition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationArn)) {
    query->insert(pair<string, string>("NotificationArn", *request->notificationArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationMetadata)) {
    query->insert(pair<string, string>("NotificationMetadata", *request->notificationMetadata));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLifecycleHook"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLifecycleHookResponse(callApi(params, req, runtime));
}

CreateLifecycleHookResponse Alibabacloud_Ess20220222::Client::createLifecycleHook(shared_ptr<CreateLifecycleHookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLifecycleHookWithOptions(request, runtime);
}

CreateNotificationConfigurationResponse Alibabacloud_Ess20220222::Client::createNotificationConfigurationWithOptions(shared_ptr<CreateNotificationConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationArn)) {
    query->insert(pair<string, string>("NotificationArn", *request->notificationArn));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->notificationTypes)) {
    query->insert(pair<string, vector<string>>("NotificationTypes", *request->notificationTypes));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeZone)) {
    query->insert(pair<string, string>("TimeZone", *request->timeZone));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateNotificationConfiguration"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateNotificationConfigurationResponse(callApi(params, req, runtime));
}

CreateNotificationConfigurationResponse Alibabacloud_Ess20220222::Client::createNotificationConfiguration(shared_ptr<CreateNotificationConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createNotificationConfigurationWithOptions(request, runtime);
}

CreateScalingConfigurationResponse Alibabacloud_Ess20220222::Client::createScalingConfigurationWithOptions(shared_ptr<CreateScalingConfigurationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateScalingConfigurationShrinkRequest> request = make_shared<CreateScalingConfigurationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->schedulerOptions)) {
    request->schedulerOptionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->schedulerOptions, make_shared<string>("SchedulerOptions"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->affinity)) {
    query->insert(pair<string, string>("Affinity", *request->affinity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cpu)) {
    query->insert(pair<string, long>("Cpu", *request->cpu));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creditSpecification)) {
    query->insert(pair<string, string>("CreditSpecification", *request->creditSpecification));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateScalingConfigurationShrinkRequestCustomPriorities>>(request->customPriorities)) {
    query->insert(pair<string, vector<CreateScalingConfigurationShrinkRequestCustomPriorities>>("CustomPriorities", *request->customPriorities));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateScalingConfigurationShrinkRequestDataDisks>>(request->dataDisks)) {
    query->insert(pair<string, vector<CreateScalingConfigurationShrinkRequestDataDisks>>("DataDisks", *request->dataDisks));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dedicatedHostClusterId)) {
    query->insert(pair<string, string>("DedicatedHostClusterId", *request->dedicatedHostClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dedicatedHostId)) {
    query->insert(pair<string, string>("DedicatedHostId", *request->dedicatedHostId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->deletionProtection)) {
    query->insert(pair<string, bool>("DeletionProtection", *request->deletionProtection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deploymentSetId)) {
    query->insert(pair<string, string>("DeploymentSetId", *request->deploymentSetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hostName)) {
    query->insert(pair<string, string>("HostName", *request->hostName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hpcClusterId)) {
    query->insert(pair<string, string>("HpcClusterId", *request->hpcClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpEndpoint)) {
    query->insert(pair<string, string>("HttpEndpoint", *request->httpEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpTokens)) {
    query->insert(pair<string, string>("HttpTokens", *request->httpTokens));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageFamily)) {
    query->insert(pair<string, string>("ImageFamily", *request->imageFamily));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageName)) {
    query->insert(pair<string, string>("ImageName", *request->imageName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceDescription)) {
    query->insert(pair<string, string>("InstanceDescription", *request->instanceDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateScalingConfigurationShrinkRequestInstancePatternInfos>>(request->instancePatternInfos)) {
    query->insert(pair<string, vector<CreateScalingConfigurationShrinkRequestInstancePatternInfos>>("InstancePatternInfos", *request->instancePatternInfos));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateScalingConfigurationShrinkRequestInstanceTypeOverrides>>(request->instanceTypeOverrides)) {
    query->insert(pair<string, vector<CreateScalingConfigurationShrinkRequestInstanceTypeOverrides>>("InstanceTypeOverrides", *request->instanceTypeOverrides));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceTypes)) {
    query->insert(pair<string, vector<string>>("InstanceTypes", *request->instanceTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internetChargeType)) {
    query->insert(pair<string, string>("InternetChargeType", *request->internetChargeType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->internetMaxBandwidthIn)) {
    query->insert(pair<string, long>("InternetMaxBandwidthIn", *request->internetMaxBandwidthIn));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->internetMaxBandwidthOut)) {
    query->insert(pair<string, long>("InternetMaxBandwidthOut", *request->internetMaxBandwidthOut));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioOptimized)) {
    query->insert(pair<string, string>("IoOptimized", *request->ioOptimized));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ipv6AddressCount)) {
    query->insert(pair<string, long>("Ipv6AddressCount", *request->ipv6AddressCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPairName)) {
    query->insert(pair<string, string>("KeyPairName", *request->keyPairName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->loadBalancerWeight)) {
    query->insert(pair<string, long>("LoadBalancerWeight", *request->loadBalancerWeight));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->memory)) {
    query->insert(pair<string, long>("Memory", *request->memory));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateScalingConfigurationShrinkRequestNetworkInterfaces>>(request->networkInterfaces)) {
    query->insert(pair<string, vector<CreateScalingConfigurationShrinkRequestNetworkInterfaces>>("NetworkInterfaces", *request->networkInterfaces));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->passwordInherit)) {
    query->insert(pair<string, bool>("PasswordInherit", *request->passwordInherit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ramRoleName)) {
    query->insert(pair<string, string>("RamRoleName", *request->ramRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<CreateScalingConfigurationShrinkRequestResourcePoolOptions>(request->resourcePoolOptions)) {
    query->insert(pair<string, CreateScalingConfigurationShrinkRequestResourcePoolOptions>("ResourcePoolOptions", *request->resourcePoolOptions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingConfigurationName)) {
    query->insert(pair<string, string>("ScalingConfigurationName", *request->scalingConfigurationName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schedulerOptionsShrink)) {
    query->insert(pair<string, string>("SchedulerOptions", *request->schedulerOptionsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityEnhancementStrategy)) {
    query->insert(pair<string, string>("SecurityEnhancementStrategy", *request->securityEnhancementStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->securityGroupIds)) {
    query->insert(pair<string, vector<string>>("SecurityGroupIds", *request->securityGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<CreateScalingConfigurationShrinkRequestSecurityOptions>(request->securityOptions)) {
    query->insert(pair<string, CreateScalingConfigurationShrinkRequestSecurityOptions>("SecurityOptions", *request->securityOptions));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->spotDuration)) {
    query->insert(pair<string, long>("SpotDuration", *request->spotDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spotInterruptionBehavior)) {
    query->insert(pair<string, string>("SpotInterruptionBehavior", *request->spotInterruptionBehavior));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateScalingConfigurationShrinkRequestSpotPriceLimits>>(request->spotPriceLimits)) {
    query->insert(pair<string, vector<CreateScalingConfigurationShrinkRequestSpotPriceLimits>>("SpotPriceLimits", *request->spotPriceLimits));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spotStrategy)) {
    query->insert(pair<string, string>("SpotStrategy", *request->spotStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageSetId)) {
    query->insert(pair<string, string>("StorageSetId", *request->storageSetId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->storageSetPartitionNumber)) {
    query->insert(pair<string, long>("StorageSetPartitionNumber", *request->storageSetPartitionNumber));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->systemDiskCategories)) {
    query->insert(pair<string, vector<string>>("SystemDiskCategories", *request->systemDiskCategories));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenancy)) {
    query->insert(pair<string, string>("Tenancy", *request->tenancy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    query->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  if (!Darabonba_Util::Client::isUnset<CreateScalingConfigurationShrinkRequestImageOptions>(request->imageOptions)) {
    query->insert(pair<string, CreateScalingConfigurationShrinkRequestImageOptions>("ImageOptions", *request->imageOptions));
  }
  if (!Darabonba_Util::Client::isUnset<CreateScalingConfigurationShrinkRequestPrivatePoolOptions>(request->privatePoolOptions)) {
    query->insert(pair<string, CreateScalingConfigurationShrinkRequestPrivatePoolOptions>("PrivatePoolOptions", *request->privatePoolOptions));
  }
  if (!Darabonba_Util::Client::isUnset<CreateScalingConfigurationShrinkRequestSystemDisk>(request->systemDisk)) {
    query->insert(pair<string, CreateScalingConfigurationShrinkRequestSystemDisk>("SystemDisk", *request->systemDisk));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateScalingConfiguration"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateScalingConfigurationResponse(callApi(params, req, runtime));
}

CreateScalingConfigurationResponse Alibabacloud_Ess20220222::Client::createScalingConfiguration(shared_ptr<CreateScalingConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createScalingConfigurationWithOptions(request, runtime);
}

CreateScalingGroupResponse Alibabacloud_Ess20220222::Client::createScalingGroupWithOptions(shared_ptr<CreateScalingGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateScalingGroupRequestAlbServerGroups>>(request->albServerGroups)) {
    query->insert(pair<string, vector<CreateScalingGroupRequestAlbServerGroups>>("AlbServerGroups", *request->albServerGroups));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->allocationStrategy)) {
    query->insert(pair<string, string>("AllocationStrategy", *request->allocationStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->azBalance)) {
    query->insert(pair<string, bool>("AzBalance", *request->azBalance));
  }
  if (!Darabonba_Util::Client::isUnset<CreateScalingGroupRequestCapacityOptions>(request->capacityOptions)) {
    query->insert(pair<string, CreateScalingGroupRequestCapacityOptions>("CapacityOptions", *request->capacityOptions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->compensateWithOnDemand)) {
    query->insert(pair<string, bool>("CompensateWithOnDemand", *request->compensateWithOnDemand));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->containerGroupId)) {
    query->insert(pair<string, string>("ContainerGroupId", *request->containerGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customPolicyARN)) {
    query->insert(pair<string, string>("CustomPolicyARN", *request->customPolicyARN));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBInstanceIds)) {
    query->insert(pair<string, string>("DBInstanceIds", *request->DBInstanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateScalingGroupRequestDBInstances>>(request->DBInstances)) {
    query->insert(pair<string, vector<CreateScalingGroupRequestDBInstances>>("DBInstances", *request->DBInstances));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->defaultCooldown)) {
    query->insert(pair<string, long>("DefaultCooldown", *request->defaultCooldown));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->desiredCapacity)) {
    query->insert(pair<string, long>("DesiredCapacity", *request->desiredCapacity));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->groupDeletionProtection)) {
    query->insert(pair<string, bool>("GroupDeletionProtection", *request->groupDeletionProtection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupType)) {
    query->insert(pair<string, string>("GroupType", *request->groupType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckType)) {
    query->insert(pair<string, string>("HealthCheckType", *request->healthCheckType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->healthCheckTypes)) {
    query->insert(pair<string, vector<string>>("HealthCheckTypes", *request->healthCheckTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->launchTemplateId)) {
    query->insert(pair<string, string>("LaunchTemplateId", *request->launchTemplateId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateScalingGroupRequestLaunchTemplateOverrides>>(request->launchTemplateOverrides)) {
    query->insert(pair<string, vector<CreateScalingGroupRequestLaunchTemplateOverrides>>("LaunchTemplateOverrides", *request->launchTemplateOverrides));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->launchTemplateVersion)) {
    query->insert(pair<string, string>("LaunchTemplateVersion", *request->launchTemplateVersion));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateScalingGroupRequestLifecycleHooks>>(request->lifecycleHooks)) {
    query->insert(pair<string, vector<CreateScalingGroupRequestLifecycleHooks>>("LifecycleHooks", *request->lifecycleHooks));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateScalingGroupRequestLoadBalancerConfigs>>(request->loadBalancerConfigs)) {
    query->insert(pair<string, vector<CreateScalingGroupRequestLoadBalancerConfigs>>("LoadBalancerConfigs", *request->loadBalancerConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerIds)) {
    query->insert(pair<string, string>("LoadBalancerIds", *request->loadBalancerIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxInstanceLifetime)) {
    query->insert(pair<string, long>("MaxInstanceLifetime", *request->maxInstanceLifetime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxSize)) {
    query->insert(pair<string, long>("MaxSize", *request->maxSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minSize)) {
    query->insert(pair<string, long>("MinSize", *request->minSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->multiAZPolicy)) {
    query->insert(pair<string, string>("MultiAZPolicy", *request->multiAZPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->onDemandBaseCapacity)) {
    query->insert(pair<string, long>("OnDemandBaseCapacity", *request->onDemandBaseCapacity));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->onDemandPercentageAboveBaseCapacity)) {
    query->insert(pair<string, long>("OnDemandPercentageAboveBaseCapacity", *request->onDemandPercentageAboveBaseCapacity));
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
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->removalPolicies)) {
    query->insert(pair<string, vector<string>>("RemovalPolicies", *request->removalPolicies));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupName)) {
    query->insert(pair<string, string>("ScalingGroupName", *request->scalingGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingPolicy)) {
    query->insert(pair<string, string>("ScalingPolicy", *request->scalingPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateScalingGroupRequestServerGroups>>(request->serverGroups)) {
    query->insert(pair<string, vector<CreateScalingGroupRequestServerGroups>>("ServerGroups", *request->serverGroups));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spotAllocationStrategy)) {
    query->insert(pair<string, string>("SpotAllocationStrategy", *request->spotAllocationStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->spotInstancePools)) {
    query->insert(pair<string, long>("SpotInstancePools", *request->spotInstancePools));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->spotInstanceRemedy)) {
    query->insert(pair<string, bool>("SpotInstanceRemedy", *request->spotInstanceRemedy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->stopInstanceTimeout)) {
    query->insert(pair<string, long>("StopInstanceTimeout", *request->stopInstanceTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->syncAlarmRuleToCms)) {
    query->insert(pair<string, bool>("SyncAlarmRuleToCms", *request->syncAlarmRuleToCms));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateScalingGroupRequestTags>>(request->tags)) {
    query->insert(pair<string, vector<CreateScalingGroupRequestTags>>("Tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateScalingGroupRequestVServerGroups>>(request->VServerGroups)) {
    query->insert(pair<string, vector<CreateScalingGroupRequestVServerGroups>>("VServerGroups", *request->VServerGroups));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->vSwitchIds)) {
    query->insert(pair<string, vector<string>>("VSwitchIds", *request->vSwitchIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateScalingGroup"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateScalingGroupResponse(callApi(params, req, runtime));
}

CreateScalingGroupResponse Alibabacloud_Ess20220222::Client::createScalingGroup(shared_ptr<CreateScalingGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createScalingGroupWithOptions(request, runtime);
}

CreateScalingRuleResponse Alibabacloud_Ess20220222::Client::createScalingRuleWithOptions(shared_ptr<CreateScalingRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adjustmentType)) {
    query->insert(pair<string, string>("AdjustmentType", *request->adjustmentType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->adjustmentValue)) {
    query->insert(pair<string, long>("AdjustmentValue", *request->adjustmentValue));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateScalingRuleRequestAlarmDimensions>>(request->alarmDimensions)) {
    query->insert(pair<string, vector<CreateScalingRuleRequestAlarmDimensions>>("AlarmDimensions", *request->alarmDimensions));
  }
  if (!Darabonba_Util::Client::isUnset<CreateScalingRuleRequestAlarmOptions>(request->alarmOptions)) {
    query->insert(pair<string, CreateScalingRuleRequestAlarmOptions>("AlarmOptions", *request->alarmOptions));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cooldown)) {
    query->insert(pair<string, long>("Cooldown", *request->cooldown));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->disableScaleIn)) {
    query->insert(pair<string, bool>("DisableScaleIn", *request->disableScaleIn));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->estimatedInstanceWarmup)) {
    query->insert(pair<string, long>("EstimatedInstanceWarmup", *request->estimatedInstanceWarmup));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateScalingRuleRequestHybridMetrics>>(request->hybridMetrics)) {
    query->insert(pair<string, vector<CreateScalingRuleRequestHybridMetrics>>("HybridMetrics", *request->hybridMetrics));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hybridMonitorNamespace)) {
    query->insert(pair<string, string>("HybridMonitorNamespace", *request->hybridMonitorNamespace));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->initialMaxSize)) {
    query->insert(pair<string, long>("InitialMaxSize", *request->initialMaxSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricName)) {
    query->insert(pair<string, string>("MetricName", *request->metricName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricType)) {
    query->insert(pair<string, string>("MetricType", *request->metricType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minAdjustmentMagnitude)) {
    query->insert(pair<string, long>("MinAdjustmentMagnitude", *request->minAdjustmentMagnitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->predictiveScalingMode)) {
    query->insert(pair<string, string>("PredictiveScalingMode", *request->predictiveScalingMode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->predictiveTaskBufferTime)) {
    query->insert(pair<string, long>("PredictiveTaskBufferTime", *request->predictiveTaskBufferTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->predictiveValueBehavior)) {
    query->insert(pair<string, string>("PredictiveValueBehavior", *request->predictiveValueBehavior));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->predictiveValueBuffer)) {
    query->insert(pair<string, long>("PredictiveValueBuffer", *request->predictiveValueBuffer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scaleInEvaluationCount)) {
    query->insert(pair<string, long>("ScaleInEvaluationCount", *request->scaleInEvaluationCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scaleOutEvaluationCount)) {
    query->insert(pair<string, long>("ScaleOutEvaluationCount", *request->scaleOutEvaluationCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleName)) {
    query->insert(pair<string, string>("ScalingRuleName", *request->scalingRuleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleType)) {
    query->insert(pair<string, string>("ScalingRuleType", *request->scalingRuleType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateScalingRuleRequestStepAdjustments>>(request->stepAdjustments)) {
    query->insert(pair<string, vector<CreateScalingRuleRequestStepAdjustments>>("StepAdjustments", *request->stepAdjustments));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->targetValue)) {
    query->insert(pair<string, double>("TargetValue", *request->targetValue));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateScalingRule"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateScalingRuleResponse(callApi(params, req, runtime));
}

CreateScalingRuleResponse Alibabacloud_Ess20220222::Client::createScalingRule(shared_ptr<CreateScalingRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createScalingRuleWithOptions(request, runtime);
}

CreateScheduledTaskResponse Alibabacloud_Ess20220222::Client::createScheduledTaskWithOptions(shared_ptr<CreateScheduledTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->desiredCapacity)) {
    query->insert(pair<string, long>("DesiredCapacity", *request->desiredCapacity));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->launchExpirationTime)) {
    query->insert(pair<string, long>("LaunchExpirationTime", *request->launchExpirationTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->launchTime)) {
    query->insert(pair<string, string>("LaunchTime", *request->launchTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxValue)) {
    query->insert(pair<string, long>("MaxValue", *request->maxValue));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minValue)) {
    query->insert(pair<string, long>("MinValue", *request->minValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recurrenceEndTime)) {
    query->insert(pair<string, string>("RecurrenceEndTime", *request->recurrenceEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recurrenceType)) {
    query->insert(pair<string, string>("RecurrenceType", *request->recurrenceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recurrenceValue)) {
    query->insert(pair<string, string>("RecurrenceValue", *request->recurrenceValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduledAction)) {
    query->insert(pair<string, string>("ScheduledAction", *request->scheduledAction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduledTaskName)) {
    query->insert(pair<string, string>("ScheduledTaskName", *request->scheduledTaskName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->taskEnabled)) {
    query->insert(pair<string, bool>("TaskEnabled", *request->taskEnabled));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateScheduledTask"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateScheduledTaskResponse(callApi(params, req, runtime));
}

CreateScheduledTaskResponse Alibabacloud_Ess20220222::Client::createScheduledTask(shared_ptr<CreateScheduledTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createScheduledTaskWithOptions(request, runtime);
}

DeactivateScalingConfigurationResponse Alibabacloud_Ess20220222::Client::deactivateScalingConfigurationWithOptions(shared_ptr<DeactivateScalingConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingConfigurationId)) {
    query->insert(pair<string, string>("ScalingConfigurationId", *request->scalingConfigurationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeactivateScalingConfiguration"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeactivateScalingConfigurationResponse(callApi(params, req, runtime));
}

DeactivateScalingConfigurationResponse Alibabacloud_Ess20220222::Client::deactivateScalingConfiguration(shared_ptr<DeactivateScalingConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deactivateScalingConfigurationWithOptions(request, runtime);
}

DeleteAlarmResponse Alibabacloud_Ess20220222::Client::deleteAlarmWithOptions(shared_ptr<DeleteAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alarmTaskId)) {
    query->insert(pair<string, string>("AlarmTaskId", *request->alarmTaskId));
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAlarm"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAlarmResponse(callApi(params, req, runtime));
}

DeleteAlarmResponse Alibabacloud_Ess20220222::Client::deleteAlarm(shared_ptr<DeleteAlarmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAlarmWithOptions(request, runtime);
}

DeleteEciScalingConfigurationResponse Alibabacloud_Ess20220222::Client::deleteEciScalingConfigurationWithOptions(shared_ptr<DeleteEciScalingConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingConfigurationId)) {
    query->insert(pair<string, string>("ScalingConfigurationId", *request->scalingConfigurationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEciScalingConfiguration"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEciScalingConfigurationResponse(callApi(params, req, runtime));
}

DeleteEciScalingConfigurationResponse Alibabacloud_Ess20220222::Client::deleteEciScalingConfiguration(shared_ptr<DeleteEciScalingConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEciScalingConfigurationWithOptions(request, runtime);
}

DeleteLifecycleHookResponse Alibabacloud_Ess20220222::Client::deleteLifecycleHookWithOptions(shared_ptr<DeleteLifecycleHookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lifecycleHookId)) {
    query->insert(pair<string, string>("LifecycleHookId", *request->lifecycleHookId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lifecycleHookName)) {
    query->insert(pair<string, string>("LifecycleHookName", *request->lifecycleHookName));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLifecycleHook"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLifecycleHookResponse(callApi(params, req, runtime));
}

DeleteLifecycleHookResponse Alibabacloud_Ess20220222::Client::deleteLifecycleHook(shared_ptr<DeleteLifecycleHookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLifecycleHookWithOptions(request, runtime);
}

DeleteNotificationConfigurationResponse Alibabacloud_Ess20220222::Client::deleteNotificationConfigurationWithOptions(shared_ptr<DeleteNotificationConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationArn)) {
    query->insert(pair<string, string>("NotificationArn", *request->notificationArn));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteNotificationConfiguration"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteNotificationConfigurationResponse(callApi(params, req, runtime));
}

DeleteNotificationConfigurationResponse Alibabacloud_Ess20220222::Client::deleteNotificationConfiguration(shared_ptr<DeleteNotificationConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteNotificationConfigurationWithOptions(request, runtime);
}

DeleteScalingConfigurationResponse Alibabacloud_Ess20220222::Client::deleteScalingConfigurationWithOptions(shared_ptr<DeleteScalingConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingConfigurationId)) {
    query->insert(pair<string, string>("ScalingConfigurationId", *request->scalingConfigurationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteScalingConfiguration"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteScalingConfigurationResponse(callApi(params, req, runtime));
}

DeleteScalingConfigurationResponse Alibabacloud_Ess20220222::Client::deleteScalingConfiguration(shared_ptr<DeleteScalingConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteScalingConfigurationWithOptions(request, runtime);
}

DeleteScalingGroupResponse Alibabacloud_Ess20220222::Client::deleteScalingGroupWithOptions(shared_ptr<DeleteScalingGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->forceDelete)) {
    query->insert(pair<string, bool>("ForceDelete", *request->forceDelete));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteScalingGroup"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteScalingGroupResponse(callApi(params, req, runtime));
}

DeleteScalingGroupResponse Alibabacloud_Ess20220222::Client::deleteScalingGroup(shared_ptr<DeleteScalingGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteScalingGroupWithOptions(request, runtime);
}

DeleteScalingRuleResponse Alibabacloud_Ess20220222::Client::deleteScalingRuleWithOptions(shared_ptr<DeleteScalingRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleId)) {
    query->insert(pair<string, string>("ScalingRuleId", *request->scalingRuleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteScalingRule"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteScalingRuleResponse(callApi(params, req, runtime));
}

DeleteScalingRuleResponse Alibabacloud_Ess20220222::Client::deleteScalingRule(shared_ptr<DeleteScalingRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteScalingRuleWithOptions(request, runtime);
}

DeleteScheduledTaskResponse Alibabacloud_Ess20220222::Client::deleteScheduledTaskWithOptions(shared_ptr<DeleteScheduledTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduledTaskId)) {
    query->insert(pair<string, string>("ScheduledTaskId", *request->scheduledTaskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteScheduledTask"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteScheduledTaskResponse(callApi(params, req, runtime));
}

DeleteScheduledTaskResponse Alibabacloud_Ess20220222::Client::deleteScheduledTask(shared_ptr<DeleteScheduledTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteScheduledTaskWithOptions(request, runtime);
}

DescribeAlarmsResponse Alibabacloud_Ess20220222::Client::describeAlarmsWithOptions(shared_ptr<DescribeAlarmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alarmTaskId)) {
    query->insert(pair<string, string>("AlarmTaskId", *request->alarmTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isEnable)) {
    query->insert(pair<string, bool>("IsEnable", *request->isEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricName)) {
    query->insert(pair<string, string>("MetricName", *request->metricName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricType)) {
    query->insert(pair<string, string>("MetricType", *request->metricType));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    query->insert(pair<string, string>("State", *request->state));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAlarms"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAlarmsResponse(callApi(params, req, runtime));
}

DescribeAlarmsResponse Alibabacloud_Ess20220222::Client::describeAlarms(shared_ptr<DescribeAlarmsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAlarmsWithOptions(request, runtime);
}

DescribeAlertConfigurationResponse Alibabacloud_Ess20220222::Client::describeAlertConfigurationWithOptions(shared_ptr<DescribeAlertConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAlertConfiguration"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAlertConfigurationResponse(callApi(params, req, runtime));
}

DescribeAlertConfigurationResponse Alibabacloud_Ess20220222::Client::describeAlertConfiguration(shared_ptr<DescribeAlertConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAlertConfigurationWithOptions(request, runtime);
}

DescribeDiagnoseReportsResponse Alibabacloud_Ess20220222::Client::describeDiagnoseReportsWithOptions(shared_ptr<DescribeDiagnoseReportsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDiagnoseReports"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDiagnoseReportsResponse(callApi(params, req, runtime));
}

DescribeDiagnoseReportsResponse Alibabacloud_Ess20220222::Client::describeDiagnoseReports(shared_ptr<DescribeDiagnoseReportsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDiagnoseReportsWithOptions(request, runtime);
}

DescribeEciScalingConfigurationDetailResponse Alibabacloud_Ess20220222::Client::describeEciScalingConfigurationDetailWithOptions(shared_ptr<DescribeEciScalingConfigurationDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->outputFormat)) {
    query->insert(pair<string, string>("OutputFormat", *request->outputFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingConfigurationId)) {
    query->insert(pair<string, string>("ScalingConfigurationId", *request->scalingConfigurationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEciScalingConfigurationDetail"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEciScalingConfigurationDetailResponse(callApi(params, req, runtime));
}

DescribeEciScalingConfigurationDetailResponse Alibabacloud_Ess20220222::Client::describeEciScalingConfigurationDetail(shared_ptr<DescribeEciScalingConfigurationDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEciScalingConfigurationDetailWithOptions(request, runtime);
}

DescribeEciScalingConfigurationsResponse Alibabacloud_Ess20220222::Client::describeEciScalingConfigurationsWithOptions(shared_ptr<DescribeEciScalingConfigurationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scalingConfigurationIds)) {
    query->insert(pair<string, vector<string>>("ScalingConfigurationIds", *request->scalingConfigurationIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scalingConfigurationNames)) {
    query->insert(pair<string, vector<string>>("ScalingConfigurationNames", *request->scalingConfigurationNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEciScalingConfigurations"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEciScalingConfigurationsResponse(callApi(params, req, runtime));
}

DescribeEciScalingConfigurationsResponse Alibabacloud_Ess20220222::Client::describeEciScalingConfigurations(shared_ptr<DescribeEciScalingConfigurationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEciScalingConfigurationsWithOptions(request, runtime);
}

DescribeElasticStrengthResponse Alibabacloud_Ess20220222::Client::describeElasticStrengthWithOptions(shared_ptr<DescribeElasticStrengthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeElasticStrength"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeElasticStrengthResponse(callApi(params, req, runtime));
}

DescribeElasticStrengthResponse Alibabacloud_Ess20220222::Client::describeElasticStrength(shared_ptr<DescribeElasticStrengthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeElasticStrengthWithOptions(request, runtime);
}

DescribeInstanceRefreshesResponse Alibabacloud_Ess20220222::Client::describeInstanceRefreshesWithOptions(shared_ptr<DescribeInstanceRefreshesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceRefreshTaskIds)) {
    query->insert(pair<string, vector<string>>("InstanceRefreshTaskIds", *request->instanceRefreshTaskIds));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceRefreshes"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceRefreshesResponse(callApi(params, req, runtime));
}

DescribeInstanceRefreshesResponse Alibabacloud_Ess20220222::Client::describeInstanceRefreshes(shared_ptr<DescribeInstanceRefreshesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceRefreshesWithOptions(request, runtime);
}

DescribeLifecycleActionsResponse Alibabacloud_Ess20220222::Client::describeLifecycleActionsWithOptions(shared_ptr<DescribeLifecycleActionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lifecycleActionStatus)) {
    query->insert(pair<string, string>("LifecycleActionStatus", *request->lifecycleActionStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingActivityId)) {
    query->insert(pair<string, string>("ScalingActivityId", *request->scalingActivityId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLifecycleActions"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLifecycleActionsResponse(callApi(params, req, runtime));
}

DescribeLifecycleActionsResponse Alibabacloud_Ess20220222::Client::describeLifecycleActions(shared_ptr<DescribeLifecycleActionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLifecycleActionsWithOptions(request, runtime);
}

DescribeLifecycleHooksResponse Alibabacloud_Ess20220222::Client::describeLifecycleHooksWithOptions(shared_ptr<DescribeLifecycleHooksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->lifecycleHookIds)) {
    query->insert(pair<string, vector<string>>("LifecycleHookIds", *request->lifecycleHookIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lifecycleHookName)) {
    query->insert(pair<string, string>("LifecycleHookName", *request->lifecycleHookName));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLifecycleHooks"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLifecycleHooksResponse(callApi(params, req, runtime));
}

DescribeLifecycleHooksResponse Alibabacloud_Ess20220222::Client::describeLifecycleHooks(shared_ptr<DescribeLifecycleHooksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLifecycleHooksWithOptions(request, runtime);
}

DescribeLimitationResponse Alibabacloud_Ess20220222::Client::describeLimitationWithOptions(shared_ptr<DescribeLimitationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLimitation"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLimitationResponse(callApi(params, req, runtime));
}

DescribeLimitationResponse Alibabacloud_Ess20220222::Client::describeLimitation(shared_ptr<DescribeLimitationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLimitationWithOptions(request, runtime);
}

DescribeNotificationConfigurationsResponse Alibabacloud_Ess20220222::Client::describeNotificationConfigurationsWithOptions(shared_ptr<DescribeNotificationConfigurationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNotificationConfigurations"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeNotificationConfigurationsResponse(callApi(params, req, runtime));
}

DescribeNotificationConfigurationsResponse Alibabacloud_Ess20220222::Client::describeNotificationConfigurations(shared_ptr<DescribeNotificationConfigurationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNotificationConfigurationsWithOptions(request, runtime);
}

DescribeNotificationTypesResponse Alibabacloud_Ess20220222::Client::describeNotificationTypesWithOptions(shared_ptr<DescribeNotificationTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNotificationTypes"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeNotificationTypesResponse(callApi(params, req, runtime));
}

DescribeNotificationTypesResponse Alibabacloud_Ess20220222::Client::describeNotificationTypes(shared_ptr<DescribeNotificationTypesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNotificationTypesWithOptions(request, runtime);
}

DescribePatternTypesResponse Alibabacloud_Ess20220222::Client::describePatternTypesWithOptions(shared_ptr<DescribePatternTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePatternTypes"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePatternTypesResponse(callApi(params, req, runtime));
}

DescribePatternTypesResponse Alibabacloud_Ess20220222::Client::describePatternTypes(shared_ptr<DescribePatternTypesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePatternTypesWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Ess20220222::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
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
    {"version", boost::any(string("2022-02-22"))},
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

DescribeRegionsResponse Alibabacloud_Ess20220222::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeScalingActivitiesResponse Alibabacloud_Ess20220222::Client::describeScalingActivitiesWithOptions(shared_ptr<DescribeScalingActivitiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceRefreshTaskId)) {
    query->insert(pair<string, string>("InstanceRefreshTaskId", *request->instanceRefreshTaskId));
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
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scalingActivityIds)) {
    query->insert(pair<string, vector<string>>("ScalingActivityIds", *request->scalingActivityIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statusCode)) {
    query->insert(pair<string, string>("StatusCode", *request->statusCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScalingActivities"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeScalingActivitiesResponse(callApi(params, req, runtime));
}

DescribeScalingActivitiesResponse Alibabacloud_Ess20220222::Client::describeScalingActivities(shared_ptr<DescribeScalingActivitiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScalingActivitiesWithOptions(request, runtime);
}

DescribeScalingActivityDetailResponse Alibabacloud_Ess20220222::Client::describeScalingActivityDetailWithOptions(shared_ptr<DescribeScalingActivityDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingActivityId)) {
    query->insert(pair<string, string>("ScalingActivityId", *request->scalingActivityId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScalingActivityDetail"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeScalingActivityDetailResponse(callApi(params, req, runtime));
}

DescribeScalingActivityDetailResponse Alibabacloud_Ess20220222::Client::describeScalingActivityDetail(shared_ptr<DescribeScalingActivityDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScalingActivityDetailWithOptions(request, runtime);
}

DescribeScalingConfigurationsResponse Alibabacloud_Ess20220222::Client::describeScalingConfigurationsWithOptions(shared_ptr<DescribeScalingConfigurationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scalingConfigurationIds)) {
    query->insert(pair<string, vector<string>>("ScalingConfigurationIds", *request->scalingConfigurationIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scalingConfigurationNames)) {
    query->insert(pair<string, vector<string>>("ScalingConfigurationNames", *request->scalingConfigurationNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScalingConfigurations"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeScalingConfigurationsResponse(callApi(params, req, runtime));
}

DescribeScalingConfigurationsResponse Alibabacloud_Ess20220222::Client::describeScalingConfigurations(shared_ptr<DescribeScalingConfigurationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScalingConfigurationsWithOptions(request, runtime);
}

DescribeScalingGroupDetailResponse Alibabacloud_Ess20220222::Client::describeScalingGroupDetailWithOptions(shared_ptr<DescribeScalingGroupDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->outputFormat)) {
    query->insert(pair<string, string>("OutputFormat", *request->outputFormat));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScalingGroupDetail"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeScalingGroupDetailResponse(callApi(params, req, runtime));
}

DescribeScalingGroupDetailResponse Alibabacloud_Ess20220222::Client::describeScalingGroupDetail(shared_ptr<DescribeScalingGroupDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScalingGroupDetailWithOptions(request, runtime);
}

DescribeScalingGroupDiagnoseDetailsResponse Alibabacloud_Ess20220222::Client::describeScalingGroupDiagnoseDetailsWithOptions(shared_ptr<DescribeScalingGroupDiagnoseDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScalingGroupDiagnoseDetails"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeScalingGroupDiagnoseDetailsResponse(callApi(params, req, runtime));
}

DescribeScalingGroupDiagnoseDetailsResponse Alibabacloud_Ess20220222::Client::describeScalingGroupDiagnoseDetails(shared_ptr<DescribeScalingGroupDiagnoseDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScalingGroupDiagnoseDetailsWithOptions(request, runtime);
}

DescribeScalingGroupsResponse Alibabacloud_Ess20220222::Client::describeScalingGroupsWithOptions(shared_ptr<DescribeScalingGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupType)) {
    query->insert(pair<string, string>("GroupType", *request->groupType));
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
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scalingGroupIds)) {
    query->insert(pair<string, vector<string>>("ScalingGroupIds", *request->scalingGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupName)) {
    query->insert(pair<string, string>("ScalingGroupName", *request->scalingGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scalingGroupNames)) {
    query->insert(pair<string, vector<string>>("ScalingGroupNames", *request->scalingGroupNames));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeScalingGroupsRequestTags>>(request->tags)) {
    query->insert(pair<string, vector<DescribeScalingGroupsRequestTags>>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScalingGroups"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeScalingGroupsResponse(callApi(params, req, runtime));
}

DescribeScalingGroupsResponse Alibabacloud_Ess20220222::Client::describeScalingGroups(shared_ptr<DescribeScalingGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScalingGroupsWithOptions(request, runtime);
}

DescribeScalingInstancesResponse Alibabacloud_Ess20220222::Client::describeScalingInstancesWithOptions(shared_ptr<DescribeScalingInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->creationType)) {
    query->insert(pair<string, string>("CreationType", *request->creationType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->creationTypes)) {
    query->insert(pair<string, vector<string>>("CreationTypes", *request->creationTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthStatus)) {
    query->insert(pair<string, string>("HealthStatus", *request->healthStatus));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceIds)) {
    query->insert(pair<string, vector<string>>("InstanceIds", *request->instanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lifecycleState)) {
    query->insert(pair<string, string>("LifecycleState", *request->lifecycleState));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->lifecycleStates)) {
    query->insert(pair<string, vector<string>>("LifecycleStates", *request->lifecycleStates));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingActivityId)) {
    query->insert(pair<string, string>("ScalingActivityId", *request->scalingActivityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingConfigurationId)) {
    query->insert(pair<string, string>("ScalingConfigurationId", *request->scalingConfigurationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScalingInstances"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeScalingInstancesResponse(callApi(params, req, runtime));
}

DescribeScalingInstancesResponse Alibabacloud_Ess20220222::Client::describeScalingInstances(shared_ptr<DescribeScalingInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScalingInstancesWithOptions(request, runtime);
}

DescribeScalingRulesResponse Alibabacloud_Ess20220222::Client::describeScalingRulesWithOptions(shared_ptr<DescribeScalingRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scalingRuleAris)) {
    query->insert(pair<string, vector<string>>("ScalingRuleAris", *request->scalingRuleAris));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scalingRuleIds)) {
    query->insert(pair<string, vector<string>>("ScalingRuleIds", *request->scalingRuleIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scalingRuleNames)) {
    query->insert(pair<string, vector<string>>("ScalingRuleNames", *request->scalingRuleNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleType)) {
    query->insert(pair<string, string>("ScalingRuleType", *request->scalingRuleType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showAlarmRules)) {
    query->insert(pair<string, bool>("ShowAlarmRules", *request->showAlarmRules));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScalingRules"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeScalingRulesResponse(callApi(params, req, runtime));
}

DescribeScalingRulesResponse Alibabacloud_Ess20220222::Client::describeScalingRules(shared_ptr<DescribeScalingRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScalingRulesWithOptions(request, runtime);
}

DescribeScheduledTasksResponse Alibabacloud_Ess20220222::Client::describeScheduledTasksWithOptions(shared_ptr<DescribeScheduledTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
  if (!Darabonba_Util::Client::isUnset<string>(request->recurrenceType)) {
    query->insert(pair<string, string>("RecurrenceType", *request->recurrenceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recurrenceValue)) {
    query->insert(pair<string, string>("RecurrenceValue", *request->recurrenceValue));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scheduledActions)) {
    query->insert(pair<string, vector<string>>("ScheduledActions", *request->scheduledActions));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scheduledTaskIds)) {
    query->insert(pair<string, vector<string>>("ScheduledTaskIds", *request->scheduledTaskIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scheduledTaskNames)) {
    query->insert(pair<string, vector<string>>("ScheduledTaskNames", *request->scheduledTaskNames));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->taskEnabled)) {
    query->insert(pair<string, bool>("TaskEnabled", *request->taskEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    query->insert(pair<string, string>("TaskName", *request->taskName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScheduledTasks"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeScheduledTasksResponse(callApi(params, req, runtime));
}

DescribeScheduledTasksResponse Alibabacloud_Ess20220222::Client::describeScheduledTasks(shared_ptr<DescribeScheduledTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScheduledTasksWithOptions(request, runtime);
}

DetachAlbServerGroupsResponse Alibabacloud_Ess20220222::Client::detachAlbServerGroupsWithOptions(shared_ptr<DetachAlbServerGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<DetachAlbServerGroupsRequestAlbServerGroups>>(request->albServerGroups)) {
    query->insert(pair<string, vector<DetachAlbServerGroupsRequestAlbServerGroups>>("AlbServerGroups", *request->albServerGroups));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->forceDetach)) {
    query->insert(pair<string, bool>("ForceDetach", *request->forceDetach));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachAlbServerGroups"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachAlbServerGroupsResponse(callApi(params, req, runtime));
}

DetachAlbServerGroupsResponse Alibabacloud_Ess20220222::Client::detachAlbServerGroups(shared_ptr<DetachAlbServerGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachAlbServerGroupsWithOptions(request, runtime);
}

DetachDBInstancesResponse Alibabacloud_Ess20220222::Client::detachDBInstancesWithOptions(shared_ptr<DetachDBInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->DBInstances)) {
    query->insert(pair<string, vector<string>>("DBInstances", *request->DBInstances));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->forceDetach)) {
    query->insert(pair<string, bool>("ForceDetach", *request->forceDetach));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->removeSecurityGroup)) {
    query->insert(pair<string, bool>("RemoveSecurityGroup", *request->removeSecurityGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachDBInstances"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachDBInstancesResponse(callApi(params, req, runtime));
}

DetachDBInstancesResponse Alibabacloud_Ess20220222::Client::detachDBInstances(shared_ptr<DetachDBInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachDBInstancesWithOptions(request, runtime);
}

DetachInstancesResponse Alibabacloud_Ess20220222::Client::detachInstancesWithOptions(shared_ptr<DetachInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->decreaseDesiredCapacity)) {
    query->insert(pair<string, bool>("DecreaseDesiredCapacity", *request->decreaseDesiredCapacity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->detachOption)) {
    query->insert(pair<string, string>("DetachOption", *request->detachOption));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ignoreInvalidInstance)) {
    query->insert(pair<string, bool>("IgnoreInvalidInstance", *request->ignoreInvalidInstance));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceIds)) {
    query->insert(pair<string, vector<string>>("InstanceIds", *request->instanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->lifecycleHook)) {
    query->insert(pair<string, bool>("LifecycleHook", *request->lifecycleHook));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachInstances"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachInstancesResponse(callApi(params, req, runtime));
}

DetachInstancesResponse Alibabacloud_Ess20220222::Client::detachInstances(shared_ptr<DetachInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachInstancesWithOptions(request, runtime);
}

DetachLoadBalancersResponse Alibabacloud_Ess20220222::Client::detachLoadBalancersWithOptions(shared_ptr<DetachLoadBalancersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->async)) {
    query->insert(pair<string, bool>("Async", *request->async));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->forceDetach)) {
    query->insert(pair<string, bool>("ForceDetach", *request->forceDetach));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->loadBalancers)) {
    query->insert(pair<string, vector<string>>("LoadBalancers", *request->loadBalancers));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachLoadBalancers"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachLoadBalancersResponse(callApi(params, req, runtime));
}

DetachLoadBalancersResponse Alibabacloud_Ess20220222::Client::detachLoadBalancers(shared_ptr<DetachLoadBalancersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachLoadBalancersWithOptions(request, runtime);
}

DetachServerGroupsResponse Alibabacloud_Ess20220222::Client::detachServerGroupsWithOptions(shared_ptr<DetachServerGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->forceDetach)) {
    query->insert(pair<string, bool>("ForceDetach", *request->forceDetach));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DetachServerGroupsRequestServerGroups>>(request->serverGroups)) {
    query->insert(pair<string, vector<DetachServerGroupsRequestServerGroups>>("ServerGroups", *request->serverGroups));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachServerGroups"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachServerGroupsResponse(callApi(params, req, runtime));
}

DetachServerGroupsResponse Alibabacloud_Ess20220222::Client::detachServerGroups(shared_ptr<DetachServerGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachServerGroupsWithOptions(request, runtime);
}

DetachVServerGroupsResponse Alibabacloud_Ess20220222::Client::detachVServerGroupsWithOptions(shared_ptr<DetachVServerGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->forceDetach)) {
    query->insert(pair<string, bool>("ForceDetach", *request->forceDetach));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DetachVServerGroupsRequestVServerGroups>>(request->VServerGroups)) {
    query->insert(pair<string, vector<DetachVServerGroupsRequestVServerGroups>>("VServerGroups", *request->VServerGroups));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachVServerGroups"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachVServerGroupsResponse(callApi(params, req, runtime));
}

DetachVServerGroupsResponse Alibabacloud_Ess20220222::Client::detachVServerGroups(shared_ptr<DetachVServerGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachVServerGroupsWithOptions(request, runtime);
}

DisableAlarmResponse Alibabacloud_Ess20220222::Client::disableAlarmWithOptions(shared_ptr<DisableAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alarmTaskId)) {
    query->insert(pair<string, string>("AlarmTaskId", *request->alarmTaskId));
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableAlarm"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableAlarmResponse(callApi(params, req, runtime));
}

DisableAlarmResponse Alibabacloud_Ess20220222::Client::disableAlarm(shared_ptr<DisableAlarmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableAlarmWithOptions(request, runtime);
}

DisableScalingGroupResponse Alibabacloud_Ess20220222::Client::disableScalingGroupWithOptions(shared_ptr<DisableScalingGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableScalingGroup"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableScalingGroupResponse(callApi(params, req, runtime));
}

DisableScalingGroupResponse Alibabacloud_Ess20220222::Client::disableScalingGroup(shared_ptr<DisableScalingGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableScalingGroupWithOptions(request, runtime);
}

EnableAlarmResponse Alibabacloud_Ess20220222::Client::enableAlarmWithOptions(shared_ptr<EnableAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alarmTaskId)) {
    query->insert(pair<string, string>("AlarmTaskId", *request->alarmTaskId));
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableAlarm"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableAlarmResponse(callApi(params, req, runtime));
}

EnableAlarmResponse Alibabacloud_Ess20220222::Client::enableAlarm(shared_ptr<EnableAlarmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableAlarmWithOptions(request, runtime);
}

EnableScalingGroupResponse Alibabacloud_Ess20220222::Client::enableScalingGroupWithOptions(shared_ptr<EnableScalingGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->activeScalingConfigurationId)) {
    query->insert(pair<string, string>("ActiveScalingConfigurationId", *request->activeScalingConfigurationId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceIds)) {
    query->insert(pair<string, vector<string>>("InstanceIds", *request->instanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->launchTemplateId)) {
    query->insert(pair<string, string>("LaunchTemplateId", *request->launchTemplateId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<EnableScalingGroupRequestLaunchTemplateOverrides>>(request->launchTemplateOverrides)) {
    query->insert(pair<string, vector<EnableScalingGroupRequestLaunchTemplateOverrides>>("LaunchTemplateOverrides", *request->launchTemplateOverrides));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->launchTemplateVersion)) {
    query->insert(pair<string, string>("LaunchTemplateVersion", *request->launchTemplateVersion));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->loadBalancerWeights)) {
    query->insert(pair<string, vector<long>>("LoadBalancerWeights", *request->loadBalancerWeights));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableScalingGroup"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableScalingGroupResponse(callApi(params, req, runtime));
}

EnableScalingGroupResponse Alibabacloud_Ess20220222::Client::enableScalingGroup(shared_ptr<EnableScalingGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableScalingGroupWithOptions(request, runtime);
}

EnterStandbyResponse Alibabacloud_Ess20220222::Client::enterStandbyWithOptions(shared_ptr<EnterStandbyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->async)) {
    query->insert(pair<string, bool>("Async", *request->async));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceIds)) {
    query->insert(pair<string, vector<string>>("InstanceIds", *request->instanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnterStandby"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnterStandbyResponse(callApi(params, req, runtime));
}

EnterStandbyResponse Alibabacloud_Ess20220222::Client::enterStandby(shared_ptr<EnterStandbyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enterStandbyWithOptions(request, runtime);
}

ExecuteScalingRuleResponse Alibabacloud_Ess20220222::Client::executeScalingRuleWithOptions(shared_ptr<ExecuteScalingRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<double>(request->breachThreshold)) {
    query->insert(pair<string, double>("BreachThreshold", *request->breachThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->metricValue)) {
    query->insert(pair<string, double>("MetricValue", *request->metricValue));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleAri)) {
    query->insert(pair<string, string>("ScalingRuleAri", *request->scalingRuleAri));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteScalingRule"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteScalingRuleResponse(callApi(params, req, runtime));
}

ExecuteScalingRuleResponse Alibabacloud_Ess20220222::Client::executeScalingRule(shared_ptr<ExecuteScalingRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executeScalingRuleWithOptions(request, runtime);
}

ExitStandbyResponse Alibabacloud_Ess20220222::Client::exitStandbyWithOptions(shared_ptr<ExitStandbyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->async)) {
    query->insert(pair<string, bool>("Async", *request->async));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceIds)) {
    query->insert(pair<string, vector<string>>("InstanceIds", *request->instanceIds));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExitStandby"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExitStandbyResponse(callApi(params, req, runtime));
}

ExitStandbyResponse Alibabacloud_Ess20220222::Client::exitStandby(shared_ptr<ExitStandbyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return exitStandbyWithOptions(request, runtime);
}

ListTagKeysResponse Alibabacloud_Ess20220222::Client::listTagKeysWithOptions(shared_ptr<ListTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagKeys"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagKeysResponse(callApi(params, req, runtime));
}

ListTagKeysResponse Alibabacloud_Ess20220222::Client::listTagKeys(shared_ptr<ListTagKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagKeysWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Ess20220222::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceIds)) {
    query->insert(pair<string, vector<string>>("ResourceIds", *request->resourceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListTagResourcesRequestTags>>(request->tags)) {
    query->insert(pair<string, vector<ListTagResourcesRequestTags>>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagResources"))},
    {"version", boost::any(string("2022-02-22"))},
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

ListTagResourcesResponse Alibabacloud_Ess20220222::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ListTagValuesResponse Alibabacloud_Ess20220222::Client::listTagValuesWithOptions(shared_ptr<ListTagValuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagValues"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagValuesResponse(callApi(params, req, runtime));
}

ListTagValuesResponse Alibabacloud_Ess20220222::Client::listTagValues(shared_ptr<ListTagValuesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagValuesWithOptions(request, runtime);
}

ModifyAlarmResponse Alibabacloud_Ess20220222::Client::modifyAlarmWithOptions(shared_ptr<ModifyAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->alarmActions)) {
    query->insert(pair<string, vector<string>>("AlarmActions", *request->alarmActions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alarmTaskId)) {
    query->insert(pair<string, string>("AlarmTaskId", *request->alarmTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comparisonOperator)) {
    query->insert(pair<string, string>("ComparisonOperator", *request->comparisonOperator));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyAlarmRequestDimensions>>(request->dimensions)) {
    query->insert(pair<string, vector<ModifyAlarmRequestDimensions>>("Dimensions", *request->dimensions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->effective)) {
    query->insert(pair<string, string>("Effective", *request->effective));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->evaluationCount)) {
    query->insert(pair<string, long>("EvaluationCount", *request->evaluationCount));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyAlarmRequestExpressions>>(request->expressions)) {
    query->insert(pair<string, vector<ModifyAlarmRequestExpressions>>("Expressions", *request->expressions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expressionsLogicOperator)) {
    query->insert(pair<string, string>("ExpressionsLogicOperator", *request->expressionsLogicOperator));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->groupId)) {
    query->insert(pair<string, long>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricName)) {
    query->insert(pair<string, string>("MetricName", *request->metricName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricType)) {
    query->insert(pair<string, string>("MetricType", *request->metricType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statistics)) {
    query->insert(pair<string, string>("Statistics", *request->statistics));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->threshold)) {
    query->insert(pair<string, double>("Threshold", *request->threshold));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAlarm"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAlarmResponse(callApi(params, req, runtime));
}

ModifyAlarmResponse Alibabacloud_Ess20220222::Client::modifyAlarm(shared_ptr<ModifyAlarmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAlarmWithOptions(request, runtime);
}

ModifyAlertConfigurationResponse Alibabacloud_Ess20220222::Client::modifyAlertConfigurationWithOptions(shared_ptr<ModifyAlertConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scaleStatuses)) {
    query->insert(pair<string, vector<string>>("ScaleStatuses", *request->scaleStatuses));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAlertConfiguration"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAlertConfigurationResponse(callApi(params, req, runtime));
}

ModifyAlertConfigurationResponse Alibabacloud_Ess20220222::Client::modifyAlertConfiguration(shared_ptr<ModifyAlertConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAlertConfigurationWithOptions(request, runtime);
}

ModifyEciScalingConfigurationResponse Alibabacloud_Ess20220222::Client::modifyEciScalingConfigurationWithOptions(shared_ptr<ModifyEciScalingConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ModifyEciScalingConfigurationRequestAcrRegistryInfos>>(request->acrRegistryInfos)) {
    query->insert(pair<string, vector<ModifyEciScalingConfigurationRequestAcrRegistryInfos>>("AcrRegistryInfos", *request->acrRegistryInfos));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->activeDeadlineSeconds)) {
    query->insert(pair<string, long>("ActiveDeadlineSeconds", *request->activeDeadlineSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoCreateEip)) {
    query->insert(pair<string, bool>("AutoCreateEip", *request->autoCreateEip));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoMatchImageCache)) {
    query->insert(pair<string, bool>("AutoMatchImageCache", *request->autoMatchImageCache));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->containerGroupName)) {
    query->insert(pair<string, string>("ContainerGroupName", *request->containerGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyEciScalingConfigurationRequestContainers>>(request->containers)) {
    query->insert(pair<string, vector<ModifyEciScalingConfigurationRequestContainers>>("Containers", *request->containers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->containersUpdateType)) {
    query->insert(pair<string, string>("ContainersUpdateType", *request->containersUpdateType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->costOptimization)) {
    query->insert(pair<string, bool>("CostOptimization", *request->costOptimization));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->cpu)) {
    query->insert(pair<string, double>("Cpu", *request->cpu));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cpuOptionsCore)) {
    query->insert(pair<string, long>("CpuOptionsCore", *request->cpuOptionsCore));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cpuOptionsThreadsPerCore)) {
    query->insert(pair<string, long>("CpuOptionsThreadsPerCore", *request->cpuOptionsThreadsPerCore));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataCacheBucket)) {
    query->insert(pair<string, string>("DataCacheBucket", *request->dataCacheBucket));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dataCacheBurstingEnabled)) {
    query->insert(pair<string, bool>("DataCacheBurstingEnabled", *request->dataCacheBurstingEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataCachePL)) {
    query->insert(pair<string, string>("DataCachePL", *request->dataCachePL));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataCacheProvisionedIops)) {
    query->insert(pair<string, long>("DataCacheProvisionedIops", *request->dataCacheProvisionedIops));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->dnsConfigNameServers)) {
    query->insert(pair<string, vector<string>>("DnsConfigNameServers", *request->dnsConfigNameServers));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyEciScalingConfigurationRequestDnsConfigOptions>>(request->dnsConfigOptions)) {
    query->insert(pair<string, vector<ModifyEciScalingConfigurationRequestDnsConfigOptions>>("DnsConfigOptions", *request->dnsConfigOptions));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->dnsConfigSearchs)) {
    query->insert(pair<string, vector<string>>("DnsConfigSearchs", *request->dnsConfigSearchs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dnsPolicy)) {
    query->insert(pair<string, string>("DnsPolicy", *request->dnsPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->egressBandwidth)) {
    query->insert(pair<string, long>("EgressBandwidth", *request->egressBandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eipBandwidth)) {
    query->insert(pair<string, long>("EipBandwidth", *request->eipBandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableSls)) {
    query->insert(pair<string, bool>("EnableSls", *request->enableSls));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ephemeralStorage)) {
    query->insert(pair<string, long>("EphemeralStorage", *request->ephemeralStorage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gpuDriverVersion)) {
    query->insert(pair<string, string>("GpuDriverVersion", *request->gpuDriverVersion));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyEciScalingConfigurationRequestHostAliases>>(request->hostAliases)) {
    query->insert(pair<string, vector<ModifyEciScalingConfigurationRequestHostAliases>>("HostAliases", *request->hostAliases));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hostName)) {
    query->insert(pair<string, string>("HostName", *request->hostName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyEciScalingConfigurationRequestImageRegistryCredentials>>(request->imageRegistryCredentials)) {
    query->insert(pair<string, vector<ModifyEciScalingConfigurationRequestImageRegistryCredentials>>("ImageRegistryCredentials", *request->imageRegistryCredentials));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageSnapshotId)) {
    query->insert(pair<string, string>("ImageSnapshotId", *request->imageSnapshotId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ingressBandwidth)) {
    query->insert(pair<string, long>("IngressBandwidth", *request->ingressBandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyEciScalingConfigurationRequestInitContainers>>(request->initContainers)) {
    query->insert(pair<string, vector<ModifyEciScalingConfigurationRequestInitContainers>>("InitContainers", *request->initContainers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceFamilyLevel)) {
    query->insert(pair<string, string>("InstanceFamilyLevel", *request->instanceFamilyLevel));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceTypes)) {
    query->insert(pair<string, vector<string>>("InstanceTypes", *request->instanceTypes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ipv6AddressCount)) {
    query->insert(pair<string, long>("Ipv6AddressCount", *request->ipv6AddressCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->loadBalancerWeight)) {
    query->insert(pair<string, long>("LoadBalancerWeight", *request->loadBalancerWeight));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->memory)) {
    query->insert(pair<string, double>("Memory", *request->memory));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ntpServers)) {
    query->insert(pair<string, vector<string>>("NtpServers", *request->ntpServers));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ramRoleName)) {
    query->insert(pair<string, string>("RamRoleName", *request->ramRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->restartPolicy)) {
    query->insert(pair<string, string>("RestartPolicy", *request->restartPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingConfigurationId)) {
    query->insert(pair<string, string>("ScalingConfigurationId", *request->scalingConfigurationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingConfigurationName)) {
    query->insert(pair<string, string>("ScalingConfigurationName", *request->scalingConfigurationName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyEciScalingConfigurationRequestSecurityContextSysCtls>>(request->securityContextSysCtls)) {
    query->insert(pair<string, vector<ModifyEciScalingConfigurationRequestSecurityContextSysCtls>>("SecurityContextSysCtls", *request->securityContextSysCtls));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->spotPriceLimit)) {
    query->insert(pair<string, double>("SpotPriceLimit", *request->spotPriceLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spotStrategy)) {
    query->insert(pair<string, string>("SpotStrategy", *request->spotStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyEciScalingConfigurationRequestTags>>(request->tags)) {
    query->insert(pair<string, vector<ModifyEciScalingConfigurationRequestTags>>("Tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->terminationGracePeriodSeconds)) {
    query->insert(pair<string, long>("TerminationGracePeriodSeconds", *request->terminationGracePeriodSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyEciScalingConfigurationRequestVolumes>>(request->volumes)) {
    query->insert(pair<string, vector<ModifyEciScalingConfigurationRequestVolumes>>("Volumes", *request->volumes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyEciScalingConfiguration"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyEciScalingConfigurationResponse(callApi(params, req, runtime));
}

ModifyEciScalingConfigurationResponse Alibabacloud_Ess20220222::Client::modifyEciScalingConfiguration(shared_ptr<ModifyEciScalingConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyEciScalingConfigurationWithOptions(request, runtime);
}

ModifyInstanceAttributeResponse Alibabacloud_Ess20220222::Client::modifyInstanceAttributeWithOptions(shared_ptr<ModifyInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->entrusted)) {
    query->insert(pair<string, bool>("Entrusted", *request->entrusted));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceIds)) {
    query->insert(pair<string, vector<string>>("InstanceIds", *request->instanceIds));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyInstanceAttribute"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyInstanceAttributeResponse(callApi(params, req, runtime));
}

ModifyInstanceAttributeResponse Alibabacloud_Ess20220222::Client::modifyInstanceAttribute(shared_ptr<ModifyInstanceAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceAttributeWithOptions(request, runtime);
}

ModifyLifecycleHookResponse Alibabacloud_Ess20220222::Client::modifyLifecycleHookWithOptions(shared_ptr<ModifyLifecycleHookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultResult)) {
    query->insert(pair<string, string>("DefaultResult", *request->defaultResult));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->heartbeatTimeout)) {
    query->insert(pair<string, long>("HeartbeatTimeout", *request->heartbeatTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lifecycleHookId)) {
    query->insert(pair<string, string>("LifecycleHookId", *request->lifecycleHookId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lifecycleHookName)) {
    query->insert(pair<string, string>("LifecycleHookName", *request->lifecycleHookName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lifecycleHookStatus)) {
    query->insert(pair<string, string>("LifecycleHookStatus", *request->lifecycleHookStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lifecycleTransition)) {
    query->insert(pair<string, string>("LifecycleTransition", *request->lifecycleTransition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationArn)) {
    query->insert(pair<string, string>("NotificationArn", *request->notificationArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationMetadata)) {
    query->insert(pair<string, string>("NotificationMetadata", *request->notificationMetadata));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyLifecycleHook"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyLifecycleHookResponse(callApi(params, req, runtime));
}

ModifyLifecycleHookResponse Alibabacloud_Ess20220222::Client::modifyLifecycleHook(shared_ptr<ModifyLifecycleHookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyLifecycleHookWithOptions(request, runtime);
}

ModifyNotificationConfigurationResponse Alibabacloud_Ess20220222::Client::modifyNotificationConfigurationWithOptions(shared_ptr<ModifyNotificationConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationArn)) {
    query->insert(pair<string, string>("NotificationArn", *request->notificationArn));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->notificationTypes)) {
    query->insert(pair<string, vector<string>>("NotificationTypes", *request->notificationTypes));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeZone)) {
    query->insert(pair<string, string>("TimeZone", *request->timeZone));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyNotificationConfiguration"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyNotificationConfigurationResponse(callApi(params, req, runtime));
}

ModifyNotificationConfigurationResponse Alibabacloud_Ess20220222::Client::modifyNotificationConfiguration(shared_ptr<ModifyNotificationConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyNotificationConfigurationWithOptions(request, runtime);
}

ModifyScalingConfigurationResponse Alibabacloud_Ess20220222::Client::modifyScalingConfigurationWithOptions(shared_ptr<ModifyScalingConfigurationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ModifyScalingConfigurationShrinkRequest> request = make_shared<ModifyScalingConfigurationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->schedulerOptions)) {
    request->schedulerOptionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->schedulerOptions, make_shared<string>("SchedulerOptions"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->affinity)) {
    query->insert(pair<string, string>("Affinity", *request->affinity));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cpu)) {
    query->insert(pair<string, long>("Cpu", *request->cpu));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creditSpecification)) {
    query->insert(pair<string, string>("CreditSpecification", *request->creditSpecification));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyScalingConfigurationShrinkRequestCustomPriorities>>(request->customPriorities)) {
    query->insert(pair<string, vector<ModifyScalingConfigurationShrinkRequestCustomPriorities>>("CustomPriorities", *request->customPriorities));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyScalingConfigurationShrinkRequestDataDisks>>(request->dataDisks)) {
    query->insert(pair<string, vector<ModifyScalingConfigurationShrinkRequestDataDisks>>("DataDisks", *request->dataDisks));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dedicatedHostClusterId)) {
    query->insert(pair<string, string>("DedicatedHostClusterId", *request->dedicatedHostClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dedicatedHostId)) {
    query->insert(pair<string, string>("DedicatedHostId", *request->dedicatedHostId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->deletionProtection)) {
    query->insert(pair<string, bool>("DeletionProtection", *request->deletionProtection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deploymentSetId)) {
    query->insert(pair<string, string>("DeploymentSetId", *request->deploymentSetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hostName)) {
    query->insert(pair<string, string>("HostName", *request->hostName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hpcClusterId)) {
    query->insert(pair<string, string>("HpcClusterId", *request->hpcClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpEndpoint)) {
    query->insert(pair<string, string>("HttpEndpoint", *request->httpEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpTokens)) {
    query->insert(pair<string, string>("HttpTokens", *request->httpTokens));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageFamily)) {
    query->insert(pair<string, string>("ImageFamily", *request->imageFamily));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageName)) {
    query->insert(pair<string, string>("ImageName", *request->imageName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceDescription)) {
    query->insert(pair<string, string>("InstanceDescription", *request->instanceDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyScalingConfigurationShrinkRequestInstancePatternInfos>>(request->instancePatternInfos)) {
    query->insert(pair<string, vector<ModifyScalingConfigurationShrinkRequestInstancePatternInfos>>("InstancePatternInfos", *request->instancePatternInfos));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyScalingConfigurationShrinkRequestInstanceTypeOverrides>>(request->instanceTypeOverrides)) {
    query->insert(pair<string, vector<ModifyScalingConfigurationShrinkRequestInstanceTypeOverrides>>("InstanceTypeOverrides", *request->instanceTypeOverrides));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceTypes)) {
    query->insert(pair<string, vector<string>>("InstanceTypes", *request->instanceTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internetChargeType)) {
    query->insert(pair<string, string>("InternetChargeType", *request->internetChargeType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->internetMaxBandwidthIn)) {
    query->insert(pair<string, long>("InternetMaxBandwidthIn", *request->internetMaxBandwidthIn));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->internetMaxBandwidthOut)) {
    query->insert(pair<string, long>("InternetMaxBandwidthOut", *request->internetMaxBandwidthOut));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ioOptimized)) {
    query->insert(pair<string, string>("IoOptimized", *request->ioOptimized));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ipv6AddressCount)) {
    query->insert(pair<string, long>("Ipv6AddressCount", *request->ipv6AddressCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPairName)) {
    query->insert(pair<string, string>("KeyPairName", *request->keyPairName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->loadBalancerWeight)) {
    query->insert(pair<string, long>("LoadBalancerWeight", *request->loadBalancerWeight));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->memory)) {
    query->insert(pair<string, long>("Memory", *request->memory));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyScalingConfigurationShrinkRequestNetworkInterfaces>>(request->networkInterfaces)) {
    query->insert(pair<string, vector<ModifyScalingConfigurationShrinkRequestNetworkInterfaces>>("NetworkInterfaces", *request->networkInterfaces));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->override)) {
    query->insert(pair<string, bool>("Override", *request->override));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->passwordInherit)) {
    query->insert(pair<string, bool>("PasswordInherit", *request->passwordInherit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ramRoleName)) {
    query->insert(pair<string, string>("RamRoleName", *request->ramRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyScalingConfigurationShrinkRequestResourcePoolOptions>(request->resourcePoolOptions)) {
    query->insert(pair<string, ModifyScalingConfigurationShrinkRequestResourcePoolOptions>("ResourcePoolOptions", *request->resourcePoolOptions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingConfigurationId)) {
    query->insert(pair<string, string>("ScalingConfigurationId", *request->scalingConfigurationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingConfigurationName)) {
    query->insert(pair<string, string>("ScalingConfigurationName", *request->scalingConfigurationName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schedulerOptionsShrink)) {
    query->insert(pair<string, string>("SchedulerOptions", *request->schedulerOptionsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->securityGroupIds)) {
    query->insert(pair<string, vector<string>>("SecurityGroupIds", *request->securityGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyScalingConfigurationShrinkRequestSecurityOptions>(request->securityOptions)) {
    query->insert(pair<string, ModifyScalingConfigurationShrinkRequestSecurityOptions>("SecurityOptions", *request->securityOptions));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->spotDuration)) {
    query->insert(pair<string, long>("SpotDuration", *request->spotDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spotInterruptionBehavior)) {
    query->insert(pair<string, string>("SpotInterruptionBehavior", *request->spotInterruptionBehavior));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyScalingConfigurationShrinkRequestSpotPriceLimits>>(request->spotPriceLimits)) {
    query->insert(pair<string, vector<ModifyScalingConfigurationShrinkRequestSpotPriceLimits>>("SpotPriceLimits", *request->spotPriceLimits));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spotStrategy)) {
    query->insert(pair<string, string>("SpotStrategy", *request->spotStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageSetId)) {
    query->insert(pair<string, string>("StorageSetId", *request->storageSetId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->storageSetPartitionNumber)) {
    query->insert(pair<string, long>("StorageSetPartitionNumber", *request->storageSetPartitionNumber));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->systemDiskCategories)) {
    query->insert(pair<string, vector<string>>("SystemDiskCategories", *request->systemDiskCategories));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenancy)) {
    query->insert(pair<string, string>("Tenancy", *request->tenancy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    query->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyScalingConfigurationShrinkRequestImageOptions>(request->imageOptions)) {
    query->insert(pair<string, ModifyScalingConfigurationShrinkRequestImageOptions>("ImageOptions", *request->imageOptions));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyScalingConfigurationShrinkRequestPrivatePoolOptions>(request->privatePoolOptions)) {
    query->insert(pair<string, ModifyScalingConfigurationShrinkRequestPrivatePoolOptions>("PrivatePoolOptions", *request->privatePoolOptions));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyScalingConfigurationShrinkRequestSystemDisk>(request->systemDisk)) {
    query->insert(pair<string, ModifyScalingConfigurationShrinkRequestSystemDisk>("SystemDisk", *request->systemDisk));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyScalingConfiguration"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyScalingConfigurationResponse(callApi(params, req, runtime));
}

ModifyScalingConfigurationResponse Alibabacloud_Ess20220222::Client::modifyScalingConfiguration(shared_ptr<ModifyScalingConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyScalingConfigurationWithOptions(request, runtime);
}

ModifyScalingGroupResponse Alibabacloud_Ess20220222::Client::modifyScalingGroupWithOptions(shared_ptr<ModifyScalingGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->activeScalingConfigurationId)) {
    query->insert(pair<string, string>("ActiveScalingConfigurationId", *request->activeScalingConfigurationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->allocationStrategy)) {
    query->insert(pair<string, string>("AllocationStrategy", *request->allocationStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->azBalance)) {
    query->insert(pair<string, bool>("AzBalance", *request->azBalance));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyScalingGroupRequestCapacityOptions>(request->capacityOptions)) {
    query->insert(pair<string, ModifyScalingGroupRequestCapacityOptions>("CapacityOptions", *request->capacityOptions));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->compensateWithOnDemand)) {
    query->insert(pair<string, bool>("CompensateWithOnDemand", *request->compensateWithOnDemand));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customPolicyARN)) {
    query->insert(pair<string, string>("CustomPolicyARN", *request->customPolicyARN));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->defaultCooldown)) {
    query->insert(pair<string, long>("DefaultCooldown", *request->defaultCooldown));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->desiredCapacity)) {
    query->insert(pair<string, long>("DesiredCapacity", *request->desiredCapacity));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->disableDesiredCapacity)) {
    query->insert(pair<string, bool>("DisableDesiredCapacity", *request->disableDesiredCapacity));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->groupDeletionProtection)) {
    query->insert(pair<string, bool>("GroupDeletionProtection", *request->groupDeletionProtection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckType)) {
    query->insert(pair<string, string>("HealthCheckType", *request->healthCheckType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->healthCheckTypes)) {
    query->insert(pair<string, vector<string>>("HealthCheckTypes", *request->healthCheckTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->launchTemplateId)) {
    query->insert(pair<string, string>("LaunchTemplateId", *request->launchTemplateId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyScalingGroupRequestLaunchTemplateOverrides>>(request->launchTemplateOverrides)) {
    query->insert(pair<string, vector<ModifyScalingGroupRequestLaunchTemplateOverrides>>("LaunchTemplateOverrides", *request->launchTemplateOverrides));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->launchTemplateVersion)) {
    query->insert(pair<string, string>("LaunchTemplateVersion", *request->launchTemplateVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxInstanceLifetime)) {
    query->insert(pair<string, long>("MaxInstanceLifetime", *request->maxInstanceLifetime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxSize)) {
    query->insert(pair<string, long>("MaxSize", *request->maxSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minSize)) {
    query->insert(pair<string, long>("MinSize", *request->minSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->multiAZPolicy)) {
    query->insert(pair<string, string>("MultiAZPolicy", *request->multiAZPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->onDemandBaseCapacity)) {
    query->insert(pair<string, long>("OnDemandBaseCapacity", *request->onDemandBaseCapacity));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->onDemandPercentageAboveBaseCapacity)) {
    query->insert(pair<string, long>("OnDemandPercentageAboveBaseCapacity", *request->onDemandPercentageAboveBaseCapacity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->removalPolicies)) {
    query->insert(pair<string, vector<string>>("RemovalPolicies", *request->removalPolicies));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupName)) {
    query->insert(pair<string, string>("ScalingGroupName", *request->scalingGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingPolicy)) {
    query->insert(pair<string, string>("ScalingPolicy", *request->scalingPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spotAllocationStrategy)) {
    query->insert(pair<string, string>("SpotAllocationStrategy", *request->spotAllocationStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->spotInstancePools)) {
    query->insert(pair<string, long>("SpotInstancePools", *request->spotInstancePools));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->spotInstanceRemedy)) {
    query->insert(pair<string, bool>("SpotInstanceRemedy", *request->spotInstanceRemedy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->stopInstanceTimeout)) {
    query->insert(pair<string, long>("StopInstanceTimeout", *request->stopInstanceTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->vSwitchIds)) {
    query->insert(pair<string, vector<string>>("VSwitchIds", *request->vSwitchIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyScalingGroup"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyScalingGroupResponse(callApi(params, req, runtime));
}

ModifyScalingGroupResponse Alibabacloud_Ess20220222::Client::modifyScalingGroup(shared_ptr<ModifyScalingGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyScalingGroupWithOptions(request, runtime);
}

ModifyScalingRuleResponse Alibabacloud_Ess20220222::Client::modifyScalingRuleWithOptions(shared_ptr<ModifyScalingRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adjustmentType)) {
    query->insert(pair<string, string>("AdjustmentType", *request->adjustmentType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->adjustmentValue)) {
    query->insert(pair<string, long>("AdjustmentValue", *request->adjustmentValue));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyScalingRuleRequestAlarmDimensions>>(request->alarmDimensions)) {
    query->insert(pair<string, vector<ModifyScalingRuleRequestAlarmDimensions>>("AlarmDimensions", *request->alarmDimensions));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyScalingRuleRequestAlarmOptions>(request->alarmOptions)) {
    query->insert(pair<string, ModifyScalingRuleRequestAlarmOptions>("AlarmOptions", *request->alarmOptions));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cooldown)) {
    query->insert(pair<string, long>("Cooldown", *request->cooldown));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->disableScaleIn)) {
    query->insert(pair<string, bool>("DisableScaleIn", *request->disableScaleIn));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->estimatedInstanceWarmup)) {
    query->insert(pair<string, long>("EstimatedInstanceWarmup", *request->estimatedInstanceWarmup));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyScalingRuleRequestHybridMetrics>>(request->hybridMetrics)) {
    query->insert(pair<string, vector<ModifyScalingRuleRequestHybridMetrics>>("HybridMetrics", *request->hybridMetrics));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hybridMonitorNamespace)) {
    query->insert(pair<string, string>("HybridMonitorNamespace", *request->hybridMonitorNamespace));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->initialMaxSize)) {
    query->insert(pair<string, long>("InitialMaxSize", *request->initialMaxSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricName)) {
    query->insert(pair<string, string>("MetricName", *request->metricName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricType)) {
    query->insert(pair<string, string>("MetricType", *request->metricType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minAdjustmentMagnitude)) {
    query->insert(pair<string, long>("MinAdjustmentMagnitude", *request->minAdjustmentMagnitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->predictiveScalingMode)) {
    query->insert(pair<string, string>("PredictiveScalingMode", *request->predictiveScalingMode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->predictiveTaskBufferTime)) {
    query->insert(pair<string, long>("PredictiveTaskBufferTime", *request->predictiveTaskBufferTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->predictiveValueBehavior)) {
    query->insert(pair<string, string>("PredictiveValueBehavior", *request->predictiveValueBehavior));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->predictiveValueBuffer)) {
    query->insert(pair<string, long>("PredictiveValueBuffer", *request->predictiveValueBuffer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scaleInEvaluationCount)) {
    query->insert(pair<string, long>("ScaleInEvaluationCount", *request->scaleInEvaluationCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scaleOutEvaluationCount)) {
    query->insert(pair<string, long>("ScaleOutEvaluationCount", *request->scaleOutEvaluationCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleId)) {
    query->insert(pair<string, string>("ScalingRuleId", *request->scalingRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleName)) {
    query->insert(pair<string, string>("ScalingRuleName", *request->scalingRuleName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyScalingRuleRequestStepAdjustments>>(request->stepAdjustments)) {
    query->insert(pair<string, vector<ModifyScalingRuleRequestStepAdjustments>>("StepAdjustments", *request->stepAdjustments));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->targetValue)) {
    query->insert(pair<string, double>("TargetValue", *request->targetValue));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyScalingRule"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyScalingRuleResponse(callApi(params, req, runtime));
}

ModifyScalingRuleResponse Alibabacloud_Ess20220222::Client::modifyScalingRule(shared_ptr<ModifyScalingRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyScalingRuleWithOptions(request, runtime);
}

ModifyScheduledTaskResponse Alibabacloud_Ess20220222::Client::modifyScheduledTaskWithOptions(shared_ptr<ModifyScheduledTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->desiredCapacity)) {
    query->insert(pair<string, long>("DesiredCapacity", *request->desiredCapacity));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->launchExpirationTime)) {
    query->insert(pair<string, long>("LaunchExpirationTime", *request->launchExpirationTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->launchTime)) {
    query->insert(pair<string, string>("LaunchTime", *request->launchTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxValue)) {
    query->insert(pair<string, long>("MaxValue", *request->maxValue));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minValue)) {
    query->insert(pair<string, long>("MinValue", *request->minValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recurrenceEndTime)) {
    query->insert(pair<string, string>("RecurrenceEndTime", *request->recurrenceEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recurrenceType)) {
    query->insert(pair<string, string>("RecurrenceType", *request->recurrenceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recurrenceValue)) {
    query->insert(pair<string, string>("RecurrenceValue", *request->recurrenceValue));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduledAction)) {
    query->insert(pair<string, string>("ScheduledAction", *request->scheduledAction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduledTaskId)) {
    query->insert(pair<string, string>("ScheduledTaskId", *request->scheduledTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduledTaskName)) {
    query->insert(pair<string, string>("ScheduledTaskName", *request->scheduledTaskName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->taskEnabled)) {
    query->insert(pair<string, bool>("TaskEnabled", *request->taskEnabled));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyScheduledTask"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyScheduledTaskResponse(callApi(params, req, runtime));
}

ModifyScheduledTaskResponse Alibabacloud_Ess20220222::Client::modifyScheduledTask(shared_ptr<ModifyScheduledTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyScheduledTaskWithOptions(request, runtime);
}

RebalanceInstancesResponse Alibabacloud_Ess20220222::Client::rebalanceInstancesWithOptions(shared_ptr<RebalanceInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RebalanceInstances"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RebalanceInstancesResponse(callApi(params, req, runtime));
}

RebalanceInstancesResponse Alibabacloud_Ess20220222::Client::rebalanceInstances(shared_ptr<RebalanceInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rebalanceInstancesWithOptions(request, runtime);
}

RecordLifecycleActionHeartbeatResponse Alibabacloud_Ess20220222::Client::recordLifecycleActionHeartbeatWithOptions(shared_ptr<RecordLifecycleActionHeartbeatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<long>(request->heartbeatTimeout)) {
    query->insert(pair<string, long>("heartbeatTimeout", *request->heartbeatTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lifecycleActionToken)) {
    query->insert(pair<string, string>("lifecycleActionToken", *request->lifecycleActionToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lifecycleHookId)) {
    query->insert(pair<string, string>("lifecycleHookId", *request->lifecycleHookId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecordLifecycleActionHeartbeat"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecordLifecycleActionHeartbeatResponse(callApi(params, req, runtime));
}

RecordLifecycleActionHeartbeatResponse Alibabacloud_Ess20220222::Client::recordLifecycleActionHeartbeat(shared_ptr<RecordLifecycleActionHeartbeatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recordLifecycleActionHeartbeatWithOptions(request, runtime);
}

RemoveInstancesResponse Alibabacloud_Ess20220222::Client::removeInstancesWithOptions(shared_ptr<RemoveInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RemoveInstancesShrinkRequest> request = make_shared<RemoveInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RemoveInstancesRequestLifecycleHookContext>(tmpReq->lifecycleHookContext)) {
    request->lifecycleHookContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->lifecycleHookContext, make_shared<string>("LifecycleHookContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->decreaseDesiredCapacity)) {
    query->insert(pair<string, bool>("DecreaseDesiredCapacity", *request->decreaseDesiredCapacity));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ignoreInvalidInstance)) {
    query->insert(pair<string, bool>("IgnoreInvalidInstance", *request->ignoreInvalidInstance));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceIds)) {
    query->insert(pair<string, vector<string>>("InstanceIds", *request->instanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lifecycleHookContextShrink)) {
    query->insert(pair<string, string>("LifecycleHookContext", *request->lifecycleHookContextShrink));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->removePolicy)) {
    query->insert(pair<string, string>("RemovePolicy", *request->removePolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->stopInstanceTimeout)) {
    query->insert(pair<string, long>("StopInstanceTimeout", *request->stopInstanceTimeout));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveInstances"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveInstancesResponse(callApi(params, req, runtime));
}

RemoveInstancesResponse Alibabacloud_Ess20220222::Client::removeInstances(shared_ptr<RemoveInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeInstancesWithOptions(request, runtime);
}

ResumeInstanceRefreshResponse Alibabacloud_Ess20220222::Client::resumeInstanceRefreshWithOptions(shared_ptr<ResumeInstanceRefreshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceRefreshTaskId)) {
    query->insert(pair<string, string>("InstanceRefreshTaskId", *request->instanceRefreshTaskId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResumeInstanceRefresh"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResumeInstanceRefreshResponse(callApi(params, req, runtime));
}

ResumeInstanceRefreshResponse Alibabacloud_Ess20220222::Client::resumeInstanceRefresh(shared_ptr<ResumeInstanceRefreshRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resumeInstanceRefreshWithOptions(request, runtime);
}

ResumeProcessesResponse Alibabacloud_Ess20220222::Client::resumeProcessesWithOptions(shared_ptr<ResumeProcessesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->processes)) {
    query->insert(pair<string, vector<string>>("Processes", *request->processes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResumeProcesses"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResumeProcessesResponse(callApi(params, req, runtime));
}

ResumeProcessesResponse Alibabacloud_Ess20220222::Client::resumeProcesses(shared_ptr<ResumeProcessesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resumeProcessesWithOptions(request, runtime);
}

RollbackInstanceRefreshResponse Alibabacloud_Ess20220222::Client::rollbackInstanceRefreshWithOptions(shared_ptr<RollbackInstanceRefreshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceRefreshTaskId)) {
    query->insert(pair<string, string>("InstanceRefreshTaskId", *request->instanceRefreshTaskId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RollbackInstanceRefresh"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RollbackInstanceRefreshResponse(callApi(params, req, runtime));
}

RollbackInstanceRefreshResponse Alibabacloud_Ess20220222::Client::rollbackInstanceRefresh(shared_ptr<RollbackInstanceRefreshRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rollbackInstanceRefreshWithOptions(request, runtime);
}

ScaleWithAdjustmentResponse Alibabacloud_Ess20220222::Client::scaleWithAdjustmentWithOptions(shared_ptr<ScaleWithAdjustmentRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ScaleWithAdjustmentShrinkRequest> request = make_shared<ScaleWithAdjustmentShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ScaleWithAdjustmentRequestLifecycleHookContext>(tmpReq->lifecycleHookContext)) {
    request->lifecycleHookContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->lifecycleHookContext, make_shared<string>("LifecycleHookContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ScaleWithAdjustmentRequestOverrides>(tmpReq->overrides)) {
    request->overridesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->overrides, make_shared<string>("Overrides"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->activityMetadata)) {
    query->insert(pair<string, string>("ActivityMetadata", *request->activityMetadata));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->adjustmentType)) {
    query->insert(pair<string, string>("AdjustmentType", *request->adjustmentType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->adjustmentValue)) {
    query->insert(pair<string, long>("AdjustmentValue", *request->adjustmentValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executionMode)) {
    query->insert(pair<string, string>("ExecutionMode", *request->executionMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lifecycleHookContextShrink)) {
    query->insert(pair<string, string>("LifecycleHookContext", *request->lifecycleHookContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minAdjustmentMagnitude)) {
    query->insert(pair<string, long>("MinAdjustmentMagnitude", *request->minAdjustmentMagnitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->overridesShrink)) {
    query->insert(pair<string, string>("Overrides", *request->overridesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->parallelTask)) {
    query->insert(pair<string, bool>("ParallelTask", *request->parallelTask));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->syncActivity)) {
    query->insert(pair<string, bool>("SyncActivity", *request->syncActivity));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ScaleWithAdjustment"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ScaleWithAdjustmentResponse(callApi(params, req, runtime));
}

ScaleWithAdjustmentResponse Alibabacloud_Ess20220222::Client::scaleWithAdjustment(shared_ptr<ScaleWithAdjustmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return scaleWithAdjustmentWithOptions(request, runtime);
}

SetGroupDeletionProtectionResponse Alibabacloud_Ess20220222::Client::setGroupDeletionProtectionWithOptions(shared_ptr<SetGroupDeletionProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->groupDeletionProtection)) {
    query->insert(pair<string, bool>("GroupDeletionProtection", *request->groupDeletionProtection));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetGroupDeletionProtection"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetGroupDeletionProtectionResponse(callApi(params, req, runtime));
}

SetGroupDeletionProtectionResponse Alibabacloud_Ess20220222::Client::setGroupDeletionProtection(shared_ptr<SetGroupDeletionProtectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setGroupDeletionProtectionWithOptions(request, runtime);
}

SetInstanceHealthResponse Alibabacloud_Ess20220222::Client::setInstanceHealthWithOptions(shared_ptr<SetInstanceHealthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->healthStatus)) {
    query->insert(pair<string, string>("HealthStatus", *request->healthStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetInstanceHealth"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetInstanceHealthResponse(callApi(params, req, runtime));
}

SetInstanceHealthResponse Alibabacloud_Ess20220222::Client::setInstanceHealth(shared_ptr<SetInstanceHealthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setInstanceHealthWithOptions(request, runtime);
}

SetInstancesProtectionResponse Alibabacloud_Ess20220222::Client::setInstancesProtectionWithOptions(shared_ptr<SetInstancesProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceIds)) {
    query->insert(pair<string, vector<string>>("InstanceIds", *request->instanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->protectedFromScaleIn)) {
    query->insert(pair<string, bool>("ProtectedFromScaleIn", *request->protectedFromScaleIn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetInstancesProtection"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetInstancesProtectionResponse(callApi(params, req, runtime));
}

SetInstancesProtectionResponse Alibabacloud_Ess20220222::Client::setInstancesProtection(shared_ptr<SetInstancesProtectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setInstancesProtectionWithOptions(request, runtime);
}

StartInstanceRefreshResponse Alibabacloud_Ess20220222::Client::startInstanceRefreshWithOptions(shared_ptr<StartInstanceRefreshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<StartInstanceRefreshRequestDesiredConfiguration>(request->desiredConfiguration)) {
    query->insert(pair<string, StartInstanceRefreshRequestDesiredConfiguration>("DesiredConfiguration", *request->desiredConfiguration));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxHealthyPercentage)) {
    query->insert(pair<string, long>("MaxHealthyPercentage", *request->maxHealthyPercentage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minHealthyPercentage)) {
    query->insert(pair<string, long>("MinHealthyPercentage", *request->minHealthyPercentage));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->skipMatching)) {
    query->insert(pair<string, bool>("SkipMatching", *request->skipMatching));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartInstanceRefresh"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartInstanceRefreshResponse(callApi(params, req, runtime));
}

StartInstanceRefreshResponse Alibabacloud_Ess20220222::Client::startInstanceRefresh(shared_ptr<StartInstanceRefreshRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startInstanceRefreshWithOptions(request, runtime);
}

SuspendInstanceRefreshResponse Alibabacloud_Ess20220222::Client::suspendInstanceRefreshWithOptions(shared_ptr<SuspendInstanceRefreshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceRefreshTaskId)) {
    query->insert(pair<string, string>("InstanceRefreshTaskId", *request->instanceRefreshTaskId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SuspendInstanceRefresh"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SuspendInstanceRefreshResponse(callApi(params, req, runtime));
}

SuspendInstanceRefreshResponse Alibabacloud_Ess20220222::Client::suspendInstanceRefresh(shared_ptr<SuspendInstanceRefreshRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return suspendInstanceRefreshWithOptions(request, runtime);
}

SuspendProcessesResponse Alibabacloud_Ess20220222::Client::suspendProcessesWithOptions(shared_ptr<SuspendProcessesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->processes)) {
    query->insert(pair<string, vector<string>>("Processes", *request->processes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SuspendProcesses"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SuspendProcessesResponse(callApi(params, req, runtime));
}

SuspendProcessesResponse Alibabacloud_Ess20220222::Client::suspendProcesses(shared_ptr<SuspendProcessesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return suspendProcessesWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Ess20220222::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceIds)) {
    query->insert(pair<string, vector<string>>("ResourceIds", *request->resourceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TagResourcesRequestTags>>(request->tags)) {
    query->insert(pair<string, vector<TagResourcesRequestTags>>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2022-02-22"))},
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

TagResourcesResponse Alibabacloud_Ess20220222::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Ess20220222::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("All", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceIds)) {
    query->insert(pair<string, vector<string>>("ResourceIds", *request->resourceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagKeys)) {
    query->insert(pair<string, vector<string>>("TagKeys", *request->tagKeys));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2022-02-22"))},
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

UntagResourcesResponse Alibabacloud_Ess20220222::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

VerifyAuthenticationResponse Alibabacloud_Ess20220222::Client::verifyAuthenticationWithOptions(shared_ptr<VerifyAuthenticationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->onlyCheck)) {
    query->insert(pair<string, bool>("OnlyCheck", *request->onlyCheck));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VerifyAuthentication"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VerifyAuthenticationResponse(callApi(params, req, runtime));
}

VerifyAuthenticationResponse Alibabacloud_Ess20220222::Client::verifyAuthentication(shared_ptr<VerifyAuthenticationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyAuthenticationWithOptions(request, runtime);
}

VerifyUserResponse Alibabacloud_Ess20220222::Client::verifyUserWithOptions(shared_ptr<VerifyUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("VerifyUser"))},
    {"version", boost::any(string("2022-02-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VerifyUserResponse(callApi(params, req, runtime));
}

VerifyUserResponse Alibabacloud_Ess20220222::Client::verifyUser(shared_ptr<VerifyUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyUserWithOptions(request, runtime);
}

