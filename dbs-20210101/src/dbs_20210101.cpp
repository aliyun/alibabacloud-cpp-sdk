// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dbs_20210101.hpp>
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
  if (!Darabonba_Util::Client::isUnset<string>(request->regionCode)) {
    query->insert(pair<string, string>("RegionCode", *request->regionCode));
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

CreateAdvancedPolicyResponse Alibabacloud_Dbs20210101::Client::createAdvancedPolicyWithOptions(shared_ptr<CreateAdvancedPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("CreateAdvancedPolicy"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAdvancedPolicyResponse(callApi(params, req, runtime));
}

CreateAdvancedPolicyResponse Alibabacloud_Dbs20210101::Client::createAdvancedPolicy(shared_ptr<CreateAdvancedPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAdvancedPolicyWithOptions(request, runtime);
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

DeleteSandboxInstanceResponse Alibabacloud_Dbs20210101::Client::deleteSandboxInstanceWithOptions(shared_ptr<DeleteSandboxInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    query->insert(pair<string, string>("ZoneId", *request->zoneId));
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

DescribeBackupDataListResponse Alibabacloud_Dbs20210101::Client::describeBackupDataListWithOptions(shared_ptr<DescribeBackupDataListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupId)) {
    query->insert(pair<string, string>("BackupId", *request->backupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupMethod)) {
    query->insert(pair<string, string>("BackupMethod", *request->backupMethod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupMode)) {
    query->insert(pair<string, string>("BackupMode", *request->backupMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupScale)) {
    query->insert(pair<string, string>("BackupScale", *request->backupScale));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupStatus)) {
    query->insert(pair<string, string>("BackupStatus", *request->backupStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupType)) {
    query->insert(pair<string, string>("BackupType", *request->backupType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceId)) {
    query->insert(pair<string, string>("DataSourceId", *request->dataSourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->instanceIsDeleted)) {
    query->insert(pair<string, bool>("InstanceIsDeleted", *request->instanceIsDeleted));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceRegion)) {
    query->insert(pair<string, string>("InstanceRegion", *request->instanceRegion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionCode)) {
    query->insert(pair<string, string>("RegionCode", *request->regionCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneType)) {
    query->insert(pair<string, string>("SceneType", *request->sceneType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackupDataList"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBackupDataListResponse(callApi(params, req, runtime));
}

DescribeBackupDataListResponse Alibabacloud_Dbs20210101::Client::describeBackupDataList(shared_ptr<DescribeBackupDataListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupDataListWithOptions(request, runtime);
}

DescribeBackupPolicyResponse Alibabacloud_Dbs20210101::Client::describeBackupPolicyWithOptions(shared_ptr<DescribeBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeBackupPolicy"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBackupPolicyResponse(callApi(params, req, runtime));
}

DescribeBackupPolicyResponse Alibabacloud_Dbs20210101::Client::describeBackupPolicy(shared_ptr<DescribeBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupPolicyWithOptions(request, runtime);
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

ModifyBackupPolicyResponse Alibabacloud_Dbs20210101::Client::modifyBackupPolicyWithOptions(shared_ptr<ModifyBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ModifyBackupPolicyRequestAdvanceDataPolicies>>(request->advanceDataPolicies)) {
    query->insert(pair<string, vector<ModifyBackupPolicyRequestAdvanceDataPolicies>>("AdvanceDataPolicies", *request->advanceDataPolicies));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preferredBackupWindowBegin)) {
    query->insert(pair<string, string>("PreferredBackupWindowBegin", *request->preferredBackupWindowBegin));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionCode)) {
    query->insert(pair<string, string>("RegionCode", *request->regionCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyBackupPolicy"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyBackupPolicyResponse(callApi(params, req, runtime));
}

ModifyBackupPolicyResponse Alibabacloud_Dbs20210101::Client::modifyBackupPolicy(shared_ptr<ModifyBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyBackupPolicyWithOptions(request, runtime);
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

