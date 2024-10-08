// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/hbr_20170908.hpp>
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

using namespace Alibabacloud_Hbr20170908;

Alibabacloud_Hbr20170908::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _signatureAlgorithm = make_shared<string>("v2");
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-2-pop", "hbr.aliyuncs.com"},
    {"cn-beijing-finance-1", "hbr.aliyuncs.com"},
    {"cn-beijing-finance-pop", "hbr.aliyuncs.com"},
    {"cn-beijing-gov-1", "hbr.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "hbr.aliyuncs.com"},
    {"cn-edge-1", "hbr.aliyuncs.com"},
    {"cn-fujian", "hbr.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "hbr.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "hbr.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "hbr.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "hbr.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "hbr.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "hbr.aliyuncs.com"},
    {"cn-hangzhou-test-306", "hbr.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "hbr.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "hbr.aliyuncs.com"},
    {"cn-qingdao-nebula", "hbr.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "hbr.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "hbr.aliyuncs.com"},
    {"cn-shanghai-inner", "hbr.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "hbr.aliyuncs.com"},
    {"cn-shenzhen-inner", "hbr.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "hbr.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "hbr.aliyuncs.com"},
    {"cn-wuhan", "hbr.aliyuncs.com"},
    {"cn-wulanchabu", "hbr.aliyuncs.com"},
    {"cn-yushanfang", "hbr.aliyuncs.com"},
    {"cn-zhangbei", "hbr.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "hbr.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "hbr.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "hbr.aliyuncs.com"},
    {"eu-west-1-oxs", "hbr.aliyuncs.com"},
    {"rus-west-1-pop", "hbr.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("hbr"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Hbr20170908::Client::getEndpoint(shared_ptr<string> productId,
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

AddContainerClusterResponse Alibabacloud_Hbr20170908::Client::addContainerClusterWithOptions(shared_ptr<AddContainerClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    query->insert(pair<string, string>("ClusterType", *request->clusterType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    query->insert(pair<string, string>("Identifier", *request->identifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkType)) {
    query->insert(pair<string, string>("NetworkType", *request->networkType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddContainerCluster"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddContainerClusterResponse(callApi(params, req, runtime));
}

AddContainerClusterResponse Alibabacloud_Hbr20170908::Client::addContainerCluster(shared_ptr<AddContainerClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addContainerClusterWithOptions(request, runtime);
}

CancelBackupJobResponse Alibabacloud_Hbr20170908::Client::cancelBackupJobWithOptions(shared_ptr<CancelBackupJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelBackupJob"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelBackupJobResponse(callApi(params, req, runtime));
}

CancelBackupJobResponse Alibabacloud_Hbr20170908::Client::cancelBackupJob(shared_ptr<CancelBackupJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelBackupJobWithOptions(request, runtime);
}

CancelRestoreJobResponse Alibabacloud_Hbr20170908::Client::cancelRestoreJobWithOptions(shared_ptr<CancelRestoreJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->restoreId)) {
    query->insert(pair<string, string>("RestoreId", *request->restoreId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelRestoreJob"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelRestoreJobResponse(callApi(params, req, runtime));
}

CancelRestoreJobResponse Alibabacloud_Hbr20170908::Client::cancelRestoreJob(shared_ptr<CancelRestoreJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelRestoreJobWithOptions(request, runtime);
}

ChangeResourceGroupResponse Alibabacloud_Hbr20170908::Client::changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->newResourceGroupId)) {
    body->insert(pair<string, string>("NewResourceGroupId", *request->newResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    body->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    body->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeResourceGroup"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeResourceGroupResponse(callApi(params, req, runtime));
}

ChangeResourceGroupResponse Alibabacloud_Hbr20170908::Client::changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeResourceGroupWithOptions(request, runtime);
}

CheckRoleResponse Alibabacloud_Hbr20170908::Client::checkRoleWithOptions(shared_ptr<CheckRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkRoleType)) {
    query->insert(pair<string, string>("CheckRoleType", *request->checkRoleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crossAccountRoleName)) {
    query->insert(pair<string, string>("CrossAccountRoleName", *request->crossAccountRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->crossAccountUserId)) {
    query->insert(pair<string, long>("CrossAccountUserId", *request->crossAccountUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckRole"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckRoleResponse(callApi(params, req, runtime));
}

CheckRoleResponse Alibabacloud_Hbr20170908::Client::checkRole(shared_ptr<CheckRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkRoleWithOptions(request, runtime);
}

CreateBackupJobResponse Alibabacloud_Hbr20170908::Client::createBackupJobWithOptions(shared_ptr<CreateBackupJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateBackupJobShrinkRequest> request = make_shared<CreateBackupJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->detail)) {
    request->detailShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->detail, make_shared<string>("Detail"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupType)) {
    query->insert(pair<string, string>("BackupType", *request->backupType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->containerClusterId)) {
    query->insert(pair<string, string>("ContainerClusterId", *request->containerClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->containerResources)) {
    query->insert(pair<string, string>("ContainerResources", *request->containerResources));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crossAccountRoleName)) {
    query->insert(pair<string, string>("CrossAccountRoleName", *request->crossAccountRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crossAccountType)) {
    query->insert(pair<string, string>("CrossAccountType", *request->crossAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->crossAccountUserId)) {
    query->insert(pair<string, long>("CrossAccountUserId", *request->crossAccountUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->detailShrink)) {
    query->insert(pair<string, string>("Detail", *request->detailShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->exclude)) {
    query->insert(pair<string, string>("Exclude", *request->exclude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->include)) {
    query->insert(pair<string, string>("Include", *request->include));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->initiatedByAck)) {
    query->insert(pair<string, bool>("InitiatedByAck", *request->initiatedByAck));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobName)) {
    query->insert(pair<string, string>("JobName", *request->jobName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->options)) {
    query->insert(pair<string, string>("Options", *request->options));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->retention)) {
    query->insert(pair<string, long>("Retention", *request->retention));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->speedLimit)) {
    query->insert(pair<string, string>("SpeedLimit", *request->speedLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBackupJob"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBackupJobResponse(callApi(params, req, runtime));
}

CreateBackupJobResponse Alibabacloud_Hbr20170908::Client::createBackupJob(shared_ptr<CreateBackupJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBackupJobWithOptions(request, runtime);
}

CreateBackupPlanResponse Alibabacloud_Hbr20170908::Client::createBackupPlanWithOptions(shared_ptr<CreateBackupPlanRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateBackupPlanShrinkRequest> request = make_shared<CreateBackupPlanShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->destDataSourceDetail)) {
    request->destDataSourceDetailShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->destDataSourceDetail, make_shared<string>("DestDataSourceDetail"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->detail)) {
    request->detailShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->detail, make_shared<string>("Detail"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<OtsDetail>(tmpReq->otsDetail)) {
    request->otsDetailShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->otsDetail, make_shared<string>("OtsDetail"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupType)) {
    query->insert(pair<string, string>("BackupType", *request->backupType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bucket)) {
    query->insert(pair<string, string>("Bucket", *request->bucket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeListPath)) {
    query->insert(pair<string, string>("ChangeListPath", *request->changeListPath));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createTime)) {
    query->insert(pair<string, long>("CreateTime", *request->createTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crossAccountRoleName)) {
    query->insert(pair<string, string>("CrossAccountRoleName", *request->crossAccountRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crossAccountType)) {
    query->insert(pair<string, string>("CrossAccountType", *request->crossAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->crossAccountUserId)) {
    query->insert(pair<string, long>("CrossAccountUserId", *request->crossAccountUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destDataSourceDetailShrink)) {
    query->insert(pair<string, string>("DestDataSourceDetail", *request->destDataSourceDetailShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destDataSourceId)) {
    query->insert(pair<string, string>("DestDataSourceId", *request->destDataSourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destSourceType)) {
    query->insert(pair<string, string>("DestSourceType", *request->destSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->detailShrink)) {
    query->insert(pair<string, string>("Detail", *request->detailShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->disabled)) {
    query->insert(pair<string, bool>("Disabled", *request->disabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSystemId)) {
    query->insert(pair<string, string>("FileSystemId", *request->fileSystemId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->keepLatestSnapshots)) {
    query->insert(pair<string, long>("KeepLatestSnapshots", *request->keepLatestSnapshots));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->planName)) {
    query->insert(pair<string, string>("PlanName", *request->planName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prefix)) {
    query->insert(pair<string, string>("Prefix", *request->prefix));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->retention)) {
    query->insert(pair<string, long>("Retention", *request->retention));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schedule)) {
    query->insert(pair<string, string>("Schedule", *request->schedule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->udmRegionId)) {
    query->insert(pair<string, string>("UdmRegionId", *request->udmRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->exclude)) {
    body->insert(pair<string, string>("Exclude", *request->exclude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->include)) {
    body->insert(pair<string, string>("Include", *request->include));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    body->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->options)) {
    body->insert(pair<string, string>("Options", *request->options));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->otsDetailShrink)) {
    body->insert(pair<string, string>("OtsDetail", *request->otsDetailShrink));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->path)) {
    body->insert(pair<string, vector<string>>("Path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateBackupPlanShrinkRequestRule>>(request->rule)) {
    body->insert(pair<string, vector<CreateBackupPlanShrinkRequestRule>>("Rule", *request->rule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->speedLimit)) {
    body->insert(pair<string, string>("SpeedLimit", *request->speedLimit));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBackupPlan"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBackupPlanResponse(callApi(params, req, runtime));
}

CreateBackupPlanResponse Alibabacloud_Hbr20170908::Client::createBackupPlan(shared_ptr<CreateBackupPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBackupPlanWithOptions(request, runtime);
}

CreateClientsResponse Alibabacloud_Hbr20170908::Client::createClientsWithOptions(shared_ptr<CreateClientsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertSetting)) {
    query->insert(pair<string, string>("AlertSetting", *request->alertSetting));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crossAccountRoleName)) {
    query->insert(pair<string, string>("CrossAccountRoleName", *request->crossAccountRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crossAccountType)) {
    query->insert(pair<string, string>("CrossAccountType", *request->crossAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->crossAccountUserId)) {
    query->insert(pair<string, long>("CrossAccountUserId", *request->crossAccountUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useHttps)) {
    query->insert(pair<string, bool>("UseHttps", *request->useHttps));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateClients"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateClientsResponse(callApi(params, req, runtime));
}

CreateClientsResponse Alibabacloud_Hbr20170908::Client::createClients(shared_ptr<CreateClientsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createClientsWithOptions(request, runtime);
}

CreateHanaBackupPlanResponse Alibabacloud_Hbr20170908::Client::createHanaBackupPlanWithOptions(shared_ptr<CreateHanaBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPrefix)) {
    query->insert(pair<string, string>("BackupPrefix", *request->backupPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupType)) {
    query->insert(pair<string, string>("BackupType", *request->backupType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseName)) {
    query->insert(pair<string, string>("DatabaseName", *request->databaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->planName)) {
    query->insert(pair<string, string>("PlanName", *request->planName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schedule)) {
    query->insert(pair<string, string>("Schedule", *request->schedule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateHanaBackupPlan"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateHanaBackupPlanResponse(callApi(params, req, runtime));
}

CreateHanaBackupPlanResponse Alibabacloud_Hbr20170908::Client::createHanaBackupPlan(shared_ptr<CreateHanaBackupPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createHanaBackupPlanWithOptions(request, runtime);
}

CreateHanaInstanceResponse Alibabacloud_Hbr20170908::Client::createHanaInstanceWithOptions(shared_ptr<CreateHanaInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertSetting)) {
    query->insert(pair<string, string>("AlertSetting", *request->alertSetting));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crossAccountRoleName)) {
    query->insert(pair<string, string>("CrossAccountRoleName", *request->crossAccountRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crossAccountType)) {
    query->insert(pair<string, string>("CrossAccountType", *request->crossAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->crossAccountUserId)) {
    query->insert(pair<string, long>("CrossAccountUserId", *request->crossAccountUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsInstanceId)) {
    query->insert(pair<string, string>("EcsInstanceId", *request->ecsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hanaName)) {
    query->insert(pair<string, string>("HanaName", *request->hanaName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->host)) {
    query->insert(pair<string, string>("Host", *request->host));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceNumber)) {
    query->insert(pair<string, long>("InstanceNumber", *request->instanceNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sid)) {
    query->insert(pair<string, string>("Sid", *request->sid));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useSsl)) {
    query->insert(pair<string, bool>("UseSsl", *request->useSsl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    query->insert(pair<string, string>("UserName", *request->userName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->validateCertificate)) {
    query->insert(pair<string, bool>("ValidateCertificate", *request->validateCertificate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateHanaInstance"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateHanaInstanceResponse(callApi(params, req, runtime));
}

CreateHanaInstanceResponse Alibabacloud_Hbr20170908::Client::createHanaInstance(shared_ptr<CreateHanaInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createHanaInstanceWithOptions(request, runtime);
}

CreateHanaRestoreResponse Alibabacloud_Hbr20170908::Client::createHanaRestoreWithOptions(shared_ptr<CreateHanaRestoreRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->backupId)) {
    query->insert(pair<string, long>("BackupId", *request->backupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPrefix)) {
    query->insert(pair<string, string>("BackupPrefix", *request->backupPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->checkAccess)) {
    query->insert(pair<string, bool>("CheckAccess", *request->checkAccess));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->clearLog)) {
    query->insert(pair<string, bool>("ClearLog", *request->clearLog));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseName)) {
    query->insert(pair<string, string>("DatabaseName", *request->databaseName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->logPosition)) {
    query->insert(pair<string, long>("LogPosition", *request->logPosition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterClientId)) {
    query->insert(pair<string, string>("MasterClientId", *request->masterClientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mode)) {
    query->insert(pair<string, string>("Mode", *request->mode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->recoveryPointInTime)) {
    query->insert(pair<string, long>("RecoveryPointInTime", *request->recoveryPointInTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sidAdmin)) {
    query->insert(pair<string, string>("SidAdmin", *request->sidAdmin));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceClusterId)) {
    query->insert(pair<string, string>("SourceClusterId", *request->sourceClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->systemCopy)) {
    query->insert(pair<string, bool>("SystemCopy", *request->systemCopy));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useCatalog)) {
    query->insert(pair<string, bool>("UseCatalog", *request->useCatalog));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useDelta)) {
    query->insert(pair<string, bool>("UseDelta", *request->useDelta));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->volumeId)) {
    query->insert(pair<string, long>("VolumeId", *request->volumeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateHanaRestore"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateHanaRestoreResponse(callApi(params, req, runtime));
}

CreateHanaRestoreResponse Alibabacloud_Hbr20170908::Client::createHanaRestore(shared_ptr<CreateHanaRestoreRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createHanaRestoreWithOptions(request, runtime);
}

CreatePolicyBindingsResponse Alibabacloud_Hbr20170908::Client::createPolicyBindingsWithOptions(shared_ptr<CreatePolicyBindingsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreatePolicyBindingsShrinkRequest> request = make_shared<CreatePolicyBindingsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreatePolicyBindingsRequestPolicyBindingList>>(tmpReq->policyBindingList)) {
    request->policyBindingListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->policyBindingList, make_shared<string>("PolicyBindingList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->policyBindingListShrink)) {
    query->insert(pair<string, string>("PolicyBindingList", *request->policyBindingListShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    body->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePolicyBindings"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePolicyBindingsResponse(callApi(params, req, runtime));
}

CreatePolicyBindingsResponse Alibabacloud_Hbr20170908::Client::createPolicyBindings(shared_ptr<CreatePolicyBindingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPolicyBindingsWithOptions(request, runtime);
}

CreatePolicyV2Response Alibabacloud_Hbr20170908::Client::createPolicyV2WithOptions(shared_ptr<CreatePolicyV2Request> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreatePolicyV2ShrinkRequest> request = make_shared<CreatePolicyV2ShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreatePolicyV2RequestRules>>(tmpReq->rules)) {
    request->rulesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->rules, make_shared<string>("Rules"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->policyDescription)) {
    body->insert(pair<string, string>("PolicyDescription", *request->policyDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyName)) {
    body->insert(pair<string, string>("PolicyName", *request->policyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyType)) {
    body->insert(pair<string, string>("PolicyType", *request->policyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rulesShrink)) {
    body->insert(pair<string, string>("Rules", *request->rulesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePolicyV2"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePolicyV2Response(callApi(params, req, runtime));
}

CreatePolicyV2Response Alibabacloud_Hbr20170908::Client::createPolicyV2(shared_ptr<CreatePolicyV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPolicyV2WithOptions(request, runtime);
}

CreateReplicationVaultResponse Alibabacloud_Hbr20170908::Client::createReplicationVaultWithOptions(shared_ptr<CreateReplicationVaultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptType)) {
    query->insert(pair<string, string>("EncryptType", *request->encryptType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->kmsKeyId)) {
    query->insert(pair<string, string>("KmsKeyId", *request->kmsKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->redundancyType)) {
    query->insert(pair<string, string>("RedundancyType", *request->redundancyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->replicationSourceRegionId)) {
    query->insert(pair<string, string>("ReplicationSourceRegionId", *request->replicationSourceRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->replicationSourceVaultId)) {
    query->insert(pair<string, string>("ReplicationSourceVaultId", *request->replicationSourceVaultId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultName)) {
    query->insert(pair<string, string>("VaultName", *request->vaultName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultRegionId)) {
    query->insert(pair<string, string>("VaultRegionId", *request->vaultRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultStorageClass)) {
    query->insert(pair<string, string>("VaultStorageClass", *request->vaultStorageClass));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateReplicationVault"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateReplicationVaultResponse(callApi(params, req, runtime));
}

CreateReplicationVaultResponse Alibabacloud_Hbr20170908::Client::createReplicationVault(shared_ptr<CreateReplicationVaultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createReplicationVaultWithOptions(request, runtime);
}

CreateRestoreJobResponse Alibabacloud_Hbr20170908::Client::createRestoreJobWithOptions(shared_ptr<CreateRestoreJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateRestoreJobShrinkRequest> request = make_shared<CreateRestoreJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->failbackDetail)) {
    request->failbackDetailShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->failbackDetail, make_shared<string>("FailbackDetail"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<OtsTableRestoreDetail>(tmpReq->otsDetail)) {
    request->otsDetailShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->otsDetail, make_shared<string>("OtsDetail"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->udmDetail)) {
    request->udmDetailShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->udmDetail, make_shared<string>("UdmDetail"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->crossAccountRoleName)) {
    query->insert(pair<string, string>("CrossAccountRoleName", *request->crossAccountRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crossAccountType)) {
    query->insert(pair<string, string>("CrossAccountType", *request->crossAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->crossAccountUserId)) {
    query->insert(pair<string, long>("CrossAccountUserId", *request->crossAccountUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->failbackDetailShrink)) {
    query->insert(pair<string, string>("FailbackDetail", *request->failbackDetailShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->initiatedByAck)) {
    query->insert(pair<string, bool>("InitiatedByAck", *request->initiatedByAck));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->options)) {
    query->insert(pair<string, string>("Options", *request->options));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->restoreType)) {
    query->insert(pair<string, string>("RestoreType", *request->restoreType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotHash)) {
    query->insert(pair<string, string>("SnapshotHash", *request->snapshotHash));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotId)) {
    query->insert(pair<string, string>("SnapshotId", *request->snapshotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetBucket)) {
    query->insert(pair<string, string>("TargetBucket", *request->targetBucket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetContainer)) {
    query->insert(pair<string, string>("TargetContainer", *request->targetContainer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetContainerClusterId)) {
    query->insert(pair<string, string>("TargetContainerClusterId", *request->targetContainerClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->targetCreateTime)) {
    query->insert(pair<string, long>("TargetCreateTime", *request->targetCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetFileSystemId)) {
    query->insert(pair<string, string>("TargetFileSystemId", *request->targetFileSystemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetInstanceName)) {
    query->insert(pair<string, string>("TargetInstanceName", *request->targetInstanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetPrefix)) {
    query->insert(pair<string, string>("TargetPrefix", *request->targetPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetTableName)) {
    query->insert(pair<string, string>("TargetTableName", *request->targetTableName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->targetTime)) {
    query->insert(pair<string, long>("TargetTime", *request->targetTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->udmDetailShrink)) {
    query->insert(pair<string, string>("UdmDetail", *request->udmDetailShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->udmRegionId)) {
    query->insert(pair<string, string>("UdmRegionId", *request->udmRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->exclude)) {
    body->insert(pair<string, string>("Exclude", *request->exclude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->include)) {
    body->insert(pair<string, string>("Include", *request->include));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->otsDetailShrink)) {
    body->insert(pair<string, string>("OtsDetail", *request->otsDetailShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetInstanceId)) {
    body->insert(pair<string, string>("TargetInstanceId", *request->targetInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetPath)) {
    body->insert(pair<string, string>("TargetPath", *request->targetPath));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRestoreJob"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRestoreJobResponse(callApi(params, req, runtime));
}

CreateRestoreJobResponse Alibabacloud_Hbr20170908::Client::createRestoreJob(shared_ptr<CreateRestoreJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRestoreJobWithOptions(request, runtime);
}

CreateTempFileUploadUrlResponse Alibabacloud_Hbr20170908::Client::createTempFileUploadUrlWithOptions(shared_ptr<CreateTempFileUploadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("FileName", *request->fileName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTempFileUploadUrl"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTempFileUploadUrlResponse(callApi(params, req, runtime));
}

CreateTempFileUploadUrlResponse Alibabacloud_Hbr20170908::Client::createTempFileUploadUrl(shared_ptr<CreateTempFileUploadUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTempFileUploadUrlWithOptions(request, runtime);
}

CreateVaultResponse Alibabacloud_Hbr20170908::Client::createVaultWithOptions(shared_ptr<CreateVaultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptType)) {
    query->insert(pair<string, string>("EncryptType", *request->encryptType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->kmsKeyId)) {
    query->insert(pair<string, string>("KmsKeyId", *request->kmsKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultName)) {
    query->insert(pair<string, string>("VaultName", *request->vaultName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultRegionId)) {
    query->insert(pair<string, string>("VaultRegionId", *request->vaultRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultStorageClass)) {
    query->insert(pair<string, string>("VaultStorageClass", *request->vaultStorageClass));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultType)) {
    query->insert(pair<string, string>("VaultType", *request->vaultType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVault"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateVaultResponse(callApi(params, req, runtime));
}

CreateVaultResponse Alibabacloud_Hbr20170908::Client::createVault(shared_ptr<CreateVaultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVaultWithOptions(request, runtime);
}

DeleteBackupClientResponse Alibabacloud_Hbr20170908::Client::deleteBackupClientWithOptions(shared_ptr<DeleteBackupClientRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBackupClient"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteBackupClientResponse(callApi(params, req, runtime));
}

DeleteBackupClientResponse Alibabacloud_Hbr20170908::Client::deleteBackupClient(shared_ptr<DeleteBackupClientRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBackupClientWithOptions(request, runtime);
}

DeleteBackupClientResourceResponse Alibabacloud_Hbr20170908::Client::deleteBackupClientResourceWithOptions(shared_ptr<DeleteBackupClientResourceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteBackupClientResourceShrinkRequest> request = make_shared<DeleteBackupClientResourceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->clientIds)) {
    request->clientIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->clientIds, make_shared<string>("ClientIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientIdsShrink)) {
    query->insert(pair<string, string>("ClientIds", *request->clientIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBackupClientResource"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteBackupClientResourceResponse(callApi(params, req, runtime));
}

DeleteBackupClientResourceResponse Alibabacloud_Hbr20170908::Client::deleteBackupClientResource(shared_ptr<DeleteBackupClientResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBackupClientResourceWithOptions(request, runtime);
}

DeleteBackupPlanResponse Alibabacloud_Hbr20170908::Client::deleteBackupPlanWithOptions(shared_ptr<DeleteBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->planId)) {
    query->insert(pair<string, string>("PlanId", *request->planId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->requireNoRunningJobs)) {
    query->insert(pair<string, bool>("RequireNoRunningJobs", *request->requireNoRunningJobs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBackupPlan"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteBackupPlanResponse(callApi(params, req, runtime));
}

DeleteBackupPlanResponse Alibabacloud_Hbr20170908::Client::deleteBackupPlan(shared_ptr<DeleteBackupPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBackupPlanWithOptions(request, runtime);
}

DeleteClientResponse Alibabacloud_Hbr20170908::Client::deleteClientWithOptions(shared_ptr<DeleteClientRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteClient"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteClientResponse(callApi(params, req, runtime));
}

DeleteClientResponse Alibabacloud_Hbr20170908::Client::deleteClient(shared_ptr<DeleteClientRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteClientWithOptions(request, runtime);
}

DeleteHanaBackupPlanResponse Alibabacloud_Hbr20170908::Client::deleteHanaBackupPlanWithOptions(shared_ptr<DeleteHanaBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->planId)) {
    query->insert(pair<string, string>("PlanId", *request->planId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteHanaBackupPlan"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteHanaBackupPlanResponse(callApi(params, req, runtime));
}

DeleteHanaBackupPlanResponse Alibabacloud_Hbr20170908::Client::deleteHanaBackupPlan(shared_ptr<DeleteHanaBackupPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteHanaBackupPlanWithOptions(request, runtime);
}

DeleteHanaInstanceResponse Alibabacloud_Hbr20170908::Client::deleteHanaInstanceWithOptions(shared_ptr<DeleteHanaInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sid)) {
    query->insert(pair<string, string>("Sid", *request->sid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteHanaInstance"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteHanaInstanceResponse(callApi(params, req, runtime));
}

DeleteHanaInstanceResponse Alibabacloud_Hbr20170908::Client::deleteHanaInstance(shared_ptr<DeleteHanaInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteHanaInstanceWithOptions(request, runtime);
}

DeletePolicyBindingResponse Alibabacloud_Hbr20170908::Client::deletePolicyBindingWithOptions(shared_ptr<DeletePolicyBindingRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeletePolicyBindingShrinkRequest> request = make_shared<DeletePolicyBindingShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->dataSourceIds)) {
    request->dataSourceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dataSourceIds, make_shared<string>("DataSourceIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceIdsShrink)) {
    body->insert(pair<string, string>("DataSourceIds", *request->dataSourceIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    body->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePolicyBinding"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePolicyBindingResponse(callApi(params, req, runtime));
}

DeletePolicyBindingResponse Alibabacloud_Hbr20170908::Client::deletePolicyBinding(shared_ptr<DeletePolicyBindingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePolicyBindingWithOptions(request, runtime);
}

DeletePolicyV2Response Alibabacloud_Hbr20170908::Client::deletePolicyV2WithOptions(shared_ptr<DeletePolicyV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    body->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePolicyV2"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePolicyV2Response(callApi(params, req, runtime));
}

DeletePolicyV2Response Alibabacloud_Hbr20170908::Client::deletePolicyV2(shared_ptr<DeletePolicyV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePolicyV2WithOptions(request, runtime);
}

DeleteSnapshotResponse Alibabacloud_Hbr20170908::Client::deleteSnapshotWithOptions(shared_ptr<DeleteSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->force)) {
    query->insert(pair<string, bool>("Force", *request->force));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotId)) {
    query->insert(pair<string, string>("SnapshotId", *request->snapshotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("Token", *request->token));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSnapshot"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSnapshotResponse(callApi(params, req, runtime));
}

DeleteSnapshotResponse Alibabacloud_Hbr20170908::Client::deleteSnapshot(shared_ptr<DeleteSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSnapshotWithOptions(request, runtime);
}

DeleteUdmDiskResponse Alibabacloud_Hbr20170908::Client::deleteUdmDiskWithOptions(shared_ptr<DeleteUdmDiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->diskId)) {
    query->insert(pair<string, string>("DiskId", *request->diskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUdmDisk"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteUdmDiskResponse(callApi(params, req, runtime));
}

DeleteUdmDiskResponse Alibabacloud_Hbr20170908::Client::deleteUdmDisk(shared_ptr<DeleteUdmDiskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUdmDiskWithOptions(request, runtime);
}

DeleteUdmEcsInstanceResponse Alibabacloud_Hbr20170908::Client::deleteUdmEcsInstanceWithOptions(shared_ptr<DeleteUdmEcsInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUdmEcsInstance"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteUdmEcsInstanceResponse(callApi(params, req, runtime));
}

DeleteUdmEcsInstanceResponse Alibabacloud_Hbr20170908::Client::deleteUdmEcsInstance(shared_ptr<DeleteUdmEcsInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUdmEcsInstanceWithOptions(request, runtime);
}

DeleteVaultResponse Alibabacloud_Hbr20170908::Client::deleteVaultWithOptions(shared_ptr<DeleteVaultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("Token", *request->token));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVault"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteVaultResponse(callApi(params, req, runtime));
}

DeleteVaultResponse Alibabacloud_Hbr20170908::Client::deleteVault(shared_ptr<DeleteVaultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVaultWithOptions(request, runtime);
}

DescribeBackupClientsResponse Alibabacloud_Hbr20170908::Client::describeBackupClientsWithOptions(shared_ptr<DescribeBackupClientsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeBackupClientsShrinkRequest> request = make_shared<DescribeBackupClientsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->clientIds)) {
    request->clientIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->clientIds, make_shared<string>("ClientIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceIds)) {
    request->instanceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceIds, make_shared<string>("InstanceIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientType)) {
    query->insert(pair<string, string>("ClientType", *request->clientType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crossAccountRoleName)) {
    query->insert(pair<string, string>("CrossAccountRoleName", *request->crossAccountRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crossAccountType)) {
    query->insert(pair<string, string>("CrossAccountType", *request->crossAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->crossAccountUserId)) {
    query->insert(pair<string, long>("CrossAccountUserId", *request->crossAccountUserId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientIdsShrink)) {
    body->insert(pair<string, string>("ClientIds", *request->clientIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIdsShrink)) {
    body->insert(pair<string, string>("InstanceIds", *request->instanceIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeBackupClientsShrinkRequestTag>>(request->tag)) {
    body->insert(pair<string, vector<DescribeBackupClientsShrinkRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackupClients"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBackupClientsResponse(callApi(params, req, runtime));
}

DescribeBackupClientsResponse Alibabacloud_Hbr20170908::Client::describeBackupClients(shared_ptr<DescribeBackupClientsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupClientsWithOptions(request, runtime);
}

DescribeBackupJobs2Response Alibabacloud_Hbr20170908::Client::describeBackupJobs2WithOptions(shared_ptr<DescribeBackupJobs2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<DescribeBackupJobs2RequestFilters>>(request->filters)) {
    query->insert(pair<string, vector<DescribeBackupJobs2RequestFilters>>("Filters", *request->filters));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortDirection)) {
    query->insert(pair<string, string>("SortDirection", *request->sortDirection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackupJobs2"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBackupJobs2Response(callApi(params, req, runtime));
}

DescribeBackupJobs2Response Alibabacloud_Hbr20170908::Client::describeBackupJobs2(shared_ptr<DescribeBackupJobs2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupJobs2WithOptions(request, runtime);
}

DescribeBackupPlansResponse Alibabacloud_Hbr20170908::Client::describeBackupPlansWithOptions(shared_ptr<DescribeBackupPlansRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<DescribeBackupPlansRequestFilters>>(request->filters)) {
    query->insert(pair<string, vector<DescribeBackupPlansRequestFilters>>("Filters", *request->filters));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackupPlans"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBackupPlansResponse(callApi(params, req, runtime));
}

DescribeBackupPlansResponse Alibabacloud_Hbr20170908::Client::describeBackupPlans(shared_ptr<DescribeBackupPlansRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupPlansWithOptions(request, runtime);
}

DescribeClientsResponse Alibabacloud_Hbr20170908::Client::describeClientsWithOptions(shared_ptr<DescribeClientsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientType)) {
    query->insert(pair<string, string>("ClientType", *request->clientType));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClients"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClientsResponse(callApi(params, req, runtime));
}

DescribeClientsResponse Alibabacloud_Hbr20170908::Client::describeClients(shared_ptr<DescribeClientsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClientsWithOptions(request, runtime);
}

DescribeContainerClusterResponse Alibabacloud_Hbr20170908::Client::describeContainerClusterWithOptions(shared_ptr<DescribeContainerClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    query->insert(pair<string, string>("Identifier", *request->identifier));
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
    {"action", boost::any(string("DescribeContainerCluster"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeContainerClusterResponse(callApi(params, req, runtime));
}

DescribeContainerClusterResponse Alibabacloud_Hbr20170908::Client::describeContainerCluster(shared_ptr<DescribeContainerClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeContainerClusterWithOptions(request, runtime);
}

DescribeCrossAccountsResponse Alibabacloud_Hbr20170908::Client::describeCrossAccountsWithOptions(shared_ptr<DescribeCrossAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeCrossAccounts"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCrossAccountsResponse(callApi(params, req, runtime));
}

DescribeCrossAccountsResponse Alibabacloud_Hbr20170908::Client::describeCrossAccounts(shared_ptr<DescribeCrossAccountsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCrossAccountsWithOptions(request, runtime);
}

DescribeHanaBackupPlansResponse Alibabacloud_Hbr20170908::Client::describeHanaBackupPlansWithOptions(shared_ptr<DescribeHanaBackupPlansRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseName)) {
    query->insert(pair<string, string>("DatabaseName", *request->databaseName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHanaBackupPlans"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHanaBackupPlansResponse(callApi(params, req, runtime));
}

DescribeHanaBackupPlansResponse Alibabacloud_Hbr20170908::Client::describeHanaBackupPlans(shared_ptr<DescribeHanaBackupPlansRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHanaBackupPlansWithOptions(request, runtime);
}

DescribeHanaBackupSettingResponse Alibabacloud_Hbr20170908::Client::describeHanaBackupSettingWithOptions(shared_ptr<DescribeHanaBackupSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseName)) {
    query->insert(pair<string, string>("DatabaseName", *request->databaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHanaBackupSetting"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHanaBackupSettingResponse(callApi(params, req, runtime));
}

DescribeHanaBackupSettingResponse Alibabacloud_Hbr20170908::Client::describeHanaBackupSetting(shared_ptr<DescribeHanaBackupSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHanaBackupSettingWithOptions(request, runtime);
}

DescribeHanaBackupsAsyncResponse Alibabacloud_Hbr20170908::Client::describeHanaBackupsAsyncWithOptions(shared_ptr<DescribeHanaBackupsAsyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseName)) {
    query->insert(pair<string, string>("DatabaseName", *request->databaseName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeDifferential)) {
    query->insert(pair<string, bool>("IncludeDifferential", *request->includeDifferential));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeIncremental)) {
    query->insert(pair<string, bool>("IncludeIncremental", *request->includeIncremental));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeLog)) {
    query->insert(pair<string, bool>("IncludeLog", *request->includeLog));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->logPosition)) {
    query->insert(pair<string, long>("LogPosition", *request->logPosition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mode)) {
    query->insert(pair<string, string>("Mode", *request->mode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->recoveryPointInTime)) {
    query->insert(pair<string, long>("RecoveryPointInTime", *request->recoveryPointInTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceClusterId)) {
    query->insert(pair<string, string>("SourceClusterId", *request->sourceClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->systemCopy)) {
    query->insert(pair<string, bool>("SystemCopy", *request->systemCopy));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useBackint)) {
    query->insert(pair<string, bool>("UseBackint", *request->useBackint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->volumeId)) {
    query->insert(pair<string, long>("VolumeId", *request->volumeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHanaBackupsAsync"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHanaBackupsAsyncResponse(callApi(params, req, runtime));
}

DescribeHanaBackupsAsyncResponse Alibabacloud_Hbr20170908::Client::describeHanaBackupsAsync(shared_ptr<DescribeHanaBackupsAsyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHanaBackupsAsyncWithOptions(request, runtime);
}

DescribeHanaDatabasesResponse Alibabacloud_Hbr20170908::Client::describeHanaDatabasesWithOptions(shared_ptr<DescribeHanaDatabasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHanaDatabases"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHanaDatabasesResponse(callApi(params, req, runtime));
}

DescribeHanaDatabasesResponse Alibabacloud_Hbr20170908::Client::describeHanaDatabases(shared_ptr<DescribeHanaDatabasesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHanaDatabasesWithOptions(request, runtime);
}

DescribeHanaInstancesResponse Alibabacloud_Hbr20170908::Client::describeHanaInstancesWithOptions(shared_ptr<DescribeHanaInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<DescribeHanaInstancesRequestTag>>(request->tag)) {
    body->insert(pair<string, vector<DescribeHanaInstancesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHanaInstances"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHanaInstancesResponse(callApi(params, req, runtime));
}

DescribeHanaInstancesResponse Alibabacloud_Hbr20170908::Client::describeHanaInstances(shared_ptr<DescribeHanaInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHanaInstancesWithOptions(request, runtime);
}

DescribeHanaRestoresResponse Alibabacloud_Hbr20170908::Client::describeHanaRestoresWithOptions(shared_ptr<DescribeHanaRestoresRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->backupId)) {
    query->insert(pair<string, long>("BackupId", *request->backupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseName)) {
    query->insert(pair<string, string>("DatabaseName", *request->databaseName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->restoreId)) {
    query->insert(pair<string, string>("RestoreId", *request->restoreId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->restoreStatus)) {
    query->insert(pair<string, string>("RestoreStatus", *request->restoreStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHanaRestores"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHanaRestoresResponse(callApi(params, req, runtime));
}

DescribeHanaRestoresResponse Alibabacloud_Hbr20170908::Client::describeHanaRestores(shared_ptr<DescribeHanaRestoresRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHanaRestoresWithOptions(request, runtime);
}

DescribeHanaRetentionSettingResponse Alibabacloud_Hbr20170908::Client::describeHanaRetentionSettingWithOptions(shared_ptr<DescribeHanaRetentionSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseName)) {
    query->insert(pair<string, string>("DatabaseName", *request->databaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHanaRetentionSetting"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHanaRetentionSettingResponse(callApi(params, req, runtime));
}

DescribeHanaRetentionSettingResponse Alibabacloud_Hbr20170908::Client::describeHanaRetentionSetting(shared_ptr<DescribeHanaRetentionSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHanaRetentionSettingWithOptions(request, runtime);
}

DescribeOtsTableSnapshotsResponse Alibabacloud_Hbr20170908::Client::describeOtsTableSnapshotsWithOptions(shared_ptr<DescribeOtsTableSnapshotsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->crossAccountRoleName)) {
    query->insert(pair<string, string>("CrossAccountRoleName", *request->crossAccountRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crossAccountType)) {
    query->insert(pair<string, string>("CrossAccountType", *request->crossAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->crossAccountUserId)) {
    query->insert(pair<string, long>("CrossAccountUserId", *request->crossAccountUserId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    body->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<DescribeOtsTableSnapshotsRequestOtsInstances>>(request->otsInstances)) {
    bodyFlat->insert(pair<string, vector<DescribeOtsTableSnapshotsRequestOtsInstances>>("OtsInstances", *request->otsInstances));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->snapshotIds)) {
    bodyFlat->insert(pair<string, vector<string>>("SnapshotIds", *request->snapshotIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOtsTableSnapshots"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOtsTableSnapshotsResponse(callApi(params, req, runtime));
}

DescribeOtsTableSnapshotsResponse Alibabacloud_Hbr20170908::Client::describeOtsTableSnapshots(shared_ptr<DescribeOtsTableSnapshotsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOtsTableSnapshotsWithOptions(request, runtime);
}

DescribePoliciesV2Response Alibabacloud_Hbr20170908::Client::describePoliciesV2WithOptions(shared_ptr<DescribePoliciesV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    body->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePoliciesV2"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePoliciesV2Response(callApi(params, req, runtime));
}

DescribePoliciesV2Response Alibabacloud_Hbr20170908::Client::describePoliciesV2(shared_ptr<DescribePoliciesV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePoliciesV2WithOptions(request, runtime);
}

DescribePolicyBindingsResponse Alibabacloud_Hbr20170908::Client::describePolicyBindingsWithOptions(shared_ptr<DescribePolicyBindingsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribePolicyBindingsShrinkRequest> request = make_shared<DescribePolicyBindingsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->dataSourceIds)) {
    request->dataSourceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dataSourceIds, make_shared<string>("DataSourceIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<DescribePolicyBindingsShrinkRequestFilters>>(request->filters)) {
    query->insert(pair<string, vector<DescribePolicyBindingsShrinkRequestFilters>>("Filters", *request->filters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceIdsShrink)) {
    body->insert(pair<string, string>("DataSourceIds", *request->dataSourceIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    body->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePolicyBindings"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePolicyBindingsResponse(callApi(params, req, runtime));
}

DescribePolicyBindingsResponse Alibabacloud_Hbr20170908::Client::describePolicyBindings(shared_ptr<DescribePolicyBindingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePolicyBindingsWithOptions(request, runtime);
}

DescribeRecoverableOtsInstancesResponse Alibabacloud_Hbr20170908::Client::describeRecoverableOtsInstancesWithOptions(shared_ptr<DescribeRecoverableOtsInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->crossAccountRoleName)) {
    query->insert(pair<string, string>("CrossAccountRoleName", *request->crossAccountRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crossAccountType)) {
    query->insert(pair<string, string>("CrossAccountType", *request->crossAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->crossAccountUserId)) {
    query->insert(pair<string, long>("CrossAccountUserId", *request->crossAccountUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRecoverableOtsInstances"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRecoverableOtsInstancesResponse(callApi(params, req, runtime));
}

DescribeRecoverableOtsInstancesResponse Alibabacloud_Hbr20170908::Client::describeRecoverableOtsInstances(shared_ptr<DescribeRecoverableOtsInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRecoverableOtsInstancesWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Hbr20170908::Client::describeRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRegionsResponse(callApi(params, req, runtime));
}

DescribeRegionsResponse Alibabacloud_Hbr20170908::Client::describeRegions() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(runtime);
}

DescribeRestoreJobs2Response Alibabacloud_Hbr20170908::Client::describeRestoreJobs2WithOptions(shared_ptr<DescribeRestoreJobs2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<DescribeRestoreJobs2RequestFilters>>(request->filters)) {
    query->insert(pair<string, vector<DescribeRestoreJobs2RequestFilters>>("Filters", *request->filters));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->restoreType)) {
    query->insert(pair<string, string>("RestoreType", *request->restoreType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRestoreJobs2"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRestoreJobs2Response(callApi(params, req, runtime));
}

DescribeRestoreJobs2Response Alibabacloud_Hbr20170908::Client::describeRestoreJobs2(shared_ptr<DescribeRestoreJobs2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRestoreJobs2WithOptions(request, runtime);
}

DescribeTaskResponse Alibabacloud_Hbr20170908::Client::describeTaskWithOptions(shared_ptr<DescribeTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("Token", *request->token));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTask"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTaskResponse(callApi(params, req, runtime));
}

DescribeTaskResponse Alibabacloud_Hbr20170908::Client::describeTask(shared_ptr<DescribeTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTaskWithOptions(request, runtime);
}

DescribeUdmSnapshotsResponse Alibabacloud_Hbr20170908::Client::describeUdmSnapshotsWithOptions(shared_ptr<DescribeUdmSnapshotsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeUdmSnapshotsShrinkRequest> request = make_shared<DescribeUdmSnapshotsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->snapshotIds)) {
    request->snapshotIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->snapshotIds, make_shared<string>("SnapshotIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->diskId)) {
    query->insert(pair<string, string>("DiskId", *request->diskId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->udmRegionId)) {
    query->insert(pair<string, string>("UdmRegionId", *request->udmRegionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotIdsShrink)) {
    body->insert(pair<string, string>("SnapshotIds", *request->snapshotIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUdmSnapshots"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUdmSnapshotsResponse(callApi(params, req, runtime));
}

DescribeUdmSnapshotsResponse Alibabacloud_Hbr20170908::Client::describeUdmSnapshots(shared_ptr<DescribeUdmSnapshotsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUdmSnapshotsWithOptions(request, runtime);
}

DescribeVaultReplicationRegionsResponse Alibabacloud_Hbr20170908::Client::describeVaultReplicationRegionsWithOptions(shared_ptr<DescribeVaultReplicationRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("Token", *request->token));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVaultReplicationRegions"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVaultReplicationRegionsResponse(callApi(params, req, runtime));
}

DescribeVaultReplicationRegionsResponse Alibabacloud_Hbr20170908::Client::describeVaultReplicationRegions(shared_ptr<DescribeVaultReplicationRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVaultReplicationRegionsWithOptions(request, runtime);
}

DescribeVaultsResponse Alibabacloud_Hbr20170908::Client::describeVaultsWithOptions(shared_ptr<DescribeVaultsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultRegionId)) {
    query->insert(pair<string, string>("VaultRegionId", *request->vaultRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultType)) {
    query->insert(pair<string, string>("VaultType", *request->vaultType));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<DescribeVaultsRequestTag>>(request->tag)) {
    body->insert(pair<string, vector<DescribeVaultsRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVaults"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVaultsResponse(callApi(params, req, runtime));
}

DescribeVaultsResponse Alibabacloud_Hbr20170908::Client::describeVaults(shared_ptr<DescribeVaultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVaultsWithOptions(request, runtime);
}

DetachNasFileSystemResponse Alibabacloud_Hbr20170908::Client::detachNasFileSystemWithOptions(shared_ptr<DetachNasFileSystemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createTime)) {
    query->insert(pair<string, string>("CreateTime", *request->createTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crossAccountRoleName)) {
    query->insert(pair<string, string>("CrossAccountRoleName", *request->crossAccountRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crossAccountType)) {
    query->insert(pair<string, string>("CrossAccountType", *request->crossAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->crossAccountUserId)) {
    query->insert(pair<string, long>("CrossAccountUserId", *request->crossAccountUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSystemId)) {
    query->insert(pair<string, string>("FileSystemId", *request->fileSystemId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachNasFileSystem"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachNasFileSystemResponse(callApi(params, req, runtime));
}

DetachNasFileSystemResponse Alibabacloud_Hbr20170908::Client::detachNasFileSystem(shared_ptr<DetachNasFileSystemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachNasFileSystemWithOptions(request, runtime);
}

DisableBackupPlanResponse Alibabacloud_Hbr20170908::Client::disableBackupPlanWithOptions(shared_ptr<DisableBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->planId)) {
    query->insert(pair<string, string>("PlanId", *request->planId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableBackupPlan"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableBackupPlanResponse(callApi(params, req, runtime));
}

DisableBackupPlanResponse Alibabacloud_Hbr20170908::Client::disableBackupPlan(shared_ptr<DisableBackupPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableBackupPlanWithOptions(request, runtime);
}

DisableHanaBackupPlanResponse Alibabacloud_Hbr20170908::Client::disableHanaBackupPlanWithOptions(shared_ptr<DisableHanaBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->planId)) {
    query->insert(pair<string, string>("PlanId", *request->planId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableHanaBackupPlan"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableHanaBackupPlanResponse(callApi(params, req, runtime));
}

DisableHanaBackupPlanResponse Alibabacloud_Hbr20170908::Client::disableHanaBackupPlan(shared_ptr<DisableHanaBackupPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableHanaBackupPlanWithOptions(request, runtime);
}

EnableBackupPlanResponse Alibabacloud_Hbr20170908::Client::enableBackupPlanWithOptions(shared_ptr<EnableBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->planId)) {
    query->insert(pair<string, string>("PlanId", *request->planId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableBackupPlan"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableBackupPlanResponse(callApi(params, req, runtime));
}

EnableBackupPlanResponse Alibabacloud_Hbr20170908::Client::enableBackupPlan(shared_ptr<EnableBackupPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableBackupPlanWithOptions(request, runtime);
}

EnableHanaBackupPlanResponse Alibabacloud_Hbr20170908::Client::enableHanaBackupPlanWithOptions(shared_ptr<EnableHanaBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->planId)) {
    query->insert(pair<string, string>("PlanId", *request->planId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableHanaBackupPlan"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableHanaBackupPlanResponse(callApi(params, req, runtime));
}

EnableHanaBackupPlanResponse Alibabacloud_Hbr20170908::Client::enableHanaBackupPlan(shared_ptr<EnableHanaBackupPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableHanaBackupPlanWithOptions(request, runtime);
}

ExecuteBackupPlanResponse Alibabacloud_Hbr20170908::Client::executeBackupPlanWithOptions(shared_ptr<ExecuteBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->planId)) {
    query->insert(pair<string, string>("PlanId", *request->planId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteBackupPlan"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteBackupPlanResponse(callApi(params, req, runtime));
}

ExecuteBackupPlanResponse Alibabacloud_Hbr20170908::Client::executeBackupPlan(shared_ptr<ExecuteBackupPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executeBackupPlanWithOptions(request, runtime);
}

ExecutePolicyV2Response Alibabacloud_Hbr20170908::Client::executePolicyV2WithOptions(shared_ptr<ExecutePolicyV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceId)) {
    body->insert(pair<string, string>("DataSourceId", *request->dataSourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    body->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecutePolicyV2"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecutePolicyV2Response(callApi(params, req, runtime));
}

ExecutePolicyV2Response Alibabacloud_Hbr20170908::Client::executePolicyV2(shared_ptr<ExecutePolicyV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executePolicyV2WithOptions(request, runtime);
}

GenerateRamPolicyResponse Alibabacloud_Hbr20170908::Client::generateRamPolicyWithOptions(shared_ptr<GenerateRamPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->actionType)) {
    query->insert(pair<string, string>("ActionType", *request->actionType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->requireBasePolicy)) {
    query->insert(pair<string, bool>("RequireBasePolicy", *request->requireBasePolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateRamPolicy"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateRamPolicyResponse(callApi(params, req, runtime));
}

GenerateRamPolicyResponse Alibabacloud_Hbr20170908::Client::generateRamPolicy(shared_ptr<GenerateRamPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateRamPolicyWithOptions(request, runtime);
}

GetTempFileDownloadLinkResponse Alibabacloud_Hbr20170908::Client::getTempFileDownloadLinkWithOptions(shared_ptr<GetTempFileDownloadLinkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tempFileKey)) {
    query->insert(pair<string, string>("TempFileKey", *request->tempFileKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTempFileDownloadLink"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTempFileDownloadLinkResponse(callApi(params, req, runtime));
}

GetTempFileDownloadLinkResponse Alibabacloud_Hbr20170908::Client::getTempFileDownloadLink(shared_ptr<GetTempFileDownloadLinkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTempFileDownloadLinkWithOptions(request, runtime);
}

InstallBackupClientsResponse Alibabacloud_Hbr20170908::Client::installBackupClientsWithOptions(shared_ptr<InstallBackupClientsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<InstallBackupClientsShrinkRequest> request = make_shared<InstallBackupClientsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->instanceIds)) {
    request->instanceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceIds, make_shared<string>("InstanceIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->crossAccountRoleName)) {
    query->insert(pair<string, string>("CrossAccountRoleName", *request->crossAccountRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crossAccountType)) {
    query->insert(pair<string, string>("CrossAccountType", *request->crossAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->crossAccountUserId)) {
    query->insert(pair<string, long>("CrossAccountUserId", *request->crossAccountUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIdsShrink)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InstallBackupClients"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InstallBackupClientsResponse(callApi(params, req, runtime));
}

InstallBackupClientsResponse Alibabacloud_Hbr20170908::Client::installBackupClients(shared_ptr<InstallBackupClientsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return installBackupClientsWithOptions(request, runtime);
}

OpenHbrServiceResponse Alibabacloud_Hbr20170908::Client::openHbrServiceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenHbrService"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenHbrServiceResponse(callApi(params, req, runtime));
}

OpenHbrServiceResponse Alibabacloud_Hbr20170908::Client::openHbrService() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openHbrServiceWithOptions(runtime);
}

SearchHistoricalSnapshotsResponse Alibabacloud_Hbr20170908::Client::searchHistoricalSnapshotsWithOptions(shared_ptr<SearchHistoricalSnapshotsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SearchHistoricalSnapshotsShrinkRequest> request = make_shared<SearchHistoricalSnapshotsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<boost::any>>(tmpReq->query)) {
    request->queryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->query, make_shared<string>("Query"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryShrink)) {
    query->insert(pair<string, string>("Query", *request->queryShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchHistoricalSnapshots"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchHistoricalSnapshotsResponse(callApi(params, req, runtime));
}

SearchHistoricalSnapshotsResponse Alibabacloud_Hbr20170908::Client::searchHistoricalSnapshots(shared_ptr<SearchHistoricalSnapshotsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchHistoricalSnapshotsWithOptions(request, runtime);
}

StartHanaDatabaseAsyncResponse Alibabacloud_Hbr20170908::Client::startHanaDatabaseAsyncWithOptions(shared_ptr<StartHanaDatabaseAsyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseName)) {
    query->insert(pair<string, string>("DatabaseName", *request->databaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartHanaDatabaseAsync"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartHanaDatabaseAsyncResponse(callApi(params, req, runtime));
}

StartHanaDatabaseAsyncResponse Alibabacloud_Hbr20170908::Client::startHanaDatabaseAsync(shared_ptr<StartHanaDatabaseAsyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startHanaDatabaseAsyncWithOptions(request, runtime);
}

StopHanaDatabaseAsyncResponse Alibabacloud_Hbr20170908::Client::stopHanaDatabaseAsyncWithOptions(shared_ptr<StopHanaDatabaseAsyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseName)) {
    query->insert(pair<string, string>("DatabaseName", *request->databaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopHanaDatabaseAsync"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopHanaDatabaseAsyncResponse(callApi(params, req, runtime));
}

StopHanaDatabaseAsyncResponse Alibabacloud_Hbr20170908::Client::stopHanaDatabaseAsync(shared_ptr<StopHanaDatabaseAsyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopHanaDatabaseAsyncWithOptions(request, runtime);
}

UninstallBackupClientsResponse Alibabacloud_Hbr20170908::Client::uninstallBackupClientsWithOptions(shared_ptr<UninstallBackupClientsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UninstallBackupClientsShrinkRequest> request = make_shared<UninstallBackupClientsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->clientIds)) {
    request->clientIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->clientIds, make_shared<string>("ClientIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->instanceIds)) {
    request->instanceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceIds, make_shared<string>("InstanceIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientIdsShrink)) {
    query->insert(pair<string, string>("ClientIds", *request->clientIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crossAccountRoleName)) {
    query->insert(pair<string, string>("CrossAccountRoleName", *request->crossAccountRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crossAccountType)) {
    query->insert(pair<string, string>("CrossAccountType", *request->crossAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->crossAccountUserId)) {
    query->insert(pair<string, long>("CrossAccountUserId", *request->crossAccountUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIdsShrink)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UninstallBackupClients"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UninstallBackupClientsResponse(callApi(params, req, runtime));
}

UninstallBackupClientsResponse Alibabacloud_Hbr20170908::Client::uninstallBackupClients(shared_ptr<UninstallBackupClientsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uninstallBackupClientsWithOptions(request, runtime);
}

UninstallClientResponse Alibabacloud_Hbr20170908::Client::uninstallClientWithOptions(shared_ptr<UninstallClientRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UninstallClient"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UninstallClientResponse(callApi(params, req, runtime));
}

UninstallClientResponse Alibabacloud_Hbr20170908::Client::uninstallClient(shared_ptr<UninstallClientRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uninstallClientWithOptions(request, runtime);
}

UpdateBackupPlanResponse Alibabacloud_Hbr20170908::Client::updateBackupPlanWithOptions(shared_ptr<UpdateBackupPlanRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateBackupPlanShrinkRequest> request = make_shared<UpdateBackupPlanShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->detail)) {
    request->detailShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->detail, make_shared<string>("Detail"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<OtsDetail>(tmpReq->otsDetail)) {
    request->otsDetailShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->otsDetail, make_shared<string>("OtsDetail"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->changeListPath)) {
    query->insert(pair<string, string>("ChangeListPath", *request->changeListPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->detailShrink)) {
    query->insert(pair<string, string>("Detail", *request->detailShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->keepLatestSnapshots)) {
    query->insert(pair<string, long>("KeepLatestSnapshots", *request->keepLatestSnapshots));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->path)) {
    query->insert(pair<string, vector<string>>("Path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->planId)) {
    query->insert(pair<string, string>("PlanId", *request->planId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->planName)) {
    query->insert(pair<string, string>("PlanName", *request->planName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prefix)) {
    query->insert(pair<string, string>("Prefix", *request->prefix));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->retention)) {
    query->insert(pair<string, long>("Retention", *request->retention));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schedule)) {
    query->insert(pair<string, string>("Schedule", *request->schedule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->speedLimit)) {
    query->insert(pair<string, string>("SpeedLimit", *request->speedLimit));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->updatePaths)) {
    query->insert(pair<string, bool>("UpdatePaths", *request->updatePaths));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->exclude)) {
    body->insert(pair<string, string>("Exclude", *request->exclude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->include)) {
    body->insert(pair<string, string>("Include", *request->include));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->options)) {
    body->insert(pair<string, string>("Options", *request->options));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->otsDetailShrink)) {
    body->insert(pair<string, string>("OtsDetail", *request->otsDetailShrink));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateBackupPlanShrinkRequestRule>>(request->rule)) {
    body->insert(pair<string, vector<UpdateBackupPlanShrinkRequestRule>>("Rule", *request->rule));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateBackupPlan"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateBackupPlanResponse(callApi(params, req, runtime));
}

UpdateBackupPlanResponse Alibabacloud_Hbr20170908::Client::updateBackupPlan(shared_ptr<UpdateBackupPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateBackupPlanWithOptions(request, runtime);
}

UpdateClientSettingsResponse Alibabacloud_Hbr20170908::Client::updateClientSettingsWithOptions(shared_ptr<UpdateClientSettingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->alertOnPartialComplete)) {
    query->insert(pair<string, bool>("AlertOnPartialComplete", *request->alertOnPartialComplete));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataNetworkType)) {
    query->insert(pair<string, string>("DataNetworkType", *request->dataNetworkType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataProxySetting)) {
    query->insert(pair<string, string>("DataProxySetting", *request->dataProxySetting));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxCpuCore)) {
    query->insert(pair<string, long>("MaxCpuCore", *request->maxCpuCore));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxMemory)) {
    query->insert(pair<string, long>("MaxMemory", *request->maxMemory));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxWorker)) {
    query->insert(pair<string, long>("MaxWorker", *request->maxWorker));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyHost)) {
    query->insert(pair<string, string>("ProxyHost", *request->proxyHost));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyPassword)) {
    query->insert(pair<string, string>("ProxyPassword", *request->proxyPassword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->proxyPort)) {
    query->insert(pair<string, long>("ProxyPort", *request->proxyPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyUser)) {
    query->insert(pair<string, string>("ProxyUser", *request->proxyUser));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useHttps)) {
    query->insert(pair<string, bool>("UseHttps", *request->useHttps));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateClientSettings"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateClientSettingsResponse(callApi(params, req, runtime));
}

UpdateClientSettingsResponse Alibabacloud_Hbr20170908::Client::updateClientSettings(shared_ptr<UpdateClientSettingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateClientSettingsWithOptions(request, runtime);
}

UpdateContainerClusterResponse Alibabacloud_Hbr20170908::Client::updateContainerClusterWithOptions(shared_ptr<UpdateContainerClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkType)) {
    query->insert(pair<string, string>("NetworkType", *request->networkType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->renewToken)) {
    query->insert(pair<string, bool>("RenewToken", *request->renewToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateContainerCluster"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateContainerClusterResponse(callApi(params, req, runtime));
}

UpdateContainerClusterResponse Alibabacloud_Hbr20170908::Client::updateContainerCluster(shared_ptr<UpdateContainerClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateContainerClusterWithOptions(request, runtime);
}

UpdateHanaBackupPlanResponse Alibabacloud_Hbr20170908::Client::updateHanaBackupPlanWithOptions(shared_ptr<UpdateHanaBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPrefix)) {
    query->insert(pair<string, string>("BackupPrefix", *request->backupPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->planId)) {
    query->insert(pair<string, string>("PlanId", *request->planId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->planName)) {
    query->insert(pair<string, string>("PlanName", *request->planName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schedule)) {
    query->insert(pair<string, string>("Schedule", *request->schedule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateHanaBackupPlan"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateHanaBackupPlanResponse(callApi(params, req, runtime));
}

UpdateHanaBackupPlanResponse Alibabacloud_Hbr20170908::Client::updateHanaBackupPlan(shared_ptr<UpdateHanaBackupPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateHanaBackupPlanWithOptions(request, runtime);
}

UpdateHanaBackupSettingResponse Alibabacloud_Hbr20170908::Client::updateHanaBackupSettingWithOptions(shared_ptr<UpdateHanaBackupSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->catalogBackupParameterFile)) {
    query->insert(pair<string, string>("CatalogBackupParameterFile", *request->catalogBackupParameterFile));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->catalogBackupUsingBackint)) {
    query->insert(pair<string, bool>("CatalogBackupUsingBackint", *request->catalogBackupUsingBackint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataBackupParameterFile)) {
    query->insert(pair<string, string>("DataBackupParameterFile", *request->dataBackupParameterFile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseName)) {
    query->insert(pair<string, string>("DatabaseName", *request->databaseName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableAutoLogBackup)) {
    query->insert(pair<string, bool>("EnableAutoLogBackup", *request->enableAutoLogBackup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logBackupParameterFile)) {
    query->insert(pair<string, string>("LogBackupParameterFile", *request->logBackupParameterFile));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->logBackupTimeout)) {
    query->insert(pair<string, long>("LogBackupTimeout", *request->logBackupTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->logBackupUsingBackint)) {
    query->insert(pair<string, bool>("LogBackupUsingBackint", *request->logBackupUsingBackint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateHanaBackupSetting"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateHanaBackupSettingResponse(callApi(params, req, runtime));
}

UpdateHanaBackupSettingResponse Alibabacloud_Hbr20170908::Client::updateHanaBackupSetting(shared_ptr<UpdateHanaBackupSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateHanaBackupSettingWithOptions(request, runtime);
}

UpdateHanaInstanceResponse Alibabacloud_Hbr20170908::Client::updateHanaInstanceWithOptions(shared_ptr<UpdateHanaInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertSetting)) {
    query->insert(pair<string, string>("AlertSetting", *request->alertSetting));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hanaName)) {
    query->insert(pair<string, string>("HanaName", *request->hanaName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->host)) {
    query->insert(pair<string, string>("Host", *request->host));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceNumber)) {
    query->insert(pair<string, long>("InstanceNumber", *request->instanceNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useSsl)) {
    query->insert(pair<string, bool>("UseSsl", *request->useSsl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    query->insert(pair<string, string>("UserName", *request->userName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->validateCertificate)) {
    query->insert(pair<string, bool>("ValidateCertificate", *request->validateCertificate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateHanaInstance"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateHanaInstanceResponse(callApi(params, req, runtime));
}

UpdateHanaInstanceResponse Alibabacloud_Hbr20170908::Client::updateHanaInstance(shared_ptr<UpdateHanaInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateHanaInstanceWithOptions(request, runtime);
}

UpdateHanaRetentionSettingResponse Alibabacloud_Hbr20170908::Client::updateHanaRetentionSettingWithOptions(shared_ptr<UpdateHanaRetentionSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseName)) {
    query->insert(pair<string, string>("DatabaseName", *request->databaseName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->disabled)) {
    query->insert(pair<string, bool>("Disabled", *request->disabled));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->retentionDays)) {
    query->insert(pair<string, long>("RetentionDays", *request->retentionDays));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schedule)) {
    query->insert(pair<string, string>("Schedule", *request->schedule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateHanaRetentionSetting"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateHanaRetentionSettingResponse(callApi(params, req, runtime));
}

UpdateHanaRetentionSettingResponse Alibabacloud_Hbr20170908::Client::updateHanaRetentionSetting(shared_ptr<UpdateHanaRetentionSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateHanaRetentionSettingWithOptions(request, runtime);
}

UpdatePolicyBindingResponse Alibabacloud_Hbr20170908::Client::updatePolicyBindingWithOptions(shared_ptr<UpdatePolicyBindingRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdatePolicyBindingShrinkRequest> request = make_shared<UpdatePolicyBindingShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdatePolicyBindingRequestAdvancedOptions>(tmpReq->advancedOptions)) {
    request->advancedOptionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->advancedOptions, make_shared<string>("AdvancedOptions"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->advancedOptionsShrink)) {
    query->insert(pair<string, string>("AdvancedOptions", *request->advancedOptionsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->disabled)) {
    query->insert(pair<string, bool>("Disabled", *request->disabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->exclude)) {
    query->insert(pair<string, string>("Exclude", *request->exclude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->include)) {
    query->insert(pair<string, string>("Include", *request->include));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyBindingDescription)) {
    query->insert(pair<string, string>("PolicyBindingDescription", *request->policyBindingDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->speedLimit)) {
    query->insert(pair<string, string>("SpeedLimit", *request->speedLimit));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceId)) {
    body->insert(pair<string, string>("DataSourceId", *request->dataSourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    body->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePolicyBinding"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePolicyBindingResponse(callApi(params, req, runtime));
}

UpdatePolicyBindingResponse Alibabacloud_Hbr20170908::Client::updatePolicyBinding(shared_ptr<UpdatePolicyBindingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePolicyBindingWithOptions(request, runtime);
}

UpdatePolicyV2Response Alibabacloud_Hbr20170908::Client::updatePolicyV2WithOptions(shared_ptr<UpdatePolicyV2Request> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdatePolicyV2ShrinkRequest> request = make_shared<UpdatePolicyV2ShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdatePolicyV2RequestRules>>(tmpReq->rules)) {
    request->rulesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->rules, make_shared<string>("Rules"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->policyDescription)) {
    body->insert(pair<string, string>("PolicyDescription", *request->policyDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    body->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyName)) {
    body->insert(pair<string, string>("PolicyName", *request->policyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rulesShrink)) {
    body->insert(pair<string, string>("Rules", *request->rulesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePolicyV2"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePolicyV2Response(callApi(params, req, runtime));
}

UpdatePolicyV2Response Alibabacloud_Hbr20170908::Client::updatePolicyV2(shared_ptr<UpdatePolicyV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePolicyV2WithOptions(request, runtime);
}

UpdateVaultResponse Alibabacloud_Hbr20170908::Client::updateVaultWithOptions(shared_ptr<UpdateVaultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultName)) {
    query->insert(pair<string, string>("VaultName", *request->vaultName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateVault"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateVaultResponse(callApi(params, req, runtime));
}

UpdateVaultResponse Alibabacloud_Hbr20170908::Client::updateVault(shared_ptr<UpdateVaultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateVaultWithOptions(request, runtime);
}

UpgradeBackupClientsResponse Alibabacloud_Hbr20170908::Client::upgradeBackupClientsWithOptions(shared_ptr<UpgradeBackupClientsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpgradeBackupClientsShrinkRequest> request = make_shared<UpgradeBackupClientsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->clientIds)) {
    request->clientIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->clientIds, make_shared<string>("ClientIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->instanceIds)) {
    request->instanceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceIds, make_shared<string>("InstanceIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientIdsShrink)) {
    query->insert(pair<string, string>("ClientIds", *request->clientIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crossAccountRoleName)) {
    query->insert(pair<string, string>("CrossAccountRoleName", *request->crossAccountRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crossAccountType)) {
    query->insert(pair<string, string>("CrossAccountType", *request->crossAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->crossAccountUserId)) {
    query->insert(pair<string, long>("CrossAccountUserId", *request->crossAccountUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIdsShrink)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeBackupClients"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpgradeBackupClientsResponse(callApi(params, req, runtime));
}

UpgradeBackupClientsResponse Alibabacloud_Hbr20170908::Client::upgradeBackupClients(shared_ptr<UpgradeBackupClientsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeBackupClientsWithOptions(request, runtime);
}

UpgradeClientResponse Alibabacloud_Hbr20170908::Client::upgradeClientWithOptions(shared_ptr<UpgradeClientRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaultId)) {
    query->insert(pair<string, string>("VaultId", *request->vaultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeClient"))},
    {"version", boost::any(string("2017-09-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpgradeClientResponse(callApi(params, req, runtime));
}

UpgradeClientResponse Alibabacloud_Hbr20170908::Client::upgradeClient(shared_ptr<UpgradeClientRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeClientWithOptions(request, runtime);
}

