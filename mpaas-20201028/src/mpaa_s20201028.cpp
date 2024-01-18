// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/mpaa_s20201028.hpp>
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

using namespace Alibabacloud_MPaaS20201028;

Alibabacloud_MPaaS20201028::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-hangzhou", "mpaas.aliyuncs.com"},
    {"ap-northeast-1", "mpaas.aliyuncs.com"},
    {"ap-northeast-2-pop", "mpaas.aliyuncs.com"},
    {"ap-south-1", "mpaas.aliyuncs.com"},
    {"ap-southeast-1", "mpaas.aliyuncs.com"},
    {"ap-southeast-2", "mpaas.aliyuncs.com"},
    {"ap-southeast-3", "mpaas.aliyuncs.com"},
    {"ap-southeast-5", "mpaas.aliyuncs.com"},
    {"cn-beijing", "mpaas.aliyuncs.com"},
    {"cn-beijing-finance-1", "mpaas.aliyuncs.com"},
    {"cn-beijing-finance-pop", "mpaas.aliyuncs.com"},
    {"cn-beijing-gov-1", "mpaas.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "mpaas.aliyuncs.com"},
    {"cn-chengdu", "mpaas.aliyuncs.com"},
    {"cn-edge-1", "mpaas.aliyuncs.com"},
    {"cn-fujian", "mpaas.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "mpaas.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "mpaas.aliyuncs.com"},
    {"cn-hangzhou-finance", "mpaas.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "mpaas.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "mpaas.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "mpaas.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "mpaas.aliyuncs.com"},
    {"cn-hangzhou-test-306", "mpaas.aliyuncs.com"},
    {"cn-hongkong", "mpaas.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "mpaas.aliyuncs.com"},
    {"cn-huhehaote", "mpaas.aliyuncs.com"},
    {"cn-north-2-gov-1", "mpaas.aliyuncs.com"},
    {"cn-qingdao", "mpaas.aliyuncs.com"},
    {"cn-qingdao-nebula", "mpaas.aliyuncs.com"},
    {"cn-shanghai", "mpaas.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "mpaas.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "mpaas.aliyuncs.com"},
    {"cn-shanghai-finance-1", "mpaas.aliyuncs.com"},
    {"cn-shanghai-inner", "mpaas.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "mpaas.aliyuncs.com"},
    {"cn-shenzhen", "mpaas.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "mpaas.aliyuncs.com"},
    {"cn-shenzhen-inner", "mpaas.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "mpaas.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "mpaas.aliyuncs.com"},
    {"cn-wuhan", "mpaas.aliyuncs.com"},
    {"cn-yushanfang", "mpaas.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "mpaas.aliyuncs.com"},
    {"cn-zhangjiakou", "mpaas.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "mpaas.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "mpaas.aliyuncs.com"},
    {"eu-central-1", "mpaas.aliyuncs.com"},
    {"eu-west-1", "mpaas.aliyuncs.com"},
    {"eu-west-1-oxs", "mpaas.aliyuncs.com"},
    {"me-east-1", "mpaas.aliyuncs.com"},
    {"rus-west-1-pop", "mpaas.aliyuncs.com"},
    {"us-east-1", "mpaas.aliyuncs.com"},
    {"us-west-1", "mpaas.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("mpaas"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_MPaaS20201028::Client::getEndpoint(shared_ptr<string> productId,
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

AddMdsMiniConfigResponse Alibabacloud_MPaaS20201028::Client::addMdsMiniConfigWithOptions(shared_ptr<AddMdsMiniConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mpaasMappcenterMiniConfigAddJsonStr)) {
    body->insert(pair<string, string>("MpaasMappcenterMiniConfigAddJsonStr", *request->mpaasMappcenterMiniConfigAddJsonStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddMdsMiniConfig"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddMdsMiniConfigResponse(callApi(params, req, runtime));
}

AddMdsMiniConfigResponse Alibabacloud_MPaaS20201028::Client::addMdsMiniConfig(shared_ptr<AddMdsMiniConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addMdsMiniConfigWithOptions(request, runtime);
}

CancelPushSchedulerResponse Alibabacloud_MPaaS20201028::Client::cancelPushSchedulerWithOptions(shared_ptr<CancelPushSchedulerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    body->insert(pair<string, long>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uniqueIds)) {
    body->insert(pair<string, string>("UniqueIds", *request->uniqueIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelPushScheduler"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelPushSchedulerResponse(callApi(params, req, runtime));
}

CancelPushSchedulerResponse Alibabacloud_MPaaS20201028::Client::cancelPushScheduler(shared_ptr<CancelPushSchedulerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelPushSchedulerWithOptions(request, runtime);
}

ChangeMcubeMiniTaskStatusResponse Alibabacloud_MPaaS20201028::Client::changeMcubeMiniTaskStatusWithOptions(shared_ptr<ChangeMcubeMiniTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    body->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->packageId)) {
    body->insert(pair<string, long>("PackageId", *request->packageId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    body->insert(pair<string, long>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskStatus)) {
    body->insert(pair<string, long>("TaskStatus", *request->taskStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeMcubeMiniTaskStatus"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeMcubeMiniTaskStatusResponse(callApi(params, req, runtime));
}

ChangeMcubeMiniTaskStatusResponse Alibabacloud_MPaaS20201028::Client::changeMcubeMiniTaskStatus(shared_ptr<ChangeMcubeMiniTaskStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeMcubeMiniTaskStatusWithOptions(request, runtime);
}

ChangeMcubeNebulaTaskStatusResponse Alibabacloud_MPaaS20201028::Client::changeMcubeNebulaTaskStatusWithOptions(shared_ptr<ChangeMcubeNebulaTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    body->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageId)) {
    body->insert(pair<string, string>("PackageId", *request->packageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskStatus)) {
    body->insert(pair<string, long>("TaskStatus", *request->taskStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeMcubeNebulaTaskStatus"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeMcubeNebulaTaskStatusResponse(callApi(params, req, runtime));
}

ChangeMcubeNebulaTaskStatusResponse Alibabacloud_MPaaS20201028::Client::changeMcubeNebulaTaskStatus(shared_ptr<ChangeMcubeNebulaTaskStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeMcubeNebulaTaskStatusWithOptions(request, runtime);
}

ChangeMcubePublicTaskStatusResponse Alibabacloud_MPaaS20201028::Client::changeMcubePublicTaskStatusWithOptions(shared_ptr<ChangeMcubePublicTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskStatus)) {
    body->insert(pair<string, string>("TaskStatus", *request->taskStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeMcubePublicTaskStatus"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeMcubePublicTaskStatusResponse(callApi(params, req, runtime));
}

ChangeMcubePublicTaskStatusResponse Alibabacloud_MPaaS20201028::Client::changeMcubePublicTaskStatus(shared_ptr<ChangeMcubePublicTaskStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeMcubePublicTaskStatusWithOptions(request, runtime);
}

CopyMcdpGroupResponse Alibabacloud_MPaaS20201028::Client::copyMcdpGroupWithOptions(shared_ptr<CopyMcdpGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mpaasMappcenterMcdpGroupCopyJsonStr)) {
    body->insert(pair<string, string>("MpaasMappcenterMcdpGroupCopyJsonStr", *request->mpaasMappcenterMcdpGroupCopyJsonStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CopyMcdpGroup"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CopyMcdpGroupResponse(callApi(params, req, runtime));
}

CopyMcdpGroupResponse Alibabacloud_MPaaS20201028::Client::copyMcdpGroup(shared_ptr<CopyMcdpGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return copyMcdpGroupWithOptions(request, runtime);
}

CreateMasCrowdResponse Alibabacloud_MPaaS20201028::Client::createMasCrowdWithOptions(shared_ptr<CreateMasCrowdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mpaasMappcenterMcdpMasCrowdCreateJsonStr)) {
    body->insert(pair<string, string>("MpaasMappcenterMcdpMasCrowdCreateJsonStr", *request->mpaasMappcenterMcdpMasCrowdCreateJsonStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMasCrowd"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMasCrowdResponse(callApi(params, req, runtime));
}

CreateMasCrowdResponse Alibabacloud_MPaaS20201028::Client::createMasCrowd(shared_ptr<CreateMasCrowdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMasCrowdWithOptions(request, runtime);
}

CreateMasFunnelResponse Alibabacloud_MPaaS20201028::Client::createMasFunnelWithOptions(shared_ptr<CreateMasFunnelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mpaasMappcenterMcdpMasFunnelCreateJsonStr)) {
    body->insert(pair<string, string>("MpaasMappcenterMcdpMasFunnelCreateJsonStr", *request->mpaasMappcenterMcdpMasFunnelCreateJsonStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMasFunnel"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMasFunnelResponse(callApi(params, req, runtime));
}

CreateMasFunnelResponse Alibabacloud_MPaaS20201028::Client::createMasFunnel(shared_ptr<CreateMasFunnelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMasFunnelWithOptions(request, runtime);
}

CreateMcdpEventResponse Alibabacloud_MPaaS20201028::Client::createMcdpEventWithOptions(shared_ptr<CreateMcdpEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mpaasMappcenterMcdpEventCreateJsonStr)) {
    body->insert(pair<string, string>("MpaasMappcenterMcdpEventCreateJsonStr", *request->mpaasMappcenterMcdpEventCreateJsonStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMcdpEvent"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMcdpEventResponse(callApi(params, req, runtime));
}

CreateMcdpEventResponse Alibabacloud_MPaaS20201028::Client::createMcdpEvent(shared_ptr<CreateMcdpEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMcdpEventWithOptions(request, runtime);
}

CreateMcdpEventAttributeResponse Alibabacloud_MPaaS20201028::Client::createMcdpEventAttributeWithOptions(shared_ptr<CreateMcdpEventAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mpaasMappcenterMcdpEventAttributeCreateJsonStr)) {
    body->insert(pair<string, string>("MpaasMappcenterMcdpEventAttributeCreateJsonStr", *request->mpaasMappcenterMcdpEventAttributeCreateJsonStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMcdpEventAttribute"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMcdpEventAttributeResponse(callApi(params, req, runtime));
}

CreateMcdpEventAttributeResponse Alibabacloud_MPaaS20201028::Client::createMcdpEventAttribute(shared_ptr<CreateMcdpEventAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMcdpEventAttributeWithOptions(request, runtime);
}

CreateMcdpGroupResponse Alibabacloud_MPaaS20201028::Client::createMcdpGroupWithOptions(shared_ptr<CreateMcdpGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mpaasMappcenterMcdpGroupCreateJsonStr)) {
    body->insert(pair<string, string>("MpaasMappcenterMcdpGroupCreateJsonStr", *request->mpaasMappcenterMcdpGroupCreateJsonStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMcdpGroup"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMcdpGroupResponse(callApi(params, req, runtime));
}

CreateMcdpGroupResponse Alibabacloud_MPaaS20201028::Client::createMcdpGroup(shared_ptr<CreateMcdpGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMcdpGroupWithOptions(request, runtime);
}

CreateMcdpMaterialResponse Alibabacloud_MPaaS20201028::Client::createMcdpMaterialWithOptions(shared_ptr<CreateMcdpMaterialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mpaasMappcenterMcdpMaterialCreateJsonStr)) {
    body->insert(pair<string, string>("MpaasMappcenterMcdpMaterialCreateJsonStr", *request->mpaasMappcenterMcdpMaterialCreateJsonStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMcdpMaterial"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMcdpMaterialResponse(callApi(params, req, runtime));
}

CreateMcdpMaterialResponse Alibabacloud_MPaaS20201028::Client::createMcdpMaterial(shared_ptr<CreateMcdpMaterialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMcdpMaterialWithOptions(request, runtime);
}

CreateMcdpZoneResponse Alibabacloud_MPaaS20201028::Client::createMcdpZoneWithOptions(shared_ptr<CreateMcdpZoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mpaasMappcenterMcdpZoneCreateJsonStr)) {
    body->insert(pair<string, string>("MpaasMappcenterMcdpZoneCreateJsonStr", *request->mpaasMappcenterMcdpZoneCreateJsonStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMcdpZone"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMcdpZoneResponse(callApi(params, req, runtime));
}

CreateMcdpZoneResponse Alibabacloud_MPaaS20201028::Client::createMcdpZone(shared_ptr<CreateMcdpZoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMcdpZoneWithOptions(request, runtime);
}

CreateMcubeMiniAppResponse Alibabacloud_MPaaS20201028::Client::createMcubeMiniAppWithOptions(shared_ptr<CreateMcubeMiniAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->h5Id)) {
    body->insert(pair<string, string>("H5Id", *request->h5Id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->h5Name)) {
    body->insert(pair<string, string>("H5Name", *request->h5Name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMcubeMiniApp"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMcubeMiniAppResponse(callApi(params, req, runtime));
}

CreateMcubeMiniAppResponse Alibabacloud_MPaaS20201028::Client::createMcubeMiniApp(shared_ptr<CreateMcubeMiniAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMcubeMiniAppWithOptions(request, runtime);
}

CreateMcubeMiniTaskResponse Alibabacloud_MPaaS20201028::Client::createMcubeMiniTaskWithOptions(shared_ptr<CreateMcubeMiniTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->greyConfigInfo)) {
    body->insert(pair<string, string>("GreyConfigInfo", *request->greyConfigInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->greyEndtimeData)) {
    body->insert(pair<string, string>("GreyEndtimeData", *request->greyEndtimeData));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->greyNum)) {
    body->insert(pair<string, long>("GreyNum", *request->greyNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memo)) {
    body->insert(pair<string, string>("Memo", *request->memo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->packageId)) {
    body->insert(pair<string, long>("PackageId", *request->packageId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->publishMode)) {
    body->insert(pair<string, long>("PublishMode", *request->publishMode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->publishType)) {
    body->insert(pair<string, long>("PublishType", *request->publishType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->whitelistIds)) {
    body->insert(pair<string, string>("WhitelistIds", *request->whitelistIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMcubeMiniTask"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMcubeMiniTaskResponse(callApi(params, req, runtime));
}

CreateMcubeMiniTaskResponse Alibabacloud_MPaaS20201028::Client::createMcubeMiniTask(shared_ptr<CreateMcubeMiniTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMcubeMiniTaskWithOptions(request, runtime);
}

CreateMcubeNebulaAppResponse Alibabacloud_MPaaS20201028::Client::createMcubeNebulaAppWithOptions(shared_ptr<CreateMcubeNebulaAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->h5Id)) {
    body->insert(pair<string, string>("H5Id", *request->h5Id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->h5Name)) {
    body->insert(pair<string, string>("H5Name", *request->h5Name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMcubeNebulaApp"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMcubeNebulaAppResponse(callApi(params, req, runtime));
}

CreateMcubeNebulaAppResponse Alibabacloud_MPaaS20201028::Client::createMcubeNebulaApp(shared_ptr<CreateMcubeNebulaAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMcubeNebulaAppWithOptions(request, runtime);
}

CreateMcubeNebulaResourceResponse Alibabacloud_MPaaS20201028::Client::createMcubeNebulaResourceWithOptions(shared_ptr<CreateMcubeNebulaResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->autoInstall)) {
    body->insert(pair<string, long>("AutoInstall", *request->autoInstall));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientVersionMax)) {
    body->insert(pair<string, string>("ClientVersionMax", *request->clientVersionMax));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientVersionMin)) {
    body->insert(pair<string, string>("ClientVersionMin", *request->clientVersionMin));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customDomainName)) {
    body->insert(pair<string, string>("CustomDomainName", *request->customDomainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extendInfo)) {
    body->insert(pair<string, string>("ExtendInfo", *request->extendInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileUrl)) {
    body->insert(pair<string, string>("FileUrl", *request->fileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->h5Id)) {
    body->insert(pair<string, string>("H5Id", *request->h5Id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->h5Name)) {
    body->insert(pair<string, string>("H5Name", *request->h5Name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->h5Version)) {
    body->insert(pair<string, string>("H5Version", *request->h5Version));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->installType)) {
    body->insert(pair<string, long>("InstallType", *request->installType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mainUrl)) {
    body->insert(pair<string, string>("MainUrl", *request->mainUrl));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->onexFlag)) {
    body->insert(pair<string, bool>("OnexFlag", *request->onexFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->platform)) {
    body->insert(pair<string, string>("Platform", *request->platform));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->repeatNebula)) {
    body->insert(pair<string, long>("RepeatNebula", *request->repeatNebula));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceType)) {
    body->insert(pair<string, long>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUrl)) {
    body->insert(pair<string, string>("SubUrl", *request->subUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vhost)) {
    body->insert(pair<string, string>("Vhost", *request->vhost));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMcubeNebulaResource"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMcubeNebulaResourceResponse(callApi(params, req, runtime));
}

CreateMcubeNebulaResourceResponse Alibabacloud_MPaaS20201028::Client::createMcubeNebulaResource(shared_ptr<CreateMcubeNebulaResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMcubeNebulaResourceWithOptions(request, runtime);
}

CreateMcubeNebulaTaskResponse Alibabacloud_MPaaS20201028::Client::createMcubeNebulaTaskWithOptions(shared_ptr<CreateMcubeNebulaTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appCode)) {
    body->insert(pair<string, string>("AppCode", *request->appCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    body->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creator)) {
    body->insert(pair<string, string>("Creator", *request->creator));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gmtCreate)) {
    body->insert(pair<string, string>("GmtCreate", *request->gmtCreate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gmtModified)) {
    body->insert(pair<string, string>("GmtModified", *request->gmtModified));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gmtModifiedStr)) {
    body->insert(pair<string, string>("GmtModifiedStr", *request->gmtModifiedStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->greyConfigInfo)) {
    body->insert(pair<string, string>("GreyConfigInfo", *request->greyConfigInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->greyEndtime)) {
    body->insert(pair<string, string>("GreyEndtime", *request->greyEndtime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->greyEndtimeData)) {
    body->insert(pair<string, string>("GreyEndtimeData", *request->greyEndtimeData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->greyEndtimeStr)) {
    body->insert(pair<string, string>("GreyEndtimeStr", *request->greyEndtimeStr));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->greyNum)) {
    body->insert(pair<string, long>("GreyNum", *request->greyNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->greyUrl)) {
    body->insert(pair<string, string>("GreyUrl", *request->greyUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memo)) {
    body->insert(pair<string, string>("Memo", *request->memo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifier)) {
    body->insert(pair<string, string>("Modifier", *request->modifier));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->packageId)) {
    body->insert(pair<string, long>("PackageId", *request->packageId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->percent)) {
    body->insert(pair<string, long>("Percent", *request->percent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->platform)) {
    body->insert(pair<string, string>("Platform", *request->platform));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productId)) {
    body->insert(pair<string, string>("ProductId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productVersion)) {
    body->insert(pair<string, string>("ProductVersion", *request->productVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->publishMode)) {
    body->insert(pair<string, long>("PublishMode", *request->publishMode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->publishType)) {
    body->insert(pair<string, long>("PublishType", *request->publishType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->releaseVersion)) {
    body->insert(pair<string, string>("ReleaseVersion", *request->releaseVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resIds)) {
    body->insert(pair<string, string>("ResIds", *request->resIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serialVersionUID)) {
    body->insert(pair<string, long>("SerialVersionUID", *request->serialVersionUID));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->syncMode)) {
    body->insert(pair<string, string>("SyncMode", *request->syncMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->syncResult)) {
    body->insert(pair<string, string>("SyncResult", *request->syncResult));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    body->insert(pair<string, string>("TaskName", *request->taskName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskStatus)) {
    body->insert(pair<string, long>("TaskStatus", *request->taskStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskType)) {
    body->insert(pair<string, long>("TaskType", *request->taskType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskVersion)) {
    body->insert(pair<string, long>("TaskVersion", *request->taskVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->upgradeNoticeNum)) {
    body->insert(pair<string, long>("UpgradeNoticeNum", *request->upgradeNoticeNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->upgradeProgress)) {
    body->insert(pair<string, string>("UpgradeProgress", *request->upgradeProgress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->whitelistIds)) {
    body->insert(pair<string, string>("WhitelistIds", *request->whitelistIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMcubeNebulaTask"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMcubeNebulaTaskResponse(callApi(params, req, runtime));
}

CreateMcubeNebulaTaskResponse Alibabacloud_MPaaS20201028::Client::createMcubeNebulaTask(shared_ptr<CreateMcubeNebulaTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMcubeNebulaTaskWithOptions(request, runtime);
}

CreateMcubeUpgradePackageResponse Alibabacloud_MPaaS20201028::Client::createMcubeUpgradePackageWithOptions(shared_ptr<CreateMcubeUpgradePackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appVersion)) {
    body->insert(pair<string, string>("AppVersion", *request->appVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appstoreUrl)) {
    body->insert(pair<string, string>("AppstoreUrl", *request->appstoreUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bundleId)) {
    body->insert(pair<string, string>("BundleId", *request->bundleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customDomainName)) {
    body->insert(pair<string, string>("CustomDomainName", *request->customDomainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desc)) {
    body->insert(pair<string, string>("Desc", *request->desc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->downloadUrl)) {
    body->insert(pair<string, string>("DownloadUrl", *request->downloadUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileUrl)) {
    body->insert(pair<string, string>("FileUrl", *request->fileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iconFileUrl)) {
    body->insert(pair<string, string>("IconFileUrl", *request->iconFileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->installAmount)) {
    body->insert(pair<string, long>("InstallAmount", *request->installAmount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iosSymbolfileUrl)) {
    body->insert(pair<string, string>("IosSymbolfileUrl", *request->iosSymbolfileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->isEnterprise)) {
    body->insert(pair<string, long>("IsEnterprise", *request->isEnterprise));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->needCheck)) {
    body->insert(pair<string, long>("NeedCheck", *request->needCheck));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->onexFlag)) {
    body->insert(pair<string, bool>("OnexFlag", *request->onexFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->platform)) {
    body->insert(pair<string, string>("Platform", *request->platform));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->validDays)) {
    body->insert(pair<string, long>("ValidDays", *request->validDays));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMcubeUpgradePackage"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMcubeUpgradePackageResponse(callApi(params, req, runtime));
}

CreateMcubeUpgradePackageResponse Alibabacloud_MPaaS20201028::Client::createMcubeUpgradePackage(shared_ptr<CreateMcubeUpgradePackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMcubeUpgradePackageWithOptions(request, runtime);
}

CreateMcubeUpgradeTaskResponse Alibabacloud_MPaaS20201028::Client::createMcubeUpgradeTaskWithOptions(shared_ptr<CreateMcubeUpgradeTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->greyConfigInfo)) {
    body->insert(pair<string, string>("GreyConfigInfo", *request->greyConfigInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->greyEndtimeData)) {
    body->insert(pair<string, string>("GreyEndtimeData", *request->greyEndtimeData));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->greyNum)) {
    body->insert(pair<string, long>("GreyNum", *request->greyNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->historyForce)) {
    body->insert(pair<string, long>("HistoryForce", *request->historyForce));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memo)) {
    body->insert(pair<string, string>("Memo", *request->memo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->packageInfoId)) {
    body->insert(pair<string, long>("PackageInfoId", *request->packageInfoId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->publishMode)) {
    body->insert(pair<string, long>("PublishMode", *request->publishMode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->publishType)) {
    body->insert(pair<string, long>("PublishType", *request->publishType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->upgradeContent)) {
    body->insert(pair<string, string>("UpgradeContent", *request->upgradeContent));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->upgradeType)) {
    body->insert(pair<string, long>("UpgradeType", *request->upgradeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->whitelistIds)) {
    body->insert(pair<string, string>("WhitelistIds", *request->whitelistIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMcubeUpgradeTask"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMcubeUpgradeTaskResponse(callApi(params, req, runtime));
}

CreateMcubeUpgradeTaskResponse Alibabacloud_MPaaS20201028::Client::createMcubeUpgradeTask(shared_ptr<CreateMcubeUpgradeTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMcubeUpgradeTaskWithOptions(request, runtime);
}

CreateMcubeVhostResponse Alibabacloud_MPaaS20201028::Client::createMcubeVhostWithOptions(shared_ptr<CreateMcubeVhostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vhost)) {
    body->insert(pair<string, string>("Vhost", *request->vhost));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMcubeVhost"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMcubeVhostResponse(callApi(params, req, runtime));
}

CreateMcubeVhostResponse Alibabacloud_MPaaS20201028::Client::createMcubeVhost(shared_ptr<CreateMcubeVhostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMcubeVhostWithOptions(request, runtime);
}

CreateMcubeWhitelistResponse Alibabacloud_MPaaS20201028::Client::createMcubeWhitelistWithOptions(shared_ptr<CreateMcubeWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->whiteListName)) {
    body->insert(pair<string, string>("WhiteListName", *request->whiteListName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->whitelistType)) {
    body->insert(pair<string, string>("WhitelistType", *request->whitelistType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMcubeWhitelist"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMcubeWhitelistResponse(callApi(params, req, runtime));
}

CreateMcubeWhitelistResponse Alibabacloud_MPaaS20201028::Client::createMcubeWhitelist(shared_ptr<CreateMcubeWhitelistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMcubeWhitelistWithOptions(request, runtime);
}

CreateMcubeWhitelistForIdeResponse Alibabacloud_MPaaS20201028::Client::createMcubeWhitelistForIdeWithOptions(shared_ptr<CreateMcubeWhitelistForIdeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->whitelistValue)) {
    body->insert(pair<string, string>("WhitelistValue", *request->whitelistValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMcubeWhitelistForIde"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMcubeWhitelistForIdeResponse(callApi(params, req, runtime));
}

CreateMcubeWhitelistForIdeResponse Alibabacloud_MPaaS20201028::Client::createMcubeWhitelistForIde(shared_ptr<CreateMcubeWhitelistForIdeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMcubeWhitelistForIdeWithOptions(request, runtime);
}

CreateMdsMiniprogramTaskResponse Alibabacloud_MPaaS20201028::Client::createMdsMiniprogramTaskWithOptions(shared_ptr<CreateMdsMiniprogramTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->greyConfigInfo)) {
    body->insert(pair<string, string>("GreyConfigInfo", *request->greyConfigInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->greyEndtimeData)) {
    body->insert(pair<string, string>("GreyEndtimeData", *request->greyEndtimeData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->greyNum)) {
    body->insert(pair<string, string>("GreyNum", *request->greyNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memo)) {
    body->insert(pair<string, string>("Memo", *request->memo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->packageId)) {
    body->insert(pair<string, long>("PackageId", *request->packageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->publishMode)) {
    body->insert(pair<string, string>("PublishMode", *request->publishMode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->publishType)) {
    body->insert(pair<string, long>("PublishType", *request->publishType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->syncMode)) {
    body->insert(pair<string, string>("SyncMode", *request->syncMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->whitelistIds)) {
    body->insert(pair<string, string>("WhitelistIds", *request->whitelistIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMdsMiniprogramTask"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMdsMiniprogramTaskResponse(callApi(params, req, runtime));
}

CreateMdsMiniprogramTaskResponse Alibabacloud_MPaaS20201028::Client::createMdsMiniprogramTask(shared_ptr<CreateMdsMiniprogramTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMdsMiniprogramTaskWithOptions(request, runtime);
}

CreateMsaEnhanceResponse Alibabacloud_MPaaS20201028::Client::createMsaEnhanceWithOptions(shared_ptr<CreateMsaEnhanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mpaasMappcenterMsaEnhanceCreateJsonStr)) {
    body->insert(pair<string, string>("MpaasMappcenterMsaEnhanceCreateJsonStr", *request->mpaasMappcenterMsaEnhanceCreateJsonStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMsaEnhance"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMsaEnhanceResponse(callApi(params, req, runtime));
}

CreateMsaEnhanceResponse Alibabacloud_MPaaS20201028::Client::createMsaEnhance(shared_ptr<CreateMsaEnhanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMsaEnhanceWithOptions(request, runtime);
}

CreateOpenGlobalDataResponse Alibabacloud_MPaaS20201028::Client::createOpenGlobalDataWithOptions(shared_ptr<CreateOpenGlobalDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appMaxVersion)) {
    body->insert(pair<string, string>("AppMaxVersion", *request->appMaxVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appMinVersion)) {
    body->insert(pair<string, string>("AppMinVersion", *request->appMinVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    body->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extAttrStr)) {
    body->insert(pair<string, string>("ExtAttrStr", *request->extAttrStr));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxUid)) {
    body->insert(pair<string, long>("MaxUid", *request->maxUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minUid)) {
    body->insert(pair<string, long>("MinUid", *request->minUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->osType)) {
    body->insert(pair<string, string>("OsType", *request->osType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payload)) {
    body->insert(pair<string, string>("Payload", *request->payload));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdMsgId)) {
    body->insert(pair<string, string>("ThirdMsgId", *request->thirdMsgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uids)) {
    body->insert(pair<string, string>("Uids", *request->uids));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->validTimeEnd)) {
    body->insert(pair<string, long>("ValidTimeEnd", *request->validTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->validTimeStart)) {
    body->insert(pair<string, long>("ValidTimeStart", *request->validTimeStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOpenGlobalData"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOpenGlobalDataResponse(callApi(params, req, runtime));
}

CreateOpenGlobalDataResponse Alibabacloud_MPaaS20201028::Client::createOpenGlobalData(shared_ptr<CreateOpenGlobalDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOpenGlobalDataWithOptions(request, runtime);
}

CreateOpenSingleDataResponse Alibabacloud_MPaaS20201028::Client::createOpenSingleDataWithOptions(shared_ptr<CreateOpenSingleDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appMaxVersion)) {
    body->insert(pair<string, string>("AppMaxVersion", *request->appMaxVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appMinVersion)) {
    body->insert(pair<string, string>("AppMinVersion", *request->appMinVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    body->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->checkOnline)) {
    body->insert(pair<string, bool>("CheckOnline", *request->checkOnline));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extAttrStr)) {
    body->insert(pair<string, string>("ExtAttrStr", *request->extAttrStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->linkToken)) {
    body->insert(pair<string, string>("LinkToken", *request->linkToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->osType)) {
    body->insert(pair<string, string>("OsType", *request->osType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payload)) {
    body->insert(pair<string, string>("Payload", *request->payload));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdMsgId)) {
    body->insert(pair<string, string>("ThirdMsgId", *request->thirdMsgId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->validTimeEnd)) {
    body->insert(pair<string, long>("ValidTimeEnd", *request->validTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->validTimeStart)) {
    body->insert(pair<string, long>("ValidTimeStart", *request->validTimeStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOpenSingleData"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOpenSingleDataResponse(callApi(params, req, runtime));
}

CreateOpenSingleDataResponse Alibabacloud_MPaaS20201028::Client::createOpenSingleData(shared_ptr<CreateOpenSingleDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOpenSingleDataWithOptions(request, runtime);
}

DeleteCubecardWhitelistContentResponse Alibabacloud_MPaaS20201028::Client::deleteCubecardWhitelistContentWithOptions(shared_ptr<DeleteCubecardWhitelistContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->whitelistId)) {
    body->insert(pair<string, string>("WhitelistId", *request->whitelistId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->whitelistValue)) {
    body->insert(pair<string, string>("WhitelistValue", *request->whitelistValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCubecardWhitelistContent"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCubecardWhitelistContentResponse(callApi(params, req, runtime));
}

DeleteCubecardWhitelistContentResponse Alibabacloud_MPaaS20201028::Client::deleteCubecardWhitelistContent(shared_ptr<DeleteCubecardWhitelistContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCubecardWhitelistContentWithOptions(request, runtime);
}

DeleteMcdpAimResponse Alibabacloud_MPaaS20201028::Client::deleteMcdpAimWithOptions(shared_ptr<DeleteMcdpAimRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mpaasMappcenterMcdpAimDeleteJsonStr)) {
    body->insert(pair<string, string>("MpaasMappcenterMcdpAimDeleteJsonStr", *request->mpaasMappcenterMcdpAimDeleteJsonStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMcdpAim"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMcdpAimResponse(callApi(params, req, runtime));
}

DeleteMcdpAimResponse Alibabacloud_MPaaS20201028::Client::deleteMcdpAim(shared_ptr<DeleteMcdpAimRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMcdpAimWithOptions(request, runtime);
}

DeleteMcdpCrowdResponse Alibabacloud_MPaaS20201028::Client::deleteMcdpCrowdWithOptions(shared_ptr<DeleteMcdpCrowdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mpaasMappcenterMcdpCrowdDeleteJsonStr)) {
    body->insert(pair<string, string>("MpaasMappcenterMcdpCrowdDeleteJsonStr", *request->mpaasMappcenterMcdpCrowdDeleteJsonStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMcdpCrowd"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMcdpCrowdResponse(callApi(params, req, runtime));
}

DeleteMcdpCrowdResponse Alibabacloud_MPaaS20201028::Client::deleteMcdpCrowd(shared_ptr<DeleteMcdpCrowdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMcdpCrowdWithOptions(request, runtime);
}

DeleteMcdpEventAttributeByIdResponse Alibabacloud_MPaaS20201028::Client::deleteMcdpEventAttributeByIdWithOptions(shared_ptr<DeleteMcdpEventAttributeByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mpaasMappcenterMcdpEventAttributeDeleteJsonStr)) {
    body->insert(pair<string, string>("MpaasMappcenterMcdpEventAttributeDeleteJsonStr", *request->mpaasMappcenterMcdpEventAttributeDeleteJsonStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMcdpEventAttributeById"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMcdpEventAttributeByIdResponse(callApi(params, req, runtime));
}

DeleteMcdpEventAttributeByIdResponse Alibabacloud_MPaaS20201028::Client::deleteMcdpEventAttributeById(shared_ptr<DeleteMcdpEventAttributeByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMcdpEventAttributeByIdWithOptions(request, runtime);
}

DeleteMcdpEventByIdResponse Alibabacloud_MPaaS20201028::Client::deleteMcdpEventByIdWithOptions(shared_ptr<DeleteMcdpEventByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mpaasMappcenterMcdpEventDeleteJsonStr)) {
    body->insert(pair<string, string>("MpaasMappcenterMcdpEventDeleteJsonStr", *request->mpaasMappcenterMcdpEventDeleteJsonStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMcdpEventById"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMcdpEventByIdResponse(callApi(params, req, runtime));
}

DeleteMcdpEventByIdResponse Alibabacloud_MPaaS20201028::Client::deleteMcdpEventById(shared_ptr<DeleteMcdpEventByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMcdpEventByIdWithOptions(request, runtime);
}

DeleteMcdpMaterialResponse Alibabacloud_MPaaS20201028::Client::deleteMcdpMaterialWithOptions(shared_ptr<DeleteMcdpMaterialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mpaasMappcenterMcdpMaterialDeleteJsonStr)) {
    body->insert(pair<string, string>("MpaasMappcenterMcdpMaterialDeleteJsonStr", *request->mpaasMappcenterMcdpMaterialDeleteJsonStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMcdpMaterial"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMcdpMaterialResponse(callApi(params, req, runtime));
}

DeleteMcdpMaterialResponse Alibabacloud_MPaaS20201028::Client::deleteMcdpMaterial(shared_ptr<DeleteMcdpMaterialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMcdpMaterialWithOptions(request, runtime);
}

DeleteMcdpZoneResponse Alibabacloud_MPaaS20201028::Client::deleteMcdpZoneWithOptions(shared_ptr<DeleteMcdpZoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mpaasMappcenterMcdpZoneDeleteJsonStr)) {
    body->insert(pair<string, string>("MpaasMappcenterMcdpZoneDeleteJsonStr", *request->mpaasMappcenterMcdpZoneDeleteJsonStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMcdpZone"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMcdpZoneResponse(callApi(params, req, runtime));
}

DeleteMcdpZoneResponse Alibabacloud_MPaaS20201028::Client::deleteMcdpZone(shared_ptr<DeleteMcdpZoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMcdpZoneWithOptions(request, runtime);
}

DeleteMcubeMiniAppResponse Alibabacloud_MPaaS20201028::Client::deleteMcubeMiniAppWithOptions(shared_ptr<DeleteMcubeMiniAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->h5Id)) {
    body->insert(pair<string, string>("H5Id", *request->h5Id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMcubeMiniApp"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMcubeMiniAppResponse(callApi(params, req, runtime));
}

DeleteMcubeMiniAppResponse Alibabacloud_MPaaS20201028::Client::deleteMcubeMiniApp(shared_ptr<DeleteMcubeMiniAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMcubeMiniAppWithOptions(request, runtime);
}

DeleteMcubeNebulaAppResponse Alibabacloud_MPaaS20201028::Client::deleteMcubeNebulaAppWithOptions(shared_ptr<DeleteMcubeNebulaAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->h5Id)) {
    body->insert(pair<string, string>("H5Id", *request->h5Id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMcubeNebulaApp"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMcubeNebulaAppResponse(callApi(params, req, runtime));
}

DeleteMcubeNebulaAppResponse Alibabacloud_MPaaS20201028::Client::deleteMcubeNebulaApp(shared_ptr<DeleteMcubeNebulaAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMcubeNebulaAppWithOptions(request, runtime);
}

DeleteMcubeUpgradeResourceResponse Alibabacloud_MPaaS20201028::Client::deleteMcubeUpgradeResourceWithOptions(shared_ptr<DeleteMcubeUpgradeResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->platform)) {
    body->insert(pair<string, string>("Platform", *request->platform));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMcubeUpgradeResource"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMcubeUpgradeResourceResponse(callApi(params, req, runtime));
}

DeleteMcubeUpgradeResourceResponse Alibabacloud_MPaaS20201028::Client::deleteMcubeUpgradeResource(shared_ptr<DeleteMcubeUpgradeResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMcubeUpgradeResourceWithOptions(request, runtime);
}

DeleteMcubeWhitelistResponse Alibabacloud_MPaaS20201028::Client::deleteMcubeWhitelistWithOptions(shared_ptr<DeleteMcubeWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMcubeWhitelist"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMcubeWhitelistResponse(callApi(params, req, runtime));
}

DeleteMcubeWhitelistResponse Alibabacloud_MPaaS20201028::Client::deleteMcubeWhitelist(shared_ptr<DeleteMcubeWhitelistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMcubeWhitelistWithOptions(request, runtime);
}

DeleteMdsWhitelistContentResponse Alibabacloud_MPaaS20201028::Client::deleteMdsWhitelistContentWithOptions(shared_ptr<DeleteMdsWhitelistContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->whitelistId)) {
    body->insert(pair<string, string>("WhitelistId", *request->whitelistId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->whitelistValue)) {
    body->insert(pair<string, string>("WhitelistValue", *request->whitelistValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMdsWhitelistContent"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMdsWhitelistContentResponse(callApi(params, req, runtime));
}

DeleteMdsWhitelistContentResponse Alibabacloud_MPaaS20201028::Client::deleteMdsWhitelistContent(shared_ptr<DeleteMdsWhitelistContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMdsWhitelistContentWithOptions(request, runtime);
}

ExistMcubeRsaKeyResponse Alibabacloud_MPaaS20201028::Client::existMcubeRsaKeyWithOptions(shared_ptr<ExistMcubeRsaKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExistMcubeRsaKey"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExistMcubeRsaKeyResponse(callApi(params, req, runtime));
}

ExistMcubeRsaKeyResponse Alibabacloud_MPaaS20201028::Client::existMcubeRsaKey(shared_ptr<ExistMcubeRsaKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return existMcubeRsaKeyWithOptions(request, runtime);
}

ExportMappCenterAppConfigResponse Alibabacloud_MPaaS20201028::Client::exportMappCenterAppConfigWithOptions(shared_ptr<ExportMappCenterAppConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apkFileUrl)) {
    body->insert(pair<string, string>("ApkFileUrl", *request->apkFileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certRsaBase64)) {
    body->insert(pair<string, string>("CertRsaBase64", *request->certRsaBase64));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    body->insert(pair<string, string>("Identifier", *request->identifier));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->onexFlag)) {
    body->insert(pair<string, bool>("OnexFlag", *request->onexFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemType)) {
    body->insert(pair<string, string>("SystemType", *request->systemType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportMappCenterAppConfig"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExportMappCenterAppConfigResponse(callApi(params, req, runtime));
}

ExportMappCenterAppConfigResponse Alibabacloud_MPaaS20201028::Client::exportMappCenterAppConfig(shared_ptr<ExportMappCenterAppConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return exportMappCenterAppConfigWithOptions(request, runtime);
}

GetFileTokenForUploadToMsaResponse Alibabacloud_MPaaS20201028::Client::getFileTokenForUploadToMsaWithOptions(shared_ptr<GetFileTokenForUploadToMsaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->onexFlag)) {
    body->insert(pair<string, bool>("OnexFlag", *request->onexFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFileTokenForUploadToMsa"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFileTokenForUploadToMsaResponse(callApi(params, req, runtime));
}

GetFileTokenForUploadToMsaResponse Alibabacloud_MPaaS20201028::Client::getFileTokenForUploadToMsa(shared_ptr<GetFileTokenForUploadToMsaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFileTokenForUploadToMsaWithOptions(request, runtime);
}

GetLogUrlInMsaResponse Alibabacloud_MPaaS20201028::Client::getLogUrlInMsaWithOptions(shared_ptr<GetLogUrlInMsaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLogUrlInMsa"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLogUrlInMsaResponse(callApi(params, req, runtime));
}

GetLogUrlInMsaResponse Alibabacloud_MPaaS20201028::Client::getLogUrlInMsa(shared_ptr<GetLogUrlInMsaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLogUrlInMsaWithOptions(request, runtime);
}

GetMcubeFileTokenResponse Alibabacloud_MPaaS20201028::Client::getMcubeFileTokenWithOptions(shared_ptr<GetMcubeFileTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->onexFlag)) {
    body->insert(pair<string, bool>("OnexFlag", *request->onexFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMcubeFileToken"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMcubeFileTokenResponse(callApi(params, req, runtime));
}

GetMcubeFileTokenResponse Alibabacloud_MPaaS20201028::Client::getMcubeFileToken(shared_ptr<GetMcubeFileTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMcubeFileTokenWithOptions(request, runtime);
}

GetMcubeNebulaResourceResponse Alibabacloud_MPaaS20201028::Client::getMcubeNebulaResourceWithOptions(shared_ptr<GetMcubeNebulaResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMcubeNebulaResource"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMcubeNebulaResourceResponse(callApi(params, req, runtime));
}

GetMcubeNebulaResourceResponse Alibabacloud_MPaaS20201028::Client::getMcubeNebulaResource(shared_ptr<GetMcubeNebulaResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMcubeNebulaResourceWithOptions(request, runtime);
}

GetMcubeNebulaTaskDetailResponse Alibabacloud_MPaaS20201028::Client::getMcubeNebulaTaskDetailWithOptions(shared_ptr<GetMcubeNebulaTaskDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    body->insert(pair<string, long>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMcubeNebulaTaskDetail"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMcubeNebulaTaskDetailResponse(callApi(params, req, runtime));
}

GetMcubeNebulaTaskDetailResponse Alibabacloud_MPaaS20201028::Client::getMcubeNebulaTaskDetail(shared_ptr<GetMcubeNebulaTaskDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMcubeNebulaTaskDetailWithOptions(request, runtime);
}

GetMcubeUpgradePackageInfoResponse Alibabacloud_MPaaS20201028::Client::getMcubeUpgradePackageInfoWithOptions(shared_ptr<GetMcubeUpgradePackageInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->packageId)) {
    body->insert(pair<string, long>("PackageId", *request->packageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMcubeUpgradePackageInfo"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMcubeUpgradePackageInfoResponse(callApi(params, req, runtime));
}

GetMcubeUpgradePackageInfoResponse Alibabacloud_MPaaS20201028::Client::getMcubeUpgradePackageInfo(shared_ptr<GetMcubeUpgradePackageInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMcubeUpgradePackageInfoWithOptions(request, runtime);
}

GetMcubeUpgradeTaskInfoResponse Alibabacloud_MPaaS20201028::Client::getMcubeUpgradeTaskInfoWithOptions(shared_ptr<GetMcubeUpgradeTaskInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    body->insert(pair<string, long>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMcubeUpgradeTaskInfo"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMcubeUpgradeTaskInfoResponse(callApi(params, req, runtime));
}

GetMcubeUpgradeTaskInfoResponse Alibabacloud_MPaaS20201028::Client::getMcubeUpgradeTaskInfo(shared_ptr<GetMcubeUpgradeTaskInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMcubeUpgradeTaskInfoWithOptions(request, runtime);
}

GetMdsMiniConfigResponse Alibabacloud_MPaaS20201028::Client::getMdsMiniConfigWithOptions(shared_ptr<GetMdsMiniConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->h5Id)) {
    body->insert(pair<string, string>("H5Id", *request->h5Id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMdsMiniConfig"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMdsMiniConfigResponse(callApi(params, req, runtime));
}

GetMdsMiniConfigResponse Alibabacloud_MPaaS20201028::Client::getMdsMiniConfig(shared_ptr<GetMdsMiniConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMdsMiniConfigWithOptions(request, runtime);
}

GetUserAppDonwloadUrlInMsaResponse Alibabacloud_MPaaS20201028::Client::getUserAppDonwloadUrlInMsaWithOptions(shared_ptr<GetUserAppDonwloadUrlInMsaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserAppDonwloadUrlInMsa"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserAppDonwloadUrlInMsaResponse(callApi(params, req, runtime));
}

GetUserAppDonwloadUrlInMsaResponse Alibabacloud_MPaaS20201028::Client::getUserAppDonwloadUrlInMsa(shared_ptr<GetUserAppDonwloadUrlInMsaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserAppDonwloadUrlInMsaWithOptions(request, runtime);
}

GetUserAppEnhanceProcessInMsaResponse Alibabacloud_MPaaS20201028::Client::getUserAppEnhanceProcessInMsaWithOptions(shared_ptr<GetUserAppEnhanceProcessInMsaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserAppEnhanceProcessInMsa"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserAppEnhanceProcessInMsaResponse(callApi(params, req, runtime));
}

GetUserAppEnhanceProcessInMsaResponse Alibabacloud_MPaaS20201028::Client::getUserAppEnhanceProcessInMsa(shared_ptr<GetUserAppEnhanceProcessInMsaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserAppEnhanceProcessInMsaWithOptions(request, runtime);
}

GetUserAppUploadProcessInMsaResponse Alibabacloud_MPaaS20201028::Client::getUserAppUploadProcessInMsaWithOptions(shared_ptr<GetUserAppUploadProcessInMsaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserAppUploadProcessInMsa"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserAppUploadProcessInMsaResponse(callApi(params, req, runtime));
}

GetUserAppUploadProcessInMsaResponse Alibabacloud_MPaaS20201028::Client::getUserAppUploadProcessInMsa(shared_ptr<GetUserAppUploadProcessInMsaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserAppUploadProcessInMsaWithOptions(request, runtime);
}

ListMappCenterAppsResponse Alibabacloud_MPaaS20201028::Client::listMappCenterAppsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMappCenterApps"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMappCenterAppsResponse(callApi(params, req, runtime));
}

ListMappCenterAppsResponse Alibabacloud_MPaaS20201028::Client::listMappCenterApps() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMappCenterAppsWithOptions(runtime);
}

ListMappCenterWorkspacesResponse Alibabacloud_MPaaS20201028::Client::listMappCenterWorkspacesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMappCenterWorkspaces"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMappCenterWorkspacesResponse(callApi(params, req, runtime));
}

ListMappCenterWorkspacesResponse Alibabacloud_MPaaS20201028::Client::listMappCenterWorkspaces() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMappCenterWorkspacesWithOptions(runtime);
}

ListMcdpAimResponse Alibabacloud_MPaaS20201028::Client::listMcdpAimWithOptions(shared_ptr<ListMcdpAimRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->emptyTag)) {
    body->insert(pair<string, string>("EmptyTag", *request->emptyTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    body->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    body->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    body->insert(pair<string, string>("Sort", *request->sort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortField)) {
    body->insert(pair<string, string>("SortField", *request->sortField));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMcdpAim"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMcdpAimResponse(callApi(params, req, runtime));
}

ListMcdpAimResponse Alibabacloud_MPaaS20201028::Client::listMcdpAim(shared_ptr<ListMcdpAimRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMcdpAimWithOptions(request, runtime);
}

ListMcubeMiniAppsResponse Alibabacloud_MPaaS20201028::Client::listMcubeMiniAppsWithOptions(shared_ptr<ListMcubeMiniAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    body->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    body->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMcubeMiniApps"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMcubeMiniAppsResponse(callApi(params, req, runtime));
}

ListMcubeMiniAppsResponse Alibabacloud_MPaaS20201028::Client::listMcubeMiniApps(shared_ptr<ListMcubeMiniAppsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMcubeMiniAppsWithOptions(request, runtime);
}

ListMcubeMiniPackagesResponse Alibabacloud_MPaaS20201028::Client::listMcubeMiniPackagesWithOptions(shared_ptr<ListMcubeMiniPackagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->h5Id)) {
    body->insert(pair<string, string>("H5Id", *request->h5Id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageTypes)) {
    body->insert(pair<string, string>("PackageTypes", *request->packageTypes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    body->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMcubeMiniPackages"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMcubeMiniPackagesResponse(callApi(params, req, runtime));
}

ListMcubeMiniPackagesResponse Alibabacloud_MPaaS20201028::Client::listMcubeMiniPackages(shared_ptr<ListMcubeMiniPackagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMcubeMiniPackagesWithOptions(request, runtime);
}

ListMcubeMiniTasksResponse Alibabacloud_MPaaS20201028::Client::listMcubeMiniTasksWithOptions(shared_ptr<ListMcubeMiniTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMcubeMiniTasks"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMcubeMiniTasksResponse(callApi(params, req, runtime));
}

ListMcubeMiniTasksResponse Alibabacloud_MPaaS20201028::Client::listMcubeMiniTasks(shared_ptr<ListMcubeMiniTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMcubeMiniTasksWithOptions(request, runtime);
}

ListMcubeNebulaAppsResponse Alibabacloud_MPaaS20201028::Client::listMcubeNebulaAppsWithOptions(shared_ptr<ListMcubeNebulaAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    body->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    body->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMcubeNebulaApps"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMcubeNebulaAppsResponse(callApi(params, req, runtime));
}

ListMcubeNebulaAppsResponse Alibabacloud_MPaaS20201028::Client::listMcubeNebulaApps(shared_ptr<ListMcubeNebulaAppsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMcubeNebulaAppsWithOptions(request, runtime);
}

ListMcubeNebulaResourcesResponse Alibabacloud_MPaaS20201028::Client::listMcubeNebulaResourcesWithOptions(shared_ptr<ListMcubeNebulaResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->h5Id)) {
    body->insert(pair<string, string>("H5Id", *request->h5Id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    body->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMcubeNebulaResources"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMcubeNebulaResourcesResponse(callApi(params, req, runtime));
}

ListMcubeNebulaResourcesResponse Alibabacloud_MPaaS20201028::Client::listMcubeNebulaResources(shared_ptr<ListMcubeNebulaResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMcubeNebulaResourcesWithOptions(request, runtime);
}

ListMcubeNebulaTasksResponse Alibabacloud_MPaaS20201028::Client::listMcubeNebulaTasksWithOptions(shared_ptr<ListMcubeNebulaTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMcubeNebulaTasks"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMcubeNebulaTasksResponse(callApi(params, req, runtime));
}

ListMcubeNebulaTasksResponse Alibabacloud_MPaaS20201028::Client::listMcubeNebulaTasks(shared_ptr<ListMcubeNebulaTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMcubeNebulaTasksWithOptions(request, runtime);
}

ListMcubeUpgradePackagesResponse Alibabacloud_MPaaS20201028::Client::listMcubeUpgradePackagesWithOptions(shared_ptr<ListMcubeUpgradePackagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    body->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMcubeUpgradePackages"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMcubeUpgradePackagesResponse(callApi(params, req, runtime));
}

ListMcubeUpgradePackagesResponse Alibabacloud_MPaaS20201028::Client::listMcubeUpgradePackages(shared_ptr<ListMcubeUpgradePackagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMcubeUpgradePackagesWithOptions(request, runtime);
}

ListMcubeUpgradeTasksResponse Alibabacloud_MPaaS20201028::Client::listMcubeUpgradeTasksWithOptions(shared_ptr<ListMcubeUpgradeTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageId)) {
    body->insert(pair<string, string>("PackageId", *request->packageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMcubeUpgradeTasks"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMcubeUpgradeTasksResponse(callApi(params, req, runtime));
}

ListMcubeUpgradeTasksResponse Alibabacloud_MPaaS20201028::Client::listMcubeUpgradeTasks(shared_ptr<ListMcubeUpgradeTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMcubeUpgradeTasksWithOptions(request, runtime);
}

ListMcubeWhitelistsResponse Alibabacloud_MPaaS20201028::Client::listMcubeWhitelistsWithOptions(shared_ptr<ListMcubeWhitelistsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    body->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->whitelistName)) {
    body->insert(pair<string, string>("WhitelistName", *request->whitelistName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMcubeWhitelists"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMcubeWhitelistsResponse(callApi(params, req, runtime));
}

ListMcubeWhitelistsResponse Alibabacloud_MPaaS20201028::Client::listMcubeWhitelists(shared_ptr<ListMcubeWhitelistsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMcubeWhitelistsWithOptions(request, runtime);
}

ListMgsApiResponse Alibabacloud_MPaaS20201028::Client::listMgsApiWithOptions(shared_ptr<ListMgsApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiStatus)) {
    body->insert(pair<string, string>("ApiStatus", *request->apiStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiType)) {
    body->insert(pair<string, string>("ApiType", *request->apiType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->format)) {
    body->insert(pair<string, string>("Format", *request->format));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->host)) {
    body->insert(pair<string, string>("Host", *request->host));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->needEncrypt)) {
    body->insert(pair<string, string>("NeedEncrypt", *request->needEncrypt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->needEtag)) {
    body->insert(pair<string, string>("NeedEtag", *request->needEtag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->needSign)) {
    body->insert(pair<string, string>("NeedSign", *request->needSign));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operationType)) {
    body->insert(pair<string, string>("OperationType", *request->operationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->optFuzzy)) {
    body->insert(pair<string, string>("OptFuzzy", *request->optFuzzy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    body->insert(pair<string, long>("PageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sysId)) {
    body->insert(pair<string, long>("SysId", *request->sysId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sysName)) {
    body->insert(pair<string, string>("SysName", *request->sysName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMgsApi"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMgsApiResponse(callApi(params, req, runtime));
}

ListMgsApiResponse Alibabacloud_MPaaS20201028::Client::listMgsApi(shared_ptr<ListMgsApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMgsApiWithOptions(request, runtime);
}

LogMsaQueryResponse Alibabacloud_MPaaS20201028::Client::logMsaQueryWithOptions(shared_ptr<LogMsaQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->onexFlag)) {
    body->insert(pair<string, string>("OnexFlag", *request->onexFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LogMsaQuery"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LogMsaQueryResponse(callApi(params, req, runtime));
}

LogMsaQueryResponse Alibabacloud_MPaaS20201028::Client::logMsaQuery(shared_ptr<LogMsaQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return logMsaQueryWithOptions(request, runtime);
}

MTRSOCRServiceResponse Alibabacloud_MPaaS20201028::Client::mTRSOCRServiceWithOptions(shared_ptr<MTRSOCRServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageRaw)) {
    body->insert(pair<string, string>("ImageRaw", *request->imageRaw));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->mask)) {
    body->insert(pair<string, bool>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MTRSOCRService"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MTRSOCRServiceResponse(callApi(params, req, runtime));
}

MTRSOCRServiceResponse Alibabacloud_MPaaS20201028::Client::mTRSOCRService(shared_ptr<MTRSOCRServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return mTRSOCRServiceWithOptions(request, runtime);
}

OpenApiAddActiveCodeResponse Alibabacloud_MPaaS20201028::Client::openApiAddActiveCodeWithOptions(shared_ptr<OpenApiAddActiveCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mpaasMqcpOpenApiAddActiveCodeReqJsonStr)) {
    body->insert(pair<string, string>("MpaasMqcpOpenApiAddActiveCodeReqJsonStr", *request->mpaasMqcpOpenApiAddActiveCodeReqJsonStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenApiAddActiveCode"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenApiAddActiveCodeResponse(callApi(params, req, runtime));
}

OpenApiAddActiveCodeResponse Alibabacloud_MPaaS20201028::Client::openApiAddActiveCode(shared_ptr<OpenApiAddActiveCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openApiAddActiveCodeWithOptions(request, runtime);
}

OpenApiAddActiveSceneResponse Alibabacloud_MPaaS20201028::Client::openApiAddActiveSceneWithOptions(shared_ptr<OpenApiAddActiveSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mpaasMqcpOpenApiAddActiveSceneReqJsonStr)) {
    body->insert(pair<string, string>("MpaasMqcpOpenApiAddActiveSceneReqJsonStr", *request->mpaasMqcpOpenApiAddActiveSceneReqJsonStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenApiAddActiveScene"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenApiAddActiveSceneResponse(callApi(params, req, runtime));
}

OpenApiAddActiveSceneResponse Alibabacloud_MPaaS20201028::Client::openApiAddActiveScene(shared_ptr<OpenApiAddActiveSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openApiAddActiveSceneWithOptions(request, runtime);
}

OpenApiCallbackResponse Alibabacloud_MPaaS20201028::Client::openApiCallbackWithOptions(shared_ptr<OpenApiCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mpaasMqcpOpenApiCallbackRequestJsonStr)) {
    body->insert(pair<string, string>("MpaasMqcpOpenApiCallbackRequestJsonStr", *request->mpaasMqcpOpenApiCallbackRequestJsonStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenApiCallback"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenApiCallbackResponse(callApi(params, req, runtime));
}

OpenApiCallbackResponse Alibabacloud_MPaaS20201028::Client::openApiCallback(shared_ptr<OpenApiCallbackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openApiCallbackWithOptions(request, runtime);
}

OpenApiDecodeResponse Alibabacloud_MPaaS20201028::Client::openApiDecodeWithOptions(shared_ptr<OpenApiDecodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mpaasMqcpOpenApiDecodeRequestJsonStr)) {
    body->insert(pair<string, string>("MpaasMqcpOpenApiDecodeRequestJsonStr", *request->mpaasMqcpOpenApiDecodeRequestJsonStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenApiDecode"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenApiDecodeResponse(callApi(params, req, runtime));
}

OpenApiDecodeResponse Alibabacloud_MPaaS20201028::Client::openApiDecode(shared_ptr<OpenApiDecodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openApiDecodeWithOptions(request, runtime);
}

OpenApiDeleteActiveCodeResponse Alibabacloud_MPaaS20201028::Client::openApiDeleteActiveCodeWithOptions(shared_ptr<OpenApiDeleteActiveCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mpaasMqcpOpenApiDeleteActiveCodeReqJsonStr)) {
    body->insert(pair<string, string>("MpaasMqcpOpenApiDeleteActiveCodeReqJsonStr", *request->mpaasMqcpOpenApiDeleteActiveCodeReqJsonStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenApiDeleteActiveCode"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenApiDeleteActiveCodeResponse(callApi(params, req, runtime));
}

OpenApiDeleteActiveCodeResponse Alibabacloud_MPaaS20201028::Client::openApiDeleteActiveCode(shared_ptr<OpenApiDeleteActiveCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openApiDeleteActiveCodeWithOptions(request, runtime);
}

OpenApiEncodeResponse Alibabacloud_MPaaS20201028::Client::openApiEncodeWithOptions(shared_ptr<OpenApiEncodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mpaasMqcpOpenApiEncodeRequestJsonStr)) {
    body->insert(pair<string, string>("MpaasMqcpOpenApiEncodeRequestJsonStr", *request->mpaasMqcpOpenApiEncodeRequestJsonStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenApiEncode"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenApiEncodeResponse(callApi(params, req, runtime));
}

OpenApiEncodeResponse Alibabacloud_MPaaS20201028::Client::openApiEncode(shared_ptr<OpenApiEncodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openApiEncodeWithOptions(request, runtime);
}

OpenApiQueryActiveCodeResponse Alibabacloud_MPaaS20201028::Client::openApiQueryActiveCodeWithOptions(shared_ptr<OpenApiQueryActiveCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mpaasMqcpOpenApiQueryActiveCodeReqJsonStr)) {
    body->insert(pair<string, string>("MpaasMqcpOpenApiQueryActiveCodeReqJsonStr", *request->mpaasMqcpOpenApiQueryActiveCodeReqJsonStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenApiQueryActiveCode"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenApiQueryActiveCodeResponse(callApi(params, req, runtime));
}

OpenApiQueryActiveCodeResponse Alibabacloud_MPaaS20201028::Client::openApiQueryActiveCode(shared_ptr<OpenApiQueryActiveCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openApiQueryActiveCodeWithOptions(request, runtime);
}

OpenApiQueryActiveSceneResponse Alibabacloud_MPaaS20201028::Client::openApiQueryActiveSceneWithOptions(shared_ptr<OpenApiQueryActiveSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mpaasMqcpOpenApiQueryActiveSceneReqJsonStr)) {
    body->insert(pair<string, string>("MpaasMqcpOpenApiQueryActiveSceneReqJsonStr", *request->mpaasMqcpOpenApiQueryActiveSceneReqJsonStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenApiQueryActiveScene"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenApiQueryActiveSceneResponse(callApi(params, req, runtime));
}

OpenApiQueryActiveSceneResponse Alibabacloud_MPaaS20201028::Client::openApiQueryActiveScene(shared_ptr<OpenApiQueryActiveSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openApiQueryActiveSceneWithOptions(request, runtime);
}

OpenApiUniqueEncodeResponse Alibabacloud_MPaaS20201028::Client::openApiUniqueEncodeWithOptions(shared_ptr<OpenApiUniqueEncodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mpaasMqcpOpenApiUniqueEncodeRequestJsonStr)) {
    body->insert(pair<string, string>("MpaasMqcpOpenApiUniqueEncodeRequestJsonStr", *request->mpaasMqcpOpenApiUniqueEncodeRequestJsonStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenApiUniqueEncode"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenApiUniqueEncodeResponse(callApi(params, req, runtime));
}

OpenApiUniqueEncodeResponse Alibabacloud_MPaaS20201028::Client::openApiUniqueEncode(shared_ptr<OpenApiUniqueEncodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openApiUniqueEncodeWithOptions(request, runtime);
}

OpenApiUpdateActiveCodeResponse Alibabacloud_MPaaS20201028::Client::openApiUpdateActiveCodeWithOptions(shared_ptr<OpenApiUpdateActiveCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mpaasMqcpOpenApiUpdateActiveCodeReqJsonStr)) {
    body->insert(pair<string, string>("MpaasMqcpOpenApiUpdateActiveCodeReqJsonStr", *request->mpaasMqcpOpenApiUpdateActiveCodeReqJsonStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenApiUpdateActiveCode"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenApiUpdateActiveCodeResponse(callApi(params, req, runtime));
}

OpenApiUpdateActiveCodeResponse Alibabacloud_MPaaS20201028::Client::openApiUpdateActiveCode(shared_ptr<OpenApiUpdateActiveCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openApiUpdateActiveCodeWithOptions(request, runtime);
}

OpenApiUpdateActiveSceneResponse Alibabacloud_MPaaS20201028::Client::openApiUpdateActiveSceneWithOptions(shared_ptr<OpenApiUpdateActiveSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mpaasMqcpOpenApiUpdateActiveSceneReqJsonStr)) {
    body->insert(pair<string, string>("MpaasMqcpOpenApiUpdateActiveSceneReqJsonStr", *request->mpaasMqcpOpenApiUpdateActiveSceneReqJsonStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenApiUpdateActiveScene"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenApiUpdateActiveSceneResponse(callApi(params, req, runtime));
}

OpenApiUpdateActiveSceneResponse Alibabacloud_MPaaS20201028::Client::openApiUpdateActiveScene(shared_ptr<OpenApiUpdateActiveSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openApiUpdateActiveSceneWithOptions(request, runtime);
}

PushBindResponse Alibabacloud_MPaaS20201028::Client::pushBindWithOptions(shared_ptr<PushBindRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryToken)) {
    body->insert(pair<string, string>("DeliveryToken", *request->deliveryToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->osType)) {
    body->insert(pair<string, long>("OsType", *request->osType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    body->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushBind"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PushBindResponse(callApi(params, req, runtime));
}

PushBindResponse Alibabacloud_MPaaS20201028::Client::pushBind(shared_ptr<PushBindRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pushBindWithOptions(request, runtime);
}

PushBroadcastResponse Alibabacloud_MPaaS20201028::Client::pushBroadcastWithOptions(shared_ptr<PushBroadcastRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<PushBroadcastShrinkRequest> request = make_shared<PushBroadcastShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->thirdChannelCategory)) {
    request->thirdChannelCategoryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->thirdChannelCategory, make_shared<string>("ThirdChannelCategory"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->androidChannel)) {
    body->insert(pair<string, long>("AndroidChannel", *request->androidChannel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bindPeriod)) {
    body->insert(pair<string, long>("BindPeriod", *request->bindPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->classification)) {
    body->insert(pair<string, string>("Classification", *request->classification));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->deliveryType)) {
    body->insert(pair<string, long>("DeliveryType", *request->deliveryType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->expiredSeconds)) {
    body->insert(pair<string, long>("ExpiredSeconds", *request->expiredSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extendedParams)) {
    body->insert(pair<string, string>("ExtendedParams", *request->extendedParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->miChannelId)) {
    body->insert(pair<string, string>("MiChannelId", *request->miChannelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->msgkey)) {
    body->insert(pair<string, string>("Msgkey", *request->msgkey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyType)) {
    body->insert(pair<string, string>("NotifyType", *request->notifyType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pushAction)) {
    body->insert(pair<string, long>("PushAction", *request->pushAction));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pushStatus)) {
    body->insert(pair<string, long>("PushStatus", *request->pushStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->silent)) {
    body->insert(pair<string, long>("Silent", *request->silent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->strategyContent)) {
    body->insert(pair<string, string>("StrategyContent", *request->strategyContent));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->strategyType)) {
    body->insert(pair<string, long>("StrategyType", *request->strategyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    body->insert(pair<string, string>("TaskName", *request->taskName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateKeyValue)) {
    body->insert(pair<string, string>("TemplateKeyValue", *request->templateKeyValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    body->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdChannelCategoryShrink)) {
    body->insert(pair<string, string>("ThirdChannelCategory", *request->thirdChannelCategoryShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->unBindPeriod)) {
    body->insert(pair<string, long>("UnBindPeriod", *request->unBindPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushBroadcast"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PushBroadcastResponse(callApi(params, req, runtime));
}

PushBroadcastResponse Alibabacloud_MPaaS20201028::Client::pushBroadcast(shared_ptr<PushBroadcastRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pushBroadcastWithOptions(request, runtime);
}

PushMultipleResponse Alibabacloud_MPaaS20201028::Client::pushMultipleWithOptions(shared_ptr<PushMultipleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<PushMultipleShrinkRequest> request = make_shared<PushMultipleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->thirdChannelCategory)) {
    request->thirdChannelCategoryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->thirdChannelCategory, make_shared<string>("ThirdChannelCategory"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<boost::any>(request->activityContentState)) {
    body->insert(pair<string, boost::any>("ActivityContentState", *request->activityContentState));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->activityEvent)) {
    body->insert(pair<string, string>("ActivityEvent", *request->activityEvent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->classification)) {
    body->insert(pair<string, string>("Classification", *request->classification));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->deliveryType)) {
    body->insert(pair<string, long>("DeliveryType", *request->deliveryType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dismissalDate)) {
    body->insert(pair<string, long>("DismissalDate", *request->dismissalDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->expiredSeconds)) {
    body->insert(pair<string, long>("ExpiredSeconds", *request->expiredSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extendedParams)) {
    body->insert(pair<string, string>("ExtendedParams", *request->extendedParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->miChannelId)) {
    body->insert(pair<string, string>("MiChannelId", *request->miChannelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyType)) {
    body->insert(pair<string, string>("NotifyType", *request->notifyType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pushAction)) {
    body->insert(pair<string, long>("PushAction", *request->pushAction));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->silent)) {
    body->insert(pair<string, long>("Silent", *request->silent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->strategyContent)) {
    body->insert(pair<string, string>("StrategyContent", *request->strategyContent));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->strategyType)) {
    body->insert(pair<string, long>("StrategyType", *request->strategyType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<PushMultipleShrinkRequestTargetMsg>>(request->targetMsg)) {
    body->insert(pair<string, vector<PushMultipleShrinkRequestTargetMsg>>("TargetMsg", *request->targetMsg));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    body->insert(pair<string, string>("TaskName", *request->taskName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    body->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdChannelCategoryShrink)) {
    body->insert(pair<string, string>("ThirdChannelCategory", *request->thirdChannelCategoryShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushMultiple"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PushMultipleResponse(callApi(params, req, runtime));
}

PushMultipleResponse Alibabacloud_MPaaS20201028::Client::pushMultiple(shared_ptr<PushMultipleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pushMultipleWithOptions(request, runtime);
}

PushReportResponse Alibabacloud_MPaaS20201028::Client::pushReportWithOptions(shared_ptr<PushReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appVersion)) {
    body->insert(pair<string, string>("AppVersion", *request->appVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channel)) {
    body->insert(pair<string, string>("Channel", *request->channel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectType)) {
    body->insert(pair<string, string>("ConnectType", *request->connectType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryToken)) {
    body->insert(pair<string, string>("DeliveryToken", *request->deliveryToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imei)) {
    body->insert(pair<string, string>("Imei", *request->imei));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imsi)) {
    body->insert(pair<string, string>("Imsi", *request->imsi));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    body->insert(pair<string, string>("Model", *request->model));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->osType)) {
    body->insert(pair<string, long>("OsType", *request->osType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pushVersion)) {
    body->insert(pair<string, string>("PushVersion", *request->pushVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->thirdChannel)) {
    body->insert(pair<string, long>("ThirdChannel", *request->thirdChannel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdChannelDeviceToken)) {
    body->insert(pair<string, string>("ThirdChannelDeviceToken", *request->thirdChannelDeviceToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushReport"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PushReportResponse(callApi(params, req, runtime));
}

PushReportResponse Alibabacloud_MPaaS20201028::Client::pushReport(shared_ptr<PushReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pushReportWithOptions(request, runtime);
}

PushSimpleResponse Alibabacloud_MPaaS20201028::Client::pushSimpleWithOptions(shared_ptr<PushSimpleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<PushSimpleShrinkRequest> request = make_shared<PushSimpleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->thirdChannelCategory)) {
    request->thirdChannelCategoryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->thirdChannelCategory, make_shared<string>("ThirdChannelCategory"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<boost::any>(request->activityContentState)) {
    body->insert(pair<string, boost::any>("ActivityContentState", *request->activityContentState));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->activityEvent)) {
    body->insert(pair<string, string>("ActivityEvent", *request->activityEvent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->classification)) {
    body->insert(pair<string, string>("Classification", *request->classification));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->deliveryType)) {
    body->insert(pair<string, long>("DeliveryType", *request->deliveryType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dismissalDate)) {
    body->insert(pair<string, long>("DismissalDate", *request->dismissalDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->expiredSeconds)) {
    body->insert(pair<string, long>("ExpiredSeconds", *request->expiredSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extendedParams)) {
    body->insert(pair<string, string>("ExtendedParams", *request->extendedParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iconUrls)) {
    body->insert(pair<string, string>("IconUrls", *request->iconUrls));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUrls)) {
    body->insert(pair<string, string>("ImageUrls", *request->imageUrls));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->miChannelId)) {
    body->insert(pair<string, string>("MiChannelId", *request->miChannelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyType)) {
    body->insert(pair<string, string>("NotifyType", *request->notifyType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pushAction)) {
    body->insert(pair<string, long>("PushAction", *request->pushAction));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pushStyle)) {
    body->insert(pair<string, long>("PushStyle", *request->pushStyle));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->silent)) {
    body->insert(pair<string, long>("Silent", *request->silent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->smsSignName)) {
    body->insert(pair<string, string>("SmsSignName", *request->smsSignName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->smsStrategy)) {
    body->insert(pair<string, long>("SmsStrategy", *request->smsStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->smsTemplateCode)) {
    body->insert(pair<string, string>("SmsTemplateCode", *request->smsTemplateCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->smsTemplateParam)) {
    body->insert(pair<string, string>("SmsTemplateParam", *request->smsTemplateParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->strategyContent)) {
    body->insert(pair<string, string>("StrategyContent", *request->strategyContent));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->strategyType)) {
    body->insert(pair<string, long>("StrategyType", *request->strategyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetMsgkey)) {
    body->insert(pair<string, string>("TargetMsgkey", *request->targetMsgkey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    body->insert(pair<string, string>("TaskName", *request->taskName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdChannelCategoryShrink)) {
    body->insert(pair<string, string>("ThirdChannelCategory", *request->thirdChannelCategoryShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uri)) {
    body->insert(pair<string, string>("Uri", *request->uri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushSimple"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PushSimpleResponse(callApi(params, req, runtime));
}

PushSimpleResponse Alibabacloud_MPaaS20201028::Client::pushSimple(shared_ptr<PushSimpleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pushSimpleWithOptions(request, runtime);
}

PushTemplateResponse Alibabacloud_MPaaS20201028::Client::pushTemplateWithOptions(shared_ptr<PushTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<PushTemplateShrinkRequest> request = make_shared<PushTemplateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->thirdChannelCategory)) {
    request->thirdChannelCategoryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->thirdChannelCategory, make_shared<string>("ThirdChannelCategory"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<boost::any>(request->activityContentState)) {
    body->insert(pair<string, boost::any>("ActivityContentState", *request->activityContentState));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->activityEvent)) {
    body->insert(pair<string, string>("ActivityEvent", *request->activityEvent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->classification)) {
    body->insert(pair<string, string>("Classification", *request->classification));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->deliveryType)) {
    body->insert(pair<string, long>("DeliveryType", *request->deliveryType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dismissalDate)) {
    body->insert(pair<string, long>("DismissalDate", *request->dismissalDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->expiredSeconds)) {
    body->insert(pair<string, long>("ExpiredSeconds", *request->expiredSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extendedParams)) {
    body->insert(pair<string, string>("ExtendedParams", *request->extendedParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->miChannelId)) {
    body->insert(pair<string, string>("MiChannelId", *request->miChannelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyType)) {
    body->insert(pair<string, string>("NotifyType", *request->notifyType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pushAction)) {
    body->insert(pair<string, long>("PushAction", *request->pushAction));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->silent)) {
    body->insert(pair<string, long>("Silent", *request->silent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->smsSignName)) {
    body->insert(pair<string, string>("SmsSignName", *request->smsSignName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->smsStrategy)) {
    body->insert(pair<string, long>("SmsStrategy", *request->smsStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->smsTemplateCode)) {
    body->insert(pair<string, string>("SmsTemplateCode", *request->smsTemplateCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->smsTemplateParam)) {
    body->insert(pair<string, string>("SmsTemplateParam", *request->smsTemplateParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->strategyContent)) {
    body->insert(pair<string, string>("StrategyContent", *request->strategyContent));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->strategyType)) {
    body->insert(pair<string, long>("StrategyType", *request->strategyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetMsgkey)) {
    body->insert(pair<string, string>("TargetMsgkey", *request->targetMsgkey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    body->insert(pair<string, string>("TaskName", *request->taskName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateKeyValue)) {
    body->insert(pair<string, string>("TemplateKeyValue", *request->templateKeyValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    body->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdChannelCategoryShrink)) {
    body->insert(pair<string, string>("ThirdChannelCategory", *request->thirdChannelCategoryShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushTemplate"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PushTemplateResponse(callApi(params, req, runtime));
}

PushTemplateResponse Alibabacloud_MPaaS20201028::Client::pushTemplate(shared_ptr<PushTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pushTemplateWithOptions(request, runtime);
}

PushUnBindResponse Alibabacloud_MPaaS20201028::Client::pushUnBindWithOptions(shared_ptr<PushUnBindRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryToken)) {
    body->insert(pair<string, string>("DeliveryToken", *request->deliveryToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushUnBind"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PushUnBindResponse(callApi(params, req, runtime));
}

PushUnBindResponse Alibabacloud_MPaaS20201028::Client::pushUnBind(shared_ptr<PushUnBindRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pushUnBindWithOptions(request, runtime);
}

QueryMappCenterAppResponse Alibabacloud_MPaaS20201028::Client::queryMappCenterAppWithOptions(shared_ptr<QueryMappCenterAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMappCenterApp"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMappCenterAppResponse(callApi(params, req, runtime));
}

QueryMappCenterAppResponse Alibabacloud_MPaaS20201028::Client::queryMappCenterApp(shared_ptr<QueryMappCenterAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMappCenterAppWithOptions(request, runtime);
}

QueryMcdpAimResponse Alibabacloud_MPaaS20201028::Client::queryMcdpAimWithOptions(shared_ptr<QueryMcdpAimRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMcdpAim"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMcdpAimResponse(callApi(params, req, runtime));
}

QueryMcdpAimResponse Alibabacloud_MPaaS20201028::Client::queryMcdpAim(shared_ptr<QueryMcdpAimRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMcdpAimWithOptions(request, runtime);
}

QueryMcdpZoneResponse Alibabacloud_MPaaS20201028::Client::queryMcdpZoneWithOptions(shared_ptr<QueryMcdpZoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMcdpZone"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMcdpZoneResponse(callApi(params, req, runtime));
}

QueryMcdpZoneResponse Alibabacloud_MPaaS20201028::Client::queryMcdpZone(shared_ptr<QueryMcdpZoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMcdpZoneWithOptions(request, runtime);
}

QueryMcubeMiniPackageResponse Alibabacloud_MPaaS20201028::Client::queryMcubeMiniPackageWithOptions(shared_ptr<QueryMcubeMiniPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->h5Id)) {
    body->insert(pair<string, string>("H5Id", *request->h5Id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMcubeMiniPackage"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMcubeMiniPackageResponse(callApi(params, req, runtime));
}

QueryMcubeMiniPackageResponse Alibabacloud_MPaaS20201028::Client::queryMcubeMiniPackage(shared_ptr<QueryMcubeMiniPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMcubeMiniPackageWithOptions(request, runtime);
}

QueryMcubeMiniTaskResponse Alibabacloud_MPaaS20201028::Client::queryMcubeMiniTaskWithOptions(shared_ptr<QueryMcubeMiniTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    body->insert(pair<string, long>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMcubeMiniTask"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMcubeMiniTaskResponse(callApi(params, req, runtime));
}

QueryMcubeMiniTaskResponse Alibabacloud_MPaaS20201028::Client::queryMcubeMiniTask(shared_ptr<QueryMcubeMiniTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMcubeMiniTaskWithOptions(request, runtime);
}

QueryMcubeVhostResponse Alibabacloud_MPaaS20201028::Client::queryMcubeVhostWithOptions(shared_ptr<QueryMcubeVhostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMcubeVhost"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMcubeVhostResponse(callApi(params, req, runtime));
}

QueryMcubeVhostResponse Alibabacloud_MPaaS20201028::Client::queryMcubeVhost(shared_ptr<QueryMcubeVhostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMcubeVhostWithOptions(request, runtime);
}

QueryMdsUpgradeTaskDetailResponse Alibabacloud_MPaaS20201028::Client::queryMdsUpgradeTaskDetailWithOptions(shared_ptr<QueryMdsUpgradeTaskDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    body->insert(pair<string, long>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMdsUpgradeTaskDetail"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMdsUpgradeTaskDetailResponse(callApi(params, req, runtime));
}

QueryMdsUpgradeTaskDetailResponse Alibabacloud_MPaaS20201028::Client::queryMdsUpgradeTaskDetail(shared_ptr<QueryMdsUpgradeTaskDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMdsUpgradeTaskDetailWithOptions(request, runtime);
}

QueryMgsApipageResponse Alibabacloud_MPaaS20201028::Client::queryMgsApipageWithOptions(shared_ptr<QueryMgsApipageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiStatus)) {
    body->insert(pair<string, string>("ApiStatus", *request->apiStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiType)) {
    body->insert(pair<string, string>("ApiType", *request->apiType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->format)) {
    body->insert(pair<string, string>("Format", *request->format));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->host)) {
    body->insert(pair<string, string>("Host", *request->host));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->needEncrypt)) {
    body->insert(pair<string, string>("NeedEncrypt", *request->needEncrypt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->needEtag)) {
    body->insert(pair<string, string>("NeedEtag", *request->needEtag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->needSign)) {
    body->insert(pair<string, string>("NeedSign", *request->needSign));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operationType)) {
    body->insert(pair<string, string>("OperationType", *request->operationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->optFuzzy)) {
    body->insert(pair<string, string>("OptFuzzy", *request->optFuzzy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    body->insert(pair<string, long>("PageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sysId)) {
    body->insert(pair<string, long>("SysId", *request->sysId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sysName)) {
    body->insert(pair<string, string>("SysName", *request->sysName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMgsApipage"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMgsApipageResponse(callApi(params, req, runtime));
}

QueryMgsApipageResponse Alibabacloud_MPaaS20201028::Client::queryMgsApipage(shared_ptr<QueryMgsApipageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMgsApipageWithOptions(request, runtime);
}

QueryMgsApirestResponse Alibabacloud_MPaaS20201028::Client::queryMgsApirestWithOptions(shared_ptr<QueryMgsApirestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->format)) {
    body->insert(pair<string, string>("Format", *request->format));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMgsApirest"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMgsApirestResponse(callApi(params, req, runtime));
}

QueryMgsApirestResponse Alibabacloud_MPaaS20201028::Client::queryMgsApirest(shared_ptr<QueryMgsApirestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMgsApirestWithOptions(request, runtime);
}

QueryMgsTestreqbodyautogenResponse Alibabacloud_MPaaS20201028::Client::queryMgsTestreqbodyautogenWithOptions(shared_ptr<QueryMgsTestreqbodyautogenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->format)) {
    body->insert(pair<string, string>("Format", *request->format));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mpaasMappcenterMgsTestreqbodyautogenQueryJsonStr)) {
    body->insert(pair<string, string>("MpaasMappcenterMgsTestreqbodyautogenQueryJsonStr", *request->mpaasMappcenterMgsTestreqbodyautogenQueryJsonStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMgsTestreqbodyautogen"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMgsTestreqbodyautogenResponse(callApi(params, req, runtime));
}

QueryMgsTestreqbodyautogenResponse Alibabacloud_MPaaS20201028::Client::queryMgsTestreqbodyautogen(shared_ptr<QueryMgsTestreqbodyautogenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMgsTestreqbodyautogenWithOptions(request, runtime);
}

QueryMpsSchedulerListResponse Alibabacloud_MPaaS20201028::Client::queryMpsSchedulerListWithOptions(shared_ptr<QueryMpsSchedulerListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    body->insert(pair<string, long>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uniqueId)) {
    body->insert(pair<string, string>("UniqueId", *request->uniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMpsSchedulerList"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMpsSchedulerListResponse(callApi(params, req, runtime));
}

QueryMpsSchedulerListResponse Alibabacloud_MPaaS20201028::Client::queryMpsSchedulerList(shared_ptr<QueryMpsSchedulerListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMpsSchedulerListWithOptions(request, runtime);
}

QueryPushAnalysisCoreIndexResponse Alibabacloud_MPaaS20201028::Client::queryPushAnalysisCoreIndexWithOptions(shared_ptr<QueryPushAnalysisCoreIndexRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channel)) {
    body->insert(pair<string, string>("Channel", *request->channel));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->platform)) {
    body->insert(pair<string, string>("Platform", *request->platform));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPushAnalysisCoreIndex"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPushAnalysisCoreIndexResponse(callApi(params, req, runtime));
}

QueryPushAnalysisCoreIndexResponse Alibabacloud_MPaaS20201028::Client::queryPushAnalysisCoreIndex(shared_ptr<QueryPushAnalysisCoreIndexRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPushAnalysisCoreIndexWithOptions(request, runtime);
}

QueryPushAnalysisTaskDetailResponse Alibabacloud_MPaaS20201028::Client::queryPushAnalysisTaskDetailWithOptions(shared_ptr<QueryPushAnalysisTaskDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPushAnalysisTaskDetail"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPushAnalysisTaskDetailResponse(callApi(params, req, runtime));
}

QueryPushAnalysisTaskDetailResponse Alibabacloud_MPaaS20201028::Client::queryPushAnalysisTaskDetail(shared_ptr<QueryPushAnalysisTaskDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPushAnalysisTaskDetailWithOptions(request, runtime);
}

QueryPushAnalysisTaskListResponse Alibabacloud_MPaaS20201028::Client::queryPushAnalysisTaskListWithOptions(shared_ptr<QueryPushAnalysisTaskListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    body->insert(pair<string, string>("TaskName", *request->taskName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPushAnalysisTaskList"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPushAnalysisTaskListResponse(callApi(params, req, runtime));
}

QueryPushAnalysisTaskListResponse Alibabacloud_MPaaS20201028::Client::queryPushAnalysisTaskList(shared_ptr<QueryPushAnalysisTaskListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPushAnalysisTaskListWithOptions(request, runtime);
}

QueryPushSchedulerListResponse Alibabacloud_MPaaS20201028::Client::queryPushSchedulerListWithOptions(shared_ptr<QueryPushSchedulerListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    body->insert(pair<string, long>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uniqueId)) {
    body->insert(pair<string, string>("UniqueId", *request->uniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPushSchedulerList"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPushSchedulerListResponse(callApi(params, req, runtime));
}

QueryPushSchedulerListResponse Alibabacloud_MPaaS20201028::Client::queryPushSchedulerList(shared_ptr<QueryPushSchedulerListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPushSchedulerListWithOptions(request, runtime);
}

RevokePushMessageResponse Alibabacloud_MPaaS20201028::Client::revokePushMessageWithOptions(shared_ptr<RevokePushMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->messageId)) {
    body->insert(pair<string, string>("MessageId", *request->messageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetId)) {
    body->insert(pair<string, string>("TargetId", *request->targetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RevokePushMessage"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RevokePushMessageResponse(callApi(params, req, runtime));
}

RevokePushMessageResponse Alibabacloud_MPaaS20201028::Client::revokePushMessage(shared_ptr<RevokePushMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokePushMessageWithOptions(request, runtime);
}

RevokePushTaskResponse Alibabacloud_MPaaS20201028::Client::revokePushTaskWithOptions(shared_ptr<RevokePushTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RevokePushTask"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RevokePushTaskResponse(callApi(params, req, runtime));
}

RevokePushTaskResponse Alibabacloud_MPaaS20201028::Client::revokePushTask(shared_ptr<RevokePushTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokePushTaskWithOptions(request, runtime);
}

RunMsaDiffResponse Alibabacloud_MPaaS20201028::Client::runMsaDiffWithOptions(shared_ptr<RunMsaDiffRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mpaasMappcenterMsaDiffRunJsonStr)) {
    body->insert(pair<string, string>("MpaasMappcenterMsaDiffRunJsonStr", *request->mpaasMappcenterMsaDiffRunJsonStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunMsaDiff"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunMsaDiffResponse(callApi(params, req, runtime));
}

RunMsaDiffResponse Alibabacloud_MPaaS20201028::Client::runMsaDiff(shared_ptr<RunMsaDiffRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runMsaDiffWithOptions(request, runtime);
}

SaveMgsApirestResponse Alibabacloud_MPaaS20201028::Client::saveMgsApirestWithOptions(shared_ptr<SaveMgsApirestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mpaasMappcenterMgsApirestSaveJsonStr)) {
    body->insert(pair<string, string>("MpaasMappcenterMgsApirestSaveJsonStr", *request->mpaasMappcenterMgsApirestSaveJsonStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveMgsApirest"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveMgsApirestResponse(callApi(params, req, runtime));
}

SaveMgsApirestResponse Alibabacloud_MPaaS20201028::Client::saveMgsApirest(shared_ptr<SaveMgsApirestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveMgsApirestWithOptions(request, runtime);
}

StartUserAppAsyncEnhanceInMsaResponse Alibabacloud_MPaaS20201028::Client::startUserAppAsyncEnhanceInMsaWithOptions(shared_ptr<StartUserAppAsyncEnhanceInMsaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->apkProtector)) {
    body->insert(pair<string, bool>("ApkProtector", *request->apkProtector));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->assetsFileList)) {
    body->insert(pair<string, string>("AssetsFileList", *request->assetsFileList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->classes)) {
    body->insert(pair<string, string>("Classes", *request->classes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dalvikDebugger)) {
    body->insert(pair<string, long>("DalvikDebugger", *request->dalvikDebugger));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->emulatorEnvironment)) {
    body->insert(pair<string, long>("EmulatorEnvironment", *request->emulatorEnvironment));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->javaHook)) {
    body->insert(pair<string, long>("JavaHook", *request->javaHook));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->memoryDump)) {
    body->insert(pair<string, long>("MemoryDump", *request->memoryDump));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nativeDebugger)) {
    body->insert(pair<string, long>("NativeDebugger", *request->nativeDebugger));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nativeHook)) {
    body->insert(pair<string, long>("NativeHook", *request->nativeHook));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->packageTampered)) {
    body->insert(pair<string, long>("PackageTampered", *request->packageTampered));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->root)) {
    body->insert(pair<string, long>("Root", *request->root));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runMode)) {
    body->insert(pair<string, string>("RunMode", *request->runMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->soFileList)) {
    body->insert(pair<string, string>("SoFileList", *request->soFileList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    body->insert(pair<string, string>("TaskType", *request->taskType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->totalSwitch)) {
    body->insert(pair<string, bool>("TotalSwitch", *request->totalSwitch));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAShield)) {
    body->insert(pair<string, bool>("UseAShield", *request->useAShield));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartUserAppAsyncEnhanceInMsa"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartUserAppAsyncEnhanceInMsaResponse(callApi(params, req, runtime));
}

StartUserAppAsyncEnhanceInMsaResponse Alibabacloud_MPaaS20201028::Client::startUserAppAsyncEnhanceInMsa(shared_ptr<StartUserAppAsyncEnhanceInMsaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startUserAppAsyncEnhanceInMsaWithOptions(request, runtime);
}

UpdateMcubeWhitelistResponse Alibabacloud_MPaaS20201028::Client::updateMcubeWhitelistWithOptions(shared_ptr<UpdateMcubeWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyIds)) {
    body->insert(pair<string, string>("KeyIds", *request->keyIds));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->onexFlag)) {
    body->insert(pair<string, bool>("OnexFlag", *request->onexFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossUrl)) {
    body->insert(pair<string, string>("OssUrl", *request->ossUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMcubeWhitelist"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMcubeWhitelistResponse(callApi(params, req, runtime));
}

UpdateMcubeWhitelistResponse Alibabacloud_MPaaS20201028::Client::updateMcubeWhitelist(shared_ptr<UpdateMcubeWhitelistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMcubeWhitelistWithOptions(request, runtime);
}

UpdateMpaasAppInfoResponse Alibabacloud_MPaaS20201028::Client::updateMpaasAppInfoWithOptions(shared_ptr<UpdateMpaasAppInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iconFileUrl)) {
    body->insert(pair<string, string>("IconFileUrl", *request->iconFileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    body->insert(pair<string, string>("Identifier", *request->identifier));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->onexFlag)) {
    body->insert(pair<string, bool>("OnexFlag", *request->onexFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemType)) {
    body->insert(pair<string, string>("SystemType", *request->systemType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMpaasAppInfo"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMpaasAppInfoResponse(callApi(params, req, runtime));
}

UpdateMpaasAppInfoResponse Alibabacloud_MPaaS20201028::Client::updateMpaasAppInfo(shared_ptr<UpdateMpaasAppInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMpaasAppInfoWithOptions(request, runtime);
}

UploadBitcodeToMsaResponse Alibabacloud_MPaaS20201028::Client::uploadBitcodeToMsaWithOptions(shared_ptr<UploadBitcodeToMsaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bitcode)) {
    body->insert(pair<string, string>("Bitcode", *request->bitcode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->codeVersion)) {
    body->insert(pair<string, string>("CodeVersion", *request->codeVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->license)) {
    body->insert(pair<string, string>("License", *request->license));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadBitcodeToMsa"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadBitcodeToMsaResponse(callApi(params, req, runtime));
}

UploadBitcodeToMsaResponse Alibabacloud_MPaaS20201028::Client::uploadBitcodeToMsa(shared_ptr<UploadBitcodeToMsaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadBitcodeToMsaWithOptions(request, runtime);
}

UploadMcubeMiniPackageResponse Alibabacloud_MPaaS20201028::Client::uploadMcubeMiniPackageWithOptions(shared_ptr<UploadMcubeMiniPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->autoInstall)) {
    body->insert(pair<string, long>("AutoInstall", *request->autoInstall));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientVersionMax)) {
    body->insert(pair<string, string>("ClientVersionMax", *request->clientVersionMax));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientVersionMin)) {
    body->insert(pair<string, string>("ClientVersionMin", *request->clientVersionMin));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enableKeepAlive)) {
    body->insert(pair<string, string>("EnableKeepAlive", *request->enableKeepAlive));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enableOptionMenu)) {
    body->insert(pair<string, string>("EnableOptionMenu", *request->enableOptionMenu));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->enableTabBar)) {
    body->insert(pair<string, long>("EnableTabBar", *request->enableTabBar));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extendInfo)) {
    body->insert(pair<string, string>("ExtendInfo", *request->extendInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->h5Id)) {
    body->insert(pair<string, string>("H5Id", *request->h5Id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->h5Name)) {
    body->insert(pair<string, string>("H5Name", *request->h5Name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->h5Version)) {
    body->insert(pair<string, string>("H5Version", *request->h5Version));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iconFileUrl)) {
    body->insert(pair<string, string>("IconFileUrl", *request->iconFileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iconUrl)) {
    body->insert(pair<string, string>("IconUrl", *request->iconUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->installType)) {
    body->insert(pair<string, long>("InstallType", *request->installType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mainUrl)) {
    body->insert(pair<string, string>("MainUrl", *request->mainUrl));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->onexFlag)) {
    body->insert(pair<string, bool>("OnexFlag", *request->onexFlag));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->packageType)) {
    body->insert(pair<string, long>("PackageType", *request->packageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->platform)) {
    body->insert(pair<string, string>("Platform", *request->platform));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceFileUrl)) {
    body->insert(pair<string, string>("ResourceFileUrl", *request->resourceFileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceType)) {
    body->insert(pair<string, long>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    body->insert(pair<string, string>("Uuid", *request->uuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vhost)) {
    body->insert(pair<string, string>("Vhost", *request->vhost));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadMcubeMiniPackage"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadMcubeMiniPackageResponse(callApi(params, req, runtime));
}

UploadMcubeMiniPackageResponse Alibabacloud_MPaaS20201028::Client::uploadMcubeMiniPackage(shared_ptr<UploadMcubeMiniPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadMcubeMiniPackageWithOptions(request, runtime);
}

UploadMcubeRsaKeyResponse Alibabacloud_MPaaS20201028::Client::uploadMcubeRsaKeyWithOptions(shared_ptr<UploadMcubeRsaKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileUrl)) {
    body->insert(pair<string, string>("FileUrl", *request->fileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->onexFlag)) {
    body->insert(pair<string, bool>("OnexFlag", *request->onexFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadMcubeRsaKey"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadMcubeRsaKeyResponse(callApi(params, req, runtime));
}

UploadMcubeRsaKeyResponse Alibabacloud_MPaaS20201028::Client::uploadMcubeRsaKey(shared_ptr<UploadMcubeRsaKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadMcubeRsaKeyWithOptions(request, runtime);
}

UploadUserAppToMsaResponse Alibabacloud_MPaaS20201028::Client::uploadUserAppToMsaWithOptions(shared_ptr<UploadUserAppToMsaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileUrl)) {
    body->insert(pair<string, string>("FileUrl", *request->fileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadUserAppToMsa"))},
    {"version", boost::any(string("2020-10-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadUserAppToMsaResponse(callApi(params, req, runtime));
}

UploadUserAppToMsaResponse Alibabacloud_MPaaS20201028::Client::uploadUserAppToMsa(shared_ptr<UploadUserAppToMsaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadUserAppToMsaWithOptions(request, runtime);
}

