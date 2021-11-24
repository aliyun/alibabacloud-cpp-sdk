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
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cpuPolicy)) {
    (*body)["cpu_policy"] = *request->cpuPolicy;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->formatDisk)) {
    (*body)["format_disk"] = *request->formatDisk;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    (*body)["image_id"] = *request->imageId;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instances)) {
    (*body)["instances"] = *request->instances;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isEdgeWorker)) {
    (*body)["is_edge_worker"] = *request->isEdgeWorker;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->keepInstanceName)) {
    (*body)["keep_instance_name"] = *request->keepInstanceName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPair)) {
    (*body)["key_pair"] = *request->keyPair;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodepoolId)) {
    (*body)["nodepool_id"] = *request->nodepoolId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    (*body)["password"] = *request->password;
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
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    (*body)["user_data"] = *request->userData;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachInstances"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*ClusterId) + string("/attach"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachInstancesResponse(callApi(params, req, runtime));
}

CancelClusterUpgradeResponse Alibabacloud_CS20151215::Client::cancelClusterUpgrade(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cancelClusterUpgradeWithOptions(ClusterId, headers, runtime);
}

CancelClusterUpgradeResponse Alibabacloud_CS20151215::Client::cancelClusterUpgradeWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelClusterUpgrade"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/clusters/") + string(*ClusterId) + string("/upgrade/cancel"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return CancelClusterUpgradeResponse(callApi(params, req, runtime));
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
  clusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId));
  componentId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(componentId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelComponentUpgrade"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*clusterId) + string("/components/{componentId}/cancel"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return CancelComponentUpgradeResponse(callApi(params, req, runtime));
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
  workflowName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workflowName));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->action)) {
    (*body)["action"] = *request->action;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelWorkflow"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gs/workflow/") + string(*workflowName))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return CancelWorkflowResponse(callApi(params, req, runtime));
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
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->coolDownDuration)) {
    (*body)["cool_down_duration"] = *request->coolDownDuration;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gpuUtilizationThreshold)) {
    (*body)["gpu_utilization_threshold"] = *request->gpuUtilizationThreshold;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scanInterval)) {
    (*body)["scan_interval"] = *request->scanInterval;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->unneededDuration)) {
    (*body)["unneeded_duration"] = *request->unneededDuration;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->utilizationThreshold)) {
    (*body)["utilization_threshold"] = *request->utilizationThreshold;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAutoscalingConfig"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/cluster/") + string(*ClusterId) + string("/autoscale/config/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return CreateAutoscalingConfigResponse(callApi(params, req, runtime));
}

CreateClusterResponse Alibabacloud_CS20151215::Client::createCluster(shared_ptr<CreateClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createClusterWithOptions(request, headers, runtime);
}

CreateClusterResponse Alibabacloud_CS20151215::Client::createClusterWithOptions(shared_ptr<CreateClusterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<Addon>>(request->addons)) {
    (*body)["addons"] = *request->addons;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiAudiences)) {
    (*body)["api_audiences"] = *request->apiAudiences;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->cisEnabled)) {
    (*body)["cis_enabled"] = *request->cisEnabled;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->cloudMonitorFlags)) {
    (*body)["cloud_monitor_flags"] = *request->cloudMonitorFlags;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterDomain)) {
    (*body)["cluster_domain"] = *request->clusterDomain;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterSpec)) {
    (*body)["cluster_spec"] = *request->clusterSpec;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    (*body)["cluster_type"] = *request->clusterType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->containerCidr)) {
    (*body)["container_cidr"] = *request->containerCidr;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->controlplaneLogComponents)) {
    (*body)["controlplane_log_components"] = *request->controlplaneLogComponents;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->controlplaneLogProject)) {
    (*body)["controlplane_log_project"] = *request->controlplaneLogProject;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->controlplaneLogTtl)) {
    (*body)["controlplane_log_ttl"] = *request->controlplaneLogTtl;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cpuPolicy)) {
    (*body)["cpu_policy"] = *request->cpuPolicy;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customSan)) {
    (*body)["custom_san"] = *request->customSan;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->deletionProtection)) {
    (*body)["deletion_protection"] = *request->deletionProtection;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->disableRollback)) {
    (*body)["disable_rollback"] = *request->disableRollback;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableRrsa)) {
    (*body)["enable_rrsa"] = *request->enableRrsa;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptionProviderKey)) {
    (*body)["encryption_provider_key"] = *request->encryptionProviderKey;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->endpointPublicAccess)) {
    (*body)["endpoint_public_access"] = *request->endpointPublicAccess;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->formatDisk)) {
    (*body)["format_disk"] = *request->formatDisk;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    (*body)["image_id"] = *request->imageId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageType)) {
    (*body)["image_type"] = *request->imageType;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instances)) {
    (*body)["instances"] = *request->instances;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isEnterpriseSecurityGroup)) {
    (*body)["is_enterprise_security_group"] = *request->isEnterpriseSecurityGroup;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->keepInstanceName)) {
    (*body)["keep_instance_name"] = *request->keepInstanceName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPair)) {
    (*body)["key_pair"] = *request->keyPair;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->kubernetesVersion)) {
    (*body)["kubernetes_version"] = *request->kubernetesVersion;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerSpec)) {
    (*body)["load_balancer_spec"] = *request->loadBalancerSpec;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loggingType)) {
    (*body)["logging_type"] = *request->loggingType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginPassword)) {
    (*body)["login_password"] = *request->loginPassword;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->masterAutoRenew)) {
    (*body)["master_auto_renew"] = *request->masterAutoRenew;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->masterAutoRenewPeriod)) {
    (*body)["master_auto_renew_period"] = *request->masterAutoRenewPeriod;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->masterCount)) {
    (*body)["master_count"] = *request->masterCount;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterInstanceChargeType)) {
    (*body)["master_instance_charge_type"] = *request->masterInstanceChargeType;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->masterInstanceTypes)) {
    (*body)["master_instance_types"] = *request->masterInstanceTypes;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->masterPeriod)) {
    (*body)["master_period"] = *request->masterPeriod;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterPeriodUnit)) {
    (*body)["master_period_unit"] = *request->masterPeriodUnit;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterSystemDiskCategory)) {
    (*body)["master_system_disk_category"] = *request->masterSystemDiskCategory;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterSystemDiskPerformanceLevel)) {
    (*body)["master_system_disk_performance_level"] = *request->masterSystemDiskPerformanceLevel;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->masterSystemDiskSize)) {
    (*body)["master_system_disk_size"] = *request->masterSystemDiskSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterSystemDiskSnapshotPolicyId)) {
    (*body)["master_system_disk_snapshot_policy_id"] = *request->masterSystemDiskSnapshotPolicyId;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->masterVswitchIds)) {
    (*body)["master_vswitch_ids"] = *request->masterVswitchIds;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*body)["name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->natGateway)) {
    (*body)["nat_gateway"] = *request->natGateway;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeCidrMask)) {
    (*body)["node_cidr_mask"] = *request->nodeCidrMask;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeNameMode)) {
    (*body)["node_name_mode"] = *request->nodeNameMode;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodePortRange)) {
    (*body)["node_port_range"] = *request->nodePortRange;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->numOfNodes)) {
    (*body)["num_of_nodes"] = *request->numOfNodes;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->osType)) {
    (*body)["os_type"] = *request->osType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->platform)) {
    (*body)["platform"] = *request->platform;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->podVswitchIds)) {
    (*body)["pod_vswitch_ids"] = *request->podVswitchIds;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->profile)) {
    (*body)["profile"] = *request->profile;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyMode)) {
    (*body)["proxy_mode"] = *request->proxyMode;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->rdsInstances)) {
    (*body)["rds_instances"] = *request->rdsInstances;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*body)["region_id"] = *request->regionId;
  }
  if (!Darabonba_Util::Client::isUnset<Runtime>(request->runtime)) {
    (*body)["runtime"] = *request->runtime;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    (*body)["security_group_id"] = *request->securityGroupId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceAccountIssuer)) {
    (*body)["service_account_issuer"] = *request->serviceAccountIssuer;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCidr)) {
    (*body)["service_cidr"] = *request->serviceCidr;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->serviceDiscoveryTypes)) {
    (*body)["service_discovery_types"] = *request->serviceDiscoveryTypes;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->snatEntry)) {
    (*body)["snat_entry"] = *request->snatEntry;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->socEnabled)) {
    (*body)["soc_enabled"] = *request->socEnabled;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->sshFlags)) {
    (*body)["ssh_flags"] = *request->sshFlags;
  }
  if (!Darabonba_Util::Client::isUnset<vector<Tag>>(request->tags)) {
    (*body)["tags"] = *request->tags;
  }
  if (!Darabonba_Util::Client::isUnset<vector<Taint>>(request->taints)) {
    (*body)["taints"] = *request->taints;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeoutMins)) {
    (*body)["timeout_mins"] = *request->timeoutMins;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timezone)) {
    (*body)["timezone"] = *request->timezone;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userCa)) {
    (*body)["user_ca"] = *request->userCa;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    (*body)["user_data"] = *request->userData;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcid)) {
    (*body)["vpcid"] = *request->vpcid;
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
  if (!Darabonba_Util::Client::isUnset<vector<CreateClusterRequestWorkerDataDisks>>(request->workerDataDisks)) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->workerSystemDiskPerformanceLevel)) {
    (*body)["worker_system_disk_performance_level"] = *request->workerSystemDiskPerformanceLevel;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workerSystemDiskSize)) {
    (*body)["worker_system_disk_size"] = *request->workerSystemDiskSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workerSystemDiskSnapshotPolicyId)) {
    (*body)["worker_system_disk_snapshot_policy_id"] = *request->workerSystemDiskSnapshotPolicyId;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->workerVswitchIds)) {
    (*body)["worker_vswitch_ids"] = *request->workerVswitchIds;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    (*body)["zone_id"] = *request->zoneId;
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
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<CreateClusterNodePoolRequestAutoScaling>(request->autoScaling)) {
    (*body)["auto_scaling"] = *request->autoScaling;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->count)) {
    (*body)["count"] = *request->count;
  }
  if (!Darabonba_Util::Client::isUnset<CreateClusterNodePoolRequestInterconnectConfig>(request->interconnectConfig)) {
    (*body)["interconnect_config"] = *request->interconnectConfig;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interconnectMode)) {
    (*body)["interconnect_mode"] = *request->interconnectMode;
  }
  if (!Darabonba_Util::Client::isUnset<CreateClusterNodePoolRequestKubernetesConfig>(request->kubernetesConfig)) {
    (*body)["kubernetes_config"] = *request->kubernetesConfig;
  }
  if (!Darabonba_Util::Client::isUnset<CreateClusterNodePoolRequestManagement>(request->management)) {
    (*body)["management"] = *request->management;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxNodes)) {
    (*body)["max_nodes"] = *request->maxNodes;
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateClusterNodePool"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*ClusterId) + string("/nodepools"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateClusterNodePoolResponse(callApi(params, req, runtime));
}

CreateEdgeMachineResponse Alibabacloud_CS20151215::Client::createEdgeMachine(shared_ptr<CreateEdgeMachineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createEdgeMachineWithOptions(request, headers, runtime);
}

CreateEdgeMachineResponse Alibabacloud_CS20151215::Client::createEdgeMachineWithOptions(shared_ptr<CreateEdgeMachineRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hostname)) {
    (*body)["hostname"] = *request->hostname;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    (*body)["model"] = *request->model;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sn)) {
    (*body)["sn"] = *request->sn;
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

CreateKubernetesTriggerResponse Alibabacloud_CS20151215::Client::createKubernetesTrigger(shared_ptr<CreateKubernetesTriggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createKubernetesTriggerWithOptions(request, headers, runtime);
}

CreateKubernetesTriggerResponse Alibabacloud_CS20151215::Client::createKubernetesTriggerWithOptions(shared_ptr<CreateKubernetesTriggerRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->action)) {
    (*body)["action"] = *request->action;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    (*body)["cluster_id"] = *request->clusterId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    (*body)["project_id"] = *request->projectId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    (*body)["type"] = *request->type;
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

CreateTemplateResponse Alibabacloud_CS20151215::Client::createTemplate(shared_ptr<CreateTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createTemplateWithOptions(request, headers, runtime);
}

CreateTemplateResponse Alibabacloud_CS20151215::Client::createTemplateWithOptions(shared_ptr<CreateTemplateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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

CreateTriggerResponse Alibabacloud_CS20151215::Client::createTrigger(shared_ptr<string> clusterId, shared_ptr<CreateTriggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createTriggerWithOptions(clusterId, request, headers, runtime);
}

CreateTriggerResponse Alibabacloud_CS20151215::Client::createTriggerWithOptions(shared_ptr<string> clusterId,
                                                                                shared_ptr<CreateTriggerRequest> request,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  clusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->action)) {
    (*body)["action"] = *request->action;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    (*body)["cluster_id"] = *request->clusterId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    (*body)["project_id"] = *request->projectId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    (*body)["type"] = *request->type;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTrigger"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*clusterId) + string("/triggers"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTriggerResponse(callApi(params, req, runtime));
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
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  shared_ptr<DeleteClusterShrinkRequest> request = make_shared<DeleteClusterShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->retainResources)) {
    request->retainResourcesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->retainResources, make_shared<string>("retain_resources"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->keepSlb)) {
    (*query)["keep_slb"] = *request->keepSlb;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->retainAllResources)) {
    (*query)["retain_all_resources"] = *request->retainAllResources;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->retainResourcesShrink)) {
    (*query)["retain_resources"] = *request->retainResourcesShrink;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCluster"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*ClusterId))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteClusterResponse(callApi(params, req, runtime));
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
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  NodepoolId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(NodepoolId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteClusterNodepool"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*ClusterId) + string("/nodepools/{NodepoolId}"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteClusterNodepoolResponse(callApi(params, req, runtime));
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
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
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
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteClusterNodes"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*ClusterId) + string("/nodes"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteClusterNodesResponse(callApi(params, req, runtime));
}

DeleteEdgeMachineResponse Alibabacloud_CS20151215::Client::deleteEdgeMachine(shared_ptr<string> edgeMachineid, shared_ptr<DeleteEdgeMachineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteEdgeMachineWithOptions(edgeMachineid, request, headers, runtime);
}

DeleteEdgeMachineResponse Alibabacloud_CS20151215::Client::deleteEdgeMachineWithOptions(shared_ptr<string> edgeMachineid,
                                                                                        shared_ptr<DeleteEdgeMachineRequest> request,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  edgeMachineid = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(edgeMachineid));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->force)) {
    (*query)["force"] = *request->force;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEdgeMachine"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/edge_machines/[edge_machineid]"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteEdgeMachineResponse(callApi(params, req, runtime));
}

DeleteKubernetesTriggerResponse Alibabacloud_CS20151215::Client::deleteKubernetesTrigger(shared_ptr<string> Id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteKubernetesTriggerWithOptions(Id, headers, runtime);
}

DeleteKubernetesTriggerResponse Alibabacloud_CS20151215::Client::deleteKubernetesTriggerWithOptions(shared_ptr<string> Id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Id = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Id));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteKubernetesTrigger"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/triggers/revoke/") + string(*Id))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteKubernetesTriggerResponse(callApi(params, req, runtime));
}

DeletePolicyInstanceResponse Alibabacloud_CS20151215::Client::deletePolicyInstance(shared_ptr<string> clusterId, shared_ptr<string> policyName, shared_ptr<DeletePolicyInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deletePolicyInstanceWithOptions(clusterId, policyName, request, headers, runtime);
}

DeletePolicyInstanceResponse Alibabacloud_CS20151215::Client::deletePolicyInstanceWithOptions(shared_ptr<string> clusterId,
                                                                                              shared_ptr<string> policyName,
                                                                                              shared_ptr<DeletePolicyInstanceRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  clusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId));
  policyName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(policyName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    (*query)["instance_name"] = *request->instanceName;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePolicyInstance"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*clusterId) + string("/policies/{policyName}"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePolicyInstanceResponse(callApi(params, req, runtime));
}

DeleteTemplateResponse Alibabacloud_CS20151215::Client::deleteTemplate(shared_ptr<string> TemplateId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteTemplateWithOptions(TemplateId, headers, runtime);
}

DeleteTemplateResponse Alibabacloud_CS20151215::Client::deleteTemplateWithOptions(shared_ptr<string> TemplateId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  TemplateId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TemplateId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTemplate"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/templates/") + string(*TemplateId))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteTemplateResponse(callApi(params, req, runtime));
}

DeleteTriggerResponse Alibabacloud_CS20151215::Client::deleteTrigger(shared_ptr<string> clusterId, shared_ptr<string> Id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteTriggerWithOptions(clusterId, Id, headers, runtime);
}

DeleteTriggerResponse Alibabacloud_CS20151215::Client::deleteTriggerWithOptions(shared_ptr<string> clusterId,
                                                                                shared_ptr<string> Id,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  clusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId));
  Id = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Id));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTrigger"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/[cluster_id]/triggers/[Id]"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteTriggerResponse(callApi(params, req, runtime));
}

DeployPolicyInstanceResponse Alibabacloud_CS20151215::Client::deployPolicyInstance(shared_ptr<string> clusterId, shared_ptr<string> policyName, shared_ptr<DeployPolicyInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deployPolicyInstanceWithOptions(clusterId, policyName, request, headers, runtime);
}

DeployPolicyInstanceResponse Alibabacloud_CS20151215::Client::deployPolicyInstanceWithOptions(shared_ptr<string> clusterId,
                                                                                              shared_ptr<string> policyName,
                                                                                              shared_ptr<DeployPolicyInstanceRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  clusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId));
  policyName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(policyName));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->action)) {
    (*body)["action"] = *request->action;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    (*body)["namespace_"] = *request->namespace_;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->parameters)) {
    (*body)["parameters"] = *request->parameters;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeployPolicyInstance"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*clusterId) + string("/policies/{policyName}"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeployPolicyInstanceResponse(callApi(params, req, runtime));
}

DescirbeWorkflowResponse Alibabacloud_CS20151215::Client::descirbeWorkflow(shared_ptr<string> workflowName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return descirbeWorkflowWithOptions(workflowName, headers, runtime);
}

DescirbeWorkflowResponse Alibabacloud_CS20151215::Client::descirbeWorkflowWithOptions(shared_ptr<string> workflowName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  workflowName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workflowName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescirbeWorkflow"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gs/workflow/") + string(*workflowName))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescirbeWorkflowResponse(callApi(params, req, runtime));
}

DescribeAddonsResponse Alibabacloud_CS20151215::Client::describeAddons(shared_ptr<DescribeAddonsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeAddonsWithOptions(request, headers, runtime);
}

DescribeAddonsResponse Alibabacloud_CS20151215::Client::describeAddonsWithOptions(shared_ptr<DescribeAddonsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    (*query)["cluster_type"] = *request->clusterType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    (*query)["region"] = *request->region;
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

DescribeClusterAddonMetadataResponse Alibabacloud_CS20151215::Client::describeClusterAddonMetadata(shared_ptr<string> clusterId, shared_ptr<string> componentId, shared_ptr<string> version) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterAddonMetadataWithOptions(clusterId, componentId, version, headers, runtime);
}

DescribeClusterAddonMetadataResponse Alibabacloud_CS20151215::Client::describeClusterAddonMetadataWithOptions(shared_ptr<string> clusterId,
                                                                                                              shared_ptr<string> componentId,
                                                                                                              shared_ptr<string> version,
                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  clusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId));
  componentId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(componentId));
  version = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(version));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterAddonMetadata"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*clusterId) + string("/components/{componentId}/metadata"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterAddonMetadataResponse(callApi(params, req, runtime));
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
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ComponentId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ComponentId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterAddonUpgradeStatus"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*ClusterId) + string("/components/{ComponentId}/upgradestatus"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterAddonUpgradeStatusResponse(callApi(params, req, runtime));
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
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
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
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterAddonsUpgradeStatus"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*ClusterId) + string("/components/upgradestatus"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterAddonsUpgradeStatusResponse(callApi(params, req, runtime));
}

DescribeClusterAddonsVersionResponse Alibabacloud_CS20151215::Client::describeClusterAddonsVersion(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterAddonsVersionWithOptions(ClusterId, headers, runtime);
}

DescribeClusterAddonsVersionResponse Alibabacloud_CS20151215::Client::describeClusterAddonsVersionWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterAddonsVersion"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*ClusterId) + string("/components/version"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterAddonsVersionResponse(callApi(params, req, runtime));
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
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->arch)) {
    (*body)["arch"] = *request->arch;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->formatDisk)) {
    (*body)["format_disk"] = *request->formatDisk;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->keepInstanceName)) {
    (*body)["keep_instance_name"] = *request->keepInstanceName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodepoolId)) {
    (*body)["nodepool_id"] = *request->nodepoolId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->options)) {
    (*body)["options"] = *request->options;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->rdsInstances)) {
    (*body)["rds_instances"] = *request->rdsInstances;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterAttachScripts"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*ClusterId) + string("/attachscript"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("string"))}
  }));
  return DescribeClusterAttachScriptsResponse(callApi(params, req, runtime));
}

DescribeClusterDetailResponse Alibabacloud_CS20151215::Client::describeClusterDetail(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterDetailWithOptions(ClusterId, headers, runtime);
}

DescribeClusterDetailResponse Alibabacloud_CS20151215::Client::describeClusterDetailWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterDetail"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*ClusterId))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterDetailResponse(callApi(params, req, runtime));
}

DescribeClusterLogsResponse Alibabacloud_CS20151215::Client::describeClusterLogs(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterLogsWithOptions(ClusterId, headers, runtime);
}

DescribeClusterLogsResponse Alibabacloud_CS20151215::Client::describeClusterLogsWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterLogs"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*ClusterId) + string("/logs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("array"))}
  }));
  return DescribeClusterLogsResponse(callApi(params, req, runtime));
}

DescribeClusterNamespacesResponse Alibabacloud_CS20151215::Client::describeClusterNamespaces(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterNamespacesWithOptions(ClusterId, headers, runtime);
}

DescribeClusterNamespacesResponse Alibabacloud_CS20151215::Client::describeClusterNamespacesWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterNamespaces"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/k8s/") + string(*ClusterId) + string("/namespaces"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("array"))}
  }));
  return DescribeClusterNamespacesResponse(callApi(params, req, runtime));
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
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  NodepoolId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(NodepoolId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterNodePoolDetail"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*ClusterId) + string("/nodepools/{NodepoolId}"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterNodePoolDetailResponse(callApi(params, req, runtime));
}

DescribeClusterNodePoolsResponse Alibabacloud_CS20151215::Client::describeClusterNodePools(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterNodePoolsWithOptions(ClusterId, headers, runtime);
}

DescribeClusterNodePoolsResponse Alibabacloud_CS20151215::Client::describeClusterNodePoolsWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterNodePools"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*ClusterId) + string("/nodepools"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterNodePoolsResponse(callApi(params, req, runtime));
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
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIds)) {
    (*query)["instanceIds"] = *request->instanceIds;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodepoolId)) {
    (*query)["nodepool_id"] = *request->nodepoolId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    (*query)["pageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    (*query)["pageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    (*query)["state"] = *request->state;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterNodes"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*ClusterId) + string("/nodes"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterNodesResponse(callApi(params, req, runtime));
}

DescribeClusterResourcesResponse Alibabacloud_CS20151215::Client::describeClusterResources(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClusterResourcesWithOptions(ClusterId, headers, runtime);
}

DescribeClusterResourcesResponse Alibabacloud_CS20151215::Client::describeClusterResourcesWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterResources"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*ClusterId) + string("/resources"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("array"))}
  }));
  return DescribeClusterResourcesResponse(callApi(params, req, runtime));
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
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
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
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterUserKubeconfig"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/k8s/") + string(*ClusterId) + string("/user_config"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterUserKubeconfigResponse(callApi(params, req, runtime));
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
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->privateIpAddress)) {
    (*query)["PrivateIpAddress"] = *request->privateIpAddress;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterV2UserKubeconfig"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/k8s/") + string(*ClusterId) + string("/user_config"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterV2UserKubeconfigResponse(callApi(params, req, runtime));
}

DescribeClustersResponse Alibabacloud_CS20151215::Client::describeClusters(shared_ptr<DescribeClustersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClustersWithOptions(request, headers, runtime);
}

DescribeClustersResponse Alibabacloud_CS20151215::Client::describeClustersWithOptions(shared_ptr<DescribeClustersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    (*query)["clusterType"] = *request->clusterType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*query)["name"] = *request->name;
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

DescribeClustersV1Response Alibabacloud_CS20151215::Client::describeClustersV1(shared_ptr<DescribeClustersV1Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeClustersV1WithOptions(request, headers, runtime);
}

DescribeClustersV1Response Alibabacloud_CS20151215::Client::describeClustersV1WithOptions(shared_ptr<DescribeClustersV1Request> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterSpec)) {
    (*query)["cluster_spec"] = *request->clusterSpec;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    (*query)["cluster_type"] = *request->clusterType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*query)["name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*query)["page_number"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["page_size"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->profile)) {
    (*query)["profile"] = *request->profile;
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

DescribeEdgeMachineActiveProcessResponse Alibabacloud_CS20151215::Client::describeEdgeMachineActiveProcess(shared_ptr<string> edgeMachineid) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeEdgeMachineActiveProcessWithOptions(edgeMachineid, headers, runtime);
}

DescribeEdgeMachineActiveProcessResponse Alibabacloud_CS20151215::Client::describeEdgeMachineActiveProcessWithOptions(shared_ptr<string> edgeMachineid, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  edgeMachineid = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(edgeMachineid));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEdgeMachineActiveProcess"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/edge_machines/[edge_machineid]/activeprocess"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEdgeMachineActiveProcessResponse(callApi(params, req, runtime));
}

DescribeEdgeMachineModelsResponse Alibabacloud_CS20151215::Client::describeEdgeMachineModels() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeEdgeMachineModelsWithOptions(headers, runtime);
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

DescribeEdgeMachineTunnelConfigDetailResponse Alibabacloud_CS20151215::Client::describeEdgeMachineTunnelConfigDetail(shared_ptr<string> edgeMachineid) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeEdgeMachineTunnelConfigDetailWithOptions(edgeMachineid, headers, runtime);
}

DescribeEdgeMachineTunnelConfigDetailResponse Alibabacloud_CS20151215::Client::describeEdgeMachineTunnelConfigDetailWithOptions(shared_ptr<string> edgeMachineid, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  edgeMachineid = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(edgeMachineid));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEdgeMachineTunnelConfigDetail"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/edge_machines/[edge_machineid]/tunnelconfig"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEdgeMachineTunnelConfigDetailResponse(callApi(params, req, runtime));
}

DescribeEdgeMachinesResponse Alibabacloud_CS20151215::Client::describeEdgeMachines(shared_ptr<DescribeEdgeMachinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeEdgeMachinesWithOptions(request, headers, runtime);
}

DescribeEdgeMachinesResponse Alibabacloud_CS20151215::Client::describeEdgeMachinesWithOptions(shared_ptr<DescribeEdgeMachinesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hostname)) {
    (*query)["hostname"] = *request->hostname;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lifeState)) {
    (*query)["life_state"] = *request->lifeState;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    (*query)["model"] = *request->model;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->onlineState)) {
    (*query)["online_state"] = *request->onlineState;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*query)["page_number"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["page_size"] = *request->pageSize;
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
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*query)["page_number"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["page_size"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    (*query)["type"] = *request->type;
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
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->privateIpAddress)) {
    (*query)["PrivateIpAddress"] = *request->privateIpAddress;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeExternalAgent"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/k8s/") + string(*ClusterId) + string("/external/agent/deployment"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeExternalAgentResponse(callApi(params, req, runtime));
}

DescribeKubernetesVersionMetadataResponse Alibabacloud_CS20151215::Client::describeKubernetesVersionMetadata(shared_ptr<DescribeKubernetesVersionMetadataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeKubernetesVersionMetadataWithOptions(request, headers, runtime);
}

DescribeKubernetesVersionMetadataResponse Alibabacloud_CS20151215::Client::describeKubernetesVersionMetadataWithOptions(shared_ptr<DescribeKubernetesVersionMetadataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    (*query)["ClusterType"] = *request->clusterType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->kubernetesVersion)) {
    (*query)["KubernetesVersion"] = *request->kubernetesVersion;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->profile)) {
    (*query)["Profile"] = *request->profile;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    (*query)["Region"] = *request->region;
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

DescribePoliciesResponse Alibabacloud_CS20151215::Client::describePolicies() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describePoliciesWithOptions(headers, runtime);
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

DescribePolicyDetailsResponse Alibabacloud_CS20151215::Client::describePolicyDetails(shared_ptr<string> policyName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describePolicyDetailsWithOptions(policyName, headers, runtime);
}

DescribePolicyDetailsResponse Alibabacloud_CS20151215::Client::describePolicyDetailsWithOptions(shared_ptr<string> policyName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  policyName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(policyName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePolicyDetails"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/policies/") + string(*policyName))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePolicyDetailsResponse(callApi(params, req, runtime));
}

DescribePolicyGovernanceInClusterResponse Alibabacloud_CS20151215::Client::describePolicyGovernanceInCluster(shared_ptr<string> clusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describePolicyGovernanceInClusterWithOptions(clusterId, headers, runtime);
}

DescribePolicyGovernanceInClusterResponse Alibabacloud_CS20151215::Client::describePolicyGovernanceInClusterWithOptions(shared_ptr<string> clusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  clusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePolicyGovernanceInCluster"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*clusterId) + string("/policygovernance"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePolicyGovernanceInClusterResponse(callApi(params, req, runtime));
}

DescribePolicyInstancesResponse Alibabacloud_CS20151215::Client::describePolicyInstances(shared_ptr<string> clusterId, shared_ptr<DescribePolicyInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describePolicyInstancesWithOptions(clusterId, request, headers, runtime);
}

DescribePolicyInstancesResponse Alibabacloud_CS20151215::Client::describePolicyInstancesWithOptions(shared_ptr<string> clusterId,
                                                                                                    shared_ptr<DescribePolicyInstancesRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  clusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    (*query)["instance_name"] = *request->instanceName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyName)) {
    (*query)["policy_name"] = *request->policyName;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePolicyInstances"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*clusterId) + string("/policies"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("array"))}
  }));
  return DescribePolicyInstancesResponse(callApi(params, req, runtime));
}

DescribePolicyInstancesStatusResponse Alibabacloud_CS20151215::Client::describePolicyInstancesStatus(shared_ptr<string> clusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describePolicyInstancesStatusWithOptions(clusterId, headers, runtime);
}

DescribePolicyInstancesStatusResponse Alibabacloud_CS20151215::Client::describePolicyInstancesStatusWithOptions(shared_ptr<string> clusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  clusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePolicyInstancesStatus"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*clusterId) + string("/policies/status"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePolicyInstancesStatusResponse(callApi(params, req, runtime));
}

DescribeTaskInfoResponse Alibabacloud_CS20151215::Client::describeTaskInfo(shared_ptr<string> taskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeTaskInfoWithOptions(taskId, headers, runtime);
}

DescribeTaskInfoResponse Alibabacloud_CS20151215::Client::describeTaskInfoWithOptions(shared_ptr<string> taskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  taskId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(taskId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTaskInfo"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/tasks/") + string(*taskId))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTaskInfoResponse(callApi(params, req, runtime));
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
  TemplateId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TemplateId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    (*query)["template_type"] = *request->templateType;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTemplateAttribute"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/templates/") + string(*TemplateId))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("array"))}
  }));
  return DescribeTemplateAttributeResponse(callApi(params, req, runtime));
}

DescribeTemplatesResponse Alibabacloud_CS20151215::Client::describeTemplates(shared_ptr<DescribeTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeTemplatesWithOptions(request, headers, runtime);
}

DescribeTemplatesResponse Alibabacloud_CS20151215::Client::describeTemplatesWithOptions(shared_ptr<DescribeTemplatesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    (*query)["page_num"] = *request->pageNum;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["page_size"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    (*query)["template_type"] = *request->templateType;
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

DescribeTriggerResponse Alibabacloud_CS20151215::Client::describeTrigger(shared_ptr<string> clusterId, shared_ptr<DescribeTriggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeTriggerWithOptions(clusterId, request, headers, runtime);
}

DescribeTriggerResponse Alibabacloud_CS20151215::Client::describeTriggerWithOptions(shared_ptr<string> clusterId,
                                                                                    shared_ptr<DescribeTriggerRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  clusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*query)["Name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    (*query)["Namespace_"] = *request->namespace_;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    (*query)["Type"] = *request->type;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->action)) {
    (*query)["action"] = *request->action;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTrigger"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/[cluster_id]/triggers"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("array"))}
  }));
  return DescribeTriggerResponse(callApi(params, req, runtime));
}

DescribeUserPermissionResponse Alibabacloud_CS20151215::Client::describeUserPermission(shared_ptr<string> uid) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeUserPermissionWithOptions(uid, headers, runtime);
}

DescribeUserPermissionResponse Alibabacloud_CS20151215::Client::describeUserPermissionWithOptions(shared_ptr<string> uid, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  uid = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUserPermission"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/permissions/users/") + string(*uid))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("array"))}
  }));
  return DescribeUserPermissionResponse(callApi(params, req, runtime));
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

DescribeWorkflowsResponse Alibabacloud_CS20151215::Client::describeWorkflows() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeWorkflowsWithOptions(headers, runtime);
}

DescribeWorkflowsResponse Alibabacloud_CS20151215::Client::describeWorkflowsWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeWorkflows"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gs/workflows"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeWorkflowsResponse(callApi(params, req, runtime));
}

EdgeClusterAddEdgeMachineResponse Alibabacloud_CS20151215::Client::edgeClusterAddEdgeMachine(shared_ptr<string> clusterid, shared_ptr<string> edgeMachineid, shared_ptr<EdgeClusterAddEdgeMachineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return edgeClusterAddEdgeMachineWithOptions(clusterid, edgeMachineid, request, headers, runtime);
}

EdgeClusterAddEdgeMachineResponse Alibabacloud_CS20151215::Client::edgeClusterAddEdgeMachineWithOptions(shared_ptr<string> clusterid,
                                                                                                        shared_ptr<string> edgeMachineid,
                                                                                                        shared_ptr<EdgeClusterAddEdgeMachineRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  clusterid = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterid));
  edgeMachineid = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(edgeMachineid));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->expired)) {
    (*body)["expired"] = *request->expired;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodepoolId)) {
    (*body)["nodepool_id"] = *request->nodepoolId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->options)) {
    (*body)["options"] = *request->options;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EdgeClusterAddEdgeMachine"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/[clusterid]/attachedgemachine/[edge_machineid]"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EdgeClusterAddEdgeMachineResponse(callApi(params, req, runtime));
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
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*query)["Name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    (*query)["Namespace_"] = *request->namespace_;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    (*query)["Type"] = *request->type;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->action)) {
    (*query)["action"] = *request->action;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetKubernetesTrigger"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/triggers/") + string(*ClusterId))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("array"))}
  }));
  return GetKubernetesTriggerResponse(callApi(params, req, runtime));
}

GetUpgradeStatusResponse Alibabacloud_CS20151215::Client::getUpgradeStatus(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getUpgradeStatusWithOptions(ClusterId, headers, runtime);
}

GetUpgradeStatusResponse Alibabacloud_CS20151215::Client::getUpgradeStatusWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUpgradeStatus"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/clusters/") + string(*ClusterId) + string("/upgrade/status"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUpgradeStatusResponse(callApi(params, req, runtime));
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
  uid = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Darabonba_Util::Client::toArray<vector<GrantPermissionsRequestBody>>(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GrantPermissions"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/permissions/users/") + string(*uid))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return GrantPermissionsResponse(callApi(params, req, runtime));
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
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Darabonba_Util::Client::toArray<vector<InstallClusterAddonsRequestBody>>(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InstallClusterAddons"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*ClusterId) + string("/components/install"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return InstallClusterAddonsResponse(callApi(params, req, runtime));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    (*query)["next_token"] = *request->nextToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["region_id"] = *request->regionId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIdsShrink)) {
    (*query)["resource_ids"] = *request->resourceIdsShrink;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    (*query)["resource_type"] = *request->resourceType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    (*query)["tags"] = *request->tagsShrink;
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

MigrateClusterResponse Alibabacloud_CS20151215::Client::migrateCluster(shared_ptr<string> clusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return migrateClusterWithOptions(clusterId, headers, runtime);
}

MigrateClusterResponse Alibabacloud_CS20151215::Client::migrateClusterWithOptions(shared_ptr<string> clusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  clusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MigrateCluster"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*clusterId) + string("/migrate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return MigrateClusterResponse(callApi(params, req, runtime));
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
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
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
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableRrsa)) {
    (*body)["enable_rrsa"] = *request->enableRrsa;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ingressDomainRebinding)) {
    (*body)["ingress_domain_rebinding"] = *request->ingressDomainRebinding;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ingressLoadbalancerId)) {
    (*body)["ingress_loadbalancer_id"] = *request->ingressLoadbalancerId;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->instanceDeletionProtection)) {
    (*body)["instance_deletion_protection"] = *request->instanceDeletionProtection;
  }
  if (!Darabonba_Util::Client::isUnset<MaintenanceWindow>(request->maintenanceWindow)) {
    (*body)["maintenance_window"] = *request->maintenanceWindow;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    (*body)["resource_group_id"] = *request->resourceGroupId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyCluster"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/clusters/") + string(*ClusterId))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyClusterResponse(callApi(params, req, runtime));
}

ModifyClusterAddonResponse Alibabacloud_CS20151215::Client::modifyClusterAddon(shared_ptr<string> clusterId, shared_ptr<string> componentId, shared_ptr<ModifyClusterAddonRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyClusterAddonWithOptions(clusterId, componentId, request, headers, runtime);
}

ModifyClusterAddonResponse Alibabacloud_CS20151215::Client::modifyClusterAddonWithOptions(shared_ptr<string> clusterId,
                                                                                          shared_ptr<string> componentId,
                                                                                          shared_ptr<ModifyClusterAddonRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  clusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId));
  componentId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(componentId));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->config)) {
    (*body)["config"] = *request->config;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyClusterAddon"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*clusterId) + string("/components/{componentId}/config"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return ModifyClusterAddonResponse(callApi(params, req, runtime));
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
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ModifyClusterConfigurationRequestCustomizeConfig>>(request->customizeConfig)) {
    (*body)["customize_config"] = *request->customizeConfig;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyClusterConfiguration"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*ClusterId) + string("/configuration"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return ModifyClusterConfigurationResponse(callApi(params, req, runtime));
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
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  NodepoolId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(NodepoolId));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<ModifyClusterNodePoolRequestAutoScaling>(request->autoScaling)) {
    (*body)["auto_scaling"] = *request->autoScaling;
  }
  if (!Darabonba_Util::Client::isUnset<ModifyClusterNodePoolRequestKubernetesConfig>(request->kubernetesConfig)) {
    (*body)["kubernetes_config"] = *request->kubernetesConfig;
  }
  if (!Darabonba_Util::Client::isUnset<ModifyClusterNodePoolRequestManagement>(request->management)) {
    (*body)["management"] = *request->management;
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
  if (!Darabonba_Util::Client::isUnset<bool>(request->updateNodes)) {
    (*body)["update_nodes"] = *request->updateNodes;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyClusterNodePool"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*ClusterId) + string("/nodepools/{NodepoolId}"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyClusterNodePoolResponse(callApi(params, req, runtime));
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
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Darabonba_Util::Client::toArray<vector<Tag>>(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyClusterTags"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*ClusterId) + string("/tags"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return ModifyClusterTagsResponse(callApi(params, req, runtime));
}

ModifyPolicyInstanceResponse Alibabacloud_CS20151215::Client::modifyPolicyInstance(shared_ptr<string> clusterId, shared_ptr<string> policyName, shared_ptr<ModifyPolicyInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyPolicyInstanceWithOptions(clusterId, policyName, request, headers, runtime);
}

ModifyPolicyInstanceResponse Alibabacloud_CS20151215::Client::modifyPolicyInstanceWithOptions(shared_ptr<string> clusterId,
                                                                                              shared_ptr<string> policyName,
                                                                                              shared_ptr<ModifyPolicyInstanceRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  clusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterId));
  policyName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(policyName));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->action)) {
    (*body)["action"] = *request->action;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    (*body)["instance_name"] = *request->instanceName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    (*body)["namespace_"] = *request->namespace_;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->parameters)) {
    (*body)["parameters"] = *request->parameters;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyPolicyInstance"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*clusterId) + string("/policies/{policyName}"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyPolicyInstanceResponse(callApi(params, req, runtime));
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

PauseClusterUpgradeResponse Alibabacloud_CS20151215::Client::pauseClusterUpgrade(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return pauseClusterUpgradeWithOptions(ClusterId, headers, runtime);
}

PauseClusterUpgradeResponse Alibabacloud_CS20151215::Client::pauseClusterUpgradeWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PauseClusterUpgrade"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/clusters/") + string(*ClusterId) + string("/upgrade/pause"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return PauseClusterUpgradeResponse(callApi(params, req, runtime));
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
  clusterid = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterid));
  componentid = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(componentid));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PauseComponentUpgrade"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*clusterid) + string("/components/{componentid}/pause"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return PauseComponentUpgradeResponse(callApi(params, req, runtime));
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
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
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
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveClusterNodes"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/clusters/") + string(*ClusterId) + string("/nodes/remove"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return RemoveClusterNodesResponse(callApi(params, req, runtime));
}

RemoveWorkflowResponse Alibabacloud_CS20151215::Client::removeWorkflow(shared_ptr<string> workflowName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeWorkflowWithOptions(workflowName, headers, runtime);
}

RemoveWorkflowResponse Alibabacloud_CS20151215::Client::removeWorkflowWithOptions(shared_ptr<string> workflowName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  workflowName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workflowName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveWorkflow"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gs/workflow/") + string(*workflowName))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return RemoveWorkflowResponse(callApi(params, req, runtime));
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
  clusterid = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterid));
  componentid = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(componentid));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResumeComponentUpgrade"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*clusterid) + string("/components/{componentid}/resume"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return ResumeComponentUpgradeResponse(callApi(params, req, runtime));
}

ResumeUpgradeClusterResponse Alibabacloud_CS20151215::Client::resumeUpgradeCluster(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return resumeUpgradeClusterWithOptions(ClusterId, headers, runtime);
}

ResumeUpgradeClusterResponse Alibabacloud_CS20151215::Client::resumeUpgradeClusterWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResumeUpgradeCluster"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/clusters/") + string(*ClusterId) + string("/upgrade/resume"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return ResumeUpgradeClusterResponse(callApi(params, req, runtime));
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
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
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
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ScaleCluster"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*ClusterId))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ScaleClusterResponse(callApi(params, req, runtime));
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
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  NodepoolId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(NodepoolId));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->count)) {
    (*body)["count"] = *request->count;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ScaleClusterNodePool"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*ClusterId) + string("/nodepools/{NodepoolId}"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ScaleClusterNodePoolResponse(callApi(params, req, runtime));
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
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    (*body)["image_id"] = *request->imageId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPair)) {
    (*body)["key_pair"] = *request->keyPair;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginPassword)) {
    (*body)["login_password"] = *request->loginPassword;
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
  if (!Darabonba_Util::Client::isUnset<vector<Taint>>(request->taints)) {
    (*body)["taints"] = *request->taints;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    (*body)["user_data"] = *request->userData;
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
  if (!Darabonba_Util::Client::isUnset<vector<ScaleOutClusterRequestWorkerDataDisks>>(request->workerDataDisks)) {
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
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ScaleOutCluster"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/clusters/") + string(*ClusterId))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ScaleOutClusterResponse(callApi(params, req, runtime));
}

StartWorkflowResponse Alibabacloud_CS20151215::Client::startWorkflow(shared_ptr<StartWorkflowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startWorkflowWithOptions(request, headers, runtime);
}

StartWorkflowResponse Alibabacloud_CS20151215::Client::startWorkflowWithOptions(shared_ptr<StartWorkflowRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mappingBamOutFilename)) {
    (*body)["mapping_bam_out_filename"] = *request->mappingBamOutFilename;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mappingBamOutPath)) {
    (*body)["mapping_bam_out_path"] = *request->mappingBamOutPath;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mappingBucketName)) {
    (*body)["mapping_bucket_name"] = *request->mappingBucketName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mappingFastqFirstFilename)) {
    (*body)["mapping_fastq_first_filename"] = *request->mappingFastqFirstFilename;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mappingFastqPath)) {
    (*body)["mapping_fastq_path"] = *request->mappingFastqPath;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mappingFastqSecondFilename)) {
    (*body)["mapping_fastq_second_filename"] = *request->mappingFastqSecondFilename;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mappingIsMarkDup)) {
    (*body)["mapping_is_mark_dup"] = *request->mappingIsMarkDup;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mappingOssRegion)) {
    (*body)["mapping_oss_region"] = *request->mappingOssRegion;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mappingReferencePath)) {
    (*body)["mapping_reference_path"] = *request->mappingReferencePath;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->service)) {
    (*body)["service"] = *request->service;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wgsBucketName)) {
    (*body)["wgs_bucket_name"] = *request->wgsBucketName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wgsFastqFirstFilename)) {
    (*body)["wgs_fastq_first_filename"] = *request->wgsFastqFirstFilename;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wgsFastqPath)) {
    (*body)["wgs_fastq_path"] = *request->wgsFastqPath;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wgsFastqSecondFilename)) {
    (*body)["wgs_fastq_second_filename"] = *request->wgsFastqSecondFilename;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wgsOssRegion)) {
    (*body)["wgs_oss_region"] = *request->wgsOssRegion;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wgsReferencePath)) {
    (*body)["wgs_reference_path"] = *request->wgsReferencePath;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wgsVcfOutFilename)) {
    (*body)["wgs_vcf_out_filename"] = *request->wgsVcfOutFilename;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wgsVcfOutPath)) {
    (*body)["wgs_vcf_out_path"] = *request->wgsVcfOutPath;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workflowType)) {
    (*body)["workflow_type"] = *request->workflowType;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartWorkflow"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gs/workflow"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartWorkflowResponse(callApi(params, req, runtime));
}

TagResourcesResponse Alibabacloud_CS20151215::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return tagResourcesWithOptions(request, headers, runtime);
}

TagResourcesResponse Alibabacloud_CS20151215::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*body)["region_id"] = *request->regionId;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceIds)) {
    (*body)["resource_ids"] = *request->resourceIds;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    (*body)["resource_type"] = *request->resourceType;
  }
  if (!Darabonba_Util::Client::isUnset<vector<Tag>>(request->tags)) {
    (*body)["tags"] = *request->tags;
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
    {"bodyType", boost::any(string("none"))}
  }));
  return TagResourcesResponse(callApi(params, req, runtime));
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
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Darabonba_Util::Client::toArray<vector<UnInstallClusterAddonsRequestAddons>>(request->addons))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnInstallClusterAddons"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*ClusterId) + string("/components/uninstall"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UnInstallClusterAddonsResponse(callApi(params, req, runtime));
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
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/tags"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UntagResourcesResponse(callApi(params, req, runtime));
}

UpdateK8sClusterUserConfigExpireResponse Alibabacloud_CS20151215::Client::updateK8sClusterUserConfigExpire(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateK8sClusterUserConfigExpireWithOptions(ClusterId, headers, runtime);
}

UpdateK8sClusterUserConfigExpireResponse Alibabacloud_CS20151215::Client::updateK8sClusterUserConfigExpireWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateK8sClusterUserConfigExpire"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/k8s/") + string(*ClusterId) + string("/user_config/expire"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UpdateK8sClusterUserConfigExpireResponse(callApi(params, req, runtime));
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
  TemplateId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TemplateId));
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
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTemplate"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/templates/") + string(*TemplateId))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UpdateTemplateResponse(callApi(params, req, runtime));
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
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
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
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeCluster"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/clusters/") + string(*ClusterId) + string("/upgrade"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UpgradeClusterResponse(callApi(params, req, runtime));
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
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Darabonba_Util::Client::toArray<vector<UpgradeClusterAddonsRequestBody>>(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeClusterAddons"))},
    {"version", boost::any(string("2015-12-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/clusters/") + string(*ClusterId) + string("/components/upgrade"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UpgradeClusterAddonsResponse(callApi(params, req, runtime));
}

