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
  _signatureAlgorithm = make_shared<string>("v2");
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
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
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
    query->insert(pair<string, string>("ChangeOrderId", *request->changeOrderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AbortAndRollbackChangeOrder"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/changeorder/change_order_abort_and_rollback"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AbortAndRollbackChangeOrderResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("ChangeOrderId", *request->changeOrderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AbortChangeOrder"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/changeorder/change_order_abort"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AbortChangeOrderResponse(callApi(params, req, runtime));
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
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    body->insert(pair<string, string>("Path", *request->path));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddLogPath"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/log/popListLogDirs"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddLogPathResponse(callApi(params, req, runtime));
}

AddMockRuleResponse Alibabacloud_Edas20170801::Client::addMockRule(shared_ptr<AddMockRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addMockRuleWithOptions(request, headers, runtime);
}

AddMockRuleResponse Alibabacloud_Edas20170801::Client::addMockRuleWithOptions(shared_ptr<AddMockRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerAppsJson)) {
    query->insert(pair<string, string>("ConsumerAppsJson", *request->consumerAppsJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dubboMockItemJson)) {
    query->insert(pair<string, string>("DubboMockItemJson", *request->dubboMockItemJson));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enable)) {
    query->insert(pair<string, bool>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraJson)) {
    query->insert(pair<string, string>("ExtraJson", *request->extraJson));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mockType)) {
    query->insert(pair<string, long>("MockType", *request->mockType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->providerAppId)) {
    query->insert(pair<string, string>("ProviderAppId", *request->providerAppId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->providerAppName)) {
    query->insert(pair<string, string>("ProviderAppName", *request->providerAppName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scMockItemJson)) {
    query->insert(pair<string, string>("ScMockItemJson", *request->scMockItemJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddMockRule"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/sp/api/mock/addMockRule"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddMockRuleResponse(callApi(params, req, runtime));
}

AuthorizeApplicationResponse Alibabacloud_Edas20170801::Client::authorizeApplication(shared_ptr<AuthorizeApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return authorizeApplicationWithOptions(request, headers, runtime);
}

AuthorizeApplicationResponse Alibabacloud_Edas20170801::Client::authorizeApplicationWithOptions(shared_ptr<AuthorizeApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appIds)) {
    query->insert(pair<string, string>("AppIds", *request->appIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetUserId)) {
    query->insert(pair<string, string>("TargetUserId", *request->targetUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AuthorizeApplication"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/account/authorize_app"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AuthorizeApplicationResponse(callApi(params, req, runtime));
}

AuthorizeResourceGroupResponse Alibabacloud_Edas20170801::Client::authorizeResourceGroup(shared_ptr<AuthorizeResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return authorizeResourceGroupWithOptions(request, headers, runtime);
}

AuthorizeResourceGroupResponse Alibabacloud_Edas20170801::Client::authorizeResourceGroupWithOptions(shared_ptr<AuthorizeResourceGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupIds)) {
    query->insert(pair<string, string>("ResourceGroupIds", *request->resourceGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetUserId)) {
    query->insert(pair<string, string>("TargetUserId", *request->targetUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AuthorizeResourceGroup"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/account/authorize_res_group"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AuthorizeResourceGroupResponse(callApi(params, req, runtime));
}

AuthorizeRoleResponse Alibabacloud_Edas20170801::Client::authorizeRole(shared_ptr<AuthorizeRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return authorizeRoleWithOptions(request, headers, runtime);
}

AuthorizeRoleResponse Alibabacloud_Edas20170801::Client::authorizeRoleWithOptions(shared_ptr<AuthorizeRoleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->roleIds)) {
    query->insert(pair<string, string>("RoleIds", *request->roleIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetUserId)) {
    query->insert(pair<string, string>("TargetUserId", *request->targetUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AuthorizeRole"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/account/authorize_role"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AuthorizeRoleResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deployGroupId)) {
    query->insert(pair<string, string>("DeployGroupId", *request->deployGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerHealthCheckUrl)) {
    query->insert(pair<string, string>("ListenerHealthCheckUrl", *request->listenerHealthCheckUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerProtocol)) {
    query->insert(pair<string, string>("ListenerProtocol", *request->listenerProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slbId)) {
    query->insert(pair<string, string>("SlbId", *request->slbId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VForwardingUrlRule)) {
    query->insert(pair<string, string>("VForwardingUrlRule", *request->VForwardingUrlRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VServerGroupId)) {
    query->insert(pair<string, string>("VServerGroupId", *request->VServerGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VServerGroupName)) {
    query->insert(pair<string, string>("VServerGroupName", *request->VServerGroupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindEcsSlb"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/app/slb/bind_slb"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindEcsSlbResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->port)) {
    query->insert(pair<string, string>("Port", *request->port));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduler)) {
    query->insert(pair<string, string>("Scheduler", *request->scheduler));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->servicePortInfos)) {
    query->insert(pair<string, string>("ServicePortInfos", *request->servicePortInfos));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slbId)) {
    query->insert(pair<string, string>("SlbId", *request->slbId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slbProtocol)) {
    query->insert(pair<string, string>("SlbProtocol", *request->slbProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specification)) {
    query->insert(pair<string, string>("Specification", *request->specification));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetPort)) {
    query->insert(pair<string, string>("TargetPort", *request->targetPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindK8sSlb"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/k8s/acs/k8s_slb_binding"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindK8sSlbResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slbId)) {
    query->insert(pair<string, string>("SlbId", *request->slbId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slbIp)) {
    query->insert(pair<string, string>("SlbIp", *request->slbIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VServerGroupId)) {
    query->insert(pair<string, string>("VServerGroupId", *request->VServerGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindSlb"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/app/bind_slb_json"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindSlbResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eccInfo)) {
    query->insert(pair<string, string>("EccInfo", *request->eccInfo));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->forceStatus)) {
    query->insert(pair<string, bool>("ForceStatus", *request->forceStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeDeployGroup"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/changeorder/co_change_group"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeDeployGroupResponse(callApi(params, req, runtime));
}

ContinuePipelineResponse Alibabacloud_Edas20170801::Client::continuePipeline(shared_ptr<ContinuePipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return continuePipelineWithOptions(request, headers, runtime);
}

ContinuePipelineResponse Alibabacloud_Edas20170801::Client::continuePipelineWithOptions(shared_ptr<ContinuePipelineRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->confirm)) {
    query->insert(pair<string, bool>("Confirm", *request->confirm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineId)) {
    query->insert(pair<string, string>("PipelineId", *request->pipelineId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ContinuePipeline"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/changeorder/pipeline_batch_confirm"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ContinuePipelineResponse(callApi(params, req, runtime));
}

ConvertK8sResourceResponse Alibabacloud_Edas20170801::Client::convertK8sResource(shared_ptr<ConvertK8sResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return convertK8sResourceWithOptions(request, headers, runtime);
}

ConvertK8sResourceResponse Alibabacloud_Edas20170801::Client::convertK8sResourceWithOptions(shared_ptr<ConvertK8sResourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceName)) {
    query->insert(pair<string, string>("ResourceName", *request->resourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConvertK8sResource"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/oam/k8s_resource_convert"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConvertK8sResourceResponse(callApi(params, req, runtime));
}

CreateApplicationScalingRuleResponse Alibabacloud_Edas20170801::Client::createApplicationScalingRule(shared_ptr<CreateApplicationScalingRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createApplicationScalingRuleWithOptions(request, headers, runtime);
}

CreateApplicationScalingRuleResponse Alibabacloud_Edas20170801::Client::createApplicationScalingRuleWithOptions(shared_ptr<CreateApplicationScalingRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->scalingRuleEnable)) {
    query->insert(pair<string, bool>("ScalingRuleEnable", *request->scalingRuleEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleMetric)) {
    query->insert(pair<string, string>("ScalingRuleMetric", *request->scalingRuleMetric));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleName)) {
    query->insert(pair<string, string>("ScalingRuleName", *request->scalingRuleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleTimer)) {
    query->insert(pair<string, string>("ScalingRuleTimer", *request->scalingRuleTimer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleTrigger)) {
    query->insert(pair<string, string>("ScalingRuleTrigger", *request->scalingRuleTrigger));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleType)) {
    query->insert(pair<string, string>("ScalingRuleType", *request->scalingRuleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateApplicationScalingRule"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/eam/scale/application_scaling_rule"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateApplicationScalingRuleResponse(callApi(params, req, runtime));
}

CreateConfigTemplateResponse Alibabacloud_Edas20170801::Client::createConfigTemplate(shared_ptr<CreateConfigTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createConfigTemplateWithOptions(request, headers, runtime);
}

CreateConfigTemplateResponse Alibabacloud_Edas20170801::Client::createConfigTemplateWithOptions(shared_ptr<CreateConfigTemplateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->format)) {
    body->insert(pair<string, string>("Format", *request->format));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateConfigTemplate"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/config_template"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateConfigTemplateResponse(callApi(params, req, runtime));
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
    body->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateIDCImportCommand"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/create_idc_import_command"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateIDCImportCommandResponse(callApi(params, req, runtime));
}

CreateK8sConfigMapResponse Alibabacloud_Edas20170801::Client::createK8sConfigMap(shared_ptr<CreateK8sConfigMapRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createK8sConfigMapWithOptions(request, headers, runtime);
}

CreateK8sConfigMapResponse Alibabacloud_Edas20170801::Client::createK8sConfigMapWithOptions(shared_ptr<CreateK8sConfigMapRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    body->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->data)) {
    body->insert(pair<string, map<string, boost::any>>("Data", *request->data));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    body->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateK8sConfigMap"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/k8s/acs/k8s_config_map"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateK8sConfigMapResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->ingressConf)) {
    query->insert(pair<string, map<string, boost::any>>("IngressConf", *request->ingressConf));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateK8sIngressRule"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/k8s/acs/k8s_ingress"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateK8sIngressRuleResponse(callApi(params, req, runtime));
}

CreateK8sSecretResponse Alibabacloud_Edas20170801::Client::createK8sSecret(shared_ptr<CreateK8sSecretRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createK8sSecretWithOptions(request, headers, runtime);
}

CreateK8sSecretResponse Alibabacloud_Edas20170801::Client::createK8sSecretWithOptions(shared_ptr<CreateK8sSecretRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->base64Encoded)) {
    body->insert(pair<string, bool>("Base64Encoded", *request->base64Encoded));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certId)) {
    body->insert(pair<string, string>("CertId", *request->certId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certRegionId)) {
    body->insert(pair<string, string>("CertRegionId", *request->certRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    body->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->data)) {
    body->insert(pair<string, string>("Data", *request->data));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    body->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateK8sSecret"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/k8s/acs/k8s_secret"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateK8sSecretResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->servicePorts)) {
    query->insert(pair<string, map<string, boost::any>>("ServicePorts", *request->servicePorts));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateK8sService"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/k8s/acs/k8s_service"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateK8sServiceResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteApplication"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/changeorder/co_delete_app"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteApplicationResponse(callApi(params, req, runtime));
}

DeleteApplicationScalingRuleResponse Alibabacloud_Edas20170801::Client::deleteApplicationScalingRule(shared_ptr<DeleteApplicationScalingRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteApplicationScalingRuleWithOptions(request, headers, runtime);
}

DeleteApplicationScalingRuleResponse Alibabacloud_Edas20170801::Client::deleteApplicationScalingRuleWithOptions(shared_ptr<DeleteApplicationScalingRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleName)) {
    query->insert(pair<string, string>("ScalingRuleName", *request->scalingRuleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteApplicationScalingRule"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/eam/scale/application_scaling_rule"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteApplicationScalingRuleResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mode)) {
    query->insert(pair<string, long>("Mode", *request->mode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCluster"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/resource/cluster"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteClusterResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterMemberId)) {
    query->insert(pair<string, string>("ClusterMemberId", *request->clusterMemberId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteClusterMember"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/resource/cluster_member"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteClusterMemberResponse(callApi(params, req, runtime));
}

DeleteConfigTemplateResponse Alibabacloud_Edas20170801::Client::deleteConfigTemplate(shared_ptr<DeleteConfigTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteConfigTemplateWithOptions(request, headers, runtime);
}

DeleteConfigTemplateResponse Alibabacloud_Edas20170801::Client::deleteConfigTemplateWithOptions(shared_ptr<DeleteConfigTemplateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteConfigTemplate"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/config_template"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteConfigTemplateResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDeployGroup"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/deploy_group"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDeployGroupResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("EcuId", *request->ecuId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEcu"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/resource/delete_ecu"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEcuResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteK8sApplication"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/k8s/acs/k8s_apps"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteK8sApplicationResponse(callApi(params, req, runtime));
}

DeleteK8sConfigMapResponse Alibabacloud_Edas20170801::Client::deleteK8sConfigMap(shared_ptr<DeleteK8sConfigMapRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteK8sConfigMapWithOptions(request, headers, runtime);
}

DeleteK8sConfigMapResponse Alibabacloud_Edas20170801::Client::deleteK8sConfigMapWithOptions(shared_ptr<DeleteK8sConfigMapRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteK8sConfigMap"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/k8s/acs/k8s_config_map"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteK8sConfigMapResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteK8sIngressRule"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/k8s/acs/k8s_ingress"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteK8sIngressRuleResponse(callApi(params, req, runtime));
}

DeleteK8sSecretResponse Alibabacloud_Edas20170801::Client::deleteK8sSecret(shared_ptr<DeleteK8sSecretRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteK8sSecretWithOptions(request, headers, runtime);
}

DeleteK8sSecretResponse Alibabacloud_Edas20170801::Client::deleteK8sSecretWithOptions(shared_ptr<DeleteK8sSecretRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteK8sSecret"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/k8s/acs/k8s_secret"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteK8sSecretResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteK8sService"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/k8s/acs/k8s_service"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteK8sServiceResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    query->insert(pair<string, string>("Path", *request->path));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLogPath"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/log/popListLogDirs"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLogPathResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, long>("RoleId", *request->roleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRole"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/account/delete_role"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRoleResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteServiceGroup"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/service/serviceGroups"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteServiceGroupResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionTag)) {
    query->insert(pair<string, string>("RegionTag", *request->regionTag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUserDefineRegion"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/user_region_def"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteUserDefineRegionResponse(callApi(params, req, runtime));
}

DeployApplicationResponse Alibabacloud_Edas20170801::Client::deployApplication(shared_ptr<DeployApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deployApplicationWithOptions(request, headers, runtime);
}

DeployApplicationResponse Alibabacloud_Edas20170801::Client::deployApplicationWithOptions(shared_ptr<DeployApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appEnv)) {
    query->insert(pair<string, string>("AppEnv", *request->appEnv));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->batch)) {
    query->insert(pair<string, long>("Batch", *request->batch));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->batchWaitTime)) {
    query->insert(pair<string, long>("BatchWaitTime", *request->batchWaitTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->buildPackId)) {
    query->insert(pair<string, long>("BuildPackId", *request->buildPackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->componentIds)) {
    query->insert(pair<string, string>("ComponentIds", *request->componentIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deployType)) {
    query->insert(pair<string, string>("DeployType", *request->deployType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desc)) {
    query->insert(pair<string, string>("Desc", *request->desc));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->gray)) {
    query->insert(pair<string, bool>("Gray", *request->gray));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUrl)) {
    query->insert(pair<string, string>("ImageUrl", *request->imageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageVersion)) {
    query->insert(pair<string, string>("PackageVersion", *request->packageVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->releaseType)) {
    query->insert(pair<string, long>("ReleaseType", *request->releaseType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trafficControlStrategy)) {
    query->insert(pair<string, string>("TrafficControlStrategy", *request->trafficControlStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->warUrl)) {
    query->insert(pair<string, string>("WarUrl", *request->warUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeployApplication"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/changeorder/co_deploy"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeployApplicationResponse(callApi(params, req, runtime));
}

DeployK8sApplicationResponse Alibabacloud_Edas20170801::Client::deployK8sApplication(shared_ptr<DeployK8sApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deployK8sApplicationWithOptions(request, headers, runtime);
}

DeployK8sApplicationResponse Alibabacloud_Edas20170801::Client::deployK8sApplicationWithOptions(shared_ptr<DeployK8sApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->annotations)) {
    query->insert(pair<string, string>("Annotations", *request->annotations));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->args)) {
    query->insert(pair<string, string>("Args", *request->args));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->batchTimeout)) {
    query->insert(pair<string, long>("BatchTimeout", *request->batchTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->batchWaitTime)) {
    query->insert(pair<string, long>("BatchWaitTime", *request->batchWaitTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buildPackId)) {
    query->insert(pair<string, string>("BuildPackId", *request->buildPackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeOrderDesc)) {
    query->insert(pair<string, string>("ChangeOrderDesc", *request->changeOrderDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->command)) {
    query->insert(pair<string, string>("Command", *request->command));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configMountDescs)) {
    query->insert(pair<string, string>("ConfigMountDescs", *request->configMountDescs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cpuLimit)) {
    query->insert(pair<string, long>("CpuLimit", *request->cpuLimit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cpuRequest)) {
    query->insert(pair<string, long>("CpuRequest", *request->cpuRequest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customAffinity)) {
    query->insert(pair<string, string>("CustomAffinity", *request->customAffinity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customTolerations)) {
    query->insert(pair<string, string>("CustomTolerations", *request->customTolerations));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deployAcrossNodes)) {
    query->insert(pair<string, string>("DeployAcrossNodes", *request->deployAcrossNodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deployAcrossZones)) {
    query->insert(pair<string, string>("DeployAcrossZones", *request->deployAcrossZones));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->edasContainerVersion)) {
    query->insert(pair<string, string>("EdasContainerVersion", *request->edasContainerVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->emptyDirs)) {
    query->insert(pair<string, string>("EmptyDirs", *request->emptyDirs));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableAhas)) {
    query->insert(pair<string, bool>("EnableAhas", *request->enableAhas));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableEmptyPushReject)) {
    query->insert(pair<string, bool>("EnableEmptyPushReject", *request->enableEmptyPushReject));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableLosslessRule)) {
    query->insert(pair<string, bool>("EnableLosslessRule", *request->enableLosslessRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envFroms)) {
    query->insert(pair<string, string>("EnvFroms", *request->envFroms));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envs)) {
    query->insert(pair<string, string>("Envs", *request->envs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->image)) {
    query->insert(pair<string, string>("Image", *request->image));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageTag)) {
    query->insert(pair<string, string>("ImageTag", *request->imageTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->JDK)) {
    query->insert(pair<string, string>("JDK", *request->JDK));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->javaStartUpConfig)) {
    query->insert(pair<string, string>("JavaStartUpConfig", *request->javaStartUpConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labels)) {
    query->insert(pair<string, string>("Labels", *request->labels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->liveness)) {
    query->insert(pair<string, string>("Liveness", *request->liveness));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->localVolume)) {
    query->insert(pair<string, string>("LocalVolume", *request->localVolume));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->losslessRuleAligned)) {
    query->insert(pair<string, bool>("LosslessRuleAligned", *request->losslessRuleAligned));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->losslessRuleDelayTime)) {
    query->insert(pair<string, long>("LosslessRuleDelayTime", *request->losslessRuleDelayTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->losslessRuleFuncType)) {
    query->insert(pair<string, long>("LosslessRuleFuncType", *request->losslessRuleFuncType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->losslessRuleRelated)) {
    query->insert(pair<string, bool>("LosslessRuleRelated", *request->losslessRuleRelated));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->losslessRuleWarmupTime)) {
    query->insert(pair<string, long>("LosslessRuleWarmupTime", *request->losslessRuleWarmupTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mcpuLimit)) {
    query->insert(pair<string, long>("McpuLimit", *request->mcpuLimit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mcpuRequest)) {
    query->insert(pair<string, long>("McpuRequest", *request->mcpuRequest));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->memoryLimit)) {
    query->insert(pair<string, long>("MemoryLimit", *request->memoryLimit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->memoryRequest)) {
    query->insert(pair<string, long>("MemoryRequest", *request->memoryRequest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mountDescs)) {
    query->insert(pair<string, string>("MountDescs", *request->mountDescs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nasId)) {
    query->insert(pair<string, string>("NasId", *request->nasId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageUrl)) {
    query->insert(pair<string, string>("PackageUrl", *request->packageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageVersion)) {
    query->insert(pair<string, string>("PackageVersion", *request->packageVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageVersionId)) {
    query->insert(pair<string, string>("PackageVersionId", *request->packageVersionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->postStart)) {
    query->insert(pair<string, string>("PostStart", *request->postStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preStop)) {
    query->insert(pair<string, string>("PreStop", *request->preStop));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pvcMountDescs)) {
    query->insert(pair<string, string>("PvcMountDescs", *request->pvcMountDescs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->readiness)) {
    query->insert(pair<string, string>("Readiness", *request->readiness));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->replicas)) {
    query->insert(pair<string, long>("Replicas", *request->replicas));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runtimeClassName)) {
    query->insert(pair<string, string>("RuntimeClassName", *request->runtimeClassName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slsConfigs)) {
    query->insert(pair<string, string>("SlsConfigs", *request->slsConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageType)) {
    query->insert(pair<string, string>("StorageType", *request->storageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trafficControlStrategy)) {
    query->insert(pair<string, string>("TrafficControlStrategy", *request->trafficControlStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateStrategy)) {
    query->insert(pair<string, string>("UpdateStrategy", *request->updateStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uriEncoding)) {
    query->insert(pair<string, string>("UriEncoding", *request->uriEncoding));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useBodyEncoding)) {
    query->insert(pair<string, bool>("UseBodyEncoding", *request->useBodyEncoding));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->volumesStr)) {
    query->insert(pair<string, string>("VolumesStr", *request->volumesStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->webContainer)) {
    query->insert(pair<string, string>("WebContainer", *request->webContainer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->webContainerConfig)) {
    query->insert(pair<string, string>("WebContainerConfig", *request->webContainerConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeployK8sApplication"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/k8s/acs/k8s_apps"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeployK8sApplicationResponse(callApi(params, req, runtime));
}

DescribeAppInstanceListResponse Alibabacloud_Edas20170801::Client::describeAppInstanceList(shared_ptr<DescribeAppInstanceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeAppInstanceListWithOptions(request, headers, runtime);
}

DescribeAppInstanceListResponse Alibabacloud_Edas20170801::Client::describeAppInstanceListWithOptions(shared_ptr<DescribeAppInstanceListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withNodeInfo)) {
    query->insert(pair<string, bool>("WithNodeInfo", *request->withNodeInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAppInstanceList"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/oam/app_instance_list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppInstanceListResponse(callApi(params, req, runtime));
}

DescribeApplicationScalingRulesResponse Alibabacloud_Edas20170801::Client::describeApplicationScalingRules(shared_ptr<DescribeApplicationScalingRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeApplicationScalingRulesWithOptions(request, headers, runtime);
}

DescribeApplicationScalingRulesResponse Alibabacloud_Edas20170801::Client::describeApplicationScalingRulesWithOptions(shared_ptr<DescribeApplicationScalingRulesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApplicationScalingRules"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/eam/scale/application_scaling_rules"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApplicationScalingRulesResponse(callApi(params, req, runtime));
}

DisableApplicationScalingRuleResponse Alibabacloud_Edas20170801::Client::disableApplicationScalingRule(shared_ptr<DisableApplicationScalingRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return disableApplicationScalingRuleWithOptions(request, headers, runtime);
}

DisableApplicationScalingRuleResponse Alibabacloud_Edas20170801::Client::disableApplicationScalingRuleWithOptions(shared_ptr<DisableApplicationScalingRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleName)) {
    query->insert(pair<string, string>("ScalingRuleName", *request->scalingRuleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableApplicationScalingRule"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/eam/scale/disable_application_scaling_rule"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableApplicationScalingRuleResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableMockRule"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/sp/api/mock/disableMockRule"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableMockRuleResponse(callApi(params, req, runtime));
}

EnableApplicationScalingRuleResponse Alibabacloud_Edas20170801::Client::enableApplicationScalingRule(shared_ptr<EnableApplicationScalingRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return enableApplicationScalingRuleWithOptions(request, headers, runtime);
}

EnableApplicationScalingRuleResponse Alibabacloud_Edas20170801::Client::enableApplicationScalingRuleWithOptions(shared_ptr<EnableApplicationScalingRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleName)) {
    query->insert(pair<string, string>("ScalingRuleName", *request->scalingRuleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableApplicationScalingRule"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/eam/scale/enable_application_scaling_rule"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableApplicationScalingRuleResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableMockRule"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/sp/api/mock/enableMockRule"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableMockRuleResponse(callApi(params, req, runtime));
}

GetAccountMockRuleResponse Alibabacloud_Edas20170801::Client::getAccountMockRule(shared_ptr<GetAccountMockRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAccountMockRuleWithOptions(request, headers, runtime);
}

GetAccountMockRuleResponse Alibabacloud_Edas20170801::Client::getAccountMockRuleWithOptions(shared_ptr<GetAccountMockRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerAppName)) {
    query->insert(pair<string, string>("ConsumerAppName", *request->consumerAppName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mockType)) {
    query->insert(pair<string, long>("MockType", *request->mockType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    query->insert(pair<string, string>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->providerAppName)) {
    query->insert(pair<string, string>("ProviderAppName", *request->providerAppName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAccountMockRule"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/sp/api/mock/getAccountMockRule"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAccountMockRuleResponse(callApi(params, req, runtime));
}

GetAppDeploymentResponse Alibabacloud_Edas20170801::Client::getAppDeployment(shared_ptr<GetAppDeploymentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAppDeploymentWithOptions(request, headers, runtime);
}

GetAppDeploymentResponse Alibabacloud_Edas20170801::Client::getAppDeploymentWithOptions(shared_ptr<GetAppDeploymentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAppDeployment"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/oam/app_deployment"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAppDeploymentResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetApplication"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/app/app_info"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetApplicationResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("ChangeOrderId", *request->changeOrderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetChangeOrderInfo"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/changeorder/change_order_info"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetChangeOrderInfoResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCluster"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/resource/cluster"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetClusterResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetContainerConfiguration"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/app/container_config"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetContainerConfigurationResponse(callApi(params, req, runtime));
}

GetJavaStartUpConfigResponse Alibabacloud_Edas20170801::Client::getJavaStartUpConfig(shared_ptr<GetJavaStartUpConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getJavaStartUpConfigWithOptions(request, headers, runtime);
}

GetJavaStartUpConfigResponse Alibabacloud_Edas20170801::Client::getJavaStartUpConfigWithOptions(shared_ptr<GetJavaStartUpConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetJavaStartUpConfig"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/oam/java_start_up_config"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetJavaStartUpConfigResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetJvmConfiguration"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/app/app_jvm_config"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetJvmConfigurationResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->from)) {
    query->insert(pair<string, string>("From", *request->from));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetK8sApplication"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/changeorder/co_application"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetK8sApplicationResponse(callApi(params, req, runtime));
}

GetK8sClusterResponse Alibabacloud_Edas20170801::Client::getK8sCluster(shared_ptr<GetK8sClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getK8sClusterWithOptions(request, headers, runtime);
}

GetK8sClusterResponse Alibabacloud_Edas20170801::Client::getK8sClusterWithOptions(shared_ptr<GetK8sClusterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->clusterType)) {
    query->insert(pair<string, long>("ClusterType", *request->clusterType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionTag)) {
    query->insert(pair<string, string>("RegionTag", *request->regionTag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetK8sCluster"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/k8s_clusters"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetK8sClusterResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetK8sServices"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/k8s/acs/k8s_service"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetK8sServicesResponse(callApi(params, req, runtime));
}

GetMockRuleByConsumerAppIdResponse Alibabacloud_Edas20170801::Client::getMockRuleByConsumerAppId(shared_ptr<GetMockRuleByConsumerAppIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getMockRuleByConsumerAppIdWithOptions(request, headers, runtime);
}

GetMockRuleByConsumerAppIdResponse Alibabacloud_Edas20170801::Client::getMockRuleByConsumerAppIdWithOptions(shared_ptr<GetMockRuleByConsumerAppIdRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerAppId)) {
    query->insert(pair<string, string>("ConsumerAppId", *request->consumerAppId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMockRuleByConsumerAppId"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/sp/api/mock/getMockRuleByConsumerAppId"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMockRuleByConsumerAppIdResponse(callApi(params, req, runtime));
}

GetMockRuleByProviderAppIdResponse Alibabacloud_Edas20170801::Client::getMockRuleByProviderAppId(shared_ptr<GetMockRuleByProviderAppIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getMockRuleByProviderAppIdWithOptions(request, headers, runtime);
}

GetMockRuleByProviderAppIdResponse Alibabacloud_Edas20170801::Client::getMockRuleByProviderAppIdWithOptions(shared_ptr<GetMockRuleByProviderAppIdRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->providerAppId)) {
    query->insert(pair<string, string>("ProviderAppId", *request->providerAppId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMockRuleByProviderAppId"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/sp/api/mock/getMockRuleByProviderAppId"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMockRuleByProviderAppIdResponse(callApi(params, req, runtime));
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
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPackageStorageCredential"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/package_storage_credential"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPackageStorageCredentialResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mode)) {
    query->insert(pair<string, string>("Mode", *request->mode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetScalingRules"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/app/scalingRules"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetScalingRulesResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSecureToken"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/secure_token"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSecureTokenResponse(callApi(params, req, runtime));
}

GetServiceConsumersPageResponse Alibabacloud_Edas20170801::Client::getServiceConsumersPage(shared_ptr<GetServiceConsumersPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getServiceConsumersPageWithOptions(request, headers, runtime);
}

GetServiceConsumersPageResponse Alibabacloud_Edas20170801::Client::getServiceConsumersPageWithOptions(shared_ptr<GetServiceConsumersPageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("appId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->group)) {
    query->insert(pair<string, string>("group", *request->group));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    query->insert(pair<string, string>("ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->origin)) {
    query->insert(pair<string, string>("origin", *request->origin));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registryType)) {
    query->insert(pair<string, string>("registryType", *request->registryType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    query->insert(pair<string, string>("serviceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("serviceName", *request->serviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    query->insert(pair<string, string>("serviceType", *request->serviceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceVersion)) {
    query->insert(pair<string, string>("serviceVersion", *request->serviceVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("source", *request->source));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetServiceConsumersPage"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/sp/api/mseForOam/getServiceConsumersPage"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceConsumersPageResponse(callApi(params, req, runtime));
}

GetServiceDetailResponse Alibabacloud_Edas20170801::Client::getServiceDetail(shared_ptr<GetServiceDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getServiceDetailWithOptions(request, headers, runtime);
}

GetServiceDetailResponse Alibabacloud_Edas20170801::Client::getServiceDetailWithOptions(shared_ptr<GetServiceDetailRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("appId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->group)) {
    query->insert(pair<string, string>("group", *request->group));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    query->insert(pair<string, string>("ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->origin)) {
    query->insert(pair<string, string>("origin", *request->origin));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registryType)) {
    query->insert(pair<string, string>("registryType", *request->registryType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    query->insert(pair<string, string>("serviceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("serviceName", *request->serviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    query->insert(pair<string, string>("serviceType", *request->serviceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceVersion)) {
    query->insert(pair<string, string>("serviceVersion", *request->serviceVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("source", *request->source));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetServiceDetail"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/sp/api/mseForOam/getServiceDetail"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceDetailResponse(callApi(params, req, runtime));
}

GetServiceListPageResponse Alibabacloud_Edas20170801::Client::getServiceListPage(shared_ptr<GetServiceListPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getServiceListPageWithOptions(request, headers, runtime);
}

GetServiceListPageResponse Alibabacloud_Edas20170801::Client::getServiceListPageWithOptions(shared_ptr<GetServiceListPageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->origin)) {
    query->insert(pair<string, string>("origin", *request->origin));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchType)) {
    query->insert(pair<string, string>("searchType", *request->searchType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchValue)) {
    query->insert(pair<string, string>("searchValue", *request->searchValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    query->insert(pair<string, string>("serviceType", *request->serviceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->side)) {
    query->insert(pair<string, string>("side", *request->side));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetServiceListPage"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/sp/api/mseForOam/getServiceListPage"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceListPageResponse(callApi(params, req, runtime));
}

GetServiceMethodPageResponse Alibabacloud_Edas20170801::Client::getServiceMethodPage(shared_ptr<GetServiceMethodPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getServiceMethodPageWithOptions(request, headers, runtime);
}

GetServiceMethodPageResponse Alibabacloud_Edas20170801::Client::getServiceMethodPageWithOptions(shared_ptr<GetServiceMethodPageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("appId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->group)) {
    query->insert(pair<string, string>("group", *request->group));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    query->insert(pair<string, string>("ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->methodController)) {
    query->insert(pair<string, string>("methodController", *request->methodController));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->origin)) {
    query->insert(pair<string, string>("origin", *request->origin));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    query->insert(pair<string, string>("path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registryType)) {
    query->insert(pair<string, string>("registryType", *request->registryType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    query->insert(pair<string, string>("serviceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("serviceName", *request->serviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    query->insert(pair<string, string>("serviceType", *request->serviceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceVersion)) {
    query->insert(pair<string, string>("serviceVersion", *request->serviceVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("source", *request->source));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetServiceMethodPage"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/sp/api/mseForOam/getServiceMethodPage"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceMethodPageResponse(callApi(params, req, runtime));
}

GetServiceProvidersPageResponse Alibabacloud_Edas20170801::Client::getServiceProvidersPage(shared_ptr<GetServiceProvidersPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getServiceProvidersPageWithOptions(request, headers, runtime);
}

GetServiceProvidersPageResponse Alibabacloud_Edas20170801::Client::getServiceProvidersPageWithOptions(shared_ptr<GetServiceProvidersPageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("appId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->group)) {
    query->insert(pair<string, string>("group", *request->group));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    query->insert(pair<string, string>("ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->origin)) {
    query->insert(pair<string, string>("origin", *request->origin));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registryType)) {
    query->insert(pair<string, string>("registryType", *request->registryType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    query->insert(pair<string, string>("serviceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("serviceName", *request->serviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    query->insert(pair<string, string>("serviceType", *request->serviceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceVersion)) {
    query->insert(pair<string, string>("serviceVersion", *request->serviceVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("source", *request->source));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetServiceProvidersPage"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/sp/api/mseForOam/getServiceProvidersPage"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceProvidersPageResponse(callApi(params, req, runtime));
}

GetWebContainerConfigResponse Alibabacloud_Edas20170801::Client::getWebContainerConfig(shared_ptr<GetWebContainerConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getWebContainerConfigWithOptions(request, headers, runtime);
}

GetWebContainerConfigResponse Alibabacloud_Edas20170801::Client::getWebContainerConfigWithOptions(shared_ptr<GetWebContainerConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWebContainerConfig"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/oam/web_container_config"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWebContainerConfigResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableAsm)) {
    query->insert(pair<string, bool>("EnableAsm", *request->enableAsm));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mode)) {
    query->insert(pair<string, long>("Mode", *request->mode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImportK8sCluster"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/import_k8s_cluster"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImportK8sClusterResponse(callApi(params, req, runtime));
}

InsertApplicationResponse Alibabacloud_Edas20170801::Client::insertApplication(shared_ptr<InsertApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return insertApplicationWithOptions(request, headers, runtime);
}

InsertApplicationResponse Alibabacloud_Edas20170801::Client::insertApplicationWithOptions(shared_ptr<InsertApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationName)) {
    query->insert(pair<string, string>("ApplicationName", *request->applicationName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->buildPackId)) {
    query->insert(pair<string, long>("BuildPackId", *request->buildPackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->componentIds)) {
    query->insert(pair<string, string>("ComponentIds", *request->componentIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cpu)) {
    query->insert(pair<string, long>("Cpu", *request->cpu));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecuInfo)) {
    query->insert(pair<string, string>("EcuInfo", *request->ecuInfo));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enablePortCheck)) {
    query->insert(pair<string, bool>("EnablePortCheck", *request->enablePortCheck));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableUrlCheck)) {
    query->insert(pair<string, bool>("EnableUrlCheck", *request->enableUrlCheck));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckURL)) {
    query->insert(pair<string, string>("HealthCheckURL", *request->healthCheckURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckUrl)) {
    query->insert(pair<string, string>("HealthCheckUrl", *request->healthCheckUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hooks)) {
    query->insert(pair<string, string>("Hooks", *request->hooks));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jdk)) {
    query->insert(pair<string, string>("Jdk", *request->jdk));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jvmOptions)) {
    query->insert(pair<string, string>("JvmOptions", *request->jvmOptions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalRegionId)) {
    query->insert(pair<string, string>("LogicalRegionId", *request->logicalRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxHeapSize)) {
    query->insert(pair<string, long>("MaxHeapSize", *request->maxHeapSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxPermSize)) {
    query->insert(pair<string, long>("MaxPermSize", *request->maxPermSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mem)) {
    query->insert(pair<string, long>("Mem", *request->mem));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minHeapSize)) {
    query->insert(pair<string, long>("MinHeapSize", *request->minHeapSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageType)) {
    query->insert(pair<string, string>("PackageType", *request->packageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reservedPortStr)) {
    query->insert(pair<string, string>("ReservedPortStr", *request->reservedPortStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->webContainer)) {
    query->insert(pair<string, string>("WebContainer", *request->webContainer));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InsertApplication"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/changeorder/co_create_app"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InsertApplicationResponse(callApi(params, req, runtime));
}

InsertClusterResponse Alibabacloud_Edas20170801::Client::insertCluster(shared_ptr<InsertClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return insertClusterWithOptions(request, headers, runtime);
}

InsertClusterResponse Alibabacloud_Edas20170801::Client::insertClusterWithOptions(shared_ptr<InsertClusterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterName)) {
    query->insert(pair<string, string>("ClusterName", *request->clusterName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->clusterType)) {
    query->insert(pair<string, long>("ClusterType", *request->clusterType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iaasProvider)) {
    query->insert(pair<string, string>("IaasProvider", *request->iaasProvider));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalRegionId)) {
    query->insert(pair<string, string>("LogicalRegionId", *request->logicalRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->networkMode)) {
    query->insert(pair<string, long>("NetworkMode", *request->networkMode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->oversoldFactor)) {
    query->insert(pair<string, long>("OversoldFactor", *request->oversoldFactor));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InsertCluster"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/resource/cluster"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InsertClusterResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("clusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIds)) {
    query->insert(pair<string, string>("instanceIds", *request->instanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("password", *request->password));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InsertClusterMember"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/resource/cluster_member"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InsertClusterMemberResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->initPackageVersionId)) {
    query->insert(pair<string, string>("InitPackageVersionId", *request->initPackageVersionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InsertDeployGroup"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/deploy_group"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InsertDeployGroupResponse(callApi(params, req, runtime));
}

InsertK8sApplicationResponse Alibabacloud_Edas20170801::Client::insertK8sApplication(shared_ptr<InsertK8sApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return insertK8sApplicationWithOptions(request, headers, runtime);
}

InsertK8sApplicationResponse Alibabacloud_Edas20170801::Client::insertK8sApplicationWithOptions(shared_ptr<InsertK8sApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->annotations)) {
    query->insert(pair<string, string>("Annotations", *request->annotations));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationDescription)) {
    query->insert(pair<string, string>("ApplicationDescription", *request->applicationDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buildPackId)) {
    query->insert(pair<string, string>("BuildPackId", *request->buildPackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->command)) {
    query->insert(pair<string, string>("Command", *request->command));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commandArgs)) {
    query->insert(pair<string, string>("CommandArgs", *request->commandArgs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configMountDescs)) {
    query->insert(pair<string, string>("ConfigMountDescs", *request->configMountDescs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->csClusterId)) {
    query->insert(pair<string, string>("CsClusterId", *request->csClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customAffinity)) {
    query->insert(pair<string, string>("CustomAffinity", *request->customAffinity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customTolerations)) {
    query->insert(pair<string, string>("CustomTolerations", *request->customTolerations));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deployAcrossNodes)) {
    query->insert(pair<string, string>("DeployAcrossNodes", *request->deployAcrossNodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deployAcrossZones)) {
    query->insert(pair<string, string>("DeployAcrossZones", *request->deployAcrossZones));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->edasContainerVersion)) {
    query->insert(pair<string, string>("EdasContainerVersion", *request->edasContainerVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->emptyDirs)) {
    query->insert(pair<string, string>("EmptyDirs", *request->emptyDirs));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableAhas)) {
    query->insert(pair<string, bool>("EnableAhas", *request->enableAhas));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableAsm)) {
    query->insert(pair<string, bool>("EnableAsm", *request->enableAsm));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableEmptyPushReject)) {
    query->insert(pair<string, bool>("EnableEmptyPushReject", *request->enableEmptyPushReject));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableLosslessRule)) {
    query->insert(pair<string, bool>("EnableLosslessRule", *request->enableLosslessRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envFroms)) {
    query->insert(pair<string, string>("EnvFroms", *request->envFroms));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envs)) {
    query->insert(pair<string, string>("Envs", *request->envs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUrl)) {
    query->insert(pair<string, string>("ImageUrl", *request->imageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internetSlbId)) {
    query->insert(pair<string, string>("InternetSlbId", *request->internetSlbId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->internetSlbPort)) {
    query->insert(pair<string, long>("InternetSlbPort", *request->internetSlbPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internetSlbProtocol)) {
    query->insert(pair<string, string>("InternetSlbProtocol", *request->internetSlbProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->internetTargetPort)) {
    query->insert(pair<string, long>("InternetTargetPort", *request->internetTargetPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intranetSlbId)) {
    query->insert(pair<string, string>("IntranetSlbId", *request->intranetSlbId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->intranetSlbPort)) {
    query->insert(pair<string, long>("IntranetSlbPort", *request->intranetSlbPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intranetSlbProtocol)) {
    query->insert(pair<string, string>("IntranetSlbProtocol", *request->intranetSlbProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->intranetTargetPort)) {
    query->insert(pair<string, long>("IntranetTargetPort", *request->intranetTargetPort));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isMultilingualApp)) {
    query->insert(pair<string, bool>("IsMultilingualApp", *request->isMultilingualApp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->JDK)) {
    query->insert(pair<string, string>("JDK", *request->JDK));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->javaStartUpConfig)) {
    query->insert(pair<string, string>("JavaStartUpConfig", *request->javaStartUpConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labels)) {
    query->insert(pair<string, string>("Labels", *request->labels));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limitCpu)) {
    query->insert(pair<string, long>("LimitCpu", *request->limitCpu));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limitMem)) {
    query->insert(pair<string, long>("LimitMem", *request->limitMem));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limitmCpu)) {
    query->insert(pair<string, long>("LimitmCpu", *request->limitmCpu));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->liveness)) {
    query->insert(pair<string, string>("Liveness", *request->liveness));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->localVolume)) {
    query->insert(pair<string, string>("LocalVolume", *request->localVolume));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalRegionId)) {
    query->insert(pair<string, string>("LogicalRegionId", *request->logicalRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->losslessRuleAligned)) {
    query->insert(pair<string, bool>("LosslessRuleAligned", *request->losslessRuleAligned));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->losslessRuleDelayTime)) {
    query->insert(pair<string, long>("LosslessRuleDelayTime", *request->losslessRuleDelayTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->losslessRuleFuncType)) {
    query->insert(pair<string, long>("LosslessRuleFuncType", *request->losslessRuleFuncType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->losslessRuleRelated)) {
    query->insert(pair<string, bool>("LosslessRuleRelated", *request->losslessRuleRelated));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->losslessRuleWarmupTime)) {
    query->insert(pair<string, long>("LosslessRuleWarmupTime", *request->losslessRuleWarmupTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mountDescs)) {
    query->insert(pair<string, string>("MountDescs", *request->mountDescs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nasId)) {
    query->insert(pair<string, string>("NasId", *request->nasId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageType)) {
    query->insert(pair<string, string>("PackageType", *request->packageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageUrl)) {
    query->insert(pair<string, string>("PackageUrl", *request->packageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageVersion)) {
    query->insert(pair<string, string>("PackageVersion", *request->packageVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->postStart)) {
    query->insert(pair<string, string>("PostStart", *request->postStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preStop)) {
    query->insert(pair<string, string>("PreStop", *request->preStop));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pvcMountDescs)) {
    query->insert(pair<string, string>("PvcMountDescs", *request->pvcMountDescs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->readiness)) {
    query->insert(pair<string, string>("Readiness", *request->readiness));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->replicas)) {
    query->insert(pair<string, long>("Replicas", *request->replicas));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoId)) {
    query->insert(pair<string, string>("RepoId", *request->repoId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->requestsCpu)) {
    query->insert(pair<string, long>("RequestsCpu", *request->requestsCpu));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->requestsMem)) {
    query->insert(pair<string, long>("RequestsMem", *request->requestsMem));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->requestsmCpu)) {
    query->insert(pair<string, long>("RequestsmCpu", *request->requestsmCpu));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runtimeClassName)) {
    query->insert(pair<string, string>("RuntimeClassName", *request->runtimeClassName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slsConfigs)) {
    query->insert(pair<string, string>("SlsConfigs", *request->slsConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageType)) {
    query->insert(pair<string, string>("StorageType", *request->storageType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    query->insert(pair<string, long>("Timeout", *request->timeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uriEncoding)) {
    query->insert(pair<string, string>("UriEncoding", *request->uriEncoding));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useBodyEncoding)) {
    query->insert(pair<string, bool>("UseBodyEncoding", *request->useBodyEncoding));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->webContainer)) {
    query->insert(pair<string, string>("WebContainer", *request->webContainer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->webContainerConfig)) {
    query->insert(pair<string, string>("WebContainerConfig", *request->webContainerConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InsertK8sApplication"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/k8s/acs/create_k8s_app"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InsertK8sApplicationResponse(callApi(params, req, runtime));
}

InsertOrUpdateRegionResponse Alibabacloud_Edas20170801::Client::insertOrUpdateRegion(shared_ptr<InsertOrUpdateRegionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return insertOrUpdateRegionWithOptions(request, headers, runtime);
}

InsertOrUpdateRegionResponse Alibabacloud_Edas20170801::Client::insertOrUpdateRegionWithOptions(shared_ptr<InsertOrUpdateRegionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->debugEnable)) {
    query->insert(pair<string, bool>("DebugEnable", *request->debugEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionName)) {
    query->insert(pair<string, string>("RegionName", *request->regionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionTag)) {
    query->insert(pair<string, string>("RegionTag", *request->regionTag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InsertOrUpdateRegion"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/user_region_def"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InsertOrUpdateRegionResponse(callApi(params, req, runtime));
}

InsertRoleResponse Alibabacloud_Edas20170801::Client::insertRole(shared_ptr<InsertRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return insertRoleWithOptions(request, headers, runtime);
}

InsertRoleResponse Alibabacloud_Edas20170801::Client::insertRoleWithOptions(shared_ptr<InsertRoleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->actionData)) {
    query->insert(pair<string, string>("ActionData", *request->actionData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleName)) {
    query->insert(pair<string, string>("RoleName", *request->roleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InsertRole"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/account/create_role"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InsertRoleResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InsertServiceGroup"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/service/serviceGroups"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InsertServiceGroupResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->doAsync)) {
    query->insert(pair<string, bool>("DoAsync", *request->doAsync));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIds)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InstallAgent"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/ecss/install_agent"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InstallAgentResponse(callApi(params, req, runtime));
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
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAliyunRegion"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/resource/region_list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAliyunRegionResponse(callApi(params, req, runtime));
}

ListApplicationResponse Alibabacloud_Edas20170801::Client::listApplication(shared_ptr<ListApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listApplicationWithOptions(request, headers, runtime);
}

ListApplicationResponse Alibabacloud_Edas20170801::Client::listApplicationWithOptions(shared_ptr<ListApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalRegionId)) {
    query->insert(pair<string, string>("LogicalRegionId", *request->logicalRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalRegionIdFilter)) {
    query->insert(pair<string, string>("LogicalRegionIdFilter", *request->logicalRegionIdFilter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListApplication"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/app/app_list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListApplicationResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalRegionId)) {
    query->insert(pair<string, string>("LogicalRegionId", *request->logicalRegionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListApplicationEcu"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/resource/ecu_list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListApplicationEcuResponse(callApi(params, req, runtime));
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
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAuthority"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/account/authority_list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAuthorityResponse(callApi(params, req, runtime));
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
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBuildPack"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/app/build_pack_list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBuildPackResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("LogicalRegionId", *request->logicalRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCluster"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/resource/cluster_list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListClusterResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsList)) {
    query->insert(pair<string, string>("EcsList", *request->ecsList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListClusterMembers"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/resource/cluster_member_list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListClusterMembersResponse(callApi(params, req, runtime));
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
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListComponents"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/resource/components"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListComponentsResponse(callApi(params, req, runtime));
}

ListConfigTemplatesResponse Alibabacloud_Edas20170801::Client::listConfigTemplates(shared_ptr<ListConfigTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listConfigTemplatesWithOptions(request, headers, runtime);
}

ListConfigTemplatesResponse Alibabacloud_Edas20170801::Client::listConfigTemplatesWithOptions(shared_ptr<ListConfigTemplatesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListConfigTemplates"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/config_template"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListConfigTemplatesResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListConsumedServices"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/service/listConsumedServices"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListConsumedServicesResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("clusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListConvertableEcu"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/resource/convertable_ecu_list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListConvertableEcuResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDeployGroup"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/app/deploy_group_list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDeployGroupResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, long>("NetworkMode", *request->networkMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEcsNotInCluster"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/resource/ecs_not_in_cluster"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEcsNotInClusterResponse(callApi(params, req, runtime));
}

ListEcuByRegionResponse Alibabacloud_Edas20170801::Client::listEcuByRegion(shared_ptr<ListEcuByRegionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listEcuByRegionWithOptions(request, headers, runtime);
}

ListEcuByRegionResponse Alibabacloud_Edas20170801::Client::listEcuByRegionWithOptions(shared_ptr<ListEcuByRegionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->act)) {
    query->insert(pair<string, string>("Act", *request->act));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalRegionId)) {
    query->insert(pair<string, string>("LogicalRegionId", *request->logicalRegionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEcuByRegion"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/resource/ecu_list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEcuByRegionResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHistoryDeployVersion"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/app/deploy_history_version_list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListHistoryDeployVersionResponse(callApi(params, req, runtime));
}

ListK8sConfigMapsResponse Alibabacloud_Edas20170801::Client::listK8sConfigMaps(shared_ptr<ListK8sConfigMapsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listK8sConfigMapsWithOptions(request, headers, runtime);
}

ListK8sConfigMapsResponse Alibabacloud_Edas20170801::Client::listK8sConfigMapsWithOptions(shared_ptr<ListK8sConfigMapsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->condition)) {
    query->insert(pair<string, map<string, boost::any>>("Condition", *request->condition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showRelatedApps)) {
    query->insert(pair<string, bool>("ShowRelatedApps", *request->showRelatedApps));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListK8sConfigMaps"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/k8s/acs/k8s_config_map"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListK8sConfigMapsResponse(callApi(params, req, runtime));
}

ListK8sIngressRulesResponse Alibabacloud_Edas20170801::Client::listK8sIngressRules(shared_ptr<ListK8sIngressRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listK8sIngressRulesWithOptions(request, headers, runtime);
}

ListK8sIngressRulesResponse Alibabacloud_Edas20170801::Client::listK8sIngressRulesWithOptions(shared_ptr<ListK8sIngressRulesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->condition)) {
    query->insert(pair<string, string>("Condition", *request->condition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListK8sIngressRules"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/k8s/acs/k8s_ingress"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListK8sIngressRulesResponse(callApi(params, req, runtime));
}

ListK8sNamespacesResponse Alibabacloud_Edas20170801::Client::listK8sNamespaces(shared_ptr<ListK8sNamespacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listK8sNamespacesWithOptions(request, headers, runtime);
}

ListK8sNamespacesResponse Alibabacloud_Edas20170801::Client::listK8sNamespacesWithOptions(shared_ptr<ListK8sNamespacesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListK8sNamespaces"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/k8s/acs/k8s_namespace"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListK8sNamespacesResponse(callApi(params, req, runtime));
}

ListK8sSecretsResponse Alibabacloud_Edas20170801::Client::listK8sSecrets(shared_ptr<ListK8sSecretsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listK8sSecretsWithOptions(request, headers, runtime);
}

ListK8sSecretsResponse Alibabacloud_Edas20170801::Client::listK8sSecretsWithOptions(shared_ptr<ListK8sSecretsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->condition)) {
    query->insert(pair<string, string>("Condition", *request->condition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showRelatedApps)) {
    query->insert(pair<string, bool>("ShowRelatedApps", *request->showRelatedApps));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListK8sSecrets"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/k8s/acs/k8s_secret"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListK8sSecretsResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMethods"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/service/list_methods"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMethodsResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPublishedServices"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/service/listPublishedServices"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPublishedServicesResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRecentChangeOrder"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/changeorder/change_order_list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRecentChangeOrderResponse(callApi(params, req, runtime));
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
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourceGroup"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/resource/reg_group_list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResourceGroupResponse(callApi(params, req, runtime));
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
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRole"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/account/role_list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRoleResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRootStacks"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/s2i/list_root_stack"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRootStacksResponse(callApi(params, req, runtime));
}

ListScaleOutEcuResponse Alibabacloud_Edas20170801::Client::listScaleOutEcu(shared_ptr<ListScaleOutEcuRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listScaleOutEcuWithOptions(request, headers, runtime);
}

ListScaleOutEcuResponse Alibabacloud_Edas20170801::Client::listScaleOutEcuWithOptions(shared_ptr<ListScaleOutEcuRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cpu)) {
    query->insert(pair<string, long>("Cpu", *request->cpu));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceNum)) {
    query->insert(pair<string, long>("InstanceNum", *request->instanceNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalRegionId)) {
    query->insert(pair<string, string>("LogicalRegionId", *request->logicalRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mem)) {
    query->insert(pair<string, long>("Mem", *request->mem));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListScaleOutEcu"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/resource/scale_out_ecu_list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListScaleOutEcuResponse(callApi(params, req, runtime));
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
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServiceGroups"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/service/serviceGroups"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServiceGroupsResponse(callApi(params, req, runtime));
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
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSlb"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/slb_list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSlbResponse(callApi(params, req, runtime));
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
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSubAccount"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/account/sub_account_list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSubAccountResponse(callApi(params, req, runtime));
}

ListTagResourcesResponse Alibabacloud_Edas20170801::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTagResourcesWithOptions(request, headers, runtime);
}

ListTagResourcesResponse Alibabacloud_Edas20170801::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->resourceIds)) {
    query->insert(pair<string, map<string, boost::any>>("ResourceIds", *request->resourceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceRegionId)) {
    query->insert(pair<string, string>("ResourceRegionId", *request->resourceRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->tags)) {
    query->insert(pair<string, map<string, boost::any>>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagResources"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/tag/tags"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagResourcesResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, bool>("DebugEnable", *request->debugEnable));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserDefineRegion"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/user_region_defs"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUserDefineRegionResponse(callApi(params, req, runtime));
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
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVpc"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/vpc_list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListVpcResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("InstanceIds", *request->instanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalRegionId)) {
    query->insert(pair<string, string>("LogicalRegionId", *request->logicalRegionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MigrateEcu"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/resource/migrate_ecu"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MigrateEcuResponse(callApi(params, req, runtime));
}

ModifyScalingRuleResponse Alibabacloud_Edas20170801::Client::modifyScalingRule(shared_ptr<ModifyScalingRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyScalingRuleWithOptions(request, headers, runtime);
}

ModifyScalingRuleResponse Alibabacloud_Edas20170801::Client::modifyScalingRuleWithOptions(shared_ptr<ModifyScalingRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->acceptEULA)) {
    query->insert(pair<string, bool>("AcceptEULA", *request->acceptEULA));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inCondition)) {
    query->insert(pair<string, string>("InCondition", *request->inCondition));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->inCpu)) {
    query->insert(pair<string, long>("InCpu", *request->inCpu));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->inDuration)) {
    query->insert(pair<string, long>("InDuration", *request->inDuration));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->inEnable)) {
    query->insert(pair<string, bool>("InEnable", *request->inEnable));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->inInstanceNum)) {
    query->insert(pair<string, long>("InInstanceNum", *request->inInstanceNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->inLoad)) {
    query->insert(pair<string, long>("InLoad", *request->inLoad));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->inRT)) {
    query->insert(pair<string, long>("InRT", *request->inRT));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->inStep)) {
    query->insert(pair<string, long>("InStep", *request->inStep));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPairName)) {
    query->insert(pair<string, string>("KeyPairName", *request->keyPairName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->multiAzPolicy)) {
    query->insert(pair<string, string>("MultiAzPolicy", *request->multiAzPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->outCPU)) {
    query->insert(pair<string, long>("OutCPU", *request->outCPU));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outCondition)) {
    query->insert(pair<string, string>("OutCondition", *request->outCondition));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->outDuration)) {
    query->insert(pair<string, long>("OutDuration", *request->outDuration));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outEnable)) {
    query->insert(pair<string, bool>("OutEnable", *request->outEnable));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->outInstanceNum)) {
    query->insert(pair<string, long>("OutInstanceNum", *request->outInstanceNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->outLoad)) {
    query->insert(pair<string, long>("OutLoad", *request->outLoad));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->outRT)) {
    query->insert(pair<string, long>("OutRT", *request->outRT));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->outStep)) {
    query->insert(pair<string, long>("OutStep", *request->outStep));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceFrom)) {
    query->insert(pair<string, string>("ResourceFrom", *request->resourceFrom));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingPolicy)) {
    query->insert(pair<string, string>("ScalingPolicy", *request->scalingPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateInstanceId)) {
    query->insert(pair<string, string>("TemplateInstanceId", *request->templateInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateInstanceName)) {
    query->insert(pair<string, string>("TemplateInstanceName", *request->templateInstanceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateVersion)) {
    query->insert(pair<string, long>("TemplateVersion", *request->templateVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchIds)) {
    query->insert(pair<string, string>("VSwitchIds", *request->vSwitchIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyScalingRule"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/app/scaling_rules"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyScalingRuleResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryApplicationStatus"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/app/app_status"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryApplicationStatusResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("EccId", *request->eccId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryEccInfo"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/ecc"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryEccInfoResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("LogicalRegionId", *request->logicalRegionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMigrateEcuList"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/resource/migrate_ecu_list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMigrateEcuListResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("LogicalRegionId", *request->logicalRegionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMigrateRegionList"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/resource/migrate_region_select"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMigrateRegionListResponse(callApi(params, req, runtime));
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
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryRegionConfig"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/region_config"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryRegionConfigResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySlsLogStoreList"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/k8s/sls/query_sls_log_store_list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySlsLogStoreListResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveMockRule"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/sp/api/mock/removeMockRule"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveMockRuleResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eccInfo)) {
    query->insert(pair<string, string>("EccInfo", *request->eccInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetApplication"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/changeorder/co_reset"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetApplicationResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eccInfo)) {
    query->insert(pair<string, string>("EccInfo", *request->eccInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestartApplication"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/changeorder/co_restart"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RestartApplicationResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    query->insert(pair<string, long>("Timeout", *request->timeout));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestartK8sApplication"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/k8s/acs/restart_k8s_app"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RestartK8sApplicationResponse(callApi(params, req, runtime));
}

RetryChangeOrderTaskResponse Alibabacloud_Edas20170801::Client::retryChangeOrderTask(shared_ptr<RetryChangeOrderTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return retryChangeOrderTaskWithOptions(request, headers, runtime);
}

RetryChangeOrderTaskResponse Alibabacloud_Edas20170801::Client::retryChangeOrderTaskWithOptions(shared_ptr<RetryChangeOrderTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->retryStatus)) {
    query->insert(pair<string, bool>("RetryStatus", *request->retryStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RetryChangeOrderTask"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/changeorder/task_retry"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RetryChangeOrderTaskResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->batch)) {
    query->insert(pair<string, long>("Batch", *request->batch));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->batchWaitTime)) {
    query->insert(pair<string, long>("BatchWaitTime", *request->batchWaitTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->historyVersion)) {
    query->insert(pair<string, string>("HistoryVersion", *request->historyVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RollbackApplication"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/changeorder/co_rollback"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RollbackApplicationResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("ChangeOrderId", *request->changeOrderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RollbackChangeOrder"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/oam/changeorder/rollback"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RollbackChangeOrderResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eccInfo)) {
    query->insert(pair<string, string>("EccInfo", *request->eccInfo));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->forceStatus)) {
    query->insert(pair<string, bool>("ForceStatus", *request->forceStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ScaleInApplication"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/changeorder/co_scale_in"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ScaleInApplicationResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->replicas)) {
    query->insert(pair<string, long>("Replicas", *request->replicas));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    query->insert(pair<string, long>("Timeout", *request->timeout));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ScaleK8sApplication"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/k8s/acs/k8s_apps"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ScaleK8sApplicationResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deployGroup)) {
    query->insert(pair<string, string>("DeployGroup", *request->deployGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecuInfo)) {
    query->insert(pair<string, string>("EcuInfo", *request->ecuInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ScaleOutApplication"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/changeorder/co_scale_out"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ScaleOutApplicationResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRenew)) {
    query->insert(pair<string, bool>("AutoRenew", *request->autoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->autoRenewPeriod)) {
    query->insert(pair<string, long>("AutoRenewPeriod", *request->autoRenewPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceChargePeriod)) {
    query->insert(pair<string, long>("InstanceChargePeriod", *request->instanceChargePeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceChargePeriodUnit)) {
    query->insert(pair<string, string>("InstanceChargePeriodUnit", *request->instanceChargePeriodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceChargeType)) {
    query->insert(pair<string, string>("InstanceChargeType", *request->instanceChargeType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scalingNum)) {
    query->insert(pair<string, long>("ScalingNum", *request->scalingNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingPolicy)) {
    query->insert(pair<string, string>("ScalingPolicy", *request->scalingPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateInstanceId)) {
    query->insert(pair<string, string>("TemplateInstanceId", *request->templateInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateVersion)) {
    query->insert(pair<string, string>("TemplateVersion", *request->templateVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ScaleoutApplicationWithNewInstances"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/scaling/scale_out"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ScaleoutApplicationWithNewInstancesResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eccInfo)) {
    query->insert(pair<string, string>("EccInfo", *request->eccInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartApplication"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/changeorder/co_start"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartApplicationResponse(callApi(params, req, runtime));
}

StartK8sApplicationResponse Alibabacloud_Edas20170801::Client::startK8sApplication(shared_ptr<StartK8sApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startK8sApplicationWithOptions(request, headers, runtime);
}

StartK8sApplicationResponse Alibabacloud_Edas20170801::Client::startK8sApplicationWithOptions(shared_ptr<StartK8sApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->replicas)) {
    query->insert(pair<string, long>("Replicas", *request->replicas));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    query->insert(pair<string, long>("Timeout", *request->timeout));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartK8sApplication"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/k8s/acs/start_k8s_app"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartK8sApplicationResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eccInfo)) {
    query->insert(pair<string, string>("EccInfo", *request->eccInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopApplication"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/changeorder/co_stop"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopApplicationResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    query->insert(pair<string, long>("Timeout", *request->timeout));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopK8sApplication"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/k8s/acs/stop_k8s_app"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopK8sApplicationResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableAdvancedMonitoring)) {
    query->insert(pair<string, bool>("EnableAdvancedMonitoring", *request->enableAdvancedMonitoring));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SwitchAdvancedMonitoring"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/monitor/advancedMonitorInfo"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SwitchAdvancedMonitoringResponse(callApi(params, req, runtime));
}

SynchronizeResourceResponse Alibabacloud_Edas20170801::Client::synchronizeResource(shared_ptr<SynchronizeResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return synchronizeResourceWithOptions(request, headers, runtime);
}

SynchronizeResourceResponse Alibabacloud_Edas20170801::Client::synchronizeResourceWithOptions(shared_ptr<SynchronizeResourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIds)) {
    query->insert(pair<string, string>("ResourceIds", *request->resourceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SynchronizeResource"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/resource/pop_sync_resource"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SynchronizeResourceResponse(callApi(params, req, runtime));
}

TagResourcesResponse Alibabacloud_Edas20170801::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return tagResourcesWithOptions(request, headers, runtime);
}

TagResourcesResponse Alibabacloud_Edas20170801::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIds)) {
    query->insert(pair<string, string>("ResourceIds", *request->resourceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceRegionId)) {
    query->insert(pair<string, string>("ResourceRegionId", *request->resourceRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/tag/tags"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagResourcesResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("InstanceIds", *request->instanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetClusterId)) {
    query->insert(pair<string, string>("TargetClusterId", *request->targetClusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TransformClusterMember"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/resource/transform_cluster_member"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TransformClusterMemberResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slbName)) {
    query->insert(pair<string, string>("SlbName", *request->slbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnbindK8sSlb"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/k8s/acs/k8s_slb_binding"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnbindK8sSlbResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deleteListener)) {
    query->insert(pair<string, string>("DeleteListener", *request->deleteListener));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slbId)) {
    query->insert(pair<string, string>("SlbId", *request->slbId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnbindSlb"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/app/unbind_slb_json"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnbindSlbResponse(callApi(params, req, runtime));
}

UntagResourcesResponse Alibabacloud_Edas20170801::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return untagResourcesWithOptions(request, headers, runtime);
}

UntagResourcesResponse Alibabacloud_Edas20170801::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->deleteAll)) {
    query->insert(pair<string, bool>("DeleteAll", *request->deleteAll));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIds)) {
    query->insert(pair<string, string>("ResourceIds", *request->resourceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceRegionId)) {
    query->insert(pair<string, string>("ResourceRegionId", *request->resourceRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKeys)) {
    query->insert(pair<string, string>("TagKeys", *request->tagKeys));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/tag/tags"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UntagResourcesResponse(callApi(params, req, runtime));
}

UpdateAccountInfoResponse Alibabacloud_Edas20170801::Client::updateAccountInfo(shared_ptr<UpdateAccountInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateAccountInfoWithOptions(request, headers, runtime);
}

UpdateAccountInfoResponse Alibabacloud_Edas20170801::Client::updateAccountInfoWithOptions(shared_ptr<UpdateAccountInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    query->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->telephone)) {
    query->insert(pair<string, string>("Telephone", *request->telephone));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAccountInfo"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/account/edit_account_info"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAccountInfoResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desc)) {
    query->insert(pair<string, string>("Desc", *request->desc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->owner)) {
    query->insert(pair<string, string>("Owner", *request->owner));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateApplicationBaseInfo"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/app/update_app_info"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateApplicationBaseInfoResponse(callApi(params, req, runtime));
}

UpdateApplicationScalingRuleResponse Alibabacloud_Edas20170801::Client::updateApplicationScalingRule(shared_ptr<UpdateApplicationScalingRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateApplicationScalingRuleWithOptions(request, headers, runtime);
}

UpdateApplicationScalingRuleResponse Alibabacloud_Edas20170801::Client::updateApplicationScalingRuleWithOptions(shared_ptr<UpdateApplicationScalingRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->scalingRuleEnable)) {
    query->insert(pair<string, bool>("ScalingRuleEnable", *request->scalingRuleEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleMetric)) {
    query->insert(pair<string, string>("ScalingRuleMetric", *request->scalingRuleMetric));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleName)) {
    query->insert(pair<string, string>("ScalingRuleName", *request->scalingRuleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleTimer)) {
    query->insert(pair<string, string>("ScalingRuleTimer", *request->scalingRuleTimer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleTrigger)) {
    query->insert(pair<string, string>("ScalingRuleTrigger", *request->scalingRuleTrigger));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleType)) {
    query->insert(pair<string, string>("ScalingRuleType", *request->scalingRuleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateApplicationScalingRule"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/eam/scale/application_scaling_rule"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateApplicationScalingRuleResponse(callApi(params, req, runtime));
}

UpdateConfigTemplateResponse Alibabacloud_Edas20170801::Client::updateConfigTemplate(shared_ptr<UpdateConfigTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateConfigTemplateWithOptions(request, headers, runtime);
}

UpdateConfigTemplateResponse Alibabacloud_Edas20170801::Client::updateConfigTemplateWithOptions(shared_ptr<UpdateConfigTemplateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->format)) {
    body->insert(pair<string, string>("Format", *request->format));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateConfigTemplate"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/config_template"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateConfigTemplateResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->buildPackId)) {
    query->insert(pair<string, long>("BuildPackId", *request->buildPackId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateContainer"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/changeorder/co_update_container"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateContainerResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contextPath)) {
    query->insert(pair<string, string>("ContextPath", *request->contextPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->httpPort)) {
    query->insert(pair<string, long>("HttpPort", *request->httpPort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxThreads)) {
    query->insert(pair<string, long>("MaxThreads", *request->maxThreads));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->URIEncoding)) {
    query->insert(pair<string, string>("URIEncoding", *request->URIEncoding));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useBodyEncoding)) {
    query->insert(pair<string, bool>("UseBodyEncoding", *request->useBodyEncoding));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateContainerConfiguration"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/app/container_config"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateContainerConfigurationResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hcURL)) {
    query->insert(pair<string, string>("hcURL", *request->hcURL));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateHealthCheckUrl"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/app/modify_hc_url"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateHealthCheckUrlResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hooks)) {
    query->insert(pair<string, string>("Hooks", *request->hooks));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateHookConfiguration"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/app/config_app_hook_json"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateHookConfigurationResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxHeapSize)) {
    query->insert(pair<string, long>("MaxHeapSize", *request->maxHeapSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxPermSize)) {
    query->insert(pair<string, long>("MaxPermSize", *request->maxPermSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minHeapSize)) {
    query->insert(pair<string, long>("MinHeapSize", *request->minHeapSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->options)) {
    query->insert(pair<string, string>("Options", *request->options));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateJvmConfiguration"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/app/app_jvm_config"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateJvmConfigurationResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    query->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->owner)) {
    query->insert(pair<string, string>("Owner", *request->owner));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    query->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateK8sApplicationBaseInfo"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/oam/update_app_basic_info"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateK8sApplicationBaseInfoResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cpuLimit)) {
    query->insert(pair<string, string>("CpuLimit", *request->cpuLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cpuRequest)) {
    query->insert(pair<string, string>("CpuRequest", *request->cpuRequest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mcpuLimit)) {
    query->insert(pair<string, string>("McpuLimit", *request->mcpuLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mcpuRequest)) {
    query->insert(pair<string, string>("McpuRequest", *request->mcpuRequest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memoryLimit)) {
    query->insert(pair<string, string>("MemoryLimit", *request->memoryLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memoryRequest)) {
    query->insert(pair<string, string>("MemoryRequest", *request->memoryRequest));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    query->insert(pair<string, long>("Timeout", *request->timeout));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateK8sApplicationConfig"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/k8s/acs/k8s_app_configuration"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateK8sApplicationConfigResponse(callApi(params, req, runtime));
}

UpdateK8sConfigMapResponse Alibabacloud_Edas20170801::Client::updateK8sConfigMap(shared_ptr<UpdateK8sConfigMapRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateK8sConfigMapWithOptions(request, headers, runtime);
}

UpdateK8sConfigMapResponse Alibabacloud_Edas20170801::Client::updateK8sConfigMapWithOptions(shared_ptr<UpdateK8sConfigMapRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    body->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->data)) {
    body->insert(pair<string, map<string, boost::any>>("Data", *request->data));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    body->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateK8sConfigMap"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/k8s/acs/k8s_config_map"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateK8sConfigMapResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->ingressConf)) {
    query->insert(pair<string, map<string, boost::any>>("IngressConf", *request->ingressConf));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateK8sIngressRule"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/k8s/acs/k8s_ingress"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateK8sIngressRuleResponse(callApi(params, req, runtime));
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
    body->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    body->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceContent)) {
    body->insert(pair<string, string>("ResourceContent", *request->resourceContent));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateK8sResource"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/oam/update_k8s_resource_config"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateK8sResourceResponse(callApi(params, req, runtime));
}

UpdateK8sSecretResponse Alibabacloud_Edas20170801::Client::updateK8sSecret(shared_ptr<UpdateK8sSecretRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateK8sSecretWithOptions(request, headers, runtime);
}

UpdateK8sSecretResponse Alibabacloud_Edas20170801::Client::updateK8sSecretWithOptions(shared_ptr<UpdateK8sSecretRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->base64Encoded)) {
    body->insert(pair<string, bool>("Base64Encoded", *request->base64Encoded));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certId)) {
    body->insert(pair<string, string>("CertId", *request->certId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certRegionId)) {
    body->insert(pair<string, string>("CertRegionId", *request->certRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    body->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->data)) {
    body->insert(pair<string, string>("Data", *request->data));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    body->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateK8sSecret"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/k8s/acs/k8s_secret"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateK8sSecretResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->servicePorts)) {
    query->insert(pair<string, map<string, boost::any>>("ServicePorts", *request->servicePorts));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateK8sService"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/k8s/acs/k8s_service"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateK8sServiceResponse(callApi(params, req, runtime));
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
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->disableForceOverride)) {
    query->insert(pair<string, bool>("DisableForceOverride", *request->disableForceOverride));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->port)) {
    query->insert(pair<string, string>("Port", *request->port));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduler)) {
    query->insert(pair<string, string>("Scheduler", *request->scheduler));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->servicePortInfos)) {
    query->insert(pair<string, string>("ServicePortInfos", *request->servicePortInfos));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slbName)) {
    query->insert(pair<string, string>("SlbName", *request->slbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slbProtocol)) {
    query->insert(pair<string, string>("SlbProtocol", *request->slbProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specification)) {
    query->insert(pair<string, string>("Specification", *request->specification));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetPort)) {
    query->insert(pair<string, string>("TargetPort", *request->targetPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateK8sSlb"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/k8s/acs/k8s_slb_binding"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateK8sSlbResponse(callApi(params, req, runtime));
}

UpdateMockRuleResponse Alibabacloud_Edas20170801::Client::updateMockRule(shared_ptr<UpdateMockRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateMockRuleWithOptions(request, headers, runtime);
}

UpdateMockRuleResponse Alibabacloud_Edas20170801::Client::updateMockRuleWithOptions(shared_ptr<UpdateMockRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dubboMockItemJson)) {
    query->insert(pair<string, string>("DubboMockItemJson", *request->dubboMockItemJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraJson)) {
    query->insert(pair<string, string>("ExtraJson", *request->extraJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scMockItemJson)) {
    query->insert(pair<string, string>("ScMockItemJson", *request->scMockItemJson));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMockRule"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/sp/api/mock/updateMockRule"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMockRuleResponse(callApi(params, req, runtime));
}

UpdateRoleResponse Alibabacloud_Edas20170801::Client::updateRole(shared_ptr<UpdateRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateRoleWithOptions(request, headers, runtime);
}

UpdateRoleResponse Alibabacloud_Edas20170801::Client::updateRoleWithOptions(shared_ptr<UpdateRoleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->actionData)) {
    query->insert(pair<string, string>("ActionData", *request->actionData));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleId)) {
    query->insert(pair<string, long>("RoleId", *request->roleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRole"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/account/edit_role"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateRoleResponse(callApi(params, req, runtime));
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
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configs)) {
    body->insert(pair<string, string>("Configs", *request->configs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSlsLogStore"))},
    {"version", boost::any(string("2017-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v5/k8s/sls/update_sls_log_store"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSlsLogStoreResponse(callApi(params, req, runtime));
}

