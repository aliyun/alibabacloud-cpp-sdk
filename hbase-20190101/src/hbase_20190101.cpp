// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/hbase_20190101.hpp>
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

using namespace Alibabacloud_HBase20190101;

Alibabacloud_HBase20190101::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-2-pop", "hbase.aliyuncs.com"},
    {"ap-south-1", "hbase.aliyuncs.com"},
    {"ap-southeast-2", "hbase.aliyuncs.com"},
    {"cn-beijing-finance-1", "hbase.aliyuncs.com"},
    {"cn-beijing-finance-pop", "hbase.aliyuncs.com"},
    {"cn-beijing-gov-1", "hbase.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "hbase.aliyuncs.com"},
    {"cn-edge-1", "hbase.aliyuncs.com"},
    {"cn-fujian", "hbase.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "hbase.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "hbase.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "hbase.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "hbase.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "hbase.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "hbase.aliyuncs.com"},
    {"cn-hangzhou-test-306", "hbase.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "hbase.aliyuncs.com"},
    {"cn-qingdao-nebula", "hbase.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "hbase.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "hbase.aliyuncs.com"},
    {"cn-shanghai-inner", "hbase.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "hbase.aliyuncs.com"},
    {"cn-shenzhen-inner", "hbase.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "hbase.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "hbase.aliyuncs.com"},
    {"cn-wuhan", "hbase.aliyuncs.com"},
    {"cn-wulanchabu", "hbase.aliyuncs.com"},
    {"cn-yushanfang", "hbase.aliyuncs.com"},
    {"cn-zhangbei", "hbase.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "hbase.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "hbase.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "hbase.aliyuncs.com"},
    {"eu-west-1-oxs", "hbase.aliyuncs.com"},
    {"rus-west-1-pop", "hbase.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("hbase"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_HBase20190101::Client::getEndpoint(shared_ptr<string> productId,
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

AddUserHdfsInfoResponse Alibabacloud_HBase20190101::Client::addUserHdfsInfoWithOptions(shared_ptr<AddUserHdfsInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfo)) {
    query->insert(pair<string, string>("ExtInfo", *request->extInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddUserHdfsInfo"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddUserHdfsInfoResponse(callApi(params, req, runtime));
}

AddUserHdfsInfoResponse Alibabacloud_HBase20190101::Client::addUserHdfsInfo(shared_ptr<AddUserHdfsInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addUserHdfsInfoWithOptions(request, runtime);
}

AllocatePublicNetworkAddressResponse Alibabacloud_HBase20190101::Client::allocatePublicNetworkAddressWithOptions(shared_ptr<AllocatePublicNetworkAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AllocatePublicNetworkAddress"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AllocatePublicNetworkAddressResponse(callApi(params, req, runtime));
}

AllocatePublicNetworkAddressResponse Alibabacloud_HBase20190101::Client::allocatePublicNetworkAddress(shared_ptr<AllocatePublicNetworkAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return allocatePublicNetworkAddressWithOptions(request, runtime);
}

CancelActiveOperationTasksResponse Alibabacloud_HBase20190101::Client::cancelActiveOperationTasksWithOptions(shared_ptr<CancelActiveOperationTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ids)) {
    query->insert(pair<string, string>("Ids", *request->ids));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelActiveOperationTasks"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelActiveOperationTasksResponse(callApi(params, req, runtime));
}

CancelActiveOperationTasksResponse Alibabacloud_HBase20190101::Client::cancelActiveOperationTasks(shared_ptr<CancelActiveOperationTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelActiveOperationTasksWithOptions(request, runtime);
}

CheckComponentsVersionResponse Alibabacloud_HBase20190101::Client::checkComponentsVersionWithOptions(shared_ptr<CheckComponentsVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->components)) {
    query->insert(pair<string, string>("Components", *request->components));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckComponentsVersion"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckComponentsVersionResponse(callApi(params, req, runtime));
}

CheckComponentsVersionResponse Alibabacloud_HBase20190101::Client::checkComponentsVersion(shared_ptr<CheckComponentsVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkComponentsVersionWithOptions(request, runtime);
}

CloseBackupResponse Alibabacloud_HBase20190101::Client::closeBackupWithOptions(shared_ptr<CloseBackupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloseBackup"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloseBackupResponse(callApi(params, req, runtime));
}

CloseBackupResponse Alibabacloud_HBase20190101::Client::closeBackup(shared_ptr<CloseBackupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return closeBackupWithOptions(request, runtime);
}

ConvertInstanceResponse Alibabacloud_HBase20190101::Client::convertInstanceWithOptions(shared_ptr<ConvertInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->duration)) {
    query->insert(pair<string, long>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payType)) {
    query->insert(pair<string, string>("PayType", *request->payType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pricingCycle)) {
    query->insert(pair<string, string>("PricingCycle", *request->pricingCycle));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConvertInstance"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConvertInstanceResponse(callApi(params, req, runtime));
}

ConvertInstanceResponse Alibabacloud_HBase20190101::Client::convertInstance(shared_ptr<ConvertInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return convertInstanceWithOptions(request, runtime);
}

CreateAccountResponse Alibabacloud_HBase20190101::Client::createAccountWithOptions(shared_ptr<CreateAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    query->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountPassword)) {
    query->insert(pair<string, string>("AccountPassword", *request->accountPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAccount"))},
    {"version", boost::any(string("2019-01-01"))},
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

CreateAccountResponse Alibabacloud_HBase20190101::Client::createAccount(shared_ptr<CreateAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAccountWithOptions(request, runtime);
}

CreateBackupPlanResponse Alibabacloud_HBase20190101::Client::createBackupPlanWithOptions(shared_ptr<CreateBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBackupPlan"))},
    {"version", boost::any(string("2019-01-01"))},
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

CreateBackupPlanResponse Alibabacloud_HBase20190101::Client::createBackupPlan(shared_ptr<CreateBackupPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBackupPlanWithOptions(request, runtime);
}

CreateClusterResponse Alibabacloud_HBase20190101::Client::createClusterWithOptions(shared_ptr<CreateClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->autoRenewPeriod)) {
    query->insert(pair<string, long>("AutoRenewPeriod", *request->autoRenewPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterName)) {
    query->insert(pair<string, string>("ClusterName", *request->clusterName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->coldStorageSize)) {
    query->insert(pair<string, long>("ColdStorageSize", *request->coldStorageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coreInstanceType)) {
    query->insert(pair<string, string>("CoreInstanceType", *request->coreInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->diskSize)) {
    query->insert(pair<string, long>("DiskSize", *request->diskSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->diskType)) {
    query->insert(pair<string, string>("DiskType", *request->diskType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptionKey)) {
    query->insert(pair<string, string>("EncryptionKey", *request->encryptionKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engine)) {
    query->insert(pair<string, string>("Engine", *request->engine));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engineVersion)) {
    query->insert(pair<string, string>("EngineVersion", *request->engineVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterInstanceType)) {
    query->insert(pair<string, string>("MasterInstanceType", *request->masterInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeCount)) {
    query->insert(pair<string, long>("NodeCount", *request->nodeCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payType)) {
    query->insert(pair<string, string>("PayType", *request->payType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityIPList)) {
    query->insert(pair<string, string>("SecurityIPList", *request->securityIPList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    query->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCluster"))},
    {"version", boost::any(string("2019-01-01"))},
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

CreateClusterResponse Alibabacloud_HBase20190101::Client::createCluster(shared_ptr<CreateClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createClusterWithOptions(request, runtime);
}

CreateGlobalResourceResponse Alibabacloud_HBase20190101::Client::createGlobalResourceWithOptions(shared_ptr<CreateGlobalResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceName)) {
    query->insert(pair<string, string>("ResourceName", *request->resourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGlobalResource"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGlobalResourceResponse(callApi(params, req, runtime));
}

CreateGlobalResourceResponse Alibabacloud_HBase20190101::Client::createGlobalResource(shared_ptr<CreateGlobalResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGlobalResourceWithOptions(request, runtime);
}

CreateHBaseSlbServerResponse Alibabacloud_HBase20190101::Client::createHBaseSlbServerWithOptions(shared_ptr<CreateHBaseSlbServerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slbServer)) {
    query->insert(pair<string, string>("SlbServer", *request->slbServer));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateHBaseSlbServer"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateHBaseSlbServerResponse(callApi(params, req, runtime));
}

CreateHBaseSlbServerResponse Alibabacloud_HBase20190101::Client::createHBaseSlbServer(shared_ptr<CreateHBaseSlbServerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createHBaseSlbServerWithOptions(request, runtime);
}

CreateHbaseHaSlbResponse Alibabacloud_HBase20190101::Client::createHbaseHaSlbWithOptions(shared_ptr<CreateHbaseHaSlbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bdsId)) {
    query->insert(pair<string, string>("BdsId", *request->bdsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->haId)) {
    query->insert(pair<string, string>("HaId", *request->haId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->haTypes)) {
    query->insert(pair<string, string>("HaTypes", *request->haTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hbaseType)) {
    query->insert(pair<string, string>("HbaseType", *request->hbaseType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateHbaseHaSlb"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateHbaseHaSlbResponse(callApi(params, req, runtime));
}

CreateHbaseHaSlbResponse Alibabacloud_HBase20190101::Client::createHbaseHaSlb(shared_ptr<CreateHbaseHaSlbRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createHbaseHaSlbWithOptions(request, runtime);
}

CreateMultiZoneClusterResponse Alibabacloud_HBase20190101::Client::createMultiZoneClusterWithOptions(shared_ptr<CreateMultiZoneClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->arbiterVSwitchId)) {
    query->insert(pair<string, string>("ArbiterVSwitchId", *request->arbiterVSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->arbiterZoneId)) {
    query->insert(pair<string, string>("ArbiterZoneId", *request->arbiterZoneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->archVersion)) {
    query->insert(pair<string, string>("ArchVersion", *request->archVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->autoRenewPeriod)) {
    query->insert(pair<string, long>("AutoRenewPeriod", *request->autoRenewPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterName)) {
    query->insert(pair<string, string>("ClusterName", *request->clusterName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->coreDiskSize)) {
    query->insert(pair<string, long>("CoreDiskSize", *request->coreDiskSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coreDiskType)) {
    query->insert(pair<string, string>("CoreDiskType", *request->coreDiskType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coreInstanceType)) {
    query->insert(pair<string, string>("CoreInstanceType", *request->coreInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->coreNodeCount)) {
    query->insert(pair<string, long>("CoreNodeCount", *request->coreNodeCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engine)) {
    query->insert(pair<string, string>("Engine", *request->engine));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engineVersion)) {
    query->insert(pair<string, string>("EngineVersion", *request->engineVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->logDiskSize)) {
    query->insert(pair<string, long>("LogDiskSize", *request->logDiskSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logDiskType)) {
    query->insert(pair<string, string>("LogDiskType", *request->logDiskType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logInstanceType)) {
    query->insert(pair<string, string>("LogInstanceType", *request->logInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->logNodeCount)) {
    query->insert(pair<string, long>("LogNodeCount", *request->logNodeCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterInstanceType)) {
    query->insert(pair<string, string>("MasterInstanceType", *request->masterInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->multiZoneCombination)) {
    query->insert(pair<string, string>("MultiZoneCombination", *request->multiZoneCombination));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payType)) {
    query->insert(pair<string, string>("PayType", *request->payType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->primaryVSwitchId)) {
    query->insert(pair<string, string>("PrimaryVSwitchId", *request->primaryVSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->primaryZoneId)) {
    query->insert(pair<string, string>("PrimaryZoneId", *request->primaryZoneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityIPList)) {
    query->insert(pair<string, string>("SecurityIPList", *request->securityIPList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->standbyVSwitchId)) {
    query->insert(pair<string, string>("StandbyVSwitchId", *request->standbyVSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->standbyZoneId)) {
    query->insert(pair<string, string>("StandbyZoneId", *request->standbyZoneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMultiZoneCluster"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMultiZoneClusterResponse(callApi(params, req, runtime));
}

CreateMultiZoneClusterResponse Alibabacloud_HBase20190101::Client::createMultiZoneCluster(shared_ptr<CreateMultiZoneClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMultiZoneClusterWithOptions(request, runtime);
}

CreateRestorePlanResponse Alibabacloud_HBase20190101::Client::createRestorePlanWithOptions(shared_ptr<CreateRestorePlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->restoreAllTable)) {
    query->insert(pair<string, bool>("RestoreAllTable", *request->restoreAllTable));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->restoreByCopy)) {
    query->insert(pair<string, bool>("RestoreByCopy", *request->restoreByCopy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->restoreToDate)) {
    query->insert(pair<string, string>("RestoreToDate", *request->restoreToDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tables)) {
    query->insert(pair<string, string>("Tables", *request->tables));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetClusterId)) {
    query->insert(pair<string, string>("TargetClusterId", *request->targetClusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRestorePlan"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRestorePlanResponse(callApi(params, req, runtime));
}

CreateRestorePlanResponse Alibabacloud_HBase20190101::Client::createRestorePlan(shared_ptr<CreateRestorePlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRestorePlanWithOptions(request, runtime);
}

CreateServerlessClusterResponse Alibabacloud_HBase20190101::Client::createServerlessClusterWithOptions(shared_ptr<CreateServerlessClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->autoRenewPeriod)) {
    query->insert(pair<string, long>("AutoRenewPeriod", *request->autoRenewPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientType)) {
    query->insert(pair<string, string>("ClientType", *request->clientType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterName)) {
    query->insert(pair<string, string>("ClusterName", *request->clusterName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->diskType)) {
    query->insert(pair<string, string>("DiskType", *request->diskType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engine)) {
    query->insert(pair<string, string>("Engine", *request->engine));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engineVersion)) {
    query->insert(pair<string, string>("EngineVersion", *request->engineVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payType)) {
    query->insert(pair<string, string>("PayType", *request->payType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serverlessCapability)) {
    query->insert(pair<string, long>("ServerlessCapability", *request->serverlessCapability));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverlessSpec)) {
    query->insert(pair<string, string>("ServerlessSpec", *request->serverlessSpec));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serverlessStorage)) {
    query->insert(pair<string, long>("ServerlessStorage", *request->serverlessStorage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    query->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateServerlessCluster"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateServerlessClusterResponse(callApi(params, req, runtime));
}

CreateServerlessClusterResponse Alibabacloud_HBase20190101::Client::createServerlessCluster(shared_ptr<CreateServerlessClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createServerlessClusterWithOptions(request, runtime);
}

DeleteAccountResponse Alibabacloud_HBase20190101::Client::deleteAccountWithOptions(shared_ptr<DeleteAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    query->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAccount"))},
    {"version", boost::any(string("2019-01-01"))},
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

DeleteAccountResponse Alibabacloud_HBase20190101::Client::deleteAccount(shared_ptr<DeleteAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAccountWithOptions(request, runtime);
}

DeleteGlobalResourceResponse Alibabacloud_HBase20190101::Client::deleteGlobalResourceWithOptions(shared_ptr<DeleteGlobalResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceName)) {
    query->insert(pair<string, string>("ResourceName", *request->resourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGlobalResource"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGlobalResourceResponse(callApi(params, req, runtime));
}

DeleteGlobalResourceResponse Alibabacloud_HBase20190101::Client::deleteGlobalResource(shared_ptr<DeleteGlobalResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGlobalResourceWithOptions(request, runtime);
}

DeleteHBaseHaDBResponse Alibabacloud_HBase20190101::Client::deleteHBaseHaDBWithOptions(shared_ptr<DeleteHBaseHaDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bdsId)) {
    query->insert(pair<string, string>("BdsId", *request->bdsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->haId)) {
    query->insert(pair<string, string>("HaId", *request->haId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteHBaseHaDB"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteHBaseHaDBResponse(callApi(params, req, runtime));
}

DeleteHBaseHaDBResponse Alibabacloud_HBase20190101::Client::deleteHBaseHaDB(shared_ptr<DeleteHBaseHaDBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteHBaseHaDBWithOptions(request, runtime);
}

DeleteHBaseSlbServerResponse Alibabacloud_HBase20190101::Client::deleteHBaseSlbServerWithOptions(shared_ptr<DeleteHBaseSlbServerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slbServer)) {
    query->insert(pair<string, string>("SlbServer", *request->slbServer));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteHBaseSlbServer"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteHBaseSlbServerResponse(callApi(params, req, runtime));
}

DeleteHBaseSlbServerResponse Alibabacloud_HBase20190101::Client::deleteHBaseSlbServer(shared_ptr<DeleteHBaseSlbServerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteHBaseSlbServerWithOptions(request, runtime);
}

DeleteHbaseHaSlbResponse Alibabacloud_HBase20190101::Client::deleteHbaseHaSlbWithOptions(shared_ptr<DeleteHbaseHaSlbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bdsId)) {
    query->insert(pair<string, string>("BdsId", *request->bdsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->haId)) {
    query->insert(pair<string, string>("HaId", *request->haId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->haTypes)) {
    query->insert(pair<string, string>("HaTypes", *request->haTypes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteHbaseHaSlb"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteHbaseHaSlbResponse(callApi(params, req, runtime));
}

DeleteHbaseHaSlbResponse Alibabacloud_HBase20190101::Client::deleteHbaseHaSlb(shared_ptr<DeleteHbaseHaSlbRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteHbaseHaSlbWithOptions(request, runtime);
}

DeleteInstanceResponse Alibabacloud_HBase20190101::Client::deleteInstanceWithOptions(shared_ptr<DeleteInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->immediateDeleteFlag)) {
    query->insert(pair<string, bool>("ImmediateDeleteFlag", *request->immediateDeleteFlag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteInstance"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteInstanceResponse(callApi(params, req, runtime));
}

DeleteInstanceResponse Alibabacloud_HBase20190101::Client::deleteInstance(shared_ptr<DeleteInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteInstanceWithOptions(request, runtime);
}

DeleteMultiZoneClusterResponse Alibabacloud_HBase20190101::Client::deleteMultiZoneClusterWithOptions(shared_ptr<DeleteMultiZoneClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->immediateDeleteFlag)) {
    query->insert(pair<string, bool>("ImmediateDeleteFlag", *request->immediateDeleteFlag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMultiZoneCluster"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMultiZoneClusterResponse(callApi(params, req, runtime));
}

DeleteMultiZoneClusterResponse Alibabacloud_HBase20190101::Client::deleteMultiZoneCluster(shared_ptr<DeleteMultiZoneClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMultiZoneClusterWithOptions(request, runtime);
}

DeleteServerlessClusterResponse Alibabacloud_HBase20190101::Client::deleteServerlessClusterWithOptions(shared_ptr<DeleteServerlessClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
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
    {"action", boost::any(string("DeleteServerlessCluster"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteServerlessClusterResponse(callApi(params, req, runtime));
}

DeleteServerlessClusterResponse Alibabacloud_HBase20190101::Client::deleteServerlessCluster(shared_ptr<DeleteServerlessClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteServerlessClusterWithOptions(request, runtime);
}

DeleteUserHdfsInfoResponse Alibabacloud_HBase20190101::Client::deleteUserHdfsInfoWithOptions(shared_ptr<DeleteUserHdfsInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nameService)) {
    query->insert(pair<string, string>("NameService", *request->nameService));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUserHdfsInfo"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteUserHdfsInfoResponse(callApi(params, req, runtime));
}

DeleteUserHdfsInfoResponse Alibabacloud_HBase20190101::Client::deleteUserHdfsInfo(shared_ptr<DeleteUserHdfsInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUserHdfsInfoWithOptions(request, runtime);
}

DescribeAccountsResponse Alibabacloud_HBase20190101::Client::describeAccountsWithOptions(shared_ptr<DescribeAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAccounts"))},
    {"version", boost::any(string("2019-01-01"))},
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

DescribeAccountsResponse Alibabacloud_HBase20190101::Client::describeAccounts(shared_ptr<DescribeAccountsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAccountsWithOptions(request, runtime);
}

DescribeActiveOperationTaskTypeResponse Alibabacloud_HBase20190101::Client::describeActiveOperationTaskTypeWithOptions(shared_ptr<DescribeActiveOperationTaskTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->isHistory)) {
    query->insert(pair<string, long>("IsHistory", *request->isHistory));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeActiveOperationTaskType"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeActiveOperationTaskTypeResponse(callApi(params, req, runtime));
}

DescribeActiveOperationTaskTypeResponse Alibabacloud_HBase20190101::Client::describeActiveOperationTaskType(shared_ptr<DescribeActiveOperationTaskTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeActiveOperationTaskTypeWithOptions(request, runtime);
}

DescribeActiveOperationTasksResponse Alibabacloud_HBase20190101::Client::describeActiveOperationTasksWithOptions(shared_ptr<DescribeActiveOperationTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->allowCancel)) {
    query->insert(pair<string, long>("AllowCancel", *request->allowCancel));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->allowChange)) {
    query->insert(pair<string, long>("AllowChange", *request->allowChange));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeLevel)) {
    query->insert(pair<string, string>("ChangeLevel", *request->changeLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbType)) {
    query->insert(pair<string, string>("DbType", *request->dbType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->insName)) {
    query->insert(pair<string, string>("InsName", *request->insName));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->productId)) {
    query->insert(pair<string, string>("ProductId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("TaskType", *request->taskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeActiveOperationTasks"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeActiveOperationTasksResponse(callApi(params, req, runtime));
}

DescribeActiveOperationTasksResponse Alibabacloud_HBase20190101::Client::describeActiveOperationTasks(shared_ptr<DescribeActiveOperationTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeActiveOperationTasksWithOptions(request, runtime);
}

DescribeAvailableResourceResponse Alibabacloud_HBase20190101::Client::describeAvailableResourceWithOptions(shared_ptr<DescribeAvailableResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    query->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coreInstanceType)) {
    query->insert(pair<string, string>("CoreInstanceType", *request->coreInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->diskType)) {
    query->insert(pair<string, string>("DiskType", *request->diskType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engine)) {
    query->insert(pair<string, string>("Engine", *request->engine));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engineVersion)) {
    query->insert(pair<string, string>("EngineVersion", *request->engineVersion));
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
    {"action", boost::any(string("DescribeAvailableResource"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAvailableResourceResponse(callApi(params, req, runtime));
}

DescribeAvailableResourceResponse Alibabacloud_HBase20190101::Client::describeAvailableResource(shared_ptr<DescribeAvailableResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvailableResourceWithOptions(request, runtime);
}

DescribeBackupPlanConfigResponse Alibabacloud_HBase20190101::Client::describeBackupPlanConfigWithOptions(shared_ptr<DescribeBackupPlanConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackupPlanConfig"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBackupPlanConfigResponse(callApi(params, req, runtime));
}

DescribeBackupPlanConfigResponse Alibabacloud_HBase20190101::Client::describeBackupPlanConfig(shared_ptr<DescribeBackupPlanConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupPlanConfigWithOptions(request, runtime);
}

DescribeBackupPolicyResponse Alibabacloud_HBase20190101::Client::describeBackupPolicyWithOptions(shared_ptr<DescribeBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackupPolicy"))},
    {"version", boost::any(string("2019-01-01"))},
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

DescribeBackupPolicyResponse Alibabacloud_HBase20190101::Client::describeBackupPolicy(shared_ptr<DescribeBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupPolicyWithOptions(request, runtime);
}

DescribeBackupStatusResponse Alibabacloud_HBase20190101::Client::describeBackupStatusWithOptions(shared_ptr<DescribeBackupStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackupStatus"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBackupStatusResponse(callApi(params, req, runtime));
}

DescribeBackupStatusResponse Alibabacloud_HBase20190101::Client::describeBackupStatus(shared_ptr<DescribeBackupStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupStatusWithOptions(request, runtime);
}

DescribeBackupSummaryResponse Alibabacloud_HBase20190101::Client::describeBackupSummaryWithOptions(shared_ptr<DescribeBackupSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackupSummary"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBackupSummaryResponse(callApi(params, req, runtime));
}

DescribeBackupSummaryResponse Alibabacloud_HBase20190101::Client::describeBackupSummary(shared_ptr<DescribeBackupSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupSummaryWithOptions(request, runtime);
}

DescribeBackupTablesResponse Alibabacloud_HBase20190101::Client::describeBackupTablesWithOptions(shared_ptr<DescribeBackupTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupRecordId)) {
    query->insert(pair<string, string>("BackupRecordId", *request->backupRecordId));
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
    {"action", boost::any(string("DescribeBackupTables"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBackupTablesResponse(callApi(params, req, runtime));
}

DescribeBackupTablesResponse Alibabacloud_HBase20190101::Client::describeBackupTables(shared_ptr<DescribeBackupTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupTablesWithOptions(request, runtime);
}

DescribeBackupsResponse Alibabacloud_HBase20190101::Client::describeBackupsWithOptions(shared_ptr<DescribeBackupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupId)) {
    query->insert(pair<string, string>("BackupId", *request->backupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTimeUTC)) {
    query->insert(pair<string, string>("EndTimeUTC", *request->endTimeUTC));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    query->insert(pair<string, string>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTimeUTC)) {
    query->insert(pair<string, string>("StartTimeUTC", *request->startTimeUTC));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackups"))},
    {"version", boost::any(string("2019-01-01"))},
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

DescribeBackupsResponse Alibabacloud_HBase20190101::Client::describeBackups(shared_ptr<DescribeBackupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupsWithOptions(request, runtime);
}

DescribeClusterConnectionResponse Alibabacloud_HBase20190101::Client::describeClusterConnectionWithOptions(shared_ptr<DescribeClusterConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterConnection"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterConnectionResponse(callApi(params, req, runtime));
}

DescribeClusterConnectionResponse Alibabacloud_HBase20190101::Client::describeClusterConnection(shared_ptr<DescribeClusterConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClusterConnectionWithOptions(request, runtime);
}

DescribeColdStorageResponse Alibabacloud_HBase20190101::Client::describeColdStorageWithOptions(shared_ptr<DescribeColdStorageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeColdStorage"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeColdStorageResponse(callApi(params, req, runtime));
}

DescribeColdStorageResponse Alibabacloud_HBase20190101::Client::describeColdStorage(shared_ptr<DescribeColdStorageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeColdStorageWithOptions(request, runtime);
}

DescribeDBInstanceUsageResponse Alibabacloud_HBase20190101::Client::describeDBInstanceUsageWithOptions(shared_ptr<DescribeDBInstanceUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBInstanceUsage"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBInstanceUsageResponse(callApi(params, req, runtime));
}

DescribeDBInstanceUsageResponse Alibabacloud_HBase20190101::Client::describeDBInstanceUsage(shared_ptr<DescribeDBInstanceUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceUsageWithOptions(request, runtime);
}

DescribeDeletedInstancesResponse Alibabacloud_HBase20190101::Client::describeDeletedInstancesWithOptions(shared_ptr<DescribeDeletedInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("DescribeDeletedInstances"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDeletedInstancesResponse(callApi(params, req, runtime));
}

DescribeDeletedInstancesResponse Alibabacloud_HBase20190101::Client::describeDeletedInstances(shared_ptr<DescribeDeletedInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDeletedInstancesWithOptions(request, runtime);
}

DescribeDiskWarningLineResponse Alibabacloud_HBase20190101::Client::describeDiskWarningLineWithOptions(shared_ptr<DescribeDiskWarningLineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDiskWarningLine"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDiskWarningLineResponse(callApi(params, req, runtime));
}

DescribeDiskWarningLineResponse Alibabacloud_HBase20190101::Client::describeDiskWarningLine(shared_ptr<DescribeDiskWarningLineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDiskWarningLineWithOptions(request, runtime);
}

DescribeEndpointsResponse Alibabacloud_HBase20190101::Client::describeEndpointsWithOptions(shared_ptr<DescribeEndpointsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEndpoints"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEndpointsResponse(callApi(params, req, runtime));
}

DescribeEndpointsResponse Alibabacloud_HBase20190101::Client::describeEndpoints(shared_ptr<DescribeEndpointsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEndpointsWithOptions(request, runtime);
}

DescribeInstanceResponse Alibabacloud_HBase20190101::Client::describeInstanceWithOptions(shared_ptr<DescribeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstance"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceResponse(callApi(params, req, runtime));
}

DescribeInstanceResponse Alibabacloud_HBase20190101::Client::describeInstance(shared_ptr<DescribeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceWithOptions(request, runtime);
}

DescribeInstanceTypeResponse Alibabacloud_HBase20190101::Client::describeInstanceTypeWithOptions(shared_ptr<DescribeInstanceTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceType"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceTypeResponse(callApi(params, req, runtime));
}

DescribeInstanceTypeResponse Alibabacloud_HBase20190101::Client::describeInstanceType(shared_ptr<DescribeInstanceTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceTypeWithOptions(request, runtime);
}

DescribeInstancesResponse Alibabacloud_HBase20190101::Client::describeInstancesWithOptions(shared_ptr<DescribeInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterName)) {
    query->insert(pair<string, string>("ClusterName", *request->clusterName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbType)) {
    query->insert(pair<string, string>("DbType", *request->dbType));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeInstancesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeInstancesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstances"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstancesResponse(callApi(params, req, runtime));
}

DescribeInstancesResponse Alibabacloud_HBase20190101::Client::describeInstances(shared_ptr<DescribeInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstancesWithOptions(request, runtime);
}

DescribeIpWhitelistResponse Alibabacloud_HBase20190101::Client::describeIpWhitelistWithOptions(shared_ptr<DescribeIpWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeIpWhitelist"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeIpWhitelistResponse(callApi(params, req, runtime));
}

DescribeIpWhitelistResponse Alibabacloud_HBase20190101::Client::describeIpWhitelist(shared_ptr<DescribeIpWhitelistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeIpWhitelistWithOptions(request, runtime);
}

DescribeMultiZoneAvailableRegionsResponse Alibabacloud_HBase20190101::Client::describeMultiZoneAvailableRegionsWithOptions(shared_ptr<DescribeMultiZoneAvailableRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMultiZoneAvailableRegions"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMultiZoneAvailableRegionsResponse(callApi(params, req, runtime));
}

DescribeMultiZoneAvailableRegionsResponse Alibabacloud_HBase20190101::Client::describeMultiZoneAvailableRegions(shared_ptr<DescribeMultiZoneAvailableRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMultiZoneAvailableRegionsWithOptions(request, runtime);
}

DescribeMultiZoneAvailableResourceResponse Alibabacloud_HBase20190101::Client::describeMultiZoneAvailableResourceWithOptions(shared_ptr<DescribeMultiZoneAvailableResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    query->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneCombination)) {
    query->insert(pair<string, string>("ZoneCombination", *request->zoneCombination));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMultiZoneAvailableResource"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMultiZoneAvailableResourceResponse(callApi(params, req, runtime));
}

DescribeMultiZoneAvailableResourceResponse Alibabacloud_HBase20190101::Client::describeMultiZoneAvailableResource(shared_ptr<DescribeMultiZoneAvailableResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMultiZoneAvailableResourceWithOptions(request, runtime);
}

DescribeMultiZoneClusterResponse Alibabacloud_HBase20190101::Client::describeMultiZoneClusterWithOptions(shared_ptr<DescribeMultiZoneClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMultiZoneCluster"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMultiZoneClusterResponse(callApi(params, req, runtime));
}

DescribeMultiZoneClusterResponse Alibabacloud_HBase20190101::Client::describeMultiZoneCluster(shared_ptr<DescribeMultiZoneClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMultiZoneClusterWithOptions(request, runtime);
}

DescribeRecoverableTimeRangeResponse Alibabacloud_HBase20190101::Client::describeRecoverableTimeRangeWithOptions(shared_ptr<DescribeRecoverableTimeRangeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRecoverableTimeRange"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRecoverableTimeRangeResponse(callApi(params, req, runtime));
}

DescribeRecoverableTimeRangeResponse Alibabacloud_HBase20190101::Client::describeRecoverableTimeRange(shared_ptr<DescribeRecoverableTimeRangeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRecoverableTimeRangeWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_HBase20190101::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engine)) {
    query->insert(pair<string, string>("Engine", *request->engine));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2019-01-01"))},
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

DescribeRegionsResponse Alibabacloud_HBase20190101::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeRestoreFullDetailsResponse Alibabacloud_HBase20190101::Client::describeRestoreFullDetailsWithOptions(shared_ptr<DescribeRestoreFullDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->restoreRecordId)) {
    query->insert(pair<string, string>("RestoreRecordId", *request->restoreRecordId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRestoreFullDetails"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRestoreFullDetailsResponse(callApi(params, req, runtime));
}

DescribeRestoreFullDetailsResponse Alibabacloud_HBase20190101::Client::describeRestoreFullDetails(shared_ptr<DescribeRestoreFullDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRestoreFullDetailsWithOptions(request, runtime);
}

DescribeRestoreIncrDetailResponse Alibabacloud_HBase20190101::Client::describeRestoreIncrDetailWithOptions(shared_ptr<DescribeRestoreIncrDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->restoreRecordId)) {
    query->insert(pair<string, string>("RestoreRecordId", *request->restoreRecordId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRestoreIncrDetail"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRestoreIncrDetailResponse(callApi(params, req, runtime));
}

DescribeRestoreIncrDetailResponse Alibabacloud_HBase20190101::Client::describeRestoreIncrDetail(shared_ptr<DescribeRestoreIncrDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRestoreIncrDetailWithOptions(request, runtime);
}

DescribeRestoreSchemaDetailsResponse Alibabacloud_HBase20190101::Client::describeRestoreSchemaDetailsWithOptions(shared_ptr<DescribeRestoreSchemaDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->restoreRecordId)) {
    query->insert(pair<string, string>("RestoreRecordId", *request->restoreRecordId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRestoreSchemaDetails"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRestoreSchemaDetailsResponse(callApi(params, req, runtime));
}

DescribeRestoreSchemaDetailsResponse Alibabacloud_HBase20190101::Client::describeRestoreSchemaDetails(shared_ptr<DescribeRestoreSchemaDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRestoreSchemaDetailsWithOptions(request, runtime);
}

DescribeRestoreSummaryResponse Alibabacloud_HBase20190101::Client::describeRestoreSummaryWithOptions(shared_ptr<DescribeRestoreSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRestoreSummary"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRestoreSummaryResponse(callApi(params, req, runtime));
}

DescribeRestoreSummaryResponse Alibabacloud_HBase20190101::Client::describeRestoreSummary(shared_ptr<DescribeRestoreSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRestoreSummaryWithOptions(request, runtime);
}

DescribeRestoreTablesResponse Alibabacloud_HBase20190101::Client::describeRestoreTablesWithOptions(shared_ptr<DescribeRestoreTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->restoreRecordId)) {
    query->insert(pair<string, string>("RestoreRecordId", *request->restoreRecordId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRestoreTables"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRestoreTablesResponse(callApi(params, req, runtime));
}

DescribeRestoreTablesResponse Alibabacloud_HBase20190101::Client::describeRestoreTables(shared_ptr<DescribeRestoreTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRestoreTablesWithOptions(request, runtime);
}

DescribeSecurityGroupsResponse Alibabacloud_HBase20190101::Client::describeSecurityGroupsWithOptions(shared_ptr<DescribeSecurityGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSecurityGroups"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSecurityGroupsResponse(callApi(params, req, runtime));
}

DescribeSecurityGroupsResponse Alibabacloud_HBase20190101::Client::describeSecurityGroups(shared_ptr<DescribeSecurityGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSecurityGroupsWithOptions(request, runtime);
}

DescribeServerlessClusterResponse Alibabacloud_HBase20190101::Client::describeServerlessClusterWithOptions(shared_ptr<DescribeServerlessClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    query->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServerlessCluster"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeServerlessClusterResponse(callApi(params, req, runtime));
}

DescribeServerlessClusterResponse Alibabacloud_HBase20190101::Client::describeServerlessCluster(shared_ptr<DescribeServerlessClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServerlessClusterWithOptions(request, runtime);
}

DescribeSubDomainResponse Alibabacloud_HBase20190101::Client::describeSubDomainWithOptions(shared_ptr<DescribeSubDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("DescribeSubDomain"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSubDomainResponse(callApi(params, req, runtime));
}

DescribeSubDomainResponse Alibabacloud_HBase20190101::Client::describeSubDomain(shared_ptr<DescribeSubDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSubDomainWithOptions(request, runtime);
}

EnableHBaseueBackupResponse Alibabacloud_HBase20190101::Client::enableHBaseueBackupWithOptions(shared_ptr<EnableHBaseueBackupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->coldStorageSize)) {
    query->insert(pair<string, long>("ColdStorageSize", *request->coldStorageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hbaseueClusterId)) {
    query->insert(pair<string, string>("HbaseueClusterId", *request->hbaseueClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeCount)) {
    query->insert(pair<string, long>("NodeCount", *request->nodeCount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableHBaseueBackup"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableHBaseueBackupResponse(callApi(params, req, runtime));
}

EnableHBaseueBackupResponse Alibabacloud_HBase20190101::Client::enableHBaseueBackup(shared_ptr<EnableHBaseueBackupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableHBaseueBackupWithOptions(request, runtime);
}

EnableHBaseueModuleResponse Alibabacloud_HBase20190101::Client::enableHBaseueModuleWithOptions(shared_ptr<EnableHBaseueModuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->autoRenewPeriod)) {
    query->insert(pair<string, long>("AutoRenewPeriod", *request->autoRenewPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bdsId)) {
    query->insert(pair<string, string>("BdsId", *request->bdsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coreInstanceType)) {
    query->insert(pair<string, string>("CoreInstanceType", *request->coreInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->diskSize)) {
    query->insert(pair<string, long>("DiskSize", *request->diskSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->diskType)) {
    query->insert(pair<string, string>("DiskType", *request->diskType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hbaseueClusterId)) {
    query->insert(pair<string, string>("HbaseueClusterId", *request->hbaseueClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterInstanceType)) {
    query->insert(pair<string, string>("MasterInstanceType", *request->masterInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleClusterName)) {
    query->insert(pair<string, string>("ModuleClusterName", *request->moduleClusterName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleTypeName)) {
    query->insert(pair<string, string>("ModuleTypeName", *request->moduleTypeName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeCount)) {
    query->insert(pair<string, long>("NodeCount", *request->nodeCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payType)) {
    query->insert(pair<string, string>("PayType", *request->payType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vswitchId)) {
    query->insert(pair<string, string>("VswitchId", *request->vswitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    query->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableHBaseueModule"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableHBaseueModuleResponse(callApi(params, req, runtime));
}

EnableHBaseueModuleResponse Alibabacloud_HBase20190101::Client::enableHBaseueModule(shared_ptr<EnableHBaseueModuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableHBaseueModuleWithOptions(request, runtime);
}

EvaluateMultiZoneResourceResponse Alibabacloud_HBase20190101::Client::evaluateMultiZoneResourceWithOptions(shared_ptr<EvaluateMultiZoneResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->arbiterVSwitchId)) {
    query->insert(pair<string, string>("ArbiterVSwitchId", *request->arbiterVSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->arbiterZoneId)) {
    query->insert(pair<string, string>("ArbiterZoneId", *request->arbiterZoneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->archVersion)) {
    query->insert(pair<string, string>("ArchVersion", *request->archVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->autoRenewPeriod)) {
    query->insert(pair<string, long>("AutoRenewPeriod", *request->autoRenewPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterName)) {
    query->insert(pair<string, string>("ClusterName", *request->clusterName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->coreDiskSize)) {
    query->insert(pair<string, long>("CoreDiskSize", *request->coreDiskSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coreDiskType)) {
    query->insert(pair<string, string>("CoreDiskType", *request->coreDiskType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coreInstanceType)) {
    query->insert(pair<string, string>("CoreInstanceType", *request->coreInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->coreNodeCount)) {
    query->insert(pair<string, long>("CoreNodeCount", *request->coreNodeCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engine)) {
    query->insert(pair<string, string>("Engine", *request->engine));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engineVersion)) {
    query->insert(pair<string, string>("EngineVersion", *request->engineVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->logDiskSize)) {
    query->insert(pair<string, long>("LogDiskSize", *request->logDiskSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logDiskType)) {
    query->insert(pair<string, string>("LogDiskType", *request->logDiskType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logInstanceType)) {
    query->insert(pair<string, string>("LogInstanceType", *request->logInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->logNodeCount)) {
    query->insert(pair<string, long>("LogNodeCount", *request->logNodeCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterInstanceType)) {
    query->insert(pair<string, string>("MasterInstanceType", *request->masterInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->multiZoneCombination)) {
    query->insert(pair<string, string>("MultiZoneCombination", *request->multiZoneCombination));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payType)) {
    query->insert(pair<string, string>("PayType", *request->payType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->primaryVSwitchId)) {
    query->insert(pair<string, string>("PrimaryVSwitchId", *request->primaryVSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->primaryZoneId)) {
    query->insert(pair<string, string>("PrimaryZoneId", *request->primaryZoneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityIPList)) {
    query->insert(pair<string, string>("SecurityIPList", *request->securityIPList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->standbyVSwitchId)) {
    query->insert(pair<string, string>("StandbyVSwitchId", *request->standbyVSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->standbyZoneId)) {
    query->insert(pair<string, string>("StandbyZoneId", *request->standbyZoneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EvaluateMultiZoneResource"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EvaluateMultiZoneResourceResponse(callApi(params, req, runtime));
}

EvaluateMultiZoneResourceResponse Alibabacloud_HBase20190101::Client::evaluateMultiZoneResource(shared_ptr<EvaluateMultiZoneResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return evaluateMultiZoneResourceWithOptions(request, runtime);
}

GetMultimodeCmsUrlResponse Alibabacloud_HBase20190101::Client::getMultimodeCmsUrlWithOptions(shared_ptr<GetMultimodeCmsUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMultimodeCmsUrl"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMultimodeCmsUrlResponse(callApi(params, req, runtime));
}

GetMultimodeCmsUrlResponse Alibabacloud_HBase20190101::Client::getMultimodeCmsUrl(shared_ptr<GetMultimodeCmsUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMultimodeCmsUrlWithOptions(request, runtime);
}

GrantResponse Alibabacloud_HBase20190101::Client::grantWithOptions(shared_ptr<GrantRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    query->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclActions)) {
    query->insert(pair<string, string>("AclActions", *request->aclActions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Grant"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GrantResponse(callApi(params, req, runtime));
}

GrantResponse Alibabacloud_HBase20190101::Client::grant(shared_ptr<GrantRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return grantWithOptions(request, runtime);
}

ListHBaseInstancesResponse Alibabacloud_HBase20190101::Client::listHBaseInstancesWithOptions(shared_ptr<ListHBaseInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHBaseInstances"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListHBaseInstancesResponse(callApi(params, req, runtime));
}

ListHBaseInstancesResponse Alibabacloud_HBase20190101::Client::listHBaseInstances(shared_ptr<ListHBaseInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHBaseInstancesWithOptions(request, runtime);
}

ListInstanceServiceConfigHistoriesResponse Alibabacloud_HBase20190101::Client::listInstanceServiceConfigHistoriesWithOptions(shared_ptr<ListInstanceServiceConfigHistoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstanceServiceConfigHistories"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstanceServiceConfigHistoriesResponse(callApi(params, req, runtime));
}

ListInstanceServiceConfigHistoriesResponse Alibabacloud_HBase20190101::Client::listInstanceServiceConfigHistories(shared_ptr<ListInstanceServiceConfigHistoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInstanceServiceConfigHistoriesWithOptions(request, runtime);
}

ListInstanceServiceConfigurationsResponse Alibabacloud_HBase20190101::Client::listInstanceServiceConfigurationsWithOptions(shared_ptr<ListInstanceServiceConfigurationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstanceServiceConfigurations"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstanceServiceConfigurationsResponse(callApi(params, req, runtime));
}

ListInstanceServiceConfigurationsResponse Alibabacloud_HBase20190101::Client::listInstanceServiceConfigurations(shared_ptr<ListInstanceServiceConfigurationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInstanceServiceConfigurationsWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_HBase20190101::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListTagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListTagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagResources"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagResourcesResponse(callApi(params, req, runtime));
}

ListTagResourcesResponse Alibabacloud_HBase20190101::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ListTagsResponse Alibabacloud_HBase20190101::Client::listTagsWithOptions(shared_ptr<ListTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTags"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagsResponse(callApi(params, req, runtime));
}

ListTagsResponse Alibabacloud_HBase20190101::Client::listTags(shared_ptr<ListTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagsWithOptions(request, runtime);
}

ModifyAccountPasswordResponse Alibabacloud_HBase20190101::Client::modifyAccountPasswordWithOptions(shared_ptr<ModifyAccountPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    query->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newAccountPassword)) {
    query->insert(pair<string, string>("NewAccountPassword", *request->newAccountPassword));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAccountPassword"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAccountPasswordResponse(callApi(params, req, runtime));
}

ModifyAccountPasswordResponse Alibabacloud_HBase20190101::Client::modifyAccountPassword(shared_ptr<ModifyAccountPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAccountPasswordWithOptions(request, runtime);
}

ModifyActiveOperationTasksResponse Alibabacloud_HBase20190101::Client::modifyActiveOperationTasksWithOptions(shared_ptr<ModifyActiveOperationTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ids)) {
    query->insert(pair<string, string>("Ids", *request->ids));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->immediateStart)) {
    query->insert(pair<string, long>("ImmediateStart", *request->immediateStart));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->switchTime)) {
    query->insert(pair<string, string>("SwitchTime", *request->switchTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyActiveOperationTasks"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyActiveOperationTasksResponse(callApi(params, req, runtime));
}

ModifyActiveOperationTasksResponse Alibabacloud_HBase20190101::Client::modifyActiveOperationTasks(shared_ptr<ModifyActiveOperationTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyActiveOperationTasksWithOptions(request, runtime);
}

ModifyBackupPlanConfigResponse Alibabacloud_HBase20190101::Client::modifyBackupPlanConfigWithOptions(shared_ptr<ModifyBackupPlanConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fullBackupCycle)) {
    query->insert(pair<string, string>("FullBackupCycle", *request->fullBackupCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->minHFileBackupCount)) {
    query->insert(pair<string, string>("MinHFileBackupCount", *request->minHFileBackupCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextFullBackupDate)) {
    query->insert(pair<string, string>("NextFullBackupDate", *request->nextFullBackupDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tables)) {
    query->insert(pair<string, string>("Tables", *request->tables));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyBackupPlanConfig"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyBackupPlanConfigResponse(callApi(params, req, runtime));
}

ModifyBackupPlanConfigResponse Alibabacloud_HBase20190101::Client::modifyBackupPlanConfig(shared_ptr<ModifyBackupPlanConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyBackupPlanConfigWithOptions(request, runtime);
}

ModifyBackupPolicyResponse Alibabacloud_HBase20190101::Client::modifyBackupPolicyWithOptions(shared_ptr<ModifyBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preferredBackupEndTimeUTC)) {
    query->insert(pair<string, string>("PreferredBackupEndTimeUTC", *request->preferredBackupEndTimeUTC));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preferredBackupPeriod)) {
    query->insert(pair<string, string>("PreferredBackupPeriod", *request->preferredBackupPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preferredBackupStartTimeUTC)) {
    query->insert(pair<string, string>("PreferredBackupStartTimeUTC", *request->preferredBackupStartTimeUTC));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preferredBackupTime)) {
    query->insert(pair<string, string>("PreferredBackupTime", *request->preferredBackupTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyBackupPolicy"))},
    {"version", boost::any(string("2019-01-01"))},
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

ModifyBackupPolicyResponse Alibabacloud_HBase20190101::Client::modifyBackupPolicy(shared_ptr<ModifyBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyBackupPolicyWithOptions(request, runtime);
}

ModifyClusterDeletionProtectionResponse Alibabacloud_HBase20190101::Client::modifyClusterDeletionProtectionWithOptions(shared_ptr<ModifyClusterDeletionProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->protection)) {
    query->insert(pair<string, bool>("Protection", *request->protection));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyClusterDeletionProtection"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyClusterDeletionProtectionResponse(callApi(params, req, runtime));
}

ModifyClusterDeletionProtectionResponse Alibabacloud_HBase20190101::Client::modifyClusterDeletionProtection(shared_ptr<ModifyClusterDeletionProtectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyClusterDeletionProtectionWithOptions(request, runtime);
}

ModifyDiskWarningLineResponse Alibabacloud_HBase20190101::Client::modifyDiskWarningLineWithOptions(shared_ptr<ModifyDiskWarningLineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->warningLine)) {
    query->insert(pair<string, long>("WarningLine", *request->warningLine));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDiskWarningLine"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDiskWarningLineResponse(callApi(params, req, runtime));
}

ModifyDiskWarningLineResponse Alibabacloud_HBase20190101::Client::modifyDiskWarningLine(shared_ptr<ModifyDiskWarningLineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDiskWarningLineWithOptions(request, runtime);
}

ModifyInstanceMaintainTimeResponse Alibabacloud_HBase20190101::Client::modifyInstanceMaintainTimeWithOptions(shared_ptr<ModifyInstanceMaintainTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maintainEndTime)) {
    query->insert(pair<string, string>("MaintainEndTime", *request->maintainEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maintainStartTime)) {
    query->insert(pair<string, string>("MaintainStartTime", *request->maintainStartTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyInstanceMaintainTime"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyInstanceMaintainTimeResponse(callApi(params, req, runtime));
}

ModifyInstanceMaintainTimeResponse Alibabacloud_HBase20190101::Client::modifyInstanceMaintainTime(shared_ptr<ModifyInstanceMaintainTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceMaintainTimeWithOptions(request, runtime);
}

ModifyInstanceNameResponse Alibabacloud_HBase20190101::Client::modifyInstanceNameWithOptions(shared_ptr<ModifyInstanceNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterName)) {
    query->insert(pair<string, string>("ClusterName", *request->clusterName));
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
    {"action", boost::any(string("ModifyInstanceName"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyInstanceNameResponse(callApi(params, req, runtime));
}

ModifyInstanceNameResponse Alibabacloud_HBase20190101::Client::modifyInstanceName(shared_ptr<ModifyInstanceNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceNameWithOptions(request, runtime);
}

ModifyInstanceServiceConfigResponse Alibabacloud_HBase20190101::Client::modifyInstanceServiceConfigWithOptions(shared_ptr<ModifyInstanceServiceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configureName)) {
    query->insert(pair<string, string>("ConfigureName", *request->configureName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configureValue)) {
    query->insert(pair<string, string>("ConfigureValue", *request->configureValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parameters)) {
    query->insert(pair<string, string>("Parameters", *request->parameters));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->restart)) {
    query->insert(pair<string, bool>("Restart", *request->restart));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyInstanceServiceConfig"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyInstanceServiceConfigResponse(callApi(params, req, runtime));
}

ModifyInstanceServiceConfigResponse Alibabacloud_HBase20190101::Client::modifyInstanceServiceConfig(shared_ptr<ModifyInstanceServiceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceServiceConfigWithOptions(request, runtime);
}

ModifyInstanceTypeResponse Alibabacloud_HBase20190101::Client::modifyInstanceTypeWithOptions(shared_ptr<ModifyInstanceTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coreInstanceType)) {
    query->insert(pair<string, string>("CoreInstanceType", *request->coreInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterInstanceType)) {
    query->insert(pair<string, string>("MasterInstanceType", *request->masterInstanceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyInstanceType"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyInstanceTypeResponse(callApi(params, req, runtime));
}

ModifyInstanceTypeResponse Alibabacloud_HBase20190101::Client::modifyInstanceType(shared_ptr<ModifyInstanceTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceTypeWithOptions(request, runtime);
}

ModifyIpWhitelistResponse Alibabacloud_HBase20190101::Client::modifyIpWhitelistWithOptions(shared_ptr<ModifyIpWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipList)) {
    query->insert(pair<string, string>("IpList", *request->ipList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipVersion)) {
    query->insert(pair<string, string>("IpVersion", *request->ipVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyIpWhitelist"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyIpWhitelistResponse(callApi(params, req, runtime));
}

ModifyIpWhitelistResponse Alibabacloud_HBase20190101::Client::modifyIpWhitelist(shared_ptr<ModifyIpWhitelistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyIpWhitelistWithOptions(request, runtime);
}

ModifyMultiZoneClusterNodeTypeResponse Alibabacloud_HBase20190101::Client::modifyMultiZoneClusterNodeTypeWithOptions(shared_ptr<ModifyMultiZoneClusterNodeTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coreInstanceType)) {
    query->insert(pair<string, string>("CoreInstanceType", *request->coreInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logInstanceType)) {
    query->insert(pair<string, string>("LogInstanceType", *request->logInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterInstanceType)) {
    query->insert(pair<string, string>("MasterInstanceType", *request->masterInstanceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyMultiZoneClusterNodeType"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyMultiZoneClusterNodeTypeResponse(callApi(params, req, runtime));
}

ModifyMultiZoneClusterNodeTypeResponse Alibabacloud_HBase20190101::Client::modifyMultiZoneClusterNodeType(shared_ptr<ModifyMultiZoneClusterNodeTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyMultiZoneClusterNodeTypeWithOptions(request, runtime);
}

ModifySecurityGroupsResponse Alibabacloud_HBase20190101::Client::modifySecurityGroupsWithOptions(shared_ptr<ModifySecurityGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupIds)) {
    query->insert(pair<string, string>("SecurityGroupIds", *request->securityGroupIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifySecurityGroups"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifySecurityGroupsResponse(callApi(params, req, runtime));
}

ModifySecurityGroupsResponse Alibabacloud_HBase20190101::Client::modifySecurityGroups(shared_ptr<ModifySecurityGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySecurityGroupsWithOptions(request, runtime);
}

ModifyUIAccountPasswordResponse Alibabacloud_HBase20190101::Client::modifyUIAccountPasswordWithOptions(shared_ptr<ModifyUIAccountPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    query->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountPassword)) {
    query->insert(pair<string, string>("AccountPassword", *request->accountPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyUIAccountPassword"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyUIAccountPasswordResponse(callApi(params, req, runtime));
}

ModifyUIAccountPasswordResponse Alibabacloud_HBase20190101::Client::modifyUIAccountPassword(shared_ptr<ModifyUIAccountPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyUIAccountPasswordWithOptions(request, runtime);
}

MoveResourceGroupResponse Alibabacloud_HBase20190101::Client::moveResourceGroupWithOptions(shared_ptr<MoveResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newResourceGroupId)) {
    query->insert(pair<string, string>("NewResourceGroupId", *request->newResourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MoveResourceGroup"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MoveResourceGroupResponse(callApi(params, req, runtime));
}

MoveResourceGroupResponse Alibabacloud_HBase20190101::Client::moveResourceGroup(shared_ptr<MoveResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return moveResourceGroupWithOptions(request, runtime);
}

OpenBackupResponse Alibabacloud_HBase20190101::Client::openBackupWithOptions(shared_ptr<OpenBackupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenBackup"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenBackupResponse(callApi(params, req, runtime));
}

OpenBackupResponse Alibabacloud_HBase20190101::Client::openBackup(shared_ptr<OpenBackupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openBackupWithOptions(request, runtime);
}

PurgeInstanceResponse Alibabacloud_HBase20190101::Client::purgeInstanceWithOptions(shared_ptr<PurgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PurgeInstance"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PurgeInstanceResponse(callApi(params, req, runtime));
}

PurgeInstanceResponse Alibabacloud_HBase20190101::Client::purgeInstance(shared_ptr<PurgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return purgeInstanceWithOptions(request, runtime);
}

QueryHBaseHaDBResponse Alibabacloud_HBase20190101::Client::queryHBaseHaDBWithOptions(shared_ptr<QueryHBaseHaDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bdsId)) {
    query->insert(pair<string, string>("BdsId", *request->bdsId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryHBaseHaDB"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryHBaseHaDBResponse(callApi(params, req, runtime));
}

QueryHBaseHaDBResponse Alibabacloud_HBase20190101::Client::queryHBaseHaDB(shared_ptr<QueryHBaseHaDBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryHBaseHaDBWithOptions(request, runtime);
}

QueryXpackRelateDBResponse Alibabacloud_HBase20190101::Client::queryXpackRelateDBWithOptions(shared_ptr<QueryXpackRelateDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->hasSingleNode)) {
    query->insert(pair<string, bool>("HasSingleNode", *request->hasSingleNode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relateDbType)) {
    query->insert(pair<string, string>("RelateDbType", *request->relateDbType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryXpackRelateDB"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryXpackRelateDBResponse(callApi(params, req, runtime));
}

QueryXpackRelateDBResponse Alibabacloud_HBase20190101::Client::queryXpackRelateDB(shared_ptr<QueryXpackRelateDBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryXpackRelateDBWithOptions(request, runtime);
}

RelateDbForHBaseHaResponse Alibabacloud_HBase20190101::Client::relateDbForHBaseHaWithOptions(shared_ptr<RelateDbForHBaseHaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->haActive)) {
    query->insert(pair<string, string>("HaActive", *request->haActive));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->haActiveClusterKey)) {
    query->insert(pair<string, string>("HaActiveClusterKey", *request->haActiveClusterKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->haActiveDBType)) {
    query->insert(pair<string, string>("HaActiveDBType", *request->haActiveDBType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->haActiveHbaseFsDir)) {
    query->insert(pair<string, string>("HaActiveHbaseFsDir", *request->haActiveHbaseFsDir));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->haActiveHdfsUri)) {
    query->insert(pair<string, string>("HaActiveHdfsUri", *request->haActiveHdfsUri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->haActivePassword)) {
    query->insert(pair<string, string>("HaActivePassword", *request->haActivePassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->haActiveUser)) {
    query->insert(pair<string, string>("HaActiveUser", *request->haActiveUser));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->haActiveVersion)) {
    query->insert(pair<string, string>("HaActiveVersion", *request->haActiveVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->haMigrateType)) {
    query->insert(pair<string, string>("HaMigrateType", *request->haMigrateType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->haStandby)) {
    query->insert(pair<string, string>("HaStandby", *request->haStandby));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->haStandbyClusterKey)) {
    query->insert(pair<string, string>("HaStandbyClusterKey", *request->haStandbyClusterKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->haStandbyDBType)) {
    query->insert(pair<string, string>("HaStandbyDBType", *request->haStandbyDBType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->haStandbyHbaseFsDir)) {
    query->insert(pair<string, string>("HaStandbyHbaseFsDir", *request->haStandbyHbaseFsDir));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->haStandbyHdfsUri)) {
    query->insert(pair<string, string>("HaStandbyHdfsUri", *request->haStandbyHdfsUri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->haStandbyPassword)) {
    query->insert(pair<string, string>("HaStandbyPassword", *request->haStandbyPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->haStandbyUser)) {
    query->insert(pair<string, string>("HaStandbyUser", *request->haStandbyUser));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->haStandbyVersion)) {
    query->insert(pair<string, string>("HaStandbyVersion", *request->haStandbyVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->haTables)) {
    query->insert(pair<string, string>("HaTables", *request->haTables));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isActiveStandard)) {
    query->insert(pair<string, bool>("IsActiveStandard", *request->isActiveStandard));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isStandbyStandard)) {
    query->insert(pair<string, bool>("IsStandbyStandard", *request->isStandbyStandard));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RelateDbForHBaseHa"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RelateDbForHBaseHaResponse(callApi(params, req, runtime));
}

RelateDbForHBaseHaResponse Alibabacloud_HBase20190101::Client::relateDbForHBaseHa(shared_ptr<RelateDbForHBaseHaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return relateDbForHBaseHaWithOptions(request, runtime);
}

ReleasePublicNetworkAddressResponse Alibabacloud_HBase20190101::Client::releasePublicNetworkAddressWithOptions(shared_ptr<ReleasePublicNetworkAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleasePublicNetworkAddress"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReleasePublicNetworkAddressResponse(callApi(params, req, runtime));
}

ReleasePublicNetworkAddressResponse Alibabacloud_HBase20190101::Client::releasePublicNetworkAddress(shared_ptr<ReleasePublicNetworkAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releasePublicNetworkAddressWithOptions(request, runtime);
}

RenewInstanceResponse Alibabacloud_HBase20190101::Client::renewInstanceWithOptions(shared_ptr<RenewInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->duration)) {
    query->insert(pair<string, long>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pricingCycle)) {
    query->insert(pair<string, string>("PricingCycle", *request->pricingCycle));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenewInstance"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RenewInstanceResponse(callApi(params, req, runtime));
}

RenewInstanceResponse Alibabacloud_HBase20190101::Client::renewInstance(shared_ptr<RenewInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renewInstanceWithOptions(request, runtime);
}

ResizeColdStorageSizeResponse Alibabacloud_HBase20190101::Client::resizeColdStorageSizeWithOptions(shared_ptr<ResizeColdStorageSizeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->coldStorageSize)) {
    query->insert(pair<string, long>("ColdStorageSize", *request->coldStorageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResizeColdStorageSize"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResizeColdStorageSizeResponse(callApi(params, req, runtime));
}

ResizeColdStorageSizeResponse Alibabacloud_HBase20190101::Client::resizeColdStorageSize(shared_ptr<ResizeColdStorageSizeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resizeColdStorageSizeWithOptions(request, runtime);
}

ResizeDiskSizeResponse Alibabacloud_HBase20190101::Client::resizeDiskSizeWithOptions(shared_ptr<ResizeDiskSizeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeDiskSize)) {
    query->insert(pair<string, long>("NodeDiskSize", *request->nodeDiskSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResizeDiskSize"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResizeDiskSizeResponse(callApi(params, req, runtime));
}

ResizeDiskSizeResponse Alibabacloud_HBase20190101::Client::resizeDiskSize(shared_ptr<ResizeDiskSizeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resizeDiskSizeWithOptions(request, runtime);
}

ResizeMultiZoneClusterDiskSizeResponse Alibabacloud_HBase20190101::Client::resizeMultiZoneClusterDiskSizeWithOptions(shared_ptr<ResizeMultiZoneClusterDiskSizeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->coreDiskSize)) {
    query->insert(pair<string, long>("CoreDiskSize", *request->coreDiskSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->logDiskSize)) {
    query->insert(pair<string, long>("LogDiskSize", *request->logDiskSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResizeMultiZoneClusterDiskSize"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResizeMultiZoneClusterDiskSizeResponse(callApi(params, req, runtime));
}

ResizeMultiZoneClusterDiskSizeResponse Alibabacloud_HBase20190101::Client::resizeMultiZoneClusterDiskSize(shared_ptr<ResizeMultiZoneClusterDiskSizeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resizeMultiZoneClusterDiskSizeWithOptions(request, runtime);
}

ResizeMultiZoneClusterNodeCountResponse Alibabacloud_HBase20190101::Client::resizeMultiZoneClusterNodeCountWithOptions(shared_ptr<ResizeMultiZoneClusterNodeCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->arbiterVSwitchId)) {
    query->insert(pair<string, string>("ArbiterVSwitchId", *request->arbiterVSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->coreNodeCount)) {
    query->insert(pair<string, long>("CoreNodeCount", *request->coreNodeCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->logNodeCount)) {
    query->insert(pair<string, long>("LogNodeCount", *request->logNodeCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->primaryCoreNodeCount)) {
    query->insert(pair<string, long>("PrimaryCoreNodeCount", *request->primaryCoreNodeCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->primaryVSwitchId)) {
    query->insert(pair<string, string>("PrimaryVSwitchId", *request->primaryVSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->standbyCoreNodeCount)) {
    query->insert(pair<string, long>("StandbyCoreNodeCount", *request->standbyCoreNodeCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->standbyVSwitchId)) {
    query->insert(pair<string, string>("StandbyVSwitchId", *request->standbyVSwitchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResizeMultiZoneClusterNodeCount"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResizeMultiZoneClusterNodeCountResponse(callApi(params, req, runtime));
}

ResizeMultiZoneClusterNodeCountResponse Alibabacloud_HBase20190101::Client::resizeMultiZoneClusterNodeCount(shared_ptr<ResizeMultiZoneClusterNodeCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resizeMultiZoneClusterNodeCountWithOptions(request, runtime);
}

ResizeNodeCountResponse Alibabacloud_HBase20190101::Client::resizeNodeCountWithOptions(shared_ptr<ResizeNodeCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeCount)) {
    query->insert(pair<string, long>("NodeCount", *request->nodeCount));
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
    {"action", boost::any(string("ResizeNodeCount"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResizeNodeCountResponse(callApi(params, req, runtime));
}

ResizeNodeCountResponse Alibabacloud_HBase20190101::Client::resizeNodeCount(shared_ptr<ResizeNodeCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resizeNodeCountWithOptions(request, runtime);
}

RestartInstanceResponse Alibabacloud_HBase20190101::Client::restartInstanceWithOptions(shared_ptr<RestartInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->components)) {
    query->insert(pair<string, string>("Components", *request->components));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestartInstance"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RestartInstanceResponse(callApi(params, req, runtime));
}

RestartInstanceResponse Alibabacloud_HBase20190101::Client::restartInstance(shared_ptr<RestartInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restartInstanceWithOptions(request, runtime);
}

RevokeResponse Alibabacloud_HBase20190101::Client::revokeWithOptions(shared_ptr<RevokeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    query->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclActions)) {
    query->insert(pair<string, string>("AclActions", *request->aclActions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Revoke"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RevokeResponse(callApi(params, req, runtime));
}

RevokeResponse Alibabacloud_HBase20190101::Client::revoke(shared_ptr<RevokeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeWithOptions(request, runtime);
}

SwitchHbaseHaSlbResponse Alibabacloud_HBase20190101::Client::switchHbaseHaSlbWithOptions(shared_ptr<SwitchHbaseHaSlbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bdsId)) {
    query->insert(pair<string, string>("BdsId", *request->bdsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->haId)) {
    query->insert(pair<string, string>("HaId", *request->haId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->haTypes)) {
    query->insert(pair<string, string>("HaTypes", *request->haTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hbaseType)) {
    query->insert(pair<string, string>("HbaseType", *request->hbaseType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SwitchHbaseHaSlb"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SwitchHbaseHaSlbResponse(callApi(params, req, runtime));
}

SwitchHbaseHaSlbResponse Alibabacloud_HBase20190101::Client::switchHbaseHaSlb(shared_ptr<SwitchHbaseHaSlbRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchHbaseHaSlbWithOptions(request, runtime);
}

SwitchServiceResponse Alibabacloud_HBase20190101::Client::switchServiceWithOptions(shared_ptr<SwitchServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operate)) {
    query->insert(pair<string, string>("Operate", *request->operate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SwitchService"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SwitchServiceResponse(callApi(params, req, runtime));
}

SwitchServiceResponse Alibabacloud_HBase20190101::Client::switchService(shared_ptr<SwitchServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchServiceWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_HBase20190101::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<TagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagResourcesResponse(callApi(params, req, runtime));
}

TagResourcesResponse Alibabacloud_HBase20190101::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UnTagResourcesResponse Alibabacloud_HBase20190101::Client::unTagResourcesWithOptions(shared_ptr<UnTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("All", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagKey)) {
    query->insert(pair<string, vector<string>>("TagKey", *request->tagKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnTagResources"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnTagResourcesResponse(callApi(params, req, runtime));
}

UnTagResourcesResponse Alibabacloud_HBase20190101::Client::unTagResources(shared_ptr<UnTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unTagResourcesWithOptions(request, runtime);
}

UpgradeMinorVersionResponse Alibabacloud_HBase20190101::Client::upgradeMinorVersionWithOptions(shared_ptr<UpgradeMinorVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->components)) {
    query->insert(pair<string, string>("Components", *request->components));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeMinorVersion"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpgradeMinorVersionResponse(callApi(params, req, runtime));
}

UpgradeMinorVersionResponse Alibabacloud_HBase20190101::Client::upgradeMinorVersion(shared_ptr<UpgradeMinorVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeMinorVersionWithOptions(request, runtime);
}

UpgradeMultiZoneClusterResponse Alibabacloud_HBase20190101::Client::upgradeMultiZoneClusterWithOptions(shared_ptr<UpgradeMultiZoneClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->components)) {
    query->insert(pair<string, string>("Components", *request->components));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->restartComponents)) {
    query->insert(pair<string, string>("RestartComponents", *request->restartComponents));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runMode)) {
    query->insert(pair<string, string>("RunMode", *request->runMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->upgradeInsName)) {
    query->insert(pair<string, string>("UpgradeInsName", *request->upgradeInsName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versions)) {
    query->insert(pair<string, string>("Versions", *request->versions));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeMultiZoneCluster"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpgradeMultiZoneClusterResponse(callApi(params, req, runtime));
}

UpgradeMultiZoneClusterResponse Alibabacloud_HBase20190101::Client::upgradeMultiZoneCluster(shared_ptr<UpgradeMultiZoneClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeMultiZoneClusterWithOptions(request, runtime);
}

XpackRelateDBResponse Alibabacloud_HBase20190101::Client::xpackRelateDBWithOptions(shared_ptr<XpackRelateDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbClusterIds)) {
    query->insert(pair<string, string>("DbClusterIds", *request->dbClusterIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relateDbType)) {
    query->insert(pair<string, string>("RelateDbType", *request->relateDbType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("XpackRelateDB"))},
    {"version", boost::any(string("2019-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return XpackRelateDBResponse(callApi(params, req, runtime));
}

XpackRelateDBResponse Alibabacloud_HBase20190101::Client::xpackRelateDB(shared_ptr<XpackRelateDBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return xpackRelateDBWithOptions(request, runtime);
}

