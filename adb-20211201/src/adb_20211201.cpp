// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/adb_20211201.hpp>
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

using namespace Alibabacloud_Adb20211201;

Alibabacloud_Adb20211201::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-qingdao", "adb.aliyuncs.com"},
    {"cn-beijing", "adb.aliyuncs.com"},
    {"cn-hangzhou", "adb.aliyuncs.com"},
    {"cn-shanghai", "adb.aliyuncs.com"},
    {"cn-shenzhen", "adb.aliyuncs.com"},
    {"cn-hongkong", "adb.aliyuncs.com"},
    {"ap-southeast-1", "adb.aliyuncs.com"},
    {"us-west-1", "adb.aliyuncs.com"},
    {"us-east-1", "adb.aliyuncs.com"},
    {"cn-hangzhou-finance", "adb.aliyuncs.com"},
    {"cn-north-2-gov-1", "adb.aliyuncs.com"},
    {"ap-northeast-2-pop", "adb.ap-northeast-1.aliyuncs.com"},
    {"cn-beijing-finance-1", "adb.aliyuncs.com"},
    {"cn-beijing-finance-pop", "adb.aliyuncs.com"},
    {"cn-beijing-gov-1", "adb.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "adb.aliyuncs.com"},
    {"cn-edge-1", "adb.aliyuncs.com"},
    {"cn-fujian", "adb.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "adb.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "adb.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "adb.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "adb.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "adb.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "adb.aliyuncs.com"},
    {"cn-hangzhou-test-306", "adb.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "adb.aliyuncs.com"},
    {"cn-qingdao-nebula", "adb.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "adb.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "adb.aliyuncs.com"},
    {"cn-shanghai-finance-1", "adb.aliyuncs.com"},
    {"cn-shanghai-inner", "adb.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "adb.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "adb.aliyuncs.com"},
    {"cn-shenzhen-inner", "adb.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "adb.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "adb.aliyuncs.com"},
    {"cn-wuhan", "adb.aliyuncs.com"},
    {"cn-yushanfang", "adb.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "adb.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "adb.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "adb.aliyuncs.com"},
    {"eu-west-1-oxs", "adb.ap-northeast-1.aliyuncs.com"},
    {"me-east-1", "adb.ap-northeast-1.aliyuncs.com"},
    {"rus-west-1-pop", "adb.ap-northeast-1.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("adb"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Adb20211201::Client::getEndpoint(shared_ptr<string> productId,
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

AllocateClusterPublicConnectionResponse Alibabacloud_Adb20211201::Client::allocateClusterPublicConnectionWithOptions(shared_ptr<AllocateClusterPublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionStringPrefix)) {
    query->insert(pair<string, string>("ConnectionStringPrefix", *request->connectionStringPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engine)) {
    query->insert(pair<string, string>("Engine", *request->engine));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AllocateClusterPublicConnection"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AllocateClusterPublicConnectionResponse(callApi(params, req, runtime));
}

AllocateClusterPublicConnectionResponse Alibabacloud_Adb20211201::Client::allocateClusterPublicConnection(shared_ptr<AllocateClusterPublicConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return allocateClusterPublicConnectionWithOptions(request, runtime);
}

AttachUserENIResponse Alibabacloud_Adb20211201::Client::attachUserENIWithOptions(shared_ptr<AttachUserENIRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachUserENI"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachUserENIResponse(callApi(params, req, runtime));
}

AttachUserENIResponse Alibabacloud_Adb20211201::Client::attachUserENI(shared_ptr<AttachUserENIRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachUserENIWithOptions(request, runtime);
}

BindAccountResponse Alibabacloud_Adb20211201::Client::bindAccountWithOptions(shared_ptr<BindAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    query->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ramUser)) {
    query->insert(pair<string, string>("RamUser", *request->ramUser));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindAccount"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindAccountResponse(callApi(params, req, runtime));
}

BindAccountResponse Alibabacloud_Adb20211201::Client::bindAccount(shared_ptr<BindAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindAccountWithOptions(request, runtime);
}

BindDBResourceGroupWithUserResponse Alibabacloud_Adb20211201::Client::bindDBResourceGroupWithUserWithOptions(shared_ptr<BindDBResourceGroupWithUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupUser)) {
    query->insert(pair<string, string>("GroupUser", *request->groupUser));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindDBResourceGroupWithUser"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindDBResourceGroupWithUserResponse(callApi(params, req, runtime));
}

BindDBResourceGroupWithUserResponse Alibabacloud_Adb20211201::Client::bindDBResourceGroupWithUser(shared_ptr<BindDBResourceGroupWithUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindDBResourceGroupWithUserWithOptions(request, runtime);
}

CheckBindRamUserResponse Alibabacloud_Adb20211201::Client::checkBindRamUserWithOptions(shared_ptr<CheckBindRamUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckBindRamUser"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckBindRamUserResponse(callApi(params, req, runtime));
}

CheckBindRamUserResponse Alibabacloud_Adb20211201::Client::checkBindRamUser(shared_ptr<CheckBindRamUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkBindRamUserWithOptions(request, runtime);
}

CheckSampleDataSetResponse Alibabacloud_Adb20211201::Client::checkSampleDataSetWithOptions(shared_ptr<CheckSampleDataSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckSampleDataSet"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckSampleDataSetResponse(callApi(params, req, runtime));
}

CheckSampleDataSetResponse Alibabacloud_Adb20211201::Client::checkSampleDataSet(shared_ptr<CheckSampleDataSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkSampleDataSetWithOptions(request, runtime);
}

CreateAccountResponse Alibabacloud_Adb20211201::Client::createAccountWithOptions(shared_ptr<CreateAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountDescription)) {
    query->insert(pair<string, string>("AccountDescription", *request->accountDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    query->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountPassword)) {
    query->insert(pair<string, string>("AccountPassword", *request->accountPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engine)) {
    query->insert(pair<string, string>("Engine", *request->engine));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAccount"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAccountResponse(callApi(params, req, runtime));
}

CreateAccountResponse Alibabacloud_Adb20211201::Client::createAccount(shared_ptr<CreateAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAccountWithOptions(request, runtime);
}

CreateDBClusterResponse Alibabacloud_Adb20211201::Client::createDBClusterWithOptions(shared_ptr<CreateDBClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupSetId)) {
    query->insert(pair<string, string>("BackupSetId", *request->backupSetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cloneSourceRegionId)) {
    query->insert(pair<string, string>("CloneSourceRegionId", *request->cloneSourceRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->computeResource)) {
    query->insert(pair<string, string>("ComputeResource", *request->computeResource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterDescription)) {
    query->insert(pair<string, string>("DBClusterDescription", *request->DBClusterDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterNetworkType)) {
    query->insert(pair<string, string>("DBClusterNetworkType", *request->DBClusterNetworkType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterVersion)) {
    query->insert(pair<string, string>("DBClusterVersion", *request->DBClusterVersion));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->diskEncryption)) {
    query->insert(pair<string, bool>("DiskEncryption", *request->diskEncryption));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableDefaultResourcePool)) {
    query->insert(pair<string, bool>("EnableDefaultResourcePool", *request->enableDefaultResourcePool));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->kmsId)) {
    query->insert(pair<string, string>("KmsId", *request->kmsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payType)) {
    query->insert(pair<string, string>("PayType", *request->payType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->period)) {
    query->insert(pair<string, string>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productForm)) {
    query->insert(pair<string, string>("ProductForm", *request->productForm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reservedNodeCount)) {
    query->insert(pair<string, long>("ReservedNodeCount", *request->reservedNodeCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reservedNodeSize)) {
    query->insert(pair<string, string>("ReservedNodeSize", *request->reservedNodeSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->restoreToTime)) {
    query->insert(pair<string, string>("RestoreToTime", *request->restoreToTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->restoreType)) {
    query->insert(pair<string, string>("RestoreType", *request->restoreType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceDbClusterId)) {
    query->insert(pair<string, string>("SourceDbClusterId", *request->sourceDbClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageResource)) {
    query->insert(pair<string, string>("StorageResource", *request->storageResource));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateDBClusterRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateDBClusterRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->usedTime)) {
    query->insert(pair<string, string>("UsedTime", *request->usedTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VPCId)) {
    query->insert(pair<string, string>("VPCId", *request->VPCId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    query->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDBCluster"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDBClusterResponse(callApi(params, req, runtime));
}

CreateDBClusterResponse Alibabacloud_Adb20211201::Client::createDBCluster(shared_ptr<CreateDBClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDBClusterWithOptions(request, runtime);
}

CreateDBResourceGroupResponse Alibabacloud_Adb20211201::Client::createDBResourceGroupWithOptions(shared_ptr<CreateDBResourceGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateDBResourceGroupShrinkRequest> request = make_shared<CreateDBResourceGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->engineParams)) {
    request->engineParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->engineParams, make_shared<string>("EngineParams"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateDBResourceGroupRequestRules>>(tmpReq->rules)) {
    request->rulesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->rules, make_shared<string>("Rules"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterMode)) {
    query->insert(pair<string, string>("ClusterMode", *request->clusterMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterSizeResource)) {
    query->insert(pair<string, string>("ClusterSizeResource", *request->clusterSizeResource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableSpot)) {
    query->insert(pair<string, bool>("EnableSpot", *request->enableSpot));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engine)) {
    query->insert(pair<string, string>("Engine", *request->engine));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engineParamsShrink)) {
    query->insert(pair<string, string>("EngineParams", *request->engineParamsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupType)) {
    query->insert(pair<string, string>("GroupType", *request->groupType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxClusterCount)) {
    query->insert(pair<string, long>("MaxClusterCount", *request->maxClusterCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maxComputeResource)) {
    query->insert(pair<string, string>("MaxComputeResource", *request->maxComputeResource));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minClusterCount)) {
    query->insert(pair<string, long>("MinClusterCount", *request->minClusterCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->minComputeResource)) {
    query->insert(pair<string, string>("MinComputeResource", *request->minComputeResource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rulesShrink)) {
    query->insert(pair<string, string>("Rules", *request->rulesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDBResourceGroup"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDBResourceGroupResponse(callApi(params, req, runtime));
}

CreateDBResourceGroupResponse Alibabacloud_Adb20211201::Client::createDBResourceGroup(shared_ptr<CreateDBResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDBResourceGroupWithOptions(request, runtime);
}

CreateElasticPlanResponse Alibabacloud_Adb20211201::Client::createElasticPlanWithOptions(shared_ptr<CreateElasticPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoScale)) {
    query->insert(pair<string, bool>("AutoScale", *request->autoScale));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cronExpression)) {
    query->insert(pair<string, string>("CronExpression", *request->cronExpression));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->elasticPlanName)) {
    query->insert(pair<string, string>("ElasticPlanName", *request->elasticPlanName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enabled)) {
    query->insert(pair<string, bool>("Enabled", *request->enabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupName)) {
    query->insert(pair<string, string>("ResourceGroupName", *request->resourceGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetSize)) {
    query->insert(pair<string, string>("TargetSize", *request->targetSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateElasticPlan"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateElasticPlanResponse(callApi(params, req, runtime));
}

CreateElasticPlanResponse Alibabacloud_Adb20211201::Client::createElasticPlan(shared_ptr<CreateElasticPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createElasticPlanWithOptions(request, runtime);
}

CreateOssSubDirectoryResponse Alibabacloud_Adb20211201::Client::createOssSubDirectoryWithOptions(shared_ptr<CreateOssSubDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    body->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    body->insert(pair<string, string>("Path", *request->path));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOssSubDirectory"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOssSubDirectoryResponse(callApi(params, req, runtime));
}

CreateOssSubDirectoryResponse Alibabacloud_Adb20211201::Client::createOssSubDirectory(shared_ptr<CreateOssSubDirectoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOssSubDirectoryWithOptions(request, runtime);
}

CreatePerformanceViewResponse Alibabacloud_Adb20211201::Client::createPerformanceViewWithOptions(shared_ptr<CreatePerformanceViewRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreatePerformanceViewShrinkRequest> request = make_shared<CreatePerformanceViewShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreatePerformanceViewRequestViewDetail>(tmpReq->viewDetail)) {
    request->viewDetailShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->viewDetail, make_shared<string>("ViewDetail"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createFromViewType)) {
    query->insert(pair<string, string>("CreateFromViewType", *request->createFromViewType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->fillOriginViewKeys)) {
    query->insert(pair<string, bool>("FillOriginViewKeys", *request->fillOriginViewKeys));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->viewDetailShrink)) {
    query->insert(pair<string, string>("ViewDetail", *request->viewDetailShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->viewName)) {
    query->insert(pair<string, string>("ViewName", *request->viewName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePerformanceView"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePerformanceViewResponse(callApi(params, req, runtime));
}

CreatePerformanceViewResponse Alibabacloud_Adb20211201::Client::createPerformanceView(shared_ptr<CreatePerformanceViewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPerformanceViewWithOptions(request, runtime);
}

CreateSparkTemplateResponse Alibabacloud_Adb20211201::Client::createSparkTemplateWithOptions(shared_ptr<CreateSparkTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    body->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parentId)) {
    body->insert(pair<string, long>("ParentId", *request->parentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSparkTemplate"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSparkTemplateResponse(callApi(params, req, runtime));
}

CreateSparkTemplateResponse Alibabacloud_Adb20211201::Client::createSparkTemplate(shared_ptr<CreateSparkTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSparkTemplateWithOptions(request, runtime);
}

DeleteAccountResponse Alibabacloud_Adb20211201::Client::deleteAccountWithOptions(shared_ptr<DeleteAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    query->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engine)) {
    query->insert(pair<string, string>("Engine", *request->engine));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAccount"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAccountResponse(callApi(params, req, runtime));
}

DeleteAccountResponse Alibabacloud_Adb20211201::Client::deleteAccount(shared_ptr<DeleteAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAccountWithOptions(request, runtime);
}

DeleteDBClusterResponse Alibabacloud_Adb20211201::Client::deleteDBClusterWithOptions(shared_ptr<DeleteDBClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDBCluster"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDBClusterResponse(callApi(params, req, runtime));
}

DeleteDBClusterResponse Alibabacloud_Adb20211201::Client::deleteDBCluster(shared_ptr<DeleteDBClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDBClusterWithOptions(request, runtime);
}

DeleteDBResourceGroupResponse Alibabacloud_Adb20211201::Client::deleteDBResourceGroupWithOptions(shared_ptr<DeleteDBResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDBResourceGroup"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDBResourceGroupResponse(callApi(params, req, runtime));
}

DeleteDBResourceGroupResponse Alibabacloud_Adb20211201::Client::deleteDBResourceGroup(shared_ptr<DeleteDBResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDBResourceGroupWithOptions(request, runtime);
}

DeleteElasticPlanResponse Alibabacloud_Adb20211201::Client::deleteElasticPlanWithOptions(shared_ptr<DeleteElasticPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->elasticPlanName)) {
    query->insert(pair<string, string>("ElasticPlanName", *request->elasticPlanName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteElasticPlan"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteElasticPlanResponse(callApi(params, req, runtime));
}

DeleteElasticPlanResponse Alibabacloud_Adb20211201::Client::deleteElasticPlan(shared_ptr<DeleteElasticPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteElasticPlanWithOptions(request, runtime);
}

DeletePerformanceViewResponse Alibabacloud_Adb20211201::Client::deletePerformanceViewWithOptions(shared_ptr<DeletePerformanceViewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->viewName)) {
    query->insert(pair<string, string>("ViewName", *request->viewName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePerformanceView"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePerformanceViewResponse(callApi(params, req, runtime));
}

DeletePerformanceViewResponse Alibabacloud_Adb20211201::Client::deletePerformanceView(shared_ptr<DeletePerformanceViewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePerformanceViewWithOptions(request, runtime);
}

DeleteProcessInstanceResponse Alibabacloud_Adb20211201::Client::deleteProcessInstanceWithOptions(shared_ptr<DeleteProcessInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->processInstanceId)) {
    query->insert(pair<string, long>("ProcessInstanceId", *request->processInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectCode)) {
    query->insert(pair<string, long>("ProjectCode", *request->projectCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProcessInstance"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteProcessInstanceResponse(callApi(params, req, runtime));
}

DeleteProcessInstanceResponse Alibabacloud_Adb20211201::Client::deleteProcessInstance(shared_ptr<DeleteProcessInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteProcessInstanceWithOptions(request, runtime);
}

DeleteSparkTemplateResponse Alibabacloud_Adb20211201::Client::deleteSparkTemplateWithOptions(shared_ptr<DeleteSparkTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    body->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSparkTemplate"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSparkTemplateResponse(callApi(params, req, runtime));
}

DeleteSparkTemplateResponse Alibabacloud_Adb20211201::Client::deleteSparkTemplate(shared_ptr<DeleteSparkTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSparkTemplateWithOptions(request, runtime);
}

DeleteSparkTemplateFileResponse Alibabacloud_Adb20211201::Client::deleteSparkTemplateFileWithOptions(shared_ptr<DeleteSparkTemplateFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    body->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSparkTemplateFile"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSparkTemplateFileResponse(callApi(params, req, runtime));
}

DeleteSparkTemplateFileResponse Alibabacloud_Adb20211201::Client::deleteSparkTemplateFile(shared_ptr<DeleteSparkTemplateFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSparkTemplateFileWithOptions(request, runtime);
}

DescribeAccountAllPrivilegesResponse Alibabacloud_Adb20211201::Client::describeAccountAllPrivilegesWithOptions(shared_ptr<DescribeAccountAllPrivilegesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    query->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->marker)) {
    query->insert(pair<string, string>("Marker", *request->marker));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAccountAllPrivileges"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAccountAllPrivilegesResponse(callApi(params, req, runtime));
}

DescribeAccountAllPrivilegesResponse Alibabacloud_Adb20211201::Client::describeAccountAllPrivileges(shared_ptr<DescribeAccountAllPrivilegesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAccountAllPrivilegesWithOptions(request, runtime);
}

DescribeAccountPrivilegeObjectsResponse Alibabacloud_Adb20211201::Client::describeAccountPrivilegeObjectsWithOptions(shared_ptr<DescribeAccountPrivilegeObjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    query->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->columnPrivilegeObject)) {
    query->insert(pair<string, string>("ColumnPrivilegeObject", *request->columnPrivilegeObject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databasePrivilegeObject)) {
    query->insert(pair<string, string>("DatabasePrivilegeObject", *request->databasePrivilegeObject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    query->insert(pair<string, string>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->privilegeType)) {
    query->insert(pair<string, string>("PrivilegeType", *request->privilegeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tablePrivilegeObject)) {
    query->insert(pair<string, string>("TablePrivilegeObject", *request->tablePrivilegeObject));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAccountPrivilegeObjects"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAccountPrivilegeObjectsResponse(callApi(params, req, runtime));
}

DescribeAccountPrivilegeObjectsResponse Alibabacloud_Adb20211201::Client::describeAccountPrivilegeObjects(shared_ptr<DescribeAccountPrivilegeObjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAccountPrivilegeObjectsWithOptions(request, runtime);
}

DescribeAccountPrivilegesResponse Alibabacloud_Adb20211201::Client::describeAccountPrivilegesWithOptions(shared_ptr<DescribeAccountPrivilegesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    query->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->columnPrivilegeObject)) {
    query->insert(pair<string, string>("ColumnPrivilegeObject", *request->columnPrivilegeObject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databasePrivilegeObject)) {
    query->insert(pair<string, string>("DatabasePrivilegeObject", *request->databasePrivilegeObject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    query->insert(pair<string, string>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->privilegeType)) {
    query->insert(pair<string, string>("PrivilegeType", *request->privilegeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tablePrivilegeObject)) {
    query->insert(pair<string, string>("TablePrivilegeObject", *request->tablePrivilegeObject));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAccountPrivileges"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAccountPrivilegesResponse(callApi(params, req, runtime));
}

DescribeAccountPrivilegesResponse Alibabacloud_Adb20211201::Client::describeAccountPrivileges(shared_ptr<DescribeAccountPrivilegesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAccountPrivilegesWithOptions(request, runtime);
}

DescribeAccountsResponse Alibabacloud_Adb20211201::Client::describeAccountsWithOptions(shared_ptr<DescribeAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    query->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engine)) {
    query->insert(pair<string, string>("Engine", *request->engine));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAccounts"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAccountsResponse(callApi(params, req, runtime));
}

DescribeAccountsResponse Alibabacloud_Adb20211201::Client::describeAccounts(shared_ptr<DescribeAccountsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAccountsWithOptions(request, runtime);
}

DescribeAdbMySqlColumnsResponse Alibabacloud_Adb20211201::Client::describeAdbMySqlColumnsWithOptions(shared_ptr<DescribeAdbMySqlColumnsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schema)) {
    query->insert(pair<string, string>("Schema", *request->schema));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAdbMySqlColumns"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAdbMySqlColumnsResponse(callApi(params, req, runtime));
}

DescribeAdbMySqlColumnsResponse Alibabacloud_Adb20211201::Client::describeAdbMySqlColumns(shared_ptr<DescribeAdbMySqlColumnsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAdbMySqlColumnsWithOptions(request, runtime);
}

DescribeAdbMySqlSchemasResponse Alibabacloud_Adb20211201::Client::describeAdbMySqlSchemasWithOptions(shared_ptr<DescribeAdbMySqlSchemasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAdbMySqlSchemas"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAdbMySqlSchemasResponse(callApi(params, req, runtime));
}

DescribeAdbMySqlSchemasResponse Alibabacloud_Adb20211201::Client::describeAdbMySqlSchemas(shared_ptr<DescribeAdbMySqlSchemasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAdbMySqlSchemasWithOptions(request, runtime);
}

DescribeAdbMySqlTablesResponse Alibabacloud_Adb20211201::Client::describeAdbMySqlTablesWithOptions(shared_ptr<DescribeAdbMySqlTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schema)) {
    query->insert(pair<string, string>("Schema", *request->schema));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAdbMySqlTables"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAdbMySqlTablesResponse(callApi(params, req, runtime));
}

DescribeAdbMySqlTablesResponse Alibabacloud_Adb20211201::Client::describeAdbMySqlTables(shared_ptr<DescribeAdbMySqlTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAdbMySqlTablesWithOptions(request, runtime);
}

DescribeAllDataSourceResponse Alibabacloud_Adb20211201::Client::describeAllDataSourceWithOptions(shared_ptr<DescribeAllDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schemaName)) {
    query->insert(pair<string, string>("SchemaName", *request->schemaName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAllDataSource"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAllDataSourceResponse(callApi(params, req, runtime));
}

DescribeAllDataSourceResponse Alibabacloud_Adb20211201::Client::describeAllDataSource(shared_ptr<DescribeAllDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAllDataSourceWithOptions(request, runtime);
}

DescribeApsActionLogsResponse Alibabacloud_Adb20211201::Client::describeApsActionLogsWithOptions(shared_ptr<DescribeApsActionLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stage)) {
    query->insert(pair<string, string>("Stage", *request->stage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    query->insert(pair<string, string>("State", *request->state));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workloadId)) {
    query->insert(pair<string, string>("WorkloadId", *request->workloadId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApsActionLogs"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApsActionLogsResponse(callApi(params, req, runtime));
}

DescribeApsActionLogsResponse Alibabacloud_Adb20211201::Client::describeApsActionLogs(shared_ptr<DescribeApsActionLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApsActionLogsWithOptions(request, runtime);
}

DescribeApsResourceGroupsResponse Alibabacloud_Adb20211201::Client::describeApsResourceGroupsWithOptions(shared_ptr<DescribeApsResourceGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    body->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workloadId)) {
    body->insert(pair<string, string>("WorkloadId", *request->workloadId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApsResourceGroups"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApsResourceGroupsResponse(callApi(params, req, runtime));
}

DescribeApsResourceGroupsResponse Alibabacloud_Adb20211201::Client::describeApsResourceGroups(shared_ptr<DescribeApsResourceGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApsResourceGroupsWithOptions(request, runtime);
}

DescribeAuditLogRecordsResponse Alibabacloud_Adb20211201::Client::describeAuditLogRecordsWithOptions(shared_ptr<DescribeAuditLogRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBName)) {
    query->insert(pair<string, string>("DBName", *request->DBName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hostAddress)) {
    query->insert(pair<string, string>("HostAddress", *request->hostAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderType)) {
    query->insert(pair<string, string>("OrderType", *request->orderType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyUser)) {
    query->insert(pair<string, string>("ProxyUser", *request->proxyUser));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryKeyword)) {
    query->insert(pair<string, string>("QueryKeyword", *request->queryKeyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlType)) {
    query->insert(pair<string, string>("SqlType", *request->sqlType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->succeed)) {
    query->insert(pair<string, string>("Succeed", *request->succeed));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->user)) {
    query->insert(pair<string, string>("User", *request->user));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAuditLogRecords"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAuditLogRecordsResponse(callApi(params, req, runtime));
}

DescribeAuditLogRecordsResponse Alibabacloud_Adb20211201::Client::describeAuditLogRecords(shared_ptr<DescribeAuditLogRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAuditLogRecordsWithOptions(request, runtime);
}

DescribeBackupPolicyResponse Alibabacloud_Adb20211201::Client::describeBackupPolicyWithOptions(shared_ptr<DescribeBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackupPolicy"))},
    {"version", boost::any(string("2021-12-01"))},
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

DescribeBackupPolicyResponse Alibabacloud_Adb20211201::Client::describeBackupPolicy(shared_ptr<DescribeBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupPolicyWithOptions(request, runtime);
}

DescribeBackupsResponse Alibabacloud_Adb20211201::Client::describeBackupsWithOptions(shared_ptr<DescribeBackupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupId)) {
    query->insert(pair<string, string>("BackupId", *request->backupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackups"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBackupsResponse(callApi(params, req, runtime));
}

DescribeBackupsResponse Alibabacloud_Adb20211201::Client::describeBackups(shared_ptr<DescribeBackupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupsWithOptions(request, runtime);
}

DescribeClusterAccessWhiteListResponse Alibabacloud_Adb20211201::Client::describeClusterAccessWhiteListWithOptions(shared_ptr<DescribeClusterAccessWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterAccessWhiteList"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterAccessWhiteListResponse(callApi(params, req, runtime));
}

DescribeClusterAccessWhiteListResponse Alibabacloud_Adb20211201::Client::describeClusterAccessWhiteList(shared_ptr<DescribeClusterAccessWhiteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClusterAccessWhiteListWithOptions(request, runtime);
}

DescribeClusterNetInfoResponse Alibabacloud_Adb20211201::Client::describeClusterNetInfoWithOptions(shared_ptr<DescribeClusterNetInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engine)) {
    query->insert(pair<string, string>("Engine", *request->engine));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterNetInfo"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterNetInfoResponse(callApi(params, req, runtime));
}

DescribeClusterNetInfoResponse Alibabacloud_Adb20211201::Client::describeClusterNetInfo(shared_ptr<DescribeClusterNetInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClusterNetInfoWithOptions(request, runtime);
}

DescribeClusterResourceDetailResponse Alibabacloud_Adb20211201::Client::describeClusterResourceDetailWithOptions(shared_ptr<DescribeClusterResourceDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterResourceDetail"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterResourceDetailResponse(callApi(params, req, runtime));
}

DescribeClusterResourceDetailResponse Alibabacloud_Adb20211201::Client::describeClusterResourceDetail(shared_ptr<DescribeClusterResourceDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClusterResourceDetailWithOptions(request, runtime);
}

DescribeClusterResourceUsageResponse Alibabacloud_Adb20211201::Client::describeClusterResourceUsageWithOptions(shared_ptr<DescribeClusterResourceUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterResourceUsage"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterResourceUsageResponse(callApi(params, req, runtime));
}

DescribeClusterResourceUsageResponse Alibabacloud_Adb20211201::Client::describeClusterResourceUsage(shared_ptr<DescribeClusterResourceUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClusterResourceUsageWithOptions(request, runtime);
}

DescribeColumnsResponse Alibabacloud_Adb20211201::Client::describeColumnsWithOptions(shared_ptr<DescribeColumnsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schemaName)) {
    query->insert(pair<string, string>("SchemaName", *request->schemaName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeColumns"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeColumnsResponse(callApi(params, req, runtime));
}

DescribeColumnsResponse Alibabacloud_Adb20211201::Client::describeColumns(shared_ptr<DescribeColumnsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeColumnsWithOptions(request, runtime);
}

DescribeComputeResourceUsageResponse Alibabacloud_Adb20211201::Client::describeComputeResourceUsageWithOptions(shared_ptr<DescribeComputeResourceUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupName)) {
    query->insert(pair<string, string>("ResourceGroupName", *request->resourceGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeComputeResourceUsage"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeComputeResourceUsageResponse(callApi(params, req, runtime));
}

DescribeComputeResourceUsageResponse Alibabacloud_Adb20211201::Client::describeComputeResourceUsage(shared_ptr<DescribeComputeResourceUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeComputeResourceUsageWithOptions(request, runtime);
}

DescribeDBClusterAttributeResponse Alibabacloud_Adb20211201::Client::describeDBClusterAttributeWithOptions(shared_ptr<DescribeDBClusterAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBClusterAttribute"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBClusterAttributeResponse(callApi(params, req, runtime));
}

DescribeDBClusterAttributeResponse Alibabacloud_Adb20211201::Client::describeDBClusterAttribute(shared_ptr<DescribeDBClusterAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBClusterAttributeWithOptions(request, runtime);
}

DescribeDBClusterHealthStatusResponse Alibabacloud_Adb20211201::Client::describeDBClusterHealthStatusWithOptions(shared_ptr<DescribeDBClusterHealthStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBClusterHealthStatus"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBClusterHealthStatusResponse(callApi(params, req, runtime));
}

DescribeDBClusterHealthStatusResponse Alibabacloud_Adb20211201::Client::describeDBClusterHealthStatus(shared_ptr<DescribeDBClusterHealthStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBClusterHealthStatusWithOptions(request, runtime);
}

DescribeDBClusterPerformanceResponse Alibabacloud_Adb20211201::Client::describeDBClusterPerformanceWithOptions(shared_ptr<DescribeDBClusterPerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourcePools)) {
    query->insert(pair<string, string>("ResourcePools", *request->resourcePools));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBClusterPerformance"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBClusterPerformanceResponse(callApi(params, req, runtime));
}

DescribeDBClusterPerformanceResponse Alibabacloud_Adb20211201::Client::describeDBClusterPerformance(shared_ptr<DescribeDBClusterPerformanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBClusterPerformanceWithOptions(request, runtime);
}

DescribeDBClusterSpaceSummaryResponse Alibabacloud_Adb20211201::Client::describeDBClusterSpaceSummaryWithOptions(shared_ptr<DescribeDBClusterSpaceSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBClusterSpaceSummary"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBClusterSpaceSummaryResponse(callApi(params, req, runtime));
}

DescribeDBClusterSpaceSummaryResponse Alibabacloud_Adb20211201::Client::describeDBClusterSpaceSummary(shared_ptr<DescribeDBClusterSpaceSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBClusterSpaceSummaryWithOptions(request, runtime);
}

DescribeDBClusterStatusResponse Alibabacloud_Adb20211201::Client::describeDBClusterStatusWithOptions(shared_ptr<DescribeDBClusterStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBClusterStatus"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBClusterStatusResponse(callApi(params, req, runtime));
}

DescribeDBClusterStatusResponse Alibabacloud_Adb20211201::Client::describeDBClusterStatus(shared_ptr<DescribeDBClusterStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBClusterStatusWithOptions(request, runtime);
}

DescribeDBClustersResponse Alibabacloud_Adb20211201::Client::describeDBClustersWithOptions(shared_ptr<DescribeDBClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterDescription)) {
    query->insert(pair<string, string>("DBClusterDescription", *request->DBClusterDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterIds)) {
    query->insert(pair<string, string>("DBClusterIds", *request->DBClusterIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterStatus)) {
    query->insert(pair<string, string>("DBClusterStatus", *request->DBClusterStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterVersion)) {
    query->insert(pair<string, string>("DBClusterVersion", *request->DBClusterVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productVersion)) {
    query->insert(pair<string, string>("ProductVersion", *request->productVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeDBClustersRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeDBClustersRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBClusters"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBClustersResponse(callApi(params, req, runtime));
}

DescribeDBClustersResponse Alibabacloud_Adb20211201::Client::describeDBClusters(shared_ptr<DescribeDBClustersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBClustersWithOptions(request, runtime);
}

DescribeDBResourceGroupResponse Alibabacloud_Adb20211201::Client::describeDBResourceGroupWithOptions(shared_ptr<DescribeDBResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupType)) {
    query->insert(pair<string, string>("GroupType", *request->groupType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBResourceGroup"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBResourceGroupResponse(callApi(params, req, runtime));
}

DescribeDBResourceGroupResponse Alibabacloud_Adb20211201::Client::describeDBResourceGroup(shared_ptr<DescribeDBResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBResourceGroupWithOptions(request, runtime);
}

DescribeDiagnosisDimensionsResponse Alibabacloud_Adb20211201::Client::describeDiagnosisDimensionsWithOptions(shared_ptr<DescribeDiagnosisDimensionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryCondition)) {
    query->insert(pair<string, string>("QueryCondition", *request->queryCondition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDiagnosisDimensions"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDiagnosisDimensionsResponse(callApi(params, req, runtime));
}

DescribeDiagnosisDimensionsResponse Alibabacloud_Adb20211201::Client::describeDiagnosisDimensions(shared_ptr<DescribeDiagnosisDimensionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDiagnosisDimensionsWithOptions(request, runtime);
}

DescribeDiagnosisRecordsResponse Alibabacloud_Adb20211201::Client::describeDiagnosisRecordsWithOptions(shared_ptr<DescribeDiagnosisRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientIp)) {
    query->insert(pair<string, string>("ClientIp", *request->clientIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->database)) {
    query->insert(pair<string, string>("Database", *request->database));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxPeakMemory)) {
    query->insert(pair<string, long>("MaxPeakMemory", *request->maxPeakMemory));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxScanSize)) {
    query->insert(pair<string, long>("MaxScanSize", *request->maxScanSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minPeakMemory)) {
    query->insert(pair<string, long>("MinPeakMemory", *request->minPeakMemory));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minScanSize)) {
    query->insert(pair<string, long>("MinScanSize", *request->minScanSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->patternId)) {
    query->insert(pair<string, string>("PatternId", *request->patternId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryCondition)) {
    query->insert(pair<string, string>("QueryCondition", *request->queryCondition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroup)) {
    query->insert(pair<string, string>("ResourceGroup", *request->resourceGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    query->insert(pair<string, string>("UserName", *request->userName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDiagnosisRecords"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDiagnosisRecordsResponse(callApi(params, req, runtime));
}

DescribeDiagnosisRecordsResponse Alibabacloud_Adb20211201::Client::describeDiagnosisRecords(shared_ptr<DescribeDiagnosisRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDiagnosisRecordsWithOptions(request, runtime);
}

DescribeDiagnosisSQLInfoResponse Alibabacloud_Adb20211201::Client::describeDiagnosisSQLInfoWithOptions(shared_ptr<DescribeDiagnosisSQLInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDiagnosisSQLInfo"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDiagnosisSQLInfoResponse(callApi(params, req, runtime));
}

DescribeDiagnosisSQLInfoResponse Alibabacloud_Adb20211201::Client::describeDiagnosisSQLInfo(shared_ptr<DescribeDiagnosisSQLInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDiagnosisSQLInfoWithOptions(request, runtime);
}

DescribeDownloadRecordsResponse Alibabacloud_Adb20211201::Client::describeDownloadRecordsWithOptions(shared_ptr<DescribeDownloadRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDownloadRecords"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDownloadRecordsResponse(callApi(params, req, runtime));
}

DescribeDownloadRecordsResponse Alibabacloud_Adb20211201::Client::describeDownloadRecords(shared_ptr<DescribeDownloadRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDownloadRecordsWithOptions(request, runtime);
}

DescribeElasticPlanAttributeResponse Alibabacloud_Adb20211201::Client::describeElasticPlanAttributeWithOptions(shared_ptr<DescribeElasticPlanAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->elasticPlanName)) {
    query->insert(pair<string, string>("ElasticPlanName", *request->elasticPlanName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeElasticPlanAttribute"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeElasticPlanAttributeResponse(callApi(params, req, runtime));
}

DescribeElasticPlanAttributeResponse Alibabacloud_Adb20211201::Client::describeElasticPlanAttribute(shared_ptr<DescribeElasticPlanAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeElasticPlanAttributeWithOptions(request, runtime);
}

DescribeElasticPlanJobsResponse Alibabacloud_Adb20211201::Client::describeElasticPlanJobsWithOptions(shared_ptr<DescribeElasticPlanJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->elasticPlanName)) {
    query->insert(pair<string, string>("ElasticPlanName", *request->elasticPlanName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupName)) {
    query->insert(pair<string, string>("ResourceGroupName", *request->resourceGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeElasticPlanJobs"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeElasticPlanJobsResponse(callApi(params, req, runtime));
}

DescribeElasticPlanJobsResponse Alibabacloud_Adb20211201::Client::describeElasticPlanJobs(shared_ptr<DescribeElasticPlanJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeElasticPlanJobsWithOptions(request, runtime);
}

DescribeElasticPlanSpecificationsResponse Alibabacloud_Adb20211201::Client::describeElasticPlanSpecificationsWithOptions(shared_ptr<DescribeElasticPlanSpecificationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupName)) {
    query->insert(pair<string, string>("ResourceGroupName", *request->resourceGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeElasticPlanSpecifications"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeElasticPlanSpecificationsResponse(callApi(params, req, runtime));
}

DescribeElasticPlanSpecificationsResponse Alibabacloud_Adb20211201::Client::describeElasticPlanSpecifications(shared_ptr<DescribeElasticPlanSpecificationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeElasticPlanSpecificationsWithOptions(request, runtime);
}

DescribeElasticPlansResponse Alibabacloud_Adb20211201::Client::describeElasticPlansWithOptions(shared_ptr<DescribeElasticPlansRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->elasticPlanName)) {
    query->insert(pair<string, string>("ElasticPlanName", *request->elasticPlanName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enabled)) {
    query->insert(pair<string, bool>("Enabled", *request->enabled));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupName)) {
    query->insert(pair<string, string>("ResourceGroupName", *request->resourceGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeElasticPlans"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeElasticPlansResponse(callApi(params, req, runtime));
}

DescribeElasticPlansResponse Alibabacloud_Adb20211201::Client::describeElasticPlans(shared_ptr<DescribeElasticPlansRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeElasticPlansWithOptions(request, runtime);
}

DescribeEnabledPrivilegesResponse Alibabacloud_Adb20211201::Client::describeEnabledPrivilegesWithOptions(shared_ptr<DescribeEnabledPrivilegesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEnabledPrivileges"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEnabledPrivilegesResponse(callApi(params, req, runtime));
}

DescribeEnabledPrivilegesResponse Alibabacloud_Adb20211201::Client::describeEnabledPrivileges(shared_ptr<DescribeEnabledPrivilegesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEnabledPrivilegesWithOptions(request, runtime);
}

DescribeExcessivePrimaryKeysResponse Alibabacloud_Adb20211201::Client::describeExcessivePrimaryKeysWithOptions(shared_ptr<DescribeExcessivePrimaryKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeExcessivePrimaryKeys"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeExcessivePrimaryKeysResponse(callApi(params, req, runtime));
}

DescribeExcessivePrimaryKeysResponse Alibabacloud_Adb20211201::Client::describeExcessivePrimaryKeys(shared_ptr<DescribeExcessivePrimaryKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExcessivePrimaryKeysWithOptions(request, runtime);
}

DescribeJobResourceUsageResponse Alibabacloud_Adb20211201::Client::describeJobResourceUsageWithOptions(shared_ptr<DescribeJobResourceUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeJobResourceUsage"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeJobResourceUsageResponse(callApi(params, req, runtime));
}

DescribeJobResourceUsageResponse Alibabacloud_Adb20211201::Client::describeJobResourceUsage(shared_ptr<DescribeJobResourceUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeJobResourceUsageWithOptions(request, runtime);
}

DescribePatternPerformanceResponse Alibabacloud_Adb20211201::Client::describePatternPerformanceWithOptions(shared_ptr<DescribePatternPerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->patternId)) {
    query->insert(pair<string, string>("PatternId", *request->patternId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePatternPerformance"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePatternPerformanceResponse(callApi(params, req, runtime));
}

DescribePatternPerformanceResponse Alibabacloud_Adb20211201::Client::describePatternPerformance(shared_ptr<DescribePatternPerformanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePatternPerformanceWithOptions(request, runtime);
}

DescribePerformanceViewAttributeResponse Alibabacloud_Adb20211201::Client::describePerformanceViewAttributeWithOptions(shared_ptr<DescribePerformanceViewAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->viewName)) {
    query->insert(pair<string, string>("ViewName", *request->viewName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePerformanceViewAttribute"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePerformanceViewAttributeResponse(callApi(params, req, runtime));
}

DescribePerformanceViewAttributeResponse Alibabacloud_Adb20211201::Client::describePerformanceViewAttribute(shared_ptr<DescribePerformanceViewAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePerformanceViewAttributeWithOptions(request, runtime);
}

DescribePerformanceViewsResponse Alibabacloud_Adb20211201::Client::describePerformanceViewsWithOptions(shared_ptr<DescribePerformanceViewsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePerformanceViews"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePerformanceViewsResponse(callApi(params, req, runtime));
}

DescribePerformanceViewsResponse Alibabacloud_Adb20211201::Client::describePerformanceViews(shared_ptr<DescribePerformanceViewsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePerformanceViewsWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Adb20211201::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2021-12-01"))},
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

DescribeRegionsResponse Alibabacloud_Adb20211201::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeSQLPatternsResponse Alibabacloud_Adb20211201::Client::describeSQLPatternsWithOptions(shared_ptr<DescribeSQLPatternsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSQLPatterns"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSQLPatternsResponse(callApi(params, req, runtime));
}

DescribeSQLPatternsResponse Alibabacloud_Adb20211201::Client::describeSQLPatterns(shared_ptr<DescribeSQLPatternsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSQLPatternsWithOptions(request, runtime);
}

DescribeSchemasResponse Alibabacloud_Adb20211201::Client::describeSchemasWithOptions(shared_ptr<DescribeSchemasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSchemas"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSchemasResponse(callApi(params, req, runtime));
}

DescribeSchemasResponse Alibabacloud_Adb20211201::Client::describeSchemas(shared_ptr<DescribeSchemasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSchemasWithOptions(request, runtime);
}

DescribeSparkCodeLogResponse Alibabacloud_Adb20211201::Client::describeSparkCodeLogWithOptions(shared_ptr<DescribeSparkCodeLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->jobId)) {
    query->insert(pair<string, long>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSparkCodeLog"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSparkCodeLogResponse(callApi(params, req, runtime));
}

DescribeSparkCodeLogResponse Alibabacloud_Adb20211201::Client::describeSparkCodeLog(shared_ptr<DescribeSparkCodeLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSparkCodeLogWithOptions(request, runtime);
}

DescribeSparkCodeOutputResponse Alibabacloud_Adb20211201::Client::describeSparkCodeOutputWithOptions(shared_ptr<DescribeSparkCodeOutputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->jobId)) {
    query->insert(pair<string, long>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSparkCodeOutput"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSparkCodeOutputResponse(callApi(params, req, runtime));
}

DescribeSparkCodeOutputResponse Alibabacloud_Adb20211201::Client::describeSparkCodeOutput(shared_ptr<DescribeSparkCodeOutputRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSparkCodeOutputWithOptions(request, runtime);
}

DescribeSparkCodeWebUiResponse Alibabacloud_Adb20211201::Client::describeSparkCodeWebUiWithOptions(shared_ptr<DescribeSparkCodeWebUiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->jobId)) {
    query->insert(pair<string, long>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSparkCodeWebUi"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSparkCodeWebUiResponse(callApi(params, req, runtime));
}

DescribeSparkCodeWebUiResponse Alibabacloud_Adb20211201::Client::describeSparkCodeWebUi(shared_ptr<DescribeSparkCodeWebUiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSparkCodeWebUiWithOptions(request, runtime);
}

DescribeSqlPatternResponse Alibabacloud_Adb20211201::Client::describeSqlPatternWithOptions(shared_ptr<DescribeSqlPatternRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlPattern)) {
    query->insert(pair<string, string>("SqlPattern", *request->sqlPattern));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSqlPattern"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSqlPatternResponse(callApi(params, req, runtime));
}

DescribeSqlPatternResponse Alibabacloud_Adb20211201::Client::describeSqlPattern(shared_ptr<DescribeSqlPatternRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSqlPatternWithOptions(request, runtime);
}

DescribeStorageResourceUsageResponse Alibabacloud_Adb20211201::Client::describeStorageResourceUsageWithOptions(shared_ptr<DescribeStorageResourceUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeStorageResourceUsage"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeStorageResourceUsageResponse(callApi(params, req, runtime));
}

DescribeStorageResourceUsageResponse Alibabacloud_Adb20211201::Client::describeStorageResourceUsage(shared_ptr<DescribeStorageResourceUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeStorageResourceUsageWithOptions(request, runtime);
}

DescribeTableAccessCountResponse Alibabacloud_Adb20211201::Client::describeTableAccessCountWithOptions(shared_ptr<DescribeTableAccessCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTableAccessCount"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTableAccessCountResponse(callApi(params, req, runtime));
}

DescribeTableAccessCountResponse Alibabacloud_Adb20211201::Client::describeTableAccessCount(shared_ptr<DescribeTableAccessCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTableAccessCountWithOptions(request, runtime);
}

DescribeTablesResponse Alibabacloud_Adb20211201::Client::describeTablesWithOptions(shared_ptr<DescribeTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schemaName)) {
    query->insert(pair<string, string>("SchemaName", *request->schemaName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTables"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTablesResponse(callApi(params, req, runtime));
}

DescribeTablesResponse Alibabacloud_Adb20211201::Client::describeTables(shared_ptr<DescribeTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTablesWithOptions(request, runtime);
}

DescribeUserQuotaResponse Alibabacloud_Adb20211201::Client::describeUserQuotaWithOptions(shared_ptr<DescribeUserQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUserQuota"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUserQuotaResponse(callApi(params, req, runtime));
}

DescribeUserQuotaResponse Alibabacloud_Adb20211201::Client::describeUserQuota(shared_ptr<DescribeUserQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserQuotaWithOptions(request, runtime);
}

DetachUserENIResponse Alibabacloud_Adb20211201::Client::detachUserENIWithOptions(shared_ptr<DetachUserENIRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachUserENI"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachUserENIResponse(callApi(params, req, runtime));
}

DetachUserENIResponse Alibabacloud_Adb20211201::Client::detachUserENI(shared_ptr<DetachUserENIRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachUserENIWithOptions(request, runtime);
}

DisableElasticPlanResponse Alibabacloud_Adb20211201::Client::disableElasticPlanWithOptions(shared_ptr<DisableElasticPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->elasticPlanName)) {
    query->insert(pair<string, string>("ElasticPlanName", *request->elasticPlanName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableElasticPlan"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableElasticPlanResponse(callApi(params, req, runtime));
}

DisableElasticPlanResponse Alibabacloud_Adb20211201::Client::disableElasticPlan(shared_ptr<DisableElasticPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableElasticPlanWithOptions(request, runtime);
}

DownloadDiagnosisRecordsResponse Alibabacloud_Adb20211201::Client::downloadDiagnosisRecordsWithOptions(shared_ptr<DownloadDiagnosisRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientIp)) {
    query->insert(pair<string, string>("ClientIp", *request->clientIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->database)) {
    query->insert(pair<string, string>("Database", *request->database));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxPeakMemory)) {
    query->insert(pair<string, long>("MaxPeakMemory", *request->maxPeakMemory));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxScanSize)) {
    query->insert(pair<string, long>("MaxScanSize", *request->maxScanSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minPeakMemory)) {
    query->insert(pair<string, long>("MinPeakMemory", *request->minPeakMemory));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minScanSize)) {
    query->insert(pair<string, long>("MinScanSize", *request->minScanSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryCondition)) {
    query->insert(pair<string, string>("QueryCondition", *request->queryCondition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroup)) {
    query->insert(pair<string, string>("ResourceGroup", *request->resourceGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    query->insert(pair<string, string>("UserName", *request->userName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DownloadDiagnosisRecords"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DownloadDiagnosisRecordsResponse(callApi(params, req, runtime));
}

DownloadDiagnosisRecordsResponse Alibabacloud_Adb20211201::Client::downloadDiagnosisRecords(shared_ptr<DownloadDiagnosisRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return downloadDiagnosisRecordsWithOptions(request, runtime);
}

EnableElasticPlanResponse Alibabacloud_Adb20211201::Client::enableElasticPlanWithOptions(shared_ptr<EnableElasticPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->elasticPlanName)) {
    query->insert(pair<string, string>("ElasticPlanName", *request->elasticPlanName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableElasticPlan"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableElasticPlanResponse(callApi(params, req, runtime));
}

EnableElasticPlanResponse Alibabacloud_Adb20211201::Client::enableElasticPlan(shared_ptr<EnableElasticPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableElasticPlanWithOptions(request, runtime);
}

ExistRunningSQLEngineResponse Alibabacloud_Adb20211201::Client::existRunningSQLEngineWithOptions(shared_ptr<ExistRunningSQLEngineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    body->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupName)) {
    body->insert(pair<string, string>("ResourceGroupName", *request->resourceGroupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExistRunningSQLEngine"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExistRunningSQLEngineResponse(callApi(params, req, runtime));
}

ExistRunningSQLEngineResponse Alibabacloud_Adb20211201::Client::existRunningSQLEngine(shared_ptr<ExistRunningSQLEngineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return existRunningSQLEngineWithOptions(request, runtime);
}

GetDatabaseObjectsResponse Alibabacloud_Adb20211201::Client::getDatabaseObjectsWithOptions(shared_ptr<GetDatabaseObjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterOwner)) {
    query->insert(pair<string, string>("FilterOwner", *request->filterOwner));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterSchemaName)) {
    query->insert(pair<string, string>("FilterSchemaName", *request->filterSchemaName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
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
    {"action", boost::any(string("GetDatabaseObjects"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDatabaseObjectsResponse(callApi(params, req, runtime));
}

GetDatabaseObjectsResponse Alibabacloud_Adb20211201::Client::getDatabaseObjects(shared_ptr<GetDatabaseObjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDatabaseObjectsWithOptions(request, runtime);
}

GetSparkAppAttemptLogResponse Alibabacloud_Adb20211201::Client::getSparkAppAttemptLogWithOptions(shared_ptr<GetSparkAppAttemptLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->attemptId)) {
    body->insert(pair<string, string>("AttemptId", *request->attemptId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->logLength)) {
    body->insert(pair<string, long>("LogLength", *request->logLength));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSparkAppAttemptLog"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSparkAppAttemptLogResponse(callApi(params, req, runtime));
}

GetSparkAppAttemptLogResponse Alibabacloud_Adb20211201::Client::getSparkAppAttemptLog(shared_ptr<GetSparkAppAttemptLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSparkAppAttemptLogWithOptions(request, runtime);
}

GetSparkAppInfoResponse Alibabacloud_Adb20211201::Client::getSparkAppInfoWithOptions(shared_ptr<GetSparkAppInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSparkAppInfo"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSparkAppInfoResponse(callApi(params, req, runtime));
}

GetSparkAppInfoResponse Alibabacloud_Adb20211201::Client::getSparkAppInfo(shared_ptr<GetSparkAppInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSparkAppInfoWithOptions(request, runtime);
}

GetSparkAppLogResponse Alibabacloud_Adb20211201::Client::getSparkAppLogWithOptions(shared_ptr<GetSparkAppLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->logLength)) {
    body->insert(pair<string, long>("LogLength", *request->logLength));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSparkAppLog"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSparkAppLogResponse(callApi(params, req, runtime));
}

GetSparkAppLogResponse Alibabacloud_Adb20211201::Client::getSparkAppLog(shared_ptr<GetSparkAppLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSparkAppLogWithOptions(request, runtime);
}

GetSparkAppMetricsResponse Alibabacloud_Adb20211201::Client::getSparkAppMetricsWithOptions(shared_ptr<GetSparkAppMetricsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSparkAppMetrics"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSparkAppMetricsResponse(callApi(params, req, runtime));
}

GetSparkAppMetricsResponse Alibabacloud_Adb20211201::Client::getSparkAppMetrics(shared_ptr<GetSparkAppMetricsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSparkAppMetricsWithOptions(request, runtime);
}

GetSparkAppStateResponse Alibabacloud_Adb20211201::Client::getSparkAppStateWithOptions(shared_ptr<GetSparkAppStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSparkAppState"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSparkAppStateResponse(callApi(params, req, runtime));
}

GetSparkAppStateResponse Alibabacloud_Adb20211201::Client::getSparkAppState(shared_ptr<GetSparkAppStateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSparkAppStateWithOptions(request, runtime);
}

GetSparkAppWebUiAddressResponse Alibabacloud_Adb20211201::Client::getSparkAppWebUiAddressWithOptions(shared_ptr<GetSparkAppWebUiAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSparkAppWebUiAddress"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSparkAppWebUiAddressResponse(callApi(params, req, runtime));
}

GetSparkAppWebUiAddressResponse Alibabacloud_Adb20211201::Client::getSparkAppWebUiAddress(shared_ptr<GetSparkAppWebUiAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSparkAppWebUiAddressWithOptions(request, runtime);
}

GetSparkConfigLogPathResponse Alibabacloud_Adb20211201::Client::getSparkConfigLogPathWithOptions(shared_ptr<GetSparkConfigLogPathRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    body->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSparkConfigLogPath"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSparkConfigLogPathResponse(callApi(params, req, runtime));
}

GetSparkConfigLogPathResponse Alibabacloud_Adb20211201::Client::getSparkConfigLogPath(shared_ptr<GetSparkConfigLogPathRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSparkConfigLogPathWithOptions(request, runtime);
}

GetSparkDefinitionsResponse Alibabacloud_Adb20211201::Client::getSparkDefinitionsWithOptions(shared_ptr<GetSparkDefinitionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    body->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSparkDefinitions"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSparkDefinitionsResponse(callApi(params, req, runtime));
}

GetSparkDefinitionsResponse Alibabacloud_Adb20211201::Client::getSparkDefinitions(shared_ptr<GetSparkDefinitionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSparkDefinitionsWithOptions(request, runtime);
}

GetSparkLogAnalyzeTaskResponse Alibabacloud_Adb20211201::Client::getSparkLogAnalyzeTaskWithOptions(shared_ptr<GetSparkLogAnalyzeTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    body->insert(pair<string, long>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSparkLogAnalyzeTask"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSparkLogAnalyzeTaskResponse(callApi(params, req, runtime));
}

GetSparkLogAnalyzeTaskResponse Alibabacloud_Adb20211201::Client::getSparkLogAnalyzeTask(shared_ptr<GetSparkLogAnalyzeTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSparkLogAnalyzeTaskWithOptions(request, runtime);
}

GetSparkSQLEngineStateResponse Alibabacloud_Adb20211201::Client::getSparkSQLEngineStateWithOptions(shared_ptr<GetSparkSQLEngineStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    body->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupName)) {
    body->insert(pair<string, string>("ResourceGroupName", *request->resourceGroupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSparkSQLEngineState"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSparkSQLEngineStateResponse(callApi(params, req, runtime));
}

GetSparkSQLEngineStateResponse Alibabacloud_Adb20211201::Client::getSparkSQLEngineState(shared_ptr<GetSparkSQLEngineStateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSparkSQLEngineStateWithOptions(request, runtime);
}

GetSparkTemplateFileContentResponse Alibabacloud_Adb20211201::Client::getSparkTemplateFileContentWithOptions(shared_ptr<GetSparkTemplateFileContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    body->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSparkTemplateFileContent"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSparkTemplateFileContentResponse(callApi(params, req, runtime));
}

GetSparkTemplateFileContentResponse Alibabacloud_Adb20211201::Client::getSparkTemplateFileContent(shared_ptr<GetSparkTemplateFileContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSparkTemplateFileContentWithOptions(request, runtime);
}

GetSparkTemplateFolderTreeResponse Alibabacloud_Adb20211201::Client::getSparkTemplateFolderTreeWithOptions(shared_ptr<GetSparkTemplateFolderTreeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    body->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSparkTemplateFolderTree"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSparkTemplateFolderTreeResponse(callApi(params, req, runtime));
}

GetSparkTemplateFolderTreeResponse Alibabacloud_Adb20211201::Client::getSparkTemplateFolderTree(shared_ptr<GetSparkTemplateFolderTreeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSparkTemplateFolderTreeWithOptions(request, runtime);
}

GetSparkTemplateFullTreeResponse Alibabacloud_Adb20211201::Client::getSparkTemplateFullTreeWithOptions(shared_ptr<GetSparkTemplateFullTreeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    body->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSparkTemplateFullTree"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSparkTemplateFullTreeResponse(callApi(params, req, runtime));
}

GetSparkTemplateFullTreeResponse Alibabacloud_Adb20211201::Client::getSparkTemplateFullTree(shared_ptr<GetSparkTemplateFullTreeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSparkTemplateFullTreeWithOptions(request, runtime);
}

GetTableResponse Alibabacloud_Adb20211201::Client::getTableWithOptions(shared_ptr<GetTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTable"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTableResponse(callApi(params, req, runtime));
}

GetTableResponse Alibabacloud_Adb20211201::Client::getTable(shared_ptr<GetTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTableWithOptions(request, runtime);
}

GetTableColumnsResponse Alibabacloud_Adb20211201::Client::getTableColumnsWithOptions(shared_ptr<GetTableColumnsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->columnName)) {
    query->insert(pair<string, string>("ColumnName", *request->columnName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->schemaName)) {
    query->insert(pair<string, string>("SchemaName", *request->schemaName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTableColumns"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTableColumnsResponse(callApi(params, req, runtime));
}

GetTableColumnsResponse Alibabacloud_Adb20211201::Client::getTableColumns(shared_ptr<GetTableColumnsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTableColumnsWithOptions(request, runtime);
}

GetTableDDLResponse Alibabacloud_Adb20211201::Client::getTableDDLWithOptions(shared_ptr<GetTableDDLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schemaName)) {
    query->insert(pair<string, string>("SchemaName", *request->schemaName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTableDDL"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTableDDLResponse(callApi(params, req, runtime));
}

GetTableDDLResponse Alibabacloud_Adb20211201::Client::getTableDDL(shared_ptr<GetTableDDLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTableDDLWithOptions(request, runtime);
}

GetTableObjectsResponse Alibabacloud_Adb20211201::Client::getTableObjectsWithOptions(shared_ptr<GetTableObjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterDescription)) {
    query->insert(pair<string, string>("FilterDescription", *request->filterDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterOwner)) {
    query->insert(pair<string, string>("FilterOwner", *request->filterOwner));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterTblName)) {
    query->insert(pair<string, string>("FilterTblName", *request->filterTblName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterTblType)) {
    query->insert(pair<string, string>("FilterTblType", *request->filterTblType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->schemaName)) {
    query->insert(pair<string, string>("SchemaName", *request->schemaName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTableObjects"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTableObjectsResponse(callApi(params, req, runtime));
}

GetTableObjectsResponse Alibabacloud_Adb20211201::Client::getTableObjects(shared_ptr<GetTableObjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTableObjectsWithOptions(request, runtime);
}

GetViewDDLResponse Alibabacloud_Adb20211201::Client::getViewDDLWithOptions(shared_ptr<GetViewDDLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schemaName)) {
    query->insert(pair<string, string>("SchemaName", *request->schemaName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->viewName)) {
    query->insert(pair<string, string>("ViewName", *request->viewName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetViewDDL"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetViewDDLResponse(callApi(params, req, runtime));
}

GetViewDDLResponse Alibabacloud_Adb20211201::Client::getViewDDL(shared_ptr<GetViewDDLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getViewDDLWithOptions(request, runtime);
}

GetViewObjectsResponse Alibabacloud_Adb20211201::Client::getViewObjectsWithOptions(shared_ptr<GetViewObjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterOwner)) {
    query->insert(pair<string, string>("FilterOwner", *request->filterOwner));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterViewName)) {
    query->insert(pair<string, string>("FilterViewName", *request->filterViewName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterViewType)) {
    query->insert(pair<string, string>("FilterViewType", *request->filterViewType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->schemaName)) {
    query->insert(pair<string, string>("SchemaName", *request->schemaName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetViewObjects"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetViewObjectsResponse(callApi(params, req, runtime));
}

GetViewObjectsResponse Alibabacloud_Adb20211201::Client::getViewObjects(shared_ptr<GetViewObjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getViewObjectsWithOptions(request, runtime);
}

KillSparkAppResponse Alibabacloud_Adb20211201::Client::killSparkAppWithOptions(shared_ptr<KillSparkAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("KillSparkApp"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return KillSparkAppResponse(callApi(params, req, runtime));
}

KillSparkAppResponse Alibabacloud_Adb20211201::Client::killSparkApp(shared_ptr<KillSparkAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return killSparkAppWithOptions(request, runtime);
}

KillSparkLogAnalyzeTaskResponse Alibabacloud_Adb20211201::Client::killSparkLogAnalyzeTaskWithOptions(shared_ptr<KillSparkLogAnalyzeTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    body->insert(pair<string, long>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("KillSparkLogAnalyzeTask"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return KillSparkLogAnalyzeTaskResponse(callApi(params, req, runtime));
}

KillSparkLogAnalyzeTaskResponse Alibabacloud_Adb20211201::Client::killSparkLogAnalyzeTask(shared_ptr<KillSparkLogAnalyzeTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return killSparkLogAnalyzeTaskWithOptions(request, runtime);
}

KillSparkSQLEngineResponse Alibabacloud_Adb20211201::Client::killSparkSQLEngineWithOptions(shared_ptr<KillSparkSQLEngineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    body->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupName)) {
    body->insert(pair<string, string>("ResourceGroupName", *request->resourceGroupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("KillSparkSQLEngine"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return KillSparkSQLEngineResponse(callApi(params, req, runtime));
}

KillSparkSQLEngineResponse Alibabacloud_Adb20211201::Client::killSparkSQLEngine(shared_ptr<KillSparkSQLEngineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return killSparkSQLEngineWithOptions(request, runtime);
}

ListSparkAppAttemptsResponse Alibabacloud_Adb20211201::Client::listSparkAppAttemptsWithOptions(shared_ptr<ListSparkAppAttemptsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
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
    {"action", boost::any(string("ListSparkAppAttempts"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSparkAppAttemptsResponse(callApi(params, req, runtime));
}

ListSparkAppAttemptsResponse Alibabacloud_Adb20211201::Client::listSparkAppAttempts(shared_ptr<ListSparkAppAttemptsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSparkAppAttemptsWithOptions(request, runtime);
}

ListSparkAppsResponse Alibabacloud_Adb20211201::Client::listSparkAppsWithOptions(shared_ptr<ListSparkAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupName)) {
    query->insert(pair<string, string>("ResourceGroupName", *request->resourceGroupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSparkApps"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSparkAppsResponse(callApi(params, req, runtime));
}

ListSparkAppsResponse Alibabacloud_Adb20211201::Client::listSparkApps(shared_ptr<ListSparkAppsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSparkAppsWithOptions(request, runtime);
}

ListSparkLogAnalyzeTasksResponse Alibabacloud_Adb20211201::Client::listSparkLogAnalyzeTasksWithOptions(shared_ptr<ListSparkLogAnalyzeTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    body->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSparkLogAnalyzeTasks"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSparkLogAnalyzeTasksResponse(callApi(params, req, runtime));
}

ListSparkLogAnalyzeTasksResponse Alibabacloud_Adb20211201::Client::listSparkLogAnalyzeTasks(shared_ptr<ListSparkLogAnalyzeTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSparkLogAnalyzeTasksWithOptions(request, runtime);
}

ListSparkTemplateFileIdsResponse Alibabacloud_Adb20211201::Client::listSparkTemplateFileIdsWithOptions(shared_ptr<ListSparkTemplateFileIdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    body->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSparkTemplateFileIds"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSparkTemplateFileIdsResponse(callApi(params, req, runtime));
}

ListSparkTemplateFileIdsResponse Alibabacloud_Adb20211201::Client::listSparkTemplateFileIds(shared_ptr<ListSparkTemplateFileIdsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSparkTemplateFileIdsWithOptions(request, runtime);
}

LoadSampleDataSetResponse Alibabacloud_Adb20211201::Client::loadSampleDataSetWithOptions(shared_ptr<LoadSampleDataSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LoadSampleDataSet"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LoadSampleDataSetResponse(callApi(params, req, runtime));
}

LoadSampleDataSetResponse Alibabacloud_Adb20211201::Client::loadSampleDataSet(shared_ptr<LoadSampleDataSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return loadSampleDataSetWithOptions(request, runtime);
}

ModifyAccountDescriptionResponse Alibabacloud_Adb20211201::Client::modifyAccountDescriptionWithOptions(shared_ptr<ModifyAccountDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountDescription)) {
    query->insert(pair<string, string>("AccountDescription", *request->accountDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    query->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engine)) {
    query->insert(pair<string, string>("Engine", *request->engine));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAccountDescription"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAccountDescriptionResponse(callApi(params, req, runtime));
}

ModifyAccountDescriptionResponse Alibabacloud_Adb20211201::Client::modifyAccountDescription(shared_ptr<ModifyAccountDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAccountDescriptionWithOptions(request, runtime);
}

ModifyAccountPrivilegesResponse Alibabacloud_Adb20211201::Client::modifyAccountPrivilegesWithOptions(shared_ptr<ModifyAccountPrivilegesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ModifyAccountPrivilegesShrinkRequest> request = make_shared<ModifyAccountPrivilegesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ModifyAccountPrivilegesRequestAccountPrivileges>>(tmpReq->accountPrivileges)) {
    request->accountPrivilegesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->accountPrivileges, make_shared<string>("AccountPrivileges"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    query->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountPrivilegesShrink)) {
    query->insert(pair<string, string>("AccountPrivileges", *request->accountPrivilegesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAccountPrivileges"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAccountPrivilegesResponse(callApi(params, req, runtime));
}

ModifyAccountPrivilegesResponse Alibabacloud_Adb20211201::Client::modifyAccountPrivileges(shared_ptr<ModifyAccountPrivilegesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAccountPrivilegesWithOptions(request, runtime);
}

ModifyAuditLogConfigResponse Alibabacloud_Adb20211201::Client::modifyAuditLogConfigWithOptions(shared_ptr<ModifyAuditLogConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->auditLogStatus)) {
    query->insert(pair<string, string>("AuditLogStatus", *request->auditLogStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engineType)) {
    query->insert(pair<string, string>("EngineType", *request->engineType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAuditLogConfig"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAuditLogConfigResponse(callApi(params, req, runtime));
}

ModifyAuditLogConfigResponse Alibabacloud_Adb20211201::Client::modifyAuditLogConfig(shared_ptr<ModifyAuditLogConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAuditLogConfigWithOptions(request, runtime);
}

ModifyBackupPolicyResponse Alibabacloud_Adb20211201::Client::modifyBackupPolicyWithOptions(shared_ptr<ModifyBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupRetentionPeriod)) {
    query->insert(pair<string, string>("BackupRetentionPeriod", *request->backupRetentionPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enableBackupLog)) {
    query->insert(pair<string, string>("EnableBackupLog", *request->enableBackupLog));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->logBackupRetentionPeriod)) {
    query->insert(pair<string, long>("LogBackupRetentionPeriod", *request->logBackupRetentionPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preferredBackupPeriod)) {
    query->insert(pair<string, string>("PreferredBackupPeriod", *request->preferredBackupPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preferredBackupTime)) {
    query->insert(pair<string, string>("PreferredBackupTime", *request->preferredBackupTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyBackupPolicy"))},
    {"version", boost::any(string("2021-12-01"))},
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

ModifyBackupPolicyResponse Alibabacloud_Adb20211201::Client::modifyBackupPolicy(shared_ptr<ModifyBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyBackupPolicyWithOptions(request, runtime);
}

ModifyClusterAccessWhiteListResponse Alibabacloud_Adb20211201::Client::modifyClusterAccessWhiteListWithOptions(shared_ptr<ModifyClusterAccessWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterIPArrayAttribute)) {
    query->insert(pair<string, string>("DBClusterIPArrayAttribute", *request->DBClusterIPArrayAttribute));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterIPArrayName)) {
    query->insert(pair<string, string>("DBClusterIPArrayName", *request->DBClusterIPArrayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifyMode)) {
    query->insert(pair<string, string>("ModifyMode", *request->modifyMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityIps)) {
    query->insert(pair<string, string>("SecurityIps", *request->securityIps));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyClusterAccessWhiteList"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyClusterAccessWhiteListResponse(callApi(params, req, runtime));
}

ModifyClusterAccessWhiteListResponse Alibabacloud_Adb20211201::Client::modifyClusterAccessWhiteList(shared_ptr<ModifyClusterAccessWhiteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyClusterAccessWhiteListWithOptions(request, runtime);
}

ModifyClusterConnectionStringResponse Alibabacloud_Adb20211201::Client::modifyClusterConnectionStringWithOptions(shared_ptr<ModifyClusterConnectionStringRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionStringPrefix)) {
    query->insert(pair<string, string>("ConnectionStringPrefix", *request->connectionStringPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentConnectionString)) {
    query->insert(pair<string, string>("CurrentConnectionString", *request->currentConnectionString));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->port)) {
    query->insert(pair<string, long>("Port", *request->port));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyClusterConnectionString"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyClusterConnectionStringResponse(callApi(params, req, runtime));
}

ModifyClusterConnectionStringResponse Alibabacloud_Adb20211201::Client::modifyClusterConnectionString(shared_ptr<ModifyClusterConnectionStringRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyClusterConnectionStringWithOptions(request, runtime);
}

ModifyDBClusterResponse Alibabacloud_Adb20211201::Client::modifyDBClusterWithOptions(shared_ptr<ModifyDBClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->computeResource)) {
    query->insert(pair<string, string>("ComputeResource", *request->computeResource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableDefaultResourcePool)) {
    query->insert(pair<string, bool>("EnableDefaultResourcePool", *request->enableDefaultResourcePool));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productForm)) {
    query->insert(pair<string, string>("ProductForm", *request->productForm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reservedNodeCount)) {
    query->insert(pair<string, long>("ReservedNodeCount", *request->reservedNodeCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reservedNodeSize)) {
    query->insert(pair<string, string>("ReservedNodeSize", *request->reservedNodeSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageResource)) {
    query->insert(pair<string, string>("StorageResource", *request->storageResource));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDBCluster"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDBClusterResponse(callApi(params, req, runtime));
}

ModifyDBClusterResponse Alibabacloud_Adb20211201::Client::modifyDBCluster(shared_ptr<ModifyDBClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBClusterWithOptions(request, runtime);
}

ModifyDBClusterDescriptionResponse Alibabacloud_Adb20211201::Client::modifyDBClusterDescriptionWithOptions(shared_ptr<ModifyDBClusterDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterDescription)) {
    query->insert(pair<string, string>("DBClusterDescription", *request->DBClusterDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDBClusterDescription"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDBClusterDescriptionResponse(callApi(params, req, runtime));
}

ModifyDBClusterDescriptionResponse Alibabacloud_Adb20211201::Client::modifyDBClusterDescription(shared_ptr<ModifyDBClusterDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBClusterDescriptionWithOptions(request, runtime);
}

ModifyDBClusterMaintainTimeResponse Alibabacloud_Adb20211201::Client::modifyDBClusterMaintainTimeWithOptions(shared_ptr<ModifyDBClusterMaintainTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maintainTime)) {
    query->insert(pair<string, string>("MaintainTime", *request->maintainTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDBClusterMaintainTime"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDBClusterMaintainTimeResponse(callApi(params, req, runtime));
}

ModifyDBClusterMaintainTimeResponse Alibabacloud_Adb20211201::Client::modifyDBClusterMaintainTime(shared_ptr<ModifyDBClusterMaintainTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBClusterMaintainTimeWithOptions(request, runtime);
}

ModifyDBResourceGroupResponse Alibabacloud_Adb20211201::Client::modifyDBResourceGroupWithOptions(shared_ptr<ModifyDBResourceGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ModifyDBResourceGroupShrinkRequest> request = make_shared<ModifyDBResourceGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->engineParams)) {
    request->engineParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->engineParams, make_shared<string>("EngineParams"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyDBResourceGroupRequestRules>>(tmpReq->rules)) {
    request->rulesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->rules, make_shared<string>("Rules"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterMode)) {
    query->insert(pair<string, string>("ClusterMode", *request->clusterMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterSizeResource)) {
    query->insert(pair<string, string>("ClusterSizeResource", *request->clusterSizeResource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableSpot)) {
    query->insert(pair<string, bool>("EnableSpot", *request->enableSpot));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engineParamsShrink)) {
    query->insert(pair<string, string>("EngineParams", *request->engineParamsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupType)) {
    query->insert(pair<string, string>("GroupType", *request->groupType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxClusterCount)) {
    query->insert(pair<string, long>("MaxClusterCount", *request->maxClusterCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maxComputeResource)) {
    query->insert(pair<string, string>("MaxComputeResource", *request->maxComputeResource));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minClusterCount)) {
    query->insert(pair<string, long>("MinClusterCount", *request->minClusterCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->minComputeResource)) {
    query->insert(pair<string, string>("MinComputeResource", *request->minComputeResource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rulesShrink)) {
    query->insert(pair<string, string>("Rules", *request->rulesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDBResourceGroup"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDBResourceGroupResponse(callApi(params, req, runtime));
}

ModifyDBResourceGroupResponse Alibabacloud_Adb20211201::Client::modifyDBResourceGroup(shared_ptr<ModifyDBResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBResourceGroupWithOptions(request, runtime);
}

ModifyElasticPlanResponse Alibabacloud_Adb20211201::Client::modifyElasticPlanWithOptions(shared_ptr<ModifyElasticPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cronExpression)) {
    query->insert(pair<string, string>("CronExpression", *request->cronExpression));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->elasticPlanName)) {
    query->insert(pair<string, string>("ElasticPlanName", *request->elasticPlanName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetSize)) {
    query->insert(pair<string, string>("TargetSize", *request->targetSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyElasticPlan"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyElasticPlanResponse(callApi(params, req, runtime));
}

ModifyElasticPlanResponse Alibabacloud_Adb20211201::Client::modifyElasticPlan(shared_ptr<ModifyElasticPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyElasticPlanWithOptions(request, runtime);
}

ModifyPerformanceViewResponse Alibabacloud_Adb20211201::Client::modifyPerformanceViewWithOptions(shared_ptr<ModifyPerformanceViewRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ModifyPerformanceViewShrinkRequest> request = make_shared<ModifyPerformanceViewShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ModifyPerformanceViewRequestViewDetail>(tmpReq->viewDetail)) {
    request->viewDetailShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->viewDetail, make_shared<string>("ViewDetail"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->viewDetailShrink)) {
    query->insert(pair<string, string>("ViewDetail", *request->viewDetailShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->viewName)) {
    query->insert(pair<string, string>("ViewName", *request->viewName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyPerformanceView"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyPerformanceViewResponse(callApi(params, req, runtime));
}

ModifyPerformanceViewResponse Alibabacloud_Adb20211201::Client::modifyPerformanceView(shared_ptr<ModifyPerformanceViewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyPerformanceViewWithOptions(request, runtime);
}

PreloadSparkAppMetricsResponse Alibabacloud_Adb20211201::Client::preloadSparkAppMetricsWithOptions(shared_ptr<PreloadSparkAppMetricsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PreloadSparkAppMetrics"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PreloadSparkAppMetricsResponse(callApi(params, req, runtime));
}

PreloadSparkAppMetricsResponse Alibabacloud_Adb20211201::Client::preloadSparkAppMetrics(shared_ptr<PreloadSparkAppMetricsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return preloadSparkAppMetricsWithOptions(request, runtime);
}

ReleaseClusterPublicConnectionResponse Alibabacloud_Adb20211201::Client::releaseClusterPublicConnectionWithOptions(shared_ptr<ReleaseClusterPublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engine)) {
    query->insert(pair<string, string>("Engine", *request->engine));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseClusterPublicConnection"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReleaseClusterPublicConnectionResponse(callApi(params, req, runtime));
}

ReleaseClusterPublicConnectionResponse Alibabacloud_Adb20211201::Client::releaseClusterPublicConnection(shared_ptr<ReleaseClusterPublicConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseClusterPublicConnectionWithOptions(request, runtime);
}

RenameSparkTemplateFileResponse Alibabacloud_Adb20211201::Client::renameSparkTemplateFileWithOptions(shared_ptr<RenameSparkTemplateFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenameSparkTemplateFile"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RenameSparkTemplateFileResponse(callApi(params, req, runtime));
}

RenameSparkTemplateFileResponse Alibabacloud_Adb20211201::Client::renameSparkTemplateFile(shared_ptr<RenameSparkTemplateFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renameSparkTemplateFileWithOptions(request, runtime);
}

ResetAccountPasswordResponse Alibabacloud_Adb20211201::Client::resetAccountPasswordWithOptions(shared_ptr<ResetAccountPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountDescription)) {
    query->insert(pair<string, string>("AccountDescription", *request->accountDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    query->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountPassword)) {
    query->insert(pair<string, string>("AccountPassword", *request->accountPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engine)) {
    query->insert(pair<string, string>("Engine", *request->engine));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetAccountPassword"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetAccountPasswordResponse(callApi(params, req, runtime));
}

ResetAccountPasswordResponse Alibabacloud_Adb20211201::Client::resetAccountPassword(shared_ptr<ResetAccountPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetAccountPasswordWithOptions(request, runtime);
}

SetSparkAppLogRootPathResponse Alibabacloud_Adb20211201::Client::setSparkAppLogRootPathWithOptions(shared_ptr<SetSparkAppLogRootPathRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    body->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossLogPath)) {
    body->insert(pair<string, string>("OssLogPath", *request->ossLogPath));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useDefaultOss)) {
    body->insert(pair<string, bool>("UseDefaultOss", *request->useDefaultOss));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetSparkAppLogRootPath"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetSparkAppLogRootPathResponse(callApi(params, req, runtime));
}

SetSparkAppLogRootPathResponse Alibabacloud_Adb20211201::Client::setSparkAppLogRootPath(shared_ptr<SetSparkAppLogRootPathRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setSparkAppLogRootPathWithOptions(request, runtime);
}

StartSparkSQLEngineResponse Alibabacloud_Adb20211201::Client::startSparkSQLEngineWithOptions(shared_ptr<StartSparkSQLEngineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->config)) {
    body->insert(pair<string, string>("Config", *request->config));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    body->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jars)) {
    body->insert(pair<string, string>("Jars", *request->jars));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxExecutor)) {
    body->insert(pair<string, long>("MaxExecutor", *request->maxExecutor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minExecutor)) {
    body->insert(pair<string, long>("MinExecutor", *request->minExecutor));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupName)) {
    body->insert(pair<string, string>("ResourceGroupName", *request->resourceGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->slotNum)) {
    body->insert(pair<string, long>("SlotNum", *request->slotNum));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartSparkSQLEngine"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartSparkSQLEngineResponse(callApi(params, req, runtime));
}

StartSparkSQLEngineResponse Alibabacloud_Adb20211201::Client::startSparkSQLEngine(shared_ptr<StartSparkSQLEngineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startSparkSQLEngineWithOptions(request, runtime);
}

SubmitSparkAppResponse Alibabacloud_Adb20211201::Client::submitSparkAppWithOptions(shared_ptr<SubmitSparkAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentSource)) {
    body->insert(pair<string, string>("AgentSource", *request->agentSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->agentVersion)) {
    body->insert(pair<string, string>("AgentVersion", *request->agentVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    body->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->data)) {
    body->insert(pair<string, string>("Data", *request->data));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupName)) {
    body->insert(pair<string, string>("ResourceGroupName", *request->resourceGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateFileId)) {
    body->insert(pair<string, long>("TemplateFileId", *request->templateFileId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitSparkApp"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitSparkAppResponse(callApi(params, req, runtime));
}

SubmitSparkAppResponse Alibabacloud_Adb20211201::Client::submitSparkApp(shared_ptr<SubmitSparkAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSparkAppWithOptions(request, runtime);
}

SubmitSparkLogAnalyzeTaskResponse Alibabacloud_Adb20211201::Client::submitSparkLogAnalyzeTaskWithOptions(shared_ptr<SubmitSparkLogAnalyzeTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitSparkLogAnalyzeTask"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitSparkLogAnalyzeTaskResponse(callApi(params, req, runtime));
}

SubmitSparkLogAnalyzeTaskResponse Alibabacloud_Adb20211201::Client::submitSparkLogAnalyzeTask(shared_ptr<SubmitSparkLogAnalyzeTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSparkLogAnalyzeTaskWithOptions(request, runtime);
}

UnbindAccountResponse Alibabacloud_Adb20211201::Client::unbindAccountWithOptions(shared_ptr<UnbindAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    query->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnbindAccount"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnbindAccountResponse(callApi(params, req, runtime));
}

UnbindAccountResponse Alibabacloud_Adb20211201::Client::unbindAccount(shared_ptr<UnbindAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindAccountWithOptions(request, runtime);
}

UnbindDBResourceGroupWithUserResponse Alibabacloud_Adb20211201::Client::unbindDBResourceGroupWithUserWithOptions(shared_ptr<UnbindDBResourceGroupWithUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    query->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupUser)) {
    query->insert(pair<string, string>("GroupUser", *request->groupUser));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnbindDBResourceGroupWithUser"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnbindDBResourceGroupWithUserResponse(callApi(params, req, runtime));
}

UnbindDBResourceGroupWithUserResponse Alibabacloud_Adb20211201::Client::unbindDBResourceGroupWithUser(shared_ptr<UnbindDBResourceGroupWithUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindDBResourceGroupWithUserWithOptions(request, runtime);
}

UpdateSparkTemplateFileResponse Alibabacloud_Adb20211201::Client::updateSparkTemplateFileWithOptions(shared_ptr<UpdateSparkTemplateFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBClusterId)) {
    body->insert(pair<string, string>("DBClusterId", *request->DBClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupName)) {
    body->insert(pair<string, string>("ResourceGroupName", *request->resourceGroupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSparkTemplateFile"))},
    {"version", boost::any(string("2021-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSparkTemplateFileResponse(callApi(params, req, runtime));
}

UpdateSparkTemplateFileResponse Alibabacloud_Adb20211201::Client::updateSparkTemplateFile(shared_ptr<UpdateSparkTemplateFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSparkTemplateFileWithOptions(request, runtime);
}

