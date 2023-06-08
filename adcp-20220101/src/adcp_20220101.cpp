// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/adcp_20220101.hpp>
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

using namespace Alibabacloud_Adcp20220101;

Alibabacloud_Adcp20220101::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _signatureAlgorithm = make_shared<string>("v2");
  _endpointRule = make_shared<string>("central");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-beijing", "adcp.cn-beijing.aliyuncs.com"},
    {"cn-zhangjiakou", "adcp.cn-zhangjiakou.aliyuncs.com"},
    {"cn-hangzhou", "adcp.cn-hangzhou.aliyuncs.com"},
    {"cn-shanghai", "adcp.cn-shanghai.aliyuncs.com"},
    {"cn-shenzhen", "adcp.cn-shenzhen.aliyuncs.com"},
    {"cn-heyuan", "adcp.cn-heyuan.aliyuncs.com"},
    {"cn-hongkong", "adcp.cn-hongkong.aliyuncs.com"},
    {"ap-northeast-1", "adcp.ap-northeast-1.aliyuncs.com"},
    {"ap-southeast-1", "adcp.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-5", "adcp.ap-southeast-5.aliyuncs.com"},
    {"ap-south-1", "adcp.ap-south-1.aliyuncs.com"},
    {"ap-southeast-2", "adcp.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-3", "adcp.ap-southeast-3.aliyuncs.com"},
    {"cn-chengdu", "adcp-vpc.cn-chengdu.aliyuncs.com"},
    {"cn-huhehaote", "adcp.cn-huhehaote.aliyuncs.com"},
    {"cn-qingdao", "adcp.cn-qingdao.aliyuncs.com"},
    {"cn-shanghai-finance-1", "adcp-vpc.cn-shanghai-finance-1.aliyuncs.com"},
    {"cn-wulanchabu", "adcp.cn-wulanchabu.aliyuncs.com"},
    {"eu-central-1", "adcp.eu-central-1.aliyuncs.com"},
    {"eu-west-1", "adcp-vpc.eu-west-1.aliyuncs.com"},
    {"me-east-1", "adcp.me-east-1.aliyuncs.com"},
    {"us-east-1", "adcp.us-east-1.aliyuncs.com"},
    {"us-west-1", "adcp.us-west-1.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("adcp"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Adcp20220101::Client::getEndpoint(shared_ptr<string> productId,
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

AttachClusterToHubResponse Alibabacloud_Adcp20220101::Client::attachClusterToHubWithOptions(shared_ptr<AttachClusterToHubRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->attachToMesh)) {
    query->insert(pair<string, bool>("AttachToMesh", *request->attachToMesh));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterIds)) {
    body->insert(pair<string, string>("ClusterIds", *request->clusterIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachClusterToHub"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachClusterToHubResponse(callApi(params, req, runtime));
}

AttachClusterToHubResponse Alibabacloud_Adcp20220101::Client::attachClusterToHub(shared_ptr<AttachClusterToHubRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachClusterToHubWithOptions(request, runtime);
}

CreateHubClusterResponse Alibabacloud_Adcp20220101::Client::createHubClusterWithOptions(shared_ptr<CreateHubClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->apiServerPublicEip)) {
    body->insert(pair<string, bool>("ApiServerPublicEip", *request->apiServerPublicEip));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->argoServerEnabled)) {
    body->insert(pair<string, bool>("ArgoServerEnabled", *request->argoServerEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->auditLogEnabled)) {
    body->insert(pair<string, bool>("AuditLogEnabled", *request->auditLogEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isEnterpriseSecurityGroup)) {
    body->insert(pair<string, bool>("IsEnterpriseSecurityGroup", *request->isEnterpriseSecurityGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->priceLimit)) {
    body->insert(pair<string, string>("PriceLimit", *request->priceLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->profile)) {
    body->insert(pair<string, string>("Profile", *request->profile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitches)) {
    body->insert(pair<string, string>("VSwitches", *request->vSwitches));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    body->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workflowScheduleMode)) {
    body->insert(pair<string, string>("WorkflowScheduleMode", *request->workflowScheduleMode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateHubCluster"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateHubClusterResponse(callApi(params, req, runtime));
}

CreateHubClusterResponse Alibabacloud_Adcp20220101::Client::createHubCluster(shared_ptr<CreateHubClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createHubClusterWithOptions(request, runtime);
}

DeleteHubClusterResponse Alibabacloud_Adcp20220101::Client::deleteHubClusterWithOptions(shared_ptr<DeleteHubClusterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteHubClusterShrinkRequest> request = make_shared<DeleteHubClusterShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->retainResources)) {
    request->retainResourcesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->retainResources, make_shared<string>("RetainResources"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->force)) {
    query->insert(pair<string, bool>("Force", *request->force));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->retainResourcesShrink)) {
    query->insert(pair<string, string>("RetainResources", *request->retainResourcesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteHubCluster"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteHubClusterResponse(callApi(params, req, runtime));
}

DeleteHubClusterResponse Alibabacloud_Adcp20220101::Client::deleteHubCluster(shared_ptr<DeleteHubClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteHubClusterWithOptions(request, runtime);
}

DeletePolicyInstanceResponse Alibabacloud_Adcp20220101::Client::deletePolicyInstanceWithOptions(shared_ptr<DeletePolicyInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeletePolicyInstanceShrinkRequest> request = make_shared<DeletePolicyInstanceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->clusterIds)) {
    request->clusterIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->clusterIds, make_shared<string>("ClusterIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterIdsShrink)) {
    query->insert(pair<string, string>("ClusterIds", *request->clusterIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyName)) {
    query->insert(pair<string, string>("PolicyName", *request->policyName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePolicyInstance"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePolicyInstanceResponse(callApi(params, req, runtime));
}

DeletePolicyInstanceResponse Alibabacloud_Adcp20220101::Client::deletePolicyInstance(shared_ptr<DeletePolicyInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePolicyInstanceWithOptions(request, runtime);
}

DeleteUserPermissionResponse Alibabacloud_Adcp20220101::Client::deleteUserPermissionWithOptions(shared_ptr<DeleteUserPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUserPermission"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteUserPermissionResponse(callApi(params, req, runtime));
}

DeleteUserPermissionResponse Alibabacloud_Adcp20220101::Client::deleteUserPermission(shared_ptr<DeleteUserPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUserPermissionWithOptions(request, runtime);
}

DeployPolicyInstanceResponse Alibabacloud_Adcp20220101::Client::deployPolicyInstanceWithOptions(shared_ptr<DeployPolicyInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeployPolicyInstanceShrinkRequest> request = make_shared<DeployPolicyInstanceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->clusterIds)) {
    request->clusterIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->clusterIds, make_shared<string>("ClusterIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->namespaces)) {
    request->namespacesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->namespaces, make_shared<string>("Namespaces"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterIdsShrink)) {
    query->insert(pair<string, string>("ClusterIds", *request->clusterIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespacesShrink)) {
    query->insert(pair<string, string>("Namespaces", *request->namespacesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyAction)) {
    query->insert(pair<string, string>("PolicyAction", *request->policyAction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyName)) {
    query->insert(pair<string, string>("PolicyName", *request->policyName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeployPolicyInstance"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeployPolicyInstanceResponse(callApi(params, req, runtime));
}

DeployPolicyInstanceResponse Alibabacloud_Adcp20220101::Client::deployPolicyInstance(shared_ptr<DeployPolicyInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deployPolicyInstanceWithOptions(request, runtime);
}

DescribeHubClusterDetailsResponse Alibabacloud_Adcp20220101::Client::describeHubClusterDetailsWithOptions(shared_ptr<DescribeHubClusterDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHubClusterDetails"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHubClusterDetailsResponse(callApi(params, req, runtime));
}

DescribeHubClusterDetailsResponse Alibabacloud_Adcp20220101::Client::describeHubClusterDetails(shared_ptr<DescribeHubClusterDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHubClusterDetailsWithOptions(request, runtime);
}

DescribeHubClusterKubeconfigResponse Alibabacloud_Adcp20220101::Client::describeHubClusterKubeconfigWithOptions(shared_ptr<DescribeHubClusterKubeconfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->privateIpAddress)) {
    query->insert(pair<string, bool>("PrivateIpAddress", *request->privateIpAddress));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHubClusterKubeconfig"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHubClusterKubeconfigResponse(callApi(params, req, runtime));
}

DescribeHubClusterKubeconfigResponse Alibabacloud_Adcp20220101::Client::describeHubClusterKubeconfig(shared_ptr<DescribeHubClusterKubeconfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHubClusterKubeconfigWithOptions(request, runtime);
}

DescribeHubClusterLogsResponse Alibabacloud_Adcp20220101::Client::describeHubClusterLogsWithOptions(shared_ptr<DescribeHubClusterLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHubClusterLogs"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHubClusterLogsResponse(callApi(params, req, runtime));
}

DescribeHubClusterLogsResponse Alibabacloud_Adcp20220101::Client::describeHubClusterLogs(shared_ptr<DescribeHubClusterLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHubClusterLogsWithOptions(request, runtime);
}

DescribeHubClustersResponse Alibabacloud_Adcp20220101::Client::describeHubClustersWithOptions(shared_ptr<DescribeHubClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->profile)) {
    query->insert(pair<string, string>("Profile", *request->profile));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHubClusters"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHubClustersResponse(callApi(params, req, runtime));
}

DescribeHubClustersResponse Alibabacloud_Adcp20220101::Client::describeHubClusters(shared_ptr<DescribeHubClustersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHubClustersWithOptions(request, runtime);
}

DescribeManagedClustersResponse Alibabacloud_Adcp20220101::Client::describeManagedClustersWithOptions(shared_ptr<DescribeManagedClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeManagedClusters"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeManagedClustersResponse(callApi(params, req, runtime));
}

DescribeManagedClustersResponse Alibabacloud_Adcp20220101::Client::describeManagedClusters(shared_ptr<DescribeManagedClustersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeManagedClustersWithOptions(request, runtime);
}

DescribePoliciesResponse Alibabacloud_Adcp20220101::Client::describePoliciesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePolicies"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePoliciesResponse(callApi(params, req, runtime));
}

DescribePoliciesResponse Alibabacloud_Adcp20220101::Client::describePolicies() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePoliciesWithOptions(runtime);
}

DescribePolicyDetailsResponse Alibabacloud_Adcp20220101::Client::describePolicyDetailsWithOptions(shared_ptr<DescribePolicyDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->policyName)) {
    query->insert(pair<string, string>("PolicyName", *request->policyName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePolicyDetails"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePolicyDetailsResponse(callApi(params, req, runtime));
}

DescribePolicyDetailsResponse Alibabacloud_Adcp20220101::Client::describePolicyDetails(shared_ptr<DescribePolicyDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePolicyDetailsWithOptions(request, runtime);
}

DescribePolicyGovernanceInClusterResponse Alibabacloud_Adcp20220101::Client::describePolicyGovernanceInClusterWithOptions(shared_ptr<DescribePolicyGovernanceInClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePolicyGovernanceInCluster"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePolicyGovernanceInClusterResponse(callApi(params, req, runtime));
}

DescribePolicyGovernanceInClusterResponse Alibabacloud_Adcp20220101::Client::describePolicyGovernanceInCluster(shared_ptr<DescribePolicyGovernanceInClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePolicyGovernanceInClusterWithOptions(request, runtime);
}

DescribePolicyInstancesResponse Alibabacloud_Adcp20220101::Client::describePolicyInstancesWithOptions(shared_ptr<DescribePolicyInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyName)) {
    query->insert(pair<string, string>("PolicyName", *request->policyName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePolicyInstances"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePolicyInstancesResponse(callApi(params, req, runtime));
}

DescribePolicyInstancesResponse Alibabacloud_Adcp20220101::Client::describePolicyInstances(shared_ptr<DescribePolicyInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePolicyInstancesWithOptions(request, runtime);
}

DescribePolicyInstancesStatusResponse Alibabacloud_Adcp20220101::Client::describePolicyInstancesStatusWithOptions(shared_ptr<DescribePolicyInstancesStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePolicyInstancesStatus"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePolicyInstancesStatusResponse(callApi(params, req, runtime));
}

DescribePolicyInstancesStatusResponse Alibabacloud_Adcp20220101::Client::describePolicyInstancesStatus(shared_ptr<DescribePolicyInstancesStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePolicyInstancesStatusWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Adcp20220101::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRegionsResponse(callApi(params, req, runtime));
}

DescribeRegionsResponse Alibabacloud_Adcp20220101::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeUserPermissionsResponse Alibabacloud_Adcp20220101::Client::describeUserPermissionsWithOptions(shared_ptr<DescribeUserPermissionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUserPermissions"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUserPermissionsResponse(callApi(params, req, runtime));
}

DescribeUserPermissionsResponse Alibabacloud_Adcp20220101::Client::describeUserPermissions(shared_ptr<DescribeUserPermissionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserPermissionsWithOptions(request, runtime);
}

DetachClusterFromHubResponse Alibabacloud_Adcp20220101::Client::detachClusterFromHubWithOptions(shared_ptr<DetachClusterFromHubRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->detachFromMesh)) {
    query->insert(pair<string, bool>("DetachFromMesh", *request->detachFromMesh));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterIds)) {
    body->insert(pair<string, string>("ClusterIds", *request->clusterIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachClusterFromHub"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachClusterFromHubResponse(callApi(params, req, runtime));
}

DetachClusterFromHubResponse Alibabacloud_Adcp20220101::Client::detachClusterFromHub(shared_ptr<DetachClusterFromHubRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachClusterFromHubWithOptions(request, runtime);
}

GrantUserPermissionResponse Alibabacloud_Adcp20220101::Client::grantUserPermissionWithOptions(shared_ptr<GrantUserPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isRamRole)) {
    query->insert(pair<string, bool>("IsRamRole", *request->isRamRole));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleName)) {
    query->insert(pair<string, string>("RoleName", *request->roleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleType)) {
    query->insert(pair<string, string>("RoleType", *request->roleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GrantUserPermission"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GrantUserPermissionResponse(callApi(params, req, runtime));
}

GrantUserPermissionResponse Alibabacloud_Adcp20220101::Client::grantUserPermission(shared_ptr<GrantUserPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return grantUserPermissionWithOptions(request, runtime);
}

GrantUserPermissionsResponse Alibabacloud_Adcp20220101::Client::grantUserPermissionsWithOptions(shared_ptr<GrantUserPermissionsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GrantUserPermissionsShrinkRequest> request = make_shared<GrantUserPermissionsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<GrantUserPermissionsRequestPermissions>>(tmpReq->permissions)) {
    request->permissionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->permissions, make_shared<string>("Permissions"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->permissionsShrink)) {
    query->insert(pair<string, string>("Permissions", *request->permissionsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GrantUserPermissions"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GrantUserPermissionsResponse(callApi(params, req, runtime));
}

GrantUserPermissionsResponse Alibabacloud_Adcp20220101::Client::grantUserPermissions(shared_ptr<GrantUserPermissionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return grantUserPermissionsWithOptions(request, runtime);
}

UpdateHubClusterFeatureResponse Alibabacloud_Adcp20220101::Client::updateHubClusterFeatureWithOptions(shared_ptr<UpdateHubClusterFeatureRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateHubClusterFeatureShrinkRequest> request = make_shared<UpdateHubClusterFeatureShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->vSwitches)) {
    request->vSwitchesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->vSwitches, make_shared<string>("VSwitches"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiServerEipId)) {
    query->insert(pair<string, string>("ApiServerEipId", *request->apiServerEipId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->argoCDEnabled)) {
    query->insert(pair<string, bool>("ArgoCDEnabled", *request->argoCDEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->argoServerEnabled)) {
    query->insert(pair<string, bool>("ArgoServerEnabled", *request->argoServerEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->armsEnabled)) {
    query->insert(pair<string, bool>("ArmsEnabled", *request->armsEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->auditLogEnabled)) {
    query->insert(pair<string, bool>("AuditLogEnabled", *request->auditLogEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->deletionProtection)) {
    query->insert(pair<string, bool>("DeletionProtection", *request->deletionProtection));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableMesh)) {
    query->insert(pair<string, bool>("EnableMesh", *request->enableMesh));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->priceLimit)) {
    query->insert(pair<string, string>("PriceLimit", *request->priceLimit));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->publicApiServerEnabled)) {
    query->insert(pair<string, bool>("PublicApiServerEnabled", *request->publicApiServerEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchesShrink)) {
    query->insert(pair<string, string>("VSwitches", *request->vSwitchesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workflowScheduleMode)) {
    query->insert(pair<string, string>("WorkflowScheduleMode", *request->workflowScheduleMode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateHubClusterFeature"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateHubClusterFeatureResponse(callApi(params, req, runtime));
}

UpdateHubClusterFeatureResponse Alibabacloud_Adcp20220101::Client::updateHubClusterFeature(shared_ptr<UpdateHubClusterFeatureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateHubClusterFeatureWithOptions(request, runtime);
}

UpdateUserPermissionResponse Alibabacloud_Adcp20220101::Client::updateUserPermissionWithOptions(shared_ptr<UpdateUserPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleName)) {
    query->insert(pair<string, string>("RoleName", *request->roleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleType)) {
    query->insert(pair<string, string>("RoleType", *request->roleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateUserPermission"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateUserPermissionResponse(callApi(params, req, runtime));
}

UpdateUserPermissionResponse Alibabacloud_Adcp20220101::Client::updateUserPermission(shared_ptr<UpdateUserPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateUserPermissionWithOptions(request, runtime);
}

