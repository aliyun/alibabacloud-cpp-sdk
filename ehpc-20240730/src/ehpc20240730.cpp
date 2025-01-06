// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ehpc20240730.hpp>
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

using namespace Alibabacloud_EHPC20240730;

Alibabacloud_EHPC20240730::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("ehpc"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_EHPC20240730::Client::getEndpoint(shared_ptr<string> productId,
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

AttachSharedStoragesResponse Alibabacloud_EHPC20240730::Client::attachSharedStoragesWithOptions(shared_ptr<AttachSharedStoragesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AttachSharedStoragesShrinkRequest> request = make_shared<AttachSharedStoragesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<AttachSharedStoragesRequestSharedStorages>>(tmpReq->sharedStorages)) {
    request->sharedStoragesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sharedStorages, make_shared<string>("SharedStorages"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sharedStoragesShrink)) {
    query->insert(pair<string, string>("SharedStorages", *request->sharedStoragesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachSharedStorages"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachSharedStoragesResponse(callApi(params, req, runtime));
}

AttachSharedStoragesResponse Alibabacloud_EHPC20240730::Client::attachSharedStorages(shared_ptr<AttachSharedStoragesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachSharedStoragesWithOptions(request, runtime);
}

CreateClusterResponse Alibabacloud_EHPC20240730::Client::createClusterWithOptions(shared_ptr<CreateClusterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateClusterShrinkRequest> request = make_shared<CreateClusterShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateClusterRequestAdditionalPackages>>(tmpReq->additionalPackages)) {
    request->additionalPackagesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->additionalPackages, make_shared<string>("AdditionalPackages"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateClusterRequestAddons>>(tmpReq->addons)) {
    request->addonsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->addons, make_shared<string>("Addons"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateClusterRequestClusterCredentials>(tmpReq->clusterCredentials)) {
    request->clusterCredentialsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->clusterCredentials, make_shared<string>("ClusterCredentials"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateClusterRequestClusterCustomConfiguration>(tmpReq->clusterCustomConfiguration)) {
    request->clusterCustomConfigurationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->clusterCustomConfiguration, make_shared<string>("ClusterCustomConfiguration"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateClusterRequestManager>(tmpReq->manager)) {
    request->managerShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->manager, make_shared<string>("Manager"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<QueueTemplate>>(tmpReq->queues)) {
    request->queuesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->queues, make_shared<string>("Queues"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SharedStorageTemplate>>(tmpReq->sharedStorages)) {
    request->sharedStoragesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sharedStorages, make_shared<string>("SharedStorages"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateClusterRequestTags>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->additionalPackagesShrink)) {
    query->insert(pair<string, string>("AdditionalPackages", *request->additionalPackagesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->addonsShrink)) {
    query->insert(pair<string, string>("Addons", *request->addonsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientVersion)) {
    query->insert(pair<string, string>("ClientVersion", *request->clientVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterCategory)) {
    query->insert(pair<string, string>("ClusterCategory", *request->clusterCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterCredentialsShrink)) {
    query->insert(pair<string, string>("ClusterCredentials", *request->clusterCredentialsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterCustomConfigurationShrink)) {
    query->insert(pair<string, string>("ClusterCustomConfiguration", *request->clusterCustomConfigurationShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterDescription)) {
    query->insert(pair<string, string>("ClusterDescription", *request->clusterDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterMode)) {
    query->insert(pair<string, string>("ClusterMode", *request->clusterMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterName)) {
    query->insert(pair<string, string>("ClusterName", *request->clusterName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterVSwitchId)) {
    query->insert(pair<string, string>("ClusterVSwitchId", *request->clusterVSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterVpcId)) {
    query->insert(pair<string, string>("ClusterVpcId", *request->clusterVpcId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->deletionProtection)) {
    query->insert(pair<string, bool>("DeletionProtection", *request->deletionProtection));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isEnterpriseSecurityGroup)) {
    query->insert(pair<string, bool>("IsEnterpriseSecurityGroup", *request->isEnterpriseSecurityGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->managerShrink)) {
    query->insert(pair<string, string>("Manager", *request->managerShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxCoreCount)) {
    query->insert(pair<string, long>("MaxCoreCount", *request->maxCoreCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxCount)) {
    query->insert(pair<string, long>("MaxCount", *request->maxCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queuesShrink)) {
    query->insert(pair<string, string>("Queues", *request->queuesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sharedStoragesShrink)) {
    query->insert(pair<string, string>("SharedStorages", *request->sharedStoragesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCluster"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateClusterResponse(callApi(params, req, runtime));
}

CreateClusterResponse Alibabacloud_EHPC20240730::Client::createCluster(shared_ptr<CreateClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createClusterWithOptions(request, runtime);
}

CreateJobResponse Alibabacloud_EHPC20240730::Client::createJobWithOptions(shared_ptr<CreateJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateJobShrinkRequest> request = make_shared<CreateJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateJobRequestJobSpec>(tmpReq->jobSpec)) {
    request->jobSpecShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->jobSpec, make_shared<string>("JobSpec"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobName)) {
    query->insert(pair<string, string>("JobName", *request->jobName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobSpecShrink)) {
    query->insert(pair<string, string>("JobSpec", *request->jobSpecShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateJob"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateJobResponse(callApi(params, req, runtime));
}

CreateJobResponse Alibabacloud_EHPC20240730::Client::createJob(shared_ptr<CreateJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createJobWithOptions(request, runtime);
}

CreateNodesResponse Alibabacloud_EHPC20240730::Client::createNodesWithOptions(shared_ptr<CreateNodesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateNodesShrinkRequest> request = make_shared<CreateNodesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<NodeTemplate>(tmpReq->computeNode)) {
    request->computeNodeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->computeNode, make_shared<string>("ComputeNode"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->computeNodeShrink)) {
    query->insert(pair<string, string>("ComputeNode", *request->computeNodeShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->count)) {
    query->insert(pair<string, long>("Count", *request->count));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deploymentSetId)) {
    query->insert(pair<string, string>("DeploymentSetId", *request->deploymentSetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->HPCInterConnect)) {
    query->insert(pair<string, string>("HPCInterConnect", *request->HPCInterConnect));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hostnamePrefix)) {
    query->insert(pair<string, string>("HostnamePrefix", *request->hostnamePrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hostnameSuffix)) {
    query->insert(pair<string, string>("HostnameSuffix", *request->hostnameSuffix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keepAlive)) {
    query->insert(pair<string, string>("KeepAlive", *request->keepAlive));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queueName)) {
    query->insert(pair<string, string>("QueueName", *request->queueName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ramRole)) {
    query->insert(pair<string, string>("RamRole", *request->ramRole));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateNodes"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateNodesResponse(callApi(params, req, runtime));
}

CreateNodesResponse Alibabacloud_EHPC20240730::Client::createNodes(shared_ptr<CreateNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createNodesWithOptions(request, runtime);
}

CreateQueueResponse Alibabacloud_EHPC20240730::Client::createQueueWithOptions(shared_ptr<CreateQueueRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateQueueShrinkRequest> request = make_shared<CreateQueueShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<QueueTemplate>(tmpReq->queue)) {
    request->queueShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->queue, make_shared<string>("Queue"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queueShrink)) {
    query->insert(pair<string, string>("Queue", *request->queueShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateQueue"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateQueueResponse(callApi(params, req, runtime));
}

CreateQueueResponse Alibabacloud_EHPC20240730::Client::createQueue(shared_ptr<CreateQueueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createQueueWithOptions(request, runtime);
}

CreateUsersResponse Alibabacloud_EHPC20240730::Client::createUsersWithOptions(shared_ptr<CreateUsersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateUsersShrinkRequest> request = make_shared<CreateUsersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateUsersRequestUser>>(tmpReq->user)) {
    request->userShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->user, make_shared<string>("User"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userShrink)) {
    query->insert(pair<string, string>("User", *request->userShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateUsers"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateUsersResponse(callApi(params, req, runtime));
}

CreateUsersResponse Alibabacloud_EHPC20240730::Client::createUsers(shared_ptr<CreateUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUsersWithOptions(request, runtime);
}

DeleteClusterResponse Alibabacloud_EHPC20240730::Client::deleteClusterWithOptions(shared_ptr<DeleteClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCluster"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteClusterResponse(callApi(params, req, runtime));
}

DeleteClusterResponse Alibabacloud_EHPC20240730::Client::deleteCluster(shared_ptr<DeleteClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteClusterWithOptions(request, runtime);
}

DeleteNodesResponse Alibabacloud_EHPC20240730::Client::deleteNodesWithOptions(shared_ptr<DeleteNodesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteNodesShrinkRequest> request = make_shared<DeleteNodesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceIds)) {
    request->instanceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceIds, make_shared<string>("InstanceIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIdsShrink)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteNodes"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteNodesResponse(callApi(params, req, runtime));
}

DeleteNodesResponse Alibabacloud_EHPC20240730::Client::deleteNodes(shared_ptr<DeleteNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteNodesWithOptions(request, runtime);
}

DeleteQueuesResponse Alibabacloud_EHPC20240730::Client::deleteQueuesWithOptions(shared_ptr<DeleteQueuesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteQueuesShrinkRequest> request = make_shared<DeleteQueuesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->queueNames)) {
    request->queueNamesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->queueNames, make_shared<string>("QueueNames"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queueNamesShrink)) {
    query->insert(pair<string, string>("QueueNames", *request->queueNamesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteQueues"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteQueuesResponse(callApi(params, req, runtime));
}

DeleteQueuesResponse Alibabacloud_EHPC20240730::Client::deleteQueues(shared_ptr<DeleteQueuesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteQueuesWithOptions(request, runtime);
}

DeleteUsersResponse Alibabacloud_EHPC20240730::Client::deleteUsersWithOptions(shared_ptr<DeleteUsersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteUsersShrinkRequest> request = make_shared<DeleteUsersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<DeleteUsersRequestUser>>(tmpReq->user)) {
    request->userShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->user, make_shared<string>("User"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUsers"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteUsersResponse(callApi(params, req, runtime));
}

DeleteUsersResponse Alibabacloud_EHPC20240730::Client::deleteUsers(shared_ptr<DeleteUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUsersWithOptions(request, runtime);
}

DescribeAddonTemplateResponse Alibabacloud_EHPC20240730::Client::describeAddonTemplateWithOptions(shared_ptr<DescribeAddonTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addonName)) {
    query->insert(pair<string, string>("AddonName", *request->addonName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->addonVersion)) {
    query->insert(pair<string, string>("AddonVersion", *request->addonVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    query->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAddonTemplate"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAddonTemplateResponse(callApi(params, req, runtime));
}

DescribeAddonTemplateResponse Alibabacloud_EHPC20240730::Client::describeAddonTemplate(shared_ptr<DescribeAddonTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAddonTemplateWithOptions(request, runtime);
}

DetachSharedStoragesResponse Alibabacloud_EHPC20240730::Client::detachSharedStoragesWithOptions(shared_ptr<DetachSharedStoragesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DetachSharedStoragesShrinkRequest> request = make_shared<DetachSharedStoragesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<DetachSharedStoragesRequestSharedStorages>>(tmpReq->sharedStorages)) {
    request->sharedStoragesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sharedStorages, make_shared<string>("SharedStorages"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sharedStoragesShrink)) {
    query->insert(pair<string, string>("SharedStorages", *request->sharedStoragesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachSharedStorages"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachSharedStoragesResponse(callApi(params, req, runtime));
}

DetachSharedStoragesResponse Alibabacloud_EHPC20240730::Client::detachSharedStorages(shared_ptr<DetachSharedStoragesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachSharedStoragesWithOptions(request, runtime);
}

GetAddonResponse Alibabacloud_EHPC20240730::Client::getAddonWithOptions(shared_ptr<GetAddonRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addonId)) {
    query->insert(pair<string, string>("AddonId", *request->addonId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAddon"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAddonResponse(callApi(params, req, runtime));
}

GetAddonResponse Alibabacloud_EHPC20240730::Client::getAddon(shared_ptr<GetAddonRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAddonWithOptions(request, runtime);
}

GetClusterResponse Alibabacloud_EHPC20240730::Client::getClusterWithOptions(shared_ptr<GetClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCluster"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetClusterResponse(callApi(params, req, runtime));
}

GetClusterResponse Alibabacloud_EHPC20240730::Client::getCluster(shared_ptr<GetClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getClusterWithOptions(request, runtime);
}

GetCommonLogDetailResponse Alibabacloud_EHPC20240730::Client::getCommonLogDetailWithOptions(shared_ptr<GetCommonLogDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->from)) {
    query->insert(pair<string, long>("From", *request->from));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->hiddenProcess)) {
    query->insert(pair<string, bool>("HiddenProcess", *request->hiddenProcess));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logRequestId)) {
    query->insert(pair<string, string>("LogRequestId", *request->logRequestId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->to)) {
    query->insert(pair<string, long>("To", *request->to));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCommonLogDetail"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCommonLogDetailResponse(callApi(params, req, runtime));
}

GetCommonLogDetailResponse Alibabacloud_EHPC20240730::Client::getCommonLogDetail(shared_ptr<GetCommonLogDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCommonLogDetailWithOptions(request, runtime);
}

GetJobResponse Alibabacloud_EHPC20240730::Client::getJobWithOptions(shared_ptr<GetJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetJob"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetJobResponse(callApi(params, req, runtime));
}

GetJobResponse Alibabacloud_EHPC20240730::Client::getJob(shared_ptr<GetJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getJobWithOptions(request, runtime);
}

GetJobLogResponse Alibabacloud_EHPC20240730::Client::getJobLogWithOptions(shared_ptr<GetJobLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logType)) {
    query->insert(pair<string, string>("LogType", *request->logType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->offset)) {
    query->insert(pair<string, string>("Offset", *request->offset));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->size)) {
    query->insert(pair<string, string>("Size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetJobLog"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetJobLogResponse(callApi(params, req, runtime));
}

GetJobLogResponse Alibabacloud_EHPC20240730::Client::getJobLog(shared_ptr<GetJobLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getJobLogWithOptions(request, runtime);
}

GetQueueResponse Alibabacloud_EHPC20240730::Client::getQueueWithOptions(shared_ptr<GetQueueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queueName)) {
    query->insert(pair<string, string>("QueueName", *request->queueName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQueue"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQueueResponse(callApi(params, req, runtime));
}

GetQueueResponse Alibabacloud_EHPC20240730::Client::getQueue(shared_ptr<GetQueueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQueueWithOptions(request, runtime);
}

InstallAddonResponse Alibabacloud_EHPC20240730::Client::installAddonWithOptions(shared_ptr<InstallAddonRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addonName)) {
    query->insert(pair<string, string>("AddonName", *request->addonName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->addonVersion)) {
    query->insert(pair<string, string>("AddonVersion", *request->addonVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourcesSpec)) {
    query->insert(pair<string, string>("ResourcesSpec", *request->resourcesSpec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->servicesSpec)) {
    query->insert(pair<string, string>("ServicesSpec", *request->servicesSpec));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InstallAddon"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InstallAddonResponse(callApi(params, req, runtime));
}

InstallAddonResponse Alibabacloud_EHPC20240730::Client::installAddon(shared_ptr<InstallAddonRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return installAddonWithOptions(request, runtime);
}

InstallSoftwaresResponse Alibabacloud_EHPC20240730::Client::installSoftwaresWithOptions(shared_ptr<InstallSoftwaresRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<InstallSoftwaresShrinkRequest> request = make_shared<InstallSoftwaresShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<InstallSoftwaresRequestAdditionalPackages>>(tmpReq->additionalPackages)) {
    request->additionalPackagesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->additionalPackages, make_shared<string>("AdditionalPackages"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InstallSoftwares"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InstallSoftwaresResponse(callApi(params, req, runtime));
}

InstallSoftwaresResponse Alibabacloud_EHPC20240730::Client::installSoftwares(shared_ptr<InstallSoftwaresRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return installSoftwaresWithOptions(request, runtime);
}

ListAddonTemplatesResponse Alibabacloud_EHPC20240730::Client::listAddonTemplatesWithOptions(shared_ptr<ListAddonTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->addonNames)) {
    query->insert(pair<string, vector<string>>("AddonNames", *request->addonNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterCategory)) {
    query->insert(pair<string, string>("ClusterCategory", *request->clusterCategory));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAddonTemplates"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAddonTemplatesResponse(callApi(params, req, runtime));
}

ListAddonTemplatesResponse Alibabacloud_EHPC20240730::Client::listAddonTemplates(shared_ptr<ListAddonTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAddonTemplatesWithOptions(request, runtime);
}

ListAddonsResponse Alibabacloud_EHPC20240730::Client::listAddonsWithOptions(shared_ptr<ListAddonsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListAddonsShrinkRequest> request = make_shared<ListAddonsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->addonIds)) {
    request->addonIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->addonIds, make_shared<string>("AddonIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addonIdsShrink)) {
    query->insert(pair<string, string>("AddonIds", *request->addonIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAddons"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAddonsResponse(callApi(params, req, runtime));
}

ListAddonsResponse Alibabacloud_EHPC20240730::Client::listAddons(shared_ptr<ListAddonsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAddonsWithOptions(request, runtime);
}

ListAvailableFileSystemsResponse Alibabacloud_EHPC20240730::Client::listAvailableFileSystemsWithOptions(shared_ptr<ListAvailableFileSystemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAvailableFileSystems"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAvailableFileSystemsResponse(callApi(params, req, runtime));
}

ListAvailableFileSystemsResponse Alibabacloud_EHPC20240730::Client::listAvailableFileSystems(shared_ptr<ListAvailableFileSystemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAvailableFileSystemsWithOptions(request, runtime);
}

ListAvailableImagesResponse Alibabacloud_EHPC20240730::Client::listAvailableImagesWithOptions(shared_ptr<ListAvailableImagesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListAvailableImagesShrinkRequest> request = make_shared<ListAvailableImagesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListAvailableImagesRequestDirectoryService>(tmpReq->directoryService)) {
    request->directoryServiceShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->directoryService, make_shared<string>("DirectoryService"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListAvailableImagesRequestScheduler>(tmpReq->scheduler)) {
    request->schedulerShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->scheduler, make_shared<string>("Scheduler"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAvailableImages"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAvailableImagesResponse(callApi(params, req, runtime));
}

ListAvailableImagesResponse Alibabacloud_EHPC20240730::Client::listAvailableImages(shared_ptr<ListAvailableImagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAvailableImagesWithOptions(request, runtime);
}

ListClustersResponse Alibabacloud_EHPC20240730::Client::listClustersWithOptions(shared_ptr<ListClustersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListClustersShrinkRequest> request = make_shared<ListClustersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->clusterIds)) {
    request->clusterIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->clusterIds, make_shared<string>("ClusterIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->clusterNames)) {
    request->clusterNamesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->clusterNames, make_shared<string>("ClusterNames"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterIdsShrink)) {
    query->insert(pair<string, string>("ClusterIds", *request->clusterIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterNamesShrink)) {
    query->insert(pair<string, string>("ClusterNames", *request->clusterNamesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListClusters"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListClustersResponse(callApi(params, req, runtime));
}

ListClustersResponse Alibabacloud_EHPC20240730::Client::listClusters(shared_ptr<ListClustersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listClustersWithOptions(request, runtime);
}

ListCommonLogsResponse Alibabacloud_EHPC20240730::Client::listCommonLogsWithOptions(shared_ptr<ListCommonLogsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListCommonLogsShrinkRequest> request = make_shared<ListCommonLogsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->actionName)) {
    request->actionNameShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->actionName, make_shared<string>("ActionName"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->actionNameShrink)) {
    query->insert(pair<string, string>("ActionName", *request->actionNameShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->actionStatus)) {
    query->insert(pair<string, string>("ActionStatus", *request->actionStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->from)) {
    query->insert(pair<string, long>("From", *request->from));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isReverse)) {
    query->insert(pair<string, bool>("IsReverse", *request->isReverse));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logRequestId)) {
    query->insert(pair<string, string>("LogRequestId", *request->logRequestId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logType)) {
    query->insert(pair<string, string>("LogType", *request->logType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operatorUid)) {
    query->insert(pair<string, string>("OperatorUid", *request->operatorUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resource)) {
    query->insert(pair<string, string>("Resource", *request->resource));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->to)) {
    query->insert(pair<string, long>("To", *request->to));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCommonLogs"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCommonLogsResponse(callApi(params, req, runtime));
}

ListCommonLogsResponse Alibabacloud_EHPC20240730::Client::listCommonLogs(shared_ptr<ListCommonLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCommonLogsWithOptions(request, runtime);
}

ListInstalledSoftwaresResponse Alibabacloud_EHPC20240730::Client::listInstalledSoftwaresWithOptions(shared_ptr<ListInstalledSoftwaresRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstalledSoftwares"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstalledSoftwaresResponse(callApi(params, req, runtime));
}

ListInstalledSoftwaresResponse Alibabacloud_EHPC20240730::Client::listInstalledSoftwares(shared_ptr<ListInstalledSoftwaresRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInstalledSoftwaresWithOptions(request, runtime);
}

ListJobsResponse Alibabacloud_EHPC20240730::Client::listJobsWithOptions(shared_ptr<ListJobsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListJobsShrinkRequest> request = make_shared<ListJobsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListJobsRequestJobFilter>(tmpReq->jobFilter)) {
    request->jobFilterShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->jobFilter, make_shared<string>("JobFilter"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobFilterShrink)) {
    query->insert(pair<string, string>("JobFilter", *request->jobFilterShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    query->insert(pair<string, string>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListJobs"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListJobsResponse(callApi(params, req, runtime));
}

ListJobsResponse Alibabacloud_EHPC20240730::Client::listJobs(shared_ptr<ListJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listJobsWithOptions(request, runtime);
}

ListNodesResponse Alibabacloud_EHPC20240730::Client::listNodesWithOptions(shared_ptr<ListNodesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListNodesShrinkRequest> request = make_shared<ListNodesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->hostnames)) {
    request->hostnamesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->hostnames, make_shared<string>("Hostnames"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->privateIpAddress)) {
    request->privateIpAddressShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->privateIpAddress, make_shared<string>("PrivateIpAddress"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->queueNames)) {
    request->queueNamesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->queueNames, make_shared<string>("QueueNames"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->status)) {
    request->statusShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->status, make_shared<string>("Status"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hostnamesShrink)) {
    query->insert(pair<string, string>("Hostnames", *request->hostnamesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->privateIpAddressShrink)) {
    query->insert(pair<string, string>("PrivateIpAddress", *request->privateIpAddressShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queueNamesShrink)) {
    query->insert(pair<string, string>("QueueNames", *request->queueNamesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sequence)) {
    query->insert(pair<string, string>("Sequence", *request->sequence));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statusShrink)) {
    query->insert(pair<string, string>("Status", *request->statusShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNodes"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListNodesResponse(callApi(params, req, runtime));
}

ListNodesResponse Alibabacloud_EHPC20240730::Client::listNodes(shared_ptr<ListNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNodesWithOptions(request, runtime);
}

ListQueuesResponse Alibabacloud_EHPC20240730::Client::listQueuesWithOptions(shared_ptr<ListQueuesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListQueuesShrinkRequest> request = make_shared<ListQueuesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->queueNames)) {
    request->queueNamesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->queueNames, make_shared<string>("QueueNames"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queueNamesShrink)) {
    query->insert(pair<string, string>("QueueNames", *request->queueNamesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListQueues"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListQueuesResponse(callApi(params, req, runtime));
}

ListQueuesResponse Alibabacloud_EHPC20240730::Client::listQueues(shared_ptr<ListQueuesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listQueuesWithOptions(request, runtime);
}

ListSharedStoragesResponse Alibabacloud_EHPC20240730::Client::listSharedStoragesWithOptions(shared_ptr<ListSharedStoragesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSystemId)) {
    query->insert(pair<string, string>("FileSystemId", *request->fileSystemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSystemType)) {
    query->insert(pair<string, string>("FileSystemType", *request->fileSystemType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSharedStorages"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSharedStoragesResponse(callApi(params, req, runtime));
}

ListSharedStoragesResponse Alibabacloud_EHPC20240730::Client::listSharedStorages(shared_ptr<ListSharedStoragesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSharedStoragesWithOptions(request, runtime);
}

ListSoftwaresResponse Alibabacloud_EHPC20240730::Client::listSoftwaresWithOptions(shared_ptr<ListSoftwaresRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSoftwares"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSoftwaresResponse(callApi(params, req, runtime));
}

ListSoftwaresResponse Alibabacloud_EHPC20240730::Client::listSoftwares(shared_ptr<ListSoftwaresRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSoftwaresWithOptions(request, runtime);
}

ListUsersResponse Alibabacloud_EHPC20240730::Client::listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUsers"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUsersResponse(callApi(params, req, runtime));
}

ListUsersResponse Alibabacloud_EHPC20240730::Client::listUsers(shared_ptr<ListUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUsersWithOptions(request, runtime);
}

StopJobsResponse Alibabacloud_EHPC20240730::Client::stopJobsWithOptions(shared_ptr<StopJobsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<StopJobsShrinkRequest> request = make_shared<StopJobsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->jobIds)) {
    request->jobIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->jobIds, make_shared<string>("JobIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobIdsShrink)) {
    query->insert(pair<string, string>("JobIds", *request->jobIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopJobs"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopJobsResponse(callApi(params, req, runtime));
}

StopJobsResponse Alibabacloud_EHPC20240730::Client::stopJobs(shared_ptr<StopJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopJobsWithOptions(request, runtime);
}

UnInstallAddonResponse Alibabacloud_EHPC20240730::Client::unInstallAddonWithOptions(shared_ptr<UnInstallAddonRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addonId)) {
    query->insert(pair<string, string>("AddonId", *request->addonId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnInstallAddon"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnInstallAddonResponse(callApi(params, req, runtime));
}

UnInstallAddonResponse Alibabacloud_EHPC20240730::Client::unInstallAddon(shared_ptr<UnInstallAddonRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unInstallAddonWithOptions(request, runtime);
}

UninstallSoftwaresResponse Alibabacloud_EHPC20240730::Client::uninstallSoftwaresWithOptions(shared_ptr<UninstallSoftwaresRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UninstallSoftwaresShrinkRequest> request = make_shared<UninstallSoftwaresShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UninstallSoftwaresRequestAdditionalPackages>>(tmpReq->additionalPackages)) {
    request->additionalPackagesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->additionalPackages, make_shared<string>("AdditionalPackages"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UninstallSoftwares"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UninstallSoftwaresResponse(callApi(params, req, runtime));
}

UninstallSoftwaresResponse Alibabacloud_EHPC20240730::Client::uninstallSoftwares(shared_ptr<UninstallSoftwaresRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uninstallSoftwaresWithOptions(request, runtime);
}

UpdateClusterResponse Alibabacloud_EHPC20240730::Client::updateClusterWithOptions(shared_ptr<UpdateClusterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateClusterShrinkRequest> request = make_shared<UpdateClusterShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateClusterRequestClusterCustomConfiguration>(tmpReq->clusterCustomConfiguration)) {
    request->clusterCustomConfigurationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->clusterCustomConfiguration, make_shared<string>("ClusterCustomConfiguration"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateClusterRequestMonitorSpec>(tmpReq->monitorSpec)) {
    request->monitorSpecShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->monitorSpec, make_shared<string>("MonitorSpec"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateClusterRequestSchedulerSpec>(tmpReq->schedulerSpec)) {
    request->schedulerSpecShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->schedulerSpec, make_shared<string>("SchedulerSpec"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientVersion)) {
    query->insert(pair<string, string>("ClientVersion", *request->clientVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterCustomConfigurationShrink)) {
    query->insert(pair<string, string>("ClusterCustomConfiguration", *request->clusterCustomConfigurationShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterDescription)) {
    query->insert(pair<string, string>("ClusterDescription", *request->clusterDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterName)) {
    query->insert(pair<string, string>("ClusterName", *request->clusterName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->deletionProtection)) {
    query->insert(pair<string, bool>("DeletionProtection", *request->deletionProtection));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableScaleIn)) {
    query->insert(pair<string, bool>("EnableScaleIn", *request->enableScaleIn));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableScaleOut)) {
    query->insert(pair<string, bool>("EnableScaleOut", *request->enableScaleOut));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->growInterval)) {
    query->insert(pair<string, long>("GrowInterval", *request->growInterval));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->idleInterval)) {
    query->insert(pair<string, long>("IdleInterval", *request->idleInterval));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxCoreCount)) {
    query->insert(pair<string, long>("MaxCoreCount", *request->maxCoreCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxCount)) {
    query->insert(pair<string, long>("MaxCount", *request->maxCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->monitorSpecShrink)) {
    query->insert(pair<string, string>("MonitorSpec", *request->monitorSpecShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schedulerSpecShrink)) {
    query->insert(pair<string, string>("SchedulerSpec", *request->schedulerSpecShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCluster"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateClusterResponse(callApi(params, req, runtime));
}

UpdateClusterResponse Alibabacloud_EHPC20240730::Client::updateCluster(shared_ptr<UpdateClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateClusterWithOptions(request, runtime);
}

UpdateNodesResponse Alibabacloud_EHPC20240730::Client::updateNodesWithOptions(shared_ptr<UpdateNodesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateNodesShrinkRequest> request = make_shared<UpdateNodesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateNodesRequestInstances>>(tmpReq->instances)) {
    request->instancesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instances, make_shared<string>("Instances"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instancesShrink)) {
    query->insert(pair<string, string>("Instances", *request->instancesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateNodes"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateNodesResponse(callApi(params, req, runtime));
}

UpdateNodesResponse Alibabacloud_EHPC20240730::Client::updateNodes(shared_ptr<UpdateNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateNodesWithOptions(request, runtime);
}

UpdateQueueResponse Alibabacloud_EHPC20240730::Client::updateQueueWithOptions(shared_ptr<UpdateQueueRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateQueueShrinkRequest> request = make_shared<UpdateQueueShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateQueueRequestQueue>(tmpReq->queue)) {
    request->queueShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->queue, make_shared<string>("Queue"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queueShrink)) {
    query->insert(pair<string, string>("Queue", *request->queueShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateQueue"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateQueueResponse(callApi(params, req, runtime));
}

UpdateQueueResponse Alibabacloud_EHPC20240730::Client::updateQueue(shared_ptr<UpdateQueueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateQueueWithOptions(request, runtime);
}

UpdateUserResponse Alibabacloud_EHPC20240730::Client::updateUserWithOptions(shared_ptr<UpdateUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->group)) {
    query->insert(pair<string, string>("Group", *request->group));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    query->insert(pair<string, string>("UserName", *request->userName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateUser"))},
    {"version", boost::any(string("2024-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateUserResponse(callApi(params, req, runtime));
}

UpdateUserResponse Alibabacloud_EHPC20240730::Client::updateUser(shared_ptr<UpdateUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateUserWithOptions(request, runtime);
}

