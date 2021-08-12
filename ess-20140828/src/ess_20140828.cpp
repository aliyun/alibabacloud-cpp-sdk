// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ess_20140828.hpp>
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

using namespace Alibabacloud_Ess20140828;

Alibabacloud_Ess20140828::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-qingdao", "ess.aliyuncs.com"},
    {"cn-beijing", "ess.aliyuncs.com"},
    {"cn-hangzhou", "ess.aliyuncs.com"},
    {"cn-shanghai", "ess.aliyuncs.com"},
    {"cn-shenzhen", "ess.aliyuncs.com"},
    {"cn-hongkong", "ess.aliyuncs.com"},
    {"ap-southeast-1", "ess.aliyuncs.com"},
    {"us-west-1", "ess.aliyuncs.com"},
    {"us-east-1", "ess.aliyuncs.com"},
    {"cn-shanghai-finance-1", "ess.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "ess.aliyuncs.com"},
    {"cn-north-2-gov-1", "ess.aliyuncs.com"},
    {"ap-northeast-2-pop", "ess.ap-northeast-1.aliyuncs.com"},
    {"cn-beijing-finance-1", "ess.aliyuncs.com"},
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
    {"cn-zhangbei-na61-b01", "ess.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "ess.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "ess.aliyuncs.com"},
    {"eu-west-1-oxs", "ess.ap-northeast-1.aliyuncs.com"},
    {"rus-west-1-pop", "ess.ap-northeast-1.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("ess"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Ess20140828::Client::getEndpoint(shared_ptr<string> productId,
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

AttachAlbServerGroupsResponse Alibabacloud_Ess20140828::Client::attachAlbServerGroupsWithOptions(shared_ptr<AttachAlbServerGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AttachAlbServerGroupsResponse(doRPCRequest(make_shared<string>("AttachAlbServerGroups"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AttachAlbServerGroupsResponse Alibabacloud_Ess20140828::Client::attachAlbServerGroups(shared_ptr<AttachAlbServerGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachAlbServerGroupsWithOptions(request, runtime);
}

AttachDBInstancesResponse Alibabacloud_Ess20140828::Client::attachDBInstancesWithOptions(shared_ptr<AttachDBInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AttachDBInstancesResponse(doRPCRequest(make_shared<string>("AttachDBInstances"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AttachDBInstancesResponse Alibabacloud_Ess20140828::Client::attachDBInstances(shared_ptr<AttachDBInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachDBInstancesWithOptions(request, runtime);
}

AttachInstancesResponse Alibabacloud_Ess20140828::Client::attachInstancesWithOptions(shared_ptr<AttachInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AttachInstancesResponse(doRPCRequest(make_shared<string>("AttachInstances"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AttachInstancesResponse Alibabacloud_Ess20140828::Client::attachInstances(shared_ptr<AttachInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachInstancesWithOptions(request, runtime);
}

AttachLoadBalancersResponse Alibabacloud_Ess20140828::Client::attachLoadBalancersWithOptions(shared_ptr<AttachLoadBalancersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AttachLoadBalancersResponse(doRPCRequest(make_shared<string>("AttachLoadBalancers"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AttachLoadBalancersResponse Alibabacloud_Ess20140828::Client::attachLoadBalancers(shared_ptr<AttachLoadBalancersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachLoadBalancersWithOptions(request, runtime);
}

AttachVServerGroupsResponse Alibabacloud_Ess20140828::Client::attachVServerGroupsWithOptions(shared_ptr<AttachVServerGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AttachVServerGroupsResponse(doRPCRequest(make_shared<string>("AttachVServerGroups"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AttachVServerGroupsResponse Alibabacloud_Ess20140828::Client::attachVServerGroups(shared_ptr<AttachVServerGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachVServerGroupsWithOptions(request, runtime);
}

CompleteLifecycleActionResponse Alibabacloud_Ess20140828::Client::completeLifecycleActionWithOptions(shared_ptr<CompleteLifecycleActionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CompleteLifecycleActionResponse(doRPCRequest(make_shared<string>("CompleteLifecycleAction"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CompleteLifecycleActionResponse Alibabacloud_Ess20140828::Client::completeLifecycleAction(shared_ptr<CompleteLifecycleActionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return completeLifecycleActionWithOptions(request, runtime);
}

CreateAlarmResponse Alibabacloud_Ess20140828::Client::createAlarmWithOptions(shared_ptr<CreateAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAlarmResponse(doRPCRequest(make_shared<string>("CreateAlarm"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAlarmResponse Alibabacloud_Ess20140828::Client::createAlarm(shared_ptr<CreateAlarmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAlarmWithOptions(request, runtime);
}

CreateLifecycleHookResponse Alibabacloud_Ess20140828::Client::createLifecycleHookWithOptions(shared_ptr<CreateLifecycleHookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateLifecycleHookResponse(doRPCRequest(make_shared<string>("CreateLifecycleHook"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateLifecycleHookResponse Alibabacloud_Ess20140828::Client::createLifecycleHook(shared_ptr<CreateLifecycleHookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLifecycleHookWithOptions(request, runtime);
}

CreateNotificationConfigurationResponse Alibabacloud_Ess20140828::Client::createNotificationConfigurationWithOptions(shared_ptr<CreateNotificationConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateNotificationConfigurationResponse(doRPCRequest(make_shared<string>("CreateNotificationConfiguration"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateNotificationConfigurationResponse Alibabacloud_Ess20140828::Client::createNotificationConfiguration(shared_ptr<CreateNotificationConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createNotificationConfigurationWithOptions(request, runtime);
}

CreateScalingConfigurationResponse Alibabacloud_Ess20140828::Client::createScalingConfigurationWithOptions(shared_ptr<CreateScalingConfigurationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateScalingConfigurationShrinkRequest> request = make_shared<CreateScalingConfigurationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->schedulerOptions)) {
    request->schedulerOptionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->schedulerOptions, make_shared<string>("SchedulerOptions"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateScalingConfigurationResponse(doRPCRequest(make_shared<string>("CreateScalingConfiguration"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateScalingConfigurationResponse Alibabacloud_Ess20140828::Client::createScalingConfiguration(shared_ptr<CreateScalingConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createScalingConfigurationWithOptions(request, runtime);
}

CreateScalingGroupResponse Alibabacloud_Ess20140828::Client::createScalingGroupWithOptions(shared_ptr<CreateScalingGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateScalingGroupResponse(doRPCRequest(make_shared<string>("CreateScalingGroup"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateScalingGroupResponse Alibabacloud_Ess20140828::Client::createScalingGroup(shared_ptr<CreateScalingGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createScalingGroupWithOptions(request, runtime);
}

CreateScalingRuleResponse Alibabacloud_Ess20140828::Client::createScalingRuleWithOptions(shared_ptr<CreateScalingRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateScalingRuleResponse(doRPCRequest(make_shared<string>("CreateScalingRule"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateScalingRuleResponse Alibabacloud_Ess20140828::Client::createScalingRule(shared_ptr<CreateScalingRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createScalingRuleWithOptions(request, runtime);
}

CreateScheduledTaskResponse Alibabacloud_Ess20140828::Client::createScheduledTaskWithOptions(shared_ptr<CreateScheduledTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateScheduledTaskResponse(doRPCRequest(make_shared<string>("CreateScheduledTask"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateScheduledTaskResponse Alibabacloud_Ess20140828::Client::createScheduledTask(shared_ptr<CreateScheduledTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createScheduledTaskWithOptions(request, runtime);
}

DeactivateScalingConfigurationResponse Alibabacloud_Ess20140828::Client::deactivateScalingConfigurationWithOptions(shared_ptr<DeactivateScalingConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeactivateScalingConfigurationResponse(doRPCRequest(make_shared<string>("DeactivateScalingConfiguration"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeactivateScalingConfigurationResponse Alibabacloud_Ess20140828::Client::deactivateScalingConfiguration(shared_ptr<DeactivateScalingConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deactivateScalingConfigurationWithOptions(request, runtime);
}

DeleteAlarmResponse Alibabacloud_Ess20140828::Client::deleteAlarmWithOptions(shared_ptr<DeleteAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAlarmResponse(doRPCRequest(make_shared<string>("DeleteAlarm"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAlarmResponse Alibabacloud_Ess20140828::Client::deleteAlarm(shared_ptr<DeleteAlarmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAlarmWithOptions(request, runtime);
}

DeleteLifecycleHookResponse Alibabacloud_Ess20140828::Client::deleteLifecycleHookWithOptions(shared_ptr<DeleteLifecycleHookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteLifecycleHookResponse(doRPCRequest(make_shared<string>("DeleteLifecycleHook"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteLifecycleHookResponse Alibabacloud_Ess20140828::Client::deleteLifecycleHook(shared_ptr<DeleteLifecycleHookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLifecycleHookWithOptions(request, runtime);
}

DeleteNotificationConfigurationResponse Alibabacloud_Ess20140828::Client::deleteNotificationConfigurationWithOptions(shared_ptr<DeleteNotificationConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteNotificationConfigurationResponse(doRPCRequest(make_shared<string>("DeleteNotificationConfiguration"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteNotificationConfigurationResponse Alibabacloud_Ess20140828::Client::deleteNotificationConfiguration(shared_ptr<DeleteNotificationConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteNotificationConfigurationWithOptions(request, runtime);
}

DeleteScalingConfigurationResponse Alibabacloud_Ess20140828::Client::deleteScalingConfigurationWithOptions(shared_ptr<DeleteScalingConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteScalingConfigurationResponse(doRPCRequest(make_shared<string>("DeleteScalingConfiguration"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteScalingConfigurationResponse Alibabacloud_Ess20140828::Client::deleteScalingConfiguration(shared_ptr<DeleteScalingConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteScalingConfigurationWithOptions(request, runtime);
}

DeleteScalingGroupResponse Alibabacloud_Ess20140828::Client::deleteScalingGroupWithOptions(shared_ptr<DeleteScalingGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteScalingGroupResponse(doRPCRequest(make_shared<string>("DeleteScalingGroup"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteScalingGroupResponse Alibabacloud_Ess20140828::Client::deleteScalingGroup(shared_ptr<DeleteScalingGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteScalingGroupWithOptions(request, runtime);
}

DeleteScalingRuleResponse Alibabacloud_Ess20140828::Client::deleteScalingRuleWithOptions(shared_ptr<DeleteScalingRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteScalingRuleResponse(doRPCRequest(make_shared<string>("DeleteScalingRule"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteScalingRuleResponse Alibabacloud_Ess20140828::Client::deleteScalingRule(shared_ptr<DeleteScalingRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteScalingRuleWithOptions(request, runtime);
}

DeleteScheduledTaskResponse Alibabacloud_Ess20140828::Client::deleteScheduledTaskWithOptions(shared_ptr<DeleteScheduledTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteScheduledTaskResponse(doRPCRequest(make_shared<string>("DeleteScheduledTask"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteScheduledTaskResponse Alibabacloud_Ess20140828::Client::deleteScheduledTask(shared_ptr<DeleteScheduledTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteScheduledTaskWithOptions(request, runtime);
}

DescribeAlarmsResponse Alibabacloud_Ess20140828::Client::describeAlarmsWithOptions(shared_ptr<DescribeAlarmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAlarmsResponse(doRPCRequest(make_shared<string>("DescribeAlarms"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAlarmsResponse Alibabacloud_Ess20140828::Client::describeAlarms(shared_ptr<DescribeAlarmsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAlarmsWithOptions(request, runtime);
}

DescribeLifecycleActionsResponse Alibabacloud_Ess20140828::Client::describeLifecycleActionsWithOptions(shared_ptr<DescribeLifecycleActionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeLifecycleActionsResponse(doRPCRequest(make_shared<string>("DescribeLifecycleActions"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeLifecycleActionsResponse Alibabacloud_Ess20140828::Client::describeLifecycleActions(shared_ptr<DescribeLifecycleActionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLifecycleActionsWithOptions(request, runtime);
}

DescribeLifecycleHooksResponse Alibabacloud_Ess20140828::Client::describeLifecycleHooksWithOptions(shared_ptr<DescribeLifecycleHooksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeLifecycleHooksResponse(doRPCRequest(make_shared<string>("DescribeLifecycleHooks"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeLifecycleHooksResponse Alibabacloud_Ess20140828::Client::describeLifecycleHooks(shared_ptr<DescribeLifecycleHooksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLifecycleHooksWithOptions(request, runtime);
}

DescribeLimitationResponse Alibabacloud_Ess20140828::Client::describeLimitationWithOptions(shared_ptr<DescribeLimitationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeLimitationResponse(doRPCRequest(make_shared<string>("DescribeLimitation"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeLimitationResponse Alibabacloud_Ess20140828::Client::describeLimitation(shared_ptr<DescribeLimitationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLimitationWithOptions(request, runtime);
}

DescribeNotificationConfigurationsResponse Alibabacloud_Ess20140828::Client::describeNotificationConfigurationsWithOptions(shared_ptr<DescribeNotificationConfigurationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeNotificationConfigurationsResponse(doRPCRequest(make_shared<string>("DescribeNotificationConfigurations"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeNotificationConfigurationsResponse Alibabacloud_Ess20140828::Client::describeNotificationConfigurations(shared_ptr<DescribeNotificationConfigurationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNotificationConfigurationsWithOptions(request, runtime);
}

DescribeNotificationTypesResponse Alibabacloud_Ess20140828::Client::describeNotificationTypesWithOptions(shared_ptr<DescribeNotificationTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeNotificationTypesResponse(doRPCRequest(make_shared<string>("DescribeNotificationTypes"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeNotificationTypesResponse Alibabacloud_Ess20140828::Client::describeNotificationTypes(shared_ptr<DescribeNotificationTypesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNotificationTypesWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Ess20140828::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRegionsResponse(doRPCRequest(make_shared<string>("DescribeRegions"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionsResponse Alibabacloud_Ess20140828::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeScalingActivitiesResponse Alibabacloud_Ess20140828::Client::describeScalingActivitiesWithOptions(shared_ptr<DescribeScalingActivitiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScalingActivitiesResponse(doRPCRequest(make_shared<string>("DescribeScalingActivities"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScalingActivitiesResponse Alibabacloud_Ess20140828::Client::describeScalingActivities(shared_ptr<DescribeScalingActivitiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScalingActivitiesWithOptions(request, runtime);
}

DescribeScalingActivityDetailResponse Alibabacloud_Ess20140828::Client::describeScalingActivityDetailWithOptions(shared_ptr<DescribeScalingActivityDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScalingActivityDetailResponse(doRPCRequest(make_shared<string>("DescribeScalingActivityDetail"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScalingActivityDetailResponse Alibabacloud_Ess20140828::Client::describeScalingActivityDetail(shared_ptr<DescribeScalingActivityDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScalingActivityDetailWithOptions(request, runtime);
}

DescribeScalingConfigurationsResponse Alibabacloud_Ess20140828::Client::describeScalingConfigurationsWithOptions(shared_ptr<DescribeScalingConfigurationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScalingConfigurationsResponse(doRPCRequest(make_shared<string>("DescribeScalingConfigurations"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScalingConfigurationsResponse Alibabacloud_Ess20140828::Client::describeScalingConfigurations(shared_ptr<DescribeScalingConfigurationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScalingConfigurationsWithOptions(request, runtime);
}

DescribeScalingInstancesResponse Alibabacloud_Ess20140828::Client::describeScalingInstancesWithOptions(shared_ptr<DescribeScalingInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScalingInstancesResponse(doRPCRequest(make_shared<string>("DescribeScalingInstances"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScalingInstancesResponse Alibabacloud_Ess20140828::Client::describeScalingInstances(shared_ptr<DescribeScalingInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScalingInstancesWithOptions(request, runtime);
}

DescribeScalingRulesResponse Alibabacloud_Ess20140828::Client::describeScalingRulesWithOptions(shared_ptr<DescribeScalingRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScalingRulesResponse(doRPCRequest(make_shared<string>("DescribeScalingRules"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScalingRulesResponse Alibabacloud_Ess20140828::Client::describeScalingRules(shared_ptr<DescribeScalingRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScalingRulesWithOptions(request, runtime);
}

DescribeScheduledTasksResponse Alibabacloud_Ess20140828::Client::describeScheduledTasksWithOptions(shared_ptr<DescribeScheduledTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScheduledTasksResponse(doRPCRequest(make_shared<string>("DescribeScheduledTasks"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScheduledTasksResponse Alibabacloud_Ess20140828::Client::describeScheduledTasks(shared_ptr<DescribeScheduledTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScheduledTasksWithOptions(request, runtime);
}

DetachAlbServerGroupsResponse Alibabacloud_Ess20140828::Client::detachAlbServerGroupsWithOptions(shared_ptr<DetachAlbServerGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetachAlbServerGroupsResponse(doRPCRequest(make_shared<string>("DetachAlbServerGroups"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetachAlbServerGroupsResponse Alibabacloud_Ess20140828::Client::detachAlbServerGroups(shared_ptr<DetachAlbServerGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachAlbServerGroupsWithOptions(request, runtime);
}

DetachDBInstancesResponse Alibabacloud_Ess20140828::Client::detachDBInstancesWithOptions(shared_ptr<DetachDBInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetachDBInstancesResponse(doRPCRequest(make_shared<string>("DetachDBInstances"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetachDBInstancesResponse Alibabacloud_Ess20140828::Client::detachDBInstances(shared_ptr<DetachDBInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachDBInstancesWithOptions(request, runtime);
}

DetachInstancesResponse Alibabacloud_Ess20140828::Client::detachInstancesWithOptions(shared_ptr<DetachInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetachInstancesResponse(doRPCRequest(make_shared<string>("DetachInstances"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetachInstancesResponse Alibabacloud_Ess20140828::Client::detachInstances(shared_ptr<DetachInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachInstancesWithOptions(request, runtime);
}

DetachLoadBalancersResponse Alibabacloud_Ess20140828::Client::detachLoadBalancersWithOptions(shared_ptr<DetachLoadBalancersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetachLoadBalancersResponse(doRPCRequest(make_shared<string>("DetachLoadBalancers"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetachLoadBalancersResponse Alibabacloud_Ess20140828::Client::detachLoadBalancers(shared_ptr<DetachLoadBalancersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachLoadBalancersWithOptions(request, runtime);
}

DetachVServerGroupsResponse Alibabacloud_Ess20140828::Client::detachVServerGroupsWithOptions(shared_ptr<DetachVServerGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetachVServerGroupsResponse(doRPCRequest(make_shared<string>("DetachVServerGroups"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetachVServerGroupsResponse Alibabacloud_Ess20140828::Client::detachVServerGroups(shared_ptr<DetachVServerGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachVServerGroupsWithOptions(request, runtime);
}

DisableAlarmResponse Alibabacloud_Ess20140828::Client::disableAlarmWithOptions(shared_ptr<DisableAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DisableAlarmResponse(doRPCRequest(make_shared<string>("DisableAlarm"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DisableAlarmResponse Alibabacloud_Ess20140828::Client::disableAlarm(shared_ptr<DisableAlarmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableAlarmWithOptions(request, runtime);
}

DisableScalingGroupResponse Alibabacloud_Ess20140828::Client::disableScalingGroupWithOptions(shared_ptr<DisableScalingGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DisableScalingGroupResponse(doRPCRequest(make_shared<string>("DisableScalingGroup"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DisableScalingGroupResponse Alibabacloud_Ess20140828::Client::disableScalingGroup(shared_ptr<DisableScalingGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableScalingGroupWithOptions(request, runtime);
}

EnableAlarmResponse Alibabacloud_Ess20140828::Client::enableAlarmWithOptions(shared_ptr<EnableAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EnableAlarmResponse(doRPCRequest(make_shared<string>("EnableAlarm"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EnableAlarmResponse Alibabacloud_Ess20140828::Client::enableAlarm(shared_ptr<EnableAlarmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableAlarmWithOptions(request, runtime);
}

EnableScalingGroupResponse Alibabacloud_Ess20140828::Client::enableScalingGroupWithOptions(shared_ptr<EnableScalingGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EnableScalingGroupResponse(doRPCRequest(make_shared<string>("EnableScalingGroup"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EnableScalingGroupResponse Alibabacloud_Ess20140828::Client::enableScalingGroup(shared_ptr<EnableScalingGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableScalingGroupWithOptions(request, runtime);
}

EnterStandbyResponse Alibabacloud_Ess20140828::Client::enterStandbyWithOptions(shared_ptr<EnterStandbyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EnterStandbyResponse(doRPCRequest(make_shared<string>("EnterStandby"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EnterStandbyResponse Alibabacloud_Ess20140828::Client::enterStandby(shared_ptr<EnterStandbyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enterStandbyWithOptions(request, runtime);
}

ExecuteScalingRuleResponse Alibabacloud_Ess20140828::Client::executeScalingRuleWithOptions(shared_ptr<ExecuteScalingRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ExecuteScalingRuleResponse(doRPCRequest(make_shared<string>("ExecuteScalingRule"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ExecuteScalingRuleResponse Alibabacloud_Ess20140828::Client::executeScalingRule(shared_ptr<ExecuteScalingRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executeScalingRuleWithOptions(request, runtime);
}

ExitStandbyResponse Alibabacloud_Ess20140828::Client::exitStandbyWithOptions(shared_ptr<ExitStandbyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ExitStandbyResponse(doRPCRequest(make_shared<string>("ExitStandby"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ExitStandbyResponse Alibabacloud_Ess20140828::Client::exitStandby(shared_ptr<ExitStandbyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return exitStandbyWithOptions(request, runtime);
}

ListTagKeysResponse Alibabacloud_Ess20140828::Client::listTagKeysWithOptions(shared_ptr<ListTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTagKeysResponse(doRPCRequest(make_shared<string>("ListTagKeys"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagKeysResponse Alibabacloud_Ess20140828::Client::listTagKeys(shared_ptr<ListTagKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagKeysWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Ess20140828::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTagResourcesResponse(doRPCRequest(make_shared<string>("ListTagResources"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagResourcesResponse Alibabacloud_Ess20140828::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ListTagValuesResponse Alibabacloud_Ess20140828::Client::listTagValuesWithOptions(shared_ptr<ListTagValuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTagValuesResponse(doRPCRequest(make_shared<string>("ListTagValues"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagValuesResponse Alibabacloud_Ess20140828::Client::listTagValues(shared_ptr<ListTagValuesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagValuesWithOptions(request, runtime);
}

ModifyAlarmResponse Alibabacloud_Ess20140828::Client::modifyAlarmWithOptions(shared_ptr<ModifyAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyAlarmResponse(doRPCRequest(make_shared<string>("ModifyAlarm"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyAlarmResponse Alibabacloud_Ess20140828::Client::modifyAlarm(shared_ptr<ModifyAlarmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAlarmWithOptions(request, runtime);
}

ModifyLifecycleHookResponse Alibabacloud_Ess20140828::Client::modifyLifecycleHookWithOptions(shared_ptr<ModifyLifecycleHookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyLifecycleHookResponse(doRPCRequest(make_shared<string>("ModifyLifecycleHook"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyLifecycleHookResponse Alibabacloud_Ess20140828::Client::modifyLifecycleHook(shared_ptr<ModifyLifecycleHookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyLifecycleHookWithOptions(request, runtime);
}

ModifyNotificationConfigurationResponse Alibabacloud_Ess20140828::Client::modifyNotificationConfigurationWithOptions(shared_ptr<ModifyNotificationConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyNotificationConfigurationResponse(doRPCRequest(make_shared<string>("ModifyNotificationConfiguration"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyNotificationConfigurationResponse Alibabacloud_Ess20140828::Client::modifyNotificationConfiguration(shared_ptr<ModifyNotificationConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyNotificationConfigurationWithOptions(request, runtime);
}

ModifyScalingConfigurationResponse Alibabacloud_Ess20140828::Client::modifyScalingConfigurationWithOptions(shared_ptr<ModifyScalingConfigurationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ModifyScalingConfigurationShrinkRequest> request = make_shared<ModifyScalingConfigurationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->schedulerOptions)) {
    request->schedulerOptionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->schedulerOptions, make_shared<string>("SchedulerOptions"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyScalingConfigurationResponse(doRPCRequest(make_shared<string>("ModifyScalingConfiguration"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyScalingConfigurationResponse Alibabacloud_Ess20140828::Client::modifyScalingConfiguration(shared_ptr<ModifyScalingConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyScalingConfigurationWithOptions(request, runtime);
}

ModifyScalingGroupResponse Alibabacloud_Ess20140828::Client::modifyScalingGroupWithOptions(shared_ptr<ModifyScalingGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyScalingGroupResponse(doRPCRequest(make_shared<string>("ModifyScalingGroup"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyScalingGroupResponse Alibabacloud_Ess20140828::Client::modifyScalingGroup(shared_ptr<ModifyScalingGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyScalingGroupWithOptions(request, runtime);
}

ModifyScalingRuleResponse Alibabacloud_Ess20140828::Client::modifyScalingRuleWithOptions(shared_ptr<ModifyScalingRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyScalingRuleResponse(doRPCRequest(make_shared<string>("ModifyScalingRule"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyScalingRuleResponse Alibabacloud_Ess20140828::Client::modifyScalingRule(shared_ptr<ModifyScalingRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyScalingRuleWithOptions(request, runtime);
}

ModifyScheduledTaskResponse Alibabacloud_Ess20140828::Client::modifyScheduledTaskWithOptions(shared_ptr<ModifyScheduledTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyScheduledTaskResponse(doRPCRequest(make_shared<string>("ModifyScheduledTask"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyScheduledTaskResponse Alibabacloud_Ess20140828::Client::modifyScheduledTask(shared_ptr<ModifyScheduledTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyScheduledTaskWithOptions(request, runtime);
}

RebalanceInstancesResponse Alibabacloud_Ess20140828::Client::rebalanceInstancesWithOptions(shared_ptr<RebalanceInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RebalanceInstancesResponse(doRPCRequest(make_shared<string>("RebalanceInstances"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RebalanceInstancesResponse Alibabacloud_Ess20140828::Client::rebalanceInstances(shared_ptr<RebalanceInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rebalanceInstancesWithOptions(request, runtime);
}

RecordLifecycleActionHeartbeatResponse Alibabacloud_Ess20140828::Client::recordLifecycleActionHeartbeatWithOptions(shared_ptr<RecordLifecycleActionHeartbeatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RecordLifecycleActionHeartbeatResponse(doRPCRequest(make_shared<string>("RecordLifecycleActionHeartbeat"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecordLifecycleActionHeartbeatResponse Alibabacloud_Ess20140828::Client::recordLifecycleActionHeartbeat(shared_ptr<RecordLifecycleActionHeartbeatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recordLifecycleActionHeartbeatWithOptions(request, runtime);
}

RemoveInstancesResponse Alibabacloud_Ess20140828::Client::removeInstancesWithOptions(shared_ptr<RemoveInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveInstancesResponse(doRPCRequest(make_shared<string>("RemoveInstances"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveInstancesResponse Alibabacloud_Ess20140828::Client::removeInstances(shared_ptr<RemoveInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeInstancesWithOptions(request, runtime);
}

ResumeProcessesResponse Alibabacloud_Ess20140828::Client::resumeProcessesWithOptions(shared_ptr<ResumeProcessesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResumeProcessesResponse(doRPCRequest(make_shared<string>("ResumeProcesses"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResumeProcessesResponse Alibabacloud_Ess20140828::Client::resumeProcesses(shared_ptr<ResumeProcessesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resumeProcessesWithOptions(request, runtime);
}

ScaleWithAdjustmentResponse Alibabacloud_Ess20140828::Client::scaleWithAdjustmentWithOptions(shared_ptr<ScaleWithAdjustmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ScaleWithAdjustmentResponse(doRPCRequest(make_shared<string>("ScaleWithAdjustment"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ScaleWithAdjustmentResponse Alibabacloud_Ess20140828::Client::scaleWithAdjustment(shared_ptr<ScaleWithAdjustmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return scaleWithAdjustmentWithOptions(request, runtime);
}

SetGroupDeletionProtectionResponse Alibabacloud_Ess20140828::Client::setGroupDeletionProtectionWithOptions(shared_ptr<SetGroupDeletionProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetGroupDeletionProtectionResponse(doRPCRequest(make_shared<string>("SetGroupDeletionProtection"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetGroupDeletionProtectionResponse Alibabacloud_Ess20140828::Client::setGroupDeletionProtection(shared_ptr<SetGroupDeletionProtectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setGroupDeletionProtectionWithOptions(request, runtime);
}

SetInstanceHealthResponse Alibabacloud_Ess20140828::Client::setInstanceHealthWithOptions(shared_ptr<SetInstanceHealthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetInstanceHealthResponse(doRPCRequest(make_shared<string>("SetInstanceHealth"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetInstanceHealthResponse Alibabacloud_Ess20140828::Client::setInstanceHealth(shared_ptr<SetInstanceHealthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setInstanceHealthWithOptions(request, runtime);
}

SetInstancesProtectionResponse Alibabacloud_Ess20140828::Client::setInstancesProtectionWithOptions(shared_ptr<SetInstancesProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetInstancesProtectionResponse(doRPCRequest(make_shared<string>("SetInstancesProtection"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetInstancesProtectionResponse Alibabacloud_Ess20140828::Client::setInstancesProtection(shared_ptr<SetInstancesProtectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setInstancesProtectionWithOptions(request, runtime);
}

SuspendProcessesResponse Alibabacloud_Ess20140828::Client::suspendProcessesWithOptions(shared_ptr<SuspendProcessesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SuspendProcessesResponse(doRPCRequest(make_shared<string>("SuspendProcesses"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SuspendProcessesResponse Alibabacloud_Ess20140828::Client::suspendProcesses(shared_ptr<SuspendProcessesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return suspendProcessesWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Ess20140828::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TagResourcesResponse(doRPCRequest(make_shared<string>("TagResources"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TagResourcesResponse Alibabacloud_Ess20140828::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Ess20140828::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UntagResourcesResponse(doRPCRequest(make_shared<string>("UntagResources"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UntagResourcesResponse Alibabacloud_Ess20140828::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

VerifyAuthenticationResponse Alibabacloud_Ess20140828::Client::verifyAuthenticationWithOptions(shared_ptr<VerifyAuthenticationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return VerifyAuthenticationResponse(doRPCRequest(make_shared<string>("VerifyAuthentication"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

VerifyAuthenticationResponse Alibabacloud_Ess20140828::Client::verifyAuthentication(shared_ptr<VerifyAuthenticationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyAuthenticationWithOptions(request, runtime);
}

VerifyUserResponse Alibabacloud_Ess20140828::Client::verifyUserWithOptions(shared_ptr<VerifyUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return VerifyUserResponse(doRPCRequest(make_shared<string>("VerifyUser"), make_shared<string>("2014-08-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("none"), req, runtime));
}

VerifyUserResponse Alibabacloud_Ess20140828::Client::verifyUser(shared_ptr<VerifyUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyUserWithOptions(request, runtime);
}

