// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cs20151215.hpp>
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

using namespace Alibabacloud_CS20151215;

Alibabacloud_CS20151215::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _signatureAlgorithm = make_shared<string>("v2");
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-2-pop", "cs.aliyuncs.com"},
    {"cn-beijing-finance-pop", "cs.aliyuncs.com"},
    {"cn-beijing-gov-1", "cs.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "cs.aliyuncs.com"},
    {"cn-edge-1", "cs.aliyuncs.com"},
    {"cn-fujian", "cs.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "cs.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "cs.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "cs.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "cs.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "cs.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "cs.aliyuncs.com"},
    {"cn-hangzhou-test-306", "cs.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "cs.aliyuncs.com"},
    {"cn-qingdao-nebula", "cs.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "cs.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "cs.aliyuncs.com"},
    {"cn-shanghai-inner", "cs.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "cs.aliyuncs.com"},
    {"cn-shenzhen-inner", "cs.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "cs.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "cs.aliyuncs.com"},
    {"cn-wuhan", "cs.aliyuncs.com"},
    {"cn-yushanfang", "cs.aliyuncs.com"},
    {"cn-zhangbei", "cs.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "cs.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "cs.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "cs.aliyuncs.com"},
    {"eu-west-1-oxs", "cs.aliyuncs.com"},
    {"rus-west-1-pop", "cs.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("cs"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_CS20151215::Client::getEndpoint(shared_ptr<string> productId,
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

AttachInstancesResponse Alibabacloud_CS20151215::Client::attachInstancesWithOptions(shared_ptr<string> ClusterId,
                                                                                    shared_ptr<AttachInstancesRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cpuPolicy)) {
    body->insert(pair<string, string>("cpu_policy", *request->cpuPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->formatDisk)) {
    body->insert(pair<string, bool>("format_disk", *request->formatDisk));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    body->insert(pair<string, string>("image_id", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instances)) {
    body->insert(pair<string, vector<string>>("instances", *request->instances));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isEdgeWorker)) {
    body->insert(pair<string, bool>("is_edge_worker", *request->isEdgeWorker));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->keepInstanceName)) {
    body->insert(pair<string, bool>("keep_instance_name", *request->keepInstanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPair)) {
    body->insert(pair<string, string>("key_pair", *request->keyPair));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodepoolId)) {
    body->insert(pair<string, string>("nodepool_id", *request->nodepoolId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    body->insert(pair<string, string>("password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->rdsInstances)) {
    body->insert(pair<string, vector<string>>("rds_instances", *request->rdsInstances));
  }
  if (!Darabonba_Util::Client::isUnset<Runtime>(request->runtime)) {
    body->insert(pair<string, Runtime>("runtime", *request->runtime));
  }
  if (!Darabonba_Util::Client::isUnset<vector<Tag>>(request->tags)) {
    body->insert(pair<string, vector<Tag>>("tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    body->insert(pair<string, string>("user_data", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachInstances"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/attach"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachInstancesResponse(callApi(params, req, runtime));
}

AttachInstancesResponse Alibabacloud_CS20151215::Client::attachInstances(shared_ptr<string> ClusterId, shared_ptr<AttachInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return attachInstancesWithOptions(ClusterId, request, headers, runtime);
}

AttachInstancesToNodePoolResponse Alibabacloud_CS20151215::Client::attachInstancesToNodePoolWithOptions(shared_ptr<string> ClusterId,
                                                                                                        shared_ptr<string> NodepoolId,
                                                                                                        shared_ptr<AttachInstancesToNodePoolRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->formatDisk)) {
    body->insert(pair<string, bool>("format_disk", *request->formatDisk));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instances)) {
    body->insert(pair<string, vector<string>>("instances", *request->instances));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->keepInstanceName)) {
    body->insert(pair<string, bool>("keep_instance_name", *request->keepInstanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    body->insert(pair<string, string>("password", *request->password));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachInstancesToNodePool"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/nodepools/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(NodepoolId)) + string("/attach"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachInstancesToNodePoolResponse(callApi(params, req, runtime));
}

AttachInstancesToNodePoolResponse Alibabacloud_CS20151215::Client::attachInstancesToNodePool(shared_ptr<string> ClusterId, shared_ptr<string> NodepoolId, shared_ptr<AttachInstancesToNodePoolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return attachInstancesToNodePoolWithOptions(ClusterId, NodepoolId, request, headers, runtime);
}

CancelClusterUpgradeResponse Alibabacloud_CS20151215::Client::cancelClusterUpgradeWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelClusterUpgrade"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/upgrade/cancel"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return CancelClusterUpgradeResponse(callApi(params, req, runtime));
}

CancelClusterUpgradeResponse Alibabacloud_CS20151215::Client::cancelClusterUpgrade(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cancelClusterUpgradeWithOptions(ClusterId, headers, runtime);
}

CancelComponentUpgradeResponse Alibabacloud_CS20151215::Client::cancelComponentUpgradeWithOptions(shared_ptr<string> clusterId,
                                                                                                  shared_ptr<string> componentId,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelComponentUpgrade"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/components/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(componentId)) + string("/cancel"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return CancelComponentUpgradeResponse(callApi(params, req, runtime));
}

CancelComponentUpgradeResponse Alibabacloud_CS20151215::Client::cancelComponentUpgrade(shared_ptr<string> clusterId, shared_ptr<string> componentId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cancelComponentUpgradeWithOptions(clusterId, componentId, headers, runtime);
}

CancelOperationPlanResponse Alibabacloud_CS20151215::Client::cancelOperationPlanWithOptions(shared_ptr<string> planId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelOperationPlan"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/operation/plans/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(planId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelOperationPlanResponse(callApi(params, req, runtime));
}

CancelOperationPlanResponse Alibabacloud_CS20151215::Client::cancelOperationPlan(shared_ptr<string> planId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cancelOperationPlanWithOptions(planId, headers, runtime);
}

CancelTaskResponse Alibabacloud_CS20151215::Client::cancelTaskWithOptions(shared_ptr<string> taskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelTask"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(taskId)) + string("/cancel"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return CancelTaskResponse(callApi(params, req, runtime));
}

CancelTaskResponse Alibabacloud_CS20151215::Client::cancelTask(shared_ptr<string> taskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cancelTaskWithOptions(taskId, headers, runtime);
}

CheckControlPlaneLogEnableResponse Alibabacloud_CS20151215::Client::checkControlPlaneLogEnableWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckControlPlaneLogEnable"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/controlplanelog"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckControlPlaneLogEnableResponse(callApi(params, req, runtime));
}

CheckControlPlaneLogEnableResponse Alibabacloud_CS20151215::Client::checkControlPlaneLogEnable(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return checkControlPlaneLogEnableWithOptions(ClusterId, headers, runtime);
}

CheckServiceRoleResponse Alibabacloud_CS20151215::Client::checkServiceRoleWithOptions(shared_ptr<CheckServiceRoleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CheckServiceRoleRequestRoles>>(request->roles)) {
    body->insert(pair<string, vector<CheckServiceRoleRequestRoles>>("roles", *request->roles));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckServiceRole"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ram/check-service-role"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckServiceRoleResponse(callApi(params, req, runtime));
}

CheckServiceRoleResponse Alibabacloud_CS20151215::Client::checkServiceRole(shared_ptr<CheckServiceRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return checkServiceRoleWithOptions(request, headers, runtime);
}

CleanClusterUserPermissionsResponse Alibabacloud_CS20151215::Client::cleanClusterUserPermissionsWithOptions(shared_ptr<string> ClusterId,
                                                                                                            shared_ptr<string> Uid,
                                                                                                            shared_ptr<CleanClusterUserPermissionsRequest> request,
                                                                                                            shared_ptr<map<string, string>> headers,
                                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->force)) {
    query->insert(pair<string, bool>("Force", *request->force));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CleanClusterUserPermissions"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/cluster/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/user/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Uid)) + string("/permissions"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return CleanClusterUserPermissionsResponse(callApi(params, req, runtime));
}

CleanClusterUserPermissionsResponse Alibabacloud_CS20151215::Client::cleanClusterUserPermissions(shared_ptr<string> ClusterId, shared_ptr<string> Uid, shared_ptr<CleanClusterUserPermissionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cleanClusterUserPermissionsWithOptions(ClusterId, Uid, request, headers, runtime);
}

CleanUserPermissionsResponse Alibabacloud_CS20151215::Client::cleanUserPermissionsWithOptions(shared_ptr<string> Uid,
                                                                                              shared_ptr<CleanUserPermissionsRequest> tmpReq,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CleanUserPermissionsShrinkRequest> request = make_shared<CleanUserPermissionsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->clusterIds)) {
    request->clusterIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->clusterIds, make_shared<string>("ClusterIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterIdsShrink)) {
    query->insert(pair<string, string>("ClusterIds", *request->clusterIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->force)) {
    query->insert(pair<string, bool>("Force", *request->force));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CleanUserPermissions"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/users/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Uid)) + string("/permissions"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CleanUserPermissionsResponse(callApi(params, req, runtime));
}

CleanUserPermissionsResponse Alibabacloud_CS20151215::Client::cleanUserPermissions(shared_ptr<string> Uid, shared_ptr<CleanUserPermissionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cleanUserPermissionsWithOptions(Uid, request, headers, runtime);
}

CreateAutoscalingConfigResponse Alibabacloud_CS20151215::Client::createAutoscalingConfigWithOptions(shared_ptr<string> ClusterId,
                                                                                                    shared_ptr<CreateAutoscalingConfigRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->coolDownDuration)) {
    body->insert(pair<string, string>("cool_down_duration", *request->coolDownDuration));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->daemonsetEvictionForNodes)) {
    body->insert(pair<string, bool>("daemonset_eviction_for_nodes", *request->daemonsetEvictionForNodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expander)) {
    body->insert(pair<string, string>("expander", *request->expander));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gpuUtilizationThreshold)) {
    body->insert(pair<string, string>("gpu_utilization_threshold", *request->gpuUtilizationThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxGracefulTerminationSec)) {
    body->insert(pair<string, long>("max_graceful_termination_sec", *request->maxGracefulTerminationSec));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minReplicaCount)) {
    body->insert(pair<string, long>("min_replica_count", *request->minReplicaCount));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, vector<string>>>(request->priorities)) {
    body->insert(pair<string, map<string, vector<string>>>("priorities", *request->priorities));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->recycleNodeDeletionEnabled)) {
    body->insert(pair<string, bool>("recycle_node_deletion_enabled", *request->recycleNodeDeletionEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->scaleDownEnabled)) {
    body->insert(pair<string, bool>("scale_down_enabled", *request->scaleDownEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->scaleUpFromZero)) {
    body->insert(pair<string, bool>("scale_up_from_zero", *request->scaleUpFromZero));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalerType)) {
    body->insert(pair<string, string>("scaler_type", *request->scalerType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scanInterval)) {
    body->insert(pair<string, string>("scan_interval", *request->scanInterval));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->skipNodesWithLocalStorage)) {
    body->insert(pair<string, bool>("skip_nodes_with_local_storage", *request->skipNodesWithLocalStorage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->skipNodesWithSystemPods)) {
    body->insert(pair<string, bool>("skip_nodes_with_system_pods", *request->skipNodesWithSystemPods));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->unneededDuration)) {
    body->insert(pair<string, string>("unneeded_duration", *request->unneededDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->utilizationThreshold)) {
    body->insert(pair<string, string>("utilization_threshold", *request->utilizationThreshold));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAutoscalingConfig"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/cluster/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/autoscale/config/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAutoscalingConfigResponse(callApi(params, req, runtime));
}

CreateAutoscalingConfigResponse Alibabacloud_CS20151215::Client::createAutoscalingConfig(shared_ptr<string> ClusterId, shared_ptr<CreateAutoscalingConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createAutoscalingConfigWithOptions(ClusterId, request, headers, runtime);
}

CreateClusterResponse Alibabacloud_CS20151215::Client::createClusterWithOptions(shared_ptr<CreateClusterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->accessControlList)) {
    body->insert(pair<string, vector<string>>("access_control_list", *request->accessControlList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<Addon>>(request->addons)) {
    body->insert(pair<string, vector<Addon>>("addons", *request->addons));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiAudiences)) {
    body->insert(pair<string, string>("api_audiences", *request->apiAudiences));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRenew)) {
    body->insert(pair<string, bool>("auto_renew", *request->autoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->autoRenewPeriod)) {
    body->insert(pair<string, long>("auto_renew_period", *request->autoRenewPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    body->insert(pair<string, string>("charge_type", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->cisEnabled)) {
    body->insert(pair<string, bool>("cis_enabled", *request->cisEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->cloudMonitorFlags)) {
    body->insert(pair<string, bool>("cloud_monitor_flags", *request->cloudMonitorFlags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterDomain)) {
    body->insert(pair<string, string>("cluster_domain", *request->clusterDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterSpec)) {
    body->insert(pair<string, string>("cluster_spec", *request->clusterSpec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    body->insert(pair<string, string>("cluster_type", *request->clusterType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->containerCidr)) {
    body->insert(pair<string, string>("container_cidr", *request->containerCidr));
  }
  if (!Darabonba_Util::Client::isUnset<CreateClusterRequestControlPlaneConfig>(request->controlPlaneConfig)) {
    body->insert(pair<string, CreateClusterRequestControlPlaneConfig>("control_plane_config", *request->controlPlaneConfig));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->controlplaneLogComponents)) {
    body->insert(pair<string, vector<string>>("controlplane_log_components", *request->controlplaneLogComponents));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->controlplaneLogProject)) {
    body->insert(pair<string, string>("controlplane_log_project", *request->controlplaneLogProject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->controlplaneLogTtl)) {
    body->insert(pair<string, string>("controlplane_log_ttl", *request->controlplaneLogTtl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cpuPolicy)) {
    body->insert(pair<string, string>("cpu_policy", *request->cpuPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customSan)) {
    body->insert(pair<string, string>("custom_san", *request->customSan));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->deletionProtection)) {
    body->insert(pair<string, bool>("deletion_protection", *request->deletionProtection));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->disableRollback)) {
    body->insert(pair<string, bool>("disable_rollback", *request->disableRollback));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableRrsa)) {
    body->insert(pair<string, bool>("enable_rrsa", *request->enableRrsa));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptionProviderKey)) {
    body->insert(pair<string, string>("encryption_provider_key", *request->encryptionProviderKey));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->endpointPublicAccess)) {
    body->insert(pair<string, bool>("endpoint_public_access", *request->endpointPublicAccess));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->formatDisk)) {
    body->insert(pair<string, bool>("format_disk", *request->formatDisk));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    body->insert(pair<string, string>("image_id", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageType)) {
    body->insert(pair<string, string>("image_type", *request->imageType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instances)) {
    body->insert(pair<string, vector<string>>("instances", *request->instances));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipStack)) {
    body->insert(pair<string, string>("ip_stack", *request->ipStack));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isEnterpriseSecurityGroup)) {
    body->insert(pair<string, bool>("is_enterprise_security_group", *request->isEnterpriseSecurityGroup));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->keepInstanceName)) {
    body->insert(pair<string, bool>("keep_instance_name", *request->keepInstanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPair)) {
    body->insert(pair<string, string>("key_pair", *request->keyPair));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->kubernetesVersion)) {
    body->insert(pair<string, string>("kubernetes_version", *request->kubernetesVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerId)) {
    body->insert(pair<string, string>("load_balancer_id", *request->loadBalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerSpec)) {
    body->insert(pair<string, string>("load_balancer_spec", *request->loadBalancerSpec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loggingType)) {
    body->insert(pair<string, string>("logging_type", *request->loggingType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginPassword)) {
    body->insert(pair<string, string>("login_password", *request->loginPassword));
  }
  if (!Darabonba_Util::Client::isUnset<MaintenanceWindow>(request->maintenanceWindow)) {
    body->insert(pair<string, MaintenanceWindow>("maintenance_window", *request->maintenanceWindow));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->masterAutoRenew)) {
    body->insert(pair<string, bool>("master_auto_renew", *request->masterAutoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->masterAutoRenewPeriod)) {
    body->insert(pair<string, long>("master_auto_renew_period", *request->masterAutoRenewPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->masterCount)) {
    body->insert(pair<string, long>("master_count", *request->masterCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterInstanceChargeType)) {
    body->insert(pair<string, string>("master_instance_charge_type", *request->masterInstanceChargeType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->masterInstanceTypes)) {
    body->insert(pair<string, vector<string>>("master_instance_types", *request->masterInstanceTypes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->masterPeriod)) {
    body->insert(pair<string, long>("master_period", *request->masterPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterPeriodUnit)) {
    body->insert(pair<string, string>("master_period_unit", *request->masterPeriodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterSystemDiskCategory)) {
    body->insert(pair<string, string>("master_system_disk_category", *request->masterSystemDiskCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterSystemDiskPerformanceLevel)) {
    body->insert(pair<string, string>("master_system_disk_performance_level", *request->masterSystemDiskPerformanceLevel));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->masterSystemDiskSize)) {
    body->insert(pair<string, long>("master_system_disk_size", *request->masterSystemDiskSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterSystemDiskSnapshotPolicyId)) {
    body->insert(pair<string, string>("master_system_disk_snapshot_policy_id", *request->masterSystemDiskSnapshotPolicyId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->masterVswitchIds)) {
    body->insert(pair<string, vector<string>>("master_vswitch_ids", *request->masterVswitchIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->natGateway)) {
    body->insert(pair<string, bool>("nat_gateway", *request->natGateway));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeCidrMask)) {
    body->insert(pair<string, string>("node_cidr_mask", *request->nodeCidrMask));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeNameMode)) {
    body->insert(pair<string, string>("node_name_mode", *request->nodeNameMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodePortRange)) {
    body->insert(pair<string, string>("node_port_range", *request->nodePortRange));
  }
  if (!Darabonba_Util::Client::isUnset<vector<Nodepool>>(request->nodepools)) {
    body->insert(pair<string, vector<Nodepool>>("nodepools", *request->nodepools));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->numOfNodes)) {
    body->insert(pair<string, long>("num_of_nodes", *request->numOfNodes));
  }
  if (!Darabonba_Util::Client::isUnset<CreateClusterRequestOperationPolicy>(request->operationPolicy)) {
    body->insert(pair<string, CreateClusterRequestOperationPolicy>("operation_policy", *request->operationPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->osType)) {
    body->insert(pair<string, string>("os_type", *request->osType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    body->insert(pair<string, long>("period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    body->insert(pair<string, string>("period_unit", *request->periodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->platform)) {
    body->insert(pair<string, string>("platform", *request->platform));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->podVswitchIds)) {
    body->insert(pair<string, vector<string>>("pod_vswitch_ids", *request->podVswitchIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->profile)) {
    body->insert(pair<string, string>("profile", *request->profile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyMode)) {
    body->insert(pair<string, string>("proxy_mode", *request->proxyMode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->rdsInstances)) {
    body->insert(pair<string, vector<string>>("rds_instances", *request->rdsInstances));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("region_id", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("resource_group_id", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<Runtime>(request->runtime)) {
    body->insert(pair<string, Runtime>("runtime", *request->runtime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    body->insert(pair<string, string>("security_group_id", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->securityHardeningOs)) {
    body->insert(pair<string, bool>("security_hardening_os", *request->securityHardeningOs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceAccountIssuer)) {
    body->insert(pair<string, string>("service_account_issuer", *request->serviceAccountIssuer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCidr)) {
    body->insert(pair<string, string>("service_cidr", *request->serviceCidr));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->serviceDiscoveryTypes)) {
    body->insert(pair<string, vector<string>>("service_discovery_types", *request->serviceDiscoveryTypes));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->snatEntry)) {
    body->insert(pair<string, bool>("snat_entry", *request->snatEntry));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->socEnabled)) {
    body->insert(pair<string, bool>("soc_enabled", *request->socEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->sshFlags)) {
    body->insert(pair<string, bool>("ssh_flags", *request->sshFlags));
  }
  if (!Darabonba_Util::Client::isUnset<vector<Tag>>(request->tags)) {
    body->insert(pair<string, vector<Tag>>("tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<vector<Taint>>(request->taints)) {
    body->insert(pair<string, vector<Taint>>("taints", *request->taints));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeoutMins)) {
    body->insert(pair<string, long>("timeout_mins", *request->timeoutMins));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timezone)) {
    body->insert(pair<string, string>("timezone", *request->timezone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userCa)) {
    body->insert(pair<string, string>("user_ca", *request->userCa));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    body->insert(pair<string, string>("user_data", *request->userData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcid)) {
    body->insert(pair<string, string>("vpcid", *request->vpcid));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->vswitchIds)) {
    body->insert(pair<string, vector<string>>("vswitch_ids", *request->vswitchIds));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->workerAutoRenew)) {
    body->insert(pair<string, bool>("worker_auto_renew", *request->workerAutoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workerAutoRenewPeriod)) {
    body->insert(pair<string, long>("worker_auto_renew_period", *request->workerAutoRenewPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateClusterRequestWorkerDataDisks>>(request->workerDataDisks)) {
    body->insert(pair<string, vector<CreateClusterRequestWorkerDataDisks>>("worker_data_disks", *request->workerDataDisks));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workerInstanceChargeType)) {
    body->insert(pair<string, string>("worker_instance_charge_type", *request->workerInstanceChargeType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->workerInstanceTypes)) {
    body->insert(pair<string, vector<string>>("worker_instance_types", *request->workerInstanceTypes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workerPeriod)) {
    body->insert(pair<string, long>("worker_period", *request->workerPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workerPeriodUnit)) {
    body->insert(pair<string, string>("worker_period_unit", *request->workerPeriodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workerSystemDiskCategory)) {
    body->insert(pair<string, string>("worker_system_disk_category", *request->workerSystemDiskCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workerSystemDiskPerformanceLevel)) {
    body->insert(pair<string, string>("worker_system_disk_performance_level", *request->workerSystemDiskPerformanceLevel));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workerSystemDiskSize)) {
    body->insert(pair<string, long>("worker_system_disk_size", *request->workerSystemDiskSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workerSystemDiskSnapshotPolicyId)) {
    body->insert(pair<string, string>("worker_system_disk_snapshot_policy_id", *request->workerSystemDiskSnapshotPolicyId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->workerVswitchIds)) {
    body->insert(pair<string, vector<string>>("worker_vswitch_ids", *request->workerVswitchIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    body->insert(pair<string, string>("zone_id", *request->zoneId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->zoneIds)) {
    body->insert(pair<string, vector<string>>("zone_ids", *request->zoneIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCluster"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateClusterResponse(callApi(params, req, runtime));
}

CreateClusterResponse Alibabacloud_CS20151215::Client::createCluster(shared_ptr<CreateClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createClusterWithOptions(request, headers, runtime);
}

CreateClusterDiagnosisResponse Alibabacloud_CS20151215::Client::createClusterDiagnosisWithOptions(shared_ptr<string> clusterId,
                                                                                                  shared_ptr<CreateClusterDiagnosisRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->target)) {
    body->insert(pair<string, map<string, boost::any>>("target", *request->target));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateClusterDiagnosis"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/diagnosis"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateClusterDiagnosisResponse(callApi(params, req, runtime));
}

CreateClusterDiagnosisResponse Alibabacloud_CS20151215::Client::createClusterDiagnosis(shared_ptr<string> clusterId, shared_ptr<CreateClusterDiagnosisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createClusterDiagnosisWithOptions(clusterId, request, headers, runtime);
}

CreateClusterInspectConfigResponse Alibabacloud_CS20151215::Client::createClusterInspectConfigWithOptions(shared_ptr<string> clusterId,
                                                                                                          shared_ptr<CreateClusterInspectConfigRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->disabledCheckItems)) {
    body->insert(pair<string, vector<string>>("disabledCheckItems", *request->disabledCheckItems));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enabled)) {
    body->insert(pair<string, bool>("enabled", *request->enabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recurrence)) {
    body->insert(pair<string, string>("recurrence", *request->recurrence));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateClusterInspectConfig"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/inspectConfig"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateClusterInspectConfigResponse(callApi(params, req, runtime));
}

CreateClusterInspectConfigResponse Alibabacloud_CS20151215::Client::createClusterInspectConfig(shared_ptr<string> clusterId, shared_ptr<CreateClusterInspectConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createClusterInspectConfigWithOptions(clusterId, request, headers, runtime);
}

CreateClusterNodePoolResponse Alibabacloud_CS20151215::Client::createClusterNodePoolWithOptions(shared_ptr<string> ClusterId,
                                                                                                shared_ptr<CreateClusterNodePoolRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<CreateClusterNodePoolRequestAutoScaling>(request->autoScaling)) {
    body->insert(pair<string, CreateClusterNodePoolRequestAutoScaling>("auto_scaling", *request->autoScaling));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->count)) {
    body->insert(pair<string, long>("count", *request->count));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->hostNetwork)) {
    body->insert(pair<string, bool>("host_network", *request->hostNetwork));
  }
  if (!Darabonba_Util::Client::isUnset<CreateClusterNodePoolRequestInterconnectConfig>(request->interconnectConfig)) {
    body->insert(pair<string, CreateClusterNodePoolRequestInterconnectConfig>("interconnect_config", *request->interconnectConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interconnectMode)) {
    body->insert(pair<string, string>("interconnect_mode", *request->interconnectMode));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->intranet)) {
    body->insert(pair<string, bool>("intranet", *request->intranet));
  }
  if (!Darabonba_Util::Client::isUnset<CreateClusterNodePoolRequestKubernetesConfig>(request->kubernetesConfig)) {
    body->insert(pair<string, CreateClusterNodePoolRequestKubernetesConfig>("kubernetes_config", *request->kubernetesConfig));
  }
  if (!Darabonba_Util::Client::isUnset<CreateClusterNodePoolRequestManagement>(request->management)) {
    body->insert(pair<string, CreateClusterNodePoolRequestManagement>("management", *request->management));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxNodes)) {
    body->insert(pair<string, long>("max_nodes", *request->maxNodes));
  }
  if (!Darabonba_Util::Client::isUnset<CreateClusterNodePoolRequestNodeConfig>(request->nodeConfig)) {
    body->insert(pair<string, CreateClusterNodePoolRequestNodeConfig>("node_config", *request->nodeConfig));
  }
  if (!Darabonba_Util::Client::isUnset<CreateClusterNodePoolRequestNodepoolInfo>(request->nodepoolInfo)) {
    body->insert(pair<string, CreateClusterNodePoolRequestNodepoolInfo>("nodepool_info", *request->nodepoolInfo));
  }
  if (!Darabonba_Util::Client::isUnset<CreateClusterNodePoolRequestScalingGroup>(request->scalingGroup)) {
    body->insert(pair<string, CreateClusterNodePoolRequestScalingGroup>("scaling_group", *request->scalingGroup));
  }
  if (!Darabonba_Util::Client::isUnset<CreateClusterNodePoolRequestTeeConfig>(request->teeConfig)) {
    body->insert(pair<string, CreateClusterNodePoolRequestTeeConfig>("tee_config", *request->teeConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateClusterNodePool"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/nodepools"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateClusterNodePoolResponse(callApi(params, req, runtime));
}

CreateClusterNodePoolResponse Alibabacloud_CS20151215::Client::createClusterNodePool(shared_ptr<string> ClusterId, shared_ptr<CreateClusterNodePoolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createClusterNodePoolWithOptions(ClusterId, request, headers, runtime);
}

CreateEdgeMachineResponse Alibabacloud_CS20151215::Client::createEdgeMachineWithOptions(shared_ptr<CreateEdgeMachineRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hostname)) {
    body->insert(pair<string, string>("hostname", *request->hostname));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    body->insert(pair<string, string>("model", *request->model));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sn)) {
    body->insert(pair<string, string>("sn", *request->sn));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEdgeMachine"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/edge_machines"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEdgeMachineResponse(callApi(params, req, runtime));
}

CreateEdgeMachineResponse Alibabacloud_CS20151215::Client::createEdgeMachine(shared_ptr<CreateEdgeMachineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createEdgeMachineWithOptions(request, headers, runtime);
}

CreateKubernetesTriggerResponse Alibabacloud_CS20151215::Client::createKubernetesTriggerWithOptions(shared_ptr<CreateKubernetesTriggerRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->action)) {
    body->insert(pair<string, string>("action", *request->action));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    body->insert(pair<string, string>("cluster_id", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("project_id", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateKubernetesTrigger"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/triggers"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateKubernetesTriggerResponse(callApi(params, req, runtime));
}

CreateKubernetesTriggerResponse Alibabacloud_CS20151215::Client::createKubernetesTrigger(shared_ptr<CreateKubernetesTriggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createKubernetesTriggerWithOptions(request, headers, runtime);
}

CreateTemplateResponse Alibabacloud_CS20151215::Client::createTemplateWithOptions(shared_ptr<CreateTemplateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    body->insert(pair<string, string>("tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->template_)) {
    body->insert(pair<string, string>("template_", *request->template_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    body->insert(pair<string, string>("template_type", *request->templateType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTemplate"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/templates"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTemplateResponse(callApi(params, req, runtime));
}

CreateTemplateResponse Alibabacloud_CS20151215::Client::createTemplate(shared_ptr<CreateTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createTemplateWithOptions(request, headers, runtime);
}

CreateTriggerResponse Alibabacloud_CS20151215::Client::createTriggerWithOptions(shared_ptr<string> clusterId,
                                                                                shared_ptr<CreateTriggerRequest> request,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->action)) {
    body->insert(pair<string, string>("action", *request->action));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    body->insert(pair<string, string>("cluster_id", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("project_id", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTrigger"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/triggers"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTriggerResponse(callApi(params, req, runtime));
}

CreateTriggerResponse Alibabacloud_CS20151215::Client::createTrigger(shared_ptr<string> clusterId, shared_ptr<CreateTriggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createTriggerWithOptions(clusterId, request, headers, runtime);
}

DeleteAlertContactResponse Alibabacloud_CS20151215::Client::deleteAlertContactWithOptions(shared_ptr<DeleteAlertContactRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteAlertContactShrinkRequest> request = make_shared<DeleteAlertContactShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->contactIds)) {
    request->contactIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->contactIds, make_shared<string>("contact_ids"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contactIdsShrink)) {
    query->insert(pair<string, string>("contact_ids", *request->contactIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAlertContact"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/alert/contacts"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("array"))}
  }));
  return DeleteAlertContactResponse(callApi(params, req, runtime));
}

DeleteAlertContactResponse Alibabacloud_CS20151215::Client::deleteAlertContact(shared_ptr<DeleteAlertContactRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteAlertContactWithOptions(request, headers, runtime);
}

DeleteAlertContactGroupResponse Alibabacloud_CS20151215::Client::deleteAlertContactGroupWithOptions(shared_ptr<DeleteAlertContactGroupRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteAlertContactGroupShrinkRequest> request = make_shared<DeleteAlertContactGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->contactGroupIds)) {
    request->contactGroupIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->contactGroupIds, make_shared<string>("contact_group_ids"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contactGroupIdsShrink)) {
    query->insert(pair<string, string>("contact_group_ids", *request->contactGroupIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAlertContactGroup"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/alert/contact_groups"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("array"))}
  }));
  return DeleteAlertContactGroupResponse(callApi(params, req, runtime));
}

DeleteAlertContactGroupResponse Alibabacloud_CS20151215::Client::deleteAlertContactGroup(shared_ptr<DeleteAlertContactGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteAlertContactGroupWithOptions(request, headers, runtime);
}

DeleteClusterResponse Alibabacloud_CS20151215::Client::deleteClusterWithOptions(shared_ptr<string> ClusterId,
                                                                                shared_ptr<DeleteClusterRequest> tmpReq,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteClusterShrinkRequest> request = make_shared<DeleteClusterShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<DeleteClusterRequestDeleteOptions>>(tmpReq->deleteOptions)) {
    request->deleteOptionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->deleteOptions, make_shared<string>("delete_options"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->retainResources)) {
    request->retainResourcesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->retainResources, make_shared<string>("retain_resources"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deleteOptionsShrink)) {
    query->insert(pair<string, string>("delete_options", *request->deleteOptionsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->keepSlb)) {
    query->insert(pair<string, bool>("keep_slb", *request->keepSlb));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->retainAllResources)) {
    query->insert(pair<string, bool>("retain_all_resources", *request->retainAllResources));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->retainResourcesShrink)) {
    query->insert(pair<string, string>("retain_resources", *request->retainResourcesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCluster"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteClusterResponse(callApi(params, req, runtime));
}

DeleteClusterResponse Alibabacloud_CS20151215::Client::deleteCluster(shared_ptr<string> ClusterId, shared_ptr<DeleteClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteClusterWithOptions(ClusterId, request, headers, runtime);
}

DeleteClusterInspectConfigResponse Alibabacloud_CS20151215::Client::deleteClusterInspectConfigWithOptions(shared_ptr<string> clusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteClusterInspectConfig"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/inspectConfig"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteClusterInspectConfigResponse(callApi(params, req, runtime));
}

DeleteClusterInspectConfigResponse Alibabacloud_CS20151215::Client::deleteClusterInspectConfig(shared_ptr<string> clusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteClusterInspectConfigWithOptions(clusterId, headers, runtime);
}

DeleteClusterNodepoolResponse Alibabacloud_CS20151215::Client::deleteClusterNodepoolWithOptions(shared_ptr<string> ClusterId,
                                                                                                shared_ptr<string> NodepoolId,
                                                                                                shared_ptr<DeleteClusterNodepoolRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->force)) {
    query->insert(pair<string, bool>("force", *request->force));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteClusterNodepool"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/nodepools/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(NodepoolId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteClusterNodepoolResponse(callApi(params, req, runtime));
}

DeleteClusterNodepoolResponse Alibabacloud_CS20151215::Client::deleteClusterNodepool(shared_ptr<string> ClusterId, shared_ptr<string> NodepoolId, shared_ptr<DeleteClusterNodepoolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteClusterNodepoolWithOptions(ClusterId, NodepoolId, request, headers, runtime);
}

DeleteClusterNodesResponse Alibabacloud_CS20151215::Client::deleteClusterNodesWithOptions(shared_ptr<string> ClusterId,
                                                                                          shared_ptr<DeleteClusterNodesRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->drainNode)) {
    body->insert(pair<string, bool>("drain_node", *request->drainNode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->nodes)) {
    body->insert(pair<string, vector<string>>("nodes", *request->nodes));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->releaseNode)) {
    body->insert(pair<string, bool>("release_node", *request->releaseNode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteClusterNodes"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/nodes"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteClusterNodesResponse(callApi(params, req, runtime));
}

DeleteClusterNodesResponse Alibabacloud_CS20151215::Client::deleteClusterNodes(shared_ptr<string> ClusterId, shared_ptr<DeleteClusterNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteClusterNodesWithOptions(ClusterId, request, headers, runtime);
}

DeleteEdgeMachineResponse Alibabacloud_CS20151215::Client::deleteEdgeMachineWithOptions(shared_ptr<string> edgeMachineid,
                                                                                        shared_ptr<DeleteEdgeMachineRequest> request,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->force)) {
    query->insert(pair<string, string>("force", *request->force));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEdgeMachine"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/edge_machines/%5Bedge_machineid%5D"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteEdgeMachineResponse(callApi(params, req, runtime));
}

DeleteEdgeMachineResponse Alibabacloud_CS20151215::Client::deleteEdgeMachine(shared_ptr<string> edgeMachineid, shared_ptr<DeleteEdgeMachineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteEdgeMachineWithOptions(edgeMachineid, request, headers, runtime);
}

DeleteKubernetesTriggerResponse Alibabacloud_CS20151215::Client::deleteKubernetesTriggerWithOptions(shared_ptr<string> Id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteKubernetesTrigger"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/triggers/revoke/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Id)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteKubernetesTriggerResponse(callApi(params, req, runtime));
}

DeleteKubernetesTriggerResponse Alibabacloud_CS20151215::Client::deleteKubernetesTrigger(shared_ptr<string> Id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteKubernetesTriggerWithOptions(Id, headers, runtime);
}

DeletePolicyInstanceResponse Alibabacloud_CS20151215::Client::deletePolicyInstanceWithOptions(shared_ptr<string> clusterId,
                                                                                              shared_ptr<string> policyName,
                                                                                              shared_ptr<DeletePolicyInstanceRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("instance_name", *request->instanceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePolicyInstance"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/policies/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(policyName)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePolicyInstanceResponse(callApi(params, req, runtime));
}

DeletePolicyInstanceResponse Alibabacloud_CS20151215::Client::deletePolicyInstance(shared_ptr<string> clusterId, shared_ptr<string> policyName, shared_ptr<DeletePolicyInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deletePolicyInstanceWithOptions(clusterId, policyName, request, headers, runtime);
}

DeleteTemplateResponse Alibabacloud_CS20151215::Client::deleteTemplateWithOptions(shared_ptr<string> TemplateId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTemplate"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/templates/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TemplateId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteTemplateResponse(callApi(params, req, runtime));
}

DeleteTemplateResponse Alibabacloud_CS20151215::Client::deleteTemplate(shared_ptr<string> TemplateId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteTemplateWithOptions(TemplateId, headers, runtime);
}

DeleteTriggerResponse Alibabacloud_CS20151215::Client::deleteTriggerWithOptions(shared_ptr<string> clusterId,
                                                                                shared_ptr<string> Id,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTrigger"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/triggers/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Id)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteTriggerResponse(callApi(params, req, runtime));
}

DeleteTriggerResponse Alibabacloud_CS20151215::Client::deleteTrigger(shared_ptr<string> clusterId, shared_ptr<string> Id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteTriggerWithOptions(clusterId, Id, headers, runtime);
}

DeployPolicyInstanceResponse Alibabacloud_CS20151215::Client::deployPolicyInstanceWithOptions(shared_ptr<string> clusterId,
                                                                                              shared_ptr<string> policyName,
                                                                                              shared_ptr<DeployPolicyInstanceRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->action)) {
    body->insert(pair<string, string>("action", *request->action));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->namespaces)) {
    body->insert(pair<string, vector<string>>("namespaces", *request->namespaces));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->parameters)) {
    body->insert(pair<string, map<string, boost::any>>("parameters", *request->parameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeployPolicyInstance"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/policies/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(policyName)))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeployPolicyInstanceResponse(callApi(params, req, runtime));
}

DeployPolicyInstanceResponse Alibabacloud_CS20151215::Client::deployPolicyInstance(shared_ptr<string> clusterId, shared_ptr<string> policyName, shared_ptr<DeployPolicyInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deployPolicyInstanceWithOptions(clusterId, policyName, request, headers, runtime);
}

DescribeAddonResponse Alibabacloud_CS20151215::Client::describeAddonWithOptions(shared_ptr<string> addonName,
                                                                                shared_ptr<DescribeAddonRequest> request,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("cluster_id", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterSpec)) {
    query->insert(pair<string, string>("cluster_spec", *request->clusterSpec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    query->insert(pair<string, string>("cluster_type", *request->clusterType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterVersion)) {
    query->insert(pair<string, string>("cluster_version", *request->clusterVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->profile)) {
    query->insert(pair<string, string>("profile", *request->profile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("region_id", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->version)) {
    query->insert(pair<string, string>("version", *request->version));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAddon"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/addons/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(addonName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAddonResponse(callApi(params, req, runtime));
}

DescribeAddonResponse Alibabacloud_CS20151215::Client::describeAddon(shared_ptr<string> addonName, shared_ptr<DescribeAddonRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeAddonWithOptions(addonName, request, headers, runtime);
}

DescribeAddonsResponse Alibabacloud_CS20151215::Client::describeAddonsWithOptions(shared_ptr<DescribeAddonsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterProfile)) {
    query->insert(pair<string, string>("cluster_profile", *request->clusterProfile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterSpec)) {
    query->insert(pair<string, string>("cluster_spec", *request->clusterSpec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    query->insert(pair<string, string>("cluster_type", *request->clusterType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterVersion)) {
    query->insert(pair<string, string>("cluster_version", *request->clusterVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("region", *request->region));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAddons"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/components/metadata"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAddonsResponse(callApi(params, req, runtime));
}

DescribeAddonsResponse Alibabacloud_CS20151215::Client::describeAddons(shared_ptr<DescribeAddonsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeAddonsWithOptions(request, headers, runtime);
}

DescribeClusterAddonInstanceResponse Alibabacloud_CS20151215::Client::describeClusterAddonInstanceWithOptions(shared_ptr<string> ClusterID,
                                                                                                              shared_ptr<string> AddonName,
                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterAddonInstance"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterID)) + string("/components/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(AddonName)) + string("/instance"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterAddonInstanceResponse(callApi(params, req, runtime));
}

DescribeClusterAddonInstanceResponse Alibabacloud_CS20151215::Client::describeClusterAddonInstance(shared_ptr<string> ClusterID, shared_ptr<string> AddonName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterAddonInstanceWithOptions(ClusterID, AddonName, headers, runtime);
}

DescribeClusterAddonMetadataResponse Alibabacloud_CS20151215::Client::describeClusterAddonMetadataWithOptions(shared_ptr<string> clusterId,
                                                                                                              shared_ptr<string> componentId,
                                                                                                              shared_ptr<DescribeClusterAddonMetadataRequest> request,
                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->version)) {
    query->insert(pair<string, string>("version", *request->version));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterAddonMetadata"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/components/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(componentId)) + string("/metadata"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterAddonMetadataResponse(callApi(params, req, runtime));
}

DescribeClusterAddonMetadataResponse Alibabacloud_CS20151215::Client::describeClusterAddonMetadata(shared_ptr<string> clusterId, shared_ptr<string> componentId, shared_ptr<DescribeClusterAddonMetadataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterAddonMetadataWithOptions(clusterId, componentId, request, headers, runtime);
}

DescribeClusterAddonUpgradeStatusResponse Alibabacloud_CS20151215::Client::describeClusterAddonUpgradeStatusWithOptions(shared_ptr<string> ClusterId,
                                                                                                                        shared_ptr<string> ComponentId,
                                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterAddonUpgradeStatus"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/components/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ComponentId)) + string("/upgradestatus"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterAddonUpgradeStatusResponse(callApi(params, req, runtime));
}

DescribeClusterAddonUpgradeStatusResponse Alibabacloud_CS20151215::Client::describeClusterAddonUpgradeStatus(shared_ptr<string> ClusterId, shared_ptr<string> ComponentId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterAddonUpgradeStatusWithOptions(ClusterId, ComponentId, headers, runtime);
}

DescribeClusterAddonsUpgradeStatusResponse Alibabacloud_CS20151215::Client::describeClusterAddonsUpgradeStatusWithOptions(shared_ptr<string> ClusterId,
                                                                                                                          shared_ptr<DescribeClusterAddonsUpgradeStatusRequest> tmpReq,
                                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeClusterAddonsUpgradeStatusShrinkRequest> request = make_shared<DescribeClusterAddonsUpgradeStatusShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->componentIds)) {
    request->componentIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->componentIds, make_shared<string>("componentIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->componentIdsShrink)) {
    query->insert(pair<string, string>("componentIds", *request->componentIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterAddonsUpgradeStatus"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/components/upgradestatus"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterAddonsUpgradeStatusResponse(callApi(params, req, runtime));
}

DescribeClusterAddonsUpgradeStatusResponse Alibabacloud_CS20151215::Client::describeClusterAddonsUpgradeStatus(shared_ptr<string> ClusterId, shared_ptr<DescribeClusterAddonsUpgradeStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterAddonsUpgradeStatusWithOptions(ClusterId, request, headers, runtime);
}

DescribeClusterAddonsVersionResponse Alibabacloud_CS20151215::Client::describeClusterAddonsVersionWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterAddonsVersion"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/components/version"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterAddonsVersionResponse(callApi(params, req, runtime));
}

DescribeClusterAddonsVersionResponse Alibabacloud_CS20151215::Client::describeClusterAddonsVersion(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterAddonsVersionWithOptions(ClusterId, headers, runtime);
}

DescribeClusterAttachScriptsResponse Alibabacloud_CS20151215::Client::describeClusterAttachScriptsWithOptions(shared_ptr<string> ClusterId,
                                                                                                              shared_ptr<DescribeClusterAttachScriptsRequest> request,
                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->arch)) {
    body->insert(pair<string, string>("arch", *request->arch));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->expired)) {
    body->insert(pair<string, long>("expired", *request->expired));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->formatDisk)) {
    body->insert(pair<string, bool>("format_disk", *request->formatDisk));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->keepInstanceName)) {
    body->insert(pair<string, bool>("keep_instance_name", *request->keepInstanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodepoolId)) {
    body->insert(pair<string, string>("nodepool_id", *request->nodepoolId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->options)) {
    body->insert(pair<string, string>("options", *request->options));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->rdsInstances)) {
    body->insert(pair<string, vector<string>>("rds_instances", *request->rdsInstances));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterAttachScripts"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/attachscript"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("string"))}
  }));
  return DescribeClusterAttachScriptsResponse(callApi(params, req, runtime));
}

DescribeClusterAttachScriptsResponse Alibabacloud_CS20151215::Client::describeClusterAttachScripts(shared_ptr<string> ClusterId, shared_ptr<DescribeClusterAttachScriptsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterAttachScriptsWithOptions(ClusterId, request, headers, runtime);
}

DescribeClusterDetailResponse Alibabacloud_CS20151215::Client::describeClusterDetailWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterDetail"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterDetailResponse(callApi(params, req, runtime));
}

DescribeClusterDetailResponse Alibabacloud_CS20151215::Client::describeClusterDetail(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterDetailWithOptions(ClusterId, headers, runtime);
}

DescribeClusterEventsResponse Alibabacloud_CS20151215::Client::describeClusterEventsWithOptions(shared_ptr<string> ClusterId,
                                                                                                shared_ptr<DescribeClusterEventsRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("page_number", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("task_id", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterEvents"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/events"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterEventsResponse(callApi(params, req, runtime));
}

DescribeClusterEventsResponse Alibabacloud_CS20151215::Client::describeClusterEvents(shared_ptr<string> ClusterId, shared_ptr<DescribeClusterEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterEventsWithOptions(ClusterId, request, headers, runtime);
}

DescribeClusterLogsResponse Alibabacloud_CS20151215::Client::describeClusterLogsWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterLogs"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/logs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("array"))}
  }));
  return DescribeClusterLogsResponse(callApi(params, req, runtime));
}

DescribeClusterLogsResponse Alibabacloud_CS20151215::Client::describeClusterLogs(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterLogsWithOptions(ClusterId, headers, runtime);
}

DescribeClusterNodePoolDetailResponse Alibabacloud_CS20151215::Client::describeClusterNodePoolDetailWithOptions(shared_ptr<string> ClusterId,
                                                                                                                shared_ptr<string> NodepoolId,
                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterNodePoolDetail"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/nodepools/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(NodepoolId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterNodePoolDetailResponse(callApi(params, req, runtime));
}

DescribeClusterNodePoolDetailResponse Alibabacloud_CS20151215::Client::describeClusterNodePoolDetail(shared_ptr<string> ClusterId, shared_ptr<string> NodepoolId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterNodePoolDetailWithOptions(ClusterId, NodepoolId, headers, runtime);
}

DescribeClusterNodePoolsResponse Alibabacloud_CS20151215::Client::describeClusterNodePoolsWithOptions(shared_ptr<string> ClusterId,
                                                                                                      shared_ptr<DescribeClusterNodePoolsRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nodepoolName)) {
    query->insert(pair<string, string>("NodepoolName", *request->nodepoolName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterNodePools"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/nodepools"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterNodePoolsResponse(callApi(params, req, runtime));
}

DescribeClusterNodePoolsResponse Alibabacloud_CS20151215::Client::describeClusterNodePools(shared_ptr<string> ClusterId, shared_ptr<DescribeClusterNodePoolsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterNodePoolsWithOptions(ClusterId, request, headers, runtime);
}

DescribeClusterNodesResponse Alibabacloud_CS20151215::Client::describeClusterNodesWithOptions(shared_ptr<string> ClusterId,
                                                                                              shared_ptr<DescribeClusterNodesRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIds)) {
    query->insert(pair<string, string>("instanceIds", *request->instanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodepoolId)) {
    query->insert(pair<string, string>("nodepool_id", *request->nodepoolId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    query->insert(pair<string, string>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    query->insert(pair<string, string>("state", *request->state));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterNodes"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/nodes"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterNodesResponse(callApi(params, req, runtime));
}

DescribeClusterNodesResponse Alibabacloud_CS20151215::Client::describeClusterNodes(shared_ptr<string> ClusterId, shared_ptr<DescribeClusterNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterNodesWithOptions(ClusterId, request, headers, runtime);
}

DescribeClusterResourcesResponse Alibabacloud_CS20151215::Client::describeClusterResourcesWithOptions(shared_ptr<string> ClusterId,
                                                                                                      shared_ptr<DescribeClusterResourcesRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->withAddonResources)) {
    query->insert(pair<string, bool>("with_addon_resources", *request->withAddonResources));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterResources"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/resources"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("array"))}
  }));
  return DescribeClusterResourcesResponse(callApi(params, req, runtime));
}

DescribeClusterResourcesResponse Alibabacloud_CS20151215::Client::describeClusterResources(shared_ptr<string> ClusterId, shared_ptr<DescribeClusterResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterResourcesWithOptions(ClusterId, request, headers, runtime);
}

DescribeClusterTasksResponse Alibabacloud_CS20151215::Client::describeClusterTasksWithOptions(shared_ptr<string> clusterId,
                                                                                              shared_ptr<DescribeClusterTasksRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("page_number", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterTasks"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/tasks"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterTasksResponse(callApi(params, req, runtime));
}

DescribeClusterTasksResponse Alibabacloud_CS20151215::Client::describeClusterTasks(shared_ptr<string> clusterId, shared_ptr<DescribeClusterTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterTasksWithOptions(clusterId, request, headers, runtime);
}

DescribeClusterUserKubeconfigResponse Alibabacloud_CS20151215::Client::describeClusterUserKubeconfigWithOptions(shared_ptr<string> ClusterId,
                                                                                                                shared_ptr<DescribeClusterUserKubeconfigRequest> request,
                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->privateIpAddress)) {
    query->insert(pair<string, bool>("PrivateIpAddress", *request->privateIpAddress));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->temporaryDurationMinutes)) {
    query->insert(pair<string, long>("TemporaryDurationMinutes", *request->temporaryDurationMinutes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterUserKubeconfig"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/k8s/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/user_config"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterUserKubeconfigResponse(callApi(params, req, runtime));
}

DescribeClusterUserKubeconfigResponse Alibabacloud_CS20151215::Client::describeClusterUserKubeconfig(shared_ptr<string> ClusterId, shared_ptr<DescribeClusterUserKubeconfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterUserKubeconfigWithOptions(ClusterId, request, headers, runtime);
}

DescribeClusterV2UserKubeconfigResponse Alibabacloud_CS20151215::Client::describeClusterV2UserKubeconfigWithOptions(shared_ptr<string> ClusterId,
                                                                                                                    shared_ptr<DescribeClusterV2UserKubeconfigRequest> request,
                                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->privateIpAddress)) {
    query->insert(pair<string, bool>("PrivateIpAddress", *request->privateIpAddress));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->temporaryDurationMinutes)) {
    query->insert(pair<string, long>("TemporaryDurationMinutes", *request->temporaryDurationMinutes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterV2UserKubeconfig"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/k8s/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/user_config"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterV2UserKubeconfigResponse(callApi(params, req, runtime));
}

DescribeClusterV2UserKubeconfigResponse Alibabacloud_CS20151215::Client::describeClusterV2UserKubeconfig(shared_ptr<string> ClusterId, shared_ptr<DescribeClusterV2UserKubeconfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterV2UserKubeconfigWithOptions(ClusterId, request, headers, runtime);
}

DescribeClusterVulsResponse Alibabacloud_CS20151215::Client::describeClusterVulsWithOptions(shared_ptr<string> clusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterVuls"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/vuls"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterVulsResponse(callApi(params, req, runtime));
}

DescribeClusterVulsResponse Alibabacloud_CS20151215::Client::describeClusterVuls(shared_ptr<string> clusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterVulsWithOptions(clusterId, headers, runtime);
}

DescribeClustersResponse Alibabacloud_CS20151215::Client::describeClustersWithOptions(shared_ptr<DescribeClustersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    query->insert(pair<string, string>("clusterType", *request->clusterType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("resource_group_id", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusters"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("array"))}
  }));
  return DescribeClustersResponse(callApi(params, req, runtime));
}

DescribeClustersResponse Alibabacloud_CS20151215::Client::describeClusters(shared_ptr<DescribeClustersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClustersWithOptions(request, headers, runtime);
}

DescribeClustersForRegionResponse Alibabacloud_CS20151215::Client::describeClustersForRegionWithOptions(shared_ptr<string> regionId,
                                                                                                        shared_ptr<DescribeClustersForRegionRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("cluster_id", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterSpec)) {
    query->insert(pair<string, string>("cluster_spec", *request->clusterSpec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    query->insert(pair<string, string>("cluster_type", *request->clusterType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("page_number", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->profile)) {
    query->insert(pair<string, string>("profile", *request->profile));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClustersForRegion"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/regions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(regionId)) + string("/clusters"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClustersForRegionResponse(callApi(params, req, runtime));
}

DescribeClustersForRegionResponse Alibabacloud_CS20151215::Client::describeClustersForRegion(shared_ptr<string> regionId, shared_ptr<DescribeClustersForRegionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClustersForRegionWithOptions(regionId, request, headers, runtime);
}

DescribeClustersV1Response Alibabacloud_CS20151215::Client::describeClustersV1WithOptions(shared_ptr<DescribeClustersV1Request> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("cluster_id", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterSpec)) {
    query->insert(pair<string, string>("cluster_spec", *request->clusterSpec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    query->insert(pair<string, string>("cluster_type", *request->clusterType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("page_number", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->profile)) {
    query->insert(pair<string, string>("profile", *request->profile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("region_id", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClustersV1"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/clusters"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClustersV1Response(callApi(params, req, runtime));
}

DescribeClustersV1Response Alibabacloud_CS20151215::Client::describeClustersV1(shared_ptr<DescribeClustersV1Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClustersV1WithOptions(request, headers, runtime);
}

DescribeEdgeMachineActiveProcessResponse Alibabacloud_CS20151215::Client::describeEdgeMachineActiveProcessWithOptions(shared_ptr<string> edgeMachineid, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEdgeMachineActiveProcess"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/edge_machines/%5Bedge_machineid%5D/activeprocess"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEdgeMachineActiveProcessResponse(callApi(params, req, runtime));
}

DescribeEdgeMachineActiveProcessResponse Alibabacloud_CS20151215::Client::describeEdgeMachineActiveProcess(shared_ptr<string> edgeMachineid) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeEdgeMachineActiveProcessWithOptions(edgeMachineid, headers, runtime);
}

DescribeEdgeMachineModelsResponse Alibabacloud_CS20151215::Client::describeEdgeMachineModelsWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEdgeMachineModels"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/edge_machines/models"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEdgeMachineModelsResponse(callApi(params, req, runtime));
}

DescribeEdgeMachineModelsResponse Alibabacloud_CS20151215::Client::describeEdgeMachineModels() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeEdgeMachineModelsWithOptions(headers, runtime);
}

DescribeEdgeMachineTunnelConfigDetailResponse Alibabacloud_CS20151215::Client::describeEdgeMachineTunnelConfigDetailWithOptions(shared_ptr<string> edgeMachineid, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEdgeMachineTunnelConfigDetail"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/edge_machines/%5Bedge_machineid%5D/tunnelconfig"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEdgeMachineTunnelConfigDetailResponse(callApi(params, req, runtime));
}

DescribeEdgeMachineTunnelConfigDetailResponse Alibabacloud_CS20151215::Client::describeEdgeMachineTunnelConfigDetail(shared_ptr<string> edgeMachineid) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeEdgeMachineTunnelConfigDetailWithOptions(edgeMachineid, headers, runtime);
}

DescribeEdgeMachinesResponse Alibabacloud_CS20151215::Client::describeEdgeMachinesWithOptions(shared_ptr<DescribeEdgeMachinesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hostname)) {
    query->insert(pair<string, string>("hostname", *request->hostname));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lifeState)) {
    query->insert(pair<string, string>("life_state", *request->lifeState));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    query->insert(pair<string, string>("model", *request->model));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->onlineState)) {
    query->insert(pair<string, string>("online_state", *request->onlineState));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("page_number", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEdgeMachines"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/edge_machines"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEdgeMachinesResponse(callApi(params, req, runtime));
}

DescribeEdgeMachinesResponse Alibabacloud_CS20151215::Client::describeEdgeMachines(shared_ptr<DescribeEdgeMachinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeEdgeMachinesWithOptions(request, headers, runtime);
}

DescribeEventsResponse Alibabacloud_CS20151215::Client::describeEventsWithOptions(shared_ptr<DescribeEventsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("cluster_id", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("page_number", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEvents"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/events"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEventsResponse(callApi(params, req, runtime));
}

DescribeEventsResponse Alibabacloud_CS20151215::Client::describeEvents(shared_ptr<DescribeEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeEventsWithOptions(request, headers, runtime);
}

DescribeEventsForRegionResponse Alibabacloud_CS20151215::Client::describeEventsForRegionWithOptions(shared_ptr<string> regionId,
                                                                                                    shared_ptr<DescribeEventsForRegionRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("cluster_id", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("page_number", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEventsForRegion"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/regions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(regionId)) + string("/events"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEventsForRegionResponse(callApi(params, req, runtime));
}

DescribeEventsForRegionResponse Alibabacloud_CS20151215::Client::describeEventsForRegion(shared_ptr<string> regionId, shared_ptr<DescribeEventsForRegionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeEventsForRegionWithOptions(regionId, request, headers, runtime);
}

DescribeExternalAgentResponse Alibabacloud_CS20151215::Client::describeExternalAgentWithOptions(shared_ptr<string> ClusterId,
                                                                                                shared_ptr<DescribeExternalAgentRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentMode)) {
    query->insert(pair<string, string>("AgentMode", *request->agentMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->privateIpAddress)) {
    query->insert(pair<string, string>("PrivateIpAddress", *request->privateIpAddress));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeExternalAgent"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/k8s/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/external/agent/deployment"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeExternalAgentResponse(callApi(params, req, runtime));
}

DescribeExternalAgentResponse Alibabacloud_CS20151215::Client::describeExternalAgent(shared_ptr<string> ClusterId, shared_ptr<DescribeExternalAgentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeExternalAgentWithOptions(ClusterId, request, headers, runtime);
}

DescribeKubernetesVersionMetadataResponse Alibabacloud_CS20151215::Client::describeKubernetesVersionMetadataWithOptions(shared_ptr<DescribeKubernetesVersionMetadataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    query->insert(pair<string, string>("ClusterType", *request->clusterType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->kubernetesVersion)) {
    query->insert(pair<string, string>("KubernetesVersion", *request->kubernetesVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mode)) {
    query->insert(pair<string, string>("Mode", *request->mode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->profile)) {
    query->insert(pair<string, string>("Profile", *request->profile));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->queryUpgradableVersion)) {
    query->insert(pair<string, bool>("QueryUpgradableVersion", *request->queryUpgradableVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runtime)) {
    query->insert(pair<string, string>("runtime", *request->runtime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeKubernetesVersionMetadata"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/metadata/versions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("array"))}
  }));
  return DescribeKubernetesVersionMetadataResponse(callApi(params, req, runtime));
}

DescribeKubernetesVersionMetadataResponse Alibabacloud_CS20151215::Client::describeKubernetesVersionMetadata(shared_ptr<DescribeKubernetesVersionMetadataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeKubernetesVersionMetadataWithOptions(request, headers, runtime);
}

DescribeNodePoolVulsResponse Alibabacloud_CS20151215::Client::describeNodePoolVulsWithOptions(shared_ptr<string> clusterId,
                                                                                              shared_ptr<string> nodepoolId,
                                                                                              shared_ptr<DescribeNodePoolVulsRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->necessity)) {
    query->insert(pair<string, string>("necessity", *request->necessity));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNodePoolVuls"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/nodepools/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(nodepoolId)) + string("/vuls"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeNodePoolVulsResponse(callApi(params, req, runtime));
}

DescribeNodePoolVulsResponse Alibabacloud_CS20151215::Client::describeNodePoolVuls(shared_ptr<string> clusterId, shared_ptr<string> nodepoolId, shared_ptr<DescribeNodePoolVulsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeNodePoolVulsWithOptions(clusterId, nodepoolId, request, headers, runtime);
}

DescribePoliciesResponse Alibabacloud_CS20151215::Client::describePoliciesWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePolicies"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/policies"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePoliciesResponse(callApi(params, req, runtime));
}

DescribePoliciesResponse Alibabacloud_CS20151215::Client::describePolicies() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describePoliciesWithOptions(headers, runtime);
}

DescribePolicyDetailsResponse Alibabacloud_CS20151215::Client::describePolicyDetailsWithOptions(shared_ptr<string> policyName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePolicyDetails"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/policies/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(policyName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePolicyDetailsResponse(callApi(params, req, runtime));
}

DescribePolicyDetailsResponse Alibabacloud_CS20151215::Client::describePolicyDetails(shared_ptr<string> policyName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describePolicyDetailsWithOptions(policyName, headers, runtime);
}

DescribePolicyGovernanceInClusterResponse Alibabacloud_CS20151215::Client::describePolicyGovernanceInClusterWithOptions(shared_ptr<string> clusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePolicyGovernanceInCluster"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/policygovernance"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePolicyGovernanceInClusterResponse(callApi(params, req, runtime));
}

DescribePolicyGovernanceInClusterResponse Alibabacloud_CS20151215::Client::describePolicyGovernanceInCluster(shared_ptr<string> clusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describePolicyGovernanceInClusterWithOptions(clusterId, headers, runtime);
}

DescribePolicyInstancesResponse Alibabacloud_CS20151215::Client::describePolicyInstancesWithOptions(shared_ptr<string> clusterId,
                                                                                                    shared_ptr<DescribePolicyInstancesRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("instance_name", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyName)) {
    query->insert(pair<string, string>("policy_name", *request->policyName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePolicyInstances"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/policies"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("array"))}
  }));
  return DescribePolicyInstancesResponse(callApi(params, req, runtime));
}

DescribePolicyInstancesResponse Alibabacloud_CS20151215::Client::describePolicyInstances(shared_ptr<string> clusterId, shared_ptr<DescribePolicyInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describePolicyInstancesWithOptions(clusterId, request, headers, runtime);
}

DescribePolicyInstancesStatusResponse Alibabacloud_CS20151215::Client::describePolicyInstancesStatusWithOptions(shared_ptr<string> clusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePolicyInstancesStatus"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/policies/status"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePolicyInstancesStatusResponse(callApi(params, req, runtime));
}

DescribePolicyInstancesStatusResponse Alibabacloud_CS20151215::Client::describePolicyInstancesStatus(shared_ptr<string> clusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describePolicyInstancesStatusWithOptions(clusterId, headers, runtime);
}

DescribeResourcesDeleteProtectionResponse Alibabacloud_CS20151215::Client::describeResourcesDeleteProtectionWithOptions(shared_ptr<string> ClusterId,
                                                                                                                        shared_ptr<string> ResourceType,
                                                                                                                        shared_ptr<DescribeResourcesDeleteProtectionRequest> request,
                                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resources)) {
    query->insert(pair<string, string>("resources", *request->resources));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeResourcesDeleteProtection"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/resources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceType)) + string("/protection"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("array"))}
  }));
  return DescribeResourcesDeleteProtectionResponse(callApi(params, req, runtime));
}

DescribeResourcesDeleteProtectionResponse Alibabacloud_CS20151215::Client::describeResourcesDeleteProtection(shared_ptr<string> ClusterId, shared_ptr<string> ResourceType, shared_ptr<DescribeResourcesDeleteProtectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeResourcesDeleteProtectionWithOptions(ClusterId, ResourceType, request, headers, runtime);
}

DescribeSubaccountK8sClusterUserConfigResponse Alibabacloud_CS20151215::Client::describeSubaccountK8sClusterUserConfigWithOptions(shared_ptr<string> ClusterId,
                                                                                                                                  shared_ptr<string> Uid,
                                                                                                                                  shared_ptr<DescribeSubaccountK8sClusterUserConfigRequest> request,
                                                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->privateIpAddress)) {
    query->insert(pair<string, bool>("PrivateIpAddress", *request->privateIpAddress));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->temporaryDurationMinutes)) {
    query->insert(pair<string, long>("TemporaryDurationMinutes", *request->temporaryDurationMinutes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSubaccountK8sClusterUserConfig"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/k8s/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/users/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Uid)) + string("/user_config"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSubaccountK8sClusterUserConfigResponse(callApi(params, req, runtime));
}

DescribeSubaccountK8sClusterUserConfigResponse Alibabacloud_CS20151215::Client::describeSubaccountK8sClusterUserConfig(shared_ptr<string> ClusterId, shared_ptr<string> Uid, shared_ptr<DescribeSubaccountK8sClusterUserConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeSubaccountK8sClusterUserConfigWithOptions(ClusterId, Uid, request, headers, runtime);
}

DescribeTaskInfoResponse Alibabacloud_CS20151215::Client::describeTaskInfoWithOptions(shared_ptr<string> taskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTaskInfo"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(taskId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTaskInfoResponse(callApi(params, req, runtime));
}

DescribeTaskInfoResponse Alibabacloud_CS20151215::Client::describeTaskInfo(shared_ptr<string> taskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeTaskInfoWithOptions(taskId, headers, runtime);
}

DescribeTemplateAttributeResponse Alibabacloud_CS20151215::Client::describeTemplateAttributeWithOptions(shared_ptr<string> TemplateId,
                                                                                                        shared_ptr<DescribeTemplateAttributeRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    query->insert(pair<string, string>("template_type", *request->templateType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTemplateAttribute"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/templates/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TemplateId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("array"))}
  }));
  return DescribeTemplateAttributeResponse(callApi(params, req, runtime));
}

DescribeTemplateAttributeResponse Alibabacloud_CS20151215::Client::describeTemplateAttribute(shared_ptr<string> TemplateId, shared_ptr<DescribeTemplateAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeTemplateAttributeWithOptions(TemplateId, request, headers, runtime);
}

DescribeTemplatesResponse Alibabacloud_CS20151215::Client::describeTemplatesWithOptions(shared_ptr<DescribeTemplatesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("page_num", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    query->insert(pair<string, string>("template_type", *request->templateType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTemplates"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/templates"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTemplatesResponse(callApi(params, req, runtime));
}

DescribeTemplatesResponse Alibabacloud_CS20151215::Client::describeTemplates(shared_ptr<DescribeTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeTemplatesWithOptions(request, headers, runtime);
}

DescribeTriggerResponse Alibabacloud_CS20151215::Client::describeTriggerWithOptions(shared_ptr<string> clusterId,
                                                                                    shared_ptr<DescribeTriggerRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->action)) {
    query->insert(pair<string, string>("action", *request->action));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTrigger"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/triggers"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("array"))}
  }));
  return DescribeTriggerResponse(callApi(params, req, runtime));
}

DescribeTriggerResponse Alibabacloud_CS20151215::Client::describeTrigger(shared_ptr<string> clusterId, shared_ptr<DescribeTriggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeTriggerWithOptions(clusterId, request, headers, runtime);
}

DescribeUserClusterNamespacesResponse Alibabacloud_CS20151215::Client::describeUserClusterNamespacesWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUserClusterNamespaces"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/k8s/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/namespaces"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("array"))}
  }));
  return DescribeUserClusterNamespacesResponse(callApi(params, req, runtime));
}

DescribeUserClusterNamespacesResponse Alibabacloud_CS20151215::Client::describeUserClusterNamespaces(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeUserClusterNamespacesWithOptions(ClusterId, headers, runtime);
}

DescribeUserPermissionResponse Alibabacloud_CS20151215::Client::describeUserPermissionWithOptions(shared_ptr<string> uid, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUserPermission"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/permissions/users/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("array"))}
  }));
  return DescribeUserPermissionResponse(callApi(params, req, runtime));
}

DescribeUserPermissionResponse Alibabacloud_CS20151215::Client::describeUserPermission(shared_ptr<string> uid) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeUserPermissionWithOptions(uid, headers, runtime);
}

DescribeUserQuotaResponse Alibabacloud_CS20151215::Client::describeUserQuotaWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUserQuota"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/quota"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUserQuotaResponse(callApi(params, req, runtime));
}

DescribeUserQuotaResponse Alibabacloud_CS20151215::Client::describeUserQuota() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeUserQuotaWithOptions(headers, runtime);
}

EdgeClusterAddEdgeMachineResponse Alibabacloud_CS20151215::Client::edgeClusterAddEdgeMachineWithOptions(shared_ptr<string> clusterid,
                                                                                                        shared_ptr<string> edgeMachineid,
                                                                                                        shared_ptr<EdgeClusterAddEdgeMachineRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->expired)) {
    body->insert(pair<string, long>("expired", *request->expired));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodepoolId)) {
    body->insert(pair<string, string>("nodepool_id", *request->nodepoolId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->options)) {
    body->insert(pair<string, string>("options", *request->options));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EdgeClusterAddEdgeMachine"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/%5Bclusterid%5D/attachedgemachine/%5Bedge_machineid%5D"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EdgeClusterAddEdgeMachineResponse(callApi(params, req, runtime));
}

EdgeClusterAddEdgeMachineResponse Alibabacloud_CS20151215::Client::edgeClusterAddEdgeMachine(shared_ptr<string> clusterid, shared_ptr<string> edgeMachineid, shared_ptr<EdgeClusterAddEdgeMachineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return edgeClusterAddEdgeMachineWithOptions(clusterid, edgeMachineid, request, headers, runtime);
}

FixNodePoolVulsResponse Alibabacloud_CS20151215::Client::fixNodePoolVulsWithOptions(shared_ptr<string> clusterId,
                                                                                    shared_ptr<string> nodepoolId,
                                                                                    shared_ptr<FixNodePoolVulsRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRestart)) {
    body->insert(pair<string, bool>("auto_restart", *request->autoRestart));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->nodes)) {
    body->insert(pair<string, vector<string>>("nodes", *request->nodes));
  }
  if (!Darabonba_Util::Client::isUnset<FixNodePoolVulsRequestRolloutPolicy>(request->rolloutPolicy)) {
    body->insert(pair<string, FixNodePoolVulsRequestRolloutPolicy>("rollout_policy", *request->rolloutPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->vuls)) {
    body->insert(pair<string, vector<string>>("vuls", *request->vuls));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FixNodePoolVuls"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/nodepools/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(nodepoolId)) + string("/vuls/fix"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FixNodePoolVulsResponse(callApi(params, req, runtime));
}

FixNodePoolVulsResponse Alibabacloud_CS20151215::Client::fixNodePoolVuls(shared_ptr<string> clusterId, shared_ptr<string> nodepoolId, shared_ptr<FixNodePoolVulsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return fixNodePoolVulsWithOptions(clusterId, nodepoolId, request, headers, runtime);
}

GetClusterAddonInstanceResponse Alibabacloud_CS20151215::Client::getClusterAddonInstanceWithOptions(shared_ptr<string> clusterId,
                                                                                                    shared_ptr<string> instanceName,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetClusterAddonInstance"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/addon_instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetClusterAddonInstanceResponse(callApi(params, req, runtime));
}

GetClusterAddonInstanceResponse Alibabacloud_CS20151215::Client::getClusterAddonInstance(shared_ptr<string> clusterId, shared_ptr<string> instanceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getClusterAddonInstanceWithOptions(clusterId, instanceName, headers, runtime);
}

GetClusterAuditProjectResponse Alibabacloud_CS20151215::Client::getClusterAuditProjectWithOptions(shared_ptr<string> clusterid, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetClusterAuditProject"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterid)) + string("/audit"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetClusterAuditProjectResponse(callApi(params, req, runtime));
}

GetClusterAuditProjectResponse Alibabacloud_CS20151215::Client::getClusterAuditProject(shared_ptr<string> clusterid) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getClusterAuditProjectWithOptions(clusterid, headers, runtime);
}

GetClusterCheckResponse Alibabacloud_CS20151215::Client::getClusterCheckWithOptions(shared_ptr<string> clusterId,
                                                                                    shared_ptr<string> checkId,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetClusterCheck"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/checks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(checkId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetClusterCheckResponse(callApi(params, req, runtime));
}

GetClusterCheckResponse Alibabacloud_CS20151215::Client::getClusterCheck(shared_ptr<string> clusterId, shared_ptr<string> checkId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getClusterCheckWithOptions(clusterId, checkId, headers, runtime);
}

GetClusterDiagnosisCheckItemsResponse Alibabacloud_CS20151215::Client::getClusterDiagnosisCheckItemsWithOptions(shared_ptr<string> clusterId,
                                                                                                                shared_ptr<string> diagnosisId,
                                                                                                                shared_ptr<GetClusterDiagnosisCheckItemsRequest> request,
                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("language", *request->language));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetClusterDiagnosisCheckItems"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/diagnosis/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(diagnosisId)) + string("/check_items"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetClusterDiagnosisCheckItemsResponse(callApi(params, req, runtime));
}

GetClusterDiagnosisCheckItemsResponse Alibabacloud_CS20151215::Client::getClusterDiagnosisCheckItems(shared_ptr<string> clusterId, shared_ptr<string> diagnosisId, shared_ptr<GetClusterDiagnosisCheckItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getClusterDiagnosisCheckItemsWithOptions(clusterId, diagnosisId, request, headers, runtime);
}

GetClusterDiagnosisResultResponse Alibabacloud_CS20151215::Client::getClusterDiagnosisResultWithOptions(shared_ptr<string> clusterId,
                                                                                                        shared_ptr<string> diagnosisId,
                                                                                                        shared_ptr<GetClusterDiagnosisResultRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("language", *request->language));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetClusterDiagnosisResult"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/diagnosis/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(diagnosisId)) + string("/result"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetClusterDiagnosisResultResponse(callApi(params, req, runtime));
}

GetClusterDiagnosisResultResponse Alibabacloud_CS20151215::Client::getClusterDiagnosisResult(shared_ptr<string> clusterId, shared_ptr<string> diagnosisId, shared_ptr<GetClusterDiagnosisResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getClusterDiagnosisResultWithOptions(clusterId, diagnosisId, request, headers, runtime);
}

GetClusterInspectConfigResponse Alibabacloud_CS20151215::Client::getClusterInspectConfigWithOptions(shared_ptr<string> clusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetClusterInspectConfig"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/inspectConfig"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetClusterInspectConfigResponse(callApi(params, req, runtime));
}

GetClusterInspectConfigResponse Alibabacloud_CS20151215::Client::getClusterInspectConfig(shared_ptr<string> clusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getClusterInspectConfigWithOptions(clusterId, headers, runtime);
}

GetClusterInspectReportDetailResponse Alibabacloud_CS20151215::Client::getClusterInspectReportDetailWithOptions(shared_ptr<string> clusterId,
                                                                                                                shared_ptr<string> reportId,
                                                                                                                shared_ptr<GetClusterInspectReportDetailRequest> request,
                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableFilter)) {
    query->insert(pair<string, bool>("enableFilter", *request->enableFilter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->level)) {
    query->insert(pair<string, string>("level", *request->level));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetType)) {
    query->insert(pair<string, string>("targetType", *request->targetType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetClusterInspectReportDetail"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/inspectReports/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(reportId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetClusterInspectReportDetailResponse(callApi(params, req, runtime));
}

GetClusterInspectReportDetailResponse Alibabacloud_CS20151215::Client::getClusterInspectReportDetail(shared_ptr<string> clusterId, shared_ptr<string> reportId, shared_ptr<GetClusterInspectReportDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getClusterInspectReportDetailWithOptions(clusterId, reportId, request, headers, runtime);
}

GetKubernetesTriggerResponse Alibabacloud_CS20151215::Client::getKubernetesTriggerWithOptions(shared_ptr<string> ClusterId,
                                                                                              shared_ptr<GetKubernetesTriggerRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->action)) {
    query->insert(pair<string, string>("action", *request->action));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetKubernetesTrigger"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/triggers/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("array"))}
  }));
  return GetKubernetesTriggerResponse(callApi(params, req, runtime));
}

GetKubernetesTriggerResponse Alibabacloud_CS20151215::Client::getKubernetesTrigger(shared_ptr<string> ClusterId, shared_ptr<GetKubernetesTriggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getKubernetesTriggerWithOptions(ClusterId, request, headers, runtime);
}

GetUpgradeStatusResponse Alibabacloud_CS20151215::Client::getUpgradeStatusWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUpgradeStatus"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/upgrade/status"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUpgradeStatusResponse(callApi(params, req, runtime));
}

GetUpgradeStatusResponse Alibabacloud_CS20151215::Client::getUpgradeStatus(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getUpgradeStatusWithOptions(ClusterId, headers, runtime);
}

GrantPermissionsResponse Alibabacloud_CS20151215::Client::grantPermissionsWithOptions(shared_ptr<string> uid,
                                                                                      shared_ptr<GrantPermissionsRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Darabonba_Util::Client::toArray<vector<GrantPermissionsRequestBody>>(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GrantPermissions"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/permissions/users/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return GrantPermissionsResponse(callApi(params, req, runtime));
}

GrantPermissionsResponse Alibabacloud_CS20151215::Client::grantPermissions(shared_ptr<string> uid, shared_ptr<GrantPermissionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return grantPermissionsWithOptions(uid, request, headers, runtime);
}

InstallClusterAddonsResponse Alibabacloud_CS20151215::Client::installClusterAddonsWithOptions(shared_ptr<string> ClusterId,
                                                                                              shared_ptr<InstallClusterAddonsRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Darabonba_Util::Client::toArray<vector<InstallClusterAddonsRequestBody>>(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InstallClusterAddons"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/components/install"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InstallClusterAddonsResponse(callApi(params, req, runtime));
}

InstallClusterAddonsResponse Alibabacloud_CS20151215::Client::installClusterAddons(shared_ptr<string> ClusterId, shared_ptr<InstallClusterAddonsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return installClusterAddonsWithOptions(ClusterId, request, headers, runtime);
}

ListAddonsResponse Alibabacloud_CS20151215::Client::listAddonsWithOptions(shared_ptr<ListAddonsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("cluster_id", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterSpec)) {
    query->insert(pair<string, string>("cluster_spec", *request->clusterSpec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    query->insert(pair<string, string>("cluster_type", *request->clusterType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterVersion)) {
    query->insert(pair<string, string>("cluster_version", *request->clusterVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->profile)) {
    query->insert(pair<string, string>("profile", *request->profile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("region_id", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAddons"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/addons"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAddonsResponse(callApi(params, req, runtime));
}

ListAddonsResponse Alibabacloud_CS20151215::Client::listAddons(shared_ptr<ListAddonsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAddonsWithOptions(request, headers, runtime);
}

ListClusterAddonInstancesResponse Alibabacloud_CS20151215::Client::listClusterAddonInstancesWithOptions(shared_ptr<string> clusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListClusterAddonInstances"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/addon_instances"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListClusterAddonInstancesResponse(callApi(params, req, runtime));
}

ListClusterAddonInstancesResponse Alibabacloud_CS20151215::Client::listClusterAddonInstances(shared_ptr<string> clusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listClusterAddonInstancesWithOptions(clusterId, headers, runtime);
}

ListClusterChecksResponse Alibabacloud_CS20151215::Client::listClusterChecksWithOptions(shared_ptr<string> clusterId,
                                                                                        shared_ptr<ListClusterChecksRequest> request,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->target)) {
    query->insert(pair<string, string>("target", *request->target));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListClusterChecks"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/checks"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListClusterChecksResponse(callApi(params, req, runtime));
}

ListClusterChecksResponse Alibabacloud_CS20151215::Client::listClusterChecks(shared_ptr<string> clusterId, shared_ptr<ListClusterChecksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listClusterChecksWithOptions(clusterId, request, headers, runtime);
}

ListClusterInspectReportsResponse Alibabacloud_CS20151215::Client::listClusterInspectReportsWithOptions(shared_ptr<string> clusterId,
                                                                                                        shared_ptr<ListClusterInspectReportsRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListClusterInspectReports"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/inspectReports"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListClusterInspectReportsResponse(callApi(params, req, runtime));
}

ListClusterInspectReportsResponse Alibabacloud_CS20151215::Client::listClusterInspectReports(shared_ptr<string> clusterId, shared_ptr<ListClusterInspectReportsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listClusterInspectReportsWithOptions(clusterId, request, headers, runtime);
}

ListClusterKubeconfigStatesResponse Alibabacloud_CS20151215::Client::listClusterKubeconfigStatesWithOptions(shared_ptr<string> ClusterId,
                                                                                                            shared_ptr<ListClusterKubeconfigStatesRequest> request,
                                                                                                            shared_ptr<map<string, string>> headers,
                                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListClusterKubeconfigStates"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/kubeconfig/states"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListClusterKubeconfigStatesResponse(callApi(params, req, runtime));
}

ListClusterKubeconfigStatesResponse Alibabacloud_CS20151215::Client::listClusterKubeconfigStates(shared_ptr<string> ClusterId, shared_ptr<ListClusterKubeconfigStatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listClusterKubeconfigStatesWithOptions(ClusterId, request, headers, runtime);
}

ListOperationPlansResponse Alibabacloud_CS20151215::Client::listOperationPlansWithOptions(shared_ptr<ListOperationPlansRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("cluster_id", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOperationPlans"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/operation/plans"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOperationPlansResponse(callApi(params, req, runtime));
}

ListOperationPlansResponse Alibabacloud_CS20151215::Client::listOperationPlans(shared_ptr<ListOperationPlansRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listOperationPlansWithOptions(request, headers, runtime);
}

ListTagResourcesResponse Alibabacloud_CS20151215::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListTagResourcesShrinkRequest> request = make_shared<ListTagResourcesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->resourceIds)) {
    request->resourceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resourceIds, make_shared<string>("resource_ids"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<Tag>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("next_token", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("region_id", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIdsShrink)) {
    query->insert(pair<string, string>("resource_ids", *request->resourceIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("resource_type", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("tags", *request->tagsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagResources"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/tags"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagResourcesResponse(callApi(params, req, runtime));
}

ListTagResourcesResponse Alibabacloud_CS20151215::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTagResourcesWithOptions(request, headers, runtime);
}

ListUserKubeConfigStatesResponse Alibabacloud_CS20151215::Client::listUserKubeConfigStatesWithOptions(shared_ptr<string> Uid,
                                                                                                      shared_ptr<ListUserKubeConfigStatesRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("page_number", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserKubeConfigStates"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/users/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Uid)) + string("/kubeconfig/states"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUserKubeConfigStatesResponse(callApi(params, req, runtime));
}

ListUserKubeConfigStatesResponse Alibabacloud_CS20151215::Client::listUserKubeConfigStates(shared_ptr<string> Uid, shared_ptr<ListUserKubeConfigStatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listUserKubeConfigStatesWithOptions(Uid, request, headers, runtime);
}

MigrateClusterResponse Alibabacloud_CS20151215::Client::migrateClusterWithOptions(shared_ptr<string> clusterId,
                                                                                  shared_ptr<MigrateClusterRequest> request,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ossBucketEndpoint)) {
    body->insert(pair<string, string>("oss_bucket_endpoint", *request->ossBucketEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossBucketName)) {
    body->insert(pair<string, string>("oss_bucket_name", *request->ossBucketName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MigrateCluster"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/migrate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MigrateClusterResponse(callApi(params, req, runtime));
}

MigrateClusterResponse Alibabacloud_CS20151215::Client::migrateCluster(shared_ptr<string> clusterId, shared_ptr<MigrateClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return migrateClusterWithOptions(clusterId, request, headers, runtime);
}

ModifyClusterResponse Alibabacloud_CS20151215::Client::modifyClusterWithOptions(shared_ptr<string> ClusterId,
                                                                                shared_ptr<ModifyClusterRequest> request,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->accessControlList)) {
    body->insert(pair<string, vector<string>>("access_control_list", *request->accessControlList));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyClusterRequestApiServerCustomCertSans>(request->apiServerCustomCertSans)) {
    body->insert(pair<string, ModifyClusterRequestApiServerCustomCertSans>("api_server_custom_cert_sans", *request->apiServerCustomCertSans));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->apiServerEip)) {
    body->insert(pair<string, bool>("api_server_eip", *request->apiServerEip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiServerEipId)) {
    body->insert(pair<string, string>("api_server_eip_id", *request->apiServerEipId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterName)) {
    body->insert(pair<string, string>("cluster_name", *request->clusterName));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyClusterRequestControlPlaneConfig>(request->controlPlaneConfig)) {
    body->insert(pair<string, ModifyClusterRequestControlPlaneConfig>("control_plane_config", *request->controlPlaneConfig));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->deletionProtection)) {
    body->insert(pair<string, bool>("deletion_protection", *request->deletionProtection));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableRrsa)) {
    body->insert(pair<string, bool>("enable_rrsa", *request->enableRrsa));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ingressDomainRebinding)) {
    body->insert(pair<string, bool>("ingress_domain_rebinding", *request->ingressDomainRebinding));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ingressLoadbalancerId)) {
    body->insert(pair<string, string>("ingress_loadbalancer_id", *request->ingressLoadbalancerId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->instanceDeletionProtection)) {
    body->insert(pair<string, bool>("instance_deletion_protection", *request->instanceDeletionProtection));
  }
  if (!Darabonba_Util::Client::isUnset<MaintenanceWindow>(request->maintenanceWindow)) {
    body->insert(pair<string, MaintenanceWindow>("maintenance_window", *request->maintenanceWindow));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyClusterRequestOperationPolicy>(request->operationPolicy)) {
    body->insert(pair<string, ModifyClusterRequestOperationPolicy>("operation_policy", *request->operationPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("resource_group_id", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    body->insert(pair<string, string>("security_group_id", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyClusterRequestSystemEventsLogging>(request->systemEventsLogging)) {
    body->insert(pair<string, ModifyClusterRequestSystemEventsLogging>("system_events_logging", *request->systemEventsLogging));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timezone)) {
    body->insert(pair<string, string>("timezone", *request->timezone));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->vswitchIds)) {
    body->insert(pair<string, vector<string>>("vswitch_ids", *request->vswitchIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyCluster"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyClusterResponse(callApi(params, req, runtime));
}

ModifyClusterResponse Alibabacloud_CS20151215::Client::modifyCluster(shared_ptr<string> ClusterId, shared_ptr<ModifyClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyClusterWithOptions(ClusterId, request, headers, runtime);
}

ModifyClusterAddonResponse Alibabacloud_CS20151215::Client::modifyClusterAddonWithOptions(shared_ptr<string> clusterId,
                                                                                          shared_ptr<string> componentId,
                                                                                          shared_ptr<ModifyClusterAddonRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->config)) {
    body->insert(pair<string, string>("config", *request->config));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyClusterAddon"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/components/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(componentId)) + string("/config"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return ModifyClusterAddonResponse(callApi(params, req, runtime));
}

ModifyClusterAddonResponse Alibabacloud_CS20151215::Client::modifyClusterAddon(shared_ptr<string> clusterId, shared_ptr<string> componentId, shared_ptr<ModifyClusterAddonRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyClusterAddonWithOptions(clusterId, componentId, request, headers, runtime);
}

ModifyClusterConfigurationResponse Alibabacloud_CS20151215::Client::modifyClusterConfigurationWithOptions(shared_ptr<string> ClusterId,
                                                                                                          shared_ptr<ModifyClusterConfigurationRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ModifyClusterConfigurationRequestCustomizeConfig>>(request->customizeConfig)) {
    body->insert(pair<string, vector<ModifyClusterConfigurationRequestCustomizeConfig>>("customize_config", *request->customizeConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyClusterConfiguration"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/configuration"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return ModifyClusterConfigurationResponse(callApi(params, req, runtime));
}

ModifyClusterConfigurationResponse Alibabacloud_CS20151215::Client::modifyClusterConfiguration(shared_ptr<string> ClusterId, shared_ptr<ModifyClusterConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyClusterConfigurationWithOptions(ClusterId, request, headers, runtime);
}

ModifyClusterNodePoolResponse Alibabacloud_CS20151215::Client::modifyClusterNodePoolWithOptions(shared_ptr<string> ClusterId,
                                                                                                shared_ptr<string> NodepoolId,
                                                                                                shared_ptr<ModifyClusterNodePoolRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<ModifyClusterNodePoolRequestAutoScaling>(request->autoScaling)) {
    body->insert(pair<string, ModifyClusterNodePoolRequestAutoScaling>("auto_scaling", *request->autoScaling));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->concurrency)) {
    body->insert(pair<string, bool>("concurrency", *request->concurrency));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyClusterNodePoolRequestKubernetesConfig>(request->kubernetesConfig)) {
    body->insert(pair<string, ModifyClusterNodePoolRequestKubernetesConfig>("kubernetes_config", *request->kubernetesConfig));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyClusterNodePoolRequestManagement>(request->management)) {
    body->insert(pair<string, ModifyClusterNodePoolRequestManagement>("management", *request->management));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyClusterNodePoolRequestNodepoolInfo>(request->nodepoolInfo)) {
    body->insert(pair<string, ModifyClusterNodePoolRequestNodepoolInfo>("nodepool_info", *request->nodepoolInfo));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyClusterNodePoolRequestScalingGroup>(request->scalingGroup)) {
    body->insert(pair<string, ModifyClusterNodePoolRequestScalingGroup>("scaling_group", *request->scalingGroup));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyClusterNodePoolRequestTeeConfig>(request->teeConfig)) {
    body->insert(pair<string, ModifyClusterNodePoolRequestTeeConfig>("tee_config", *request->teeConfig));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->updateNodes)) {
    body->insert(pair<string, bool>("update_nodes", *request->updateNodes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyClusterNodePool"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/nodepools/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(NodepoolId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyClusterNodePoolResponse(callApi(params, req, runtime));
}

ModifyClusterNodePoolResponse Alibabacloud_CS20151215::Client::modifyClusterNodePool(shared_ptr<string> ClusterId, shared_ptr<string> NodepoolId, shared_ptr<ModifyClusterNodePoolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyClusterNodePoolWithOptions(ClusterId, NodepoolId, request, headers, runtime);
}

ModifyClusterTagsResponse Alibabacloud_CS20151215::Client::modifyClusterTagsWithOptions(shared_ptr<string> ClusterId,
                                                                                        shared_ptr<ModifyClusterTagsRequest> request,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Darabonba_Util::Client::toArray<vector<Tag>>(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyClusterTags"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/tags"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return ModifyClusterTagsResponse(callApi(params, req, runtime));
}

ModifyClusterTagsResponse Alibabacloud_CS20151215::Client::modifyClusterTags(shared_ptr<string> ClusterId, shared_ptr<ModifyClusterTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyClusterTagsWithOptions(ClusterId, request, headers, runtime);
}

ModifyNodePoolNodeConfigResponse Alibabacloud_CS20151215::Client::modifyNodePoolNodeConfigWithOptions(shared_ptr<string> ClusterId,
                                                                                                      shared_ptr<string> NodepoolId,
                                                                                                      shared_ptr<ModifyNodePoolNodeConfigRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<ContainerdConfig>(request->containerdConfig)) {
    body->insert(pair<string, ContainerdConfig>("containerd_config", *request->containerdConfig));
  }
  if (!Darabonba_Util::Client::isUnset<KubeletConfig>(request->kubeletConfig)) {
    body->insert(pair<string, KubeletConfig>("kubelet_config", *request->kubeletConfig));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyNodePoolNodeConfigRequestOsConfig>(request->osConfig)) {
    body->insert(pair<string, ModifyNodePoolNodeConfigRequestOsConfig>("os_config", *request->osConfig));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyNodePoolNodeConfigRequestRollingPolicy>(request->rollingPolicy)) {
    body->insert(pair<string, ModifyNodePoolNodeConfigRequestRollingPolicy>("rolling_policy", *request->rollingPolicy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyNodePoolNodeConfig"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/nodepools/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(NodepoolId)) + string("/node_config"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyNodePoolNodeConfigResponse(callApi(params, req, runtime));
}

ModifyNodePoolNodeConfigResponse Alibabacloud_CS20151215::Client::modifyNodePoolNodeConfig(shared_ptr<string> ClusterId, shared_ptr<string> NodepoolId, shared_ptr<ModifyNodePoolNodeConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyNodePoolNodeConfigWithOptions(ClusterId, NodepoolId, request, headers, runtime);
}

ModifyPolicyInstanceResponse Alibabacloud_CS20151215::Client::modifyPolicyInstanceWithOptions(shared_ptr<string> clusterId,
                                                                                              shared_ptr<string> policyName,
                                                                                              shared_ptr<ModifyPolicyInstanceRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->action)) {
    body->insert(pair<string, string>("action", *request->action));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    body->insert(pair<string, string>("instance_name", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->namespaces)) {
    body->insert(pair<string, vector<string>>("namespaces", *request->namespaces));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->parameters)) {
    body->insert(pair<string, map<string, boost::any>>("parameters", *request->parameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyPolicyInstance"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/policies/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(policyName)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyPolicyInstanceResponse(callApi(params, req, runtime));
}

ModifyPolicyInstanceResponse Alibabacloud_CS20151215::Client::modifyPolicyInstance(shared_ptr<string> clusterId, shared_ptr<string> policyName, shared_ptr<ModifyPolicyInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyPolicyInstanceWithOptions(clusterId, policyName, request, headers, runtime);
}

OpenAckServiceResponse Alibabacloud_CS20151215::Client::openAckServiceWithOptions(shared_ptr<OpenAckServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenAckService"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/service/open"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenAckServiceResponse(callApi(params, req, runtime));
}

OpenAckServiceResponse Alibabacloud_CS20151215::Client::openAckService(shared_ptr<OpenAckServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return openAckServiceWithOptions(request, headers, runtime);
}

PauseClusterUpgradeResponse Alibabacloud_CS20151215::Client::pauseClusterUpgradeWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PauseClusterUpgrade"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/upgrade/pause"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return PauseClusterUpgradeResponse(callApi(params, req, runtime));
}

PauseClusterUpgradeResponse Alibabacloud_CS20151215::Client::pauseClusterUpgrade(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return pauseClusterUpgradeWithOptions(ClusterId, headers, runtime);
}

PauseComponentUpgradeResponse Alibabacloud_CS20151215::Client::pauseComponentUpgradeWithOptions(shared_ptr<string> clusterid,
                                                                                                shared_ptr<string> componentid,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PauseComponentUpgrade"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterid)) + string("/components/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(componentid)) + string("/pause"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return PauseComponentUpgradeResponse(callApi(params, req, runtime));
}

PauseComponentUpgradeResponse Alibabacloud_CS20151215::Client::pauseComponentUpgrade(shared_ptr<string> clusterid, shared_ptr<string> componentid) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return pauseComponentUpgradeWithOptions(clusterid, componentid, headers, runtime);
}

PauseTaskResponse Alibabacloud_CS20151215::Client::pauseTaskWithOptions(shared_ptr<string> taskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PauseTask"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(taskId)) + string("/pause"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return PauseTaskResponse(callApi(params, req, runtime));
}

PauseTaskResponse Alibabacloud_CS20151215::Client::pauseTask(shared_ptr<string> taskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return pauseTaskWithOptions(taskId, headers, runtime);
}

RemoveClusterNodesResponse Alibabacloud_CS20151215::Client::removeClusterNodesWithOptions(shared_ptr<string> ClusterId,
                                                                                          shared_ptr<RemoveClusterNodesRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->drainNode)) {
    body->insert(pair<string, bool>("drain_node", *request->drainNode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->nodes)) {
    body->insert(pair<string, vector<string>>("nodes", *request->nodes));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->releaseNode)) {
    body->insert(pair<string, bool>("release_node", *request->releaseNode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveClusterNodes"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/nodes/remove"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return RemoveClusterNodesResponse(callApi(params, req, runtime));
}

RemoveClusterNodesResponse Alibabacloud_CS20151215::Client::removeClusterNodes(shared_ptr<string> ClusterId, shared_ptr<RemoveClusterNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeClusterNodesWithOptions(ClusterId, request, headers, runtime);
}

RemoveNodePoolNodesResponse Alibabacloud_CS20151215::Client::removeNodePoolNodesWithOptions(shared_ptr<string> ClusterId,
                                                                                            shared_ptr<string> NodepoolId,
                                                                                            shared_ptr<RemoveNodePoolNodesRequest> tmpReq,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RemoveNodePoolNodesShrinkRequest> request = make_shared<RemoveNodePoolNodesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceIds)) {
    request->instanceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceIds, make_shared<string>("instance_ids"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->nodes)) {
    request->nodesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->nodes, make_shared<string>("nodes"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->concurrency)) {
    query->insert(pair<string, bool>("concurrency", *request->concurrency));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->drainNode)) {
    query->insert(pair<string, bool>("drain_node", *request->drainNode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIdsShrink)) {
    query->insert(pair<string, string>("instance_ids", *request->instanceIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodesShrink)) {
    query->insert(pair<string, string>("nodes", *request->nodesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->releaseNode)) {
    query->insert(pair<string, bool>("release_node", *request->releaseNode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveNodePoolNodes"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/nodepools/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(NodepoolId)) + string("/nodes"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveNodePoolNodesResponse(callApi(params, req, runtime));
}

RemoveNodePoolNodesResponse Alibabacloud_CS20151215::Client::removeNodePoolNodes(shared_ptr<string> ClusterId, shared_ptr<string> NodepoolId, shared_ptr<RemoveNodePoolNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeNodePoolNodesWithOptions(ClusterId, NodepoolId, request, headers, runtime);
}

RepairClusterNodePoolResponse Alibabacloud_CS20151215::Client::repairClusterNodePoolWithOptions(shared_ptr<string> clusterId,
                                                                                                shared_ptr<string> nodepoolId,
                                                                                                shared_ptr<RepairClusterNodePoolRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRestart)) {
    body->insert(pair<string, bool>("auto_restart", *request->autoRestart));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->nodes)) {
    body->insert(pair<string, vector<string>>("nodes", *request->nodes));
  }
  if (!Darabonba_Util::Client::isUnset<vector<RepairClusterNodePoolRequestOperations>>(request->operations)) {
    body->insert(pair<string, vector<RepairClusterNodePoolRequestOperations>>("operations", *request->operations));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RepairClusterNodePool"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/nodepools/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(nodepoolId)) + string("/repair"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RepairClusterNodePoolResponse(callApi(params, req, runtime));
}

RepairClusterNodePoolResponse Alibabacloud_CS20151215::Client::repairClusterNodePool(shared_ptr<string> clusterId, shared_ptr<string> nodepoolId, shared_ptr<RepairClusterNodePoolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return repairClusterNodePoolWithOptions(clusterId, nodepoolId, request, headers, runtime);
}

ResumeComponentUpgradeResponse Alibabacloud_CS20151215::Client::resumeComponentUpgradeWithOptions(shared_ptr<string> clusterid,
                                                                                                  shared_ptr<string> componentid,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResumeComponentUpgrade"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterid)) + string("/components/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(componentid)) + string("/resume"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return ResumeComponentUpgradeResponse(callApi(params, req, runtime));
}

ResumeComponentUpgradeResponse Alibabacloud_CS20151215::Client::resumeComponentUpgrade(shared_ptr<string> clusterid, shared_ptr<string> componentid) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return resumeComponentUpgradeWithOptions(clusterid, componentid, headers, runtime);
}

ResumeTaskResponse Alibabacloud_CS20151215::Client::resumeTaskWithOptions(shared_ptr<string> taskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResumeTask"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(taskId)) + string("/resume"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return ResumeTaskResponse(callApi(params, req, runtime));
}

ResumeTaskResponse Alibabacloud_CS20151215::Client::resumeTask(shared_ptr<string> taskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return resumeTaskWithOptions(taskId, headers, runtime);
}

ResumeUpgradeClusterResponse Alibabacloud_CS20151215::Client::resumeUpgradeClusterWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResumeUpgradeCluster"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/upgrade/resume"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return ResumeUpgradeClusterResponse(callApi(params, req, runtime));
}

ResumeUpgradeClusterResponse Alibabacloud_CS20151215::Client::resumeUpgradeCluster(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return resumeUpgradeClusterWithOptions(ClusterId, headers, runtime);
}

RevokeK8sClusterKubeConfigResponse Alibabacloud_CS20151215::Client::revokeK8sClusterKubeConfigWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RevokeK8sClusterKubeConfig"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/k8s/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/certs"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RevokeK8sClusterKubeConfigResponse(callApi(params, req, runtime));
}

RevokeK8sClusterKubeConfigResponse Alibabacloud_CS20151215::Client::revokeK8sClusterKubeConfig(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return revokeK8sClusterKubeConfigWithOptions(ClusterId, headers, runtime);
}

RunClusterCheckResponse Alibabacloud_CS20151215::Client::runClusterCheckWithOptions(shared_ptr<string> clusterId,
                                                                                    shared_ptr<RunClusterCheckRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(request->options)) {
    body->insert(pair<string, map<string, string>>("options", *request->options));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->target)) {
    body->insert(pair<string, string>("target", *request->target));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunClusterCheck"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/checks"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunClusterCheckResponse(callApi(params, req, runtime));
}

RunClusterCheckResponse Alibabacloud_CS20151215::Client::runClusterCheck(shared_ptr<string> clusterId, shared_ptr<RunClusterCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runClusterCheckWithOptions(clusterId, request, headers, runtime);
}

RunClusterInspectResponse Alibabacloud_CS20151215::Client::runClusterInspectWithOptions(shared_ptr<string> clusterId,
                                                                                        shared_ptr<RunClusterInspectRequest> request,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunClusterInspect"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/inspectReports"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunClusterInspectResponse(callApi(params, req, runtime));
}

RunClusterInspectResponse Alibabacloud_CS20151215::Client::runClusterInspect(shared_ptr<string> clusterId, shared_ptr<RunClusterInspectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runClusterInspectWithOptions(clusterId, request, headers, runtime);
}

ScaleClusterResponse Alibabacloud_CS20151215::Client::scaleClusterWithOptions(shared_ptr<string> ClusterId,
                                                                              shared_ptr<ScaleClusterRequest> request,
                                                                              shared_ptr<map<string, string>> headers,
                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->cloudMonitorFlags)) {
    body->insert(pair<string, bool>("cloud_monitor_flags", *request->cloudMonitorFlags));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->count)) {
    body->insert(pair<string, long>("count", *request->count));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cpuPolicy)) {
    body->insert(pair<string, string>("cpu_policy", *request->cpuPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->disableRollback)) {
    body->insert(pair<string, bool>("disable_rollback", *request->disableRollback));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPair)) {
    body->insert(pair<string, string>("key_pair", *request->keyPair));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginPassword)) {
    body->insert(pair<string, string>("login_password", *request->loginPassword));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ScaleClusterRequestTags>>(request->tags)) {
    body->insert(pair<string, vector<ScaleClusterRequestTags>>("tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ScaleClusterRequestTaints>>(request->taints)) {
    body->insert(pair<string, vector<ScaleClusterRequestTaints>>("taints", *request->taints));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->vswitchIds)) {
    body->insert(pair<string, vector<string>>("vswitch_ids", *request->vswitchIds));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->workerAutoRenew)) {
    body->insert(pair<string, bool>("worker_auto_renew", *request->workerAutoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workerAutoRenewPeriod)) {
    body->insert(pair<string, long>("worker_auto_renew_period", *request->workerAutoRenewPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->workerDataDisk)) {
    body->insert(pair<string, bool>("worker_data_disk", *request->workerDataDisk));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ScaleClusterRequestWorkerDataDisks>>(request->workerDataDisks)) {
    body->insert(pair<string, vector<ScaleClusterRequestWorkerDataDisks>>("worker_data_disks", *request->workerDataDisks));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workerInstanceChargeType)) {
    body->insert(pair<string, string>("worker_instance_charge_type", *request->workerInstanceChargeType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->workerInstanceTypes)) {
    body->insert(pair<string, vector<string>>("worker_instance_types", *request->workerInstanceTypes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workerPeriod)) {
    body->insert(pair<string, long>("worker_period", *request->workerPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workerPeriodUnit)) {
    body->insert(pair<string, string>("worker_period_unit", *request->workerPeriodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workerSystemDiskCategory)) {
    body->insert(pair<string, string>("worker_system_disk_category", *request->workerSystemDiskCategory));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workerSystemDiskSize)) {
    body->insert(pair<string, long>("worker_system_disk_size", *request->workerSystemDiskSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ScaleCluster"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ScaleClusterResponse(callApi(params, req, runtime));
}

ScaleClusterResponse Alibabacloud_CS20151215::Client::scaleCluster(shared_ptr<string> ClusterId, shared_ptr<ScaleClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return scaleClusterWithOptions(ClusterId, request, headers, runtime);
}

ScaleClusterNodePoolResponse Alibabacloud_CS20151215::Client::scaleClusterNodePoolWithOptions(shared_ptr<string> ClusterId,
                                                                                              shared_ptr<string> NodepoolId,
                                                                                              shared_ptr<ScaleClusterNodePoolRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->count)) {
    body->insert(pair<string, long>("count", *request->count));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ScaleClusterNodePool"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/nodepools/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(NodepoolId)))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ScaleClusterNodePoolResponse(callApi(params, req, runtime));
}

ScaleClusterNodePoolResponse Alibabacloud_CS20151215::Client::scaleClusterNodePool(shared_ptr<string> ClusterId, shared_ptr<string> NodepoolId, shared_ptr<ScaleClusterNodePoolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return scaleClusterNodePoolWithOptions(ClusterId, NodepoolId, request, headers, runtime);
}

ScaleOutClusterResponse Alibabacloud_CS20151215::Client::scaleOutClusterWithOptions(shared_ptr<string> ClusterId,
                                                                                    shared_ptr<ScaleOutClusterRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->cloudMonitorFlags)) {
    body->insert(pair<string, bool>("cloud_monitor_flags", *request->cloudMonitorFlags));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->count)) {
    body->insert(pair<string, long>("count", *request->count));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cpuPolicy)) {
    body->insert(pair<string, string>("cpu_policy", *request->cpuPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    body->insert(pair<string, string>("image_id", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPair)) {
    body->insert(pair<string, string>("key_pair", *request->keyPair));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginPassword)) {
    body->insert(pair<string, string>("login_password", *request->loginPassword));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->rdsInstances)) {
    body->insert(pair<string, vector<string>>("rds_instances", *request->rdsInstances));
  }
  if (!Darabonba_Util::Client::isUnset<Runtime>(request->runtime)) {
    body->insert(pair<string, Runtime>("runtime", *request->runtime));
  }
  if (!Darabonba_Util::Client::isUnset<vector<Tag>>(request->tags)) {
    body->insert(pair<string, vector<Tag>>("tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<vector<Taint>>(request->taints)) {
    body->insert(pair<string, vector<Taint>>("taints", *request->taints));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    body->insert(pair<string, string>("user_data", *request->userData));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->vswitchIds)) {
    body->insert(pair<string, vector<string>>("vswitch_ids", *request->vswitchIds));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->workerAutoRenew)) {
    body->insert(pair<string, bool>("worker_auto_renew", *request->workerAutoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workerAutoRenewPeriod)) {
    body->insert(pair<string, long>("worker_auto_renew_period", *request->workerAutoRenewPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ScaleOutClusterRequestWorkerDataDisks>>(request->workerDataDisks)) {
    body->insert(pair<string, vector<ScaleOutClusterRequestWorkerDataDisks>>("worker_data_disks", *request->workerDataDisks));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workerInstanceChargeType)) {
    body->insert(pair<string, string>("worker_instance_charge_type", *request->workerInstanceChargeType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->workerInstanceTypes)) {
    body->insert(pair<string, vector<string>>("worker_instance_types", *request->workerInstanceTypes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workerPeriod)) {
    body->insert(pair<string, long>("worker_period", *request->workerPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workerPeriodUnit)) {
    body->insert(pair<string, string>("worker_period_unit", *request->workerPeriodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workerSystemDiskCategory)) {
    body->insert(pair<string, string>("worker_system_disk_category", *request->workerSystemDiskCategory));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workerSystemDiskSize)) {
    body->insert(pair<string, long>("worker_system_disk_size", *request->workerSystemDiskSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ScaleOutCluster"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ScaleOutClusterResponse(callApi(params, req, runtime));
}

ScaleOutClusterResponse Alibabacloud_CS20151215::Client::scaleOutCluster(shared_ptr<string> ClusterId, shared_ptr<ScaleOutClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return scaleOutClusterWithOptions(ClusterId, request, headers, runtime);
}

ScanClusterVulsResponse Alibabacloud_CS20151215::Client::scanClusterVulsWithOptions(shared_ptr<string> clusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ScanClusterVuls"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/vuls/scan"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ScanClusterVulsResponse(callApi(params, req, runtime));
}

ScanClusterVulsResponse Alibabacloud_CS20151215::Client::scanClusterVuls(shared_ptr<string> clusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return scanClusterVulsWithOptions(clusterId, headers, runtime);
}

StartAlertResponse Alibabacloud_CS20151215::Client::startAlertWithOptions(shared_ptr<string> ClusterId,
                                                                          shared_ptr<StartAlertRequest> request,
                                                                          shared_ptr<map<string, string>> headers,
                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertRuleGroupName)) {
    body->insert(pair<string, string>("alert_rule_group_name", *request->alertRuleGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertRuleName)) {
    body->insert(pair<string, string>("alert_rule_name", *request->alertRuleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartAlert"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/alert/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/alert_rule/start"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartAlertResponse(callApi(params, req, runtime));
}

StartAlertResponse Alibabacloud_CS20151215::Client::startAlert(shared_ptr<string> ClusterId, shared_ptr<StartAlertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startAlertWithOptions(ClusterId, request, headers, runtime);
}

StopAlertResponse Alibabacloud_CS20151215::Client::stopAlertWithOptions(shared_ptr<string> ClusterId,
                                                                        shared_ptr<StopAlertRequest> request,
                                                                        shared_ptr<map<string, string>> headers,
                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertRuleGroupName)) {
    body->insert(pair<string, string>("alert_rule_group_name", *request->alertRuleGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertRuleName)) {
    body->insert(pair<string, string>("alert_rule_name", *request->alertRuleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopAlert"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/alert/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/alert_rule/stop"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopAlertResponse(callApi(params, req, runtime));
}

StopAlertResponse Alibabacloud_CS20151215::Client::stopAlert(shared_ptr<string> ClusterId, shared_ptr<StopAlertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopAlertWithOptions(ClusterId, request, headers, runtime);
}

SyncClusterNodePoolResponse Alibabacloud_CS20151215::Client::syncClusterNodePoolWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SyncClusterNodePool"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/sync_nodepools"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SyncClusterNodePoolResponse(callApi(params, req, runtime));
}

SyncClusterNodePoolResponse Alibabacloud_CS20151215::Client::syncClusterNodePool(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return syncClusterNodePoolWithOptions(ClusterId, headers, runtime);
}

TagResourcesResponse Alibabacloud_CS20151215::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("region_id", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceIds)) {
    body->insert(pair<string, vector<string>>("resource_ids", *request->resourceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    body->insert(pair<string, string>("resource_type", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<Tag>>(request->tags)) {
    body->insert(pair<string, vector<Tag>>("tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/tags"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagResourcesResponse(callApi(params, req, runtime));
}

TagResourcesResponse Alibabacloud_CS20151215::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return tagResourcesWithOptions(request, headers, runtime);
}

UnInstallClusterAddonsResponse Alibabacloud_CS20151215::Client::unInstallClusterAddonsWithOptions(shared_ptr<string> ClusterId,
                                                                                                  shared_ptr<UnInstallClusterAddonsRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Darabonba_Util::Client::toArray<vector<UnInstallClusterAddonsRequestAddons>>(request->addons))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnInstallClusterAddons"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/components/uninstall"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnInstallClusterAddonsResponse(callApi(params, req, runtime));
}

UnInstallClusterAddonsResponse Alibabacloud_CS20151215::Client::unInstallClusterAddons(shared_ptr<string> ClusterId, shared_ptr<UnInstallClusterAddonsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return unInstallClusterAddonsWithOptions(ClusterId, request, headers, runtime);
}

UntagResourcesResponse Alibabacloud_CS20151215::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UntagResourcesShrinkRequest> request = make_shared<UntagResourcesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->resourceIds)) {
    request->resourceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resourceIds, make_shared<string>("resource_ids"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->tagKeys)) {
    request->tagKeysShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tagKeys, make_shared<string>("tag_keys"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("all", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("region_id", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIdsShrink)) {
    query->insert(pair<string, string>("resource_ids", *request->resourceIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("resource_type", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKeysShrink)) {
    query->insert(pair<string, string>("tag_keys", *request->tagKeysShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/tags"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UntagResourcesResponse(callApi(params, req, runtime));
}

UntagResourcesResponse Alibabacloud_CS20151215::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return untagResourcesWithOptions(request, headers, runtime);
}

UpdateClusterAuditLogConfigResponse Alibabacloud_CS20151215::Client::updateClusterAuditLogConfigWithOptions(shared_ptr<string> clusterid,
                                                                                                            shared_ptr<UpdateClusterAuditLogConfigRequest> request,
                                                                                                            shared_ptr<map<string, string>> headers,
                                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->disable)) {
    body->insert(pair<string, bool>("disable", *request->disable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slsProjectName)) {
    body->insert(pair<string, string>("sls_project_name", *request->slsProjectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateClusterAuditLogConfig"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterid)) + string("/audit_log"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateClusterAuditLogConfigResponse(callApi(params, req, runtime));
}

UpdateClusterAuditLogConfigResponse Alibabacloud_CS20151215::Client::updateClusterAuditLogConfig(shared_ptr<string> clusterid, shared_ptr<UpdateClusterAuditLogConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateClusterAuditLogConfigWithOptions(clusterid, request, headers, runtime);
}

UpdateClusterInspectConfigResponse Alibabacloud_CS20151215::Client::updateClusterInspectConfigWithOptions(shared_ptr<string> clusterId,
                                                                                                          shared_ptr<UpdateClusterInspectConfigRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->disabledCheckItems)) {
    body->insert(pair<string, vector<string>>("disabledCheckItems", *request->disabledCheckItems));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enabled)) {
    body->insert(pair<string, bool>("enabled", *request->enabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleTime)) {
    body->insert(pair<string, string>("scheduleTime", *request->scheduleTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateClusterInspectConfig"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId)) + string("/inspectConfig"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateClusterInspectConfigResponse(callApi(params, req, runtime));
}

UpdateClusterInspectConfigResponse Alibabacloud_CS20151215::Client::updateClusterInspectConfig(shared_ptr<string> clusterId, shared_ptr<UpdateClusterInspectConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateClusterInspectConfigWithOptions(clusterId, request, headers, runtime);
}

UpdateContactGroupForAlertResponse Alibabacloud_CS20151215::Client::updateContactGroupForAlertWithOptions(shared_ptr<string> ClusterId,
                                                                                                          shared_ptr<UpdateContactGroupForAlertRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertRuleGroupName)) {
    body->insert(pair<string, string>("alert_rule_group_name", *request->alertRuleGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->contactGroupIds)) {
    body->insert(pair<string, vector<long>>("contact_group_ids", *request->contactGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crName)) {
    body->insert(pair<string, string>("cr_name", *request->crName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    body->insert(pair<string, string>("namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateContactGroupForAlert"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/alert/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/alert_rule/contact_groups"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateContactGroupForAlertResponse(callApi(params, req, runtime));
}

UpdateContactGroupForAlertResponse Alibabacloud_CS20151215::Client::updateContactGroupForAlert(shared_ptr<string> ClusterId, shared_ptr<UpdateContactGroupForAlertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateContactGroupForAlertWithOptions(ClusterId, request, headers, runtime);
}

UpdateControlPlaneLogResponse Alibabacloud_CS20151215::Client::updateControlPlaneLogWithOptions(shared_ptr<string> ClusterId,
                                                                                                shared_ptr<UpdateControlPlaneLogRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliuid)) {
    body->insert(pair<string, string>("aliuid", *request->aliuid));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->components)) {
    body->insert(pair<string, vector<string>>("components", *request->components));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logProject)) {
    body->insert(pair<string, string>("log_project", *request->logProject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logTtl)) {
    body->insert(pair<string, string>("log_ttl", *request->logTtl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateControlPlaneLog"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/controlplanelog"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateControlPlaneLogResponse(callApi(params, req, runtime));
}

UpdateControlPlaneLogResponse Alibabacloud_CS20151215::Client::updateControlPlaneLog(shared_ptr<string> ClusterId, shared_ptr<UpdateControlPlaneLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateControlPlaneLogWithOptions(ClusterId, request, headers, runtime);
}

UpdateK8sClusterUserConfigExpireResponse Alibabacloud_CS20151215::Client::updateK8sClusterUserConfigExpireWithOptions(shared_ptr<string> ClusterId,
                                                                                                                      shared_ptr<UpdateK8sClusterUserConfigExpireRequest> request,
                                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->expireHour)) {
    body->insert(pair<string, long>("expire_hour", *request->expireHour));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->user)) {
    body->insert(pair<string, string>("user", *request->user));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateK8sClusterUserConfigExpire"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/k8s/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/user_config/expire"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UpdateK8sClusterUserConfigExpireResponse(callApi(params, req, runtime));
}

UpdateK8sClusterUserConfigExpireResponse Alibabacloud_CS20151215::Client::updateK8sClusterUserConfigExpire(shared_ptr<string> ClusterId, shared_ptr<UpdateK8sClusterUserConfigExpireRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateK8sClusterUserConfigExpireWithOptions(ClusterId, request, headers, runtime);
}

UpdateResourcesDeleteProtectionResponse Alibabacloud_CS20151215::Client::updateResourcesDeleteProtectionWithOptions(shared_ptr<string> ClusterId,
                                                                                                                    shared_ptr<UpdateResourcesDeleteProtectionRequest> request,
                                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enable)) {
    body->insert(pair<string, bool>("enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    body->insert(pair<string, string>("namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    body->insert(pair<string, string>("resource_type", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resources)) {
    body->insert(pair<string, vector<string>>("resources", *request->resources));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateResourcesDeleteProtection"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/resources/protection"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateResourcesDeleteProtectionResponse(callApi(params, req, runtime));
}

UpdateResourcesDeleteProtectionResponse Alibabacloud_CS20151215::Client::updateResourcesDeleteProtection(shared_ptr<string> ClusterId, shared_ptr<UpdateResourcesDeleteProtectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateResourcesDeleteProtectionWithOptions(ClusterId, request, headers, runtime);
}

UpdateTemplateResponse Alibabacloud_CS20151215::Client::updateTemplateWithOptions(shared_ptr<string> TemplateId,
                                                                                  shared_ptr<UpdateTemplateRequest> request,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    body->insert(pair<string, string>("tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->template_)) {
    body->insert(pair<string, string>("template_", *request->template_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    body->insert(pair<string, string>("template_type", *request->templateType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTemplate"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/templates/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TemplateId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UpdateTemplateResponse(callApi(params, req, runtime));
}

UpdateTemplateResponse Alibabacloud_CS20151215::Client::updateTemplate(shared_ptr<string> TemplateId, shared_ptr<UpdateTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateTemplateWithOptions(TemplateId, request, headers, runtime);
}

UpdateUserPermissionsResponse Alibabacloud_CS20151215::Client::updateUserPermissionsWithOptions(shared_ptr<string> uid,
                                                                                                shared_ptr<UpdateUserPermissionsRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mode)) {
    query->insert(pair<string, string>("mode", *request->mode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toArray<vector<UpdateUserPermissionsRequestBody>>(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateUserPermissions"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/permissions/users/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/update"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UpdateUserPermissionsResponse(callApi(params, req, runtime));
}

UpdateUserPermissionsResponse Alibabacloud_CS20151215::Client::updateUserPermissions(shared_ptr<string> uid, shared_ptr<UpdateUserPermissionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateUserPermissionsWithOptions(uid, request, headers, runtime);
}

UpgradeClusterResponse Alibabacloud_CS20151215::Client::upgradeClusterWithOptions(shared_ptr<string> ClusterId,
                                                                                  shared_ptr<UpgradeClusterRequest> request,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->componentName)) {
    body->insert(pair<string, string>("component_name", *request->componentName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->masterOnly)) {
    body->insert(pair<string, bool>("master_only", *request->masterOnly));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextVersion)) {
    body->insert(pair<string, string>("next_version", *request->nextVersion));
  }
  if (!Darabonba_Util::Client::isUnset<UpgradeClusterRequestRollingPolicy>(request->rollingPolicy)) {
    body->insert(pair<string, UpgradeClusterRequestRollingPolicy>("rolling_policy", *request->rollingPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->version)) {
    body->insert(pair<string, string>("version", *request->version));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeCluster"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/upgrade"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpgradeClusterResponse(callApi(params, req, runtime));
}

UpgradeClusterResponse Alibabacloud_CS20151215::Client::upgradeCluster(shared_ptr<string> ClusterId, shared_ptr<UpgradeClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return upgradeClusterWithOptions(ClusterId, request, headers, runtime);
}

UpgradeClusterAddonsResponse Alibabacloud_CS20151215::Client::upgradeClusterAddonsWithOptions(shared_ptr<string> ClusterId,
                                                                                              shared_ptr<UpgradeClusterAddonsRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Darabonba_Util::Client::toArray<vector<UpgradeClusterAddonsRequestBody>>(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeClusterAddons"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/components/upgrade"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpgradeClusterAddonsResponse(callApi(params, req, runtime));
}

UpgradeClusterAddonsResponse Alibabacloud_CS20151215::Client::upgradeClusterAddons(shared_ptr<string> ClusterId, shared_ptr<UpgradeClusterAddonsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return upgradeClusterAddonsWithOptions(ClusterId, request, headers, runtime);
}

UpgradeClusterNodepoolResponse Alibabacloud_CS20151215::Client::upgradeClusterNodepoolWithOptions(shared_ptr<string> ClusterId,
                                                                                                  shared_ptr<string> NodepoolId,
                                                                                                  shared_ptr<UpgradeClusterNodepoolRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    body->insert(pair<string, string>("image_id", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->kubernetesVersion)) {
    body->insert(pair<string, string>("kubernetes_version", *request->kubernetesVersion));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->nodeNames)) {
    body->insert(pair<string, vector<string>>("node_names", *request->nodeNames));
  }
  if (!Darabonba_Util::Client::isUnset<UpgradeClusterNodepoolRequestRollingPolicy>(request->rollingPolicy)) {
    body->insert(pair<string, UpgradeClusterNodepoolRequestRollingPolicy>("rolling_policy", *request->rollingPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runtimeType)) {
    body->insert(pair<string, string>("runtime_type", *request->runtimeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runtimeVersion)) {
    body->insert(pair<string, string>("runtime_version", *request->runtimeVersion));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useReplace)) {
    body->insert(pair<string, bool>("use_replace", *request->useReplace));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeClusterNodepool"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/nodepools/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(NodepoolId)) + string("/upgrade"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpgradeClusterNodepoolResponse(callApi(params, req, runtime));
}

UpgradeClusterNodepoolResponse Alibabacloud_CS20151215::Client::upgradeClusterNodepool(shared_ptr<string> ClusterId, shared_ptr<string> NodepoolId, shared_ptr<UpgradeClusterNodepoolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return upgradeClusterNodepoolWithOptions(ClusterId, NodepoolId, request, headers, runtime);
}

