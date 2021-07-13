// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cs20151215.hpp>
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

using namespace Alibabacloud_CS20151215;

Alibabacloud_CS20151215::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-2-pop", "cs.aliyuncs.com"},
    {"cn-beijing-finance-1", "cs.aliyuncs.com"},
    {"cn-beijing-finance-pop", "cs.aliyuncs.com"},
    {"cn-beijing-gov-1", "cs.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "cs.aliyuncs.com"},
    {"cn-edge-1", "cs.aliyuncs.com"},
    {"cn-fujian", "cs.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "cs.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "cs.aliyuncs.com"},
    {"cn-hangzhou-finance", "cs-vpc.cn-hangzhou-finance.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "cs.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "cs.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "cs.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "cs.aliyuncs.com"},
    {"cn-hangzhou-test-306", "cs.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "cs.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "cs.aliyuncs.com"},
    {"cn-qingdao-nebula", "cs.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "cs.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "cs.aliyuncs.com"},
    {"cn-shanghai-finance-1", "cs-vpc.cn-shanghai-finance-1.aliyuncs.com"},
    {"cn-shanghai-inner", "cs.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "cs.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "cs-vpc.cn-shenzhen-finance-1.aliyuncs.com"},
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

ListTagResourcesResponse Alibabacloud_CS20151215::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTagResourcesWithOptions(request, headers, runtime);
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
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIdsShrink)) {
    (*query)["resource_ids"] = *request->resourceIdsShrink;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    (*query)["resource_type"] = *request->resourceType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["region_id"] = *request->regionId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    (*query)["tags"] = *request->tagsShrink;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    (*query)["next_token"] = *request->nextToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListTagResourcesResponse(doROARequest(make_shared<string>("ListTagResources"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/tags")), make_shared<string>("json"), req, runtime));
}

UntagResourcesResponse Alibabacloud_CS20151215::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return untagResourcesWithOptions(request, headers, runtime);
}

UntagResourcesResponse Alibabacloud_CS20151215::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["region_id"] = *request->regionId;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceIds)) {
    (*query)["resource_ids"] = *request->resourceIds;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    (*query)["resource_type"] = *request->resourceType;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagKeys)) {
    (*query)["tag_keys"] = *request->tagKeys;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UntagResourcesResponse(doROARequest(make_shared<string>("UntagResources"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/tags")), make_shared<string>("none"), req, runtime));
}

ModifyClusterResponse Alibabacloud_CS20151215::Client::modifyCluster(shared_ptr<string> ClusterId, shared_ptr<ModifyClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyClusterWithOptions(ClusterId, request, headers, runtime);
}

ModifyClusterResponse Alibabacloud_CS20151215::Client::modifyClusterWithOptions(shared_ptr<string> ClusterId,
                                                                                shared_ptr<ModifyClusterRequest> request,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->apiServerEip)) {
    (*body)["api_server_eip"] = *request->apiServerEip;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiServerEipId)) {
    (*body)["api_server_eip_id"] = *request->apiServerEipId;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->deletionProtection)) {
    (*body)["deletion_protection"] = *request->deletionProtection;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->instanceDeletionProtection)) {
    (*body)["instance_deletion_protection"] = *request->instanceDeletionProtection;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ingressDomainRebinding)) {
    (*body)["ingress_domain_rebinding"] = *request->ingressDomainRebinding;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ingressLoadbalancerId)) {
    (*body)["ingress_loadbalancer_id"] = *request->ingressLoadbalancerId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    (*body)["resource_group_id"] = *request->resourceGroupId;
  }
  if (!Darabonba_Util::Client::isUnset<MaintenanceWindow>(request->maintenanceWindow)) {
    (*body)["maintenance_window"] = *request->maintenanceWindow;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return ModifyClusterResponse(doROARequest(make_shared<string>("ModifyCluster"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/api/v2/clusters/") + string(*ClusterId)), make_shared<string>("json"), req, runtime));
}

DescribeClusterAttachScriptsResponse Alibabacloud_CS20151215::Client::describeClusterAttachScripts(shared_ptr<string> ClusterId, shared_ptr<DescribeClusterAttachScriptsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterAttachScriptsWithOptions(ClusterId, request, headers, runtime);
}

DescribeClusterAttachScriptsResponse Alibabacloud_CS20151215::Client::describeClusterAttachScriptsWithOptions(shared_ptr<string> ClusterId,
                                                                                                              shared_ptr<DescribeClusterAttachScriptsRequest> request,
                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nodepoolId)) {
    (*body)["nodepool_id"] = *request->nodepoolId;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->formatDisk)) {
    (*body)["format_disk"] = *request->formatDisk;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->keepInstanceName)) {
    (*body)["keep_instance_name"] = *request->keepInstanceName;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->rdsInstances)) {
    (*body)["rds_instances"] = *request->rdsInstances;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->arch)) {
    (*body)["arch"] = *request->arch;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->options)) {
    (*body)["options"] = *request->options;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return DescribeClusterAttachScriptsResponse(doROARequest(make_shared<string>("DescribeClusterAttachScripts"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/clusters/") + string(*ClusterId) + string("/attachscript")), make_shared<string>("string"), req, runtime));
}

RemoveClusterNodesResponse Alibabacloud_CS20151215::Client::removeClusterNodes(shared_ptr<string> ClusterId, shared_ptr<RemoveClusterNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeClusterNodesWithOptions(ClusterId, request, headers, runtime);
}

RemoveClusterNodesResponse Alibabacloud_CS20151215::Client::removeClusterNodesWithOptions(shared_ptr<string> ClusterId,
                                                                                          shared_ptr<RemoveClusterNodesRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->drainNode)) {
    (*body)["drain_node"] = *request->drainNode;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->nodes)) {
    (*body)["nodes"] = *request->nodes;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->releaseNode)) {
    (*body)["release_node"] = *request->releaseNode;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return RemoveClusterNodesResponse(doROARequest(make_shared<string>("RemoveClusterNodes"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v2/clusters/") + string(*ClusterId) + string("/nodes/remove")), make_shared<string>("none"), req, runtime));
}

DescribeKubernetesVersionMetadataResponse Alibabacloud_CS20151215::Client::describeKubernetesVersionMetadata(shared_ptr<DescribeKubernetesVersionMetadataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeKubernetesVersionMetadataWithOptions(request, headers, runtime);
}

DescribeKubernetesVersionMetadataResponse Alibabacloud_CS20151215::Client::describeKubernetesVersionMetadataWithOptions(shared_ptr<DescribeKubernetesVersionMetadataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    (*query)["Region"] = *request->region;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    (*query)["ClusterType"] = *request->clusterType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->kubernetesVersion)) {
    (*query)["KubernetesVersion"] = *request->kubernetesVersion;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->profile)) {
    (*query)["Profile"] = *request->profile;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribeKubernetesVersionMetadataResponse(doROARequest(make_shared<string>("DescribeKubernetesVersionMetadata"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/metadata/versions")), make_shared<string>("array"), req, runtime));
}

DescribeClusterLogsResponse Alibabacloud_CS20151215::Client::describeClusterLogs(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterLogsWithOptions(ClusterId, headers, runtime);
}

DescribeClusterLogsResponse Alibabacloud_CS20151215::Client::describeClusterLogsWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DescribeClusterLogsResponse(doROARequest(make_shared<string>("DescribeClusterLogs"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/clusters/") + string(*ClusterId) + string("/logs")), make_shared<string>("array"), req, runtime));
}

CreateKubernetesTriggerResponse Alibabacloud_CS20151215::Client::createKubernetesTrigger(shared_ptr<CreateKubernetesTriggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createKubernetesTriggerWithOptions(request, headers, runtime);
}

CreateKubernetesTriggerResponse Alibabacloud_CS20151215::Client::createKubernetesTriggerWithOptions(shared_ptr<CreateKubernetesTriggerRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    (*body)["cluster_id"] = *request->clusterId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    (*body)["project_id"] = *request->projectId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->action)) {
    (*body)["action"] = *request->action;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    (*body)["type"] = *request->type;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateKubernetesTriggerResponse(doROARequest(make_shared<string>("CreateKubernetesTrigger"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/triggers")), make_shared<string>("json"), req, runtime));
}

GrantPermissionsResponse Alibabacloud_CS20151215::Client::grantPermissions(shared_ptr<string> uid, shared_ptr<GrantPermissionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return grantPermissionsWithOptions(uid, request, headers, runtime);
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
  return GrantPermissionsResponse(doROARequest(make_shared<string>("GrantPermissions"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/permissions/users/") + string(*uid)), make_shared<string>("none"), req, runtime));
}

DescribeClusterDetailResponse Alibabacloud_CS20151215::Client::describeClusterDetail(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterDetailWithOptions(ClusterId, headers, runtime);
}

DescribeClusterDetailResponse Alibabacloud_CS20151215::Client::describeClusterDetailWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DescribeClusterDetailResponse(doROARequest(make_shared<string>("DescribeClusterDetail"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/clusters/") + string(*ClusterId)), make_shared<string>("json"), req, runtime));
}

PauseComponentUpgradeResponse Alibabacloud_CS20151215::Client::pauseComponentUpgrade(shared_ptr<string> clusterid, shared_ptr<string> componentid) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return pauseComponentUpgradeWithOptions(clusterid, componentid, headers, runtime);
}

PauseComponentUpgradeResponse Alibabacloud_CS20151215::Client::pauseComponentUpgradeWithOptions(shared_ptr<string> clusterid,
                                                                                                shared_ptr<string> componentid,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return PauseComponentUpgradeResponse(doROARequest(make_shared<string>("PauseComponentUpgrade"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/clusters/") + string(*clusterid) + string("/components/") + string(*componentid) + string("/pause")), make_shared<string>("none"), req, runtime));
}

DescribeClustersResponse Alibabacloud_CS20151215::Client::describeClusters(shared_ptr<DescribeClustersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClustersWithOptions(request, headers, runtime);
}

DescribeClustersResponse Alibabacloud_CS20151215::Client::describeClustersWithOptions(shared_ptr<DescribeClustersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*query)["name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    (*query)["clusterType"] = *request->clusterType;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribeClustersResponse(doROARequest(make_shared<string>("DescribeClusters"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/clusters")), make_shared<string>("array"), req, runtime));
}

DescribeUserPermissionResponse Alibabacloud_CS20151215::Client::describeUserPermission(shared_ptr<string> uid) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeUserPermissionWithOptions(uid, headers, runtime);
}

DescribeUserPermissionResponse Alibabacloud_CS20151215::Client::describeUserPermissionWithOptions(shared_ptr<string> uid, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DescribeUserPermissionResponse(doROARequest(make_shared<string>("DescribeUserPermission"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/permissions/users/") + string(*uid)), make_shared<string>("array"), req, runtime));
}

ModifyClusterNodePoolResponse Alibabacloud_CS20151215::Client::modifyClusterNodePool(shared_ptr<string> ClusterId, shared_ptr<string> NodepoolId, shared_ptr<ModifyClusterNodePoolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyClusterNodePoolWithOptions(ClusterId, NodepoolId, request, headers, runtime);
}

ModifyClusterNodePoolResponse Alibabacloud_CS20151215::Client::modifyClusterNodePoolWithOptions(shared_ptr<string> ClusterId,
                                                                                                shared_ptr<string> NodepoolId,
                                                                                                shared_ptr<ModifyClusterNodePoolRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<ModifyClusterNodePoolRequestAutoScaling>(request->autoScaling)) {
    (*body)["auto_scaling"] = *request->autoScaling;
  }
  if (!Darabonba_Util::Client::isUnset<ModifyClusterNodePoolRequestKubernetesConfig>(request->kubernetesConfig)) {
    (*body)["kubernetes_config"] = *request->kubernetesConfig;
  }
  if (!Darabonba_Util::Client::isUnset<ModifyClusterNodePoolRequestNodepoolInfo>(request->nodepoolInfo)) {
    (*body)["nodepool_info"] = *request->nodepoolInfo;
  }
  if (!Darabonba_Util::Client::isUnset<ModifyClusterNodePoolRequestScalingGroup>(request->scalingGroup)) {
    (*body)["scaling_group"] = *request->scalingGroup;
  }
  if (!Darabonba_Util::Client::isUnset<ModifyClusterNodePoolRequestTeeConfig>(request->teeConfig)) {
    (*body)["tee_config"] = *request->teeConfig;
  }
  if (!Darabonba_Util::Client::isUnset<ModifyClusterNodePoolRequestManagement>(request->management)) {
    (*body)["management"] = *request->management;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->updateNodes)) {
    (*body)["update_nodes"] = *request->updateNodes;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return ModifyClusterNodePoolResponse(doROARequest(make_shared<string>("ModifyClusterNodePool"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/clusters/") + string(*ClusterId) + string("/nodepools/") + string(*NodepoolId)), make_shared<string>("json"), req, runtime));
}

ResumeUpgradeClusterResponse Alibabacloud_CS20151215::Client::resumeUpgradeCluster(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return resumeUpgradeClusterWithOptions(ClusterId, headers, runtime);
}

ResumeUpgradeClusterResponse Alibabacloud_CS20151215::Client::resumeUpgradeClusterWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return ResumeUpgradeClusterResponse(doROARequest(make_shared<string>("ResumeUpgradeCluster"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v2/clusters/") + string(*ClusterId) + string("/upgrade/resume")), make_shared<string>("none"), req, runtime));
}

OpenAckServiceResponse Alibabacloud_CS20151215::Client::openAckService(shared_ptr<OpenAckServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return openAckServiceWithOptions(request, headers, runtime);
}

OpenAckServiceResponse Alibabacloud_CS20151215::Client::openAckServiceWithOptions(shared_ptr<OpenAckServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    (*query)["type"] = *request->type;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return OpenAckServiceResponse(doROARequest(make_shared<string>("OpenAckService"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/service/open")), make_shared<string>("json"), req, runtime));
}

ScaleClusterNodePoolResponse Alibabacloud_CS20151215::Client::scaleClusterNodePool(shared_ptr<string> ClusterId, shared_ptr<string> NodepoolId, shared_ptr<ScaleClusterNodePoolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return scaleClusterNodePoolWithOptions(ClusterId, NodepoolId, request, headers, runtime);
}

ScaleClusterNodePoolResponse Alibabacloud_CS20151215::Client::scaleClusterNodePoolWithOptions(shared_ptr<string> ClusterId,
                                                                                              shared_ptr<string> NodepoolId,
                                                                                              shared_ptr<ScaleClusterNodePoolRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->count)) {
    (*body)["count"] = *request->count;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return ScaleClusterNodePoolResponse(doROARequest(make_shared<string>("ScaleClusterNodePool"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/clusters/") + string(*ClusterId) + string("/nodepools/") + string(*NodepoolId)), make_shared<string>("json"), req, runtime));
}

DescribeClusterNodePoolDetailResponse Alibabacloud_CS20151215::Client::describeClusterNodePoolDetail(shared_ptr<string> ClusterId, shared_ptr<string> NodepoolId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterNodePoolDetailWithOptions(ClusterId, NodepoolId, headers, runtime);
}

DescribeClusterNodePoolDetailResponse Alibabacloud_CS20151215::Client::describeClusterNodePoolDetailWithOptions(shared_ptr<string> ClusterId,
                                                                                                                shared_ptr<string> NodepoolId,
                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DescribeClusterNodePoolDetailResponse(doROARequest(make_shared<string>("DescribeClusterNodePoolDetail"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/clusters/") + string(*ClusterId) + string("/nodepools/") + string(*NodepoolId)), make_shared<string>("json"), req, runtime));
}

CreateClusterNodePoolResponse Alibabacloud_CS20151215::Client::createClusterNodePool(shared_ptr<string> ClusterId, shared_ptr<CreateClusterNodePoolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createClusterNodePoolWithOptions(ClusterId, request, headers, runtime);
}

CreateClusterNodePoolResponse Alibabacloud_CS20151215::Client::createClusterNodePoolWithOptions(shared_ptr<string> ClusterId,
                                                                                                shared_ptr<CreateClusterNodePoolRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<CreateClusterNodePoolRequestAutoScaling>(request->autoScaling)) {
    (*body)["auto_scaling"] = *request->autoScaling;
  }
  if (!Darabonba_Util::Client::isUnset<CreateClusterNodePoolRequestKubernetesConfig>(request->kubernetesConfig)) {
    (*body)["kubernetes_config"] = *request->kubernetesConfig;
  }
  if (!Darabonba_Util::Client::isUnset<CreateClusterNodePoolRequestNodepoolInfo>(request->nodepoolInfo)) {
    (*body)["nodepool_info"] = *request->nodepoolInfo;
  }
  if (!Darabonba_Util::Client::isUnset<CreateClusterNodePoolRequestScalingGroup>(request->scalingGroup)) {
    (*body)["scaling_group"] = *request->scalingGroup;
  }
  if (!Darabonba_Util::Client::isUnset<CreateClusterNodePoolRequestTeeConfig>(request->teeConfig)) {
    (*body)["tee_config"] = *request->teeConfig;
  }
  if (!Darabonba_Util::Client::isUnset<CreateClusterNodePoolRequestManagement>(request->management)) {
    (*body)["management"] = *request->management;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->count)) {
    (*body)["count"] = *request->count;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateClusterNodePoolResponse(doROARequest(make_shared<string>("CreateClusterNodePool"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/clusters/") + string(*ClusterId) + string("/nodepools")), make_shared<string>("json"), req, runtime));
}

DescribeClusterUserKubeconfigResponse Alibabacloud_CS20151215::Client::describeClusterUserKubeconfig(shared_ptr<string> ClusterId, shared_ptr<DescribeClusterUserKubeconfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterUserKubeconfigWithOptions(ClusterId, request, headers, runtime);
}

DescribeClusterUserKubeconfigResponse Alibabacloud_CS20151215::Client::describeClusterUserKubeconfigWithOptions(shared_ptr<string> ClusterId,
                                                                                                                shared_ptr<DescribeClusterUserKubeconfigRequest> request,
                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->privateIpAddress)) {
    (*query)["PrivateIpAddress"] = *request->privateIpAddress;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->temporaryDurationMinutes)) {
    (*query)["TemporaryDurationMinutes"] = *request->temporaryDurationMinutes;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribeClusterUserKubeconfigResponse(doROARequest(make_shared<string>("DescribeClusterUserKubeconfig"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/k8s/") + string(*ClusterId) + string("/user_config")), make_shared<string>("json"), req, runtime));
}

ScaleClusterResponse Alibabacloud_CS20151215::Client::scaleCluster(shared_ptr<string> ClusterId, shared_ptr<ScaleClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return scaleClusterWithOptions(ClusterId, request, headers, runtime);
}

ScaleClusterResponse Alibabacloud_CS20151215::Client::scaleClusterWithOptions(shared_ptr<string> ClusterId,
                                                                              shared_ptr<ScaleClusterRequest> request,
                                                                              shared_ptr<map<string, string>> headers,
                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->cloudMonitorFlags)) {
    (*body)["cloud_monitor_flags"] = *request->cloudMonitorFlags;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->count)) {
    (*body)["count"] = *request->count;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cpuPolicy)) {
    (*body)["cpu_policy"] = *request->cpuPolicy;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->disableRollback)) {
    (*body)["disable_rollback"] = *request->disableRollback;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPair)) {
    (*body)["key_pair"] = *request->keyPair;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginPassword)) {
    (*body)["login_password"] = *request->loginPassword;
  }
  if (!Darabonba_Util::Client::isUnset<vector<ScaleClusterRequestTags>>(request->tags)) {
    (*body)["tags"] = *request->tags;
  }
  if (!Darabonba_Util::Client::isUnset<vector<ScaleClusterRequestTaints>>(request->taints)) {
    (*body)["taints"] = *request->taints;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->vswitchIds)) {
    (*body)["vswitch_ids"] = *request->vswitchIds;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->workerAutoRenew)) {
    (*body)["worker_auto_renew"] = *request->workerAutoRenew;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workerAutoRenewPeriod)) {
    (*body)["worker_auto_renew_period"] = *request->workerAutoRenewPeriod;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->workerDataDisk)) {
    (*body)["worker_data_disk"] = *request->workerDataDisk;
  }
  if (!Darabonba_Util::Client::isUnset<vector<ScaleClusterRequestWorkerDataDisks>>(request->workerDataDisks)) {
    (*body)["worker_data_disks"] = *request->workerDataDisks;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workerInstanceChargeType)) {
    (*body)["worker_instance_charge_type"] = *request->workerInstanceChargeType;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->workerInstanceTypes)) {
    (*body)["worker_instance_types"] = *request->workerInstanceTypes;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workerPeriod)) {
    (*body)["worker_period"] = *request->workerPeriod;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workerPeriodUnit)) {
    (*body)["worker_period_unit"] = *request->workerPeriodUnit;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workerSystemDiskCategory)) {
    (*body)["worker_system_disk_category"] = *request->workerSystemDiskCategory;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workerSystemDiskSize)) {
    (*body)["worker_system_disk_size"] = *request->workerSystemDiskSize;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return ScaleClusterResponse(doROARequest(make_shared<string>("ScaleCluster"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/clusters/") + string(*ClusterId)), make_shared<string>("json"), req, runtime));
}

DescribeClusterAddonUpgradeStatusResponse Alibabacloud_CS20151215::Client::describeClusterAddonUpgradeStatus(shared_ptr<string> ClusterId, shared_ptr<string> ComponentId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterAddonUpgradeStatusWithOptions(ClusterId, ComponentId, headers, runtime);
}

DescribeClusterAddonUpgradeStatusResponse Alibabacloud_CS20151215::Client::describeClusterAddonUpgradeStatusWithOptions(shared_ptr<string> ClusterId,
                                                                                                                        shared_ptr<string> ComponentId,
                                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DescribeClusterAddonUpgradeStatusResponse(doROARequest(make_shared<string>("DescribeClusterAddonUpgradeStatus"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/clusters/") + string(*ClusterId) + string("/components/") + string(*ComponentId) + string("/upgradestatus")), make_shared<string>("json"), req, runtime));
}

DescribeAddonsResponse Alibabacloud_CS20151215::Client::describeAddons(shared_ptr<DescribeAddonsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeAddonsWithOptions(request, headers, runtime);
}

DescribeAddonsResponse Alibabacloud_CS20151215::Client::describeAddonsWithOptions(shared_ptr<DescribeAddonsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    (*query)["region"] = *request->region;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    (*query)["cluster_type"] = *request->clusterType;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribeAddonsResponse(doROARequest(make_shared<string>("DescribeAddons"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/clusters/components/metadata")), make_shared<string>("json"), req, runtime));
}

CreateAutoscalingConfigResponse Alibabacloud_CS20151215::Client::createAutoscalingConfig(shared_ptr<string> ClusterId, shared_ptr<CreateAutoscalingConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createAutoscalingConfigWithOptions(ClusterId, request, headers, runtime);
}

CreateAutoscalingConfigResponse Alibabacloud_CS20151215::Client::createAutoscalingConfigWithOptions(shared_ptr<string> ClusterId,
                                                                                                    shared_ptr<CreateAutoscalingConfigRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->coolDownDuration)) {
    (*body)["cool_down_duration"] = *request->coolDownDuration;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->unneededDuration)) {
    (*body)["unneeded_duration"] = *request->unneededDuration;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->utilizationThreshold)) {
    (*body)["utilization_threshold"] = *request->utilizationThreshold;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gpuUtilizationThreshold)) {
    (*body)["gpu_utilization_threshold"] = *request->gpuUtilizationThreshold;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scanInterval)) {
    (*body)["scan_interval"] = *request->scanInterval;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateAutoscalingConfigResponse(doROARequest(make_shared<string>("CreateAutoscalingConfig"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/cluster/") + string(*ClusterId) + string("/autoscale/config/")), make_shared<string>("none"), req, runtime));
}

CreateClusterResponse Alibabacloud_CS20151215::Client::createCluster(shared_ptr<CreateClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createClusterWithOptions(request, headers, runtime);
}

CreateClusterResponse Alibabacloud_CS20151215::Client::createClusterWithOptions(shared_ptr<CreateClusterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*body)["name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*body)["region_id"] = *request->regionId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    (*body)["cluster_type"] = *request->clusterType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterSpec)) {
    (*body)["cluster_spec"] = *request->clusterSpec;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->kubernetesVersion)) {
    (*body)["kubernetes_version"] = *request->kubernetesVersion;
  }
  if (!Darabonba_Util::Client::isUnset<Runtime>(request->runtime)) {
    (*body)["runtime"] = *request->runtime;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcid)) {
    (*body)["vpcid"] = *request->vpcid;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->podVswitchIds)) {
    (*body)["pod_vswitch_ids"] = *request->podVswitchIds;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->containerCidr)) {
    (*body)["container_cidr"] = *request->containerCidr;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCidr)) {
    (*body)["service_cidr"] = *request->serviceCidr;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    (*body)["security_group_id"] = *request->securityGroupId;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isEnterpriseSecurityGroup)) {
    (*body)["is_enterprise_security_group"] = *request->isEnterpriseSecurityGroup;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->snatEntry)) {
    (*body)["snat_entry"] = *request->snatEntry;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->endpointPublicAccess)) {
    (*body)["endpoint_public_access"] = *request->endpointPublicAccess;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->sshFlags)) {
    (*body)["ssh_flags"] = *request->sshFlags;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timezone)) {
    (*body)["timezone"] = *request->timezone;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeCidrMask)) {
    (*body)["node_cidr_mask"] = *request->nodeCidrMask;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userCa)) {
    (*body)["user_ca"] = *request->userCa;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    (*body)["user_data"] = *request->userData;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterDomain)) {
    (*body)["cluster_domain"] = *request->clusterDomain;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeNameMode)) {
    (*body)["node_name_mode"] = *request->nodeNameMode;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customSan)) {
    (*body)["custom_san"] = *request->customSan;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptionProviderKey)) {
    (*body)["encryption_provider_key"] = *request->encryptionProviderKey;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceAccountIssuer)) {
    (*body)["service_account_issuer"] = *request->serviceAccountIssuer;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiAudiences)) {
    (*body)["api_audiences"] = *request->apiAudiences;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    (*body)["image_id"] = *request->imageId;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->rdsInstances)) {
    (*body)["rds_instances"] = *request->rdsInstances;
  }
  if (!Darabonba_Util::Client::isUnset<vector<Tag>>(request->tags)) {
    (*body)["tags"] = *request->tags;
  }
  if (!Darabonba_Util::Client::isUnset<vector<Addon>>(request->addons)) {
    (*body)["addons"] = *request->addons;
  }
  if (!Darabonba_Util::Client::isUnset<vector<Taint>>(request->taints)) {
    (*body)["taints"] = *request->taints;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->cloudMonitorFlags)) {
    (*body)["cloud_monitor_flags"] = *request->cloudMonitorFlags;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->platform)) {
    (*body)["platform"] = *request->platform;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->osType)) {
    (*body)["os_type"] = *request->osType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cpuPolicy)) {
    (*body)["cpu_policy"] = *request->cpuPolicy;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyMode)) {
    (*body)["proxy_mode"] = *request->proxyMode;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodePortRange)) {
    (*body)["node_port_range"] = *request->nodePortRange;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPair)) {
    (*body)["key_pair"] = *request->keyPair;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginPassword)) {
    (*body)["login_password"] = *request->loginPassword;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->masterCount)) {
    (*body)["master_count"] = *request->masterCount;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->masterVswitchIds)) {
    (*body)["master_vswitch_ids"] = *request->masterVswitchIds;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->masterInstanceTypes)) {
    (*body)["master_instance_types"] = *request->masterInstanceTypes;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterSystemDiskCategory)) {
    (*body)["master_system_disk_category"] = *request->masterSystemDiskCategory;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->masterSystemDiskSize)) {
    (*body)["master_system_disk_size"] = *request->masterSystemDiskSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterSystemDiskSnapshotPolicyId)) {
    (*body)["master_system_disk_snapshot_policy_id"] = *request->masterSystemDiskSnapshotPolicyId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterInstanceChargeType)) {
    (*body)["master_instance_charge_type"] = *request->masterInstanceChargeType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterPeriodUnit)) {
    (*body)["master_period_unit"] = *request->masterPeriodUnit;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->masterPeriod)) {
    (*body)["master_period"] = *request->masterPeriod;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->masterAutoRenew)) {
    (*body)["master_auto_renew"] = *request->masterAutoRenew;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->masterAutoRenewPeriod)) {
    (*body)["master_auto_renew_period"] = *request->masterAutoRenewPeriod;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->numOfNodes)) {
    (*body)["num_of_nodes"] = *request->numOfNodes;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->vswitchIds)) {
    (*body)["vswitch_ids"] = *request->vswitchIds;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->workerVswitchIds)) {
    (*body)["worker_vswitch_ids"] = *request->workerVswitchIds;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->workerInstanceTypes)) {
    (*body)["worker_instance_types"] = *request->workerInstanceTypes;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workerSystemDiskCategory)) {
    (*body)["worker_system_disk_category"] = *request->workerSystemDiskCategory;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workerSystemDiskSize)) {
    (*body)["worker_system_disk_size"] = *request->workerSystemDiskSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workerSystemDiskSnapshotPolicyId)) {
    (*body)["worker_system_disk_snapshot_policy_id"] = *request->workerSystemDiskSnapshotPolicyId;
  }
  if (!Darabonba_Util::Client::isUnset<vector<DataDisk>>(request->workerDataDisks)) {
    (*body)["worker_data_disks"] = *request->workerDataDisks;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workerInstanceChargeType)) {
    (*body)["worker_instance_charge_type"] = *request->workerInstanceChargeType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workerPeriodUnit)) {
    (*body)["worker_period_unit"] = *request->workerPeriodUnit;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workerPeriod)) {
    (*body)["worker_period"] = *request->workerPeriod;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->workerAutoRenew)) {
    (*body)["worker_auto_renew"] = *request->workerAutoRenew;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workerAutoRenewPeriod)) {
    (*body)["worker_auto_renew_period"] = *request->workerAutoRenewPeriod;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instances)) {
    (*body)["instances"] = *request->instances;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->formatDisk)) {
    (*body)["format_disk"] = *request->formatDisk;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->keepInstanceName)) {
    (*body)["keep_instance_name"] = *request->keepInstanceName;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->serviceDiscoveryTypes)) {
    (*body)["service_discovery_types"] = *request->serviceDiscoveryTypes;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->natGateway)) {
    (*body)["nat_gateway"] = *request->natGateway;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    (*body)["zone_id"] = *request->zoneId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->profile)) {
    (*body)["profile"] = *request->profile;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->deletionProtection)) {
    (*body)["deletion_protection"] = *request->deletionProtection;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->disableRollback)) {
    (*body)["disable_rollback"] = *request->disableRollback;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeoutMins)) {
    (*body)["timeout_mins"] = *request->timeoutMins;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateClusterResponse(doROARequest(make_shared<string>("CreateCluster"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/clusters")), make_shared<string>("json"), req, runtime));
}

UpgradeClusterResponse Alibabacloud_CS20151215::Client::upgradeCluster(shared_ptr<string> ClusterId, shared_ptr<UpgradeClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return upgradeClusterWithOptions(ClusterId, request, headers, runtime);
}

UpgradeClusterResponse Alibabacloud_CS20151215::Client::upgradeClusterWithOptions(shared_ptr<string> ClusterId,
                                                                                  shared_ptr<UpgradeClusterRequest> request,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->componentName)) {
    (*body)["component_name"] = *request->componentName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextVersion)) {
    (*body)["next_version"] = *request->nextVersion;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->version)) {
    (*body)["version"] = *request->version;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return UpgradeClusterResponse(doROARequest(make_shared<string>("UpgradeCluster"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v2/clusters/") + string(*ClusterId) + string("/upgrade")), make_shared<string>("none"), req, runtime));
}

CancelWorkflowResponse Alibabacloud_CS20151215::Client::cancelWorkflow(shared_ptr<string> workflowName, shared_ptr<CancelWorkflowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cancelWorkflowWithOptions(workflowName, request, headers, runtime);
}

CancelWorkflowResponse Alibabacloud_CS20151215::Client::cancelWorkflowWithOptions(shared_ptr<string> workflowName,
                                                                                  shared_ptr<CancelWorkflowRequest> request,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->action)) {
    (*body)["action"] = *request->action;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CancelWorkflowResponse(doROARequest(make_shared<string>("CancelWorkflow"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/gs/workflow/") + string(*workflowName)), make_shared<string>("none"), req, runtime));
}

AttachInstancesResponse Alibabacloud_CS20151215::Client::attachInstances(shared_ptr<string> ClusterId, shared_ptr<AttachInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return attachInstancesWithOptions(ClusterId, request, headers, runtime);
}

AttachInstancesResponse Alibabacloud_CS20151215::Client::attachInstancesWithOptions(shared_ptr<string> ClusterId,
                                                                                    shared_ptr<AttachInstancesRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instances)) {
    (*body)["instances"] = *request->instances;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPair)) {
    (*body)["key_pair"] = *request->keyPair;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    (*body)["password"] = *request->password;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->formatDisk)) {
    (*body)["format_disk"] = *request->formatDisk;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->keepInstanceName)) {
    (*body)["keep_instance_name"] = *request->keepInstanceName;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isEdgeWorker)) {
    (*body)["is_edge_worker"] = *request->isEdgeWorker;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodepoolId)) {
    (*body)["nodepool_id"] = *request->nodepoolId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    (*body)["image_id"] = *request->imageId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cpuPolicy)) {
    (*body)["cpu_policy"] = *request->cpuPolicy;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    (*body)["user_data"] = *request->userData;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->rdsInstances)) {
    (*body)["rds_instances"] = *request->rdsInstances;
  }
  if (!Darabonba_Util::Client::isUnset<Runtime>(request->runtime)) {
    (*body)["runtime"] = *request->runtime;
  }
  if (!Darabonba_Util::Client::isUnset<vector<Tag>>(request->tags)) {
    (*body)["tags"] = *request->tags;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return AttachInstancesResponse(doROARequest(make_shared<string>("AttachInstances"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/clusters/") + string(*ClusterId) + string("/attach")), make_shared<string>("json"), req, runtime));
}

DescribeTemplatesResponse Alibabacloud_CS20151215::Client::describeTemplates(shared_ptr<DescribeTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeTemplatesWithOptions(request, headers, runtime);
}

DescribeTemplatesResponse Alibabacloud_CS20151215::Client::describeTemplatesWithOptions(shared_ptr<DescribeTemplatesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    (*query)["template_type"] = *request->templateType;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    (*query)["page_num"] = *request->pageNum;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["page_size"] = *request->pageSize;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribeTemplatesResponse(doROARequest(make_shared<string>("DescribeTemplates"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/templates")), make_shared<string>("json"), req, runtime));
}

PauseClusterUpgradeResponse Alibabacloud_CS20151215::Client::pauseClusterUpgrade(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return pauseClusterUpgradeWithOptions(ClusterId, headers, runtime);
}

PauseClusterUpgradeResponse Alibabacloud_CS20151215::Client::pauseClusterUpgradeWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return PauseClusterUpgradeResponse(doROARequest(make_shared<string>("PauseClusterUpgrade"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v2/clusters/") + string(*ClusterId) + string("/upgrade/pause")), make_shared<string>("none"), req, runtime));
}

DeleteTemplateResponse Alibabacloud_CS20151215::Client::deleteTemplate(shared_ptr<string> TemplateId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteTemplateWithOptions(TemplateId, headers, runtime);
}

DeleteTemplateResponse Alibabacloud_CS20151215::Client::deleteTemplateWithOptions(shared_ptr<string> TemplateId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DeleteTemplateResponse(doROARequest(make_shared<string>("DeleteTemplate"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/templates/") + string(*TemplateId)), make_shared<string>("none"), req, runtime));
}

DescribeTemplateAttributeResponse Alibabacloud_CS20151215::Client::describeTemplateAttribute(shared_ptr<string> TemplateId, shared_ptr<DescribeTemplateAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeTemplateAttributeWithOptions(TemplateId, request, headers, runtime);
}

DescribeTemplateAttributeResponse Alibabacloud_CS20151215::Client::describeTemplateAttributeWithOptions(shared_ptr<string> TemplateId,
                                                                                                        shared_ptr<DescribeTemplateAttributeRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    (*query)["template_type"] = *request->templateType;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribeTemplateAttributeResponse(doROARequest(make_shared<string>("DescribeTemplateAttribute"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/templates/") + string(*TemplateId)), make_shared<string>("array"), req, runtime));
}

CreateTemplateResponse Alibabacloud_CS20151215::Client::createTemplate(shared_ptr<CreateTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createTemplateWithOptions(request, headers, runtime);
}

CreateTemplateResponse Alibabacloud_CS20151215::Client::createTemplateWithOptions(shared_ptr<CreateTemplateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*body)["name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->template_)) {
    (*body)["template_"] = *request->template_;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    (*body)["tags"] = *request->tags;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    (*body)["description"] = *request->description;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    (*body)["template_type"] = *request->templateType;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateTemplateResponse(doROARequest(make_shared<string>("CreateTemplate"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/templates")), make_shared<string>("json"), req, runtime));
}

DescribeClusterNodesResponse Alibabacloud_CS20151215::Client::describeClusterNodes(shared_ptr<string> ClusterId, shared_ptr<DescribeClusterNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterNodesWithOptions(ClusterId, request, headers, runtime);
}

DescribeClusterNodesResponse Alibabacloud_CS20151215::Client::describeClusterNodesWithOptions(shared_ptr<string> ClusterId,
                                                                                              shared_ptr<DescribeClusterNodesRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIds)) {
    (*query)["instanceIds"] = *request->instanceIds;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodepoolId)) {
    (*query)["nodepool_id"] = *request->nodepoolId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    (*query)["state"] = *request->state;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    (*query)["pageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    (*query)["pageNumber"] = *request->pageNumber;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribeClusterNodesResponse(doROARequest(make_shared<string>("DescribeClusterNodes"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/clusters/") + string(*ClusterId) + string("/nodes")), make_shared<string>("json"), req, runtime));
}

DeleteClusterResponse Alibabacloud_CS20151215::Client::deleteCluster(shared_ptr<string> ClusterId, shared_ptr<DeleteClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteClusterWithOptions(ClusterId, request, headers, runtime);
}

DeleteClusterResponse Alibabacloud_CS20151215::Client::deleteClusterWithOptions(shared_ptr<string> ClusterId,
                                                                                shared_ptr<DeleteClusterRequest> tmpReq,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteClusterShrinkRequest> request = make_shared<DeleteClusterShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->retainResources)) {
    request->retainResourcesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->retainResources, make_shared<string>("retain_resources"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->retainAllResources)) {
    (*query)["retain_all_resources"] = *request->retainAllResources;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->keepSlb)) {
    (*query)["keep_slb"] = *request->keepSlb;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->retainResourcesShrink)) {
    (*query)["retain_resources"] = *request->retainResourcesShrink;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteClusterResponse(doROARequest(make_shared<string>("DeleteCluster"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/clusters/") + string(*ClusterId)), make_shared<string>("none"), req, runtime));
}

CancelComponentUpgradeResponse Alibabacloud_CS20151215::Client::cancelComponentUpgrade(shared_ptr<string> clusterId, shared_ptr<string> componentId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cancelComponentUpgradeWithOptions(clusterId, componentId, headers, runtime);
}

CancelComponentUpgradeResponse Alibabacloud_CS20151215::Client::cancelComponentUpgradeWithOptions(shared_ptr<string> clusterId,
                                                                                                  shared_ptr<string> componentId,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return CancelComponentUpgradeResponse(doROARequest(make_shared<string>("CancelComponentUpgrade"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/clusters/") + string(*clusterId) + string("/components/") + string(*componentId) + string("/cancel")), make_shared<string>("none"), req, runtime));
}

MigrateClusterResponse Alibabacloud_CS20151215::Client::migrateCluster(shared_ptr<string> clusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return migrateClusterWithOptions(clusterId, headers, runtime);
}

MigrateClusterResponse Alibabacloud_CS20151215::Client::migrateClusterWithOptions(shared_ptr<string> clusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return MigrateClusterResponse(doROARequest(make_shared<string>("MigrateCluster"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/clusters/") + string(*clusterId) + string("/migrate")), make_shared<string>("none"), req, runtime));
}

DescribeClusterAddonsVersionResponse Alibabacloud_CS20151215::Client::describeClusterAddonsVersion(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterAddonsVersionWithOptions(ClusterId, headers, runtime);
}

DescribeClusterAddonsVersionResponse Alibabacloud_CS20151215::Client::describeClusterAddonsVersionWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DescribeClusterAddonsVersionResponse(doROARequest(make_shared<string>("DescribeClusterAddonsVersion"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/clusters/") + string(*ClusterId) + string("/components/version")), make_shared<string>("json"), req, runtime));
}

DescribeExternalAgentResponse Alibabacloud_CS20151215::Client::describeExternalAgent(shared_ptr<string> ClusterId, shared_ptr<DescribeExternalAgentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeExternalAgentWithOptions(ClusterId, request, headers, runtime);
}

DescribeExternalAgentResponse Alibabacloud_CS20151215::Client::describeExternalAgentWithOptions(shared_ptr<string> ClusterId,
                                                                                                shared_ptr<DescribeExternalAgentRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->privateIpAddress)) {
    (*query)["PrivateIpAddress"] = *request->privateIpAddress;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribeExternalAgentResponse(doROARequest(make_shared<string>("DescribeExternalAgent"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/k8s/") + string(*ClusterId) + string("/external/agent/deployment")), make_shared<string>("json"), req, runtime));
}

UnInstallClusterAddonsResponse Alibabacloud_CS20151215::Client::unInstallClusterAddons(shared_ptr<string> ClusterId, shared_ptr<UnInstallClusterAddonsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return unInstallClusterAddonsWithOptions(ClusterId, request, headers, runtime);
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
  return UnInstallClusterAddonsResponse(doROARequest(make_shared<string>("UnInstallClusterAddons"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/clusters/") + string(*ClusterId) + string("/components/uninstall")), make_shared<string>("none"), req, runtime));
}

ResumeComponentUpgradeResponse Alibabacloud_CS20151215::Client::resumeComponentUpgrade(shared_ptr<string> clusterid, shared_ptr<string> componentid) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return resumeComponentUpgradeWithOptions(clusterid, componentid, headers, runtime);
}

ResumeComponentUpgradeResponse Alibabacloud_CS20151215::Client::resumeComponentUpgradeWithOptions(shared_ptr<string> clusterid,
                                                                                                  shared_ptr<string> componentid,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return ResumeComponentUpgradeResponse(doROARequest(make_shared<string>("ResumeComponentUpgrade"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/clusters/") + string(*clusterid) + string("/components/") + string(*componentid) + string("/resume")), make_shared<string>("none"), req, runtime));
}

DescribeClustersV1Response Alibabacloud_CS20151215::Client::describeClustersV1(shared_ptr<DescribeClustersV1Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClustersV1WithOptions(request, headers, runtime);
}

DescribeClustersV1Response Alibabacloud_CS20151215::Client::describeClustersV1WithOptions(shared_ptr<DescribeClustersV1Request> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*query)["name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    (*query)["cluster_type"] = *request->clusterType;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["page_size"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*query)["page_number"] = *request->pageNumber;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribeClustersV1Response(doROARequest(make_shared<string>("DescribeClustersV1"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/clusters")), make_shared<string>("json"), req, runtime));
}

ModifyClusterConfigurationResponse Alibabacloud_CS20151215::Client::modifyClusterConfiguration(shared_ptr<string> ClusterId, shared_ptr<ModifyClusterConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyClusterConfigurationWithOptions(ClusterId, request, headers, runtime);
}

ModifyClusterConfigurationResponse Alibabacloud_CS20151215::Client::modifyClusterConfigurationWithOptions(shared_ptr<string> ClusterId,
                                                                                                          shared_ptr<ModifyClusterConfigurationRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ModifyClusterConfigurationRequestCustomizeConfig>>(request->customizeConfig)) {
    (*body)["customize_config"] = *request->customizeConfig;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return ModifyClusterConfigurationResponse(doROARequest(make_shared<string>("ModifyClusterConfiguration"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/clusters/") + string(*ClusterId) + string("/configuration")), make_shared<string>("none"), req, runtime));
}

DescribeTaskInfoResponse Alibabacloud_CS20151215::Client::describeTaskInfo(shared_ptr<string> taskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeTaskInfoWithOptions(taskId, headers, runtime);
}

DescribeTaskInfoResponse Alibabacloud_CS20151215::Client::describeTaskInfoWithOptions(shared_ptr<string> taskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DescribeTaskInfoResponse(doROARequest(make_shared<string>("DescribeTaskInfo"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/tasks/") + string(*taskId)), make_shared<string>("json"), req, runtime));
}

DescirbeWorkflowResponse Alibabacloud_CS20151215::Client::descirbeWorkflow(shared_ptr<string> workflowName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return descirbeWorkflowWithOptions(workflowName, headers, runtime);
}

DescirbeWorkflowResponse Alibabacloud_CS20151215::Client::descirbeWorkflowWithOptions(shared_ptr<string> workflowName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DescirbeWorkflowResponse(doROARequest(make_shared<string>("DescirbeWorkflow"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/gs/workflow/") + string(*workflowName)), make_shared<string>("json"), req, runtime));
}

CancelClusterUpgradeResponse Alibabacloud_CS20151215::Client::cancelClusterUpgrade(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cancelClusterUpgradeWithOptions(ClusterId, headers, runtime);
}

CancelClusterUpgradeResponse Alibabacloud_CS20151215::Client::cancelClusterUpgradeWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return CancelClusterUpgradeResponse(doROARequest(make_shared<string>("CancelClusterUpgrade"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v2/clusters/") + string(*ClusterId) + string("/upgrade/cancel")), make_shared<string>("none"), req, runtime));
}

RemoveWorkflowResponse Alibabacloud_CS20151215::Client::removeWorkflow(shared_ptr<string> workflowName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeWorkflowWithOptions(workflowName, headers, runtime);
}

RemoveWorkflowResponse Alibabacloud_CS20151215::Client::removeWorkflowWithOptions(shared_ptr<string> workflowName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return RemoveWorkflowResponse(doROARequest(make_shared<string>("RemoveWorkflow"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/gs/workflow/") + string(*workflowName)), make_shared<string>("none"), req, runtime));
}

UpdateTemplateResponse Alibabacloud_CS20151215::Client::updateTemplate(shared_ptr<string> TemplateId, shared_ptr<UpdateTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateTemplateWithOptions(TemplateId, request, headers, runtime);
}

UpdateTemplateResponse Alibabacloud_CS20151215::Client::updateTemplateWithOptions(shared_ptr<string> TemplateId,
                                                                                  shared_ptr<UpdateTemplateRequest> request,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    (*body)["description"] = *request->description;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*body)["name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    (*body)["tags"] = *request->tags;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->template_)) {
    (*body)["template_"] = *request->template_;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    (*body)["template_type"] = *request->templateType;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return UpdateTemplateResponse(doROARequest(make_shared<string>("UpdateTemplate"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/templates/") + string(*TemplateId)), make_shared<string>("none"), req, runtime));
}

UpgradeClusterAddonsResponse Alibabacloud_CS20151215::Client::upgradeClusterAddons(shared_ptr<string> ClusterId, shared_ptr<UpgradeClusterAddonsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return upgradeClusterAddonsWithOptions(ClusterId, request, headers, runtime);
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
  return UpgradeClusterAddonsResponse(doROARequest(make_shared<string>("UpgradeClusterAddons"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/clusters/") + string(*ClusterId) + string("/components/upgrade")), make_shared<string>("none"), req, runtime));
}

DescribeClusterNamespacesResponse Alibabacloud_CS20151215::Client::describeClusterNamespaces(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterNamespacesWithOptions(ClusterId, headers, runtime);
}

DescribeClusterNamespacesResponse Alibabacloud_CS20151215::Client::describeClusterNamespacesWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DescribeClusterNamespacesResponse(doROARequest(make_shared<string>("DescribeClusterNamespaces"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/k8s/") + string(*ClusterId) + string("/namespaces")), make_shared<string>("array"), req, runtime));
}

DeleteKubernetesTriggerResponse Alibabacloud_CS20151215::Client::deleteKubernetesTrigger(shared_ptr<string> Id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteKubernetesTriggerWithOptions(Id, headers, runtime);
}

DeleteKubernetesTriggerResponse Alibabacloud_CS20151215::Client::deleteKubernetesTriggerWithOptions(shared_ptr<string> Id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DeleteKubernetesTriggerResponse(doROARequest(make_shared<string>("DeleteKubernetesTrigger"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/triggers/revoke/") + string(*Id)), make_shared<string>("none"), req, runtime));
}

DescribeUserQuotaResponse Alibabacloud_CS20151215::Client::describeUserQuota() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeUserQuotaWithOptions(headers, runtime);
}

DescribeUserQuotaResponse Alibabacloud_CS20151215::Client::describeUserQuotaWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DescribeUserQuotaResponse(doROARequest(make_shared<string>("DescribeUserQuota"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/quota")), make_shared<string>("json"), req, runtime));
}

DeleteClusterNodepoolResponse Alibabacloud_CS20151215::Client::deleteClusterNodepool(shared_ptr<string> ClusterId, shared_ptr<string> NodepoolId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteClusterNodepoolWithOptions(ClusterId, NodepoolId, headers, runtime);
}

DeleteClusterNodepoolResponse Alibabacloud_CS20151215::Client::deleteClusterNodepoolWithOptions(shared_ptr<string> ClusterId,
                                                                                                shared_ptr<string> NodepoolId,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DeleteClusterNodepoolResponse(doROARequest(make_shared<string>("DeleteClusterNodepool"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/clusters/") + string(*ClusterId) + string("/nodepools/") + string(*NodepoolId)), make_shared<string>("none"), req, runtime));
}

DescribeClusterAddonsUpgradeStatusResponse Alibabacloud_CS20151215::Client::describeClusterAddonsUpgradeStatus(shared_ptr<string> ClusterId, shared_ptr<DescribeClusterAddonsUpgradeStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterAddonsUpgradeStatusWithOptions(ClusterId, request, headers, runtime);
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
    (*query)["componentIds"] = *request->componentIdsShrink;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribeClusterAddonsUpgradeStatusResponse(doROARequest(make_shared<string>("DescribeClusterAddonsUpgradeStatus"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/clusters/") + string(*ClusterId) + string("/components/upgradestatus")), make_shared<string>("json"), req, runtime));
}

DescribeWorkflowsResponse Alibabacloud_CS20151215::Client::describeWorkflows() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeWorkflowsWithOptions(headers, runtime);
}

DescribeWorkflowsResponse Alibabacloud_CS20151215::Client::describeWorkflowsWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DescribeWorkflowsResponse(doROARequest(make_shared<string>("DescribeWorkflows"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/gs/workflows")), make_shared<string>("json"), req, runtime));
}

InstallClusterAddonsResponse Alibabacloud_CS20151215::Client::installClusterAddons(shared_ptr<string> ClusterId, shared_ptr<InstallClusterAddonsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return installClusterAddonsWithOptions(ClusterId, request, headers, runtime);
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
  return InstallClusterAddonsResponse(doROARequest(make_shared<string>("InstallClusterAddons"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/clusters/") + string(*ClusterId) + string("/components/install")), make_shared<string>("none"), req, runtime));
}

DescribeClusterNodePoolsResponse Alibabacloud_CS20151215::Client::describeClusterNodePools(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterNodePoolsWithOptions(ClusterId, headers, runtime);
}

DescribeClusterNodePoolsResponse Alibabacloud_CS20151215::Client::describeClusterNodePoolsWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DescribeClusterNodePoolsResponse(doROARequest(make_shared<string>("DescribeClusterNodePools"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/clusters/") + string(*ClusterId) + string("/nodepools")), make_shared<string>("json"), req, runtime));
}

DescribeClusterV2UserKubeconfigResponse Alibabacloud_CS20151215::Client::describeClusterV2UserKubeconfig(shared_ptr<string> ClusterId, shared_ptr<DescribeClusterV2UserKubeconfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterV2UserKubeconfigWithOptions(ClusterId, request, headers, runtime);
}

DescribeClusterV2UserKubeconfigResponse Alibabacloud_CS20151215::Client::describeClusterV2UserKubeconfigWithOptions(shared_ptr<string> ClusterId,
                                                                                                                    shared_ptr<DescribeClusterV2UserKubeconfigRequest> request,
                                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->privateIpAddress)) {
    (*query)["PrivateIpAddress"] = *request->privateIpAddress;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribeClusterV2UserKubeconfigResponse(doROARequest(make_shared<string>("DescribeClusterV2UserKubeconfig"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v2/k8s/") + string(*ClusterId) + string("/user_config")), make_shared<string>("json"), req, runtime));
}

StartWorkflowResponse Alibabacloud_CS20151215::Client::startWorkflow(shared_ptr<StartWorkflowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startWorkflowWithOptions(request, headers, runtime);
}

StartWorkflowResponse Alibabacloud_CS20151215::Client::startWorkflowWithOptions(shared_ptr<StartWorkflowRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workflowType)) {
    (*body)["workflow_type"] = *request->workflowType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->service)) {
    (*body)["service"] = *request->service;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mappingOssRegion)) {
    (*body)["mapping_oss_region"] = *request->mappingOssRegion;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mappingFastqFirstFilename)) {
    (*body)["mapping_fastq_first_filename"] = *request->mappingFastqFirstFilename;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mappingFastqSecondFilename)) {
    (*body)["mapping_fastq_second_filename"] = *request->mappingFastqSecondFilename;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mappingBucketName)) {
    (*body)["mapping_bucket_name"] = *request->mappingBucketName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mappingFastqPath)) {
    (*body)["mapping_fastq_path"] = *request->mappingFastqPath;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mappingReferencePath)) {
    (*body)["mapping_reference_path"] = *request->mappingReferencePath;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mappingIsMarkDup)) {
    (*body)["mapping_is_mark_dup"] = *request->mappingIsMarkDup;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mappingBamOutPath)) {
    (*body)["mapping_bam_out_path"] = *request->mappingBamOutPath;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mappingBamOutFilename)) {
    (*body)["mapping_bam_out_filename"] = *request->mappingBamOutFilename;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wgsOssRegion)) {
    (*body)["wgs_oss_region"] = *request->wgsOssRegion;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wgsFastqFirstFilename)) {
    (*body)["wgs_fastq_first_filename"] = *request->wgsFastqFirstFilename;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wgsFastqSecondFilename)) {
    (*body)["wgs_fastq_second_filename"] = *request->wgsFastqSecondFilename;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wgsBucketName)) {
    (*body)["wgs_bucket_name"] = *request->wgsBucketName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wgsFastqPath)) {
    (*body)["wgs_fastq_path"] = *request->wgsFastqPath;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wgsReferencePath)) {
    (*body)["wgs_reference_path"] = *request->wgsReferencePath;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wgsVcfOutPath)) {
    (*body)["wgs_vcf_out_path"] = *request->wgsVcfOutPath;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wgsVcfOutFilename)) {
    (*body)["wgs_vcf_out_filename"] = *request->wgsVcfOutFilename;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return StartWorkflowResponse(doROARequest(make_shared<string>("StartWorkflow"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/gs/workflow")), make_shared<string>("json"), req, runtime));
}

ScaleOutClusterResponse Alibabacloud_CS20151215::Client::scaleOutCluster(shared_ptr<string> ClusterId, shared_ptr<ScaleOutClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return scaleOutClusterWithOptions(ClusterId, request, headers, runtime);
}

ScaleOutClusterResponse Alibabacloud_CS20151215::Client::scaleOutClusterWithOptions(shared_ptr<string> ClusterId,
                                                                                    shared_ptr<ScaleOutClusterRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->count)) {
    (*body)["count"] = *request->count;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPair)) {
    (*body)["key_pair"] = *request->keyPair;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginPassword)) {
    (*body)["login_password"] = *request->loginPassword;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->vswitchIds)) {
    (*body)["vswitch_ids"] = *request->vswitchIds;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workerInstanceChargeType)) {
    (*body)["worker_instance_charge_type"] = *request->workerInstanceChargeType;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workerPeriod)) {
    (*body)["worker_period"] = *request->workerPeriod;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workerPeriodUnit)) {
    (*body)["worker_period_unit"] = *request->workerPeriodUnit;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->workerAutoRenew)) {
    (*body)["worker_auto_renew"] = *request->workerAutoRenew;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workerAutoRenewPeriod)) {
    (*body)["worker_auto_renew_period"] = *request->workerAutoRenewPeriod;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->workerInstanceTypes)) {
    (*body)["worker_instance_types"] = *request->workerInstanceTypes;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workerSystemDiskCategory)) {
    (*body)["worker_system_disk_category"] = *request->workerSystemDiskCategory;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workerSystemDiskSize)) {
    (*body)["worker_system_disk_size"] = *request->workerSystemDiskSize;
  }
  if (!Darabonba_Util::Client::isUnset<vector<ScaleOutClusterRequestWorkerDataDisks>>(request->workerDataDisks)) {
    (*body)["worker_data_disks"] = *request->workerDataDisks;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->cloudMonitorFlags)) {
    (*body)["cloud_monitor_flags"] = *request->cloudMonitorFlags;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cpuPolicy)) {
    (*body)["cpu_policy"] = *request->cpuPolicy;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    (*body)["image_id"] = *request->imageId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    (*body)["user_data"] = *request->userData;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->rdsInstances)) {
    (*body)["rds_instances"] = *request->rdsInstances;
  }
  if (!Darabonba_Util::Client::isUnset<vector<Tag>>(request->tags)) {
    (*body)["tags"] = *request->tags;
  }
  if (!Darabonba_Util::Client::isUnset<vector<Taint>>(request->taints)) {
    (*body)["taints"] = *request->taints;
  }
  if (!Darabonba_Util::Client::isUnset<Runtime>(request->runtime)) {
    (*body)["runtime"] = *request->runtime;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return ScaleOutClusterResponse(doROARequest(make_shared<string>("ScaleOutCluster"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v2/clusters/") + string(*ClusterId)), make_shared<string>("json"), req, runtime));
}

DescribeEventsResponse Alibabacloud_CS20151215::Client::describeEvents(shared_ptr<DescribeEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeEventsWithOptions(request, headers, runtime);
}

DescribeEventsResponse Alibabacloud_CS20151215::Client::describeEventsWithOptions(shared_ptr<DescribeEventsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    (*query)["cluster_id"] = *request->clusterId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    (*query)["type"] = *request->type;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["page_size"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*query)["page_number"] = *request->pageNumber;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribeEventsResponse(doROARequest(make_shared<string>("DescribeEvents"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/events")), make_shared<string>("json"), req, runtime));
}

UpdateK8sClusterUserConfigExpireResponse Alibabacloud_CS20151215::Client::updateK8sClusterUserConfigExpire(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateK8sClusterUserConfigExpireWithOptions(ClusterId, headers, runtime);
}

UpdateK8sClusterUserConfigExpireResponse Alibabacloud_CS20151215::Client::updateK8sClusterUserConfigExpireWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return UpdateK8sClusterUserConfigExpireResponse(doROARequest(make_shared<string>("UpdateK8sClusterUserConfigExpire"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/k8s/") + string(*ClusterId) + string("/user_config/expire")), make_shared<string>("none"), req, runtime));
}

TagResourcesResponse Alibabacloud_CS20151215::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return tagResourcesWithOptions(request, headers, runtime);
}

TagResourcesResponse Alibabacloud_CS20151215::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceIds)) {
    (*body)["resource_ids"] = *request->resourceIds;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    (*body)["resource_type"] = *request->resourceType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*body)["region_id"] = *request->regionId;
  }
  if (!Darabonba_Util::Client::isUnset<vector<Tag>>(request->tags)) {
    (*body)["tags"] = *request->tags;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return TagResourcesResponse(doROARequest(make_shared<string>("TagResources"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/tags")), make_shared<string>("none"), req, runtime));
}

ModifyClusterTagsResponse Alibabacloud_CS20151215::Client::modifyClusterTags(shared_ptr<string> ClusterId, shared_ptr<ModifyClusterTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyClusterTagsWithOptions(ClusterId, request, headers, runtime);
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
  return ModifyClusterTagsResponse(doROARequest(make_shared<string>("ModifyClusterTags"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/clusters/") + string(*ClusterId) + string("/tags")), make_shared<string>("none"), req, runtime));
}

GetKubernetesTriggerResponse Alibabacloud_CS20151215::Client::getKubernetesTrigger(shared_ptr<string> ClusterId, shared_ptr<GetKubernetesTriggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getKubernetesTriggerWithOptions(ClusterId, request, headers, runtime);
}

GetKubernetesTriggerResponse Alibabacloud_CS20151215::Client::getKubernetesTriggerWithOptions(shared_ptr<string> ClusterId,
                                                                                              shared_ptr<GetKubernetesTriggerRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    (*query)["Namespace_"] = *request->namespace_;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    (*query)["Type"] = *request->type;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*query)["Name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->action)) {
    (*query)["action"] = *request->action;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetKubernetesTriggerResponse(doROARequest(make_shared<string>("GetKubernetesTrigger"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/triggers/") + string(*ClusterId)), make_shared<string>("array"), req, runtime));
}

GetUpgradeStatusResponse Alibabacloud_CS20151215::Client::getUpgradeStatus(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getUpgradeStatusWithOptions(ClusterId, headers, runtime);
}

GetUpgradeStatusResponse Alibabacloud_CS20151215::Client::getUpgradeStatusWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetUpgradeStatusResponse(doROARequest(make_shared<string>("GetUpgradeStatus"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v2/clusters/") + string(*ClusterId) + string("/upgrade/status")), make_shared<string>("json"), req, runtime));
}

DescribeClusterResourcesResponse Alibabacloud_CS20151215::Client::describeClusterResources(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterResourcesWithOptions(ClusterId, headers, runtime);
}

DescribeClusterResourcesResponse Alibabacloud_CS20151215::Client::describeClusterResourcesWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DescribeClusterResourcesResponse(doROARequest(make_shared<string>("DescribeClusterResources"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/clusters/") + string(*ClusterId) + string("/resources")), make_shared<string>("array"), req, runtime));
}

DeleteClusterNodesResponse Alibabacloud_CS20151215::Client::deleteClusterNodes(shared_ptr<string> ClusterId, shared_ptr<DeleteClusterNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteClusterNodesWithOptions(ClusterId, request, headers, runtime);
}

DeleteClusterNodesResponse Alibabacloud_CS20151215::Client::deleteClusterNodesWithOptions(shared_ptr<string> ClusterId,
                                                                                          shared_ptr<DeleteClusterNodesRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->drainNode)) {
    (*body)["drain_node"] = *request->drainNode;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->releaseNode)) {
    (*body)["release_node"] = *request->releaseNode;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->nodes)) {
    (*body)["nodes"] = *request->nodes;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return DeleteClusterNodesResponse(doROARequest(make_shared<string>("DeleteClusterNodes"), make_shared<string>("2015-12-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/clusters/") + string(*ClusterId) + string("/nodes")), make_shared<string>("none"), req, runtime));
}

