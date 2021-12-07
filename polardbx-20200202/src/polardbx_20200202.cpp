// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/polardbx_20200202.hpp>
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

using namespace Alibabacloud_Polardbx20200202;

Alibabacloud_Polardbx20200202::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-1", "polardbx.aliyuncs.com"},
    {"ap-northeast-2-pop", "polardbx.aliyuncs.com"},
    {"ap-south-1", "polardbx.aliyuncs.com"},
    {"ap-southeast-2", "polardbx.aliyuncs.com"},
    {"ap-southeast-3", "polardbx.aliyuncs.com"},
    {"ap-southeast-5", "polardbx.aliyuncs.com"},
    {"cn-beijing-finance-1", "polardbx.aliyuncs.com"},
    {"cn-beijing-finance-pop", "polardbx.aliyuncs.com"},
    {"cn-beijing-gov-1", "polardbx.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "polardbx.aliyuncs.com"},
    {"cn-edge-1", "polardbx.aliyuncs.com"},
    {"cn-fujian", "polardbx.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "polardbx.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "polardbx.aliyuncs.com"},
    {"cn-hangzhou-finance", "polardbx.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "polardbx.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "polardbx.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "polardbx.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "polardbx.aliyuncs.com"},
    {"cn-hangzhou-test-306", "polardbx.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "polardbx.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "polardbx.aliyuncs.com"},
    {"cn-north-2-gov-1", "polardbx.aliyuncs.com"},
    {"cn-qingdao-nebula", "polardbx.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "polardbx.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "polardbx.aliyuncs.com"},
    {"cn-shanghai-finance-1", "polardbx.aliyuncs.com"},
    {"cn-shanghai-inner", "polardbx.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "polardbx.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "polardbx.aliyuncs.com"},
    {"cn-shenzhen-inner", "polardbx.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "polardbx.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "polardbx.aliyuncs.com"},
    {"cn-wuhan", "polardbx.aliyuncs.com"},
    {"cn-wulanchabu", "polardbx.aliyuncs.com"},
    {"cn-yushanfang", "polardbx.aliyuncs.com"},
    {"cn-zhangbei", "polardbx.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "polardbx.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "polardbx.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "polardbx.aliyuncs.com"},
    {"eu-central-1", "polardbx.aliyuncs.com"},
    {"eu-west-1", "polardbx.aliyuncs.com"},
    {"eu-west-1-oxs", "polardbx.aliyuncs.com"},
    {"me-east-1", "polardbx.aliyuncs.com"},
    {"rus-west-1-pop", "polardbx.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("polardbx"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Polardbx20200202::Client::getEndpoint(shared_ptr<string> productId,
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

AllocateInstancePublicConnectionResponse Alibabacloud_Polardbx20200202::Client::allocateInstancePublicConnectionWithOptions(shared_ptr<AllocateInstancePublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ConnectionStringPrefix", *request->connectionStringPrefix));
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("Port", *request->port));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AllocateInstancePublicConnection"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AllocateInstancePublicConnectionResponse(callApi(params, req, runtime));
}

AllocateInstancePublicConnectionResponse Alibabacloud_Polardbx20200202::Client::allocateInstancePublicConnection(shared_ptr<AllocateInstancePublicConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return allocateInstancePublicConnectionWithOptions(request, runtime);
}

CancelActiveOperationTasksResponse Alibabacloud_Polardbx20200202::Client::cancelActiveOperationTasksWithOptions(shared_ptr<CancelActiveOperationTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelActiveOperationTasks"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelActiveOperationTasksResponse(callApi(params, req, runtime));
}

CancelActiveOperationTasksResponse Alibabacloud_Polardbx20200202::Client::cancelActiveOperationTasks(shared_ptr<CancelActiveOperationTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelActiveOperationTasksWithOptions(request, runtime);
}

CancelPolarxOrderResponse Alibabacloud_Polardbx20200202::Client::cancelPolarxOrderWithOptions(shared_ptr<CancelPolarxOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ScaleOutToken", *request->scaleOutToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelPolarxOrder"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelPolarxOrderResponse(callApi(params, req, runtime));
}

CancelPolarxOrderResponse Alibabacloud_Polardbx20200202::Client::cancelPolarxOrder(shared_ptr<CancelPolarxOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelPolarxOrderWithOptions(request, runtime);
}

CheckCloudResourceAuthorizedResponse Alibabacloud_Polardbx20200202::Client::checkCloudResourceAuthorizedWithOptions(shared_ptr<CheckCloudResourceAuthorizedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("RoleArn", *request->roleArn));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckCloudResourceAuthorized"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckCloudResourceAuthorizedResponse(callApi(params, req, runtime));
}

CheckCloudResourceAuthorizedResponse Alibabacloud_Polardbx20200202::Client::checkCloudResourceAuthorized(shared_ptr<CheckCloudResourceAuthorizedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkCloudResourceAuthorizedWithOptions(request, runtime);
}

CreateAccountResponse Alibabacloud_Polardbx20200202::Client::createAccountWithOptions(shared_ptr<CreateAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AccountDescription", *request->accountDescription));
  query->insert(pair<string, string>("AccountName", *request->accountName));
  query->insert(pair<string, string>("AccountPassword", *request->accountPassword));
  query->insert(pair<string, string>("AccountPrivilege", *request->accountPrivilege));
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("DBName", *request->DBName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("SecurityAccountName", *request->securityAccountName));
  query->insert(pair<string, string>("SecurityAccountPassword", *request->securityAccountPassword));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAccount"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAccountResponse(callApi(params, req, runtime));
}

CreateAccountResponse Alibabacloud_Polardbx20200202::Client::createAccount(shared_ptr<CreateAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAccountWithOptions(request, runtime);
}

CreateBackupResponse Alibabacloud_Polardbx20200202::Client::createBackupWithOptions(shared_ptr<CreateBackupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("BackupType", *request->backupType));
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBackup"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBackupResponse(callApi(params, req, runtime));
}

CreateBackupResponse Alibabacloud_Polardbx20200202::Client::createBackup(shared_ptr<CreateBackupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBackupWithOptions(request, runtime);
}

CreateDBResponse Alibabacloud_Polardbx20200202::Client::createDBWithOptions(shared_ptr<CreateDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AccountName", *request->accountName));
  query->insert(pair<string, string>("AccountPrivilege", *request->accountPrivilege));
  query->insert(pair<string, string>("Charset", *request->charset));
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("DbDescription", *request->dbDescription));
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("SecurityAccountName", *request->securityAccountName));
  query->insert(pair<string, string>("SecurityAccountPassword", *request->securityAccountPassword));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDB"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDBResponse(callApi(params, req, runtime));
}

CreateDBResponse Alibabacloud_Polardbx20200202::Client::createDB(shared_ptr<CreateDBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDBWithOptions(request, runtime);
}

CreateDBInstanceResponse Alibabacloud_Polardbx20200202::Client::createDBInstanceWithOptions(shared_ptr<CreateDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, bool>("AutoRenew", *request->autoRenew));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("DBNodeClass", *request->DBNodeClass));
  query->insert(pair<string, long>("DBNodeCount", *request->DBNodeCount));
  query->insert(pair<string, string>("EngineVersion", *request->engineVersion));
  query->insert(pair<string, bool>("IsReadDBInstance", *request->isReadDBInstance));
  query->insert(pair<string, string>("NetworkType", *request->networkType));
  query->insert(pair<string, string>("PayType", *request->payType));
  query->insert(pair<string, string>("Period", *request->period));
  query->insert(pair<string, string>("PrimaryDBInstanceName", *request->primaryDBInstanceName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  query->insert(pair<string, long>("UsedTime", *request->usedTime));
  query->insert(pair<string, string>("VPCId", *request->VPCId));
  query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  query->insert(pair<string, string>("ZoneId", *request->zoneId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDBInstance"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDBInstanceResponse(callApi(params, req, runtime));
}

CreateDBInstanceResponse Alibabacloud_Polardbx20200202::Client::createDBInstance(shared_ptr<CreateDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDBInstanceWithOptions(request, runtime);
}

CreatePolarxOrderResponse Alibabacloud_Polardbx20200202::Client::createPolarxOrderWithOptions(shared_ptr<CreatePolarxOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("NodeCount", *request->nodeCount));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePolarxOrder"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePolarxOrderResponse(callApi(params, req, runtime));
}

CreatePolarxOrderResponse Alibabacloud_Polardbx20200202::Client::createPolarxOrder(shared_ptr<CreatePolarxOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPolarxOrderWithOptions(request, runtime);
}

CreateSuperAccountResponse Alibabacloud_Polardbx20200202::Client::createSuperAccountWithOptions(shared_ptr<CreateSuperAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AccountDescription", *request->accountDescription));
  query->insert(pair<string, string>("AccountName", *request->accountName));
  query->insert(pair<string, string>("AccountPassword", *request->accountPassword));
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSuperAccount"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSuperAccountResponse(callApi(params, req, runtime));
}

CreateSuperAccountResponse Alibabacloud_Polardbx20200202::Client::createSuperAccount(shared_ptr<CreateSuperAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSuperAccountWithOptions(request, runtime);
}

DeleteAccountResponse Alibabacloud_Polardbx20200202::Client::deleteAccountWithOptions(shared_ptr<DeleteAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AccountName", *request->accountName));
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("SecurityAccountName", *request->securityAccountName));
  query->insert(pair<string, string>("SecurityAccountPassword", *request->securityAccountPassword));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAccount"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAccountResponse(callApi(params, req, runtime));
}

DeleteAccountResponse Alibabacloud_Polardbx20200202::Client::deleteAccount(shared_ptr<DeleteAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAccountWithOptions(request, runtime);
}

DeleteDBResponse Alibabacloud_Polardbx20200202::Client::deleteDBWithOptions(shared_ptr<DeleteDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDB"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDBResponse(callApi(params, req, runtime));
}

DeleteDBResponse Alibabacloud_Polardbx20200202::Client::deleteDB(shared_ptr<DeleteDBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDBWithOptions(request, runtime);
}

DeleteDBInstanceResponse Alibabacloud_Polardbx20200202::Client::deleteDBInstanceWithOptions(shared_ptr<DeleteDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDBInstance"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDBInstanceResponse(callApi(params, req, runtime));
}

DeleteDBInstanceResponse Alibabacloud_Polardbx20200202::Client::deleteDBInstance(shared_ptr<DeleteDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDBInstanceWithOptions(request, runtime);
}

DescribeAccountListResponse Alibabacloud_Polardbx20200202::Client::describeAccountListWithOptions(shared_ptr<DescribeAccountListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AccountName", *request->accountName));
  query->insert(pair<string, string>("AccountType", *request->accountType));
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAccountList"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAccountListResponse(callApi(params, req, runtime));
}

DescribeAccountListResponse Alibabacloud_Polardbx20200202::Client::describeAccountList(shared_ptr<DescribeAccountListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAccountListWithOptions(request, runtime);
}

DescribeActiveOperationMaintainConfResponse Alibabacloud_Polardbx20200202::Client::describeActiveOperationMaintainConfWithOptions(shared_ptr<DescribeActiveOperationMaintainConfRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeActiveOperationMaintainConf"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeActiveOperationMaintainConfResponse(callApi(params, req, runtime));
}

DescribeActiveOperationMaintainConfResponse Alibabacloud_Polardbx20200202::Client::describeActiveOperationMaintainConf(shared_ptr<DescribeActiveOperationMaintainConfRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeActiveOperationMaintainConfWithOptions(request, runtime);
}

DescribeActiveOperationTaskCountResponse Alibabacloud_Polardbx20200202::Client::describeActiveOperationTaskCountWithOptions(shared_ptr<DescribeActiveOperationTaskCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeActiveOperationTaskCount"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeActiveOperationTaskCountResponse(callApi(params, req, runtime));
}

DescribeActiveOperationTaskCountResponse Alibabacloud_Polardbx20200202::Client::describeActiveOperationTaskCount(shared_ptr<DescribeActiveOperationTaskCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeActiveOperationTaskCountWithOptions(request, runtime);
}

DescribeActiveOperationTasksResponse Alibabacloud_Polardbx20200202::Client::describeActiveOperationTasksWithOptions(shared_ptr<DescribeActiveOperationTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeActiveOperationTasks"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeActiveOperationTasksResponse(callApi(params, req, runtime));
}

DescribeActiveOperationTasksResponse Alibabacloud_Polardbx20200202::Client::describeActiveOperationTasks(shared_ptr<DescribeActiveOperationTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeActiveOperationTasksWithOptions(request, runtime);
}

DescribeBackupPolicyResponse Alibabacloud_Polardbx20200202::Client::describeBackupPolicyWithOptions(shared_ptr<DescribeBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackupPolicy"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBackupPolicyResponse(callApi(params, req, runtime));
}

DescribeBackupPolicyResponse Alibabacloud_Polardbx20200202::Client::describeBackupPolicy(shared_ptr<DescribeBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupPolicyWithOptions(request, runtime);
}

DescribeBackupSetListResponse Alibabacloud_Polardbx20200202::Client::describeBackupSetListWithOptions(shared_ptr<DescribeBackupSetListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackupSetList"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBackupSetListResponse(callApi(params, req, runtime));
}

DescribeBackupSetListResponse Alibabacloud_Polardbx20200202::Client::describeBackupSetList(shared_ptr<DescribeBackupSetListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupSetListWithOptions(request, runtime);
}

DescribeBinaryLogListResponse Alibabacloud_Polardbx20200202::Client::describeBinaryLogListWithOptions(shared_ptr<DescribeBinaryLogListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBinaryLogList"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBinaryLogListResponse(callApi(params, req, runtime));
}

DescribeBinaryLogListResponse Alibabacloud_Polardbx20200202::Client::describeBinaryLogList(shared_ptr<DescribeBinaryLogListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBinaryLogListWithOptions(request, runtime);
}

DescribeCharacterSetResponse Alibabacloud_Polardbx20200202::Client::describeCharacterSetWithOptions(shared_ptr<DescribeCharacterSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCharacterSet"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCharacterSetResponse(callApi(params, req, runtime));
}

DescribeCharacterSetResponse Alibabacloud_Polardbx20200202::Client::describeCharacterSet(shared_ptr<DescribeCharacterSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCharacterSetWithOptions(request, runtime);
}

DescribeDBInstanceAttributeResponse Alibabacloud_Polardbx20200202::Client::describeDBInstanceAttributeWithOptions(shared_ptr<DescribeDBInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBInstanceAttribute"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBInstanceAttributeResponse(callApi(params, req, runtime));
}

DescribeDBInstanceAttributeResponse Alibabacloud_Polardbx20200202::Client::describeDBInstanceAttribute(shared_ptr<DescribeDBInstanceAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceAttributeWithOptions(request, runtime);
}

DescribeDBInstanceConfigResponse Alibabacloud_Polardbx20200202::Client::describeDBInstanceConfigWithOptions(shared_ptr<DescribeDBInstanceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ConfigName", *request->configName));
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBInstanceConfig"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBInstanceConfigResponse(callApi(params, req, runtime));
}

DescribeDBInstanceConfigResponse Alibabacloud_Polardbx20200202::Client::describeDBInstanceConfig(shared_ptr<DescribeDBInstanceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceConfigWithOptions(request, runtime);
}

DescribeDBInstanceSSLResponse Alibabacloud_Polardbx20200202::Client::describeDBInstanceSSLWithOptions(shared_ptr<DescribeDBInstanceSSLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBInstanceSSL"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBInstanceSSLResponse(callApi(params, req, runtime));
}

DescribeDBInstanceSSLResponse Alibabacloud_Polardbx20200202::Client::describeDBInstanceSSL(shared_ptr<DescribeDBInstanceSSLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceSSLWithOptions(request, runtime);
}

DescribeDBInstanceTDEResponse Alibabacloud_Polardbx20200202::Client::describeDBInstanceTDEWithOptions(shared_ptr<DescribeDBInstanceTDERequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBInstanceTDE"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBInstanceTDEResponse(callApi(params, req, runtime));
}

DescribeDBInstanceTDEResponse Alibabacloud_Polardbx20200202::Client::describeDBInstanceTDE(shared_ptr<DescribeDBInstanceTDERequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceTDEWithOptions(request, runtime);
}

DescribeDBInstanceTopologyResponse Alibabacloud_Polardbx20200202::Client::describeDBInstanceTopologyWithOptions(shared_ptr<DescribeDBInstanceTopologyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBInstanceTopology"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBInstanceTopologyResponse(callApi(params, req, runtime));
}

DescribeDBInstanceTopologyResponse Alibabacloud_Polardbx20200202::Client::describeDBInstanceTopology(shared_ptr<DescribeDBInstanceTopologyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceTopologyWithOptions(request, runtime);
}

DescribeDBInstancesResponse Alibabacloud_Polardbx20200202::Client::describeDBInstancesWithOptions(shared_ptr<DescribeDBInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBInstances"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBInstancesResponse(callApi(params, req, runtime));
}

DescribeDBInstancesResponse Alibabacloud_Polardbx20200202::Client::describeDBInstances(shared_ptr<DescribeDBInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstancesWithOptions(request, runtime);
}

DescribeDBNodePerformanceResponse Alibabacloud_Polardbx20200202::Client::describeDBNodePerformanceWithOptions(shared_ptr<DescribeDBNodePerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CharacterType", *request->characterType));
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("DBNodeIds", *request->DBNodeIds));
  query->insert(pair<string, string>("DBNodeRole", *request->DBNodeRole));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, string>("Key", *request->key));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBNodePerformance"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBNodePerformanceResponse(callApi(params, req, runtime));
}

DescribeDBNodePerformanceResponse Alibabacloud_Polardbx20200202::Client::describeDBNodePerformance(shared_ptr<DescribeDBNodePerformanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBNodePerformanceWithOptions(request, runtime);
}

DescribeDbListResponse Alibabacloud_Polardbx20200202::Client::describeDbListWithOptions(shared_ptr<DescribeDbListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("DBName", *request->DBName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDbList"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDbListResponse(callApi(params, req, runtime));
}

DescribeDbListResponse Alibabacloud_Polardbx20200202::Client::describeDbList(shared_ptr<DescribeDbListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDbListWithOptions(request, runtime);
}

DescribeDistributeTableListResponse Alibabacloud_Polardbx20200202::Client::describeDistributeTableListWithOptions(shared_ptr<DescribeDistributeTableListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDistributeTableList"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDistributeTableListResponse(callApi(params, req, runtime));
}

DescribeDistributeTableListResponse Alibabacloud_Polardbx20200202::Client::describeDistributeTableList(shared_ptr<DescribeDistributeTableListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDistributeTableListWithOptions(request, runtime);
}

DescribeEventsResponse Alibabacloud_Polardbx20200202::Client::describeEventsWithOptions(shared_ptr<DescribeEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEvents"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEventsResponse(callApi(params, req, runtime));
}

DescribeEventsResponse Alibabacloud_Polardbx20200202::Client::describeEvents(shared_ptr<DescribeEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEventsWithOptions(request, runtime);
}

DescribeParameterTemplatesResponse Alibabacloud_Polardbx20200202::Client::describeParameterTemplatesWithOptions(shared_ptr<DescribeParameterTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("ParamLevel", *request->paramLevel));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeParameterTemplates"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeParameterTemplatesResponse(callApi(params, req, runtime));
}

DescribeParameterTemplatesResponse Alibabacloud_Polardbx20200202::Client::describeParameterTemplates(shared_ptr<DescribeParameterTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeParameterTemplatesWithOptions(request, runtime);
}

DescribeParametersResponse Alibabacloud_Polardbx20200202::Client::describeParametersWithOptions(shared_ptr<DescribeParametersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("ParamLevel", *request->paramLevel));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeParameters"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeParametersResponse(callApi(params, req, runtime));
}

DescribeParametersResponse Alibabacloud_Polardbx20200202::Client::describeParameters(shared_ptr<DescribeParametersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeParametersWithOptions(request, runtime);
}

DescribePolarxDataNodesResponse Alibabacloud_Polardbx20200202::Client::describePolarxDataNodesWithOptions(shared_ptr<DescribePolarxDataNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePolarxDataNodes"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePolarxDataNodesResponse(callApi(params, req, runtime));
}

DescribePolarxDataNodesResponse Alibabacloud_Polardbx20200202::Client::describePolarxDataNodes(shared_ptr<DescribePolarxDataNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePolarxDataNodesWithOptions(request, runtime);
}

DescribePolarxDbInstancesResponse Alibabacloud_Polardbx20200202::Client::describePolarxDbInstancesWithOptions(shared_ptr<DescribePolarxDbInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePolarxDbInstances"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePolarxDbInstancesResponse(callApi(params, req, runtime));
}

DescribePolarxDbInstancesResponse Alibabacloud_Polardbx20200202::Client::describePolarxDbInstances(shared_ptr<DescribePolarxDbInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePolarxDbInstancesWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Polardbx20200202::Client::describeRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRegionsResponse(callApi(params, req, runtime));
}

DescribeRegionsResponse Alibabacloud_Polardbx20200202::Client::describeRegions() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(runtime);
}

DescribeScaleOutMigrateTaskListResponse Alibabacloud_Polardbx20200202::Client::describeScaleOutMigrateTaskListWithOptions(shared_ptr<DescribeScaleOutMigrateTaskListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScaleOutMigrateTaskList"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeScaleOutMigrateTaskListResponse(callApi(params, req, runtime));
}

DescribeScaleOutMigrateTaskListResponse Alibabacloud_Polardbx20200202::Client::describeScaleOutMigrateTaskList(shared_ptr<DescribeScaleOutMigrateTaskListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScaleOutMigrateTaskListWithOptions(request, runtime);
}

DescribeSecurityIpsResponse Alibabacloud_Polardbx20200202::Client::describeSecurityIpsWithOptions(shared_ptr<DescribeSecurityIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSecurityIps"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSecurityIpsResponse(callApi(params, req, runtime));
}

DescribeSecurityIpsResponse Alibabacloud_Polardbx20200202::Client::describeSecurityIps(shared_ptr<DescribeSecurityIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSecurityIpsWithOptions(request, runtime);
}

DescribeTasksResponse Alibabacloud_Polardbx20200202::Client::describeTasksWithOptions(shared_ptr<DescribeTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTasks"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTasksResponse(callApi(params, req, runtime));
}

DescribeTasksResponse Alibabacloud_Polardbx20200202::Client::describeTasks(shared_ptr<DescribeTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTasksWithOptions(request, runtime);
}

DescribeUserEncryptionKeyListResponse Alibabacloud_Polardbx20200202::Client::describeUserEncryptionKeyListWithOptions(shared_ptr<DescribeUserEncryptionKeyListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUserEncryptionKeyList"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUserEncryptionKeyListResponse(callApi(params, req, runtime));
}

DescribeUserEncryptionKeyListResponse Alibabacloud_Polardbx20200202::Client::describeUserEncryptionKeyList(shared_ptr<DescribeUserEncryptionKeyListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserEncryptionKeyListWithOptions(request, runtime);
}

GetPolarxCommodityResponse Alibabacloud_Polardbx20200202::Client::getPolarxCommodityWithOptions(shared_ptr<GetPolarxCommodityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("OrderType", *request->orderType));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPolarxCommodity"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPolarxCommodityResponse(callApi(params, req, runtime));
}

GetPolarxCommodityResponse Alibabacloud_Polardbx20200202::Client::getPolarxCommodity(shared_ptr<GetPolarxCommodityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPolarxCommodityWithOptions(request, runtime);
}

ModifyAccountDescriptionResponse Alibabacloud_Polardbx20200202::Client::modifyAccountDescriptionWithOptions(shared_ptr<ModifyAccountDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AccountDescription", *request->accountDescription));
  query->insert(pair<string, string>("AccountName", *request->accountName));
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAccountDescription"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAccountDescriptionResponse(callApi(params, req, runtime));
}

ModifyAccountDescriptionResponse Alibabacloud_Polardbx20200202::Client::modifyAccountDescription(shared_ptr<ModifyAccountDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAccountDescriptionWithOptions(request, runtime);
}

ModifyActiveOperationMaintainConfResponse Alibabacloud_Polardbx20200202::Client::modifyActiveOperationMaintainConfWithOptions(shared_ptr<ModifyActiveOperationMaintainConfRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyActiveOperationMaintainConf"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyActiveOperationMaintainConfResponse(callApi(params, req, runtime));
}

ModifyActiveOperationMaintainConfResponse Alibabacloud_Polardbx20200202::Client::modifyActiveOperationMaintainConf(shared_ptr<ModifyActiveOperationMaintainConfRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyActiveOperationMaintainConfWithOptions(request, runtime);
}

ModifyActiveOperationTasksResponse Alibabacloud_Polardbx20200202::Client::modifyActiveOperationTasksWithOptions(shared_ptr<ModifyActiveOperationTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Ids", *request->ids));
  query->insert(pair<string, long>("ImmediateStart", *request->immediateStart));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("SwitchTime", *request->switchTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyActiveOperationTasks"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyActiveOperationTasksResponse(callApi(params, req, runtime));
}

ModifyActiveOperationTasksResponse Alibabacloud_Polardbx20200202::Client::modifyActiveOperationTasks(shared_ptr<ModifyActiveOperationTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyActiveOperationTasksWithOptions(request, runtime);
}

ModifyDBInstanceClassResponse Alibabacloud_Polardbx20200202::Client::modifyDBInstanceClassWithOptions(shared_ptr<ModifyDBInstanceClassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("TargetDBInstanceClass", *request->targetDBInstanceClass));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDBInstanceClass"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDBInstanceClassResponse(callApi(params, req, runtime));
}

ModifyDBInstanceClassResponse Alibabacloud_Polardbx20200202::Client::modifyDBInstanceClass(shared_ptr<ModifyDBInstanceClassRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceClassWithOptions(request, runtime);
}

ModifyDBInstanceConfigResponse Alibabacloud_Polardbx20200202::Client::modifyDBInstanceConfigWithOptions(shared_ptr<ModifyDBInstanceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ConfigName", *request->configName));
  query->insert(pair<string, string>("ConfigValue", *request->configValue));
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDBInstanceConfig"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDBInstanceConfigResponse(callApi(params, req, runtime));
}

ModifyDBInstanceConfigResponse Alibabacloud_Polardbx20200202::Client::modifyDBInstanceConfig(shared_ptr<ModifyDBInstanceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceConfigWithOptions(request, runtime);
}

ModifyDBInstanceDescriptionResponse Alibabacloud_Polardbx20200202::Client::modifyDBInstanceDescriptionWithOptions(shared_ptr<ModifyDBInstanceDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DBInstanceDescription", *request->DBInstanceDescription));
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDBInstanceDescription"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDBInstanceDescriptionResponse(callApi(params, req, runtime));
}

ModifyDBInstanceDescriptionResponse Alibabacloud_Polardbx20200202::Client::modifyDBInstanceDescription(shared_ptr<ModifyDBInstanceDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceDescriptionWithOptions(request, runtime);
}

ModifyDatabaseDescriptionResponse Alibabacloud_Polardbx20200202::Client::modifyDatabaseDescriptionWithOptions(shared_ptr<ModifyDatabaseDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("DbDescription", *request->dbDescription));
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDatabaseDescription"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDatabaseDescriptionResponse(callApi(params, req, runtime));
}

ModifyDatabaseDescriptionResponse Alibabacloud_Polardbx20200202::Client::modifyDatabaseDescription(shared_ptr<ModifyDatabaseDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDatabaseDescriptionWithOptions(request, runtime);
}

ModifyParameterResponse Alibabacloud_Polardbx20200202::Client::modifyParameterWithOptions(shared_ptr<ModifyParameterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("ParamLevel", *request->paramLevel));
  query->insert(pair<string, string>("Parameters", *request->parameters));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyParameter"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyParameterResponse(callApi(params, req, runtime));
}

ModifyParameterResponse Alibabacloud_Polardbx20200202::Client::modifyParameter(shared_ptr<ModifyParameterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyParameterWithOptions(request, runtime);
}

ModifySecurityIpsResponse Alibabacloud_Polardbx20200202::Client::modifySecurityIpsWithOptions(shared_ptr<ModifySecurityIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("GroupName", *request->groupName));
  query->insert(pair<string, string>("ModifyMode", *request->modifyMode));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("SecurityIPList", *request->securityIPList));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifySecurityIps"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifySecurityIpsResponse(callApi(params, req, runtime));
}

ModifySecurityIpsResponse Alibabacloud_Polardbx20200202::Client::modifySecurityIps(shared_ptr<ModifySecurityIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySecurityIpsWithOptions(request, runtime);
}

ReleaseInstancePublicConnectionResponse Alibabacloud_Polardbx20200202::Client::releaseInstancePublicConnectionWithOptions(shared_ptr<ReleaseInstancePublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CurrentConnectionString", *request->currentConnectionString));
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseInstancePublicConnection"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReleaseInstancePublicConnectionResponse(callApi(params, req, runtime));
}

ReleaseInstancePublicConnectionResponse Alibabacloud_Polardbx20200202::Client::releaseInstancePublicConnection(shared_ptr<ReleaseInstancePublicConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseInstancePublicConnectionWithOptions(request, runtime);
}

RestartDBInstanceResponse Alibabacloud_Polardbx20200202::Client::restartDBInstanceWithOptions(shared_ptr<RestartDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestartDBInstance"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RestartDBInstanceResponse(callApi(params, req, runtime));
}

RestartDBInstanceResponse Alibabacloud_Polardbx20200202::Client::restartDBInstance(shared_ptr<RestartDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restartDBInstanceWithOptions(request, runtime);
}

UpdateBackupPolicyResponse Alibabacloud_Polardbx20200202::Client::updateBackupPolicyWithOptions(shared_ptr<UpdateBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("BackupPeriod", *request->backupPeriod));
  query->insert(pair<string, string>("BackupPlanBegin", *request->backupPlanBegin));
  query->insert(pair<string, long>("BackupSetRetention", *request->backupSetRetention));
  query->insert(pair<string, string>("BackupType", *request->backupType));
  query->insert(pair<string, string>("BackupWay", *request->backupWay));
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, long>("ForceCleanOnHighSpaceUsage", *request->forceCleanOnHighSpaceUsage));
  query->insert(pair<string, long>("IsEnabled", *request->isEnabled));
  query->insert(pair<string, long>("LocalLogRetention", *request->localLogRetention));
  query->insert(pair<string, long>("LogLocalRetentionSpace", *request->logLocalRetentionSpace));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, long>("RemoveLogRetention", *request->removeLogRetention));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateBackupPolicy"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateBackupPolicyResponse(callApi(params, req, runtime));
}

UpdateBackupPolicyResponse Alibabacloud_Polardbx20200202::Client::updateBackupPolicy(shared_ptr<UpdateBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateBackupPolicyWithOptions(request, runtime);
}

UpdateDBInstanceSSLResponse Alibabacloud_Polardbx20200202::Client::updateDBInstanceSSLWithOptions(shared_ptr<UpdateDBInstanceSSLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CertCommonName", *request->certCommonName));
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, bool>("EnableSSL", *request->enableSSL));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDBInstanceSSL"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDBInstanceSSLResponse(callApi(params, req, runtime));
}

UpdateDBInstanceSSLResponse Alibabacloud_Polardbx20200202::Client::updateDBInstanceSSL(shared_ptr<UpdateDBInstanceSSLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDBInstanceSSLWithOptions(request, runtime);
}

UpdateDBInstanceTDEResponse Alibabacloud_Polardbx20200202::Client::updateDBInstanceTDEWithOptions(shared_ptr<UpdateDBInstanceTDERequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("EncryptionKey", *request->encryptionKey));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("RoleArn", *request->roleArn));
  query->insert(pair<string, long>("TDEStatus", *request->TDEStatus));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDBInstanceTDE"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDBInstanceTDEResponse(callApi(params, req, runtime));
}

UpdateDBInstanceTDEResponse Alibabacloud_Polardbx20200202::Client::updateDBInstanceTDE(shared_ptr<UpdateDBInstanceTDERequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDBInstanceTDEWithOptions(request, runtime);
}

UpdatePolarDBXInstanceNodeResponse Alibabacloud_Polardbx20200202::Client::updatePolarDBXInstanceNodeWithOptions(shared_ptr<UpdatePolarDBXInstanceNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("DbInstanceNodeCount", *request->dbInstanceNodeCount));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePolarDBXInstanceNode"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePolarDBXInstanceNodeResponse(callApi(params, req, runtime));
}

UpdatePolarDBXInstanceNodeResponse Alibabacloud_Polardbx20200202::Client::updatePolarDBXInstanceNode(shared_ptr<UpdatePolarDBXInstanceNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePolarDBXInstanceNodeWithOptions(request, runtime);
}

UpgradeDBInstanceKernelVersionResponse Alibabacloud_Polardbx20200202::Client::upgradeDBInstanceKernelVersionWithOptions(shared_ptr<UpgradeDBInstanceKernelVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeDBInstanceKernelVersion"))},
    {"version", boost::any(string("2020-02-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpgradeDBInstanceKernelVersionResponse(callApi(params, req, runtime));
}

UpgradeDBInstanceKernelVersionResponse Alibabacloud_Polardbx20200202::Client::upgradeDBInstanceKernelVersion(shared_ptr<UpgradeDBInstanceKernelVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeDBInstanceKernelVersionWithOptions(request, runtime);
}

