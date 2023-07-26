// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dbs_20210101.hpp>
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

using namespace Alibabacloud_Dbs20210101;

Alibabacloud_Dbs20210101::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-qingdao", "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"cn-beijing", "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"cn-chengdu", "dbs-api.cn-chengdu.aliyuncs.com"},
    {"cn-zhangjiakou", "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"cn-huhehaote", "dbs-api.cn-huhehaote.aliyuncs.com"},
    {"cn-hangzhou", "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"cn-shanghai", "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"cn-shenzhen", "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"cn-hongkong", "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"ap-southeast-1", "dbs-api.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2", "dbs-api.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-3", "dbs-api.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-5", "dbs-api.ap-southeast-5.aliyuncs.com"},
    {"ap-northeast-1", "dbs-api.ap-northeast-1.aliyuncs.com"},
    {"us-west-1", "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"us-east-1", "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"eu-central-1", "dbs-api.eu-central-1.aliyuncs.com"},
    {"cn-hangzhou-finance", "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"cn-shanghai-finance-1", "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"ap-south-1", "dbs-api.ap-south-1.aliyuncs.com"},
    {"eu-west-1", "dbs-api.eu-west-1.aliyuncs.com"},
    {"me-east-1", "dbs-api.me-east-1.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("dbs"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Dbs20210101::Client::getEndpoint(shared_ptr<string> productId,
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

ChangeResourceGroupResponse Alibabacloud_Dbs20210101::Client::changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newResourceGroupId)) {
    query->insert(pair<string, string>("NewResourceGroupId", *request->newResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeResourceGroup"))},
    {"version", boost::any(string("2021-01-01"))},
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

ChangeResourceGroupResponse Alibabacloud_Dbs20210101::Client::changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeResourceGroupWithOptions(request, runtime);
}

CreateDownloadResponse Alibabacloud_Dbs20210101::Client::createDownloadWithOptions(shared_ptr<CreateDownloadRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bakSetId)) {
    query->insert(pair<string, string>("BakSetId", *request->bakSetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bakSetSize)) {
    query->insert(pair<string, string>("BakSetSize", *request->bakSetSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bakSetType)) {
    query->insert(pair<string, string>("BakSetType", *request->bakSetType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->downloadPointInTime)) {
    query->insert(pair<string, string>("DownloadPointInTime", *request->downloadPointInTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formatType)) {
    query->insert(pair<string, string>("FormatType", *request->formatType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionCode)) {
    query->insert(pair<string, string>("RegionCode", *request->regionCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetBucket)) {
    query->insert(pair<string, string>("TargetBucket", *request->targetBucket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetOssRegion)) {
    query->insert(pair<string, string>("TargetOssRegion", *request->targetOssRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetPath)) {
    query->insert(pair<string, string>("TargetPath", *request->targetPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetType)) {
    query->insert(pair<string, string>("TargetType", *request->targetType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDownload"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDownloadResponse(callApi(params, req, runtime));
}

CreateDownloadResponse Alibabacloud_Dbs20210101::Client::createDownload(shared_ptr<CreateDownloadRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDownloadWithOptions(request, runtime);
}

CreateSandboxInstanceResponse Alibabacloud_Dbs20210101::Client::createSandboxInstanceWithOptions(shared_ptr<CreateSandboxInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupSetId)) {
    query->insert(pair<string, string>("BackupSetId", *request->backupSetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->restoreTime)) {
    query->insert(pair<string, string>("RestoreTime", *request->restoreTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sandboxInstanceName)) {
    query->insert(pair<string, string>("SandboxInstanceName", *request->sandboxInstanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sandboxPassword)) {
    query->insert(pair<string, string>("SandboxPassword", *request->sandboxPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sandboxSpecification)) {
    query->insert(pair<string, string>("SandboxSpecification", *request->sandboxSpecification));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sandboxType)) {
    query->insert(pair<string, string>("SandboxType", *request->sandboxType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sandboxUser)) {
    query->insert(pair<string, string>("SandboxUser", *request->sandboxUser));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcSwitchId)) {
    query->insert(pair<string, string>("VpcSwitchId", *request->vpcSwitchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSandboxInstance"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSandboxInstanceResponse(callApi(params, req, runtime));
}

CreateSandboxInstanceResponse Alibabacloud_Dbs20210101::Client::createSandboxInstance(shared_ptr<CreateSandboxInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSandboxInstanceWithOptions(request, runtime);
}

DeleteSandboxInstanceResponse Alibabacloud_Dbs20210101::Client::deleteSandboxInstanceWithOptions(shared_ptr<DeleteSandboxInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSandboxInstance"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSandboxInstanceResponse(callApi(params, req, runtime));
}

DeleteSandboxInstanceResponse Alibabacloud_Dbs20210101::Client::deleteSandboxInstance(shared_ptr<DeleteSandboxInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSandboxInstanceWithOptions(request, runtime);
}

DescribeDBTablesRecoveryBackupSetResponse Alibabacloud_Dbs20210101::Client::describeDBTablesRecoveryBackupSetWithOptions(shared_ptr<DescribeDBTablesRecoveryBackupSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionCode)) {
    query->insert(pair<string, string>("RegionCode", *request->regionCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBTablesRecoveryBackupSet"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBTablesRecoveryBackupSetResponse(callApi(params, req, runtime));
}

DescribeDBTablesRecoveryBackupSetResponse Alibabacloud_Dbs20210101::Client::describeDBTablesRecoveryBackupSet(shared_ptr<DescribeDBTablesRecoveryBackupSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBTablesRecoveryBackupSetWithOptions(request, runtime);
}

DescribeDBTablesRecoveryStateResponse Alibabacloud_Dbs20210101::Client::describeDBTablesRecoveryStateWithOptions(shared_ptr<DescribeDBTablesRecoveryStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionCode)) {
    query->insert(pair<string, string>("RegionCode", *request->regionCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBTablesRecoveryState"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBTablesRecoveryStateResponse(callApi(params, req, runtime));
}

DescribeDBTablesRecoveryStateResponse Alibabacloud_Dbs20210101::Client::describeDBTablesRecoveryState(shared_ptr<DescribeDBTablesRecoveryStateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBTablesRecoveryStateWithOptions(request, runtime);
}

DescribeDBTablesRecoveryTimeRangeResponse Alibabacloud_Dbs20210101::Client::describeDBTablesRecoveryTimeRangeWithOptions(shared_ptr<DescribeDBTablesRecoveryTimeRangeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionCode)) {
    query->insert(pair<string, string>("RegionCode", *request->regionCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBTablesRecoveryTimeRange"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBTablesRecoveryTimeRangeResponse(callApi(params, req, runtime));
}

DescribeDBTablesRecoveryTimeRangeResponse Alibabacloud_Dbs20210101::Client::describeDBTablesRecoveryTimeRange(shared_ptr<DescribeDBTablesRecoveryTimeRangeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBTablesRecoveryTimeRangeWithOptions(request, runtime);
}

DescribeDownloadBackupSetStorageInfoResponse Alibabacloud_Dbs20210101::Client::describeDownloadBackupSetStorageInfoWithOptions(shared_ptr<DescribeDownloadBackupSetStorageInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupSetId)) {
    query->insert(pair<string, string>("BackupSetId", *request->backupSetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->duration)) {
    query->insert(pair<string, string>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionCode)) {
    query->insert(pair<string, string>("RegionCode", *request->regionCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDownloadBackupSetStorageInfo"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDownloadBackupSetStorageInfoResponse(callApi(params, req, runtime));
}

DescribeDownloadBackupSetStorageInfoResponse Alibabacloud_Dbs20210101::Client::describeDownloadBackupSetStorageInfo(shared_ptr<DescribeDownloadBackupSetStorageInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDownloadBackupSetStorageInfoWithOptions(request, runtime);
}

DescribeDownloadSupportResponse Alibabacloud_Dbs20210101::Client::describeDownloadSupportWithOptions(shared_ptr<DescribeDownloadSupportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionCode)) {
    query->insert(pair<string, string>("RegionCode", *request->regionCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDownloadSupport"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDownloadSupportResponse(callApi(params, req, runtime));
}

DescribeDownloadSupportResponse Alibabacloud_Dbs20210101::Client::describeDownloadSupport(shared_ptr<DescribeDownloadSupportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDownloadSupportWithOptions(request, runtime);
}

DescribeDownloadTaskResponse Alibabacloud_Dbs20210101::Client::describeDownloadTaskWithOptions(shared_ptr<DescribeDownloadTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupSetId)) {
    query->insert(pair<string, string>("BackupSetId", *request->backupSetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasourceId)) {
    query->insert(pair<string, string>("DatasourceId", *request->datasourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderColumn)) {
    query->insert(pair<string, string>("OrderColumn", *request->orderColumn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderDirect)) {
    query->insert(pair<string, string>("OrderDirect", *request->orderDirect));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionCode)) {
    query->insert(pair<string, string>("RegionCode", *request->regionCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    query->insert(pair<string, string>("State", *request->state));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("TaskType", *request->taskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDownloadTask"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDownloadTaskResponse(callApi(params, req, runtime));
}

DescribeDownloadTaskResponse Alibabacloud_Dbs20210101::Client::describeDownloadTask(shared_ptr<DescribeDownloadTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDownloadTaskWithOptions(request, runtime);
}

DescribeSandboxBackupSetsResponse Alibabacloud_Dbs20210101::Client::describeSandboxBackupSetsWithOptions(shared_ptr<DescribeSandboxBackupSetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupSetId)) {
    query->insert(pair<string, string>("BackupSetId", *request->backupSetId));
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
    {"action", boost::any(string("DescribeSandboxBackupSets"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSandboxBackupSetsResponse(callApi(params, req, runtime));
}

DescribeSandboxBackupSetsResponse Alibabacloud_Dbs20210101::Client::describeSandboxBackupSets(shared_ptr<DescribeSandboxBackupSetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSandboxBackupSetsWithOptions(request, runtime);
}

DescribeSandboxInstancesResponse Alibabacloud_Dbs20210101::Client::describeSandboxInstancesWithOptions(shared_ptr<DescribeSandboxInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
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
    {"action", boost::any(string("DescribeSandboxInstances"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSandboxInstancesResponse(callApi(params, req, runtime));
}

DescribeSandboxInstancesResponse Alibabacloud_Dbs20210101::Client::describeSandboxInstances(shared_ptr<DescribeSandboxInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSandboxInstancesWithOptions(request, runtime);
}

DescribeSandboxRecoveryTimeResponse Alibabacloud_Dbs20210101::Client::describeSandboxRecoveryTimeWithOptions(shared_ptr<DescribeSandboxRecoveryTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSandboxRecoveryTime"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSandboxRecoveryTimeResponse(callApi(params, req, runtime));
}

DescribeSandboxRecoveryTimeResponse Alibabacloud_Dbs20210101::Client::describeSandboxRecoveryTime(shared_ptr<DescribeSandboxRecoveryTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSandboxRecoveryTimeWithOptions(request, runtime);
}

ModifyDBTablesRecoveryStateResponse Alibabacloud_Dbs20210101::Client::modifyDBTablesRecoveryStateWithOptions(shared_ptr<ModifyDBTablesRecoveryStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionCode)) {
    query->insert(pair<string, string>("RegionCode", *request->regionCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->retention)) {
    query->insert(pair<string, string>("Retention", *request->retention));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDBTablesRecoveryState"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDBTablesRecoveryStateResponse(callApi(params, req, runtime));
}

ModifyDBTablesRecoveryStateResponse Alibabacloud_Dbs20210101::Client::modifyDBTablesRecoveryState(shared_ptr<ModifyDBTablesRecoveryStateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBTablesRecoveryStateWithOptions(request, runtime);
}

SupportDBTableRecoveryResponse Alibabacloud_Dbs20210101::Client::supportDBTableRecoveryWithOptions(shared_ptr<SupportDBTableRecoveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionCode)) {
    query->insert(pair<string, string>("RegionCode", *request->regionCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SupportDBTableRecovery"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SupportDBTableRecoveryResponse(callApi(params, req, runtime));
}

SupportDBTableRecoveryResponse Alibabacloud_Dbs20210101::Client::supportDBTableRecovery(shared_ptr<SupportDBTableRecoveryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return supportDBTableRecoveryWithOptions(request, runtime);
}

