// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/alb_20200616.hpp>
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

using namespace Alibabacloud_Alb20200616;

Alibabacloud_Alb20200616::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-beijing", "alb.cn-beijing.aliyuncs.com"},
    {"cn-zhangjiakou", "alb.cn-zhangjiakou.aliyuncs.com"},
    {"cn-hangzhou", "alb.cn-hangzhou.aliyuncs.com"},
    {"cn-shanghai", "alb.cn-shanghai.aliyuncs.com"},
    {"cn-shenzhen", "alb.cn-shenzhen.aliyuncs.com"},
    {"cn-hongkong", "alb.cn-hongkong.aliyuncs.com"},
    {"ap-southeast-1", "alb.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2", "alb.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-5", "alb.ap-southeast-5.aliyuncs.com"},
    {"us-east-1", "alb.us-east-1.aliyuncs.com"},
    {"eu-central-1", "alb.eu-central-1.aliyuncs.com"},
    {"ap-south-1", "alb.ap-south-1.aliyuncs.com"},
    {"ap-northeast-1", "alb.ap-northeast-1.aliyuncs.com"},
    {"cn-chengdu", "alb.cn-chengdu.aliyuncs.com"},
    {"cn-wulanchabu", "alb.cn-wulanchabu.aliyuncs.com"}
  })
);
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

ListAclsResponse Alibabacloud_Alb20200616::Client::listAclsWithOptions(shared_ptr<ListAclsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAclsResponse(doRPCRequest(make_shared<string>("ListAcls"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAclsResponse Alibabacloud_Alb20200616::Client::listAcls(shared_ptr<ListAclsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAclsWithOptions(request, runtime);
}

CreateHealthCheckTemplateResponse Alibabacloud_Alb20200616::Client::createHealthCheckTemplateWithOptions(shared_ptr<CreateHealthCheckTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateHealthCheckTemplateResponse(doRPCRequest(make_shared<string>("CreateHealthCheckTemplate"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateHealthCheckTemplateResponse Alibabacloud_Alb20200616::Client::createHealthCheckTemplate(shared_ptr<CreateHealthCheckTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createHealthCheckTemplateWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Alb20200616::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTagResourcesResponse(doRPCRequest(make_shared<string>("ListTagResources"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagResourcesResponse Alibabacloud_Alb20200616::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

GetListenerAttributeResponse Alibabacloud_Alb20200616::Client::getListenerAttributeWithOptions(shared_ptr<GetListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetListenerAttributeResponse(doRPCRequest(make_shared<string>("GetListenerAttribute"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetListenerAttributeResponse Alibabacloud_Alb20200616::Client::getListenerAttribute(shared_ptr<GetListenerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getListenerAttributeWithOptions(request, runtime);
}

UpdateHealthCheckTemplateAttributeResponse Alibabacloud_Alb20200616::Client::updateHealthCheckTemplateAttributeWithOptions(shared_ptr<UpdateHealthCheckTemplateAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateHealthCheckTemplateAttributeResponse(doRPCRequest(make_shared<string>("UpdateHealthCheckTemplateAttribute"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateHealthCheckTemplateAttributeResponse Alibabacloud_Alb20200616::Client::updateHealthCheckTemplateAttribute(shared_ptr<UpdateHealthCheckTemplateAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateHealthCheckTemplateAttributeWithOptions(request, runtime);
}

ListServerGroupServersResponse Alibabacloud_Alb20200616::Client::listServerGroupServersWithOptions(shared_ptr<ListServerGroupServersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListServerGroupServersResponse(doRPCRequest(make_shared<string>("ListServerGroupServers"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListServerGroupServersResponse Alibabacloud_Alb20200616::Client::listServerGroupServers(shared_ptr<ListServerGroupServersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listServerGroupServersWithOptions(request, runtime);
}

RemoveEntriesFromAclResponse Alibabacloud_Alb20200616::Client::removeEntriesFromAclWithOptions(shared_ptr<RemoveEntriesFromAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveEntriesFromAclResponse(doRPCRequest(make_shared<string>("RemoveEntriesFromAcl"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveEntriesFromAclResponse Alibabacloud_Alb20200616::Client::removeEntriesFromAcl(shared_ptr<RemoveEntriesFromAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeEntriesFromAclWithOptions(request, runtime);
}

DeleteSecurityPolicyResponse Alibabacloud_Alb20200616::Client::deleteSecurityPolicyWithOptions(shared_ptr<DeleteSecurityPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSecurityPolicyResponse(doRPCRequest(make_shared<string>("DeleteSecurityPolicy"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSecurityPolicyResponse Alibabacloud_Alb20200616::Client::deleteSecurityPolicy(shared_ptr<DeleteSecurityPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSecurityPolicyWithOptions(request, runtime);
}

DisableLoadBalancerAccessLogResponse Alibabacloud_Alb20200616::Client::disableLoadBalancerAccessLogWithOptions(shared_ptr<DisableLoadBalancerAccessLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DisableLoadBalancerAccessLogResponse(doRPCRequest(make_shared<string>("DisableLoadBalancerAccessLog"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DisableLoadBalancerAccessLogResponse Alibabacloud_Alb20200616::Client::disableLoadBalancerAccessLog(shared_ptr<DisableLoadBalancerAccessLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableLoadBalancerAccessLogWithOptions(request, runtime);
}

ListServerGroupsResponse Alibabacloud_Alb20200616::Client::listServerGroupsWithOptions(shared_ptr<ListServerGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListServerGroupsResponse(doRPCRequest(make_shared<string>("ListServerGroups"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListServerGroupsResponse Alibabacloud_Alb20200616::Client::listServerGroups(shared_ptr<ListServerGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listServerGroupsWithOptions(request, runtime);
}

MoveResourceGroupResponse Alibabacloud_Alb20200616::Client::moveResourceGroupWithOptions(shared_ptr<MoveResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return MoveResourceGroupResponse(doRPCRequest(make_shared<string>("MoveResourceGroup"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

MoveResourceGroupResponse Alibabacloud_Alb20200616::Client::moveResourceGroup(shared_ptr<MoveResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return moveResourceGroupWithOptions(request, runtime);
}

EnableDeletionProtectionResponse Alibabacloud_Alb20200616::Client::enableDeletionProtectionWithOptions(shared_ptr<EnableDeletionProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EnableDeletionProtectionResponse(doRPCRequest(make_shared<string>("EnableDeletionProtection"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EnableDeletionProtectionResponse Alibabacloud_Alb20200616::Client::enableDeletionProtection(shared_ptr<EnableDeletionProtectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableDeletionProtectionWithOptions(request, runtime);
}

UpdateListenerAttributeResponse Alibabacloud_Alb20200616::Client::updateListenerAttributeWithOptions(shared_ptr<UpdateListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateListenerAttributeResponse(doRPCRequest(make_shared<string>("UpdateListenerAttribute"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateListenerAttributeResponse Alibabacloud_Alb20200616::Client::updateListenerAttribute(shared_ptr<UpdateListenerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateListenerAttributeWithOptions(request, runtime);
}

CreateLoadBalancerResponse Alibabacloud_Alb20200616::Client::createLoadBalancerWithOptions(shared_ptr<CreateLoadBalancerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateLoadBalancerResponse(doRPCRequest(make_shared<string>("CreateLoadBalancer"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateLoadBalancerResponse Alibabacloud_Alb20200616::Client::createLoadBalancer(shared_ptr<CreateLoadBalancerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLoadBalancerWithOptions(request, runtime);
}

DeleteHealthCheckTemplatesResponse Alibabacloud_Alb20200616::Client::deleteHealthCheckTemplatesWithOptions(shared_ptr<DeleteHealthCheckTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteHealthCheckTemplatesResponse(doRPCRequest(make_shared<string>("DeleteHealthCheckTemplates"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteHealthCheckTemplatesResponse Alibabacloud_Alb20200616::Client::deleteHealthCheckTemplates(shared_ptr<DeleteHealthCheckTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteHealthCheckTemplatesWithOptions(request, runtime);
}

UpdateServerGroupAttributeResponse Alibabacloud_Alb20200616::Client::updateServerGroupAttributeWithOptions(shared_ptr<UpdateServerGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateServerGroupAttributeResponse(doRPCRequest(make_shared<string>("UpdateServerGroupAttribute"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateServerGroupAttributeResponse Alibabacloud_Alb20200616::Client::updateServerGroupAttribute(shared_ptr<UpdateServerGroupAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateServerGroupAttributeWithOptions(request, runtime);
}

CreateServerGroupResponse Alibabacloud_Alb20200616::Client::createServerGroupWithOptions(shared_ptr<CreateServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateServerGroupResponse(doRPCRequest(make_shared<string>("CreateServerGroup"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateServerGroupResponse Alibabacloud_Alb20200616::Client::createServerGroup(shared_ptr<CreateServerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createServerGroupWithOptions(request, runtime);
}

AssociateAclsWithListenerResponse Alibabacloud_Alb20200616::Client::associateAclsWithListenerWithOptions(shared_ptr<AssociateAclsWithListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AssociateAclsWithListenerResponse(doRPCRequest(make_shared<string>("AssociateAclsWithListener"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AssociateAclsWithListenerResponse Alibabacloud_Alb20200616::Client::associateAclsWithListener(shared_ptr<AssociateAclsWithListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateAclsWithListenerWithOptions(request, runtime);
}

DeleteRuleResponse Alibabacloud_Alb20200616::Client::deleteRuleWithOptions(shared_ptr<DeleteRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteRuleResponse(doRPCRequest(make_shared<string>("DeleteRule"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteRuleResponse Alibabacloud_Alb20200616::Client::deleteRule(shared_ptr<DeleteRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRuleWithOptions(request, runtime);
}

ListRulesResponse Alibabacloud_Alb20200616::Client::listRulesWithOptions(shared_ptr<ListRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListRulesResponse(doRPCRequest(make_shared<string>("ListRules"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRulesResponse Alibabacloud_Alb20200616::Client::listRules(shared_ptr<ListRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRulesWithOptions(request, runtime);
}

DescribeZonesResponse Alibabacloud_Alb20200616::Client::describeZonesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return DescribeZonesResponse(doRPCRequest(make_shared<string>("DescribeZones"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeZonesResponse Alibabacloud_Alb20200616::Client::describeZones() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeZonesWithOptions(runtime);
}

DeleteServerGroupResponse Alibabacloud_Alb20200616::Client::deleteServerGroupWithOptions(shared_ptr<DeleteServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteServerGroupResponse(doRPCRequest(make_shared<string>("DeleteServerGroup"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteServerGroupResponse Alibabacloud_Alb20200616::Client::deleteServerGroup(shared_ptr<DeleteServerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteServerGroupWithOptions(request, runtime);
}

AddServersToServerGroupResponse Alibabacloud_Alb20200616::Client::addServersToServerGroupWithOptions(shared_ptr<AddServersToServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddServersToServerGroupResponse(doRPCRequest(make_shared<string>("AddServersToServerGroup"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddServersToServerGroupResponse Alibabacloud_Alb20200616::Client::addServersToServerGroup(shared_ptr<AddServersToServerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addServersToServerGroupWithOptions(request, runtime);
}

DeleteLoadBalancerResponse Alibabacloud_Alb20200616::Client::deleteLoadBalancerWithOptions(shared_ptr<DeleteLoadBalancerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteLoadBalancerResponse(doRPCRequest(make_shared<string>("DeleteLoadBalancer"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteLoadBalancerResponse Alibabacloud_Alb20200616::Client::deleteLoadBalancer(shared_ptr<DeleteLoadBalancerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLoadBalancerWithOptions(request, runtime);
}

UpdateListenerLogConfigResponse Alibabacloud_Alb20200616::Client::updateListenerLogConfigWithOptions(shared_ptr<UpdateListenerLogConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateListenerLogConfigResponse(doRPCRequest(make_shared<string>("UpdateListenerLogConfig"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateListenerLogConfigResponse Alibabacloud_Alb20200616::Client::updateListenerLogConfig(shared_ptr<UpdateListenerLogConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateListenerLogConfigWithOptions(request, runtime);
}

UnTagResourcesResponse Alibabacloud_Alb20200616::Client::unTagResourcesWithOptions(shared_ptr<UnTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnTagResourcesResponse(doRPCRequest(make_shared<string>("UnTagResources"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnTagResourcesResponse Alibabacloud_Alb20200616::Client::unTagResources(shared_ptr<UnTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unTagResourcesWithOptions(request, runtime);
}

ListSystemSecurityPoliciesResponse Alibabacloud_Alb20200616::Client::listSystemSecurityPoliciesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return ListSystemSecurityPoliciesResponse(doRPCRequest(make_shared<string>("ListSystemSecurityPolicies"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSystemSecurityPoliciesResponse Alibabacloud_Alb20200616::Client::listSystemSecurityPolicies() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSystemSecurityPoliciesWithOptions(runtime);
}

AddEntriesToAclResponse Alibabacloud_Alb20200616::Client::addEntriesToAclWithOptions(shared_ptr<AddEntriesToAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddEntriesToAclResponse(doRPCRequest(make_shared<string>("AddEntriesToAcl"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddEntriesToAclResponse Alibabacloud_Alb20200616::Client::addEntriesToAcl(shared_ptr<AddEntriesToAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addEntriesToAclWithOptions(request, runtime);
}

DeleteAclResponse Alibabacloud_Alb20200616::Client::deleteAclWithOptions(shared_ptr<DeleteAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAclResponse(doRPCRequest(make_shared<string>("DeleteAcl"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAclResponse Alibabacloud_Alb20200616::Client::deleteAcl(shared_ptr<DeleteAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAclWithOptions(request, runtime);
}

DissociateAdditionalCertificatesFromListenerResponse Alibabacloud_Alb20200616::Client::dissociateAdditionalCertificatesFromListenerWithOptions(shared_ptr<DissociateAdditionalCertificatesFromListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DissociateAdditionalCertificatesFromListenerResponse(doRPCRequest(make_shared<string>("DissociateAdditionalCertificatesFromListener"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DissociateAdditionalCertificatesFromListenerResponse Alibabacloud_Alb20200616::Client::dissociateAdditionalCertificatesFromListener(shared_ptr<DissociateAdditionalCertificatesFromListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dissociateAdditionalCertificatesFromListenerWithOptions(request, runtime);
}

UpdateLoadBalancerEditionResponse Alibabacloud_Alb20200616::Client::updateLoadBalancerEditionWithOptions(shared_ptr<UpdateLoadBalancerEditionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateLoadBalancerEditionResponse(doRPCRequest(make_shared<string>("UpdateLoadBalancerEdition"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateLoadBalancerEditionResponse Alibabacloud_Alb20200616::Client::updateLoadBalancerEdition(shared_ptr<UpdateLoadBalancerEditionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLoadBalancerEditionWithOptions(request, runtime);
}

UpdateRulesAttributeResponse Alibabacloud_Alb20200616::Client::updateRulesAttributeWithOptions(shared_ptr<UpdateRulesAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateRulesAttributeResponse(doRPCRequest(make_shared<string>("UpdateRulesAttribute"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateRulesAttributeResponse Alibabacloud_Alb20200616::Client::updateRulesAttribute(shared_ptr<UpdateRulesAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRulesAttributeWithOptions(request, runtime);
}

ListListenersResponse Alibabacloud_Alb20200616::Client::listListenersWithOptions(shared_ptr<ListListenersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListListenersResponse(doRPCRequest(make_shared<string>("ListListeners"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListListenersResponse Alibabacloud_Alb20200616::Client::listListeners(shared_ptr<ListListenersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listListenersWithOptions(request, runtime);
}

ListAclRelationsResponse Alibabacloud_Alb20200616::Client::listAclRelationsWithOptions(shared_ptr<ListAclRelationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAclRelationsResponse(doRPCRequest(make_shared<string>("ListAclRelations"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAclRelationsResponse Alibabacloud_Alb20200616::Client::listAclRelations(shared_ptr<ListAclRelationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAclRelationsWithOptions(request, runtime);
}

DeleteRulesResponse Alibabacloud_Alb20200616::Client::deleteRulesWithOptions(shared_ptr<DeleteRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteRulesResponse(doRPCRequest(make_shared<string>("DeleteRules"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteRulesResponse Alibabacloud_Alb20200616::Client::deleteRules(shared_ptr<DeleteRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRulesWithOptions(request, runtime);
}

DeleteListenerResponse Alibabacloud_Alb20200616::Client::deleteListenerWithOptions(shared_ptr<DeleteListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteListenerResponse(doRPCRequest(make_shared<string>("DeleteListener"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteListenerResponse Alibabacloud_Alb20200616::Client::deleteListener(shared_ptr<DeleteListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteListenerWithOptions(request, runtime);
}

ListTagKeysResponse Alibabacloud_Alb20200616::Client::listTagKeysWithOptions(shared_ptr<ListTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTagKeysResponse(doRPCRequest(make_shared<string>("ListTagKeys"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagKeysResponse Alibabacloud_Alb20200616::Client::listTagKeys(shared_ptr<ListTagKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagKeysWithOptions(request, runtime);
}

AssociateAdditionalCertificatesWithListenerResponse Alibabacloud_Alb20200616::Client::associateAdditionalCertificatesWithListenerWithOptions(shared_ptr<AssociateAdditionalCertificatesWithListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AssociateAdditionalCertificatesWithListenerResponse(doRPCRequest(make_shared<string>("AssociateAdditionalCertificatesWithListener"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AssociateAdditionalCertificatesWithListenerResponse Alibabacloud_Alb20200616::Client::associateAdditionalCertificatesWithListener(shared_ptr<AssociateAdditionalCertificatesWithListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateAdditionalCertificatesWithListenerWithOptions(request, runtime);
}

ListHealthCheckTemplatesResponse Alibabacloud_Alb20200616::Client::listHealthCheckTemplatesWithOptions(shared_ptr<ListHealthCheckTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListHealthCheckTemplatesResponse(doRPCRequest(make_shared<string>("ListHealthCheckTemplates"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListHealthCheckTemplatesResponse Alibabacloud_Alb20200616::Client::listHealthCheckTemplates(shared_ptr<ListHealthCheckTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHealthCheckTemplatesWithOptions(request, runtime);
}

GetLoadBalancerAttributeResponse Alibabacloud_Alb20200616::Client::getLoadBalancerAttributeWithOptions(shared_ptr<GetLoadBalancerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetLoadBalancerAttributeResponse(doRPCRequest(make_shared<string>("GetLoadBalancerAttribute"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetLoadBalancerAttributeResponse Alibabacloud_Alb20200616::Client::getLoadBalancerAttribute(shared_ptr<GetLoadBalancerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLoadBalancerAttributeWithOptions(request, runtime);
}

ListTagValuesResponse Alibabacloud_Alb20200616::Client::listTagValuesWithOptions(shared_ptr<ListTagValuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTagValuesResponse(doRPCRequest(make_shared<string>("ListTagValues"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagValuesResponse Alibabacloud_Alb20200616::Client::listTagValues(shared_ptr<ListTagValuesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagValuesWithOptions(request, runtime);
}

ListLoadBalancersResponse Alibabacloud_Alb20200616::Client::listLoadBalancersWithOptions(shared_ptr<ListLoadBalancersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListLoadBalancersResponse(doRPCRequest(make_shared<string>("ListLoadBalancers"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListLoadBalancersResponse Alibabacloud_Alb20200616::Client::listLoadBalancers(shared_ptr<ListLoadBalancersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLoadBalancersWithOptions(request, runtime);
}

EnableLoadBalancerAccessLogResponse Alibabacloud_Alb20200616::Client::enableLoadBalancerAccessLogWithOptions(shared_ptr<EnableLoadBalancerAccessLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EnableLoadBalancerAccessLogResponse(doRPCRequest(make_shared<string>("EnableLoadBalancerAccessLog"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EnableLoadBalancerAccessLogResponse Alibabacloud_Alb20200616::Client::enableLoadBalancerAccessLog(shared_ptr<EnableLoadBalancerAccessLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableLoadBalancerAccessLogWithOptions(request, runtime);
}

DissociateAclsFromListenerResponse Alibabacloud_Alb20200616::Client::dissociateAclsFromListenerWithOptions(shared_ptr<DissociateAclsFromListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DissociateAclsFromListenerResponse(doRPCRequest(make_shared<string>("DissociateAclsFromListener"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DissociateAclsFromListenerResponse Alibabacloud_Alb20200616::Client::dissociateAclsFromListener(shared_ptr<DissociateAclsFromListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dissociateAclsFromListenerWithOptions(request, runtime);
}

ListListenerCertificatesResponse Alibabacloud_Alb20200616::Client::listListenerCertificatesWithOptions(shared_ptr<ListListenerCertificatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListListenerCertificatesResponse(doRPCRequest(make_shared<string>("ListListenerCertificates"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListListenerCertificatesResponse Alibabacloud_Alb20200616::Client::listListenerCertificates(shared_ptr<ListListenerCertificatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listListenerCertificatesWithOptions(request, runtime);
}

CreateAclResponse Alibabacloud_Alb20200616::Client::createAclWithOptions(shared_ptr<CreateAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAclResponse(doRPCRequest(make_shared<string>("CreateAcl"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAclResponse Alibabacloud_Alb20200616::Client::createAcl(shared_ptr<CreateAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAclWithOptions(request, runtime);
}

GetHealthCheckTemplateAttributeResponse Alibabacloud_Alb20200616::Client::getHealthCheckTemplateAttributeWithOptions(shared_ptr<GetHealthCheckTemplateAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetHealthCheckTemplateAttributeResponse(doRPCRequest(make_shared<string>("GetHealthCheckTemplateAttribute"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetHealthCheckTemplateAttributeResponse Alibabacloud_Alb20200616::Client::getHealthCheckTemplateAttribute(shared_ptr<GetHealthCheckTemplateAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHealthCheckTemplateAttributeWithOptions(request, runtime);
}

UpdateSecurityPolicyAttributeResponse Alibabacloud_Alb20200616::Client::updateSecurityPolicyAttributeWithOptions(shared_ptr<UpdateSecurityPolicyAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateSecurityPolicyAttributeResponse(doRPCRequest(make_shared<string>("UpdateSecurityPolicyAttribute"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateSecurityPolicyAttributeResponse Alibabacloud_Alb20200616::Client::updateSecurityPolicyAttribute(shared_ptr<UpdateSecurityPolicyAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSecurityPolicyAttributeWithOptions(request, runtime);
}

ListSecurityPolicyRelationsResponse Alibabacloud_Alb20200616::Client::listSecurityPolicyRelationsWithOptions(shared_ptr<ListSecurityPolicyRelationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListSecurityPolicyRelationsResponse(doRPCRequest(make_shared<string>("ListSecurityPolicyRelations"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSecurityPolicyRelationsResponse Alibabacloud_Alb20200616::Client::listSecurityPolicyRelations(shared_ptr<ListSecurityPolicyRelationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSecurityPolicyRelationsWithOptions(request, runtime);
}

UpdateLoadBalancerAttributeResponse Alibabacloud_Alb20200616::Client::updateLoadBalancerAttributeWithOptions(shared_ptr<UpdateLoadBalancerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateLoadBalancerAttributeResponse(doRPCRequest(make_shared<string>("UpdateLoadBalancerAttribute"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateLoadBalancerAttributeResponse Alibabacloud_Alb20200616::Client::updateLoadBalancerAttribute(shared_ptr<UpdateLoadBalancerAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLoadBalancerAttributeWithOptions(request, runtime);
}

ListAsynJobsResponse Alibabacloud_Alb20200616::Client::listAsynJobsWithOptions(shared_ptr<ListAsynJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAsynJobsResponse(doRPCRequest(make_shared<string>("ListAsynJobs"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAsynJobsResponse Alibabacloud_Alb20200616::Client::listAsynJobs(shared_ptr<ListAsynJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAsynJobsWithOptions(request, runtime);
}

CreateRuleResponse Alibabacloud_Alb20200616::Client::createRuleWithOptions(shared_ptr<CreateRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateRuleResponse(doRPCRequest(make_shared<string>("CreateRule"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateRuleResponse Alibabacloud_Alb20200616::Client::createRule(shared_ptr<CreateRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRuleWithOptions(request, runtime);
}

RemoveServersFromServerGroupResponse Alibabacloud_Alb20200616::Client::removeServersFromServerGroupWithOptions(shared_ptr<RemoveServersFromServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveServersFromServerGroupResponse(doRPCRequest(make_shared<string>("RemoveServersFromServerGroup"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveServersFromServerGroupResponse Alibabacloud_Alb20200616::Client::removeServersFromServerGroup(shared_ptr<RemoveServersFromServerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeServersFromServerGroupWithOptions(request, runtime);
}

ReplaceServersInServerGroupResponse Alibabacloud_Alb20200616::Client::replaceServersInServerGroupWithOptions(shared_ptr<ReplaceServersInServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReplaceServersInServerGroupResponse(doRPCRequest(make_shared<string>("ReplaceServersInServerGroup"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReplaceServersInServerGroupResponse Alibabacloud_Alb20200616::Client::replaceServersInServerGroup(shared_ptr<ReplaceServersInServerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return replaceServersInServerGroupWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Alb20200616::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRegionsResponse(doRPCRequest(make_shared<string>("DescribeRegions"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionsResponse Alibabacloud_Alb20200616::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

CreateSecurityPolicyResponse Alibabacloud_Alb20200616::Client::createSecurityPolicyWithOptions(shared_ptr<CreateSecurityPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSecurityPolicyResponse(doRPCRequest(make_shared<string>("CreateSecurityPolicy"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSecurityPolicyResponse Alibabacloud_Alb20200616::Client::createSecurityPolicy(shared_ptr<CreateSecurityPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSecurityPolicyWithOptions(request, runtime);
}

UpdateRuleAttributeResponse Alibabacloud_Alb20200616::Client::updateRuleAttributeWithOptions(shared_ptr<UpdateRuleAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateRuleAttributeResponse(doRPCRequest(make_shared<string>("UpdateRuleAttribute"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateRuleAttributeResponse Alibabacloud_Alb20200616::Client::updateRuleAttribute(shared_ptr<UpdateRuleAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRuleAttributeWithOptions(request, runtime);
}

ListSecurityPoliciesResponse Alibabacloud_Alb20200616::Client::listSecurityPoliciesWithOptions(shared_ptr<ListSecurityPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListSecurityPoliciesResponse(doRPCRequest(make_shared<string>("ListSecurityPolicies"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSecurityPoliciesResponse Alibabacloud_Alb20200616::Client::listSecurityPolicies(shared_ptr<ListSecurityPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSecurityPoliciesWithOptions(request, runtime);
}

UpdateAclAttributeResponse Alibabacloud_Alb20200616::Client::updateAclAttributeWithOptions(shared_ptr<UpdateAclAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateAclAttributeResponse(doRPCRequest(make_shared<string>("UpdateAclAttribute"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateAclAttributeResponse Alibabacloud_Alb20200616::Client::updateAclAttribute(shared_ptr<UpdateAclAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAclAttributeWithOptions(request, runtime);
}

DisableDeletionProtectionResponse Alibabacloud_Alb20200616::Client::disableDeletionProtectionWithOptions(shared_ptr<DisableDeletionProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DisableDeletionProtectionResponse(doRPCRequest(make_shared<string>("DisableDeletionProtection"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DisableDeletionProtectionResponse Alibabacloud_Alb20200616::Client::disableDeletionProtection(shared_ptr<DisableDeletionProtectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableDeletionProtectionWithOptions(request, runtime);
}

StopListenerResponse Alibabacloud_Alb20200616::Client::stopListenerWithOptions(shared_ptr<StopListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopListenerResponse(doRPCRequest(make_shared<string>("StopListener"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopListenerResponse Alibabacloud_Alb20200616::Client::stopListener(shared_ptr<StopListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopListenerWithOptions(request, runtime);
}

CreateListenerResponse Alibabacloud_Alb20200616::Client::createListenerWithOptions(shared_ptr<CreateListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateListenerResponse(doRPCRequest(make_shared<string>("CreateListener"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateListenerResponse Alibabacloud_Alb20200616::Client::createListener(shared_ptr<CreateListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createListenerWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Alb20200616::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TagResourcesResponse(doRPCRequest(make_shared<string>("TagResources"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TagResourcesResponse Alibabacloud_Alb20200616::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UpdateServerGroupServersAttributeResponse Alibabacloud_Alb20200616::Client::updateServerGroupServersAttributeWithOptions(shared_ptr<UpdateServerGroupServersAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateServerGroupServersAttributeResponse(doRPCRequest(make_shared<string>("UpdateServerGroupServersAttribute"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateServerGroupServersAttributeResponse Alibabacloud_Alb20200616::Client::updateServerGroupServersAttribute(shared_ptr<UpdateServerGroupServersAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateServerGroupServersAttributeWithOptions(request, runtime);
}

StartListenerResponse Alibabacloud_Alb20200616::Client::startListenerWithOptions(shared_ptr<StartListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartListenerResponse(doRPCRequest(make_shared<string>("StartListener"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartListenerResponse Alibabacloud_Alb20200616::Client::startListener(shared_ptr<StartListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startListenerWithOptions(request, runtime);
}

CreateRulesResponse Alibabacloud_Alb20200616::Client::createRulesWithOptions(shared_ptr<CreateRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateRulesResponse(doRPCRequest(make_shared<string>("CreateRules"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateRulesResponse Alibabacloud_Alb20200616::Client::createRules(shared_ptr<CreateRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRulesWithOptions(request, runtime);
}

ListAclEntriesResponse Alibabacloud_Alb20200616::Client::listAclEntriesWithOptions(shared_ptr<ListAclEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAclEntriesResponse(doRPCRequest(make_shared<string>("ListAclEntries"), make_shared<string>("2020-06-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAclEntriesResponse Alibabacloud_Alb20200616::Client::listAclEntries(shared_ptr<ListAclEntriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAclEntriesWithOptions(request, runtime);
}

