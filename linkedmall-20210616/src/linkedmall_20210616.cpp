// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/linkedmall_20210616.hpp>
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

using namespace Alibabacloud_Linkedmall20210616;

Alibabacloud_Linkedmall20210616::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-hangzhou", "linkedmall.aliyuncs.com"},
    {"cn-shanghai", "linkedmall.aliyuncs.com"},
    {"ap-northeast-1", "linkedmall.aliyuncs.com"},
    {"ap-northeast-2-pop", "linkedmall.aliyuncs.com"},
    {"ap-south-1", "linkedmall.aliyuncs.com"},
    {"ap-southeast-1", "linkedmall.aliyuncs.com"},
    {"ap-southeast-2", "linkedmall.aliyuncs.com"},
    {"ap-southeast-3", "linkedmall.aliyuncs.com"},
    {"ap-southeast-5", "linkedmall.aliyuncs.com"},
    {"cn-beijing", "linkedmall.aliyuncs.com"},
    {"cn-beijing-finance-1", "linkedmall.aliyuncs.com"},
    {"cn-beijing-finance-pop", "linkedmall.aliyuncs.com"},
    {"cn-beijing-gov-1", "linkedmall.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "linkedmall.aliyuncs.com"},
    {"cn-chengdu", "linkedmall.aliyuncs.com"},
    {"cn-edge-1", "linkedmall.aliyuncs.com"},
    {"cn-fujian", "linkedmall.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "linkedmall.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "linkedmall.aliyuncs.com"},
    {"cn-hangzhou-finance", "linkedmall.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "linkedmall.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "linkedmall.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "linkedmall.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "linkedmall.aliyuncs.com"},
    {"cn-hangzhou-test-306", "linkedmall.aliyuncs.com"},
    {"cn-hongkong", "linkedmall.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "linkedmall.aliyuncs.com"},
    {"cn-huhehaote", "linkedmall.aliyuncs.com"},
    {"cn-north-2-gov-1", "linkedmall.aliyuncs.com"},
    {"cn-qingdao", "linkedmall.aliyuncs.com"},
    {"cn-qingdao-nebula", "linkedmall.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "linkedmall.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "linkedmall.aliyuncs.com"},
    {"cn-shanghai-finance-1", "linkedmall.aliyuncs.com"},
    {"cn-shanghai-inner", "linkedmall.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "linkedmall.aliyuncs.com"},
    {"cn-shenzhen", "linkedmall.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "linkedmall.aliyuncs.com"},
    {"cn-shenzhen-inner", "linkedmall.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "linkedmall.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "linkedmall.aliyuncs.com"},
    {"cn-wuhan", "linkedmall.aliyuncs.com"},
    {"cn-yushanfang", "linkedmall.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "linkedmall.aliyuncs.com"},
    {"cn-zhangjiakou", "linkedmall.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "linkedmall.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "linkedmall.aliyuncs.com"},
    {"eu-central-1", "linkedmall.aliyuncs.com"},
    {"eu-west-1", "linkedmall.aliyuncs.com"},
    {"eu-west-1-oxs", "linkedmall.aliyuncs.com"},
    {"me-east-1", "linkedmall.aliyuncs.com"},
    {"rus-west-1-pop", "linkedmall.aliyuncs.com"},
    {"us-east-1", "linkedmall.aliyuncs.com"},
    {"us-west-1", "linkedmall.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("linkedmall"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Linkedmall20210616::Client::getEndpoint(shared_ptr<string> productId,
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

AssignPermissionsToRoleResponse Alibabacloud_Linkedmall20210616::Client::assignPermissionsToRoleWithOptions(shared_ptr<AssignPermissionsToRoleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AssignPermissionsToRoleShrinkRequest> request = make_shared<AssignPermissionsToRoleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->permissionCodes)) {
    request->permissionCodesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->permissionCodes, make_shared<string>("PermissionCodes"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->permissionIds)) {
    request->permissionIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->permissionIds, make_shared<string>("PermissionIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->permissionCodesShrink)) {
    query->insert(pair<string, string>("PermissionCodes", *request->permissionCodesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->permissionIdsShrink)) {
    query->insert(pair<string, string>("PermissionIds", *request->permissionIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleCode)) {
    query->insert(pair<string, string>("RoleCode", *request->roleCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleId)) {
    query->insert(pair<string, string>("RoleId", *request->roleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    query->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssignPermissionsToRole"))},
    {"version", boost::any(string("2021-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AssignPermissionsToRoleResponse(callApi(params, req, runtime));
}

AssignPermissionsToRoleResponse Alibabacloud_Linkedmall20210616::Client::assignPermissionsToRole(shared_ptr<AssignPermissionsToRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return assignPermissionsToRoleWithOptions(request, runtime);
}

AssignResourcesToPermissionResponse Alibabacloud_Linkedmall20210616::Client::assignResourcesToPermissionWithOptions(shared_ptr<AssignResourcesToPermissionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AssignResourcesToPermissionShrinkRequest> request = make_shared<AssignResourcesToPermissionShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->resourceCodes)) {
    request->resourceCodesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resourceCodes, make_shared<string>("ResourceCodes"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->resourceIds)) {
    request->resourceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resourceIds, make_shared<string>("ResourceIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->permissionCode)) {
    query->insert(pair<string, string>("PermissionCode", *request->permissionCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->permissionId)) {
    query->insert(pair<string, string>("PermissionId", *request->permissionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    query->insert(pair<string, string>("RequestId", *request->requestId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceCodesShrink)) {
    query->insert(pair<string, string>("ResourceCodes", *request->resourceCodesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIdsShrink)) {
    query->insert(pair<string, string>("ResourceIds", *request->resourceIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    query->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssignResourcesToPermission"))},
    {"version", boost::any(string("2021-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AssignResourcesToPermissionResponse(callApi(params, req, runtime));
}

AssignResourcesToPermissionResponse Alibabacloud_Linkedmall20210616::Client::assignResourcesToPermission(shared_ptr<AssignResourcesToPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return assignResourcesToPermissionWithOptions(request, runtime);
}

CheckPermissionOfRoleResponse Alibabacloud_Linkedmall20210616::Client::checkPermissionOfRoleWithOptions(shared_ptr<CheckPermissionOfRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckPermissionOfRole"))},
    {"version", boost::any(string("2021-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckPermissionOfRoleResponse(callApi(params, req, runtime));
}

CheckPermissionOfRoleResponse Alibabacloud_Linkedmall20210616::Client::checkPermissionOfRole(shared_ptr<CheckPermissionOfRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkPermissionOfRoleWithOptions(request, runtime);
}

CreatePermissionResponse Alibabacloud_Linkedmall20210616::Client::createPermissionWithOptions(shared_ptr<CreatePermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->actionType)) {
    query->insert(pair<string, string>("ActionType", *request->actionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    query->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->permissionItemId)) {
    query->insert(pair<string, string>("PermissionItemId", *request->permissionItemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    query->insert(pair<string, string>("RequestId", *request->requestId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    query->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->urlForApply)) {
    query->insert(pair<string, string>("UrlForApply", *request->urlForApply));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePermission"))},
    {"version", boost::any(string("2021-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePermissionResponse(callApi(params, req, runtime));
}

CreatePermissionResponse Alibabacloud_Linkedmall20210616::Client::createPermission(shared_ptr<CreatePermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPermissionWithOptions(request, runtime);
}

CreateResourceResponse Alibabacloud_Linkedmall20210616::Client::createResourceWithOptions(shared_ptr<CreateResourceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateResourceShrinkRequest> request = make_shared<CreateResourceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->resourceAttributeList)) {
    request->resourceAttributeListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resourceAttributeList, make_shared<string>("ResourceAttributeList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    query->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creator)) {
    query->insert(pair<string, string>("Creator", *request->creator));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    query->insert(pair<string, string>("RequestId", *request->requestId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceAttributeListShrink)) {
    query->insert(pair<string, string>("ResourceAttributeList", *request->resourceAttributeListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    query->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateResource"))},
    {"version", boost::any(string("2021-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateResourceResponse(callApi(params, req, runtime));
}

CreateResourceResponse Alibabacloud_Linkedmall20210616::Client::createResource(shared_ptr<CreateResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createResourceWithOptions(request, runtime);
}

CreateRoleResponse Alibabacloud_Linkedmall20210616::Client::createRoleWithOptions(shared_ptr<CreateRoleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateRoleShrinkRequest> request = make_shared<CreateRoleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->extendRoleIds)) {
    request->extendRoleIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extendRoleIds, make_shared<string>("ExtendRoleIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->mutexRoleIds)) {
    request->mutexRoleIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->mutexRoleIds, make_shared<string>("MutexRoleIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    query->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extendRoleIdsShrink)) {
    query->insert(pair<string, string>("ExtendRoleIds", *request->extendRoleIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mutexRoleIdsShrink)) {
    query->insert(pair<string, string>("MutexRoleIds", *request->mutexRoleIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    query->insert(pair<string, string>("RequestId", *request->requestId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    query->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRole"))},
    {"version", boost::any(string("2021-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRoleResponse(callApi(params, req, runtime));
}

CreateRoleResponse Alibabacloud_Linkedmall20210616::Client::createRole(shared_ptr<CreateRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRoleWithOptions(request, runtime);
}

QueryAllPermissionOfRoleResponse Alibabacloud_Linkedmall20210616::Client::queryAllPermissionOfRoleWithOptions(shared_ptr<QueryAllPermissionOfRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAllPermissionOfRole"))},
    {"version", boost::any(string("2021-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAllPermissionOfRoleResponse(callApi(params, req, runtime));
}

QueryAllPermissionOfRoleResponse Alibabacloud_Linkedmall20210616::Client::queryAllPermissionOfRole(shared_ptr<QueryAllPermissionOfRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAllPermissionOfRoleWithOptions(request, runtime);
}

QueryAllResourcesWithPermissionsResponse Alibabacloud_Linkedmall20210616::Client::queryAllResourcesWithPermissionsWithOptions(shared_ptr<QueryAllResourcesWithPermissionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAllResourcesWithPermissions"))},
    {"version", boost::any(string("2021-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAllResourcesWithPermissionsResponse(callApi(params, req, runtime));
}

QueryAllResourcesWithPermissionsResponse Alibabacloud_Linkedmall20210616::Client::queryAllResourcesWithPermissions(shared_ptr<QueryAllResourcesWithPermissionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAllResourcesWithPermissionsWithOptions(request, runtime);
}

QueryPermissionsResponse Alibabacloud_Linkedmall20210616::Client::queryPermissionsWithOptions(shared_ptr<QueryPermissionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPermissions"))},
    {"version", boost::any(string("2021-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPermissionsResponse(callApi(params, req, runtime));
}

QueryPermissionsResponse Alibabacloud_Linkedmall20210616::Client::queryPermissions(shared_ptr<QueryPermissionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPermissionsWithOptions(request, runtime);
}

QueryRolesByPartialRoleCodeResponse Alibabacloud_Linkedmall20210616::Client::queryRolesByPartialRoleCodeWithOptions(shared_ptr<QueryRolesByPartialRoleCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryRolesByPartialRoleCode"))},
    {"version", boost::any(string("2021-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryRolesByPartialRoleCodeResponse(callApi(params, req, runtime));
}

QueryRolesByPartialRoleCodeResponse Alibabacloud_Linkedmall20210616::Client::queryRolesByPartialRoleCode(shared_ptr<QueryRolesByPartialRoleCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRolesByPartialRoleCodeWithOptions(request, runtime);
}

RemovePermissionsOfRoleResponse Alibabacloud_Linkedmall20210616::Client::removePermissionsOfRoleWithOptions(shared_ptr<RemovePermissionsOfRoleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RemovePermissionsOfRoleShrinkRequest> request = make_shared<RemovePermissionsOfRoleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->permissionCodes)) {
    request->permissionCodesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->permissionCodes, make_shared<string>("PermissionCodes"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->permissionIds)) {
    request->permissionIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->permissionIds, make_shared<string>("PermissionIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->permissionCodesShrink)) {
    query->insert(pair<string, string>("PermissionCodes", *request->permissionCodesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->permissionIdsShrink)) {
    query->insert(pair<string, string>("PermissionIds", *request->permissionIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleCode)) {
    query->insert(pair<string, string>("RoleCode", *request->roleCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleId)) {
    query->insert(pair<string, string>("RoleId", *request->roleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    query->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemovePermissionsOfRole"))},
    {"version", boost::any(string("2021-06-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemovePermissionsOfRoleResponse(callApi(params, req, runtime));
}

RemovePermissionsOfRoleResponse Alibabacloud_Linkedmall20210616::Client::removePermissionsOfRole(shared_ptr<RemovePermissionsOfRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removePermissionsOfRoleWithOptions(request, runtime);
}

