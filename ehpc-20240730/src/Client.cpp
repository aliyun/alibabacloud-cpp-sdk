#include <darabonba/Core.hpp>
#include <alibabacloud/EHPC20240730.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::EHPC20240730::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace EHPC20240730
{

AlibabaCloud::EHPC20240730::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("ehpc", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @summary Adds Elastic Compute Service (ECS) instances as compute nodes to Elastic High Performance Computing (E-HPC) clusters.
 *
 * @description The ECS instances must meet the following requirements:
 * *   The ECS instances do not belong to any E-HPC cluster.
 * *   The ECS instances reside in the same virtual private cloud (VPC) as the cluster.
 * *   The ECS instances are in the Stopped state.
 * Take of the following limits:
 * *   You can specify multiple instance IDs to add them at a time. However, the instances must be of the same type.
 * *   When an instance is added to the cluster, [the system disk is reset](https://help.aliyun.com/zh/ecs/user-guide/re-initialize-a-system-disk) by using the image specified by the input parameters.
 * *   If the instance has data disks, they are not automatically created and mounted after the instance is added.
 * *   The hostname of the instance remains the same. Therefore, you must ensure that the hostname of the instance to be added is different from the hostname of an existing node in the cluster.
 *
 * @param tmpReq AttachNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachNodesResponse
 */
AttachNodesResponse Client::attachNodesWithOptions(const AttachNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AttachNodesShrinkRequest request = AttachNodesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasComputeNode()) {
    request.setComputeNodeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getComputeNode(), "ComputeNode", "json"));
  }

  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasComputeNodeShrink()) {
    query["ComputeNode"] = request.getComputeNodeShrink();
  }

  if (!!request.hasQueueName()) {
    query["QueueName"] = request.getQueueName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachNodes"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachNodesResponse>();
}

/**
 * @summary Adds Elastic Compute Service (ECS) instances as compute nodes to Elastic High Performance Computing (E-HPC) clusters.
 *
 * @description The ECS instances must meet the following requirements:
 * *   The ECS instances do not belong to any E-HPC cluster.
 * *   The ECS instances reside in the same virtual private cloud (VPC) as the cluster.
 * *   The ECS instances are in the Stopped state.
 * Take of the following limits:
 * *   You can specify multiple instance IDs to add them at a time. However, the instances must be of the same type.
 * *   When an instance is added to the cluster, [the system disk is reset](https://help.aliyun.com/zh/ecs/user-guide/re-initialize-a-system-disk) by using the image specified by the input parameters.
 * *   If the instance has data disks, they are not automatically created and mounted after the instance is added.
 * *   The hostname of the instance remains the same. Therefore, you must ensure that the hostname of the instance to be added is different from the hostname of an existing node in the cluster.
 *
 * @param request AttachNodesRequest
 * @return AttachNodesResponse
 */
AttachNodesResponse Client::attachNodes(const AttachNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachNodesWithOptions(request, runtime);
}

/**
 * @summary Attaches shared storage to an Elastic High Performance Computing (E-HPC) cluster.
 *
 * @description ## [](#)Usage notes
 * When you call this operation, take note of the following items:
 * *   The file system that you want to attach must be created in advance in the same virtual private cloud (VPC) as the destination cluster. For more information, see [Create a file system](https://help.aliyun.com/document_detail/27530.html) and [Manage mount targets](https://help.aliyun.com/document_detail/27531.html).
 * *   E-HPC clusters support Apsara File Storage NAS file systems.
 *
 * @param tmpReq AttachSharedStoragesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachSharedStoragesResponse
 */
AttachSharedStoragesResponse Client::attachSharedStoragesWithOptions(const AttachSharedStoragesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AttachSharedStoragesShrinkRequest request = AttachSharedStoragesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSharedStorages()) {
    request.setSharedStoragesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSharedStorages(), "SharedStorages", "json"));
  }

  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasSharedStoragesShrink()) {
    query["SharedStorages"] = request.getSharedStoragesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachSharedStorages"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachSharedStoragesResponse>();
}

/**
 * @summary Attaches shared storage to an Elastic High Performance Computing (E-HPC) cluster.
 *
 * @description ## [](#)Usage notes
 * When you call this operation, take note of the following items:
 * *   The file system that you want to attach must be created in advance in the same virtual private cloud (VPC) as the destination cluster. For more information, see [Create a file system](https://help.aliyun.com/document_detail/27530.html) and [Manage mount targets](https://help.aliyun.com/document_detail/27531.html).
 * *   E-HPC clusters support Apsara File Storage NAS file systems.
 *
 * @param request AttachSharedStoragesRequest
 * @return AttachSharedStoragesResponse
 */
AttachSharedStoragesResponse Client::attachSharedStorages(const AttachSharedStoragesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachSharedStoragesWithOptions(request, runtime);
}

/**
 * @summary Creates a pay-as-you-go or subscription Elastic High Performance Computing (E-HPC) cluster.
 *
 * @description ## [](#)Usage notes
 * Before you call this operation, make sure that you are familiar with the billing and pricing of E-HPC. For more information, see [Overview](https://help.aliyun.com/document_detail/2842985.html).
 *
 * @param tmpReq CreateClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateClusterResponse
 */
CreateClusterResponse Client::createClusterWithOptions(const CreateClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateClusterShrinkRequest request = CreateClusterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAdditionalPackages()) {
    request.setAdditionalPackagesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAdditionalPackages(), "AdditionalPackages", "json"));
  }

  if (!!tmpReq.hasAddons()) {
    request.setAddonsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAddons(), "Addons", "json"));
  }

  if (!!tmpReq.hasClusterCredentials()) {
    request.setClusterCredentialsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getClusterCredentials(), "ClusterCredentials", "json"));
  }

  if (!!tmpReq.hasClusterCustomConfiguration()) {
    request.setClusterCustomConfigurationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getClusterCustomConfiguration(), "ClusterCustomConfiguration", "json"));
  }

  if (!!tmpReq.hasManager()) {
    request.setManagerShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getManager(), "Manager", "json"));
  }

  if (!!tmpReq.hasQueues()) {
    request.setQueuesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQueues(), "Queues", "json"));
  }

  if (!!tmpReq.hasSharedStorages()) {
    request.setSharedStoragesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSharedStorages(), "SharedStorages", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasAdditionalPackagesShrink()) {
    query["AdditionalPackages"] = request.getAdditionalPackagesShrink();
  }

  if (!!request.hasAddonsShrink()) {
    query["Addons"] = request.getAddonsShrink();
  }

  if (!!request.hasClientVersion()) {
    query["ClientVersion"] = request.getClientVersion();
  }

  if (!!request.hasClusterCategory()) {
    query["ClusterCategory"] = request.getClusterCategory();
  }

  if (!!request.hasClusterCredentialsShrink()) {
    query["ClusterCredentials"] = request.getClusterCredentialsShrink();
  }

  if (!!request.hasClusterCustomConfigurationShrink()) {
    query["ClusterCustomConfiguration"] = request.getClusterCustomConfigurationShrink();
  }

  if (!!request.hasClusterDescription()) {
    query["ClusterDescription"] = request.getClusterDescription();
  }

  if (!!request.hasClusterMode()) {
    query["ClusterMode"] = request.getClusterMode();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasClusterVSwitchId()) {
    query["ClusterVSwitchId"] = request.getClusterVSwitchId();
  }

  if (!!request.hasClusterVpcId()) {
    query["ClusterVpcId"] = request.getClusterVpcId();
  }

  if (!!request.hasDeletionProtection()) {
    query["DeletionProtection"] = request.getDeletionProtection();
  }

  if (!!request.hasIsEnterpriseSecurityGroup()) {
    query["IsEnterpriseSecurityGroup"] = request.getIsEnterpriseSecurityGroup();
  }

  if (!!request.hasManagerShrink()) {
    query["Manager"] = request.getManagerShrink();
  }

  if (!!request.hasMaxCoreCount()) {
    query["MaxCoreCount"] = request.getMaxCoreCount();
  }

  if (!!request.hasMaxCount()) {
    query["MaxCount"] = request.getMaxCount();
  }

  if (!!request.hasQueuesShrink()) {
    query["Queues"] = request.getQueuesShrink();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasSharedStoragesShrink()) {
    query["SharedStorages"] = request.getSharedStoragesShrink();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCluster"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateClusterResponse>();
}

/**
 * @summary Creates a pay-as-you-go or subscription Elastic High Performance Computing (E-HPC) cluster.
 *
 * @description ## [](#)Usage notes
 * Before you call this operation, make sure that you are familiar with the billing and pricing of E-HPC. For more information, see [Overview](https://help.aliyun.com/document_detail/2842985.html).
 *
 * @param request CreateClusterRequest
 * @return CreateClusterResponse
 */
CreateClusterResponse Client::createCluster(const CreateClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createClusterWithOptions(request, runtime);
}

/**
 * @summary Creates a job for a cluster.
 *
 * @description Before you call this operation, make sure that you understand the billing and [pricing](https://www.aliyun.com/price/product#/ecs/detail) of E-HPC.
 *
 * @param tmpReq CreateJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateJobResponse
 */
CreateJobResponse Client::createJobWithOptions(const CreateJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateJobShrinkRequest request = CreateJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasJobSpec()) {
    request.setJobSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getJobSpec(), "JobSpec", "json"));
  }

  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasJobName()) {
    query["JobName"] = request.getJobName();
  }

  if (!!request.hasJobSpecShrink()) {
    query["JobSpec"] = request.getJobSpecShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateJob"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateJobResponse>();
}

/**
 * @summary Creates a job for a cluster.
 *
 * @description Before you call this operation, make sure that you understand the billing and [pricing](https://www.aliyun.com/price/product#/ecs/detail) of E-HPC.
 *
 * @param request CreateJobRequest
 * @return CreateJobResponse
 */
CreateJobResponse Client::createJob(const CreateJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createJobWithOptions(request, runtime);
}

/**
 * @summary Creates compute nodes for an Elastic High Performance Computing (E-HPC) cluster.
 *
 * @description ## [](#)
 *
 * @param tmpReq CreateNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNodesResponse
 */
CreateNodesResponse Client::createNodesWithOptions(const CreateNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateNodesShrinkRequest request = CreateNodesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasComputeNode()) {
    request.setComputeNodeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getComputeNode(), "ComputeNode", "json"));
  }

  if (!!tmpReq.hasHostnames()) {
    request.setHostnamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHostnames(), "Hostnames", "json"));
  }

  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasComputeNodeShrink()) {
    query["ComputeNode"] = request.getComputeNodeShrink();
  }

  if (!!request.hasCount()) {
    query["Count"] = request.getCount();
  }

  if (!!request.hasDeploymentSetId()) {
    query["DeploymentSetId"] = request.getDeploymentSetId();
  }

  if (!!request.hasHPCInterConnect()) {
    query["HPCInterConnect"] = request.getHPCInterConnect();
  }

  if (!!request.hasHostnamePrefix()) {
    query["HostnamePrefix"] = request.getHostnamePrefix();
  }

  if (!!request.hasHostnameSuffix()) {
    query["HostnameSuffix"] = request.getHostnameSuffix();
  }

  if (!!request.hasHostnamesShrink()) {
    query["Hostnames"] = request.getHostnamesShrink();
  }

  if (!!request.hasKeepAlive()) {
    query["KeepAlive"] = request.getKeepAlive();
  }

  if (!!request.hasQueueName()) {
    query["QueueName"] = request.getQueueName();
  }

  if (!!request.hasRamRole()) {
    query["RamRole"] = request.getRamRole();
  }

  if (!!request.hasReservedNodePoolId()) {
    query["ReservedNodePoolId"] = request.getReservedNodePoolId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateNodes"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNodesResponse>();
}

/**
 * @summary Creates compute nodes for an Elastic High Performance Computing (E-HPC) cluster.
 *
 * @description ## [](#)
 *
 * @param request CreateNodesRequest
 * @return CreateNodesResponse
 */
CreateNodesResponse Client::createNodes(const CreateNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNodesWithOptions(request, runtime);
}

/**
 * @summary Creates a queue for an Enterprise High Performance Computing (E-HPC) cluster.
 *
 * @param tmpReq CreateQueueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateQueueResponse
 */
CreateQueueResponse Client::createQueueWithOptions(const CreateQueueRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateQueueShrinkRequest request = CreateQueueShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasQueue()) {
    request.setQueueShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQueue(), "Queue", "json"));
  }

  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasQueueShrink()) {
    query["Queue"] = request.getQueueShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateQueue"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateQueueResponse>();
}

/**
 * @summary Creates a queue for an Enterprise High Performance Computing (E-HPC) cluster.
 *
 * @param request CreateQueueRequest
 * @return CreateQueueResponse
 */
CreateQueueResponse Client::createQueue(const CreateQueueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createQueueWithOptions(request, runtime);
}

/**
 * @summary Adds users to an Elastic High Performance Computing (E-HPC) cluster.
 *
 * @param tmpReq CreateUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUsersResponse
 */
CreateUsersResponse Client::createUsersWithOptions(const CreateUsersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateUsersShrinkRequest request = CreateUsersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUser()) {
    request.setUserShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUser(), "User", "json"));
  }

  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasUserShrink()) {
    query["User"] = request.getUserShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateUsers"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUsersResponse>();
}

/**
 * @summary Adds users to an Elastic High Performance Computing (E-HPC) cluster.
 *
 * @param request CreateUsersRequest
 * @return CreateUsersResponse
 */
CreateUsersResponse Client::createUsers(const CreateUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUsersWithOptions(request, runtime);
}

/**
 * @summary Releases an Enterprise High Performance Computing (E-HPC) cluster.
 *
 * @description ## [](#)Usage notes
 * Make sure that data of the cluster to be deleted is backed up before you call this operation.
 * > After a cluster is released, you cannot restore the data stored in the cluster. Exercise caution when you release a cluster.
 *
 * @param request DeleteClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteClusterResponse
 */
DeleteClusterResponse Client::deleteClusterWithOptions(const DeleteClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCluster"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteClusterResponse>();
}

/**
 * @summary Releases an Enterprise High Performance Computing (E-HPC) cluster.
 *
 * @description ## [](#)Usage notes
 * Make sure that data of the cluster to be deleted is backed up before you call this operation.
 * > After a cluster is released, you cannot restore the data stored in the cluster. Exercise caution when you release a cluster.
 *
 * @param request DeleteClusterRequest
 * @return DeleteClusterResponse
 */
DeleteClusterResponse Client::deleteCluster(const DeleteClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteClusterWithOptions(request, runtime);
}

/**
 * @summary Deletes compute nodes from an Enterprise High Performance Computing (E-HPC) cluster at a time.
 *
 * @description ## [](#)Usage notes
 * Before you delete a compute node, we recommend that you export all job data from the node to prevent data loss.
 *
 * @param tmpReq DeleteNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNodesResponse
 */
DeleteNodesResponse Client::deleteNodesWithOptions(const DeleteNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteNodesShrinkRequest request = DeleteNodesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNodes"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNodesResponse>();
}

/**
 * @summary Deletes compute nodes from an Enterprise High Performance Computing (E-HPC) cluster at a time.
 *
 * @description ## [](#)Usage notes
 * Before you delete a compute node, we recommend that you export all job data from the node to prevent data loss.
 *
 * @param request DeleteNodesRequest
 * @return DeleteNodesResponse
 */
DeleteNodesResponse Client::deleteNodes(const DeleteNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNodesWithOptions(request, runtime);
}

/**
 * @summary Deletes queues from an Enterprise High Performance Computing (E-HPC) cluster.
 *
 * @description ## [](#)Usage notes
 * Before you delete a queue, you must delete all compute nodes in the queue.
 *
 * @param tmpReq DeleteQueuesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteQueuesResponse
 */
DeleteQueuesResponse Client::deleteQueuesWithOptions(const DeleteQueuesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteQueuesShrinkRequest request = DeleteQueuesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasQueueNames()) {
    request.setQueueNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQueueNames(), "QueueNames", "json"));
  }

  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasQueueNamesShrink()) {
    query["QueueNames"] = request.getQueueNamesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteQueues"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteQueuesResponse>();
}

/**
 * @summary Deletes queues from an Enterprise High Performance Computing (E-HPC) cluster.
 *
 * @description ## [](#)Usage notes
 * Before you delete a queue, you must delete all compute nodes in the queue.
 *
 * @param request DeleteQueuesRequest
 * @return DeleteQueuesResponse
 */
DeleteQueuesResponse Client::deleteQueues(const DeleteQueuesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteQueuesWithOptions(request, runtime);
}

/**
 * @summary Deletes users from a cluster.
 *
 * @param tmpReq DeleteUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUsersResponse
 */
DeleteUsersResponse Client::deleteUsersWithOptions(const DeleteUsersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteUsersShrinkRequest request = DeleteUsersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUser()) {
    request.setUserShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUser(), "User", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUsers"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUsersResponse>();
}

/**
 * @summary Deletes users from a cluster.
 *
 * @param request DeleteUsersRequest
 * @return DeleteUsersResponse
 */
DeleteUsersResponse Client::deleteUsers(const DeleteUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUsersWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an addon template.
 *
 * @param request DescribeAddonTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAddonTemplateResponse
 */
DescribeAddonTemplateResponse Client::describeAddonTemplateWithOptions(const DescribeAddonTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddonName()) {
    query["AddonName"] = request.getAddonName();
  }

  if (!!request.hasAddonVersion()) {
    query["AddonVersion"] = request.getAddonVersion();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAddonTemplate"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAddonTemplateResponse>();
}

/**
 * @summary Queries the details of an addon template.
 *
 * @param request DescribeAddonTemplateRequest
 * @return DescribeAddonTemplateResponse
 */
DescribeAddonTemplateResponse Client::describeAddonTemplate(const DescribeAddonTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAddonTemplateWithOptions(request, runtime);
}

/**
 * @summary Unmounts shared storage from the mount directory of a cluster.
 *
 * @param tmpReq DetachSharedStoragesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachSharedStoragesResponse
 */
DetachSharedStoragesResponse Client::detachSharedStoragesWithOptions(const DetachSharedStoragesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DetachSharedStoragesShrinkRequest request = DetachSharedStoragesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSharedStorages()) {
    request.setSharedStoragesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSharedStorages(), "SharedStorages", "json"));
  }

  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasSharedStoragesShrink()) {
    query["SharedStorages"] = request.getSharedStoragesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachSharedStorages"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachSharedStoragesResponse>();
}

/**
 * @summary Unmounts shared storage from the mount directory of a cluster.
 *
 * @param request DetachSharedStoragesRequest
 * @return DetachSharedStoragesResponse
 */
DetachSharedStoragesResponse Client::detachSharedStorages(const DetachSharedStoragesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachSharedStoragesWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an installed addon.
 *
 * @param request GetAddonRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAddonResponse
 */
GetAddonResponse Client::getAddonWithOptions(const GetAddonRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddonId()) {
    query["AddonId"] = request.getAddonId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAddon"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAddonResponse>();
}

/**
 * @summary Queries the details of an installed addon.
 *
 * @param request GetAddonRequest
 * @return GetAddonResponse
 */
GetAddonResponse Client::getAddon(const GetAddonRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAddonWithOptions(request, runtime);
}

/**
 * @summary Queries information about an Elastic High Performance Computing (E-HPC) cluster.
 *
 * @param request GetClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetClusterResponse
 */
GetClusterResponse Client::getClusterWithOptions(const GetClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCluster"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetClusterResponse>();
}

/**
 * @summary Queries information about an Elastic High Performance Computing (E-HPC) cluster.
 *
 * @param request GetClusterRequest
 * @return GetClusterResponse
 */
GetClusterResponse Client::getCluster(const GetClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getClusterWithOptions(request, runtime);
}

/**
 * @summary Query logs based on a request ID. Logs for specific actions can be queried thanks to an Action-Stage-Method three-layer log splitting structure.
 *
 * @param request GetCommonLogDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCommonLogDetailResponse
 */
GetCommonLogDetailResponse Client::getCommonLogDetailWithOptions(const GetCommonLogDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFrom()) {
    query["From"] = request.getFrom();
  }

  if (!!request.hasHiddenProcess()) {
    query["HiddenProcess"] = request.getHiddenProcess();
  }

  if (!!request.hasLogRequestId()) {
    query["LogRequestId"] = request.getLogRequestId();
  }

  if (!!request.hasTo()) {
    query["To"] = request.getTo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCommonLogDetail"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCommonLogDetailResponse>();
}

/**
 * @summary Query logs based on a request ID. Logs for specific actions can be queried thanks to an Action-Stage-Method three-layer log splitting structure.
 *
 * @param request GetCommonLogDetailRequest
 * @return GetCommonLogDetailResponse
 */
GetCommonLogDetailResponse Client::getCommonLogDetail(const GetCommonLogDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCommonLogDetailWithOptions(request, runtime);
}

/**
 * @summary Obtains the details of a job.
 *
 * @param request GetJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobResponse
 */
GetJobResponse Client::getJobWithOptions(const GetJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJob"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJobResponse>();
}

/**
 * @summary Obtains the details of a job.
 *
 * @param request GetJobRequest
 * @return GetJobResponse
 */
GetJobResponse Client::getJob(const GetJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getJobWithOptions(request, runtime);
}

/**
 * @summary Queries the output logs of a job, including standard output logs and error output logs.
 *
 * @description ## [](#)Usage notes
 * Currently, only Slurm and PBS Pro schedulers for Standard Edition clusters are supported.
 *
 * @param request GetJobLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobLogResponse
 */
GetJobLogResponse Client::getJobLogWithOptions(const GetJobLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasLogType()) {
    query["LogType"] = request.getLogType();
  }

  if (!!request.hasOffset()) {
    query["Offset"] = request.getOffset();
  }

  if (!!request.hasSize()) {
    query["Size"] = request.getSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJobLog"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJobLogResponse>();
}

/**
 * @summary Queries the output logs of a job, including standard output logs and error output logs.
 *
 * @description ## [](#)Usage notes
 * Currently, only Slurm and PBS Pro schedulers for Standard Edition clusters are supported.
 *
 * @param request GetJobLogRequest
 * @return GetJobLogResponse
 */
GetJobLogResponse Client::getJobLog(const GetJobLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getJobLogWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a queue in an Elastic High Performance Computing (E-HPC) cluster.
 *
 * @param request GetQueueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQueueResponse
 */
GetQueueResponse Client::getQueueWithOptions(const GetQueueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasQueueName()) {
    query["QueueName"] = request.getQueueName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQueue"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQueueResponse>();
}

/**
 * @summary Queries the details of a queue in an Elastic High Performance Computing (E-HPC) cluster.
 *
 * @param request GetQueueRequest
 * @return GetQueueResponse
 */
GetQueueResponse Client::getQueue(const GetQueueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQueueWithOptions(request, runtime);
}

/**
 * @summary Installs an addon.
 *
 * @description ## [](#)Usage notes
 * Take note of the following items when you call this operation:
 * *   The cluster must be in the `Running` state.
 * *   Clusters fall into two types:
 *     *   Regular clusters on Alibaba Cloud Public Cloud
 *     *   Managed clusters on Alibaba Cloud Public Cloud
 *
 * @param request InstallAddonRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InstallAddonResponse
 */
InstallAddonResponse Client::installAddonWithOptions(const InstallAddonRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddonName()) {
    query["AddonName"] = request.getAddonName();
  }

  if (!!request.hasAddonVersion()) {
    query["AddonVersion"] = request.getAddonVersion();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasResourcesSpec()) {
    query["ResourcesSpec"] = request.getResourcesSpec();
  }

  if (!!request.hasServicesSpec()) {
    query["ServicesSpec"] = request.getServicesSpec();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InstallAddon"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallAddonResponse>();
}

/**
 * @summary Installs an addon.
 *
 * @description ## [](#)Usage notes
 * Take note of the following items when you call this operation:
 * *   The cluster must be in the `Running` state.
 * *   Clusters fall into two types:
 *     *   Regular clusters on Alibaba Cloud Public Cloud
 *     *   Managed clusters on Alibaba Cloud Public Cloud
 *
 * @param request InstallAddonRequest
 * @return InstallAddonResponse
 */
InstallAddonResponse Client::installAddon(const InstallAddonRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return installAddonWithOptions(request, runtime);
}

/**
 * @summary Install software for the specified cluster.
 *
 * @description ## Interface Description
 * When calling this interface, please note the following:
 * - The cluster status must be `Running`. 
 * - If the cluster series is `Serverless`, ensure that there is at least one login node or compute node in the cluster; otherwise, software cannot be added to the target cluster.
 *
 * @param tmpReq InstallSoftwaresRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InstallSoftwaresResponse
 */
InstallSoftwaresResponse Client::installSoftwaresWithOptions(const InstallSoftwaresRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  InstallSoftwaresShrinkRequest request = InstallSoftwaresShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAdditionalPackages()) {
    request.setAdditionalPackagesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAdditionalPackages(), "AdditionalPackages", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InstallSoftwares"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallSoftwaresResponse>();
}

/**
 * @summary Install software for the specified cluster.
 *
 * @description ## Interface Description
 * When calling this interface, please note the following:
 * - The cluster status must be `Running`. 
 * - If the cluster series is `Serverless`, ensure that there is at least one login node or compute node in the cluster; otherwise, software cannot be added to the target cluster.
 *
 * @param request InstallSoftwaresRequest
 * @return InstallSoftwaresResponse
 */
InstallSoftwaresResponse Client::installSoftwares(const InstallSoftwaresRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return installSoftwaresWithOptions(request, runtime);
}

/**
 * @summary Queries supported addon templates.
 *
 * @param request ListAddonTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAddonTemplatesResponse
 */
ListAddonTemplatesResponse Client::listAddonTemplatesWithOptions(const ListAddonTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddonNames()) {
    query["AddonNames"] = request.getAddonNames();
  }

  if (!!request.hasClusterCategory()) {
    query["ClusterCategory"] = request.getClusterCategory();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAddonTemplates"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAddonTemplatesResponse>();
}

/**
 * @summary Queries supported addon templates.
 *
 * @param request ListAddonTemplatesRequest
 * @return ListAddonTemplatesResponse
 */
ListAddonTemplatesResponse Client::listAddonTemplates(const ListAddonTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAddonTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries installed addons of an Elastic High Performance Computing (E-HPC) cluster.
 *
 * @param tmpReq ListAddonsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAddonsResponse
 */
ListAddonsResponse Client::listAddonsWithOptions(const ListAddonsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAddonsShrinkRequest request = ListAddonsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAddonIds()) {
    request.setAddonIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAddonIds(), "AddonIds", "json"));
  }

  json query = {};
  if (!!request.hasAddonIdsShrink()) {
    query["AddonIds"] = request.getAddonIdsShrink();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAddons"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAddonsResponse>();
}

/**
 * @summary Queries installed addons of an Elastic High Performance Computing (E-HPC) cluster.
 *
 * @param request ListAddonsRequest
 * @return ListAddonsResponse
 */
ListAddonsResponse Client::listAddons(const ListAddonsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAddonsWithOptions(request, runtime);
}

/**
 * @summary Queries the file systems that can be attached in a region.
 *
 * @param request ListAvailableFileSystemsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAvailableFileSystemsResponse
 */
ListAvailableFileSystemsResponse Client::listAvailableFileSystemsWithOptions(const ListAvailableFileSystemsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAvailableFileSystems"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAvailableFileSystemsResponse>();
}

/**
 * @summary Queries the file systems that can be attached in a region.
 *
 * @param request ListAvailableFileSystemsRequest
 * @return ListAvailableFileSystemsResponse
 */
ListAvailableFileSystemsResponse Client::listAvailableFileSystems(const ListAvailableFileSystemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAvailableFileSystemsWithOptions(request, runtime);
}

/**
 * @summary Queries images that are available for Elastic High Performance Computing (E-HPC) clusters.
 *
 * @param tmpReq ListAvailableImagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAvailableImagesResponse
 */
ListAvailableImagesResponse Client::listAvailableImagesWithOptions(const ListAvailableImagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAvailableImagesShrinkRequest request = ListAvailableImagesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDirectoryService()) {
    request.setDirectoryServiceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDirectoryService(), "DirectoryService", "json"));
  }

  if (!!tmpReq.hasScheduler()) {
    request.setSchedulerShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScheduler(), "Scheduler", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAvailableImages"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAvailableImagesResponse>();
}

/**
 * @summary Queries images that are available for Elastic High Performance Computing (E-HPC) clusters.
 *
 * @param request ListAvailableImagesRequest
 * @return ListAvailableImagesResponse
 */
ListAvailableImagesResponse Client::listAvailableImages(const ListAvailableImagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAvailableImagesWithOptions(request, runtime);
}

/**
 * @summary Queries all clusters of a user in each region.
 *
 * @param tmpReq ListClustersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClustersResponse
 */
ListClustersResponse Client::listClustersWithOptions(const ListClustersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListClustersShrinkRequest request = ListClustersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasClusterIds()) {
    request.setClusterIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getClusterIds(), "ClusterIds", "json"));
  }

  if (!!tmpReq.hasClusterNames()) {
    request.setClusterNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getClusterNames(), "ClusterNames", "json"));
  }

  json query = {};
  if (!!request.hasClusterIdsShrink()) {
    query["ClusterIds"] = request.getClusterIdsShrink();
  }

  if (!!request.hasClusterNamesShrink()) {
    query["ClusterNames"] = request.getClusterNamesShrink();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClusters"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClustersResponse>();
}

/**
 * @summary Queries all clusters of a user in each region.
 *
 * @param request ListClustersRequest
 * @return ListClustersResponse
 */
ListClustersResponse Client::listClusters(const ListClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClustersWithOptions(request, runtime);
}

/**
 * @summary Queries the logs of a cluster that are generated within a time range.
 *
 * @param tmpReq ListCommonLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCommonLogsResponse
 */
ListCommonLogsResponse Client::listCommonLogsWithOptions(const ListCommonLogsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListCommonLogsShrinkRequest request = ListCommonLogsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasActionName()) {
    request.setActionNameShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getActionName(), "ActionName", "json"));
  }

  json query = {};
  if (!!request.hasActionNameShrink()) {
    query["ActionName"] = request.getActionNameShrink();
  }

  if (!!request.hasActionStatus()) {
    query["ActionStatus"] = request.getActionStatus();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasFrom()) {
    query["From"] = request.getFrom();
  }

  if (!!request.hasIsReverse()) {
    query["IsReverse"] = request.getIsReverse();
  }

  if (!!request.hasLogRequestId()) {
    query["LogRequestId"] = request.getLogRequestId();
  }

  if (!!request.hasLogType()) {
    query["LogType"] = request.getLogType();
  }

  if (!!request.hasOperatorUid()) {
    query["OperatorUid"] = request.getOperatorUid();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasTo()) {
    query["To"] = request.getTo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCommonLogs"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCommonLogsResponse>();
}

/**
 * @summary Queries the logs of a cluster that are generated within a time range.
 *
 * @param request ListCommonLogsRequest
 * @return ListCommonLogsResponse
 */
ListCommonLogsResponse Client::listCommonLogs(const ListCommonLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCommonLogsWithOptions(request, runtime);
}

/**
 * @summary Queries the installed software of a cluster.
 *
 * @param request ListInstalledSoftwaresRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstalledSoftwaresResponse
 */
ListInstalledSoftwaresResponse Client::listInstalledSoftwaresWithOptions(const ListInstalledSoftwaresRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstalledSoftwares"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstalledSoftwaresResponse>();
}

/**
 * @summary Queries the installed software of a cluster.
 *
 * @param request ListInstalledSoftwaresRequest
 * @return ListInstalledSoftwaresResponse
 */
ListInstalledSoftwaresResponse Client::listInstalledSoftwares(const ListInstalledSoftwaresRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstalledSoftwaresWithOptions(request, runtime);
}

/**
 * @summary Queries the jobs in a cluster.
 *
 * @param tmpReq ListJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobsResponse
 */
ListJobsResponse Client::listJobsWithOptions(const ListJobsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListJobsShrinkRequest request = ListJobsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasJobFilter()) {
    request.setJobFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getJobFilter(), "JobFilter", "json"));
  }

  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasJobFilterShrink()) {
    query["JobFilter"] = request.getJobFilterShrink();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListJobs"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListJobsResponse>();
}

/**
 * @summary Queries the jobs in a cluster.
 *
 * @param request ListJobsRequest
 * @return ListJobsResponse
 */
ListJobsResponse Client::listJobs(const ListJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listJobsWithOptions(request, runtime);
}

/**
 * @summary Queries the nodes of an Elastic High Performance Computing (E-HPC) cluster.
 *
 * @param tmpReq ListNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNodesResponse
 */
ListNodesResponse Client::listNodesWithOptions(const ListNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListNodesShrinkRequest request = ListNodesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHostnames()) {
    request.setHostnamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHostnames(), "Hostnames", "json"));
  }

  if (!!tmpReq.hasPrivateIpAddress()) {
    request.setPrivateIpAddressShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPrivateIpAddress(), "PrivateIpAddress", "json"));
  }

  if (!!tmpReq.hasQueueNames()) {
    request.setQueueNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQueueNames(), "QueueNames", "json"));
  }

  if (!!tmpReq.hasStatus()) {
    request.setStatusShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStatus(), "Status", "json"));
  }

  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasHostnamesShrink()) {
    query["Hostnames"] = request.getHostnamesShrink();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPrivateIpAddressShrink()) {
    query["PrivateIpAddress"] = request.getPrivateIpAddressShrink();
  }

  if (!!request.hasQueueNamesShrink()) {
    query["QueueNames"] = request.getQueueNamesShrink();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.getSequence();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasStatusShrink()) {
    query["Status"] = request.getStatusShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNodes"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNodesResponse>();
}

/**
 * @summary Queries the nodes of an Elastic High Performance Computing (E-HPC) cluster.
 *
 * @param request ListNodesRequest
 * @return ListNodesResponse
 */
ListNodesResponse Client::listNodes(const ListNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNodesWithOptions(request, runtime);
}

/**
 * @summary Queries queues in an Elastic High Performance Computing (E-HPC) cluster.
 *
 * @param tmpReq ListQueuesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQueuesResponse
 */
ListQueuesResponse Client::listQueuesWithOptions(const ListQueuesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListQueuesShrinkRequest request = ListQueuesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasQueueNames()) {
    request.setQueueNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQueueNames(), "QueueNames", "json"));
  }

  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasQueueNamesShrink()) {
    query["QueueNames"] = request.getQueueNamesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListQueues"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQueuesResponse>();
}

/**
 * @summary Queries queues in an Elastic High Performance Computing (E-HPC) cluster.
 *
 * @param request ListQueuesRequest
 * @return ListQueuesResponse
 */
ListQueuesResponse Client::listQueues(const ListQueuesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listQueuesWithOptions(request, runtime);
}

/**
 * @summary 查询产品支持的地域列表。
 *
 * @param request ListRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRegionsResponse
 */
ListRegionsResponse Client::listRegionsWithOptions(const ListRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasSpecCode()) {
    query["SpecCode"] = request.getSpecCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRegions"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRegionsResponse>();
}

/**
 * @summary 查询产品支持的地域列表。
 *
 * @param request ListRegionsRequest
 * @return ListRegionsResponse
 */
ListRegionsResponse Client::listRegions(const ListRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries the shared storage that is attached to a cluster.
 *
 * @param request ListSharedStoragesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSharedStoragesResponse
 */
ListSharedStoragesResponse Client::listSharedStoragesWithOptions(const ListSharedStoragesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasFileSystemType()) {
    query["FileSystemType"] = request.getFileSystemType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSharedStorages"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSharedStoragesResponse>();
}

/**
 * @summary Queries the shared storage that is attached to a cluster.
 *
 * @param request ListSharedStoragesRequest
 * @return ListSharedStoragesResponse
 */
ListSharedStoragesResponse Client::listSharedStorages(const ListSharedStoragesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSharedStoragesWithOptions(request, runtime);
}

/**
 * @summary Queries the software that can be installed in an Elastic High Performance Computing (E-HPC) cluster.
 *
 * @param request ListSoftwaresRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSoftwaresResponse
 */
ListSoftwaresResponse Client::listSoftwaresWithOptions(const ListSoftwaresRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSoftwares"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSoftwaresResponse>();
}

/**
 * @summary Queries the software that can be installed in an Elastic High Performance Computing (E-HPC) cluster.
 *
 * @param request ListSoftwaresRequest
 * @return ListSoftwaresResponse
 */
ListSoftwaresResponse Client::listSoftwares(const ListSoftwaresRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSoftwaresWithOptions(request, runtime);
}

/**
 * @summary Queries the users of a cluster.
 *
 * @param request ListUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsersWithOptions(const ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUsers"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUsersResponse>();
}

/**
 * @summary Queries the users of a cluster.
 *
 * @param request ListUsersRequest
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsers(const ListUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUsersWithOptions(request, runtime);
}

/**
 * @summary Stops uncompleted jobs in a batch in an Elastic High Performance Computing (E-HPC) cluster.
 *
 * @param tmpReq StopJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopJobsResponse
 */
StopJobsResponse Client::stopJobsWithOptions(const StopJobsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StopJobsShrinkRequest request = StopJobsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasJobIds()) {
    request.setJobIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getJobIds(), "JobIds", "json"));
  }

  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasJobIdsShrink()) {
    query["JobIds"] = request.getJobIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopJobs"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopJobsResponse>();
}

/**
 * @summary Stops uncompleted jobs in a batch in an Elastic High Performance Computing (E-HPC) cluster.
 *
 * @param request StopJobsRequest
 * @return StopJobsResponse
 */
StopJobsResponse Client::stopJobs(const StopJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopJobsWithOptions(request, runtime);
}

/**
 * @summary Uninstalls an addon.
 *
 * @description ## [](#)Usage notes
 * Take note of the following items when you call this operation:
 * *   The cluster must be in the `Running` state.
 * *   Clusters fall into the following types:
 *     *   Regular clusters on Alibaba Cloud Public Cloud
 *     *   Managed clusters on Alibaba Cloud Public Cloud
 *
 * @param request UnInstallAddonRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnInstallAddonResponse
 */
UnInstallAddonResponse Client::unInstallAddonWithOptions(const UnInstallAddonRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddonId()) {
    query["AddonId"] = request.getAddonId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnInstallAddon"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnInstallAddonResponse>();
}

/**
 * @summary Uninstalls an addon.
 *
 * @description ## [](#)Usage notes
 * Take note of the following items when you call this operation:
 * *   The cluster must be in the `Running` state.
 * *   Clusters fall into the following types:
 *     *   Regular clusters on Alibaba Cloud Public Cloud
 *     *   Managed clusters on Alibaba Cloud Public Cloud
 *
 * @param request UnInstallAddonRequest
 * @return UnInstallAddonResponse
 */
UnInstallAddonResponse Client::unInstallAddon(const UnInstallAddonRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unInstallAddonWithOptions(request, runtime);
}

/**
 * @summary Uninstalls software systems from an Enterprise High Performance Computing (E-HPC) cluster.
 *
 * @description ## Interface Description
 * When calling this interface, please note:
 * The cluster status must be `Running`.
 *
 * @param tmpReq UninstallSoftwaresRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UninstallSoftwaresResponse
 */
UninstallSoftwaresResponse Client::uninstallSoftwaresWithOptions(const UninstallSoftwaresRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UninstallSoftwaresShrinkRequest request = UninstallSoftwaresShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAdditionalPackages()) {
    request.setAdditionalPackagesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAdditionalPackages(), "AdditionalPackages", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UninstallSoftwares"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UninstallSoftwaresResponse>();
}

/**
 * @summary Uninstalls software systems from an Enterprise High Performance Computing (E-HPC) cluster.
 *
 * @description ## Interface Description
 * When calling this interface, please note:
 * The cluster status must be `Running`.
 *
 * @param request UninstallSoftwaresRequest
 * @return UninstallSoftwaresResponse
 */
UninstallSoftwaresResponse Client::uninstallSoftwares(const UninstallSoftwaresRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uninstallSoftwaresWithOptions(request, runtime);
}

/**
 * @summary Modify the basic information of a specified cluster.
 *
 * @param tmpReq UpdateClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateClusterResponse
 */
UpdateClusterResponse Client::updateClusterWithOptions(const UpdateClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateClusterShrinkRequest request = UpdateClusterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasClusterCustomConfiguration()) {
    request.setClusterCustomConfigurationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getClusterCustomConfiguration(), "ClusterCustomConfiguration", "json"));
  }

  if (!!tmpReq.hasMonitorSpec()) {
    request.setMonitorSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMonitorSpec(), "MonitorSpec", "json"));
  }

  if (!!tmpReq.hasSchedulerSpec()) {
    request.setSchedulerSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSchedulerSpec(), "SchedulerSpec", "json"));
  }

  json query = {};
  if (!!request.hasClientVersion()) {
    query["ClientVersion"] = request.getClientVersion();
  }

  if (!!request.hasClusterCustomConfigurationShrink()) {
    query["ClusterCustomConfiguration"] = request.getClusterCustomConfigurationShrink();
  }

  if (!!request.hasClusterDescription()) {
    query["ClusterDescription"] = request.getClusterDescription();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasDeletionProtection()) {
    query["DeletionProtection"] = request.getDeletionProtection();
  }

  if (!!request.hasEnableScaleIn()) {
    query["EnableScaleIn"] = request.getEnableScaleIn();
  }

  if (!!request.hasEnableScaleOut()) {
    query["EnableScaleOut"] = request.getEnableScaleOut();
  }

  if (!!request.hasGrowInterval()) {
    query["GrowInterval"] = request.getGrowInterval();
  }

  if (!!request.hasIdleInterval()) {
    query["IdleInterval"] = request.getIdleInterval();
  }

  if (!!request.hasMaxCoreCount()) {
    query["MaxCoreCount"] = request.getMaxCoreCount();
  }

  if (!!request.hasMaxCount()) {
    query["MaxCount"] = request.getMaxCount();
  }

  if (!!request.hasMonitorSpecShrink()) {
    query["MonitorSpec"] = request.getMonitorSpecShrink();
  }

  if (!!request.hasSchedulerSpecShrink()) {
    query["SchedulerSpec"] = request.getSchedulerSpecShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCluster"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateClusterResponse>();
}

/**
 * @summary Modify the basic information of a specified cluster.
 *
 * @param request UpdateClusterRequest
 * @return UpdateClusterResponse
 */
UpdateClusterResponse Client::updateCluster(const UpdateClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateClusterWithOptions(request, runtime);
}

/**
 * @summary Updates the configurations of compute nodes in an Enterprise High Performance Computing (E-HPC) cluster.
 *
 * @description ## [](#)Usage notes
 * Before you delete a compute node, we recommend that you export all job data from the node to prevent data loss.
 *
 * @param tmpReq UpdateNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNodesResponse
 */
UpdateNodesResponse Client::updateNodesWithOptions(const UpdateNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateNodesShrinkRequest request = UpdateNodesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstances()) {
    request.setInstancesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstances(), "Instances", "json"));
  }

  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasInstancesShrink()) {
    query["Instances"] = request.getInstancesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateNodes"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNodesResponse>();
}

/**
 * @summary Updates the configurations of compute nodes in an Enterprise High Performance Computing (E-HPC) cluster.
 *
 * @description ## [](#)Usage notes
 * Before you delete a compute node, we recommend that you export all job data from the node to prevent data loss.
 *
 * @param request UpdateNodesRequest
 * @return UpdateNodesResponse
 */
UpdateNodesResponse Client::updateNodes(const UpdateNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateNodesWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a queue in an Elastic High Performance Computing (E-HPC) cluster.
 *
 * @param tmpReq UpdateQueueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateQueueResponse
 */
UpdateQueueResponse Client::updateQueueWithOptions(const UpdateQueueRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateQueueShrinkRequest request = UpdateQueueShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasQueue()) {
    request.setQueueShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQueue(), "Queue", "json"));
  }

  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasQueueShrink()) {
    query["Queue"] = request.getQueueShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateQueue"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateQueueResponse>();
}

/**
 * @summary Modifies the configurations of a queue in an Elastic High Performance Computing (E-HPC) cluster.
 *
 * @param request UpdateQueueRequest
 * @return UpdateQueueResponse
 */
UpdateQueueResponse Client::updateQueue(const UpdateQueueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateQueueWithOptions(request, runtime);
}

/**
 * @summary Updates the information of a user in an Elastic High Performance Computing (E-HPC) cluster, including the user group and password.
 *
 * @param request UpdateUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUserWithOptions(const UpdateUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasGroup()) {
    query["Group"] = request.getGroup();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateUser"},
    {"version" , "2024-07-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserResponse>();
}

/**
 * @summary Updates the information of a user in an Elastic High Performance Computing (E-HPC) cluster, including the user group and password.
 *
 * @param request UpdateUserRequest
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUser(const UpdateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace EHPC20240730