// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ess_20160722.hpp>
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

using namespace Alibabacloud_Ess20160722;

Alibabacloud_Ess20160722::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
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

string Alibabacloud_Ess20160722::Client::getEndpoint(shared_ptr<string> productId,
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

AttachInstancesResponse Alibabacloud_Ess20160722::Client::attachInstancesWithOptions(shared_ptr<AttachInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceId)) {
    query->insert(pair<string, vector<string>>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachInstances"))},
    {"version", boost::any(string("2016-07-22"))},
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

AttachInstancesResponse Alibabacloud_Ess20160722::Client::attachInstances(shared_ptr<AttachInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachInstancesWithOptions(request, runtime);
}

CreateScalingConfigurationResponse Alibabacloud_Ess20160722::Client::createScalingConfigurationWithOptions(shared_ptr<CreateScalingConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingConfigurationName)) {
    query->insert(pair<string, string>("ScalingConfigurationName", *request->scalingConfigurationName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateScalingConfigurationRequestDataDisk>>(request->dataDisk)) {
    query->insert(pair<string, vector<CreateScalingConfigurationRequestDataDisk>>("DataDisk", *request->dataDisk));
  }
  if (!Darabonba_Util::Client::isUnset<CreateScalingConfigurationRequestSystemDisk>(request->systemDisk)) {
    query->insert(pair<string, CreateScalingConfigurationRequestSystemDisk>("SystemDisk", *request->systemDisk));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateScalingConfiguration"))},
    {"version", boost::any(string("2016-07-22"))},
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

CreateScalingConfigurationResponse Alibabacloud_Ess20160722::Client::createScalingConfiguration(shared_ptr<CreateScalingConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createScalingConfigurationWithOptions(request, runtime);
}

CreateScalingGroupResponse Alibabacloud_Ess20160722::Client::createScalingGroupWithOptions(shared_ptr<CreateScalingGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBInstanceIds)) {
    query->insert(pair<string, string>("DBInstanceIds", *request->DBInstanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->defaultCooldown)) {
    query->insert(pair<string, long>("DefaultCooldown", *request->defaultCooldown));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerIds)) {
    query->insert(pair<string, string>("LoadBalancerIds", *request->loadBalancerIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxSize)) {
    query->insert(pair<string, long>("MaxSize", *request->maxSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minSize)) {
    query->insert(pair<string, long>("MinSize", *request->minSize));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupName)) {
    query->insert(pair<string, string>("ScalingGroupName", *request->scalingGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->removalPolicy)) {
    query->insert(pair<string, vector<string>>("RemovalPolicy", *request->removalPolicy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateScalingGroup"))},
    {"version", boost::any(string("2016-07-22"))},
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

CreateScalingGroupResponse Alibabacloud_Ess20160722::Client::createScalingGroup(shared_ptr<CreateScalingGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createScalingGroupWithOptions(request, runtime);
}

CreateScalingRuleResponse Alibabacloud_Ess20160722::Client::createScalingRuleWithOptions(shared_ptr<CreateScalingRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adjustmentType)) {
    query->insert(pair<string, string>("AdjustmentType", *request->adjustmentType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->adjustmentValue)) {
    query->insert(pair<string, long>("AdjustmentValue", *request->adjustmentValue));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cooldown)) {
    query->insert(pair<string, long>("Cooldown", *request->cooldown));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleName)) {
    query->insert(pair<string, string>("ScalingRuleName", *request->scalingRuleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateScalingRule"))},
    {"version", boost::any(string("2016-07-22"))},
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

CreateScalingRuleResponse Alibabacloud_Ess20160722::Client::createScalingRule(shared_ptr<CreateScalingRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createScalingRuleWithOptions(request, runtime);
}

CreateScheduledTaskResponse Alibabacloud_Ess20160722::Client::createScheduledTaskWithOptions(shared_ptr<CreateScheduledTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->launchExpirationTime)) {
    query->insert(pair<string, long>("LaunchExpirationTime", *request->launchExpirationTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->launchTime)) {
    query->insert(pair<string, string>("LaunchTime", *request->launchTime));
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
    {"version", boost::any(string("2016-07-22"))},
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

CreateScheduledTaskResponse Alibabacloud_Ess20160722::Client::createScheduledTask(shared_ptr<CreateScheduledTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createScheduledTaskWithOptions(request, runtime);
}

DeleteScalingConfigurationResponse Alibabacloud_Ess20160722::Client::deleteScalingConfigurationWithOptions(shared_ptr<DeleteScalingConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingConfigurationId)) {
    query->insert(pair<string, string>("ScalingConfigurationId", *request->scalingConfigurationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteScalingConfiguration"))},
    {"version", boost::any(string("2016-07-22"))},
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

DeleteScalingConfigurationResponse Alibabacloud_Ess20160722::Client::deleteScalingConfiguration(shared_ptr<DeleteScalingConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteScalingConfigurationWithOptions(request, runtime);
}

DeleteScalingGroupResponse Alibabacloud_Ess20160722::Client::deleteScalingGroupWithOptions(shared_ptr<DeleteScalingGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2016-07-22"))},
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

DeleteScalingGroupResponse Alibabacloud_Ess20160722::Client::deleteScalingGroup(shared_ptr<DeleteScalingGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteScalingGroupWithOptions(request, runtime);
}

DeleteScalingRuleResponse Alibabacloud_Ess20160722::Client::deleteScalingRuleWithOptions(shared_ptr<DeleteScalingRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleId)) {
    query->insert(pair<string, string>("ScalingRuleId", *request->scalingRuleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteScalingRule"))},
    {"version", boost::any(string("2016-07-22"))},
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

DeleteScalingRuleResponse Alibabacloud_Ess20160722::Client::deleteScalingRule(shared_ptr<DeleteScalingRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteScalingRuleWithOptions(request, runtime);
}

DeleteScheduledTaskResponse Alibabacloud_Ess20160722::Client::deleteScheduledTaskWithOptions(shared_ptr<DeleteScheduledTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduledTaskId)) {
    query->insert(pair<string, string>("ScheduledTaskId", *request->scheduledTaskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteScheduledTask"))},
    {"version", boost::any(string("2016-07-22"))},
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

DeleteScheduledTaskResponse Alibabacloud_Ess20160722::Client::deleteScheduledTask(shared_ptr<DeleteScheduledTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteScheduledTaskWithOptions(request, runtime);
}

DescribeAccountAttributesResponse Alibabacloud_Ess20160722::Client::describeAccountAttributesWithOptions(shared_ptr<DescribeAccountAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAccountAttributes"))},
    {"version", boost::any(string("2016-07-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAccountAttributesResponse(callApi(params, req, runtime));
}

DescribeAccountAttributesResponse Alibabacloud_Ess20160722::Client::describeAccountAttributes(shared_ptr<DescribeAccountAttributesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAccountAttributesWithOptions(request, runtime);
}

DescribeCapacityHistoryResponse Alibabacloud_Ess20160722::Client::describeCapacityHistoryWithOptions(shared_ptr<DescribeCapacityHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCapacityHistory"))},
    {"version", boost::any(string("2016-07-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCapacityHistoryResponse(callApi(params, req, runtime));
}

DescribeCapacityHistoryResponse Alibabacloud_Ess20160722::Client::describeCapacityHistory(shared_ptr<DescribeCapacityHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCapacityHistoryWithOptions(request, runtime);
}

DescribeLimitationResponse Alibabacloud_Ess20160722::Client::describeLimitationWithOptions(shared_ptr<DescribeLimitationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLimitation"))},
    {"version", boost::any(string("2016-07-22"))},
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

DescribeLimitationResponse Alibabacloud_Ess20160722::Client::describeLimitation(shared_ptr<DescribeLimitationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLimitationWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Ess20160722::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2016-07-22"))},
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

DescribeRegionsResponse Alibabacloud_Ess20160722::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeScalingActivitiesResponse Alibabacloud_Ess20160722::Client::describeScalingActivitiesWithOptions(shared_ptr<DescribeScalingActivitiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->statusCode)) {
    query->insert(pair<string, string>("StatusCode", *request->statusCode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scalingActivityId)) {
    query->insert(pair<string, vector<string>>("ScalingActivityId", *request->scalingActivityId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScalingActivities"))},
    {"version", boost::any(string("2016-07-22"))},
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

DescribeScalingActivitiesResponse Alibabacloud_Ess20160722::Client::describeScalingActivities(shared_ptr<DescribeScalingActivitiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScalingActivitiesWithOptions(request, runtime);
}

DescribeScalingActivityDetailResponse Alibabacloud_Ess20160722::Client::describeScalingActivityDetailWithOptions(shared_ptr<DescribeScalingActivityDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2016-07-22"))},
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

DescribeScalingActivityDetailResponse Alibabacloud_Ess20160722::Client::describeScalingActivityDetail(shared_ptr<DescribeScalingActivityDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScalingActivityDetailWithOptions(request, runtime);
}

DescribeScalingConfigurationsResponse Alibabacloud_Ess20160722::Client::describeScalingConfigurationsWithOptions(shared_ptr<DescribeScalingConfigurationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scalingConfigurationId)) {
    query->insert(pair<string, vector<string>>("ScalingConfigurationId", *request->scalingConfigurationId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scalingConfigurationName)) {
    query->insert(pair<string, vector<string>>("ScalingConfigurationName", *request->scalingConfigurationName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScalingConfigurations"))},
    {"version", boost::any(string("2016-07-22"))},
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

DescribeScalingConfigurationsResponse Alibabacloud_Ess20160722::Client::describeScalingConfigurations(shared_ptr<DescribeScalingConfigurationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScalingConfigurationsWithOptions(request, runtime);
}

DescribeScalingGroupsResponse Alibabacloud_Ess20160722::Client::describeScalingGroupsWithOptions(shared_ptr<DescribeScalingGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scalingGroupId)) {
    query->insert(pair<string, vector<string>>("ScalingGroupId", *request->scalingGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scalingGroupName)) {
    query->insert(pair<string, vector<string>>("ScalingGroupName", *request->scalingGroupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScalingGroups"))},
    {"version", boost::any(string("2016-07-22"))},
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

DescribeScalingGroupsResponse Alibabacloud_Ess20160722::Client::describeScalingGroups(shared_ptr<DescribeScalingGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScalingGroupsWithOptions(request, runtime);
}

DescribeScalingInstancesResponse Alibabacloud_Ess20160722::Client::describeScalingInstancesWithOptions(shared_ptr<DescribeScalingInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->creationType)) {
    query->insert(pair<string, string>("CreationType", *request->creationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthStatus)) {
    query->insert(pair<string, string>("HealthStatus", *request->healthStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lifecycleState)) {
    query->insert(pair<string, string>("LifecycleState", *request->lifecycleState));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingConfigurationId)) {
    query->insert(pair<string, string>("ScalingConfigurationId", *request->scalingConfigurationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceId)) {
    query->insert(pair<string, vector<string>>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScalingInstances"))},
    {"version", boost::any(string("2016-07-22"))},
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

DescribeScalingInstancesResponse Alibabacloud_Ess20160722::Client::describeScalingInstances(shared_ptr<DescribeScalingInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScalingInstancesWithOptions(request, runtime);
}

DescribeScalingRulesResponse Alibabacloud_Ess20160722::Client::describeScalingRulesWithOptions(shared_ptr<DescribeScalingRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scalingRuleAri)) {
    query->insert(pair<string, vector<string>>("ScalingRuleAri", *request->scalingRuleAri));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scalingRuleId)) {
    query->insert(pair<string, vector<string>>("ScalingRuleId", *request->scalingRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scalingRuleName)) {
    query->insert(pair<string, vector<string>>("ScalingRuleName", *request->scalingRuleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScalingRules"))},
    {"version", boost::any(string("2016-07-22"))},
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

DescribeScalingRulesResponse Alibabacloud_Ess20160722::Client::describeScalingRules(shared_ptr<DescribeScalingRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScalingRulesWithOptions(request, runtime);
}

DescribeScheduledTasksResponse Alibabacloud_Ess20160722::Client::describeScheduledTasksWithOptions(shared_ptr<DescribeScheduledTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scheduledAction)) {
    query->insert(pair<string, vector<string>>("ScheduledAction", *request->scheduledAction));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scheduledTaskId)) {
    query->insert(pair<string, vector<string>>("ScheduledTaskId", *request->scheduledTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scheduledTaskName)) {
    query->insert(pair<string, vector<string>>("ScheduledTaskName", *request->scheduledTaskName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScheduledTasks"))},
    {"version", boost::any(string("2016-07-22"))},
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

DescribeScheduledTasksResponse Alibabacloud_Ess20160722::Client::describeScheduledTasks(shared_ptr<DescribeScheduledTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScheduledTasksWithOptions(request, runtime);
}

DetachInstancesResponse Alibabacloud_Ess20160722::Client::detachInstancesWithOptions(shared_ptr<DetachInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceId)) {
    query->insert(pair<string, vector<string>>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachInstances"))},
    {"version", boost::any(string("2016-07-22"))},
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

DetachInstancesResponse Alibabacloud_Ess20160722::Client::detachInstances(shared_ptr<DetachInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachInstancesWithOptions(request, runtime);
}

DisableScalingGroupResponse Alibabacloud_Ess20160722::Client::disableScalingGroupWithOptions(shared_ptr<DisableScalingGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupId)) {
    query->insert(pair<string, string>("ScalingGroupId", *request->scalingGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableScalingGroup"))},
    {"version", boost::any(string("2016-07-22"))},
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

DisableScalingGroupResponse Alibabacloud_Ess20160722::Client::disableScalingGroup(shared_ptr<DisableScalingGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableScalingGroupWithOptions(request, runtime);
}

EnableScalingGroupResponse Alibabacloud_Ess20160722::Client::enableScalingGroupWithOptions(shared_ptr<EnableScalingGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->activeScalingConfigurationId)) {
    query->insert(pair<string, string>("ActiveScalingConfigurationId", *request->activeScalingConfigurationId));
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
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceId)) {
    query->insert(pair<string, vector<string>>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableScalingGroup"))},
    {"version", boost::any(string("2016-07-22"))},
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

EnableScalingGroupResponse Alibabacloud_Ess20160722::Client::enableScalingGroup(shared_ptr<EnableScalingGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableScalingGroupWithOptions(request, runtime);
}

ExecuteScalingRuleResponse Alibabacloud_Ess20160722::Client::executeScalingRuleWithOptions(shared_ptr<ExecuteScalingRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleAri)) {
    query->insert(pair<string, string>("ScalingRuleAri", *request->scalingRuleAri));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteScalingRule"))},
    {"version", boost::any(string("2016-07-22"))},
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

ExecuteScalingRuleResponse Alibabacloud_Ess20160722::Client::executeScalingRule(shared_ptr<ExecuteScalingRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executeScalingRuleWithOptions(request, runtime);
}

ModifyScalingGroupResponse Alibabacloud_Ess20160722::Client::modifyScalingGroupWithOptions(shared_ptr<ModifyScalingGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->activeScalingConfigurationId)) {
    query->insert(pair<string, string>("ActiveScalingConfigurationId", *request->activeScalingConfigurationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->defaultCooldown)) {
    query->insert(pair<string, long>("DefaultCooldown", *request->defaultCooldown));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxSize)) {
    query->insert(pair<string, long>("MaxSize", *request->maxSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minSize)) {
    query->insert(pair<string, long>("MinSize", *request->minSize));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingGroupName)) {
    query->insert(pair<string, string>("ScalingGroupName", *request->scalingGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->removalPolicy)) {
    query->insert(pair<string, vector<string>>("RemovalPolicy", *request->removalPolicy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyScalingGroup"))},
    {"version", boost::any(string("2016-07-22"))},
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

ModifyScalingGroupResponse Alibabacloud_Ess20160722::Client::modifyScalingGroup(shared_ptr<ModifyScalingGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyScalingGroupWithOptions(request, runtime);
}

ModifyScalingRuleResponse Alibabacloud_Ess20160722::Client::modifyScalingRuleWithOptions(shared_ptr<ModifyScalingRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adjustmentType)) {
    query->insert(pair<string, string>("AdjustmentType", *request->adjustmentType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->adjustmentValue)) {
    query->insert(pair<string, long>("AdjustmentValue", *request->adjustmentValue));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cooldown)) {
    query->insert(pair<string, long>("Cooldown", *request->cooldown));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleId)) {
    query->insert(pair<string, string>("ScalingRuleId", *request->scalingRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleName)) {
    query->insert(pair<string, string>("ScalingRuleName", *request->scalingRuleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyScalingRule"))},
    {"version", boost::any(string("2016-07-22"))},
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

ModifyScalingRuleResponse Alibabacloud_Ess20160722::Client::modifyScalingRule(shared_ptr<ModifyScalingRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyScalingRuleWithOptions(request, runtime);
}

ModifyScheduledTaskResponse Alibabacloud_Ess20160722::Client::modifyScheduledTaskWithOptions(shared_ptr<ModifyScheduledTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->launchExpirationTime)) {
    query->insert(pair<string, long>("LaunchExpirationTime", *request->launchExpirationTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->launchTime)) {
    query->insert(pair<string, string>("LaunchTime", *request->launchTime));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
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
    {"version", boost::any(string("2016-07-22"))},
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

ModifyScheduledTaskResponse Alibabacloud_Ess20160722::Client::modifyScheduledTask(shared_ptr<ModifyScheduledTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyScheduledTaskWithOptions(request, runtime);
}

RemoveInstancesResponse Alibabacloud_Ess20160722::Client::removeInstancesWithOptions(shared_ptr<RemoveInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceId)) {
    query->insert(pair<string, vector<string>>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveInstances"))},
    {"version", boost::any(string("2016-07-22"))},
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

RemoveInstancesResponse Alibabacloud_Ess20160722::Client::removeInstances(shared_ptr<RemoveInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeInstancesWithOptions(request, runtime);
}

VerifyAuthenticationResponse Alibabacloud_Ess20160722::Client::verifyAuthenticationWithOptions(shared_ptr<VerifyAuthenticationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VerifyAuthentication"))},
    {"version", boost::any(string("2016-07-22"))},
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

VerifyAuthenticationResponse Alibabacloud_Ess20160722::Client::verifyAuthentication(shared_ptr<VerifyAuthenticationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyAuthenticationWithOptions(request, runtime);
}

VerifyUserResponse Alibabacloud_Ess20160722::Client::verifyUserWithOptions(shared_ptr<VerifyUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("VerifyUser"))},
    {"version", boost::any(string("2016-07-22"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return VerifyUserResponse(callApi(params, req, runtime));
}

VerifyUserResponse Alibabacloud_Ess20160722::Client::verifyUser(shared_ptr<VerifyUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyUserWithOptions(request, runtime);
}

