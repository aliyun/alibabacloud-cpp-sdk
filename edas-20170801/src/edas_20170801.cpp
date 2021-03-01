// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/edas_20170801.hpp>
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

using namespace Alibabacloud_Edas20170801;

Alibabacloud_Edas20170801::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-2-pop", "edas.ap-northeast-1.aliyuncs.com"},
    {"ap-south-1", "edas.ap-northeast-1.aliyuncs.com"},
    {"ap-southeast-3", "edas.ap-northeast-1.aliyuncs.com"},
    {"ap-southeast-5", "edas.ap-northeast-1.aliyuncs.com"},
    {"cn-beijing-finance-1", "edas.aliyuncs.com"},
    {"cn-beijing-finance-pop", "edas.aliyuncs.com"},
    {"cn-beijing-gov-1", "edas.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "edas.aliyuncs.com"},
    {"cn-chengdu", "edas.aliyuncs.com"},
    {"cn-edge-1", "edas.aliyuncs.com"},
    {"cn-fujian", "edas.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "edas.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "edas.aliyuncs.com"},
    {"cn-hangzhou-finance", "edas.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "edas.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "edas.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "edas.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "edas.aliyuncs.com"},
    {"cn-hangzhou-test-306", "edas.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "edas.aliyuncs.com"},
    {"cn-huhehaote", "edas.aliyuncs.com"},
    {"cn-qingdao-nebula", "edas.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "edas.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "edas.aliyuncs.com"},
    {"cn-shanghai-finance-1", "edas.aliyuncs.com"},
    {"cn-shanghai-inner", "edas.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "edas.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "edas.aliyuncs.com"},
    {"cn-shenzhen-inner", "edas.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "edas.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "edas.aliyuncs.com"},
    {"cn-wuhan", "edas.aliyuncs.com"},
    {"cn-yushanfang", "edas.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "edas.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "edas.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "edas.aliyuncs.com"},
    {"eu-west-1", "edas.ap-northeast-1.aliyuncs.com"},
    {"eu-west-1-oxs", "edas.ap-northeast-1.aliyuncs.com"},
    {"me-east-1", "edas.ap-northeast-1.aliyuncs.com"},
    {"rus-west-1-pop", "edas.ap-northeast-1.aliyuncs.com"},
    {"us-west-1", "edas.ap-northeast-1.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("edas"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Edas20170801::Client::getEndpoint(shared_ptr<string> productId,
                                                      shared_ptr<string> regionId,
                                                      shared_ptr<string> endpointRule,
                                                      shared_ptr<string> network,
                                                      shared_ptr<string> suffix,
                                                      shared_ptr<map<string, string>> endpointMap,
                                                      shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)["[object Object]"]))) {
    return (*endpointMap)["[object Object]"];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

AbortAndRollbackChangeOrderResponse Alibabacloud_Edas20170801::Client::abortAndRollbackChangeOrder(shared_ptr<AbortAndRollbackChangeOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return abortAndRollbackChangeOrderWithOptions(request, headers, runtime);
}

AbortAndRollbackChangeOrderResponse Alibabacloud_Edas20170801::Client::abortAndRollbackChangeOrderWithOptions(shared_ptr<AbortAndRollbackChangeOrderRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->changeOrderId)) {
    (*query)["ChangeOrderId"] = *request->changeOrderId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return AbortAndRollbackChangeOrderResponse(doROARequest(make_shared<string>("AbortAndRollbackChangeOrder"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/changeorder/change_order_abort_and_rollback")), make_shared<string>("json"), req, runtime));
}

AbortChangeOrderResponse Alibabacloud_Edas20170801::Client::abortChangeOrder(shared_ptr<AbortChangeOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return abortChangeOrderWithOptions(request, headers, runtime);
}

AbortChangeOrderResponse Alibabacloud_Edas20170801::Client::abortChangeOrderWithOptions(shared_ptr<AbortChangeOrderRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->changeOrderId)) {
    (*query)["ChangeOrderId"] = *request->changeOrderId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return AbortChangeOrderResponse(doROARequest(make_shared<string>("AbortChangeOrder"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/changeorder/change_order_abort")), make_shared<string>("json"), req, runtime));
}

AddLogPathResponse Alibabacloud_Edas20170801::Client::addLogPath(shared_ptr<AddLogPathRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addLogPathWithOptions(request, headers, runtime);
}

AddLogPathResponse Alibabacloud_Edas20170801::Client::addLogPathWithOptions(shared_ptr<AddLogPathRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*body)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    (*body)["Path"] = *request->path;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return AddLogPathResponse(doROARequestWithForm(make_shared<string>("AddLogPath"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/log/popListLogDirs")), make_shared<string>("json"), req, runtime));
}

AddMockRuleResponse Alibabacloud_Edas20170801::Client::addMockRule(shared_ptr<AddMockRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addMockRuleWithOptions(request, headers, runtime);
}

AddMockRuleResponse Alibabacloud_Edas20170801::Client::addMockRuleWithOptions(shared_ptr<AddMockRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*query)["Name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    (*query)["Region"] = *request->region;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    (*query)["Source"] = *request->source;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->providerAppId)) {
    (*query)["ProviderAppId"] = *request->providerAppId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->providerAppName)) {
    (*query)["ProviderAppName"] = *request->providerAppName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraJson)) {
    (*query)["ExtraJson"] = *request->extraJson;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scMockItemJson)) {
    (*query)["ScMockItemJson"] = *request->scMockItemJson;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dubboMockItemJson)) {
    (*query)["DubboMockItemJson"] = *request->dubboMockItemJson;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerAppsJson)) {
    (*query)["ConsumerAppsJson"] = *request->consumerAppsJson;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enable)) {
    (*query)["Enable"] = *request->enable;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    (*query)["Namespace_"] = *request->namespace_;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return AddMockRuleResponse(doROARequest(make_shared<string>("AddMockRule"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/sp/api/mock/addMockRule")), make_shared<string>("json"), req, runtime));
}

AddServiceTimeConfigResponse Alibabacloud_Edas20170801::Client::addServiceTimeConfig(shared_ptr<AddServiceTimeConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addServiceTimeConfigWithOptions(request, headers, runtime);
}

AddServiceTimeConfigResponse Alibabacloud_Edas20170801::Client::addServiceTimeConfigWithOptions(shared_ptr<AddServiceTimeConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    (*query)["Region"] = *request->region;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    (*query)["ServiceType"] = *request->serviceType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    (*query)["ServiceName"] = *request->serviceName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceVersion)) {
    (*query)["ServiceVersion"] = *request->serviceVersion;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceGroup)) {
    (*query)["ServiceGroup"] = *request->serviceGroup;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    (*query)["Path"] = *request->path;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerAppName)) {
    (*query)["ConsumerAppName"] = *request->consumerAppName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerAppId)) {
    (*query)["ConsumerAppId"] = *request->consumerAppId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeout)) {
    (*query)["Timeout"] = *request->timeout;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    (*query)["Namespace_"] = *request->namespace_;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    (*query)["Source"] = *request->source;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return AddServiceTimeConfigResponse(doROARequest(make_shared<string>("AddServiceTimeConfig"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/sp/api/timeout/add")), make_shared<string>("json"), req, runtime));
}

AuthorizeApplicationResponse Alibabacloud_Edas20170801::Client::authorizeApplication(shared_ptr<AuthorizeApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return authorizeApplicationWithOptions(request, headers, runtime);
}

AuthorizeApplicationResponse Alibabacloud_Edas20170801::Client::authorizeApplicationWithOptions(shared_ptr<AuthorizeApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->targetUserId)) {
    (*query)["TargetUserId"] = *request->targetUserId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appIds)) {
    (*query)["AppIds"] = *request->appIds;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return AuthorizeApplicationResponse(doROARequest(make_shared<string>("AuthorizeApplication"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/account/authorize_app")), make_shared<string>("json"), req, runtime));
}

AuthorizeResourceGroupResponse Alibabacloud_Edas20170801::Client::authorizeResourceGroup(shared_ptr<AuthorizeResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return authorizeResourceGroupWithOptions(request, headers, runtime);
}

AuthorizeResourceGroupResponse Alibabacloud_Edas20170801::Client::authorizeResourceGroupWithOptions(shared_ptr<AuthorizeResourceGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->targetUserId)) {
    (*query)["TargetUserId"] = *request->targetUserId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupIds)) {
    (*query)["ResourceGroupIds"] = *request->resourceGroupIds;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return AuthorizeResourceGroupResponse(doROARequest(make_shared<string>("AuthorizeResourceGroup"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/account/authorize_res_group")), make_shared<string>("json"), req, runtime));
}

AuthorizeRoleResponse Alibabacloud_Edas20170801::Client::authorizeRole(shared_ptr<AuthorizeRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return authorizeRoleWithOptions(request, headers, runtime);
}

AuthorizeRoleResponse Alibabacloud_Edas20170801::Client::authorizeRoleWithOptions(shared_ptr<AuthorizeRoleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->targetUserId)) {
    (*query)["TargetUserId"] = *request->targetUserId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleIds)) {
    (*query)["RoleIds"] = *request->roleIds;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return AuthorizeRoleResponse(doROARequest(make_shared<string>("AuthorizeRole"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/account/authorize_role")), make_shared<string>("json"), req, runtime));
}

BindEcsSlbResponse Alibabacloud_Edas20170801::Client::bindEcsSlb(shared_ptr<BindEcsSlbRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return bindEcsSlbWithOptions(request, headers, runtime);
}

BindEcsSlbResponse Alibabacloud_Edas20170801::Client::bindEcsSlbWithOptions(shared_ptr<BindEcsSlbRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slbId)) {
    (*query)["SlbId"] = *request->slbId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    (*query)["ListenerPort"] = *request->listenerPort;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VServerGroupId)) {
    (*query)["VServerGroupId"] = *request->VServerGroupId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerProtocol)) {
    (*query)["ListenerProtocol"] = *request->listenerProtocol;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deployGroupId)) {
    (*query)["DeployGroupId"] = *request->deployGroupId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VServerGroupName)) {
    (*query)["VServerGroupName"] = *request->VServerGroupName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerHealthCheckUrl)) {
    (*query)["ListenerHealthCheckUrl"] = *request->listenerHealthCheckUrl;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VForwardingUrlRule)) {
    (*query)["VForwardingUrlRule"] = *request->VForwardingUrlRule;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return BindEcsSlbResponse(doROARequest(make_shared<string>("BindEcsSlb"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/app/slb/bind_slb")), make_shared<string>("json"), req, runtime));
}

BindK8sSlbResponse Alibabacloud_Edas20170801::Client::bindK8sSlb(shared_ptr<BindK8sSlbRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return bindK8sSlbWithOptions(request, headers, runtime);
}

BindK8sSlbResponse Alibabacloud_Edas20170801::Client::bindK8sSlbWithOptions(shared_ptr<BindK8sSlbRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    (*query)["ClusterId"] = *request->clusterId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    (*query)["Type"] = *request->type;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slbId)) {
    (*query)["SlbId"] = *request->slbId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slbProtocol)) {
    (*query)["SlbProtocol"] = *request->slbProtocol;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetPort)) {
    (*query)["TargetPort"] = *request->targetPort;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->port)) {
    (*query)["Port"] = *request->port;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->servicePortInfos)) {
    (*query)["ServicePortInfos"] = *request->servicePortInfos;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specification)) {
    (*query)["Specification"] = *request->specification;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduler)) {
    (*query)["Scheduler"] = *request->scheduler;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return BindK8sSlbResponse(doROARequest(make_shared<string>("BindK8sSlb"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/k8s/acs/k8s_slb_binding")), make_shared<string>("json"), req, runtime));
}

BindSlbResponse Alibabacloud_Edas20170801::Client::bindSlb(shared_ptr<BindSlbRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return bindSlbWithOptions(request, headers, runtime);
}

BindSlbResponse Alibabacloud_Edas20170801::Client::bindSlbWithOptions(shared_ptr<BindSlbRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slbId)) {
    (*query)["SlbId"] = *request->slbId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slbIp)) {
    (*query)["SlbIp"] = *request->slbIp;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    (*query)["Type"] = *request->type;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    (*query)["ListenerPort"] = *request->listenerPort;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VServerGroupId)) {
    (*query)["VServerGroupId"] = *request->VServerGroupId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return BindSlbResponse(doROARequest(make_shared<string>("BindSlb"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/app/bind_slb_json")), make_shared<string>("json"), req, runtime));
}

ChangeDeployGroupResponse Alibabacloud_Edas20170801::Client::changeDeployGroup(shared_ptr<ChangeDeployGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return changeDeployGroupWithOptions(request, headers, runtime);
}

ChangeDeployGroupResponse Alibabacloud_Edas20170801::Client::changeDeployGroupWithOptions(shared_ptr<ChangeDeployGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eccInfo)) {
    (*query)["EccInfo"] = *request->eccInfo;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    (*query)["GroupName"] = *request->groupName;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->forceStatus)) {
    (*query)["ForceStatus"] = *request->forceStatus;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ChangeDeployGroupResponse(doROARequest(make_shared<string>("ChangeDeployGroup"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/changeorder/co_change_group")), make_shared<string>("json"), req, runtime));
}

ContinuePipelineResponse Alibabacloud_Edas20170801::Client::continuePipeline(shared_ptr<ContinuePipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return continuePipelineWithOptions(request, headers, runtime);
}

ContinuePipelineResponse Alibabacloud_Edas20170801::Client::continuePipelineWithOptions(shared_ptr<ContinuePipelineRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineId)) {
    (*query)["PipelineId"] = *request->pipelineId;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->confirm)) {
    (*query)["Confirm"] = *request->confirm;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ContinuePipelineResponse(doROARequest(make_shared<string>("ContinuePipeline"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/changeorder/pipeline_batch_confirm")), make_shared<string>("json"), req, runtime));
}

ConvertK8sResourceResponse Alibabacloud_Edas20170801::Client::convertK8sResource(shared_ptr<ConvertK8sResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return convertK8sResourceWithOptions(request, headers, runtime);
}

ConvertK8sResourceResponse Alibabacloud_Edas20170801::Client::convertK8sResourceWithOptions(shared_ptr<ConvertK8sResourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    (*query)["ResourceType"] = *request->resourceType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceName)) {
    (*query)["ResourceName"] = *request->resourceName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    (*query)["Namespace_"] = *request->namespace_;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    (*query)["ClusterId"] = *request->clusterId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ConvertK8sResourceResponse(doROARequest(make_shared<string>("ConvertK8sResource"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/oam/k8s_resource_convert")), make_shared<string>("json"), req, runtime));
}

CreateIDCImportCommandResponse Alibabacloud_Edas20170801::Client::createIDCImportCommand(shared_ptr<CreateIDCImportCommandRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createIDCImportCommandWithOptions(request, headers, runtime);
}

CreateIDCImportCommandResponse Alibabacloud_Edas20170801::Client::createIDCImportCommandWithOptions(shared_ptr<CreateIDCImportCommandRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    (*body)["ClusterId"] = *request->clusterId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateIDCImportCommandResponse(doROARequestWithForm(make_shared<string>("CreateIDCImportCommand"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/create_idc_import_command")), make_shared<string>("json"), req, runtime));
}

CreateK8sIngressRuleResponse Alibabacloud_Edas20170801::Client::createK8sIngressRule(shared_ptr<CreateK8sIngressRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createK8sIngressRuleWithOptions(request, headers, runtime);
}

CreateK8sIngressRuleResponse Alibabacloud_Edas20170801::Client::createK8sIngressRuleWithOptions(shared_ptr<CreateK8sIngressRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    (*query)["ClusterId"] = *request->clusterId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    (*query)["Namespace_"] = *request->namespace_;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*query)["Name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rules)) {
    (*query)["Rules"] = *request->rules;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return CreateK8sIngressRuleResponse(doROARequest(make_shared<string>("CreateK8sIngressRule"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/k8s/acs/k8s_ingress")), make_shared<string>("json"), req, runtime));
}

CreateK8sServiceResponse Alibabacloud_Edas20170801::Client::createK8sService(shared_ptr<CreateK8sServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createK8sServiceWithOptions(request, headers, runtime);
}

CreateK8sServiceResponse Alibabacloud_Edas20170801::Client::createK8sServiceWithOptions(shared_ptr<CreateK8sServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*query)["Name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    (*query)["Type"] = *request->type;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->servicePorts)) {
    (*query)["ServicePorts"] = *request->servicePorts;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return CreateK8sServiceResponse(doROARequest(make_shared<string>("CreateK8sService"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/k8s/acs/k8s_service")), make_shared<string>("json"), req, runtime));
}

DelegateAdminRoleResponse Alibabacloud_Edas20170801::Client::delegateAdminRole(shared_ptr<DelegateAdminRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return delegateAdminRoleWithOptions(request, headers, runtime);
}

DelegateAdminRoleResponse Alibabacloud_Edas20170801::Client::delegateAdminRoleWithOptions(shared_ptr<DelegateAdminRoleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->targetUserId)) {
    (*query)["TargetUserId"] = *request->targetUserId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DelegateAdminRoleResponse(doROARequest(make_shared<string>("DelegateAdminRole"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/account/delegate_admin_role")), make_shared<string>("json"), req, runtime));
}

DeleteApplicationResponse Alibabacloud_Edas20170801::Client::deleteApplication(shared_ptr<DeleteApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteApplicationWithOptions(request, headers, runtime);
}

DeleteApplicationResponse Alibabacloud_Edas20170801::Client::deleteApplicationWithOptions(shared_ptr<DeleteApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteApplicationResponse(doROARequest(make_shared<string>("DeleteApplication"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/changeorder/co_delete_app")), make_shared<string>("json"), req, runtime));
}

DeleteClusterResponse Alibabacloud_Edas20170801::Client::deleteCluster(shared_ptr<DeleteClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteClusterWithOptions(request, headers, runtime);
}

DeleteClusterResponse Alibabacloud_Edas20170801::Client::deleteClusterWithOptions(shared_ptr<DeleteClusterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    (*query)["ClusterId"] = *request->clusterId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mode)) {
    (*query)["Mode"] = *request->mode;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteClusterResponse(doROARequest(make_shared<string>("DeleteCluster"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/resource/cluster")), make_shared<string>("json"), req, runtime));
}

DeleteClusterMemberResponse Alibabacloud_Edas20170801::Client::deleteClusterMember(shared_ptr<DeleteClusterMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteClusterMemberWithOptions(request, headers, runtime);
}

DeleteClusterMemberResponse Alibabacloud_Edas20170801::Client::deleteClusterMemberWithOptions(shared_ptr<DeleteClusterMemberRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    (*query)["ClusterId"] = *request->clusterId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterMemberId)) {
    (*query)["ClusterMemberId"] = *request->clusterMemberId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteClusterMemberResponse(doROARequest(make_shared<string>("DeleteClusterMember"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/resource/cluster_member")), make_shared<string>("json"), req, runtime));
}

DeleteConfigCenterResponse Alibabacloud_Edas20170801::Client::deleteConfigCenter(shared_ptr<DeleteConfigCenterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteConfigCenterWithOptions(request, headers, runtime);
}

DeleteConfigCenterResponse Alibabacloud_Edas20170801::Client::deleteConfigCenterWithOptions(shared_ptr<DeleteConfigCenterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataId)) {
    (*query)["DataId"] = *request->dataId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->group)) {
    (*query)["Group"] = *request->group;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalRegionId)) {
    (*query)["LogicalRegionId"] = *request->logicalRegionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteConfigCenterResponse(doROARequest(make_shared<string>("DeleteConfigCenter"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/configCenter")), make_shared<string>("json"), req, runtime));
}

DeleteDegradeControlResponse Alibabacloud_Edas20170801::Client::deleteDegradeControl(shared_ptr<DeleteDegradeControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteDegradeControlWithOptions(request, headers, runtime);
}

DeleteDegradeControlResponse Alibabacloud_Edas20170801::Client::deleteDegradeControlWithOptions(shared_ptr<DeleteDegradeControlRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    (*query)["RuleId"] = *request->ruleId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteDegradeControlResponse(doROARequest(make_shared<string>("DeleteDegradeControl"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/degradeControl")), make_shared<string>("json"), req, runtime));
}

DeleteDeployGroupResponse Alibabacloud_Edas20170801::Client::deleteDeployGroup(shared_ptr<DeleteDeployGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteDeployGroupWithOptions(request, headers, runtime);
}

DeleteDeployGroupResponse Alibabacloud_Edas20170801::Client::deleteDeployGroupWithOptions(shared_ptr<DeleteDeployGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    (*query)["GroupName"] = *request->groupName;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteDeployGroupResponse(doROARequest(make_shared<string>("DeleteDeployGroup"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/deploy_group")), make_shared<string>("json"), req, runtime));
}

DeleteEcuResponse Alibabacloud_Edas20170801::Client::deleteEcu(shared_ptr<DeleteEcuRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteEcuWithOptions(request, headers, runtime);
}

DeleteEcuResponse Alibabacloud_Edas20170801::Client::deleteEcuWithOptions(shared_ptr<DeleteEcuRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ecuId)) {
    (*query)["EcuId"] = *request->ecuId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteEcuResponse(doROARequest(make_shared<string>("DeleteEcu"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/resource/delete_ecu")), make_shared<string>("json"), req, runtime));
}

DeleteFlowControlResponse Alibabacloud_Edas20170801::Client::deleteFlowControl(shared_ptr<DeleteFlowControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteFlowControlWithOptions(request, headers, runtime);
}

DeleteFlowControlResponse Alibabacloud_Edas20170801::Client::deleteFlowControlWithOptions(shared_ptr<DeleteFlowControlRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    (*query)["RuleId"] = *request->ruleId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteFlowControlResponse(doROARequest(make_shared<string>("DeleteFlowControl"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/flowControl")), make_shared<string>("json"), req, runtime));
}

DeleteK8sApplicationResponse Alibabacloud_Edas20170801::Client::deleteK8sApplication(shared_ptr<DeleteK8sApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteK8sApplicationWithOptions(request, headers, runtime);
}

DeleteK8sApplicationResponse Alibabacloud_Edas20170801::Client::deleteK8sApplicationWithOptions(shared_ptr<DeleteK8sApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteK8sApplicationResponse(doROARequest(make_shared<string>("DeleteK8sApplication"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/k8s/acs/k8s_apps")), make_shared<string>("json"), req, runtime));
}

DeleteK8sIngressRuleResponse Alibabacloud_Edas20170801::Client::deleteK8sIngressRule(shared_ptr<DeleteK8sIngressRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteK8sIngressRuleWithOptions(request, headers, runtime);
}

DeleteK8sIngressRuleResponse Alibabacloud_Edas20170801::Client::deleteK8sIngressRuleWithOptions(shared_ptr<DeleteK8sIngressRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    (*query)["ClusterId"] = *request->clusterId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    (*query)["Namespace_"] = *request->namespace_;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*query)["Name"] = *request->name;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteK8sIngressRuleResponse(doROARequest(make_shared<string>("DeleteK8sIngressRule"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/k8s/acs/k8s_ingress")), make_shared<string>("json"), req, runtime));
}

DeleteK8sServiceResponse Alibabacloud_Edas20170801::Client::deleteK8sService(shared_ptr<DeleteK8sServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteK8sServiceWithOptions(request, headers, runtime);
}

DeleteK8sServiceResponse Alibabacloud_Edas20170801::Client::deleteK8sServiceWithOptions(shared_ptr<DeleteK8sServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*query)["Name"] = *request->name;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteK8sServiceResponse(doROARequest(make_shared<string>("DeleteK8sService"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/k8s/acs/k8s_service")), make_shared<string>("json"), req, runtime));
}

DeleteLogPathResponse Alibabacloud_Edas20170801::Client::deleteLogPath(shared_ptr<DeleteLogPathRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteLogPathWithOptions(request, headers, runtime);
}

DeleteLogPathResponse Alibabacloud_Edas20170801::Client::deleteLogPathWithOptions(shared_ptr<DeleteLogPathRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    (*query)["Path"] = *request->path;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteLogPathResponse(doROARequest(make_shared<string>("DeleteLogPath"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/log/popListLogDirs")), make_shared<string>("json"), req, runtime));
}

DeleteRoleResponse Alibabacloud_Edas20170801::Client::deleteRole(shared_ptr<DeleteRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteRoleWithOptions(request, headers, runtime);
}

DeleteRoleResponse Alibabacloud_Edas20170801::Client::deleteRoleWithOptions(shared_ptr<DeleteRoleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->roleId)) {
    (*query)["RoleId"] = *request->roleId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteRoleResponse(doROARequest(make_shared<string>("DeleteRole"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/account/delete_role")), make_shared<string>("json"), req, runtime));
}

DeleteServiceGroupResponse Alibabacloud_Edas20170801::Client::deleteServiceGroup(shared_ptr<DeleteServiceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteServiceGroupWithOptions(request, headers, runtime);
}

DeleteServiceGroupResponse Alibabacloud_Edas20170801::Client::deleteServiceGroupWithOptions(shared_ptr<DeleteServiceGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    (*query)["GroupId"] = *request->groupId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteServiceGroupResponse(doROARequest(make_shared<string>("DeleteServiceGroup"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/service/serviceGroups")), make_shared<string>("json"), req, runtime));
}

DeleteServiceTimeConfigResponse Alibabacloud_Edas20170801::Client::deleteServiceTimeConfig(shared_ptr<DeleteServiceTimeConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteServiceTimeConfigWithOptions(request, headers, runtime);
}

DeleteServiceTimeConfigResponse Alibabacloud_Edas20170801::Client::deleteServiceTimeConfigWithOptions(shared_ptr<DeleteServiceTimeConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    (*query)["Id"] = *request->id;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteServiceTimeConfigResponse(doROARequest(make_shared<string>("DeleteServiceTimeConfig"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/sp/api/timeout/remove")), make_shared<string>("json"), req, runtime));
}

DeleteSwimmingLaneResponse Alibabacloud_Edas20170801::Client::deleteSwimmingLane(shared_ptr<DeleteSwimmingLaneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteSwimmingLaneWithOptions(request, headers, runtime);
}

DeleteSwimmingLaneResponse Alibabacloud_Edas20170801::Client::deleteSwimmingLaneWithOptions(shared_ptr<DeleteSwimmingLaneRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->laneId)) {
    (*query)["LaneId"] = *request->laneId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteSwimmingLaneResponse(doROARequest(make_shared<string>("DeleteSwimmingLane"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/trafficmgnt/swimming_lanes")), make_shared<string>("json"), req, runtime));
}

DeleteSwimmingLaneGroupResponse Alibabacloud_Edas20170801::Client::deleteSwimmingLaneGroup(shared_ptr<DeleteSwimmingLaneGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteSwimmingLaneGroupWithOptions(request, headers, runtime);
}

DeleteSwimmingLaneGroupResponse Alibabacloud_Edas20170801::Client::deleteSwimmingLaneGroupWithOptions(shared_ptr<DeleteSwimmingLaneGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->groupId)) {
    (*query)["GroupId"] = *request->groupId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteSwimmingLaneGroupResponse(doROARequest(make_shared<string>("DeleteSwimmingLaneGroup"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/trafficmgnt/swimming_lane_groups")), make_shared<string>("json"), req, runtime));
}

DeleteUserDefineRegionResponse Alibabacloud_Edas20170801::Client::deleteUserDefineRegion(shared_ptr<DeleteUserDefineRegionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteUserDefineRegionWithOptions(request, headers, runtime);
}

DeleteUserDefineRegionResponse Alibabacloud_Edas20170801::Client::deleteUserDefineRegionWithOptions(shared_ptr<DeleteUserDefineRegionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    (*query)["Id"] = *request->id;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionTag)) {
    (*query)["RegionTag"] = *request->regionTag;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteUserDefineRegionResponse(doROARequest(make_shared<string>("DeleteUserDefineRegion"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/user_region_def")), make_shared<string>("json"), req, runtime));
}

DeployApplicationResponse Alibabacloud_Edas20170801::Client::deployApplication(shared_ptr<DeployApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deployApplicationWithOptions(request, headers, runtime);
}

DeployApplicationResponse Alibabacloud_Edas20170801::Client::deployApplicationWithOptions(shared_ptr<DeployApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageVersion)) {
    (*query)["PackageVersion"] = *request->packageVersion;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desc)) {
    (*query)["Desc"] = *request->desc;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deployType)) {
    (*query)["DeployType"] = *request->deployType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->warUrl)) {
    (*query)["WarUrl"] = *request->warUrl;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUrl)) {
    (*query)["ImageUrl"] = *request->imageUrl;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    (*query)["GroupId"] = *request->groupId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->batch)) {
    (*query)["Batch"] = *request->batch;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->batchWaitTime)) {
    (*query)["BatchWaitTime"] = *request->batchWaitTime;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appEnv)) {
    (*query)["AppEnv"] = *request->appEnv;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->buildPackId)) {
    (*query)["BuildPackId"] = *request->buildPackId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->componentIds)) {
    (*query)["ComponentIds"] = *request->componentIds;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->releaseType)) {
    (*query)["ReleaseType"] = *request->releaseType;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->gray)) {
    (*query)["Gray"] = *request->gray;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trafficControlStrategy)) {
    (*query)["TrafficControlStrategy"] = *request->trafficControlStrategy;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeployApplicationResponse(doROARequest(make_shared<string>("DeployApplication"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/changeorder/co_deploy")), make_shared<string>("json"), req, runtime));
}

DeployK8sApplicationResponse Alibabacloud_Edas20170801::Client::deployK8sApplication(shared_ptr<DeployK8sApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deployK8sApplicationWithOptions(request, headers, runtime);
}

DeployK8sApplicationResponse Alibabacloud_Edas20170801::Client::deployK8sApplicationWithOptions(shared_ptr<DeployK8sApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->preStop)) {
    (*query)["PreStop"] = *request->preStop;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envs)) {
    (*query)["Envs"] = *request->envs;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageTag)) {
    (*query)["ImageTag"] = *request->imageTag;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->batchWaitTime)) {
    (*query)["BatchWaitTime"] = *request->batchWaitTime;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->command)) {
    (*query)["Command"] = *request->command;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->postStart)) {
    (*query)["PostStart"] = *request->postStart;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->readiness)) {
    (*query)["Readiness"] = *request->readiness;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->liveness)) {
    (*query)["Liveness"] = *request->liveness;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->args)) {
    (*query)["Args"] = *request->args;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->replicas)) {
    (*query)["Replicas"] = *request->replicas;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->image)) {
    (*query)["Image"] = *request->image;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cpuLimit)) {
    (*query)["CpuLimit"] = *request->cpuLimit;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->memoryLimit)) {
    (*query)["MemoryLimit"] = *request->memoryLimit;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cpuRequest)) {
    (*query)["CpuRequest"] = *request->cpuRequest;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->memoryRequest)) {
    (*query)["MemoryRequest"] = *request->memoryRequest;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nasId)) {
    (*query)["NasId"] = *request->nasId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mountDescs)) {
    (*query)["MountDescs"] = *request->mountDescs;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageType)) {
    (*query)["StorageType"] = *request->storageType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->localVolume)) {
    (*query)["LocalVolume"] = *request->localVolume;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageUrl)) {
    (*query)["PackageUrl"] = *request->packageUrl;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageVersion)) {
    (*query)["PackageVersion"] = *request->packageVersion;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->JDK)) {
    (*query)["JDK"] = *request->JDK;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->webContainer)) {
    (*query)["WebContainer"] = *request->webContainer;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->edasContainerVersion)) {
    (*query)["EdasContainerVersion"] = *request->edasContainerVersion;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uriEncoding)) {
    (*query)["UriEncoding"] = *request->uriEncoding;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useBodyEncoding)) {
    (*query)["UseBodyEncoding"] = *request->useBodyEncoding;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateStrategy)) {
    (*query)["UpdateStrategy"] = *request->updateStrategy;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mcpuRequest)) {
    (*query)["McpuRequest"] = *request->mcpuRequest;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mcpuLimit)) {
    (*query)["McpuLimit"] = *request->mcpuLimit;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->volumesStr)) {
    (*query)["VolumesStr"] = *request->volumesStr;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageVersionId)) {
    (*query)["PackageVersionId"] = *request->packageVersionId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeOrderDesc)) {
    (*query)["ChangeOrderDesc"] = *request->changeOrderDesc;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runtimeClassName)) {
    (*query)["RuntimeClassName"] = *request->runtimeClassName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deployAcrossZones)) {
    (*query)["DeployAcrossZones"] = *request->deployAcrossZones;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->batchTimeout)) {
    (*query)["BatchTimeout"] = *request->batchTimeout;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableAhas)) {
    (*query)["EnableAhas"] = *request->enableAhas;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->webContainerConfig)) {
    (*query)["WebContainerConfig"] = *request->webContainerConfig;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->javaStartUpConfig)) {
    (*query)["JavaStartUpConfig"] = *request->javaStartUpConfig;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slsConfigs)) {
    (*query)["SlsConfigs"] = *request->slsConfigs;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deployAcrossNodes)) {
    (*query)["DeployAcrossNodes"] = *request->deployAcrossNodes;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trafficControlStrategy)) {
    (*query)["TrafficControlStrategy"] = *request->trafficControlStrategy;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeployK8sApplicationResponse(doROARequest(make_shared<string>("DeployK8sApplication"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/k8s/acs/k8s_apps")), make_shared<string>("json"), req, runtime));
}

DisableDegradeControlResponse Alibabacloud_Edas20170801::Client::disableDegradeControl(shared_ptr<DisableDegradeControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return disableDegradeControlWithOptions(request, headers, runtime);
}

DisableDegradeControlResponse Alibabacloud_Edas20170801::Client::disableDegradeControlWithOptions(shared_ptr<DisableDegradeControlRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    (*query)["RuleId"] = *request->ruleId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DisableDegradeControlResponse(doROARequest(make_shared<string>("DisableDegradeControl"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/degradecontrol/disable")), make_shared<string>("json"), req, runtime));
}

DisableFlowControlResponse Alibabacloud_Edas20170801::Client::disableFlowControl(shared_ptr<DisableFlowControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return disableFlowControlWithOptions(request, headers, runtime);
}

DisableFlowControlResponse Alibabacloud_Edas20170801::Client::disableFlowControlWithOptions(shared_ptr<DisableFlowControlRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    (*query)["RuleId"] = *request->ruleId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DisableFlowControlResponse(doROARequest(make_shared<string>("DisableFlowControl"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/flowcontrol/disable")), make_shared<string>("json"), req, runtime));
}

DisableMockRuleResponse Alibabacloud_Edas20170801::Client::disableMockRule(shared_ptr<DisableMockRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return disableMockRuleWithOptions(request, headers, runtime);
}

DisableMockRuleResponse Alibabacloud_Edas20170801::Client::disableMockRuleWithOptions(shared_ptr<DisableMockRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    (*query)["Id"] = *request->id;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DisableMockRuleResponse(doROARequest(make_shared<string>("DisableMockRule"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/sp/api/mock/disableMockRule")), make_shared<string>("json"), req, runtime));
}

EnableDegradeControlResponse Alibabacloud_Edas20170801::Client::enableDegradeControl(shared_ptr<EnableDegradeControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return enableDegradeControlWithOptions(request, headers, runtime);
}

EnableDegradeControlResponse Alibabacloud_Edas20170801::Client::enableDegradeControlWithOptions(shared_ptr<EnableDegradeControlRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    (*query)["RuleId"] = *request->ruleId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return EnableDegradeControlResponse(doROARequest(make_shared<string>("EnableDegradeControl"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/degradecontrol/enable")), make_shared<string>("json"), req, runtime));
}

EnableFlowControlResponse Alibabacloud_Edas20170801::Client::enableFlowControl(shared_ptr<EnableFlowControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return enableFlowControlWithOptions(request, headers, runtime);
}

EnableFlowControlResponse Alibabacloud_Edas20170801::Client::enableFlowControlWithOptions(shared_ptr<EnableFlowControlRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    (*query)["RuleId"] = *request->ruleId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return EnableFlowControlResponse(doROARequest(make_shared<string>("EnableFlowControl"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/flowcontrol/enable")), make_shared<string>("json"), req, runtime));
}

EnableMockRuleResponse Alibabacloud_Edas20170801::Client::enableMockRule(shared_ptr<EnableMockRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return enableMockRuleWithOptions(request, headers, runtime);
}

EnableMockRuleResponse Alibabacloud_Edas20170801::Client::enableMockRuleWithOptions(shared_ptr<EnableMockRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    (*query)["Id"] = *request->id;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return EnableMockRuleResponse(doROARequest(make_shared<string>("EnableMockRule"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/sp/api/mock/enableMockRule")), make_shared<string>("json"), req, runtime));
}

ExecuteStatusResponse Alibabacloud_Edas20170801::Client::executeStatus(shared_ptr<ExecuteStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return executeStatusWithOptions(request, headers, runtime);
}

ExecuteStatusResponse Alibabacloud_Edas20170801::Client::executeStatusWithOptions(shared_ptr<ExecuteStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    (*query)["Region"] = *request->region;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    (*query)["NamespaceId"] = *request->namespaceId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    (*query)["TenantId"] = *request->tenantId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    (*query)["Source"] = *request->source;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    (*query)["AccountId"] = *request->accountId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    (*query)["Ip"] = *request->ip;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->podName)) {
    (*query)["PodName"] = *request->podName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    (*query)["Status"] = *request->status;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ExecuteStatusResponse(doROARequest(make_shared<string>("ExecuteStatus"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/sp/api/mse/status/execute")), make_shared<string>("json"), req, runtime));
}

GetAccountMockRuleResponse Alibabacloud_Edas20170801::Client::getAccountMockRule(shared_ptr<GetAccountMockRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAccountMockRuleWithOptions(request, headers, runtime);
}

GetAccountMockRuleResponse Alibabacloud_Edas20170801::Client::getAccountMockRuleWithOptions(shared_ptr<GetAccountMockRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    (*query)["Region"] = *request->region;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    (*query)["PageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*query)["Name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerAppName)) {
    (*query)["ConsumerAppName"] = *request->consumerAppName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->providerAppName)) {
    (*query)["ProviderAppName"] = *request->providerAppName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    (*query)["Namespace_"] = *request->namespace_;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetAccountMockRuleResponse(doROARequest(make_shared<string>("GetAccountMockRule"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/sp/api/mock/getAccountMockRule")), make_shared<string>("json"), req, runtime));
}

GetApplicationResponse Alibabacloud_Edas20170801::Client::getApplication(shared_ptr<GetApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getApplicationWithOptions(request, headers, runtime);
}

GetApplicationResponse Alibabacloud_Edas20170801::Client::getApplicationWithOptions(shared_ptr<GetApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetApplicationResponse(doROARequest(make_shared<string>("GetApplication"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/app/app_info")), make_shared<string>("json"), req, runtime));
}

GetChangeOrderInfoResponse Alibabacloud_Edas20170801::Client::getChangeOrderInfo(shared_ptr<GetChangeOrderInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getChangeOrderInfoWithOptions(request, headers, runtime);
}

GetChangeOrderInfoResponse Alibabacloud_Edas20170801::Client::getChangeOrderInfoWithOptions(shared_ptr<GetChangeOrderInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->changeOrderId)) {
    (*query)["ChangeOrderId"] = *request->changeOrderId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetChangeOrderInfoResponse(doROARequest(make_shared<string>("GetChangeOrderInfo"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/changeorder/change_order_info")), make_shared<string>("json"), req, runtime));
}

GetClusterResponse Alibabacloud_Edas20170801::Client::getCluster(shared_ptr<GetClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getClusterWithOptions(request, headers, runtime);
}

GetClusterResponse Alibabacloud_Edas20170801::Client::getClusterWithOptions(shared_ptr<GetClusterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    (*query)["ClusterId"] = *request->clusterId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetClusterResponse(doROARequest(make_shared<string>("GetCluster"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/resource/cluster")), make_shared<string>("json"), req, runtime));
}

GetContainerConfigurationResponse Alibabacloud_Edas20170801::Client::getContainerConfiguration(shared_ptr<GetContainerConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getContainerConfigurationWithOptions(request, headers, runtime);
}

GetContainerConfigurationResponse Alibabacloud_Edas20170801::Client::getContainerConfigurationWithOptions(shared_ptr<GetContainerConfigurationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    (*query)["GroupId"] = *request->groupId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetContainerConfigurationResponse(doROARequest(make_shared<string>("GetContainerConfiguration"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/app/container_config")), make_shared<string>("json"), req, runtime));
}

GetJvmConfigurationResponse Alibabacloud_Edas20170801::Client::getJvmConfiguration(shared_ptr<GetJvmConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getJvmConfigurationWithOptions(request, headers, runtime);
}

GetJvmConfigurationResponse Alibabacloud_Edas20170801::Client::getJvmConfigurationWithOptions(shared_ptr<GetJvmConfigurationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    (*query)["GroupId"] = *request->groupId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetJvmConfigurationResponse(doROARequest(make_shared<string>("GetJvmConfiguration"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/app/app_jvm_config")), make_shared<string>("json"), req, runtime));
}

GetK8sApplicationResponse Alibabacloud_Edas20170801::Client::getK8sApplication(shared_ptr<GetK8sApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getK8sApplicationWithOptions(request, headers, runtime);
}

GetK8sApplicationResponse Alibabacloud_Edas20170801::Client::getK8sApplicationWithOptions(shared_ptr<GetK8sApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->from)) {
    (*query)["From"] = *request->from;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetK8sApplicationResponse(doROARequest(make_shared<string>("GetK8sApplication"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/changeorder/co_application")), make_shared<string>("json"), req, runtime));
}

GetK8sClusterResponse Alibabacloud_Edas20170801::Client::getK8sCluster(shared_ptr<GetK8sClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getK8sClusterWithOptions(request, headers, runtime);
}

GetK8sClusterResponse Alibabacloud_Edas20170801::Client::getK8sClusterWithOptions(shared_ptr<GetK8sClusterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionTag)) {
    (*query)["RegionTag"] = *request->regionTag;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    (*query)["CurrentPage"] = *request->currentPage;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->clusterType)) {
    (*query)["ClusterType"] = *request->clusterType;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetK8sClusterResponse(doROARequest(make_shared<string>("GetK8sCluster"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/k8s_clusters")), make_shared<string>("json"), req, runtime));
}

GetK8sServicesResponse Alibabacloud_Edas20170801::Client::getK8sServices(shared_ptr<GetK8sServicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getK8sServicesWithOptions(request, headers, runtime);
}

GetK8sServicesResponse Alibabacloud_Edas20170801::Client::getK8sServicesWithOptions(shared_ptr<GetK8sServicesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetK8sServicesResponse(doROARequest(make_shared<string>("GetK8sServices"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/k8s/acs/k8s_service")), make_shared<string>("json"), req, runtime));
}

GetMockRuleByConsumerAppIdResponse Alibabacloud_Edas20170801::Client::getMockRuleByConsumerAppId(shared_ptr<GetMockRuleByConsumerAppIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getMockRuleByConsumerAppIdWithOptions(request, headers, runtime);
}

GetMockRuleByConsumerAppIdResponse Alibabacloud_Edas20170801::Client::getMockRuleByConsumerAppIdWithOptions(shared_ptr<GetMockRuleByConsumerAppIdRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    (*query)["Region"] = *request->region;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerAppId)) {
    (*query)["ConsumerAppId"] = *request->consumerAppId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetMockRuleByConsumerAppIdResponse(doROARequest(make_shared<string>("GetMockRuleByConsumerAppId"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/sp/api/mock/getMockRuleByConsumerAppId")), make_shared<string>("json"), req, runtime));
}

GetMockRuleByIdResponse Alibabacloud_Edas20170801::Client::getMockRuleById(shared_ptr<GetMockRuleByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getMockRuleByIdWithOptions(request, headers, runtime);
}

GetMockRuleByIdResponse Alibabacloud_Edas20170801::Client::getMockRuleByIdWithOptions(shared_ptr<GetMockRuleByIdRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    (*query)["Id"] = *request->id;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetMockRuleByIdResponse(doROARequest(make_shared<string>("GetMockRuleById"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/sp/api/mock/getMockRuleById")), make_shared<string>("json"), req, runtime));
}

GetMockRuleByProviderAppIdResponse Alibabacloud_Edas20170801::Client::getMockRuleByProviderAppId(shared_ptr<GetMockRuleByProviderAppIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getMockRuleByProviderAppIdWithOptions(request, headers, runtime);
}

GetMockRuleByProviderAppIdResponse Alibabacloud_Edas20170801::Client::getMockRuleByProviderAppIdWithOptions(shared_ptr<GetMockRuleByProviderAppIdRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    (*query)["Region"] = *request->region;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->providerAppId)) {
    (*query)["ProviderAppId"] = *request->providerAppId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetMockRuleByProviderAppIdResponse(doROARequest(make_shared<string>("GetMockRuleByProviderAppId"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/sp/api/mock/getMockRuleByProviderAppId")), make_shared<string>("json"), req, runtime));
}

GetPackageStorageCredentialResponse Alibabacloud_Edas20170801::Client::getPackageStorageCredential() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getPackageStorageCredentialWithOptions(headers, runtime);
}

GetPackageStorageCredentialResponse Alibabacloud_Edas20170801::Client::getPackageStorageCredentialWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetPackageStorageCredentialResponse(doROARequest(make_shared<string>("GetPackageStorageCredential"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/package_storage_credential")), make_shared<string>("json"), req, runtime));
}

GetScalingRulesResponse Alibabacloud_Edas20170801::Client::getScalingRules(shared_ptr<GetScalingRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getScalingRulesWithOptions(request, headers, runtime);
}

GetScalingRulesResponse Alibabacloud_Edas20170801::Client::getScalingRulesWithOptions(shared_ptr<GetScalingRulesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    (*query)["GroupId"] = *request->groupId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mode)) {
    (*query)["Mode"] = *request->mode;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetScalingRulesResponse(doROARequest(make_shared<string>("GetScalingRules"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/app/scalingRules")), make_shared<string>("json"), req, runtime));
}

GetSecureTokenResponse Alibabacloud_Edas20170801::Client::getSecureToken(shared_ptr<GetSecureTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSecureTokenWithOptions(request, headers, runtime);
}

GetSecureTokenResponse Alibabacloud_Edas20170801::Client::getSecureTokenWithOptions(shared_ptr<GetSecureTokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    (*query)["NamespaceId"] = *request->namespaceId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetSecureTokenResponse(doROARequest(make_shared<string>("GetSecureToken"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/secure_token")), make_shared<string>("json"), req, runtime));
}

GetServiceConsumersPageResponse Alibabacloud_Edas20170801::Client::getServiceConsumersPage(shared_ptr<GetServiceConsumersPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getServiceConsumersPageWithOptions(request, headers, runtime);
}

GetServiceConsumersPageResponse Alibabacloud_Edas20170801::Client::getServiceConsumersPageWithOptions(shared_ptr<GetServiceConsumersPageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    (*query)["region"] = *request->region;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    (*query)["namespace_"] = *request->namespace_;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->origin)) {
    (*query)["origin"] = *request->origin;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    (*query)["serviceType"] = *request->serviceType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["appId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    (*query)["source"] = *request->source;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    (*query)["serviceId"] = *request->serviceId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    (*query)["serviceName"] = *request->serviceName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceVersion)) {
    (*query)["serviceVersion"] = *request->serviceVersion;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->group)) {
    (*query)["group"] = *request->group;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    (*query)["ip"] = *request->ip;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registryType)) {
    (*query)["registryType"] = *request->registryType;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    (*query)["size"] = *request->size;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetServiceConsumersPageResponse(doROARequest(make_shared<string>("GetServiceConsumersPage"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/sp/api/mseForOam/getServiceConsumersPage")), make_shared<string>("json"), req, runtime));
}

GetServiceDetailResponse Alibabacloud_Edas20170801::Client::getServiceDetail(shared_ptr<GetServiceDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getServiceDetailWithOptions(request, headers, runtime);
}

GetServiceDetailResponse Alibabacloud_Edas20170801::Client::getServiceDetailWithOptions(shared_ptr<GetServiceDetailRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    (*query)["region"] = *request->region;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    (*query)["namespace_"] = *request->namespace_;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->origin)) {
    (*query)["origin"] = *request->origin;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    (*query)["serviceType"] = *request->serviceType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["appId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    (*query)["source"] = *request->source;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    (*query)["serviceId"] = *request->serviceId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    (*query)["serviceName"] = *request->serviceName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceVersion)) {
    (*query)["serviceVersion"] = *request->serviceVersion;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->group)) {
    (*query)["group"] = *request->group;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    (*query)["ip"] = *request->ip;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registryType)) {
    (*query)["registryType"] = *request->registryType;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetServiceDetailResponse(doROARequest(make_shared<string>("GetServiceDetail"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/sp/api/mseForOam/getServiceDetail")), make_shared<string>("json"), req, runtime));
}

GetServiceListResponse Alibabacloud_Edas20170801::Client::getServiceList(shared_ptr<GetServiceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getServiceListWithOptions(request, headers, runtime);
}

GetServiceListResponse Alibabacloud_Edas20170801::Client::getServiceListWithOptions(shared_ptr<GetServiceListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    (*query)["region"] = *request->region;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    (*query)["namespace_"] = *request->namespace_;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->origin)) {
    (*query)["origin"] = *request->origin;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    (*query)["serviceType"] = *request->serviceType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchType)) {
    (*query)["searchType"] = *request->searchType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchValue)) {
    (*query)["searchValue"] = *request->searchValue;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->side)) {
    (*query)["side"] = *request->side;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetServiceListResponse(doROARequest(make_shared<string>("GetServiceList"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/sp/api/mseForOam/getServiceList")), make_shared<string>("json"), req, runtime));
}

GetServiceListPageResponse Alibabacloud_Edas20170801::Client::getServiceListPage(shared_ptr<GetServiceListPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getServiceListPageWithOptions(request, headers, runtime);
}

GetServiceListPageResponse Alibabacloud_Edas20170801::Client::getServiceListPageWithOptions(shared_ptr<GetServiceListPageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    (*query)["region"] = *request->region;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    (*query)["namespace_"] = *request->namespace_;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->origin)) {
    (*query)["origin"] = *request->origin;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    (*query)["serviceType"] = *request->serviceType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchType)) {
    (*query)["searchType"] = *request->searchType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchValue)) {
    (*query)["searchValue"] = *request->searchValue;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->side)) {
    (*query)["side"] = *request->side;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    (*query)["size"] = *request->size;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetServiceListPageResponse(doROARequest(make_shared<string>("GetServiceListPage"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/sp/api/mseForOam/getServiceListPage")), make_shared<string>("json"), req, runtime));
}

GetServiceMethodPageResponse Alibabacloud_Edas20170801::Client::getServiceMethodPage(shared_ptr<GetServiceMethodPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getServiceMethodPageWithOptions(request, headers, runtime);
}

GetServiceMethodPageResponse Alibabacloud_Edas20170801::Client::getServiceMethodPageWithOptions(shared_ptr<GetServiceMethodPageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    (*query)["region"] = *request->region;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    (*query)["namespace_"] = *request->namespace_;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->origin)) {
    (*query)["origin"] = *request->origin;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    (*query)["serviceType"] = *request->serviceType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["appId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    (*query)["source"] = *request->source;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    (*query)["serviceId"] = *request->serviceId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    (*query)["serviceName"] = *request->serviceName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceVersion)) {
    (*query)["serviceVersion"] = *request->serviceVersion;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->group)) {
    (*query)["group"] = *request->group;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    (*query)["ip"] = *request->ip;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registryType)) {
    (*query)["registryType"] = *request->registryType;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*query)["pageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["pageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->methodController)) {
    (*query)["methodController"] = *request->methodController;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    (*query)["path"] = *request->path;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*query)["name"] = *request->name;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetServiceMethodPageResponse(doROARequest(make_shared<string>("GetServiceMethodPage"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/sp/api/mseForOam/getServiceMethodPage")), make_shared<string>("json"), req, runtime));
}

GetServiceProvidersPageResponse Alibabacloud_Edas20170801::Client::getServiceProvidersPage(shared_ptr<GetServiceProvidersPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getServiceProvidersPageWithOptions(request, headers, runtime);
}

GetServiceProvidersPageResponse Alibabacloud_Edas20170801::Client::getServiceProvidersPageWithOptions(shared_ptr<GetServiceProvidersPageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    (*query)["region"] = *request->region;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    (*query)["namespace_"] = *request->namespace_;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->origin)) {
    (*query)["origin"] = *request->origin;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    (*query)["serviceType"] = *request->serviceType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["appId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    (*query)["source"] = *request->source;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    (*query)["serviceId"] = *request->serviceId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    (*query)["serviceName"] = *request->serviceName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceVersion)) {
    (*query)["serviceVersion"] = *request->serviceVersion;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->group)) {
    (*query)["group"] = *request->group;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    (*query)["ip"] = *request->ip;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registryType)) {
    (*query)["registryType"] = *request->registryType;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    (*query)["size"] = *request->size;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetServiceProvidersPageResponse(doROARequest(make_shared<string>("GetServiceProvidersPage"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/sp/api/mseForOam/getServiceProvidersPage")), make_shared<string>("json"), req, runtime));
}

GetSubAccountInfoResponse Alibabacloud_Edas20170801::Client::getSubAccountInfo(shared_ptr<GetSubAccountInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSubAccountInfoWithOptions(request, headers, runtime);
}

GetSubAccountInfoResponse Alibabacloud_Edas20170801::Client::getSubAccountInfoWithOptions(shared_ptr<GetSubAccountInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->targetUserId)) {
    (*query)["TargetUserId"] = *request->targetUserId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetSubAccountInfoResponse(doROARequest(make_shared<string>("GetSubAccountInfo"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/account/sub_account_info")), make_shared<string>("json"), req, runtime));
}

GetSwimmingLaneResponse Alibabacloud_Edas20170801::Client::getSwimmingLane(shared_ptr<GetSwimmingLaneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSwimmingLaneWithOptions(request, headers, runtime);
}

GetSwimmingLaneResponse Alibabacloud_Edas20170801::Client::getSwimmingLaneWithOptions(shared_ptr<GetSwimmingLaneRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->laneId)) {
    (*query)["LaneId"] = *request->laneId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetSwimmingLaneResponse(doROARequest(make_shared<string>("GetSwimmingLane"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/trafficmgnt/swimming_lane")), make_shared<string>("json"), req, runtime));
}

ImportK8sClusterResponse Alibabacloud_Edas20170801::Client::importK8sCluster(shared_ptr<ImportK8sClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return importK8sClusterWithOptions(request, headers, runtime);
}

ImportK8sClusterResponse Alibabacloud_Edas20170801::Client::importK8sClusterWithOptions(shared_ptr<ImportK8sClusterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    (*query)["ClusterId"] = *request->clusterId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    (*query)["NamespaceId"] = *request->namespaceId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mode)) {
    (*query)["Mode"] = *request->mode;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableAsm)) {
    (*query)["EnableAsm"] = *request->enableAsm;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ImportK8sClusterResponse(doROARequest(make_shared<string>("ImportK8sCluster"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/import_k8s_cluster")), make_shared<string>("json"), req, runtime));
}

InsertApplicationResponse Alibabacloud_Edas20170801::Client::insertApplication(shared_ptr<InsertApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return insertApplicationWithOptions(request, headers, runtime);
}

InsertApplicationResponse Alibabacloud_Edas20170801::Client::insertApplicationWithOptions(shared_ptr<InsertApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    (*query)["ClusterId"] = *request->clusterId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->buildPackId)) {
    (*query)["BuildPackId"] = *request->buildPackId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    (*query)["Description"] = *request->description;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationName)) {
    (*query)["ApplicationName"] = *request->applicationName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reservedPortStr)) {
    (*query)["ReservedPortStr"] = *request->reservedPortStr;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecuInfo)) {
    (*query)["EcuInfo"] = *request->ecuInfo;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cpu)) {
    (*query)["Cpu"] = *request->cpu;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mem)) {
    (*query)["Mem"] = *request->mem;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckURL)) {
    (*query)["HealthCheckURL"] = *request->healthCheckURL;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalRegionId)) {
    (*query)["LogicalRegionId"] = *request->logicalRegionId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jdk)) {
    (*query)["Jdk"] = *request->jdk;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->webContainer)) {
    (*query)["WebContainer"] = *request->webContainer;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageType)) {
    (*query)["PackageType"] = *request->packageType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->componentIds)) {
    (*query)["ComponentIds"] = *request->componentIds;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hooks)) {
    (*query)["Hooks"] = *request->hooks;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jvmOptions)) {
    (*query)["JvmOptions"] = *request->jvmOptions;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minHeapSize)) {
    (*query)["MinHeapSize"] = *request->minHeapSize;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxPermSize)) {
    (*query)["MaxPermSize"] = *request->maxPermSize;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxHeapSize)) {
    (*query)["MaxHeapSize"] = *request->maxHeapSize;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableUrlCheck)) {
    (*query)["EnableUrlCheck"] = *request->enableUrlCheck;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enablePortCheck)) {
    (*query)["EnablePortCheck"] = *request->enablePortCheck;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckUrl)) {
    (*query)["HealthCheckUrl"] = *request->healthCheckUrl;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return InsertApplicationResponse(doROARequest(make_shared<string>("InsertApplication"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/changeorder/co_create_app")), make_shared<string>("json"), req, runtime));
}

InsertClusterResponse Alibabacloud_Edas20170801::Client::insertCluster(shared_ptr<InsertClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return insertClusterWithOptions(request, headers, runtime);
}

InsertClusterResponse Alibabacloud_Edas20170801::Client::insertClusterWithOptions(shared_ptr<InsertClusterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalRegionId)) {
    (*query)["LogicalRegionId"] = *request->logicalRegionId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterName)) {
    (*query)["ClusterName"] = *request->clusterName;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->clusterType)) {
    (*query)["ClusterType"] = *request->clusterType;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->networkMode)) {
    (*query)["NetworkMode"] = *request->networkMode;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    (*query)["VpcId"] = *request->vpcId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->oversoldFactor)) {
    (*query)["OversoldFactor"] = *request->oversoldFactor;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iaasProvider)) {
    (*query)["IaasProvider"] = *request->iaasProvider;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return InsertClusterResponse(doROARequest(make_shared<string>("InsertCluster"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/resource/cluster")), make_shared<string>("json"), req, runtime));
}

InsertClusterMemberResponse Alibabacloud_Edas20170801::Client::insertClusterMember(shared_ptr<InsertClusterMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return insertClusterMemberWithOptions(request, headers, runtime);
}

InsertClusterMemberResponse Alibabacloud_Edas20170801::Client::insertClusterMemberWithOptions(shared_ptr<InsertClusterMemberRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    (*query)["clusterId"] = *request->clusterId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIds)) {
    (*query)["instanceIds"] = *request->instanceIds;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    (*query)["password"] = *request->password;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return InsertClusterMemberResponse(doROARequest(make_shared<string>("InsertClusterMember"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/resource/cluster_member")), make_shared<string>("json"), req, runtime));
}

InsertConfigCenterResponse Alibabacloud_Edas20170801::Client::insertConfigCenter(shared_ptr<InsertConfigCenterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return insertConfigCenterWithOptions(request, headers, runtime);
}

InsertConfigCenterResponse Alibabacloud_Edas20170801::Client::insertConfigCenterWithOptions(shared_ptr<InsertConfigCenterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataId)) {
    (*query)["DataId"] = *request->dataId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->group)) {
    (*query)["Group"] = *request->group;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->data)) {
    (*query)["Data"] = *request->data;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalRegionId)) {
    (*query)["LogicalRegionId"] = *request->logicalRegionId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    (*query)["AppName"] = *request->appName;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return InsertConfigCenterResponse(doROARequest(make_shared<string>("InsertConfigCenter"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/configCenter")), make_shared<string>("json"), req, runtime));
}

InsertDegradeControlResponse Alibabacloud_Edas20170801::Client::insertDegradeControl(shared_ptr<InsertDegradeControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return insertDegradeControlWithOptions(request, headers, runtime);
}

InsertDegradeControlResponse Alibabacloud_Edas20170801::Client::insertDegradeControlWithOptions(shared_ptr<InsertDegradeControlRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->duration)) {
    (*query)["Duration"] = *request->duration;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->methodName)) {
    (*query)["MethodName"] = *request->methodName;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rtThreshold)) {
    (*query)["RtThreshold"] = *request->rtThreshold;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    (*query)["ServiceName"] = *request->serviceName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->urlVar)) {
    (*query)["UrlVar"] = *request->urlVar;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleType)) {
    (*query)["RuleType"] = *request->ruleType;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return InsertDegradeControlResponse(doROARequest(make_shared<string>("InsertDegradeControl"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/degradeControl")), make_shared<string>("json"), req, runtime));
}

InsertDeployGroupResponse Alibabacloud_Edas20170801::Client::insertDeployGroup(shared_ptr<InsertDeployGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return insertDeployGroupWithOptions(request, headers, runtime);
}

InsertDeployGroupResponse Alibabacloud_Edas20170801::Client::insertDeployGroupWithOptions(shared_ptr<InsertDeployGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    (*query)["GroupName"] = *request->groupName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->initPackageVersionId)) {
    (*query)["InitPackageVersionId"] = *request->initPackageVersionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return InsertDeployGroupResponse(doROARequest(make_shared<string>("InsertDeployGroup"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/deploy_group")), make_shared<string>("json"), req, runtime));
}

InsertFlowControlResponse Alibabacloud_Edas20170801::Client::insertFlowControl(shared_ptr<InsertFlowControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return insertFlowControlWithOptions(request, headers, runtime);
}

InsertFlowControlResponse Alibabacloud_Edas20170801::Client::insertFlowControlWithOptions(shared_ptr<InsertFlowControlRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerAppId)) {
    (*query)["ConsumerAppId"] = *request->consumerAppId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->granularity)) {
    (*query)["Granularity"] = *request->granularity;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->methodName)) {
    (*query)["MethodName"] = *request->methodName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleType)) {
    (*query)["RuleType"] = *request->ruleType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    (*query)["ServiceName"] = *request->serviceName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->strategy)) {
    (*query)["Strategy"] = *request->strategy;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->threshold)) {
    (*query)["Threshold"] = *request->threshold;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->urlVar)) {
    (*query)["UrlVar"] = *request->urlVar;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return InsertFlowControlResponse(doROARequest(make_shared<string>("InsertFlowControl"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/flowControl")), make_shared<string>("json"), req, runtime));
}

InsertK8sApplicationResponse Alibabacloud_Edas20170801::Client::insertK8sApplication(shared_ptr<InsertK8sApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return insertK8sApplicationWithOptions(request, headers, runtime);
}

InsertK8sApplicationResponse Alibabacloud_Edas20170801::Client::insertK8sApplicationWithOptions(shared_ptr<InsertK8sApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->intranetTargetPort)) {
    (*query)["IntranetTargetPort"] = *request->intranetTargetPort;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->intranetSlbPort)) {
    (*query)["IntranetSlbPort"] = *request->intranetSlbPort;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUrl)) {
    (*query)["ImageUrl"] = *request->imageUrl;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationDescription)) {
    (*query)["ApplicationDescription"] = *request->applicationDescription;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoId)) {
    (*query)["RepoId"] = *request->repoId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->replicas)) {
    (*query)["Replicas"] = *request->replicas;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limitCpu)) {
    (*query)["LimitCpu"] = *request->limitCpu;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limitMem)) {
    (*query)["LimitMem"] = *request->limitMem;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->requestsCpu)) {
    (*query)["RequestsCpu"] = *request->requestsCpu;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->requestsMem)) {
    (*query)["RequestsMem"] = *request->requestsMem;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->command)) {
    (*query)["Command"] = *request->command;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commandArgs)) {
    (*query)["CommandArgs"] = *request->commandArgs;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    (*query)["AppName"] = *request->appName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intranetSlbProtocol)) {
    (*query)["IntranetSlbProtocol"] = *request->intranetSlbProtocol;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intranetSlbId)) {
    (*query)["IntranetSlbId"] = *request->intranetSlbId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    (*query)["ClusterId"] = *request->clusterId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internetSlbId)) {
    (*query)["InternetSlbId"] = *request->internetSlbId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internetSlbProtocol)) {
    (*query)["InternetSlbProtocol"] = *request->internetSlbProtocol;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->internetSlbPort)) {
    (*query)["InternetSlbPort"] = *request->internetSlbPort;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->internetTargetPort)) {
    (*query)["InternetTargetPort"] = *request->internetTargetPort;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envs)) {
    (*query)["Envs"] = *request->envs;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preStop)) {
    (*query)["PreStop"] = *request->preStop;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->postStart)) {
    (*query)["PostStart"] = *request->postStart;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->liveness)) {
    (*query)["Liveness"] = *request->liveness;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->readiness)) {
    (*query)["Readiness"] = *request->readiness;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nasId)) {
    (*query)["NasId"] = *request->nasId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mountDescs)) {
    (*query)["MountDescs"] = *request->mountDescs;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageType)) {
    (*query)["StorageType"] = *request->storageType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->localVolume)) {
    (*query)["LocalVolume"] = *request->localVolume;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    (*query)["Namespace_"] = *request->namespace_;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalRegionId)) {
    (*query)["LogicalRegionId"] = *request->logicalRegionId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageType)) {
    (*query)["PackageType"] = *request->packageType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageUrl)) {
    (*query)["PackageUrl"] = *request->packageUrl;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageVersion)) {
    (*query)["PackageVersion"] = *request->packageVersion;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->JDK)) {
    (*query)["JDK"] = *request->JDK;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->webContainer)) {
    (*query)["WebContainer"] = *request->webContainer;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->edasContainerVersion)) {
    (*query)["EdasContainerVersion"] = *request->edasContainerVersion;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uriEncoding)) {
    (*query)["UriEncoding"] = *request->uriEncoding;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useBodyEncoding)) {
    (*query)["UseBodyEncoding"] = *request->useBodyEncoding;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->requestsmCpu)) {
    (*query)["RequestsmCpu"] = *request->requestsmCpu;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limitmCpu)) {
    (*query)["LimitmCpu"] = *request->limitmCpu;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runtimeClassName)) {
    (*query)["RuntimeClassName"] = *request->runtimeClassName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deployAcrossZones)) {
    (*query)["DeployAcrossZones"] = *request->deployAcrossZones;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    (*query)["Timeout"] = *request->timeout;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableAhas)) {
    (*query)["EnableAhas"] = *request->enableAhas;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->webContainerConfig)) {
    (*query)["WebContainerConfig"] = *request->webContainerConfig;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->javaStartUpConfig)) {
    (*query)["JavaStartUpConfig"] = *request->javaStartUpConfig;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slsConfigs)) {
    (*query)["SlsConfigs"] = *request->slsConfigs;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isMultilingualApp)) {
    (*query)["IsMultilingualApp"] = *request->isMultilingualApp;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deployAcrossNodes)) {
    (*query)["DeployAcrossNodes"] = *request->deployAcrossNodes;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return InsertK8sApplicationResponse(doROARequest(make_shared<string>("InsertK8sApplication"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/k8s/acs/create_k8s_app")), make_shared<string>("json"), req, runtime));
}

InsertOrUpdateRegionResponse Alibabacloud_Edas20170801::Client::insertOrUpdateRegion(shared_ptr<InsertOrUpdateRegionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return insertOrUpdateRegionWithOptions(request, headers, runtime);
}

InsertOrUpdateRegionResponse Alibabacloud_Edas20170801::Client::insertOrUpdateRegionWithOptions(shared_ptr<InsertOrUpdateRegionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionTag)) {
    (*query)["RegionTag"] = *request->regionTag;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionName)) {
    (*query)["RegionName"] = *request->regionName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    (*query)["Description"] = *request->description;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    (*query)["Id"] = *request->id;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->debugEnable)) {
    (*query)["DebugEnable"] = *request->debugEnable;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return InsertOrUpdateRegionResponse(doROARequest(make_shared<string>("InsertOrUpdateRegion"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/user_region_def")), make_shared<string>("json"), req, runtime));
}

InsertRoleResponse Alibabacloud_Edas20170801::Client::insertRole(shared_ptr<InsertRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return insertRoleWithOptions(request, headers, runtime);
}

InsertRoleResponse Alibabacloud_Edas20170801::Client::insertRoleWithOptions(shared_ptr<InsertRoleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->roleName)) {
    (*query)["RoleName"] = *request->roleName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->actionData)) {
    (*query)["ActionData"] = *request->actionData;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return InsertRoleResponse(doROARequest(make_shared<string>("InsertRole"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/account/create_role")), make_shared<string>("json"), req, runtime));
}

InsertServiceGroupResponse Alibabacloud_Edas20170801::Client::insertServiceGroup(shared_ptr<InsertServiceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return insertServiceGroupWithOptions(request, headers, runtime);
}

InsertServiceGroupResponse Alibabacloud_Edas20170801::Client::insertServiceGroupWithOptions(shared_ptr<InsertServiceGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    (*query)["GroupName"] = *request->groupName;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return InsertServiceGroupResponse(doROARequest(make_shared<string>("InsertServiceGroup"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/service/serviceGroups")), make_shared<string>("json"), req, runtime));
}

InsertSwimmingLaneResponse Alibabacloud_Edas20170801::Client::insertSwimmingLane(shared_ptr<InsertSwimmingLaneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return insertSwimmingLaneWithOptions(request, headers, runtime);
}

InsertSwimmingLaneResponse Alibabacloud_Edas20170801::Client::insertSwimmingLaneWithOptions(shared_ptr<InsertSwimmingLaneRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalRegionId)) {
    (*query)["LogicalRegionId"] = *request->logicalRegionId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*query)["Name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tag)) {
    (*query)["Tag"] = *request->tag;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->groupId)) {
    (*query)["GroupId"] = *request->groupId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entryRules)) {
    (*query)["EntryRules"] = *request->entryRules;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableRules)) {
    (*query)["EnableRules"] = *request->enableRules;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appInfos)) {
    (*query)["AppInfos"] = *request->appInfos;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return InsertSwimmingLaneResponse(doROARequest(make_shared<string>("InsertSwimmingLane"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/trafficmgnt/swimming_lanes")), make_shared<string>("json"), req, runtime));
}

InsertSwimmingLaneGroupResponse Alibabacloud_Edas20170801::Client::insertSwimmingLaneGroup(shared_ptr<InsertSwimmingLaneGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return insertSwimmingLaneGroupWithOptions(request, headers, runtime);
}

InsertSwimmingLaneGroupResponse Alibabacloud_Edas20170801::Client::insertSwimmingLaneGroupWithOptions(shared_ptr<InsertSwimmingLaneGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*query)["Name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entryApp)) {
    (*query)["EntryApp"] = *request->entryApp;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appIds)) {
    (*query)["AppIds"] = *request->appIds;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalRegionId)) {
    (*query)["LogicalRegionId"] = *request->logicalRegionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return InsertSwimmingLaneGroupResponse(doROARequest(make_shared<string>("InsertSwimmingLaneGroup"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/trafficmgnt/swimming_lane_groups")), make_shared<string>("json"), req, runtime));
}

InstallAgentResponse Alibabacloud_Edas20170801::Client::installAgent(shared_ptr<InstallAgentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return installAgentWithOptions(request, headers, runtime);
}

InstallAgentResponse Alibabacloud_Edas20170801::Client::installAgentWithOptions(shared_ptr<InstallAgentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    (*query)["ClusterId"] = *request->clusterId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIds)) {
    (*query)["InstanceIds"] = *request->instanceIds;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->doAsync)) {
    (*query)["DoAsync"] = *request->doAsync;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return InstallAgentResponse(doROARequest(make_shared<string>("InstallAgent"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/ecss/install_agent")), make_shared<string>("json"), req, runtime));
}

ListAliyunRegionResponse Alibabacloud_Edas20170801::Client::listAliyunRegion() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAliyunRegionWithOptions(headers, runtime);
}

ListAliyunRegionResponse Alibabacloud_Edas20170801::Client::listAliyunRegionWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return ListAliyunRegionResponse(doROARequest(make_shared<string>("ListAliyunRegion"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/resource/region_list")), make_shared<string>("json"), req, runtime));
}

ListApplicationResponse Alibabacloud_Edas20170801::Client::listApplication(shared_ptr<ListApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listApplicationWithOptions(request, headers, runtime);
}

ListApplicationResponse Alibabacloud_Edas20170801::Client::listApplicationWithOptions(shared_ptr<ListApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    (*query)["ClusterId"] = *request->clusterId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalRegionId)) {
    (*query)["LogicalRegionId"] = *request->logicalRegionId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    (*query)["AppName"] = *request->appName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    (*query)["ResourceGroupId"] = *request->resourceGroupId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalRegionIdFilter)) {
    (*query)["LogicalRegionIdFilter"] = *request->logicalRegionIdFilter;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListApplicationResponse(doROARequest(make_shared<string>("ListApplication"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/app/app_list")), make_shared<string>("json"), req, runtime));
}

ListApplicationEcuResponse Alibabacloud_Edas20170801::Client::listApplicationEcu(shared_ptr<ListApplicationEcuRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listApplicationEcuWithOptions(request, headers, runtime);
}

ListApplicationEcuResponse Alibabacloud_Edas20170801::Client::listApplicationEcuWithOptions(shared_ptr<ListApplicationEcuRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListApplicationEcuResponse(doROARequest(make_shared<string>("ListApplicationEcu"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/resource/ecu_list")), make_shared<string>("json"), req, runtime));
}

ListAuthorityResponse Alibabacloud_Edas20170801::Client::listAuthority() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAuthorityWithOptions(headers, runtime);
}

ListAuthorityResponse Alibabacloud_Edas20170801::Client::listAuthorityWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return ListAuthorityResponse(doROARequest(make_shared<string>("ListAuthority"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/account/authority_list")), make_shared<string>("json"), req, runtime));
}

ListBuildPackResponse Alibabacloud_Edas20170801::Client::listBuildPack() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listBuildPackWithOptions(headers, runtime);
}

ListBuildPackResponse Alibabacloud_Edas20170801::Client::listBuildPackWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return ListBuildPackResponse(doROARequest(make_shared<string>("ListBuildPack"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/app/build_pack_list")), make_shared<string>("json"), req, runtime));
}

ListChildrenStacksResponse Alibabacloud_Edas20170801::Client::listChildrenStacks(shared_ptr<ListChildrenStacksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listChildrenStacksWithOptions(request, headers, runtime);
}

ListChildrenStacksResponse Alibabacloud_Edas20170801::Client::listChildrenStacksWithOptions(shared_ptr<ListChildrenStacksRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->stackId)) {
    (*query)["StackId"] = *request->stackId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    (*query)["CurrentPage"] = *request->currentPage;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListChildrenStacksResponse(doROARequest(make_shared<string>("ListChildrenStacks"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/s2i/list_children_stack")), make_shared<string>("json"), req, runtime));
}

ListClusterResponse Alibabacloud_Edas20170801::Client::listCluster(shared_ptr<ListClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listClusterWithOptions(request, headers, runtime);
}

ListClusterResponse Alibabacloud_Edas20170801::Client::listClusterWithOptions(shared_ptr<ListClusterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalRegionId)) {
    (*query)["LogicalRegionId"] = *request->logicalRegionId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    (*query)["ResourceGroupId"] = *request->resourceGroupId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListClusterResponse(doROARequest(make_shared<string>("ListCluster"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/resource/cluster_list")), make_shared<string>("json"), req, runtime));
}

ListClusterMembersResponse Alibabacloud_Edas20170801::Client::listClusterMembers(shared_ptr<ListClusterMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listClusterMembersWithOptions(request, headers, runtime);
}

ListClusterMembersResponse Alibabacloud_Edas20170801::Client::listClusterMembersWithOptions(shared_ptr<ListClusterMembersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    (*query)["ClusterId"] = *request->clusterId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    (*query)["CurrentPage"] = *request->currentPage;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsList)) {
    (*query)["EcsList"] = *request->ecsList;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListClusterMembersResponse(doROARequest(make_shared<string>("ListClusterMembers"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/resource/cluster_member_list")), make_shared<string>("json"), req, runtime));
}

ListComponentsResponse Alibabacloud_Edas20170801::Client::listComponents() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listComponentsWithOptions(headers, runtime);
}

ListComponentsResponse Alibabacloud_Edas20170801::Client::listComponentsWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return ListComponentsResponse(doROARequest(make_shared<string>("ListComponents"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/resource/components")), make_shared<string>("json"), req, runtime));
}

ListConfigCentersResponse Alibabacloud_Edas20170801::Client::listConfigCenters(shared_ptr<ListConfigCentersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listConfigCentersWithOptions(request, headers, runtime);
}

ListConfigCentersResponse Alibabacloud_Edas20170801::Client::listConfigCentersWithOptions(shared_ptr<ListConfigCentersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataIdPattern)) {
    (*query)["DataIdPattern"] = *request->dataIdPattern;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->group)) {
    (*query)["Group"] = *request->group;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalRegionId)) {
    (*query)["LogicalRegionId"] = *request->logicalRegionId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    (*query)["AppName"] = *request->appName;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListConfigCentersResponse(doROARequest(make_shared<string>("ListConfigCenters"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/configCenters")), make_shared<string>("json"), req, runtime));
}

ListConsumedServicesResponse Alibabacloud_Edas20170801::Client::listConsumedServices(shared_ptr<ListConsumedServicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listConsumedServicesWithOptions(request, headers, runtime);
}

ListConsumedServicesResponse Alibabacloud_Edas20170801::Client::listConsumedServicesWithOptions(shared_ptr<ListConsumedServicesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListConsumedServicesResponse(doROARequest(make_shared<string>("ListConsumedServices"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/service/listConsumedServices")), make_shared<string>("json"), req, runtime));
}

ListConvertableEcuResponse Alibabacloud_Edas20170801::Client::listConvertableEcu(shared_ptr<ListConvertableEcuRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listConvertableEcuWithOptions(request, headers, runtime);
}

ListConvertableEcuResponse Alibabacloud_Edas20170801::Client::listConvertableEcuWithOptions(shared_ptr<ListConvertableEcuRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    (*query)["clusterId"] = *request->clusterId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListConvertableEcuResponse(doROARequest(make_shared<string>("ListConvertableEcu"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/resource/convertable_ecu_list")), make_shared<string>("json"), req, runtime));
}

ListCSBGatewayResponse Alibabacloud_Edas20170801::Client::listCSBGateway(shared_ptr<ListCSBGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listCSBGatewayWithOptions(request, headers, runtime);
}

ListCSBGatewayResponse Alibabacloud_Edas20170801::Client::listCSBGatewayWithOptions(shared_ptr<ListCSBGatewayRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalRegionId)) {
    (*query)["LogicalRegionId"] = *request->logicalRegionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListCSBGatewayResponse(doROARequest(make_shared<string>("ListCSBGateway"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/csbgateway/gateway")), make_shared<string>("json"), req, runtime));
}

ListDegradeControlsResponse Alibabacloud_Edas20170801::Client::listDegradeControls(shared_ptr<ListDegradeControlsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDegradeControlsWithOptions(request, headers, runtime);
}

ListDegradeControlsResponse Alibabacloud_Edas20170801::Client::listDegradeControlsWithOptions(shared_ptr<ListDegradeControlsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListDegradeControlsResponse(doROARequest(make_shared<string>("ListDegradeControls"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/app/degradeControls")), make_shared<string>("json"), req, runtime));
}

ListDeployGroupResponse Alibabacloud_Edas20170801::Client::listDeployGroup(shared_ptr<ListDeployGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDeployGroupWithOptions(request, headers, runtime);
}

ListDeployGroupResponse Alibabacloud_Edas20170801::Client::listDeployGroupWithOptions(shared_ptr<ListDeployGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListDeployGroupResponse(doROARequest(make_shared<string>("ListDeployGroup"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/app/deploy_group_list")), make_shared<string>("json"), req, runtime));
}

ListEcsNotInClusterResponse Alibabacloud_Edas20170801::Client::listEcsNotInCluster(shared_ptr<ListEcsNotInClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listEcsNotInClusterWithOptions(request, headers, runtime);
}

ListEcsNotInClusterResponse Alibabacloud_Edas20170801::Client::listEcsNotInClusterWithOptions(shared_ptr<ListEcsNotInClusterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->networkMode)) {
    (*query)["NetworkMode"] = *request->networkMode;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    (*query)["VpcId"] = *request->vpcId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListEcsNotInClusterResponse(doROARequest(make_shared<string>("ListEcsNotInCluster"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/resource/ecs_not_in_cluster")), make_shared<string>("json"), req, runtime));
}

ListEcuByRegionResponse Alibabacloud_Edas20170801::Client::listEcuByRegion(shared_ptr<ListEcuByRegionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listEcuByRegionWithOptions(request, headers, runtime);
}

ListEcuByRegionResponse Alibabacloud_Edas20170801::Client::listEcuByRegionWithOptions(shared_ptr<ListEcuByRegionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalRegionId)) {
    (*query)["LogicalRegionId"] = *request->logicalRegionId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->act)) {
    (*query)["Act"] = *request->act;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListEcuByRegionResponse(doROARequest(make_shared<string>("ListEcuByRegion"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/resource/ecu_list")), make_shared<string>("json"), req, runtime));
}

ListFlowControlsResponse Alibabacloud_Edas20170801::Client::listFlowControls(shared_ptr<ListFlowControlsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listFlowControlsWithOptions(request, headers, runtime);
}

ListFlowControlsResponse Alibabacloud_Edas20170801::Client::listFlowControlsWithOptions(shared_ptr<ListFlowControlsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListFlowControlsResponse(doROARequest(make_shared<string>("ListFlowControls"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/app/flowControls")), make_shared<string>("json"), req, runtime));
}

ListHistoryDeployVersionResponse Alibabacloud_Edas20170801::Client::listHistoryDeployVersion(shared_ptr<ListHistoryDeployVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listHistoryDeployVersionWithOptions(request, headers, runtime);
}

ListHistoryDeployVersionResponse Alibabacloud_Edas20170801::Client::listHistoryDeployVersionWithOptions(shared_ptr<ListHistoryDeployVersionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListHistoryDeployVersionResponse(doROARequest(make_shared<string>("ListHistoryDeployVersion"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/app/deploy_history_version_list")), make_shared<string>("json"), req, runtime));
}

ListK8sIngressRulesResponse Alibabacloud_Edas20170801::Client::listK8sIngressRules(shared_ptr<ListK8sIngressRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listK8sIngressRulesWithOptions(request, headers, runtime);
}

ListK8sIngressRulesResponse Alibabacloud_Edas20170801::Client::listK8sIngressRulesWithOptions(shared_ptr<ListK8sIngressRulesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    (*query)["ClusterId"] = *request->clusterId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    (*query)["Namespace_"] = *request->namespace_;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListK8sIngressRulesResponse(doROARequest(make_shared<string>("ListK8sIngressRules"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/k8s/acs/k8s_ingress")), make_shared<string>("json"), req, runtime));
}

ListMethodsResponse Alibabacloud_Edas20170801::Client::listMethods(shared_ptr<ListMethodsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listMethodsWithOptions(request, headers, runtime);
}

ListMethodsResponse Alibabacloud_Edas20170801::Client::listMethodsWithOptions(shared_ptr<ListMethodsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    (*query)["ServiceName"] = *request->serviceName;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListMethodsResponse(doROARequest(make_shared<string>("ListMethods"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/service/list_methods")), make_shared<string>("json"), req, runtime));
}

ListOperationLogsResponse Alibabacloud_Edas20170801::Client::listOperationLogs(shared_ptr<ListOperationLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listOperationLogsWithOptions(request, headers, runtime);
}

ListOperationLogsResponse Alibabacloud_Edas20170801::Client::listOperationLogsWithOptions(shared_ptr<ListOperationLogsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    (*query)["BeginTime"] = *request->beginTime;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    (*query)["EndTime"] = *request->endTime;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    (*query)["UserId"] = *request->userId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    (*query)["CurrentPage"] = *request->currentPage;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListOperationLogsResponse(doROARequest(make_shared<string>("ListOperationLogs"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/operationlog/log_list")), make_shared<string>("json"), req, runtime));
}

ListPublishedServicesResponse Alibabacloud_Edas20170801::Client::listPublishedServices(shared_ptr<ListPublishedServicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listPublishedServicesWithOptions(request, headers, runtime);
}

ListPublishedServicesResponse Alibabacloud_Edas20170801::Client::listPublishedServicesWithOptions(shared_ptr<ListPublishedServicesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListPublishedServicesResponse(doROARequest(make_shared<string>("ListPublishedServices"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/service/listPublishedServices")), make_shared<string>("json"), req, runtime));
}

ListRecentChangeOrderResponse Alibabacloud_Edas20170801::Client::listRecentChangeOrder(shared_ptr<ListRecentChangeOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRecentChangeOrderWithOptions(request, headers, runtime);
}

ListRecentChangeOrderResponse Alibabacloud_Edas20170801::Client::listRecentChangeOrderWithOptions(shared_ptr<ListRecentChangeOrderRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListRecentChangeOrderResponse(doROARequest(make_shared<string>("ListRecentChangeOrder"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/changeorder/change_order_list")), make_shared<string>("json"), req, runtime));
}

ListResourceGroupResponse Alibabacloud_Edas20170801::Client::listResourceGroup() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listResourceGroupWithOptions(headers, runtime);
}

ListResourceGroupResponse Alibabacloud_Edas20170801::Client::listResourceGroupWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return ListResourceGroupResponse(doROARequest(make_shared<string>("ListResourceGroup"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/resource/reg_group_list")), make_shared<string>("json"), req, runtime));
}

ListRoleResponse Alibabacloud_Edas20170801::Client::listRole() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRoleWithOptions(headers, runtime);
}

ListRoleResponse Alibabacloud_Edas20170801::Client::listRoleWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return ListRoleResponse(doROARequest(make_shared<string>("ListRole"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/account/role_list")), make_shared<string>("json"), req, runtime));
}

ListRootStacksResponse Alibabacloud_Edas20170801::Client::listRootStacks(shared_ptr<ListRootStacksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRootStacksWithOptions(request, headers, runtime);
}

ListRootStacksResponse Alibabacloud_Edas20170801::Client::listRootStacksWithOptions(shared_ptr<ListRootStacksRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    (*query)["CurrentPage"] = *request->currentPage;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListRootStacksResponse(doROARequest(make_shared<string>("ListRootStacks"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/s2i/list_root_stack")), make_shared<string>("json"), req, runtime));
}

ListScaleOutEcuResponse Alibabacloud_Edas20170801::Client::listScaleOutEcu(shared_ptr<ListScaleOutEcuRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listScaleOutEcuWithOptions(request, headers, runtime);
}

ListScaleOutEcuResponse Alibabacloud_Edas20170801::Client::listScaleOutEcuWithOptions(shared_ptr<ListScaleOutEcuRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalRegionId)) {
    (*query)["LogicalRegionId"] = *request->logicalRegionId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    (*query)["ClusterId"] = *request->clusterId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    (*query)["GroupId"] = *request->groupId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cpu)) {
    (*query)["Cpu"] = *request->cpu;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mem)) {
    (*query)["Mem"] = *request->mem;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceNum)) {
    (*query)["InstanceNum"] = *request->instanceNum;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListScaleOutEcuResponse(doROARequest(make_shared<string>("ListScaleOutEcu"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/resource/scale_out_ecu_list")), make_shared<string>("json"), req, runtime));
}

ListServiceGroupsResponse Alibabacloud_Edas20170801::Client::listServiceGroups() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listServiceGroupsWithOptions(headers, runtime);
}

ListServiceGroupsResponse Alibabacloud_Edas20170801::Client::listServiceGroupsWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return ListServiceGroupsResponse(doROARequest(make_shared<string>("ListServiceGroups"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/service/serviceGroups")), make_shared<string>("json"), req, runtime));
}

ListSlbResponse Alibabacloud_Edas20170801::Client::listSlb() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSlbWithOptions(headers, runtime);
}

ListSlbResponse Alibabacloud_Edas20170801::Client::listSlbWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return ListSlbResponse(doROARequest(make_shared<string>("ListSlb"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/slb_list")), make_shared<string>("json"), req, runtime));
}

ListStatusResponse Alibabacloud_Edas20170801::Client::listStatus(shared_ptr<ListStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listStatusWithOptions(request, headers, runtime);
}

ListStatusResponse Alibabacloud_Edas20170801::Client::listStatusWithOptions(shared_ptr<ListStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    (*query)["Region"] = *request->region;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    (*query)["NamespaceId"] = *request->namespaceId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    (*query)["TenantId"] = *request->tenantId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    (*query)["Source"] = *request->source;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    (*query)["AccountId"] = *request->accountId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    (*query)["Ip"] = *request->ip;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->podName)) {
    (*query)["PodName"] = *request->podName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    (*query)["Status"] = *request->status;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListStatusResponse(doROARequest(make_shared<string>("ListStatus"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/sp/api/mse/status/list")), make_shared<string>("json"), req, runtime));
}

ListSubAccountResponse Alibabacloud_Edas20170801::Client::listSubAccount() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSubAccountWithOptions(headers, runtime);
}

ListSubAccountResponse Alibabacloud_Edas20170801::Client::listSubAccountWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return ListSubAccountResponse(doROARequest(make_shared<string>("ListSubAccount"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/account/sub_account_list")), make_shared<string>("json"), req, runtime));
}

ListSwimmingLaneResponse Alibabacloud_Edas20170801::Client::listSwimmingLane(shared_ptr<ListSwimmingLaneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSwimmingLaneWithOptions(request, headers, runtime);
}

ListSwimmingLaneResponse Alibabacloud_Edas20170801::Client::listSwimmingLaneWithOptions(shared_ptr<ListSwimmingLaneRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->groupId)) {
    (*query)["GroupId"] = *request->groupId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListSwimmingLaneResponse(doROARequest(make_shared<string>("ListSwimmingLane"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/trafficmgnt/swimming_lanes")), make_shared<string>("json"), req, runtime));
}

ListSwimmingLaneGroupResponse Alibabacloud_Edas20170801::Client::listSwimmingLaneGroup(shared_ptr<ListSwimmingLaneGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSwimmingLaneGroupWithOptions(request, headers, runtime);
}

ListSwimmingLaneGroupResponse Alibabacloud_Edas20170801::Client::listSwimmingLaneGroupWithOptions(shared_ptr<ListSwimmingLaneGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalRegionId)) {
    (*query)["LogicalRegionId"] = *request->logicalRegionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListSwimmingLaneGroupResponse(doROARequest(make_shared<string>("ListSwimmingLaneGroup"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/trafficmgnt/swimming_lane_groups")), make_shared<string>("json"), req, runtime));
}

ListTagResourcesResponse Alibabacloud_Edas20170801::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTagResourcesWithOptions(request, headers, runtime);
}

ListTagResourcesResponse Alibabacloud_Edas20170801::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    (*query)["ResourceType"] = *request->resourceType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIds)) {
    (*query)["ResourceIds"] = *request->resourceIds;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    (*query)["Tags"] = *request->tags;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceRegionId)) {
    (*query)["ResourceRegionId"] = *request->resourceRegionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListTagResourcesResponse(doROARequest(make_shared<string>("ListTagResources"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/tag/tags")), make_shared<string>("json"), req, runtime));
}

ListUserDefineRegionResponse Alibabacloud_Edas20170801::Client::listUserDefineRegion(shared_ptr<ListUserDefineRegionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listUserDefineRegionWithOptions(request, headers, runtime);
}

ListUserDefineRegionResponse Alibabacloud_Edas20170801::Client::listUserDefineRegionWithOptions(shared_ptr<ListUserDefineRegionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->debugEnable)) {
    (*query)["DebugEnable"] = *request->debugEnable;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListUserDefineRegionResponse(doROARequest(make_shared<string>("ListUserDefineRegion"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/user_region_defs")), make_shared<string>("json"), req, runtime));
}

ListVpcResponse Alibabacloud_Edas20170801::Client::listVpc() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listVpcWithOptions(headers, runtime);
}

ListVpcResponse Alibabacloud_Edas20170801::Client::listVpcWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return ListVpcResponse(doROARequest(make_shared<string>("ListVpc"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/vpc_list")), make_shared<string>("json"), req, runtime));
}

MigrateEcuResponse Alibabacloud_Edas20170801::Client::migrateEcu(shared_ptr<MigrateEcuRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return migrateEcuWithOptions(request, headers, runtime);
}

MigrateEcuResponse Alibabacloud_Edas20170801::Client::migrateEcuWithOptions(shared_ptr<MigrateEcuRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIds)) {
    (*query)["InstanceIds"] = *request->instanceIds;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalRegionId)) {
    (*query)["LogicalRegionId"] = *request->logicalRegionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return MigrateEcuResponse(doROARequest(make_shared<string>("MigrateEcu"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/resource/migrate_ecu")), make_shared<string>("json"), req, runtime));
}

ModifyScalingRuleResponse Alibabacloud_Edas20170801::Client::modifyScalingRule(shared_ptr<ModifyScalingRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyScalingRuleWithOptions(request, headers, runtime);
}

ModifyScalingRuleResponse Alibabacloud_Edas20170801::Client::modifyScalingRuleWithOptions(shared_ptr<ModifyScalingRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    (*query)["GroupId"] = *request->groupId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inCondition)) {
    (*query)["InCondition"] = *request->inCondition;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->inEnable)) {
    (*query)["InEnable"] = *request->inEnable;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->inCpu)) {
    (*query)["InCpu"] = *request->inCpu;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->inDuration)) {
    (*query)["InDuration"] = *request->inDuration;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->inInstanceNum)) {
    (*query)["InInstanceNum"] = *request->inInstanceNum;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->inLoad)) {
    (*query)["InLoad"] = *request->inLoad;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->inRT)) {
    (*query)["InRT"] = *request->inRT;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->inStep)) {
    (*query)["InStep"] = *request->inStep;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outCondition)) {
    (*query)["OutCondition"] = *request->outCondition;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->outCPU)) {
    (*query)["OutCPU"] = *request->outCPU;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->outDuration)) {
    (*query)["OutDuration"] = *request->outDuration;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outEnable)) {
    (*query)["OutEnable"] = *request->outEnable;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->outInstanceNum)) {
    (*query)["OutInstanceNum"] = *request->outInstanceNum;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->outLoad)) {
    (*query)["OutLoad"] = *request->outLoad;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->outRT)) {
    (*query)["OutRT"] = *request->outRT;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->outStep)) {
    (*query)["OutStep"] = *request->outStep;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceFrom)) {
    (*query)["ResourceFrom"] = *request->resourceFrom;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->multiAzPolicy)) {
    (*query)["MultiAzPolicy"] = *request->multiAzPolicy;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    (*query)["VpcId"] = *request->vpcId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchIds)) {
    (*query)["VSwitchIds"] = *request->vSwitchIds;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingPolicy)) {
    (*query)["ScalingPolicy"] = *request->scalingPolicy;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateInstanceId)) {
    (*query)["TemplateInstanceId"] = *request->templateInstanceId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateInstanceName)) {
    (*query)["TemplateInstanceName"] = *request->templateInstanceName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    (*query)["Password"] = *request->password;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPairName)) {
    (*query)["KeyPairName"] = *request->keyPairName;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->acceptEULA)) {
    (*query)["AcceptEULA"] = *request->acceptEULA;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    (*query)["TemplateId"] = *request->templateId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateVersion)) {
    (*query)["TemplateVersion"] = *request->templateVersion;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ModifyScalingRuleResponse(doROARequest(make_shared<string>("ModifyScalingRule"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/app/scaling_rules")), make_shared<string>("json"), req, runtime));
}

QueryApplicationStatusResponse Alibabacloud_Edas20170801::Client::queryApplicationStatus(shared_ptr<QueryApplicationStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryApplicationStatusWithOptions(request, headers, runtime);
}

QueryApplicationStatusResponse Alibabacloud_Edas20170801::Client::queryApplicationStatusWithOptions(shared_ptr<QueryApplicationStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return QueryApplicationStatusResponse(doROARequest(make_shared<string>("QueryApplicationStatus"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/app/app_status")), make_shared<string>("json"), req, runtime));
}

QueryConfigCenterResponse Alibabacloud_Edas20170801::Client::queryConfigCenter(shared_ptr<QueryConfigCenterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryConfigCenterWithOptions(request, headers, runtime);
}

QueryConfigCenterResponse Alibabacloud_Edas20170801::Client::queryConfigCenterWithOptions(shared_ptr<QueryConfigCenterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataId)) {
    (*query)["DataId"] = *request->dataId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->group)) {
    (*query)["Group"] = *request->group;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalRegionId)) {
    (*query)["LogicalRegionId"] = *request->logicalRegionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return QueryConfigCenterResponse(doROARequest(make_shared<string>("QueryConfigCenter"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/configCenter")), make_shared<string>("json"), req, runtime));
}

QueryEccInfoResponse Alibabacloud_Edas20170801::Client::queryEccInfo(shared_ptr<QueryEccInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryEccInfoWithOptions(request, headers, runtime);
}

QueryEccInfoResponse Alibabacloud_Edas20170801::Client::queryEccInfoWithOptions(shared_ptr<QueryEccInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eccId)) {
    (*query)["EccId"] = *request->eccId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return QueryEccInfoResponse(doROARequest(make_shared<string>("QueryEccInfo"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/ecc")), make_shared<string>("json"), req, runtime));
}

QueryK8sClusterLogProjectInfoResponse Alibabacloud_Edas20170801::Client::queryK8sClusterLogProjectInfo(shared_ptr<QueryK8sClusterLogProjectInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryK8sClusterLogProjectInfoWithOptions(request, headers, runtime);
}

QueryK8sClusterLogProjectInfoResponse Alibabacloud_Edas20170801::Client::queryK8sClusterLogProjectInfoWithOptions(shared_ptr<QueryK8sClusterLogProjectInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    (*query)["ClusterId"] = *request->clusterId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return QueryK8sClusterLogProjectInfoResponse(doROARequest(make_shared<string>("QueryK8sClusterLogProjectInfo"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/k8s/sls/project")), make_shared<string>("json"), req, runtime));
}

QueryMigrateEcuListResponse Alibabacloud_Edas20170801::Client::queryMigrateEcuList(shared_ptr<QueryMigrateEcuListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryMigrateEcuListWithOptions(request, headers, runtime);
}

QueryMigrateEcuListResponse Alibabacloud_Edas20170801::Client::queryMigrateEcuListWithOptions(shared_ptr<QueryMigrateEcuListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalRegionId)) {
    (*query)["LogicalRegionId"] = *request->logicalRegionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return QueryMigrateEcuListResponse(doROARequest(make_shared<string>("QueryMigrateEcuList"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/resource/migrate_ecu_list")), make_shared<string>("json"), req, runtime));
}

QueryMigrateRegionListResponse Alibabacloud_Edas20170801::Client::queryMigrateRegionList(shared_ptr<QueryMigrateRegionListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryMigrateRegionListWithOptions(request, headers, runtime);
}

QueryMigrateRegionListResponse Alibabacloud_Edas20170801::Client::queryMigrateRegionListWithOptions(shared_ptr<QueryMigrateRegionListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalRegionId)) {
    (*query)["LogicalRegionId"] = *request->logicalRegionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return QueryMigrateRegionListResponse(doROARequest(make_shared<string>("QueryMigrateRegionList"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/resource/migrate_region_select")), make_shared<string>("json"), req, runtime));
}

QueryMonitorInfoResponse Alibabacloud_Edas20170801::Client::queryMonitorInfo(shared_ptr<QueryMonitorInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryMonitorInfoWithOptions(request, headers, runtime);
}

QueryMonitorInfoResponse Alibabacloud_Edas20170801::Client::queryMonitorInfoWithOptions(shared_ptr<QueryMonitorInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->start)) {
    (*query)["Start"] = *request->start;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->end)) {
    (*query)["End"] = *request->end;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metric)) {
    (*query)["Metric"] = *request->metric;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    (*query)["Tags"] = *request->tags;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregator)) {
    (*query)["Aggregator"] = *request->aggregator;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    (*query)["Interval"] = *request->interval;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return QueryMonitorInfoResponse(doROARequest(make_shared<string>("QueryMonitorInfo"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/monitor/queryMonitorInfo")), make_shared<string>("json"), req, runtime));
}

QueryRegionConfigResponse Alibabacloud_Edas20170801::Client::queryRegionConfig() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryRegionConfigWithOptions(headers, runtime);
}

QueryRegionConfigResponse Alibabacloud_Edas20170801::Client::queryRegionConfigWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return QueryRegionConfigResponse(doROARequest(make_shared<string>("QueryRegionConfig"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/region_config")), make_shared<string>("json"), req, runtime));
}

QueryServiceTimeConfigResponse Alibabacloud_Edas20170801::Client::queryServiceTimeConfig(shared_ptr<QueryServiceTimeConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryServiceTimeConfigWithOptions(request, headers, runtime);
}

QueryServiceTimeConfigResponse Alibabacloud_Edas20170801::Client::queryServiceTimeConfigWithOptions(shared_ptr<QueryServiceTimeConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    (*query)["Region"] = *request->region;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    (*query)["ServiceType"] = *request->serviceType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    (*query)["ServiceName"] = *request->serviceName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceVersion)) {
    (*query)["ServiceVersion"] = *request->serviceVersion;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceGroup)) {
    (*query)["ServiceGroup"] = *request->serviceGroup;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*query)["PageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    (*query)["Namespace_"] = *request->namespace_;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    (*query)["Source"] = *request->source;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return QueryServiceTimeConfigResponse(doROARequest(make_shared<string>("QueryServiceTimeConfig"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/sp/api/timeout/page")), make_shared<string>("json"), req, runtime));
}

QuerySlsLogStoreListResponse Alibabacloud_Edas20170801::Client::querySlsLogStoreList(shared_ptr<QuerySlsLogStoreListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return querySlsLogStoreListWithOptions(request, headers, runtime);
}

QuerySlsLogStoreListResponse Alibabacloud_Edas20170801::Client::querySlsLogStoreListWithOptions(shared_ptr<QuerySlsLogStoreListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    (*query)["Type"] = *request->type;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    (*query)["CurrentPage"] = *request->currentPage;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return QuerySlsLogStoreListResponse(doROARequest(make_shared<string>("QuerySlsLogStoreList"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/k8s/sls/query_sls_log_store_list")), make_shared<string>("json"), req, runtime));
}

RemoveMockRuleResponse Alibabacloud_Edas20170801::Client::removeMockRule(shared_ptr<RemoveMockRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeMockRuleWithOptions(request, headers, runtime);
}

RemoveMockRuleResponse Alibabacloud_Edas20170801::Client::removeMockRuleWithOptions(shared_ptr<RemoveMockRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    (*query)["Id"] = *request->id;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return RemoveMockRuleResponse(doROARequest(make_shared<string>("RemoveMockRule"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/sp/api/mock/removeMockRule")), make_shared<string>("json"), req, runtime));
}

ResetApplicationResponse Alibabacloud_Edas20170801::Client::resetApplication(shared_ptr<ResetApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return resetApplicationWithOptions(request, headers, runtime);
}

ResetApplicationResponse Alibabacloud_Edas20170801::Client::resetApplicationWithOptions(shared_ptr<ResetApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eccInfo)) {
    (*query)["EccInfo"] = *request->eccInfo;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ResetApplicationResponse(doROARequest(make_shared<string>("ResetApplication"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/changeorder/co_reset")), make_shared<string>("json"), req, runtime));
}

RestartApplicationResponse Alibabacloud_Edas20170801::Client::restartApplication(shared_ptr<RestartApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return restartApplicationWithOptions(request, headers, runtime);
}

RestartApplicationResponse Alibabacloud_Edas20170801::Client::restartApplicationWithOptions(shared_ptr<RestartApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eccInfo)) {
    (*query)["EccInfo"] = *request->eccInfo;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return RestartApplicationResponse(doROARequest(make_shared<string>("RestartApplication"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/changeorder/co_restart")), make_shared<string>("json"), req, runtime));
}

RestartK8sApplicationResponse Alibabacloud_Edas20170801::Client::restartK8sApplication(shared_ptr<RestartK8sApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return restartK8sApplicationWithOptions(request, headers, runtime);
}

RestartK8sApplicationResponse Alibabacloud_Edas20170801::Client::restartK8sApplicationWithOptions(shared_ptr<RestartK8sApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    (*query)["Timeout"] = *request->timeout;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return RestartK8sApplicationResponse(doROARequest(make_shared<string>("RestartK8sApplication"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/k8s/acs/restart_k8s_app")), make_shared<string>("json"), req, runtime));
}

RollbackApplicationResponse Alibabacloud_Edas20170801::Client::rollbackApplication(shared_ptr<RollbackApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return rollbackApplicationWithOptions(request, headers, runtime);
}

RollbackApplicationResponse Alibabacloud_Edas20170801::Client::rollbackApplicationWithOptions(shared_ptr<RollbackApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->historyVersion)) {
    (*query)["HistoryVersion"] = *request->historyVersion;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    (*query)["GroupId"] = *request->groupId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->batch)) {
    (*query)["Batch"] = *request->batch;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->batchWaitTime)) {
    (*query)["BatchWaitTime"] = *request->batchWaitTime;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return RollbackApplicationResponse(doROARequest(make_shared<string>("RollbackApplication"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/changeorder/co_rollback")), make_shared<string>("json"), req, runtime));
}

RollbackChangeOrderResponse Alibabacloud_Edas20170801::Client::rollbackChangeOrder(shared_ptr<RollbackChangeOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return rollbackChangeOrderWithOptions(request, headers, runtime);
}

RollbackChangeOrderResponse Alibabacloud_Edas20170801::Client::rollbackChangeOrderWithOptions(shared_ptr<RollbackChangeOrderRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->changeOrderId)) {
    (*query)["ChangeOrderId"] = *request->changeOrderId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return RollbackChangeOrderResponse(doROARequest(make_shared<string>("RollbackChangeOrder"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/oam/changeorder/rollback")), make_shared<string>("json"), req, runtime));
}

ScaleInApplicationResponse Alibabacloud_Edas20170801::Client::scaleInApplication(shared_ptr<ScaleInApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return scaleInApplicationWithOptions(request, headers, runtime);
}

ScaleInApplicationResponse Alibabacloud_Edas20170801::Client::scaleInApplicationWithOptions(shared_ptr<ScaleInApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eccInfo)) {
    (*query)["EccInfo"] = *request->eccInfo;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->forceStatus)) {
    (*query)["ForceStatus"] = *request->forceStatus;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ScaleInApplicationResponse(doROARequest(make_shared<string>("ScaleInApplication"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/changeorder/co_scale_in")), make_shared<string>("json"), req, runtime));
}

ScaleK8sApplicationResponse Alibabacloud_Edas20170801::Client::scaleK8sApplication(shared_ptr<ScaleK8sApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return scaleK8sApplicationWithOptions(request, headers, runtime);
}

ScaleK8sApplicationResponse Alibabacloud_Edas20170801::Client::scaleK8sApplicationWithOptions(shared_ptr<ScaleK8sApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->replicas)) {
    (*query)["Replicas"] = *request->replicas;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    (*query)["Timeout"] = *request->timeout;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ScaleK8sApplicationResponse(doROARequest(make_shared<string>("ScaleK8sApplication"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/k8s/acs/k8s_apps")), make_shared<string>("json"), req, runtime));
}

ScaleOutApplicationResponse Alibabacloud_Edas20170801::Client::scaleOutApplication(shared_ptr<ScaleOutApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return scaleOutApplicationWithOptions(request, headers, runtime);
}

ScaleOutApplicationResponse Alibabacloud_Edas20170801::Client::scaleOutApplicationWithOptions(shared_ptr<ScaleOutApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecuInfo)) {
    (*query)["EcuInfo"] = *request->ecuInfo;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deployGroup)) {
    (*query)["DeployGroup"] = *request->deployGroup;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ScaleOutApplicationResponse(doROARequest(make_shared<string>("ScaleOutApplication"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/changeorder/co_scale_out")), make_shared<string>("json"), req, runtime));
}

ScaleoutApplicationWithNewInstancesResponse Alibabacloud_Edas20170801::Client::scaleoutApplicationWithNewInstances(shared_ptr<ScaleoutApplicationWithNewInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return scaleoutApplicationWithNewInstancesWithOptions(request, headers, runtime);
}

ScaleoutApplicationWithNewInstancesResponse Alibabacloud_Edas20170801::Client::scaleoutApplicationWithNewInstancesWithOptions(shared_ptr<ScaleoutApplicationWithNewInstancesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    (*query)["GroupId"] = *request->groupId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scalingNum)) {
    (*query)["ScalingNum"] = *request->scalingNum;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    (*query)["TemplateId"] = *request->templateId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateVersion)) {
    (*query)["TemplateVersion"] = *request->templateVersion;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingPolicy)) {
    (*query)["ScalingPolicy"] = *request->scalingPolicy;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateInstanceId)) {
    (*query)["TemplateInstanceId"] = *request->templateInstanceId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    (*query)["ClusterId"] = *request->clusterId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceChargeType)) {
    (*query)["InstanceChargeType"] = *request->instanceChargeType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceChargePeriodUnit)) {
    (*query)["InstanceChargePeriodUnit"] = *request->instanceChargePeriodUnit;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceChargePeriod)) {
    (*query)["InstanceChargePeriod"] = *request->instanceChargePeriod;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRenew)) {
    (*query)["AutoRenew"] = *request->autoRenew;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->autoRenewPeriod)) {
    (*query)["AutoRenewPeriod"] = *request->autoRenewPeriod;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ScaleoutApplicationWithNewInstancesResponse(doROARequest(make_shared<string>("ScaleoutApplicationWithNewInstances"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/scaling/scale_out")), make_shared<string>("json"), req, runtime));
}

StartApplicationResponse Alibabacloud_Edas20170801::Client::startApplication(shared_ptr<StartApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startApplicationWithOptions(request, headers, runtime);
}

StartApplicationResponse Alibabacloud_Edas20170801::Client::startApplicationWithOptions(shared_ptr<StartApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eccInfo)) {
    (*query)["EccInfo"] = *request->eccInfo;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return StartApplicationResponse(doROARequest(make_shared<string>("StartApplication"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/changeorder/co_start")), make_shared<string>("json"), req, runtime));
}

StartK8sApplicationResponse Alibabacloud_Edas20170801::Client::startK8sApplication(shared_ptr<StartK8sApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startK8sApplicationWithOptions(request, headers, runtime);
}

StartK8sApplicationResponse Alibabacloud_Edas20170801::Client::startK8sApplicationWithOptions(shared_ptr<StartK8sApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->replicas)) {
    (*query)["Replicas"] = *request->replicas;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    (*query)["Timeout"] = *request->timeout;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return StartK8sApplicationResponse(doROARequest(make_shared<string>("StartK8sApplication"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/k8s/acs/start_k8s_app")), make_shared<string>("json"), req, runtime));
}

StopApplicationResponse Alibabacloud_Edas20170801::Client::stopApplication(shared_ptr<StopApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopApplicationWithOptions(request, headers, runtime);
}

StopApplicationResponse Alibabacloud_Edas20170801::Client::stopApplicationWithOptions(shared_ptr<StopApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eccInfo)) {
    (*query)["EccInfo"] = *request->eccInfo;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return StopApplicationResponse(doROARequest(make_shared<string>("StopApplication"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/changeorder/co_stop")), make_shared<string>("json"), req, runtime));
}

StopK8sApplicationResponse Alibabacloud_Edas20170801::Client::stopK8sApplication(shared_ptr<StopK8sApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopK8sApplicationWithOptions(request, headers, runtime);
}

StopK8sApplicationResponse Alibabacloud_Edas20170801::Client::stopK8sApplicationWithOptions(shared_ptr<StopK8sApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    (*query)["Timeout"] = *request->timeout;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return StopK8sApplicationResponse(doROARequest(make_shared<string>("StopK8sApplication"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/k8s/acs/stop_k8s_app")), make_shared<string>("json"), req, runtime));
}

SwitchAdvancedMonitoringResponse Alibabacloud_Edas20170801::Client::switchAdvancedMonitoring(shared_ptr<SwitchAdvancedMonitoringRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return switchAdvancedMonitoringWithOptions(request, headers, runtime);
}

SwitchAdvancedMonitoringResponse Alibabacloud_Edas20170801::Client::switchAdvancedMonitoringWithOptions(shared_ptr<SwitchAdvancedMonitoringRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableAdvancedMonitoring)) {
    (*query)["EnableAdvancedMonitoring"] = *request->enableAdvancedMonitoring;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return SwitchAdvancedMonitoringResponse(doROARequest(make_shared<string>("SwitchAdvancedMonitoring"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/monitor/advancedMonitorInfo")), make_shared<string>("json"), req, runtime));
}

SynchronizeResourceResponse Alibabacloud_Edas20170801::Client::synchronizeResource(shared_ptr<SynchronizeResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return synchronizeResourceWithOptions(request, headers, runtime);
}

SynchronizeResourceResponse Alibabacloud_Edas20170801::Client::synchronizeResourceWithOptions(shared_ptr<SynchronizeResourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    (*query)["Type"] = *request->type;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIds)) {
    (*query)["ResourceIds"] = *request->resourceIds;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return SynchronizeResourceResponse(doROARequest(make_shared<string>("SynchronizeResource"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/resource/pop_sync_resource")), make_shared<string>("json"), req, runtime));
}

TagResourcesResponse Alibabacloud_Edas20170801::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return tagResourcesWithOptions(request, headers, runtime);
}

TagResourcesResponse Alibabacloud_Edas20170801::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    (*query)["ResourceType"] = *request->resourceType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIds)) {
    (*query)["ResourceIds"] = *request->resourceIds;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    (*query)["Tags"] = *request->tags;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceRegionId)) {
    (*query)["ResourceRegionId"] = *request->resourceRegionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return TagResourcesResponse(doROARequest(make_shared<string>("TagResources"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/tag/tags")), make_shared<string>("json"), req, runtime));
}

TransformClusterMemberResponse Alibabacloud_Edas20170801::Client::transformClusterMember(shared_ptr<TransformClusterMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return transformClusterMemberWithOptions(request, headers, runtime);
}

TransformClusterMemberResponse Alibabacloud_Edas20170801::Client::transformClusterMemberWithOptions(shared_ptr<TransformClusterMemberRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIds)) {
    (*query)["InstanceIds"] = *request->instanceIds;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetClusterId)) {
    (*query)["TargetClusterId"] = *request->targetClusterId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    (*query)["Password"] = *request->password;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return TransformClusterMemberResponse(doROARequest(make_shared<string>("TransformClusterMember"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/resource/transform_cluster_member")), make_shared<string>("json"), req, runtime));
}

UnbindK8sSlbResponse Alibabacloud_Edas20170801::Client::unbindK8sSlb(shared_ptr<UnbindK8sSlbRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return unbindK8sSlbWithOptions(request, headers, runtime);
}

UnbindK8sSlbResponse Alibabacloud_Edas20170801::Client::unbindK8sSlbWithOptions(shared_ptr<UnbindK8sSlbRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    (*query)["ClusterId"] = *request->clusterId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    (*query)["Type"] = *request->type;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slbName)) {
    (*query)["SlbName"] = *request->slbName;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UnbindK8sSlbResponse(doROARequest(make_shared<string>("UnbindK8sSlb"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/k8s/acs/k8s_slb_binding")), make_shared<string>("json"), req, runtime));
}

UnbindSlbResponse Alibabacloud_Edas20170801::Client::unbindSlb(shared_ptr<UnbindSlbRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return unbindSlbWithOptions(request, headers, runtime);
}

UnbindSlbResponse Alibabacloud_Edas20170801::Client::unbindSlbWithOptions(shared_ptr<UnbindSlbRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slbId)) {
    (*query)["SlbId"] = *request->slbId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    (*query)["Type"] = *request->type;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UnbindSlbResponse(doROARequest(make_shared<string>("UnbindSlb"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/app/unbind_slb_json")), make_shared<string>("json"), req, runtime));
}

UntagResourcesResponse Alibabacloud_Edas20170801::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return untagResourcesWithOptions(request, headers, runtime);
}

UntagResourcesResponse Alibabacloud_Edas20170801::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceRegionId)) {
    (*query)["ResourceRegionId"] = *request->resourceRegionId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    (*query)["ResourceType"] = *request->resourceType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIds)) {
    (*query)["ResourceIds"] = *request->resourceIds;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKeys)) {
    (*query)["TagKeys"] = *request->tagKeys;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->deleteAll)) {
    (*query)["DeleteAll"] = *request->deleteAll;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UntagResourcesResponse(doROARequest(make_shared<string>("UntagResources"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/tag/tags")), make_shared<string>("json"), req, runtime));
}

UpdateAccountInfoResponse Alibabacloud_Edas20170801::Client::updateAccountInfo(shared_ptr<UpdateAccountInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateAccountInfoWithOptions(request, headers, runtime);
}

UpdateAccountInfoResponse Alibabacloud_Edas20170801::Client::updateAccountInfoWithOptions(shared_ptr<UpdateAccountInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*query)["Name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->telephone)) {
    (*query)["Telephone"] = *request->telephone;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    (*query)["Email"] = *request->email;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateAccountInfoResponse(doROARequest(make_shared<string>("UpdateAccountInfo"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/account/edit_account_info")), make_shared<string>("json"), req, runtime));
}

UpdateApplicationBaseInfoResponse Alibabacloud_Edas20170801::Client::updateApplicationBaseInfo(shared_ptr<UpdateApplicationBaseInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateApplicationBaseInfoWithOptions(request, headers, runtime);
}

UpdateApplicationBaseInfoResponse Alibabacloud_Edas20170801::Client::updateApplicationBaseInfoWithOptions(shared_ptr<UpdateApplicationBaseInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    (*query)["AppName"] = *request->appName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desc)) {
    (*query)["Desc"] = *request->desc;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->owner)) {
    (*query)["Owner"] = *request->owner;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateApplicationBaseInfoResponse(doROARequest(make_shared<string>("UpdateApplicationBaseInfo"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/app/update_app_info")), make_shared<string>("json"), req, runtime));
}

UpdateContainerResponse Alibabacloud_Edas20170801::Client::updateContainer(shared_ptr<UpdateContainerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateContainerWithOptions(request, headers, runtime);
}

UpdateContainerResponse Alibabacloud_Edas20170801::Client::updateContainerWithOptions(shared_ptr<UpdateContainerRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->buildPackId)) {
    (*query)["BuildPackId"] = *request->buildPackId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateContainerResponse(doROARequest(make_shared<string>("UpdateContainer"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/changeorder/co_update_container")), make_shared<string>("json"), req, runtime));
}

UpdateContainerConfigurationResponse Alibabacloud_Edas20170801::Client::updateContainerConfiguration(shared_ptr<UpdateContainerConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateContainerConfigurationWithOptions(request, headers, runtime);
}

UpdateContainerConfigurationResponse Alibabacloud_Edas20170801::Client::updateContainerConfigurationWithOptions(shared_ptr<UpdateContainerConfigurationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    (*query)["GroupId"] = *request->groupId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contextPath)) {
    (*query)["ContextPath"] = *request->contextPath;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->httpPort)) {
    (*query)["HttpPort"] = *request->httpPort;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxThreads)) {
    (*query)["MaxThreads"] = *request->maxThreads;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->URIEncoding)) {
    (*query)["URIEncoding"] = *request->URIEncoding;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useBodyEncoding)) {
    (*query)["UseBodyEncoding"] = *request->useBodyEncoding;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateContainerConfigurationResponse(doROARequest(make_shared<string>("UpdateContainerConfiguration"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/app/container_config")), make_shared<string>("json"), req, runtime));
}

UpdateDegradeControlResponse Alibabacloud_Edas20170801::Client::updateDegradeControl(shared_ptr<UpdateDegradeControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateDegradeControlWithOptions(request, headers, runtime);
}

UpdateDegradeControlResponse Alibabacloud_Edas20170801::Client::updateDegradeControlWithOptions(shared_ptr<UpdateDegradeControlRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    (*query)["RuleId"] = *request->ruleId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->duration)) {
    (*query)["Duration"] = *request->duration;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->methodName)) {
    (*query)["MethodName"] = *request->methodName;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rtThreshold)) {
    (*query)["RtThreshold"] = *request->rtThreshold;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    (*query)["ServiceName"] = *request->serviceName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->urlVar)) {
    (*query)["UrlVar"] = *request->urlVar;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleType)) {
    (*query)["RuleType"] = *request->ruleType;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateDegradeControlResponse(doROARequest(make_shared<string>("UpdateDegradeControl"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/degradeControl")), make_shared<string>("json"), req, runtime));
}

UpdateFlowControlResponse Alibabacloud_Edas20170801::Client::updateFlowControl(shared_ptr<UpdateFlowControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateFlowControlWithOptions(request, headers, runtime);
}

UpdateFlowControlResponse Alibabacloud_Edas20170801::Client::updateFlowControlWithOptions(shared_ptr<UpdateFlowControlRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    (*query)["RuleId"] = *request->ruleId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerAppId)) {
    (*query)["ConsumerAppId"] = *request->consumerAppId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->granularity)) {
    (*query)["Granularity"] = *request->granularity;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->methodName)) {
    (*query)["MethodName"] = *request->methodName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleType)) {
    (*query)["RuleType"] = *request->ruleType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    (*query)["ServiceName"] = *request->serviceName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->strategy)) {
    (*query)["Strategy"] = *request->strategy;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->threshold)) {
    (*query)["Threshold"] = *request->threshold;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->urlVar)) {
    (*query)["UrlVar"] = *request->urlVar;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateFlowControlResponse(doROARequest(make_shared<string>("UpdateFlowControl"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/flowControl")), make_shared<string>("json"), req, runtime));
}

UpdateHealthCheckUrlResponse Alibabacloud_Edas20170801::Client::updateHealthCheckUrl(shared_ptr<UpdateHealthCheckUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateHealthCheckUrlWithOptions(request, headers, runtime);
}

UpdateHealthCheckUrlResponse Alibabacloud_Edas20170801::Client::updateHealthCheckUrlWithOptions(shared_ptr<UpdateHealthCheckUrlRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hcURL)) {
    (*query)["hcURL"] = *request->hcURL;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateHealthCheckUrlResponse(doROARequest(make_shared<string>("UpdateHealthCheckUrl"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/app/modify_hc_url")), make_shared<string>("json"), req, runtime));
}

UpdateHookConfigurationResponse Alibabacloud_Edas20170801::Client::updateHookConfiguration(shared_ptr<UpdateHookConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateHookConfigurationWithOptions(request, headers, runtime);
}

UpdateHookConfigurationResponse Alibabacloud_Edas20170801::Client::updateHookConfigurationWithOptions(shared_ptr<UpdateHookConfigurationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    (*query)["GroupId"] = *request->groupId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hooks)) {
    (*query)["Hooks"] = *request->hooks;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateHookConfigurationResponse(doROARequest(make_shared<string>("UpdateHookConfiguration"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/app/config_app_hook_json")), make_shared<string>("json"), req, runtime));
}

UpdateJvmConfigurationResponse Alibabacloud_Edas20170801::Client::updateJvmConfiguration(shared_ptr<UpdateJvmConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateJvmConfigurationWithOptions(request, headers, runtime);
}

UpdateJvmConfigurationResponse Alibabacloud_Edas20170801::Client::updateJvmConfigurationWithOptions(shared_ptr<UpdateJvmConfigurationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    (*query)["GroupId"] = *request->groupId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->options)) {
    (*query)["Options"] = *request->options;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minHeapSize)) {
    (*query)["MinHeapSize"] = *request->minHeapSize;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxPermSize)) {
    (*query)["MaxPermSize"] = *request->maxPermSize;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxHeapSize)) {
    (*query)["MaxHeapSize"] = *request->maxHeapSize;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateJvmConfigurationResponse(doROARequest(make_shared<string>("UpdateJvmConfiguration"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/app/app_jvm_config")), make_shared<string>("json"), req, runtime));
}

UpdateK8sApplicationBaseInfoResponse Alibabacloud_Edas20170801::Client::updateK8sApplicationBaseInfo(shared_ptr<UpdateK8sApplicationBaseInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateK8sApplicationBaseInfoWithOptions(request, headers, runtime);
}

UpdateK8sApplicationBaseInfoResponse Alibabacloud_Edas20170801::Client::updateK8sApplicationBaseInfoWithOptions(shared_ptr<UpdateK8sApplicationBaseInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    (*query)["Description"] = *request->description;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->owner)) {
    (*query)["Owner"] = *request->owner;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    (*query)["PhoneNumber"] = *request->phoneNumber;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    (*query)["Email"] = *request->email;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateK8sApplicationBaseInfoResponse(doROARequest(make_shared<string>("UpdateK8sApplicationBaseInfo"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/oam/update_app_basic_info")), make_shared<string>("json"), req, runtime));
}

UpdateK8sApplicationConfigResponse Alibabacloud_Edas20170801::Client::updateK8sApplicationConfig(shared_ptr<UpdateK8sApplicationConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateK8sApplicationConfigWithOptions(request, headers, runtime);
}

UpdateK8sApplicationConfigResponse Alibabacloud_Edas20170801::Client::updateK8sApplicationConfigWithOptions(shared_ptr<UpdateK8sApplicationConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    (*query)["ClusterId"] = *request->clusterId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cpuLimit)) {
    (*query)["CpuLimit"] = *request->cpuLimit;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memoryLimit)) {
    (*query)["MemoryLimit"] = *request->memoryLimit;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mcpuLimit)) {
    (*query)["McpuLimit"] = *request->mcpuLimit;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cpuRequest)) {
    (*query)["CpuRequest"] = *request->cpuRequest;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mcpuRequest)) {
    (*query)["McpuRequest"] = *request->mcpuRequest;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memoryRequest)) {
    (*query)["MemoryRequest"] = *request->memoryRequest;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    (*query)["Timeout"] = *request->timeout;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateK8sApplicationConfigResponse(doROARequest(make_shared<string>("UpdateK8sApplicationConfig"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/k8s/acs/k8s_app_configuration")), make_shared<string>("json"), req, runtime));
}

UpdateK8sIngressRuleResponse Alibabacloud_Edas20170801::Client::updateK8sIngressRule(shared_ptr<UpdateK8sIngressRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateK8sIngressRuleWithOptions(request, headers, runtime);
}

UpdateK8sIngressRuleResponse Alibabacloud_Edas20170801::Client::updateK8sIngressRuleWithOptions(shared_ptr<UpdateK8sIngressRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    (*query)["ClusterId"] = *request->clusterId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    (*query)["Namespace_"] = *request->namespace_;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*query)["Name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rules)) {
    (*query)["Rules"] = *request->rules;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateK8sIngressRuleResponse(doROARequest(make_shared<string>("UpdateK8sIngressRule"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/k8s/acs/k8s_ingress")), make_shared<string>("json"), req, runtime));
}

UpdateK8sResourceResponse Alibabacloud_Edas20170801::Client::updateK8sResource(shared_ptr<UpdateK8sResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateK8sResourceWithOptions(request, headers, runtime);
}

UpdateK8sResourceResponse Alibabacloud_Edas20170801::Client::updateK8sResourceWithOptions(shared_ptr<UpdateK8sResourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    (*body)["ClusterId"] = *request->clusterId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    (*body)["Namespace_"] = *request->namespace_;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceContent)) {
    (*body)["ResourceContent"] = *request->resourceContent;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return UpdateK8sResourceResponse(doROARequestWithForm(make_shared<string>("UpdateK8sResource"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/oam/update_k8s_resource_config")), make_shared<string>("json"), req, runtime));
}

UpdateK8sServiceResponse Alibabacloud_Edas20170801::Client::updateK8sService(shared_ptr<UpdateK8sServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateK8sServiceWithOptions(request, headers, runtime);
}

UpdateK8sServiceResponse Alibabacloud_Edas20170801::Client::updateK8sServiceWithOptions(shared_ptr<UpdateK8sServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*query)["Name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    (*query)["Type"] = *request->type;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->servicePorts)) {
    (*query)["ServicePorts"] = *request->servicePorts;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateK8sServiceResponse(doROARequest(make_shared<string>("UpdateK8sService"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/k8s/acs/k8s_service")), make_shared<string>("json"), req, runtime));
}

UpdateK8sSlbResponse Alibabacloud_Edas20170801::Client::updateK8sSlb(shared_ptr<UpdateK8sSlbRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateK8sSlbWithOptions(request, headers, runtime);
}

UpdateK8sSlbResponse Alibabacloud_Edas20170801::Client::updateK8sSlbWithOptions(shared_ptr<UpdateK8sSlbRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    (*query)["ClusterId"] = *request->clusterId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    (*query)["Type"] = *request->type;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slbProtocol)) {
    (*query)["SlbProtocol"] = *request->slbProtocol;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetPort)) {
    (*query)["TargetPort"] = *request->targetPort;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->port)) {
    (*query)["Port"] = *request->port;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->servicePortInfos)) {
    (*query)["ServicePortInfos"] = *request->servicePortInfos;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specification)) {
    (*query)["Specification"] = *request->specification;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduler)) {
    (*query)["Scheduler"] = *request->scheduler;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slbName)) {
    (*query)["SlbName"] = *request->slbName;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateK8sSlbResponse(doROARequest(make_shared<string>("UpdateK8sSlb"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/k8s/acs/k8s_slb_binding")), make_shared<string>("json"), req, runtime));
}

UpdateMockRuleResponse Alibabacloud_Edas20170801::Client::updateMockRule(shared_ptr<UpdateMockRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateMockRuleWithOptions(request, headers, runtime);
}

UpdateMockRuleResponse Alibabacloud_Edas20170801::Client::updateMockRuleWithOptions(shared_ptr<UpdateMockRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*query)["Name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    (*query)["Region"] = *request->region;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraJson)) {
    (*query)["ExtraJson"] = *request->extraJson;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scMockItemJson)) {
    (*query)["ScMockItemJson"] = *request->scMockItemJson;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dubboMockItemJson)) {
    (*query)["DubboMockItemJson"] = *request->dubboMockItemJson;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    (*query)["Id"] = *request->id;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateMockRuleResponse(doROARequest(make_shared<string>("UpdateMockRule"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/sp/api/mock/updateMockRule")), make_shared<string>("json"), req, runtime));
}

UpdateRoleResponse Alibabacloud_Edas20170801::Client::updateRole(shared_ptr<UpdateRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateRoleWithOptions(request, headers, runtime);
}

UpdateRoleResponse Alibabacloud_Edas20170801::Client::updateRoleWithOptions(shared_ptr<UpdateRoleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->roleId)) {
    (*query)["RoleId"] = *request->roleId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->actionData)) {
    (*query)["ActionData"] = *request->actionData;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateRoleResponse(doROARequest(make_shared<string>("UpdateRole"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/account/edit_role")), make_shared<string>("json"), req, runtime));
}

UpdateSlsLogStoreResponse Alibabacloud_Edas20170801::Client::updateSlsLogStore(shared_ptr<UpdateSlsLogStoreRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateSlsLogStoreWithOptions(request, headers, runtime);
}

UpdateSlsLogStoreResponse Alibabacloud_Edas20170801::Client::updateSlsLogStoreWithOptions(shared_ptr<UpdateSlsLogStoreRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*body)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configs)) {
    (*body)["Configs"] = *request->configs;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return UpdateSlsLogStoreResponse(doROARequestWithForm(make_shared<string>("UpdateSlsLogStore"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/k8s/sls/update_sls_log_store")), make_shared<string>("json"), req, runtime));
}

UpdateSwimmingLaneResponse Alibabacloud_Edas20170801::Client::updateSwimmingLane(shared_ptr<UpdateSwimmingLaneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateSwimmingLaneWithOptions(request, headers, runtime);
}

UpdateSwimmingLaneResponse Alibabacloud_Edas20170801::Client::updateSwimmingLaneWithOptions(shared_ptr<UpdateSwimmingLaneRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->laneId)) {
    (*query)["LaneId"] = *request->laneId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*query)["Name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableRules)) {
    (*query)["EnableRules"] = *request->enableRules;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appInfos)) {
    (*query)["AppInfos"] = *request->appInfos;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entryRules)) {
    (*query)["EntryRules"] = *request->entryRules;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateSwimmingLaneResponse(doROARequest(make_shared<string>("UpdateSwimmingLane"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/trafficmgnt/swimming_lanes")), make_shared<string>("json"), req, runtime));
}

UpdateSwimmingLaneGroupResponse Alibabacloud_Edas20170801::Client::updateSwimmingLaneGroup(shared_ptr<UpdateSwimmingLaneGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateSwimmingLaneGroupWithOptions(request, headers, runtime);
}

UpdateSwimmingLaneGroupResponse Alibabacloud_Edas20170801::Client::updateSwimmingLaneGroupWithOptions(shared_ptr<UpdateSwimmingLaneGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->groupId)) {
    (*query)["GroupId"] = *request->groupId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*query)["Name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entryApp)) {
    (*query)["EntryApp"] = *request->entryApp;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appIds)) {
    (*query)["AppIds"] = *request->appIds;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateSwimmingLaneGroupResponse(doROARequest(make_shared<string>("UpdateSwimmingLaneGroup"), make_shared<string>("2017-08-01"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/pop/v5/trafficmgnt/swimming_lane_groups")), make_shared<string>("json"), req, runtime));
}

