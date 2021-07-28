// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/rds_20140815.hpp>
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

using namespace Alibabacloud_Rds20140815;

Alibabacloud_Rds20140815::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-qingdao", "rds.aliyuncs.com"},
    {"cn-beijing", "rds.aliyuncs.com"},
    {"cn-hangzhou", "rds.aliyuncs.com"},
    {"cn-shanghai", "rds.aliyuncs.com"},
    {"cn-shenzhen", "rds.aliyuncs.com"},
    {"cn-heyuan", "rds.aliyuncs.com"},
    {"cn-hongkong", "rds.aliyuncs.com"},
    {"ap-southeast-1", "rds.aliyuncs.com"},
    {"us-west-1", "rds.aliyuncs.com"},
    {"us-east-1", "rds.aliyuncs.com"},
    {"cn-shanghai-finance-1", "rds.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "rds.aliyuncs.com"},
    {"cn-north-2-gov-1", "rds.aliyuncs.com"},
    {"ap-northeast-2-pop", "rds.aliyuncs.com"},
    {"cn-beijing-finance-1", "rds.aliyuncs.com"},
    {"cn-beijing-finance-pop", "rds.aliyuncs.com"},
    {"cn-beijing-gov-1", "rds.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "rds.aliyuncs.com"},
    {"cn-edge-1", "rds.aliyuncs.com"},
    {"cn-fujian", "rds.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "rds.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "rds.aliyuncs.com"},
    {"cn-hangzhou-finance", "rds.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "rds.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "rds.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "rds.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "rds.aliyuncs.com"},
    {"cn-hangzhou-test-306", "rds.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "rds.aliyuncs.com"},
    {"cn-qingdao-nebula", "rds.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "rds.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "rds.aliyuncs.com"},
    {"cn-shanghai-inner", "rds.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "rds.aliyuncs.com"},
    {"cn-shenzhen-inner", "rds.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "rds.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "rds.aliyuncs.com"},
    {"cn-wuhan", "rds.aliyuncs.com"},
    {"cn-yushanfang", "rds.aliyuncs.com"},
    {"cn-zhangbei", "rds.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "rds.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "rds.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "rds.aliyuncs.com"},
    {"eu-west-1-oxs", "rds.aliyuncs.com"},
    {"rus-west-1-pop", "rds.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("rds"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Rds20140815::Client::getEndpoint(shared_ptr<string> productId,
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

AddTagsToResourceResponse Alibabacloud_Rds20140815::Client::addTagsToResourceWithOptions(shared_ptr<AddTagsToResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("proxyId", *request->proxyId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("Tags", *request->tags));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddTagsToResource"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddTagsToResourceResponse(callApi(params, req, runtime));
}

AddTagsToResourceResponse Alibabacloud_Rds20140815::Client::addTagsToResource(shared_ptr<AddTagsToResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addTagsToResourceWithOptions(request, runtime);
}

AllocateInstancePublicConnectionResponse Alibabacloud_Rds20140815::Client::allocateInstancePublicConnectionWithOptions(shared_ptr<AllocateInstancePublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("ConnectionStringPrefix", *request->connectionStringPrefix));
  query->insert(pair<string, string>("Port", *request->port));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AllocateInstancePublicConnection"))},
    {"version", boost::any(string("2014-08-15"))},
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

AllocateInstancePublicConnectionResponse Alibabacloud_Rds20140815::Client::allocateInstancePublicConnection(shared_ptr<AllocateInstancePublicConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return allocateInstancePublicConnectionWithOptions(request, runtime);
}

AllocateReadWriteSplittingConnectionResponse Alibabacloud_Rds20140815::Client::allocateReadWriteSplittingConnectionWithOptions(shared_ptr<AllocateReadWriteSplittingConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("ConnectionStringPrefix", *request->connectionStringPrefix));
  query->insert(pair<string, string>("Port", *request->port));
  query->insert(pair<string, string>("MaxDelayTime", *request->maxDelayTime));
  query->insert(pair<string, string>("NetType", *request->netType));
  query->insert(pair<string, string>("DistributionType", *request->distributionType));
  query->insert(pair<string, string>("Weight", *request->weight));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AllocateReadWriteSplittingConnection"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AllocateReadWriteSplittingConnectionResponse(callApi(params, req, runtime));
}

AllocateReadWriteSplittingConnectionResponse Alibabacloud_Rds20140815::Client::allocateReadWriteSplittingConnection(shared_ptr<AllocateReadWriteSplittingConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return allocateReadWriteSplittingConnectionWithOptions(request, runtime);
}

CalculateDBInstanceWeightResponse Alibabacloud_Rds20140815::Client::calculateDBInstanceWeightWithOptions(shared_ptr<CalculateDBInstanceWeightRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CalculateDBInstanceWeight"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CalculateDBInstanceWeightResponse(callApi(params, req, runtime));
}

CalculateDBInstanceWeightResponse Alibabacloud_Rds20140815::Client::calculateDBInstanceWeight(shared_ptr<CalculateDBInstanceWeightRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return calculateDBInstanceWeightWithOptions(request, runtime);
}

CancelImportResponse Alibabacloud_Rds20140815::Client::cancelImportWithOptions(shared_ptr<CancelImportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, long>("ImportId", *request->importId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelImport"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelImportResponse(callApi(params, req, runtime));
}

CancelImportResponse Alibabacloud_Rds20140815::Client::cancelImport(shared_ptr<CancelImportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelImportWithOptions(request, runtime);
}

CheckAccountNameAvailableResponse Alibabacloud_Rds20140815::Client::checkAccountNameAvailableWithOptions(shared_ptr<CheckAccountNameAvailableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("AccountName", *request->accountName));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckAccountNameAvailable"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckAccountNameAvailableResponse(callApi(params, req, runtime));
}

CheckAccountNameAvailableResponse Alibabacloud_Rds20140815::Client::checkAccountNameAvailable(shared_ptr<CheckAccountNameAvailableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkAccountNameAvailableWithOptions(request, runtime);
}

CheckCloudResourceAuthorizedResponse Alibabacloud_Rds20140815::Client::checkCloudResourceAuthorizedWithOptions(shared_ptr<CheckCloudResourceAuthorizedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("TargetRegionId", *request->targetRegionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckCloudResourceAuthorized"))},
    {"version", boost::any(string("2014-08-15"))},
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

CheckCloudResourceAuthorizedResponse Alibabacloud_Rds20140815::Client::checkCloudResourceAuthorized(shared_ptr<CheckCloudResourceAuthorizedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkCloudResourceAuthorizedWithOptions(request, runtime);
}

CheckCreateDdrDBInstanceResponse Alibabacloud_Rds20140815::Client::checkCreateDdrDBInstanceWithOptions(shared_ptr<CheckCreateDdrDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("Engine", *request->engine));
  query->insert(pair<string, string>("EngineVersion", *request->engineVersion));
  query->insert(pair<string, string>("DBInstanceClass", *request->DBInstanceClass));
  query->insert(pair<string, long>("DBInstanceStorage", *request->DBInstanceStorage));
  query->insert(pair<string, string>("RestoreType", *request->restoreType));
  query->insert(pair<string, string>("BackupSetId", *request->backupSetId));
  query->insert(pair<string, string>("RestoreTime", *request->restoreTime));
  query->insert(pair<string, string>("SourceRegion", *request->sourceRegion));
  query->insert(pair<string, string>("SourceDBInstanceName", *request->sourceDBInstanceName));
  query->insert(pair<string, string>("BinlogName", *request->binlogName));
  query->insert(pair<string, string>("BinlogPosition", *request->binlogPosition));
  query->insert(pair<string, string>("BinlogRole", *request->binlogRole));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckCreateDdrDBInstance"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckCreateDdrDBInstanceResponse(callApi(params, req, runtime));
}

CheckCreateDdrDBInstanceResponse Alibabacloud_Rds20140815::Client::checkCreateDdrDBInstance(shared_ptr<CheckCreateDdrDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkCreateDdrDBInstanceWithOptions(request, runtime);
}

CheckDBNameAvailableResponse Alibabacloud_Rds20140815::Client::checkDBNameAvailableWithOptions(shared_ptr<CheckDBNameAvailableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("DBName", *request->DBName));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckDBNameAvailable"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckDBNameAvailableResponse(callApi(params, req, runtime));
}

CheckDBNameAvailableResponse Alibabacloud_Rds20140815::Client::checkDBNameAvailable(shared_ptr<CheckDBNameAvailableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkDBNameAvailableWithOptions(request, runtime);
}

CheckInstanceExistResponse Alibabacloud_Rds20140815::Client::checkInstanceExistWithOptions(shared_ptr<CheckInstanceExistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckInstanceExist"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckInstanceExistResponse(callApi(params, req, runtime));
}

CheckInstanceExistResponse Alibabacloud_Rds20140815::Client::checkInstanceExist(shared_ptr<CheckInstanceExistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkInstanceExistWithOptions(request, runtime);
}

ClearDedicatedHostResponse Alibabacloud_Rds20140815::Client::clearDedicatedHostWithOptions(shared_ptr<ClearDedicatedHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("DedicatedHostId", *request->dedicatedHostId));
  query->insert(pair<string, string>("FailoverMode", *request->failoverMode));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ClearDedicatedHost"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ClearDedicatedHostResponse(callApi(params, req, runtime));
}

ClearDedicatedHostResponse Alibabacloud_Rds20140815::Client::clearDedicatedHost(shared_ptr<ClearDedicatedHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return clearDedicatedHostWithOptions(request, runtime);
}

CloneDBInstanceResponse Alibabacloud_Rds20140815::Client::cloneDBInstanceWithOptions(shared_ptr<CloneDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ZoneId", *request->zoneId));
  query->insert(pair<string, string>("DBInstanceClass", *request->DBInstanceClass));
  query->insert(pair<string, long>("DBInstanceStorage", *request->DBInstanceStorage));
  query->insert(pair<string, string>("DbNames", *request->dbNames));
  query->insert(pair<string, string>("PayType", *request->payType));
  query->insert(pair<string, string>("InstanceNetworkType", *request->instanceNetworkType));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("BackupId", *request->backupId));
  query->insert(pair<string, string>("RestoreTime", *request->restoreTime));
  query->insert(pair<string, string>("VPCId", *request->VPCId));
  query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  query->insert(pair<string, string>("PrivateIpAddress", *request->privateIpAddress));
  query->insert(pair<string, long>("UsedTime", *request->usedTime));
  query->insert(pair<string, string>("Period", *request->period));
  query->insert(pair<string, string>("Category", *request->category));
  query->insert(pair<string, string>("DBInstanceStorageType", *request->DBInstanceStorageType));
  query->insert(pair<string, string>("RestoreTable", *request->restoreTable));
  query->insert(pair<string, string>("TableMeta", *request->tableMeta));
  query->insert(pair<string, string>("DedicatedHostGroupId", *request->dedicatedHostGroupId));
  query->insert(pair<string, string>("BackupType", *request->backupType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloneDBInstance"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloneDBInstanceResponse(callApi(params, req, runtime));
}

CloneDBInstanceResponse Alibabacloud_Rds20140815::Client::cloneDBInstance(shared_ptr<CloneDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cloneDBInstanceWithOptions(request, runtime);
}

CloneParameterGroupResponse Alibabacloud_Rds20140815::Client::cloneParameterGroupWithOptions(shared_ptr<CloneParameterGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("TargetRegionId", *request->targetRegionId));
  query->insert(pair<string, string>("ParameterGroupId", *request->parameterGroupId));
  query->insert(pair<string, string>("ParameterGroupName", *request->parameterGroupName));
  query->insert(pair<string, string>("ParameterGroupDesc", *request->parameterGroupDesc));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloneParameterGroup"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloneParameterGroupResponse(callApi(params, req, runtime));
}

CloneParameterGroupResponse Alibabacloud_Rds20140815::Client::cloneParameterGroup(shared_ptr<CloneParameterGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cloneParameterGroupWithOptions(request, runtime);
}

CopyDatabaseResponse Alibabacloud_Rds20140815::Client::copyDatabaseWithOptions(shared_ptr<CopyDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CopyDatabase"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CopyDatabaseResponse(callApi(params, req, runtime));
}

CopyDatabaseResponse Alibabacloud_Rds20140815::Client::copyDatabase(shared_ptr<CopyDatabaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return copyDatabaseWithOptions(request, runtime);
}

CopyDatabaseBetweenInstancesResponse Alibabacloud_Rds20140815::Client::copyDatabaseBetweenInstancesWithOptions(shared_ptr<CopyDatabaseBetweenInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("TargetDBInstanceId", *request->targetDBInstanceId));
  query->insert(pair<string, string>("DbNames", *request->dbNames));
  query->insert(pair<string, string>("BackupId", *request->backupId));
  query->insert(pair<string, string>("RestoreTime", *request->restoreTime));
  query->insert(pair<string, string>("SyncUserPrivilege", *request->syncUserPrivilege));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CopyDatabaseBetweenInstances"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CopyDatabaseBetweenInstancesResponse(callApi(params, req, runtime));
}

CopyDatabaseBetweenInstancesResponse Alibabacloud_Rds20140815::Client::copyDatabaseBetweenInstances(shared_ptr<CopyDatabaseBetweenInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return copyDatabaseBetweenInstancesWithOptions(request, runtime);
}

CreateAccountResponse Alibabacloud_Rds20140815::Client::createAccountWithOptions(shared_ptr<CreateAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("AccountName", *request->accountName));
  query->insert(pair<string, string>("AccountPassword", *request->accountPassword));
  query->insert(pair<string, string>("AccountDescription", *request->accountDescription));
  query->insert(pair<string, string>("AccountType", *request->accountType));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAccount"))},
    {"version", boost::any(string("2014-08-15"))},
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

CreateAccountResponse Alibabacloud_Rds20140815::Client::createAccount(shared_ptr<CreateAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAccountWithOptions(request, runtime);
}

CreateBackupResponse Alibabacloud_Rds20140815::Client::createBackupWithOptions(shared_ptr<CreateBackupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("DBName", *request->DBName));
  query->insert(pair<string, string>("BackupStrategy", *request->backupStrategy));
  query->insert(pair<string, string>("BackupMethod", *request->backupMethod));
  query->insert(pair<string, string>("BackupType", *request->backupType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBackup"))},
    {"version", boost::any(string("2014-08-15"))},
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

CreateBackupResponse Alibabacloud_Rds20140815::Client::createBackup(shared_ptr<CreateBackupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBackupWithOptions(request, runtime);
}

CreateDatabaseResponse Alibabacloud_Rds20140815::Client::createDatabaseWithOptions(shared_ptr<CreateDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("DBName", *request->DBName));
  query->insert(pair<string, string>("CharacterSetName", *request->characterSetName));
  query->insert(pair<string, string>("DBDescription", *request->DBDescription));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDatabase"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDatabaseResponse(callApi(params, req, runtime));
}

CreateDatabaseResponse Alibabacloud_Rds20140815::Client::createDatabase(shared_ptr<CreateDatabaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDatabaseWithOptions(request, runtime);
}

CreateDBInstanceResponse Alibabacloud_Rds20140815::Client::createDBInstanceWithOptions(shared_ptr<CreateDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("Engine", *request->engine));
  query->insert(pair<string, string>("EngineVersion", *request->engineVersion));
  query->insert(pair<string, string>("DBInstanceClass", *request->DBInstanceClass));
  query->insert(pair<string, long>("DBInstanceStorage", *request->DBInstanceStorage));
  query->insert(pair<string, string>("SystemDBCharset", *request->systemDBCharset));
  query->insert(pair<string, string>("DBInstanceNetType", *request->DBInstanceNetType));
  query->insert(pair<string, string>("DBInstanceDescription", *request->DBInstanceDescription));
  query->insert(pair<string, string>("SecurityIPList", *request->securityIPList));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("PayType", *request->payType));
  query->insert(pair<string, string>("ZoneId", *request->zoneId));
  query->insert(pair<string, string>("ZoneIdSlave1", *request->zoneIdSlave1));
  query->insert(pair<string, string>("ZoneIdSlave2", *request->zoneIdSlave2));
  query->insert(pair<string, string>("InstanceNetworkType", *request->instanceNetworkType));
  query->insert(pair<string, string>("ConnectionMode", *request->connectionMode));
  query->insert(pair<string, string>("VPCId", *request->VPCId));
  query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  query->insert(pair<string, string>("PrivateIpAddress", *request->privateIpAddress));
  query->insert(pair<string, string>("UsedTime", *request->usedTime));
  query->insert(pair<string, string>("Period", *request->period));
  query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  query->insert(pair<string, string>("DBInstanceStorageType", *request->DBInstanceStorageType));
  query->insert(pair<string, string>("BusinessInfo", *request->businessInfo));
  query->insert(pair<string, string>("EncryptionKey", *request->encryptionKey));
  query->insert(pair<string, string>("RoleARN", *request->roleARN));
  query->insert(pair<string, string>("AutoRenew", *request->autoRenew));
  query->insert(pair<string, string>("Category", *request->category));
  query->insert(pair<string, string>("DedicatedHostGroupId", *request->dedicatedHostGroupId));
  query->insert(pair<string, string>("TargetDedicatedHostIdForMaster", *request->targetDedicatedHostIdForMaster));
  query->insert(pair<string, string>("TargetDedicatedHostIdForSlave", *request->targetDedicatedHostIdForSlave));
  query->insert(pair<string, string>("TargetDedicatedHostIdForLog", *request->targetDedicatedHostIdForLog));
  query->insert(pair<string, string>("DBParamGroupId", *request->DBParamGroupId));
  query->insert(pair<string, string>("DBTimeZone", *request->DBTimeZone));
  query->insert(pair<string, string>("DBIsIgnoreCase", *request->DBIsIgnoreCase));
  query->insert(pair<string, string>("TargetMinorVersion", *request->targetMinorVersion));
  query->insert(pair<string, string>("StorageAutoScale", *request->storageAutoScale));
  query->insert(pair<string, long>("StorageThreshold", *request->storageThreshold));
  query->insert(pair<string, long>("StorageUpperBound", *request->storageUpperBound));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("UserBackupId", *request->userBackupId));
  query->insert(pair<string, vector<CreateDBInstanceRequestTag>>("Tag", *request->tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDBInstance"))},
    {"version", boost::any(string("2014-08-15"))},
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

CreateDBInstanceResponse Alibabacloud_Rds20140815::Client::createDBInstance(shared_ptr<CreateDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDBInstanceWithOptions(request, runtime);
}

CreateDBProxyEndpointAddressResponse Alibabacloud_Rds20140815::Client::createDBProxyEndpointAddressWithOptions(shared_ptr<CreateDBProxyEndpointAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("DBProxyEndpointId", *request->DBProxyEndpointId));
  query->insert(pair<string, string>("ConnectionStringPrefix", *request->connectionStringPrefix));
  query->insert(pair<string, string>("DBProxyNewConnectStringPort", *request->DBProxyNewConnectStringPort));
  query->insert(pair<string, string>("DBProxyConnectStringNetType", *request->DBProxyConnectStringNetType));
  query->insert(pair<string, string>("VPCId", *request->VPCId));
  query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDBProxyEndpointAddress"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDBProxyEndpointAddressResponse(callApi(params, req, runtime));
}

CreateDBProxyEndpointAddressResponse Alibabacloud_Rds20140815::Client::createDBProxyEndpointAddress(shared_ptr<CreateDBProxyEndpointAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDBProxyEndpointAddressWithOptions(request, runtime);
}

CreateDdrInstanceResponse Alibabacloud_Rds20140815::Client::createDdrInstanceWithOptions(shared_ptr<CreateDdrInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("Engine", *request->engine));
  query->insert(pair<string, string>("EngineVersion", *request->engineVersion));
  query->insert(pair<string, string>("DBInstanceClass", *request->DBInstanceClass));
  query->insert(pair<string, long>("DBInstanceStorage", *request->DBInstanceStorage));
  query->insert(pair<string, string>("SystemDBCharset", *request->systemDBCharset));
  query->insert(pair<string, string>("DBInstanceNetType", *request->DBInstanceNetType));
  query->insert(pair<string, string>("DBInstanceDescription", *request->DBInstanceDescription));
  query->insert(pair<string, string>("SecurityIPList", *request->securityIPList));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("PayType", *request->payType));
  query->insert(pair<string, string>("ZoneId", *request->zoneId));
  query->insert(pair<string, string>("InstanceNetworkType", *request->instanceNetworkType));
  query->insert(pair<string, string>("ConnectionMode", *request->connectionMode));
  query->insert(pair<string, string>("VPCId", *request->VPCId));
  query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  query->insert(pair<string, string>("PrivateIpAddress", *request->privateIpAddress));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("UsedTime", *request->usedTime));
  query->insert(pair<string, string>("Period", *request->period));
  query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  query->insert(pair<string, string>("RestoreType", *request->restoreType));
  query->insert(pair<string, string>("BackupSetId", *request->backupSetId));
  query->insert(pair<string, string>("RestoreTime", *request->restoreTime));
  query->insert(pair<string, string>("SourceRegion", *request->sourceRegion));
  query->insert(pair<string, string>("SourceDBInstanceName", *request->sourceDBInstanceName));
  query->insert(pair<string, string>("DBInstanceStorageType", *request->DBInstanceStorageType));
  query->insert(pair<string, string>("BinlogName", *request->binlogName));
  query->insert(pair<string, string>("BinlogPosition", *request->binlogPosition));
  query->insert(pair<string, string>("BinlogRole", *request->binlogRole));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDdrInstance"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDdrInstanceResponse(callApi(params, req, runtime));
}

CreateDdrInstanceResponse Alibabacloud_Rds20140815::Client::createDdrInstance(shared_ptr<CreateDdrInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDdrInstanceWithOptions(request, runtime);
}

CreateDedicatedHostResponse Alibabacloud_Rds20140815::Client::createDedicatedHostWithOptions(shared_ptr<CreateDedicatedHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("DedicatedHostGroupId", *request->dedicatedHostGroupId));
  query->insert(pair<string, string>("HostName", *request->hostName));
  query->insert(pair<string, string>("ZoneId", *request->zoneId));
  query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  query->insert(pair<string, string>("HostClass", *request->hostClass));
  query->insert(pair<string, string>("PayType", *request->payType));
  query->insert(pair<string, string>("Period", *request->period));
  query->insert(pair<string, string>("UsedTime", *request->usedTime));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("AutoRenew", *request->autoRenew));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDedicatedHost"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDedicatedHostResponse(callApi(params, req, runtime));
}

CreateDedicatedHostResponse Alibabacloud_Rds20140815::Client::createDedicatedHost(shared_ptr<CreateDedicatedHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDedicatedHostWithOptions(request, runtime);
}

CreateDedicatedHostAccountResponse Alibabacloud_Rds20140815::Client::createDedicatedHostAccountWithOptions(shared_ptr<CreateDedicatedHostAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DedicatedHostId", *request->dedicatedHostId));
  query->insert(pair<string, string>("AccountName", *request->accountName));
  query->insert(pair<string, string>("AccountPassword", *request->accountPassword));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDedicatedHostAccount"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDedicatedHostAccountResponse(callApi(params, req, runtime));
}

CreateDedicatedHostAccountResponse Alibabacloud_Rds20140815::Client::createDedicatedHostAccount(shared_ptr<CreateDedicatedHostAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDedicatedHostAccountWithOptions(request, runtime);
}

CreateDedicatedHostGroupResponse Alibabacloud_Rds20140815::Client::createDedicatedHostGroupWithOptions(shared_ptr<CreateDedicatedHostGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("Engine", *request->engine));
  query->insert(pair<string, long>("CpuAllocationRatio", *request->cpuAllocationRatio));
  query->insert(pair<string, long>("MemAllocationRatio", *request->memAllocationRatio));
  query->insert(pair<string, long>("DiskAllocationRatio", *request->diskAllocationRatio));
  query->insert(pair<string, string>("AllocationPolicy", *request->allocationPolicy));
  query->insert(pair<string, string>("VPCId", *request->VPCId));
  query->insert(pair<string, string>("HostReplacePolicy", *request->hostReplacePolicy));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, long>("OpenPermission", *request->openPermission));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDedicatedHostGroup"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDedicatedHostGroupResponse(callApi(params, req, runtime));
}

CreateDedicatedHostGroupResponse Alibabacloud_Rds20140815::Client::createDedicatedHostGroup(shared_ptr<CreateDedicatedHostGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDedicatedHostGroupWithOptions(request, runtime);
}

CreateDedicatedHostUserResponse Alibabacloud_Rds20140815::Client::createDedicatedHostUserWithOptions(shared_ptr<CreateDedicatedHostUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DedicatedHostName", *request->dedicatedHostName));
  query->insert(pair<string, string>("UserName", *request->userName));
  query->insert(pair<string, string>("UserPassword", *request->userPassword));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDedicatedHostUser"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDedicatedHostUserResponse(callApi(params, req, runtime));
}

CreateDedicatedHostUserResponse Alibabacloud_Rds20140815::Client::createDedicatedHostUser(shared_ptr<CreateDedicatedHostUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDedicatedHostUserWithOptions(request, runtime);
}

CreateDiagnosticReportResponse Alibabacloud_Rds20140815::Client::createDiagnosticReportWithOptions(shared_ptr<CreateDiagnosticReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDiagnosticReport"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDiagnosticReportResponse(callApi(params, req, runtime));
}

CreateDiagnosticReportResponse Alibabacloud_Rds20140815::Client::createDiagnosticReport(shared_ptr<CreateDiagnosticReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDiagnosticReportWithOptions(request, runtime);
}

CreateGdnInstanceResponse Alibabacloud_Rds20140815::Client::createGdnInstanceWithOptions(shared_ptr<CreateGdnInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("PrimaryInstanceName", *request->primaryInstanceName));
  query->insert(pair<string, string>("PrimaryInstanceRegion", *request->primaryInstanceRegion));
  query->insert(pair<string, string>("Description", *request->description));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGdnInstance"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGdnInstanceResponse(callApi(params, req, runtime));
}

CreateGdnInstanceResponse Alibabacloud_Rds20140815::Client::createGdnInstance(shared_ptr<CreateGdnInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGdnInstanceWithOptions(request, runtime);
}

CreateMigrateTaskResponse Alibabacloud_Rds20140815::Client::createMigrateTaskWithOptions(shared_ptr<CreateMigrateTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("DBName", *request->DBName));
  query->insert(pair<string, string>("BackupMode", *request->backupMode));
  query->insert(pair<string, string>("IsOnlineDB", *request->isOnlineDB));
  query->insert(pair<string, string>("CheckDBMode", *request->checkDBMode));
  query->insert(pair<string, string>("OssObjectPositions", *request->ossObjectPositions));
  query->insert(pair<string, string>("OSSUrls", *request->OSSUrls));
  query->insert(pair<string, string>("MigrateTaskId", *request->migrateTaskId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMigrateTask"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMigrateTaskResponse(callApi(params, req, runtime));
}

CreateMigrateTaskResponse Alibabacloud_Rds20140815::Client::createMigrateTask(shared_ptr<CreateMigrateTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMigrateTaskWithOptions(request, runtime);
}

CreateMigrateTaskForSQLServerResponse Alibabacloud_Rds20140815::Client::createMigrateTaskForSQLServerWithOptions(shared_ptr<CreateMigrateTaskForSQLServerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("DBName", *request->DBName));
  query->insert(pair<string, string>("TaskType", *request->taskType));
  query->insert(pair<string, string>("IsOnlineDB", *request->isOnlineDB));
  query->insert(pair<string, string>("OSSUrls", *request->OSSUrls));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMigrateTaskForSQLServer"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMigrateTaskForSQLServerResponse(callApi(params, req, runtime));
}

CreateMigrateTaskForSQLServerResponse Alibabacloud_Rds20140815::Client::createMigrateTaskForSQLServer(shared_ptr<CreateMigrateTaskForSQLServerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMigrateTaskForSQLServerWithOptions(request, runtime);
}

CreateOnlineDatabaseTaskResponse Alibabacloud_Rds20140815::Client::createOnlineDatabaseTaskWithOptions(shared_ptr<CreateOnlineDatabaseTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("DBName", *request->DBName));
  query->insert(pair<string, string>("MigrateTaskId", *request->migrateTaskId));
  query->insert(pair<string, string>("CheckDBMode", *request->checkDBMode));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOnlineDatabaseTask"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOnlineDatabaseTaskResponse(callApi(params, req, runtime));
}

CreateOnlineDatabaseTaskResponse Alibabacloud_Rds20140815::Client::createOnlineDatabaseTask(shared_ptr<CreateOnlineDatabaseTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOnlineDatabaseTaskWithOptions(request, runtime);
}

CreateParameterGroupResponse Alibabacloud_Rds20140815::Client::createParameterGroupWithOptions(shared_ptr<CreateParameterGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ParameterGroupName", *request->parameterGroupName));
  query->insert(pair<string, string>("Engine", *request->engine));
  query->insert(pair<string, string>("EngineVersion", *request->engineVersion));
  query->insert(pair<string, string>("Parameters", *request->parameters));
  query->insert(pair<string, string>("ParameterGroupDesc", *request->parameterGroupDesc));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateParameterGroup"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateParameterGroupResponse(callApi(params, req, runtime));
}

CreateParameterGroupResponse Alibabacloud_Rds20140815::Client::createParameterGroup(shared_ptr<CreateParameterGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createParameterGroupWithOptions(request, runtime);
}

CreateReadOnlyDBInstanceResponse Alibabacloud_Rds20140815::Client::createReadOnlyDBInstanceWithOptions(shared_ptr<CreateReadOnlyDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ZoneId", *request->zoneId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("DBInstanceClass", *request->DBInstanceClass));
  query->insert(pair<string, long>("DBInstanceStorage", *request->DBInstanceStorage));
  query->insert(pair<string, string>("EngineVersion", *request->engineVersion));
  query->insert(pair<string, string>("PayType", *request->payType));
  query->insert(pair<string, string>("DBInstanceDescription", *request->DBInstanceDescription));
  query->insert(pair<string, string>("InstanceNetworkType", *request->instanceNetworkType));
  query->insert(pair<string, string>("VPCId", *request->VPCId));
  query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  query->insert(pair<string, string>("PrivateIpAddress", *request->privateIpAddress));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  query->insert(pair<string, string>("Category", *request->category));
  query->insert(pair<string, string>("DBInstanceStorageType", *request->DBInstanceStorageType));
  query->insert(pair<string, string>("DedicatedHostGroupId", *request->dedicatedHostGroupId));
  query->insert(pair<string, string>("TargetDedicatedHostIdForMaster", *request->targetDedicatedHostIdForMaster));
  query->insert(pair<string, string>("GdnInstanceName", *request->gdnInstanceName));
  query->insert(pair<string, string>("TddlBizType", *request->tddlBizType));
  query->insert(pair<string, string>("TddlRegionConfig", *request->tddlRegionConfig));
  query->insert(pair<string, string>("InstructionSetArch", *request->instructionSetArch));
  query->insert(pair<string, string>("UsedTime", *request->usedTime));
  query->insert(pair<string, string>("Period", *request->period));
  query->insert(pair<string, string>("AutoRenew", *request->autoRenew));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateReadOnlyDBInstance"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateReadOnlyDBInstanceResponse(callApi(params, req, runtime));
}

CreateReadOnlyDBInstanceResponse Alibabacloud_Rds20140815::Client::createReadOnlyDBInstance(shared_ptr<CreateReadOnlyDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createReadOnlyDBInstanceWithOptions(request, runtime);
}

CreateTempDBInstanceResponse Alibabacloud_Rds20140815::Client::createTempDBInstanceWithOptions(shared_ptr<CreateTempDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, long>("BackupId", *request->backupId));
  query->insert(pair<string, string>("RestoreTime", *request->restoreTime));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTempDBInstance"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTempDBInstanceResponse(callApi(params, req, runtime));
}

CreateTempDBInstanceResponse Alibabacloud_Rds20140815::Client::createTempDBInstance(shared_ptr<CreateTempDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTempDBInstanceWithOptions(request, runtime);
}

DeleteAccountResponse Alibabacloud_Rds20140815::Client::deleteAccountWithOptions(shared_ptr<DeleteAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("AccountName", *request->accountName));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAccount"))},
    {"version", boost::any(string("2014-08-15"))},
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

DeleteAccountResponse Alibabacloud_Rds20140815::Client::deleteAccount(shared_ptr<DeleteAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAccountWithOptions(request, runtime);
}

DeleteBackupResponse Alibabacloud_Rds20140815::Client::deleteBackupWithOptions(shared_ptr<DeleteBackupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("BackupId", *request->backupId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBackup"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteBackupResponse(callApi(params, req, runtime));
}

DeleteBackupResponse Alibabacloud_Rds20140815::Client::deleteBackup(shared_ptr<DeleteBackupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBackupWithOptions(request, runtime);
}

DeleteBackupFileResponse Alibabacloud_Rds20140815::Client::deleteBackupFileWithOptions(shared_ptr<DeleteBackupFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("BackupId", *request->backupId));
  query->insert(pair<string, string>("DBName", *request->DBName));
  query->insert(pair<string, string>("BackupTime", *request->backupTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBackupFile"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteBackupFileResponse(callApi(params, req, runtime));
}

DeleteBackupFileResponse Alibabacloud_Rds20140815::Client::deleteBackupFile(shared_ptr<DeleteBackupFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBackupFileWithOptions(request, runtime);
}

DeleteDatabaseResponse Alibabacloud_Rds20140815::Client::deleteDatabaseWithOptions(shared_ptr<DeleteDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("DBName", *request->DBName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDatabase"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDatabaseResponse(callApi(params, req, runtime));
}

DeleteDatabaseResponse Alibabacloud_Rds20140815::Client::deleteDatabase(shared_ptr<DeleteDatabaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDatabaseWithOptions(request, runtime);
}

DeleteDBInstanceResponse Alibabacloud_Rds20140815::Client::deleteDBInstanceWithOptions(shared_ptr<DeleteDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("ReleasedKeepPolicy", *request->releasedKeepPolicy));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDBInstance"))},
    {"version", boost::any(string("2014-08-15"))},
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

DeleteDBInstanceResponse Alibabacloud_Rds20140815::Client::deleteDBInstance(shared_ptr<DeleteDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDBInstanceWithOptions(request, runtime);
}

DeleteDBProxyEndpointAddressResponse Alibabacloud_Rds20140815::Client::deleteDBProxyEndpointAddressWithOptions(shared_ptr<DeleteDBProxyEndpointAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("DBProxyEndpointId", *request->DBProxyEndpointId));
  query->insert(pair<string, string>("DBProxyConnectStringNetType", *request->DBProxyConnectStringNetType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDBProxyEndpointAddress"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDBProxyEndpointAddressResponse(callApi(params, req, runtime));
}

DeleteDBProxyEndpointAddressResponse Alibabacloud_Rds20140815::Client::deleteDBProxyEndpointAddress(shared_ptr<DeleteDBProxyEndpointAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDBProxyEndpointAddressWithOptions(request, runtime);
}

DeleteDedicatedHostAccountResponse Alibabacloud_Rds20140815::Client::deleteDedicatedHostAccountWithOptions(shared_ptr<DeleteDedicatedHostAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DedicatedHostId", *request->dedicatedHostId));
  query->insert(pair<string, string>("AccountName", *request->accountName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDedicatedHostAccount"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDedicatedHostAccountResponse(callApi(params, req, runtime));
}

DeleteDedicatedHostAccountResponse Alibabacloud_Rds20140815::Client::deleteDedicatedHostAccount(shared_ptr<DeleteDedicatedHostAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDedicatedHostAccountWithOptions(request, runtime);
}

DeleteDedicatedHostGroupResponse Alibabacloud_Rds20140815::Client::deleteDedicatedHostGroupWithOptions(shared_ptr<DeleteDedicatedHostGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DedicatedHostGroupId", *request->dedicatedHostGroupId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDedicatedHostGroup"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDedicatedHostGroupResponse(callApi(params, req, runtime));
}

DeleteDedicatedHostGroupResponse Alibabacloud_Rds20140815::Client::deleteDedicatedHostGroup(shared_ptr<DeleteDedicatedHostGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDedicatedHostGroupWithOptions(request, runtime);
}

DeleteParameterGroupResponse Alibabacloud_Rds20140815::Client::deleteParameterGroupWithOptions(shared_ptr<DeleteParameterGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ParameterGroupId", *request->parameterGroupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteParameterGroup"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteParameterGroupResponse(callApi(params, req, runtime));
}

DeleteParameterGroupResponse Alibabacloud_Rds20140815::Client::deleteParameterGroup(shared_ptr<DeleteParameterGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteParameterGroupWithOptions(request, runtime);
}

DeleteUserBackupFileResponse Alibabacloud_Rds20140815::Client::deleteUserBackupFileWithOptions(shared_ptr<DeleteUserBackupFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("BackupId", *request->backupId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUserBackupFile"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteUserBackupFileResponse(callApi(params, req, runtime));
}

DeleteUserBackupFileResponse Alibabacloud_Rds20140815::Client::deleteUserBackupFile(shared_ptr<DeleteUserBackupFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUserBackupFileWithOptions(request, runtime);
}

DescibeImportsFromDatabaseResponse Alibabacloud_Rds20140815::Client::descibeImportsFromDatabaseWithOptions(shared_ptr<DescibeImportsFromDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("Engine", *request->engine));
  query->insert(pair<string, long>("ImportId", *request->importId));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescibeImportsFromDatabase"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescibeImportsFromDatabaseResponse(callApi(params, req, runtime));
}

DescibeImportsFromDatabaseResponse Alibabacloud_Rds20140815::Client::descibeImportsFromDatabase(shared_ptr<DescibeImportsFromDatabaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return descibeImportsFromDatabaseWithOptions(request, runtime);
}

DescribeAccountsResponse Alibabacloud_Rds20140815::Client::describeAccountsWithOptions(shared_ptr<DescribeAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("AccountName", *request->accountName));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAccounts"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAccountsResponse(callApi(params, req, runtime));
}

DescribeAccountsResponse Alibabacloud_Rds20140815::Client::describeAccounts(shared_ptr<DescribeAccountsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAccountsWithOptions(request, runtime);
}

DescribeActionEventPolicyResponse Alibabacloud_Rds20140815::Client::describeActionEventPolicyWithOptions(shared_ptr<DescribeActionEventPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeActionEventPolicy"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeActionEventPolicyResponse(callApi(params, req, runtime));
}

DescribeActionEventPolicyResponse Alibabacloud_Rds20140815::Client::describeActionEventPolicy(shared_ptr<DescribeActionEventPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeActionEventPolicyWithOptions(request, runtime);
}

DescribeAvailableClassesResponse Alibabacloud_Rds20140815::Client::describeAvailableClassesWithOptions(shared_ptr<DescribeAvailableClassesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ZoneId", *request->zoneId));
  query->insert(pair<string, string>("InstanceChargeType", *request->instanceChargeType));
  query->insert(pair<string, string>("Engine", *request->engine));
  query->insert(pair<string, string>("EngineVersion", *request->engineVersion));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("OrderType", *request->orderType));
  query->insert(pair<string, string>("DBInstanceStorageType", *request->DBInstanceStorageType));
  query->insert(pair<string, string>("Category", *request->category));
  query->insert(pair<string, string>("CommodityCode", *request->commodityCode));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAvailableClasses"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAvailableClassesResponse(callApi(params, req, runtime));
}

DescribeAvailableClassesResponse Alibabacloud_Rds20140815::Client::describeAvailableClasses(shared_ptr<DescribeAvailableClassesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvailableClassesWithOptions(request, runtime);
}

DescribeAvailableCrossRegionResponse Alibabacloud_Rds20140815::Client::describeAvailableCrossRegionWithOptions(shared_ptr<DescribeAvailableCrossRegionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAvailableCrossRegion"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAvailableCrossRegionResponse(callApi(params, req, runtime));
}

DescribeAvailableCrossRegionResponse Alibabacloud_Rds20140815::Client::describeAvailableCrossRegion(shared_ptr<DescribeAvailableCrossRegionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvailableCrossRegionWithOptions(request, runtime);
}

DescribeAvailableDedicatedHostClassesResponse Alibabacloud_Rds20140815::Client::describeAvailableDedicatedHostClassesWithOptions(shared_ptr<DescribeAvailableDedicatedHostClassesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ZoneId", *request->zoneId));
  query->insert(pair<string, string>("StorageType", *request->storageType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAvailableDedicatedHostClasses"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAvailableDedicatedHostClassesResponse(callApi(params, req, runtime));
}

DescribeAvailableDedicatedHostClassesResponse Alibabacloud_Rds20140815::Client::describeAvailableDedicatedHostClasses(shared_ptr<DescribeAvailableDedicatedHostClassesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvailableDedicatedHostClassesWithOptions(request, runtime);
}

DescribeAvailableDedicatedHostZonesResponse Alibabacloud_Rds20140815::Client::describeAvailableDedicatedHostZonesWithOptions(shared_ptr<DescribeAvailableDedicatedHostZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAvailableDedicatedHostZones"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAvailableDedicatedHostZonesResponse(callApi(params, req, runtime));
}

DescribeAvailableDedicatedHostZonesResponse Alibabacloud_Rds20140815::Client::describeAvailableDedicatedHostZones(shared_ptr<DescribeAvailableDedicatedHostZonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvailableDedicatedHostZonesWithOptions(request, runtime);
}

DescribeAvailableRecoveryTimeResponse Alibabacloud_Rds20140815::Client::describeAvailableRecoveryTimeWithOptions(shared_ptr<DescribeAvailableRecoveryTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, long>("CrossBackupId", *request->crossBackupId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAvailableRecoveryTime"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAvailableRecoveryTimeResponse(callApi(params, req, runtime));
}

DescribeAvailableRecoveryTimeResponse Alibabacloud_Rds20140815::Client::describeAvailableRecoveryTime(shared_ptr<DescribeAvailableRecoveryTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvailableRecoveryTimeWithOptions(request, runtime);
}

DescribeAvailableResourceResponse Alibabacloud_Rds20140815::Client::describeAvailableResourceWithOptions(shared_ptr<DescribeAvailableResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ZoneId", *request->zoneId));
  query->insert(pair<string, string>("InstanceChargeType", *request->instanceChargeType));
  query->insert(pair<string, string>("Engine", *request->engine));
  query->insert(pair<string, string>("EngineVersion", *request->engineVersion));
  query->insert(pair<string, string>("DBInstanceClass", *request->DBInstanceClass));
  query->insert(pair<string, string>("OrderType", *request->orderType));
  query->insert(pair<string, string>("DBInstanceStorageType", *request->DBInstanceStorageType));
  query->insert(pair<string, string>("Category", *request->category));
  query->insert(pair<string, long>("DispenseMode", *request->dispenseMode));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAvailableResource"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAvailableResourceResponse(callApi(params, req, runtime));
}

DescribeAvailableResourceResponse Alibabacloud_Rds20140815::Client::describeAvailableResource(shared_ptr<DescribeAvailableResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvailableResourceWithOptions(request, runtime);
}

DescribeAvailableZonesResponse Alibabacloud_Rds20140815::Client::describeAvailableZonesWithOptions(shared_ptr<DescribeAvailableZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("Engine", *request->engine));
  query->insert(pair<string, string>("ZoneId", *request->zoneId));
  query->insert(pair<string, string>("EngineVersion", *request->engineVersion));
  query->insert(pair<string, string>("CommodityCode", *request->commodityCode));
  query->insert(pair<string, string>("DispenseMode", *request->dispenseMode));
  query->insert(pair<string, string>("DBInstanceName", *request->DBInstanceName));
  query->insert(pair<string, string>("Category", *request->category));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAvailableZones"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAvailableZonesResponse(callApi(params, req, runtime));
}

DescribeAvailableZonesResponse Alibabacloud_Rds20140815::Client::describeAvailableZones(shared_ptr<DescribeAvailableZonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvailableZonesWithOptions(request, runtime);
}

DescribeBackupDatabaseResponse Alibabacloud_Rds20140815::Client::describeBackupDatabaseWithOptions(shared_ptr<DescribeBackupDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("BackupId", *request->backupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackupDatabase"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBackupDatabaseResponse(callApi(params, req, runtime));
}

DescribeBackupDatabaseResponse Alibabacloud_Rds20140815::Client::describeBackupDatabase(shared_ptr<DescribeBackupDatabaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupDatabaseWithOptions(request, runtime);
}

DescribeBackupPolicyResponse Alibabacloud_Rds20140815::Client::describeBackupPolicyWithOptions(shared_ptr<DescribeBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("BackupPolicyMode", *request->backupPolicyMode));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("CompressType", *request->compressType));
  query->insert(pair<string, string>("ReleasedKeepPolicy", *request->releasedKeepPolicy));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackupPolicy"))},
    {"version", boost::any(string("2014-08-15"))},
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

DescribeBackupPolicyResponse Alibabacloud_Rds20140815::Client::describeBackupPolicy(shared_ptr<DescribeBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupPolicyWithOptions(request, runtime);
}

DescribeBackupsResponse Alibabacloud_Rds20140815::Client::describeBackupsWithOptions(shared_ptr<DescribeBackupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("BackupId", *request->backupId));
  query->insert(pair<string, string>("BackupStatus", *request->backupStatus));
  query->insert(pair<string, string>("BackupMode", *request->backupMode));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackups"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBackupsResponse(callApi(params, req, runtime));
}

DescribeBackupsResponse Alibabacloud_Rds20140815::Client::describeBackups(shared_ptr<DescribeBackupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupsWithOptions(request, runtime);
}

DescribeBackupTasksResponse Alibabacloud_Rds20140815::Client::describeBackupTasksWithOptions(shared_ptr<DescribeBackupTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("Flag", *request->flag));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, long>("BackupJobId", *request->backupJobId));
  query->insert(pair<string, string>("BackupMode", *request->backupMode));
  query->insert(pair<string, string>("BackupJobStatus", *request->backupJobStatus));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackupTasks"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBackupTasksResponse(callApi(params, req, runtime));
}

DescribeBackupTasksResponse Alibabacloud_Rds20140815::Client::describeBackupTasks(shared_ptr<DescribeBackupTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupTasksWithOptions(request, runtime);
}

DescribeBinlogFilesResponse Alibabacloud_Rds20140815::Client::describeBinlogFilesWithOptions(shared_ptr<DescribeBinlogFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBinlogFiles"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBinlogFilesResponse(callApi(params, req, runtime));
}

DescribeBinlogFilesResponse Alibabacloud_Rds20140815::Client::describeBinlogFiles(shared_ptr<DescribeBinlogFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBinlogFilesWithOptions(request, runtime);
}

DescribeCharacterSetNameResponse Alibabacloud_Rds20140815::Client::describeCharacterSetNameWithOptions(shared_ptr<DescribeCharacterSetNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("Engine", *request->engine));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCharacterSetName"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCharacterSetNameResponse(callApi(params, req, runtime));
}

DescribeCharacterSetNameResponse Alibabacloud_Rds20140815::Client::describeCharacterSetName(shared_ptr<DescribeCharacterSetNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCharacterSetNameWithOptions(request, runtime);
}

DescribeCollationTimeZonesResponse Alibabacloud_Rds20140815::Client::describeCollationTimeZonesWithOptions(shared_ptr<DescribeCollationTimeZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCollationTimeZones"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCollationTimeZonesResponse(callApi(params, req, runtime));
}

DescribeCollationTimeZonesResponse Alibabacloud_Rds20140815::Client::describeCollationTimeZones(shared_ptr<DescribeCollationTimeZonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCollationTimeZonesWithOptions(request, runtime);
}

DescribeCrossBackupMetaListResponse Alibabacloud_Rds20140815::Client::describeCrossBackupMetaListWithOptions(shared_ptr<DescribeCrossBackupMetaListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("BackupSetId", *request->backupSetId));
  query->insert(pair<string, string>("GetDbName", *request->getDbName));
  query->insert(pair<string, string>("Pattern", *request->pattern));
  query->insert(pair<string, string>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("PageIndex", *request->pageIndex));
  query->insert(pair<string, string>("Region", *request->region));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCrossBackupMetaList"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCrossBackupMetaListResponse(callApi(params, req, runtime));
}

DescribeCrossBackupMetaListResponse Alibabacloud_Rds20140815::Client::describeCrossBackupMetaList(shared_ptr<DescribeCrossBackupMetaListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCrossBackupMetaListWithOptions(request, runtime);
}

DescribeCrossRegionBackupDBInstanceResponse Alibabacloud_Rds20140815::Client::describeCrossRegionBackupDBInstanceWithOptions(shared_ptr<DescribeCrossRegionBackupDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCrossRegionBackupDBInstance"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCrossRegionBackupDBInstanceResponse(callApi(params, req, runtime));
}

DescribeCrossRegionBackupDBInstanceResponse Alibabacloud_Rds20140815::Client::describeCrossRegionBackupDBInstance(shared_ptr<DescribeCrossRegionBackupDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCrossRegionBackupDBInstanceWithOptions(request, runtime);
}

DescribeCrossRegionBackupsResponse Alibabacloud_Rds20140815::Client::describeCrossRegionBackupsWithOptions(shared_ptr<DescribeCrossRegionBackupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("CrossBackupRegion", *request->crossBackupRegion));
  query->insert(pair<string, long>("CrossBackupId", *request->crossBackupId));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("BackupId", *request->backupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCrossRegionBackups"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCrossRegionBackupsResponse(callApi(params, req, runtime));
}

DescribeCrossRegionBackupsResponse Alibabacloud_Rds20140815::Client::describeCrossRegionBackups(shared_ptr<DescribeCrossRegionBackupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCrossRegionBackupsWithOptions(request, runtime);
}

DescribeCrossRegionLogBackupFilesResponse Alibabacloud_Rds20140815::Client::describeCrossRegionLogBackupFilesWithOptions(shared_ptr<DescribeCrossRegionLogBackupFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("CrossBackupRegion", *request->crossBackupRegion));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCrossRegionLogBackupFiles"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCrossRegionLogBackupFilesResponse(callApi(params, req, runtime));
}

DescribeCrossRegionLogBackupFilesResponse Alibabacloud_Rds20140815::Client::describeCrossRegionLogBackupFiles(shared_ptr<DescribeCrossRegionLogBackupFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCrossRegionLogBackupFilesWithOptions(request, runtime);
}

DescribeDatabasesResponse Alibabacloud_Rds20140815::Client::describeDatabasesWithOptions(shared_ptr<DescribeDatabasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("DBName", *request->DBName));
  query->insert(pair<string, string>("DBStatus", *request->DBStatus));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDatabases"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDatabasesResponse(callApi(params, req, runtime));
}

DescribeDatabasesResponse Alibabacloud_Rds20140815::Client::describeDatabases(shared_ptr<DescribeDatabasesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDatabasesWithOptions(request, runtime);
}

DescribeDBInstanceAttributeResponse Alibabacloud_Rds20140815::Client::describeDBInstanceAttributeWithOptions(shared_ptr<DescribeDBInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("Expired", *request->expired));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBInstanceAttribute"))},
    {"version", boost::any(string("2014-08-15"))},
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

DescribeDBInstanceAttributeResponse Alibabacloud_Rds20140815::Client::describeDBInstanceAttribute(shared_ptr<DescribeDBInstanceAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceAttributeWithOptions(request, runtime);
}

DescribeDBInstanceDetailResponse Alibabacloud_Rds20140815::Client::describeDBInstanceDetailWithOptions(shared_ptr<DescribeDBInstanceDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBInstanceDetail"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBInstanceDetailResponse(callApi(params, req, runtime));
}

DescribeDBInstanceDetailResponse Alibabacloud_Rds20140815::Client::describeDBInstanceDetail(shared_ptr<DescribeDBInstanceDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceDetailWithOptions(request, runtime);
}

DescribeDBInstanceEncryptionKeyResponse Alibabacloud_Rds20140815::Client::describeDBInstanceEncryptionKeyWithOptions(shared_ptr<DescribeDBInstanceEncryptionKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("EncryptionKey", *request->encryptionKey));
  query->insert(pair<string, string>("TargetRegionId", *request->targetRegionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBInstanceEncryptionKey"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBInstanceEncryptionKeyResponse(callApi(params, req, runtime));
}

DescribeDBInstanceEncryptionKeyResponse Alibabacloud_Rds20140815::Client::describeDBInstanceEncryptionKey(shared_ptr<DescribeDBInstanceEncryptionKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceEncryptionKeyWithOptions(request, runtime);
}

DescribeDBInstanceHAConfigResponse Alibabacloud_Rds20140815::Client::describeDBInstanceHAConfigWithOptions(shared_ptr<DescribeDBInstanceHAConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBInstanceHAConfig"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBInstanceHAConfigResponse(callApi(params, req, runtime));
}

DescribeDBInstanceHAConfigResponse Alibabacloud_Rds20140815::Client::describeDBInstanceHAConfig(shared_ptr<DescribeDBInstanceHAConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceHAConfigWithOptions(request, runtime);
}

DescribeDBInstanceIPArrayListResponse Alibabacloud_Rds20140815::Client::describeDBInstanceIPArrayListWithOptions(shared_ptr<DescribeDBInstanceIPArrayListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("WhitelistNetworkType", *request->whitelistNetworkType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBInstanceIPArrayList"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBInstanceIPArrayListResponse(callApi(params, req, runtime));
}

DescribeDBInstanceIPArrayListResponse Alibabacloud_Rds20140815::Client::describeDBInstanceIPArrayList(shared_ptr<DescribeDBInstanceIPArrayListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceIPArrayListWithOptions(request, runtime);
}

DescribeDBInstanceIpHostnameResponse Alibabacloud_Rds20140815::Client::describeDBInstanceIpHostnameWithOptions(shared_ptr<DescribeDBInstanceIpHostnameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBInstanceIpHostname"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBInstanceIpHostnameResponse(callApi(params, req, runtime));
}

DescribeDBInstanceIpHostnameResponse Alibabacloud_Rds20140815::Client::describeDBInstanceIpHostname(shared_ptr<DescribeDBInstanceIpHostnameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceIpHostnameWithOptions(request, runtime);
}

DescribeDBInstanceMonitorResponse Alibabacloud_Rds20140815::Client::describeDBInstanceMonitorWithOptions(shared_ptr<DescribeDBInstanceMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBInstanceMonitor"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBInstanceMonitorResponse(callApi(params, req, runtime));
}

DescribeDBInstanceMonitorResponse Alibabacloud_Rds20140815::Client::describeDBInstanceMonitor(shared_ptr<DescribeDBInstanceMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceMonitorWithOptions(request, runtime);
}

DescribeDBInstanceNetInfoResponse Alibabacloud_Rds20140815::Client::describeDBInstanceNetInfoWithOptions(shared_ptr<DescribeDBInstanceNetInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, long>("Flag", *request->flag));
  query->insert(pair<string, string>("DBInstanceNetRWSplitType", *request->DBInstanceNetRWSplitType));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBInstanceNetInfo"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBInstanceNetInfoResponse(callApi(params, req, runtime));
}

DescribeDBInstanceNetInfoResponse Alibabacloud_Rds20140815::Client::describeDBInstanceNetInfo(shared_ptr<DescribeDBInstanceNetInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceNetInfoWithOptions(request, runtime);
}

DescribeDBInstancePerformanceResponse Alibabacloud_Rds20140815::Client::describeDBInstancePerformanceWithOptions(shared_ptr<DescribeDBInstancePerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("Key", *request->key));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBInstancePerformance"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBInstancePerformanceResponse(callApi(params, req, runtime));
}

DescribeDBInstancePerformanceResponse Alibabacloud_Rds20140815::Client::describeDBInstancePerformance(shared_ptr<DescribeDBInstancePerformanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstancePerformanceWithOptions(request, runtime);
}

DescribeDBInstanceProxyConfigurationResponse Alibabacloud_Rds20140815::Client::describeDBInstanceProxyConfigurationWithOptions(shared_ptr<DescribeDBInstanceProxyConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBInstanceProxyConfiguration"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBInstanceProxyConfigurationResponse(callApi(params, req, runtime));
}

DescribeDBInstanceProxyConfigurationResponse Alibabacloud_Rds20140815::Client::describeDBInstanceProxyConfiguration(shared_ptr<DescribeDBInstanceProxyConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceProxyConfigurationWithOptions(request, runtime);
}

DescribeDBInstancesResponse Alibabacloud_Rds20140815::Client::describeDBInstancesWithOptions(shared_ptr<DescribeDBInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("proxyId", *request->proxyId));
  query->insert(pair<string, string>("Engine", *request->engine));
  query->insert(pair<string, string>("ZoneId", *request->zoneId));
  query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  query->insert(pair<string, string>("DBInstanceStatus", *request->DBInstanceStatus));
  query->insert(pair<string, string>("Expired", *request->expired));
  query->insert(pair<string, string>("SearchKey", *request->searchKey));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("DBInstanceType", *request->DBInstanceType));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, string>("InstanceNetworkType", *request->instanceNetworkType));
  query->insert(pair<string, string>("VpcId", *request->vpcId));
  query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  query->insert(pair<string, string>("DBInstanceClass", *request->DBInstanceClass));
  query->insert(pair<string, string>("EngineVersion", *request->engineVersion));
  query->insert(pair<string, string>("PayType", *request->payType));
  query->insert(pair<string, string>("ConnectionMode", *request->connectionMode));
  query->insert(pair<string, string>("Tags", *request->tags));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("DedicatedHostGroupId", *request->dedicatedHostGroupId));
  query->insert(pair<string, string>("DedicatedHostId", *request->dedicatedHostId));
  query->insert(pair<string, long>("InstanceLevel", *request->instanceLevel));
  query->insert(pair<string, string>("ConnectionString", *request->connectionString));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBInstances"))},
    {"version", boost::any(string("2014-08-15"))},
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

DescribeDBInstancesResponse Alibabacloud_Rds20140815::Client::describeDBInstances(shared_ptr<DescribeDBInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstancesWithOptions(request, runtime);
}

DescribeDBInstancesAsCsvResponse Alibabacloud_Rds20140815::Client::describeDBInstancesAsCsvWithOptions(shared_ptr<DescribeDBInstancesAsCsvRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBInstancesAsCsv"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBInstancesAsCsvResponse(callApi(params, req, runtime));
}

DescribeDBInstancesAsCsvResponse Alibabacloud_Rds20140815::Client::describeDBInstancesAsCsv(shared_ptr<DescribeDBInstancesAsCsvRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstancesAsCsvWithOptions(request, runtime);
}

DescribeDBInstancesByExpireTimeResponse Alibabacloud_Rds20140815::Client::describeDBInstancesByExpireTimeWithOptions(shared_ptr<DescribeDBInstancesByExpireTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("proxyId", *request->proxyId));
  query->insert(pair<string, long>("ExpirePeriod", *request->expirePeriod));
  query->insert(pair<string, bool>("Expired", *request->expired));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, string>("Tags", *request->tags));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBInstancesByExpireTime"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBInstancesByExpireTimeResponse(callApi(params, req, runtime));
}

DescribeDBInstancesByExpireTimeResponse Alibabacloud_Rds20140815::Client::describeDBInstancesByExpireTime(shared_ptr<DescribeDBInstancesByExpireTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstancesByExpireTimeWithOptions(request, runtime);
}

DescribeDBInstancesByPerformanceResponse Alibabacloud_Rds20140815::Client::describeDBInstancesByPerformanceWithOptions(shared_ptr<DescribeDBInstancesByPerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("proxyId", *request->proxyId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, string>("SortMethod", *request->sortMethod));
  query->insert(pair<string, string>("SortKey", *request->sortKey));
  query->insert(pair<string, string>("Tags", *request->tags));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBInstancesByPerformance"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBInstancesByPerformanceResponse(callApi(params, req, runtime));
}

DescribeDBInstancesByPerformanceResponse Alibabacloud_Rds20140815::Client::describeDBInstancesByPerformance(shared_ptr<DescribeDBInstancesByPerformanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstancesByPerformanceWithOptions(request, runtime);
}

DescribeDBInstancesForCloneResponse Alibabacloud_Rds20140815::Client::describeDBInstancesForCloneWithOptions(shared_ptr<DescribeDBInstancesForCloneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("proxyId", *request->proxyId));
  query->insert(pair<string, string>("Engine", *request->engine));
  query->insert(pair<string, string>("ZoneId", *request->zoneId));
  query->insert(pair<string, string>("DBInstanceStatus", *request->DBInstanceStatus));
  query->insert(pair<string, string>("Expired", *request->expired));
  query->insert(pair<string, string>("SearchKey", *request->searchKey));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("DBInstanceType", *request->DBInstanceType));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, string>("InstanceNetworkType", *request->instanceNetworkType));
  query->insert(pair<string, string>("VpcId", *request->vpcId));
  query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  query->insert(pair<string, string>("DBInstanceClass", *request->DBInstanceClass));
  query->insert(pair<string, string>("EngineVersion", *request->engineVersion));
  query->insert(pair<string, string>("NodeType", *request->nodeType));
  query->insert(pair<string, string>("PayType", *request->payType));
  query->insert(pair<string, string>("ConnectionMode", *request->connectionMode));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("CurrentInstanceId", *request->currentInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBInstancesForClone"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBInstancesForCloneResponse(callApi(params, req, runtime));
}

DescribeDBInstancesForCloneResponse Alibabacloud_Rds20140815::Client::describeDBInstancesForClone(shared_ptr<DescribeDBInstancesForCloneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstancesForCloneWithOptions(request, runtime);
}

DescribeDBInstanceSSLResponse Alibabacloud_Rds20140815::Client::describeDBInstanceSSLWithOptions(shared_ptr<DescribeDBInstanceSSLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBInstanceSSL"))},
    {"version", boost::any(string("2014-08-15"))},
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

DescribeDBInstanceSSLResponse Alibabacloud_Rds20140815::Client::describeDBInstanceSSL(shared_ptr<DescribeDBInstanceSSLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceSSLWithOptions(request, runtime);
}

DescribeDBInstanceStatusResponse Alibabacloud_Rds20140815::Client::describeDBInstanceStatusWithOptions(shared_ptr<DescribeDBInstanceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBInstanceStatus"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBInstanceStatusResponse(callApi(params, req, runtime));
}

DescribeDBInstanceStatusResponse Alibabacloud_Rds20140815::Client::describeDBInstanceStatus(shared_ptr<DescribeDBInstanceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceStatusWithOptions(request, runtime);
}

DescribeDBInstanceTDEResponse Alibabacloud_Rds20140815::Client::describeDBInstanceTDEWithOptions(shared_ptr<DescribeDBInstanceTDERequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBInstanceTDE"))},
    {"version", boost::any(string("2014-08-15"))},
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

DescribeDBInstanceTDEResponse Alibabacloud_Rds20140815::Client::describeDBInstanceTDE(shared_ptr<DescribeDBInstanceTDERequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBInstanceTDEWithOptions(request, runtime);
}

DescribeDBProxyResponse Alibabacloud_Rds20140815::Client::describeDBProxyWithOptions(shared_ptr<DescribeDBProxyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBProxy"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBProxyResponse(callApi(params, req, runtime));
}

DescribeDBProxyResponse Alibabacloud_Rds20140815::Client::describeDBProxy(shared_ptr<DescribeDBProxyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBProxyWithOptions(request, runtime);
}

DescribeDBProxyEndpointResponse Alibabacloud_Rds20140815::Client::describeDBProxyEndpointWithOptions(shared_ptr<DescribeDBProxyEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("DBProxyEndpointId", *request->DBProxyEndpointId));
  query->insert(pair<string, string>("DBProxyConnectString", *request->DBProxyConnectString));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBProxyEndpoint"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBProxyEndpointResponse(callApi(params, req, runtime));
}

DescribeDBProxyEndpointResponse Alibabacloud_Rds20140815::Client::describeDBProxyEndpoint(shared_ptr<DescribeDBProxyEndpointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBProxyEndpointWithOptions(request, runtime);
}

DescribeDBProxyPerformanceResponse Alibabacloud_Rds20140815::Client::describeDBProxyPerformanceWithOptions(shared_ptr<DescribeDBProxyPerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("DBProxyInstanceType", *request->DBProxyInstanceType));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("MetricsName", *request->metricsName));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDBProxyPerformance"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDBProxyPerformanceResponse(callApi(params, req, runtime));
}

DescribeDBProxyPerformanceResponse Alibabacloud_Rds20140815::Client::describeDBProxyPerformance(shared_ptr<DescribeDBProxyPerformanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDBProxyPerformanceWithOptions(request, runtime);
}

DescribeDedicatedHostAttributeResponse Alibabacloud_Rds20140815::Client::describeDedicatedHostAttributeWithOptions(shared_ptr<DescribeDedicatedHostAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("DedicatedHostId", *request->dedicatedHostId));
  query->insert(pair<string, string>("DedicatedHostGroupId", *request->dedicatedHostGroupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDedicatedHostAttribute"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDedicatedHostAttributeResponse(callApi(params, req, runtime));
}

DescribeDedicatedHostAttributeResponse Alibabacloud_Rds20140815::Client::describeDedicatedHostAttribute(shared_ptr<DescribeDedicatedHostAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDedicatedHostAttributeWithOptions(request, runtime);
}

DescribeDedicatedHostGroupsResponse Alibabacloud_Rds20140815::Client::describeDedicatedHostGroupsWithOptions(shared_ptr<DescribeDedicatedHostGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("DedicatedHostGroupId", *request->dedicatedHostGroupId));
  query->insert(pair<string, string>("ImageCategory", *request->imageCategory));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDedicatedHostGroups"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDedicatedHostGroupsResponse(callApi(params, req, runtime));
}

DescribeDedicatedHostGroupsResponse Alibabacloud_Rds20140815::Client::describeDedicatedHostGroups(shared_ptr<DescribeDedicatedHostGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDedicatedHostGroupsWithOptions(request, runtime);
}

DescribeDedicatedHostImageCategoriesResponse Alibabacloud_Rds20140815::Client::describeDedicatedHostImageCategoriesWithOptions(shared_ptr<DescribeDedicatedHostImageCategoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("HostGroup", *request->hostGroup));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDedicatedHostImageCategories"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDedicatedHostImageCategoriesResponse(callApi(params, req, runtime));
}

DescribeDedicatedHostImageCategoriesResponse Alibabacloud_Rds20140815::Client::describeDedicatedHostImageCategories(shared_ptr<DescribeDedicatedHostImageCategoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDedicatedHostImageCategoriesWithOptions(request, runtime);
}

DescribeDedicatedHostsResponse Alibabacloud_Rds20140815::Client::describeDedicatedHostsWithOptions(shared_ptr<DescribeDedicatedHostsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("DedicatedHostGroupId", *request->dedicatedHostGroupId));
  query->insert(pair<string, long>("OrderId", *request->orderId));
  query->insert(pair<string, string>("HostType", *request->hostType));
  query->insert(pair<string, string>("HostStatus", *request->hostStatus));
  query->insert(pair<string, string>("AllocationStatus", *request->allocationStatus));
  query->insert(pair<string, string>("ZoneId", *request->zoneId));
  query->insert(pair<string, string>("DedicatedHostId", *request->dedicatedHostId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDedicatedHosts"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDedicatedHostsResponse(callApi(params, req, runtime));
}

DescribeDedicatedHostsResponse Alibabacloud_Rds20140815::Client::describeDedicatedHosts(shared_ptr<DescribeDedicatedHostsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDedicatedHostsWithOptions(request, runtime);
}

DescribeDetachedBackupsResponse Alibabacloud_Rds20140815::Client::describeDetachedBackupsWithOptions(shared_ptr<DescribeDetachedBackupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("BackupId", *request->backupId));
  query->insert(pair<string, string>("BackupStatus", *request->backupStatus));
  query->insert(pair<string, string>("BackupMode", *request->backupMode));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, string>("Region", *request->region));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDetachedBackups"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDetachedBackupsResponse(callApi(params, req, runtime));
}

DescribeDetachedBackupsResponse Alibabacloud_Rds20140815::Client::describeDetachedBackups(shared_ptr<DescribeDetachedBackupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDetachedBackupsWithOptions(request, runtime);
}

DescribeDiagnosticReportListResponse Alibabacloud_Rds20140815::Client::describeDiagnosticReportListWithOptions(shared_ptr<DescribeDiagnosticReportListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDiagnosticReportList"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDiagnosticReportListResponse(callApi(params, req, runtime));
}

DescribeDiagnosticReportListResponse Alibabacloud_Rds20140815::Client::describeDiagnosticReportList(shared_ptr<DescribeDiagnosticReportListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDiagnosticReportListWithOptions(request, runtime);
}

DescribeDTCSecurityIpHostsForSQLServerResponse Alibabacloud_Rds20140815::Client::describeDTCSecurityIpHostsForSQLServerWithOptions(shared_ptr<DescribeDTCSecurityIpHostsForSQLServerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDTCSecurityIpHostsForSQLServer"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDTCSecurityIpHostsForSQLServerResponse(callApi(params, req, runtime));
}

DescribeDTCSecurityIpHostsForSQLServerResponse Alibabacloud_Rds20140815::Client::describeDTCSecurityIpHostsForSQLServer(shared_ptr<DescribeDTCSecurityIpHostsForSQLServerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDTCSecurityIpHostsForSQLServerWithOptions(request, runtime);
}

DescribeErrorLogsResponse Alibabacloud_Rds20140815::Client::describeErrorLogsWithOptions(shared_ptr<DescribeErrorLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeErrorLogs"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeErrorLogsResponse(callApi(params, req, runtime));
}

DescribeErrorLogsResponse Alibabacloud_Rds20140815::Client::describeErrorLogs(shared_ptr<DescribeErrorLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeErrorLogsWithOptions(request, runtime);
}

DescribeEventsResponse Alibabacloud_Rds20140815::Client::describeEventsWithOptions(shared_ptr<DescribeEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEvents"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEventsResponse(callApi(params, req, runtime));
}

DescribeEventsResponse Alibabacloud_Rds20140815::Client::describeEvents(shared_ptr<DescribeEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEventsWithOptions(request, runtime);
}

DescribeHADiagnoseConfigResponse Alibabacloud_Rds20140815::Client::describeHADiagnoseConfigWithOptions(shared_ptr<DescribeHADiagnoseConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHADiagnoseConfig"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHADiagnoseConfigResponse(callApi(params, req, runtime));
}

DescribeHADiagnoseConfigResponse Alibabacloud_Rds20140815::Client::describeHADiagnoseConfig(shared_ptr<DescribeHADiagnoseConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHADiagnoseConfigWithOptions(request, runtime);
}

DescribeHASwitchConfigResponse Alibabacloud_Rds20140815::Client::describeHASwitchConfigWithOptions(shared_ptr<DescribeHASwitchConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHASwitchConfig"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHASwitchConfigResponse(callApi(params, req, runtime));
}

DescribeHASwitchConfigResponse Alibabacloud_Rds20140815::Client::describeHASwitchConfig(shared_ptr<DescribeHASwitchConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHASwitchConfigWithOptions(request, runtime);
}

DescribeInstanceAutoRenewalAttributeResponse Alibabacloud_Rds20140815::Client::describeInstanceAutoRenewalAttributeWithOptions(shared_ptr<DescribeInstanceAutoRenewalAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("proxyId", *request->proxyId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceAutoRenewalAttribute"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceAutoRenewalAttributeResponse(callApi(params, req, runtime));
}

DescribeInstanceAutoRenewalAttributeResponse Alibabacloud_Rds20140815::Client::describeInstanceAutoRenewalAttribute(shared_ptr<DescribeInstanceAutoRenewalAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceAutoRenewalAttributeWithOptions(request, runtime);
}

DescribeInstanceCrossBackupPolicyResponse Alibabacloud_Rds20140815::Client::describeInstanceCrossBackupPolicyWithOptions(shared_ptr<DescribeInstanceCrossBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceCrossBackupPolicy"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceCrossBackupPolicyResponse(callApi(params, req, runtime));
}

DescribeInstanceCrossBackupPolicyResponse Alibabacloud_Rds20140815::Client::describeInstanceCrossBackupPolicy(shared_ptr<DescribeInstanceCrossBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceCrossBackupPolicyWithOptions(request, runtime);
}

DescribeInstanceKeywordsResponse Alibabacloud_Rds20140815::Client::describeInstanceKeywordsWithOptions(shared_ptr<DescribeInstanceKeywordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("Key", *request->key));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceKeywords"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceKeywordsResponse(callApi(params, req, runtime));
}

DescribeInstanceKeywordsResponse Alibabacloud_Rds20140815::Client::describeInstanceKeywords(shared_ptr<DescribeInstanceKeywordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceKeywordsWithOptions(request, runtime);
}

DescribeLocalAvailableRecoveryTimeResponse Alibabacloud_Rds20140815::Client::describeLocalAvailableRecoveryTimeWithOptions(shared_ptr<DescribeLocalAvailableRecoveryTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("Region", *request->region));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLocalAvailableRecoveryTime"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLocalAvailableRecoveryTimeResponse(callApi(params, req, runtime));
}

DescribeLocalAvailableRecoveryTimeResponse Alibabacloud_Rds20140815::Client::describeLocalAvailableRecoveryTime(shared_ptr<DescribeLocalAvailableRecoveryTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLocalAvailableRecoveryTimeWithOptions(request, runtime);
}

DescribeLogBackupFilesResponse Alibabacloud_Rds20140815::Client::describeLogBackupFilesWithOptions(shared_ptr<DescribeLogBackupFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLogBackupFiles"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLogBackupFilesResponse(callApi(params, req, runtime));
}

DescribeLogBackupFilesResponse Alibabacloud_Rds20140815::Client::describeLogBackupFiles(shared_ptr<DescribeLogBackupFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLogBackupFilesWithOptions(request, runtime);
}

DescribeMetaListResponse Alibabacloud_Rds20140815::Client::describeMetaListWithOptions(shared_ptr<DescribeMetaListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("RestoreType", *request->restoreType));
  query->insert(pair<string, long>("BackupSetID", *request->backupSetID));
  query->insert(pair<string, string>("RestoreTime", *request->restoreTime));
  query->insert(pair<string, string>("GetDbName", *request->getDbName));
  query->insert(pair<string, string>("Pattern", *request->pattern));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, long>("PageIndex", *request->pageIndex));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMetaList"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMetaListResponse(callApi(params, req, runtime));
}

DescribeMetaListResponse Alibabacloud_Rds20140815::Client::describeMetaList(shared_ptr<DescribeMetaListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMetaListWithOptions(request, runtime);
}

DescribeMigrateTaskByIdResponse Alibabacloud_Rds20140815::Client::describeMigrateTaskByIdWithOptions(shared_ptr<DescribeMigrateTaskByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("MigrateTaskId", *request->migrateTaskId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMigrateTaskById"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMigrateTaskByIdResponse(callApi(params, req, runtime));
}

DescribeMigrateTaskByIdResponse Alibabacloud_Rds20140815::Client::describeMigrateTaskById(shared_ptr<DescribeMigrateTaskByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMigrateTaskByIdWithOptions(request, runtime);
}

DescribeMigrateTasksResponse Alibabacloud_Rds20140815::Client::describeMigrateTasksWithOptions(shared_ptr<DescribeMigrateTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMigrateTasks"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMigrateTasksResponse(callApi(params, req, runtime));
}

DescribeMigrateTasksResponse Alibabacloud_Rds20140815::Client::describeMigrateTasks(shared_ptr<DescribeMigrateTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMigrateTasksWithOptions(request, runtime);
}

DescribeMigrateTasksForSQLServerResponse Alibabacloud_Rds20140815::Client::describeMigrateTasksForSQLServerWithOptions(shared_ptr<DescribeMigrateTasksForSQLServerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMigrateTasksForSQLServer"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMigrateTasksForSQLServerResponse(callApi(params, req, runtime));
}

DescribeMigrateTasksForSQLServerResponse Alibabacloud_Rds20140815::Client::describeMigrateTasksForSQLServer(shared_ptr<DescribeMigrateTasksForSQLServerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMigrateTasksForSQLServerWithOptions(request, runtime);
}

DescribeModifyParameterLogResponse Alibabacloud_Rds20140815::Client::describeModifyParameterLogWithOptions(shared_ptr<DescribeModifyParameterLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeModifyParameterLog"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeModifyParameterLogResponse(callApi(params, req, runtime));
}

DescribeModifyParameterLogResponse Alibabacloud_Rds20140815::Client::describeModifyParameterLog(shared_ptr<DescribeModifyParameterLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeModifyParameterLogWithOptions(request, runtime);
}

DescribeOssDownloadsResponse Alibabacloud_Rds20140815::Client::describeOssDownloadsWithOptions(shared_ptr<DescribeOssDownloadsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("MigrateTaskId", *request->migrateTaskId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOssDownloads"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOssDownloadsResponse(callApi(params, req, runtime));
}

DescribeOssDownloadsResponse Alibabacloud_Rds20140815::Client::describeOssDownloads(shared_ptr<DescribeOssDownloadsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOssDownloadsWithOptions(request, runtime);
}

DescribeOssDownloadsForSQLServerResponse Alibabacloud_Rds20140815::Client::describeOssDownloadsForSQLServerWithOptions(shared_ptr<DescribeOssDownloadsForSQLServerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("MigrateTaskId", *request->migrateTaskId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOssDownloadsForSQLServer"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOssDownloadsForSQLServerResponse(callApi(params, req, runtime));
}

DescribeOssDownloadsForSQLServerResponse Alibabacloud_Rds20140815::Client::describeOssDownloadsForSQLServer(shared_ptr<DescribeOssDownloadsForSQLServerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOssDownloadsForSQLServerWithOptions(request, runtime);
}

DescribeParameterGroupResponse Alibabacloud_Rds20140815::Client::describeParameterGroupWithOptions(shared_ptr<DescribeParameterGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ParameterGroupId", *request->parameterGroupId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeParameterGroup"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeParameterGroupResponse(callApi(params, req, runtime));
}

DescribeParameterGroupResponse Alibabacloud_Rds20140815::Client::describeParameterGroup(shared_ptr<DescribeParameterGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeParameterGroupWithOptions(request, runtime);
}

DescribeParameterGroupsResponse Alibabacloud_Rds20140815::Client::describeParameterGroupsWithOptions(shared_ptr<DescribeParameterGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeParameterGroups"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeParameterGroupsResponse(callApi(params, req, runtime));
}

DescribeParameterGroupsResponse Alibabacloud_Rds20140815::Client::describeParameterGroups(shared_ptr<DescribeParameterGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeParameterGroupsWithOptions(request, runtime);
}

DescribeParametersResponse Alibabacloud_Rds20140815::Client::describeParametersWithOptions(shared_ptr<DescribeParametersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeParameters"))},
    {"version", boost::any(string("2014-08-15"))},
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

DescribeParametersResponse Alibabacloud_Rds20140815::Client::describeParameters(shared_ptr<DescribeParametersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeParametersWithOptions(request, runtime);
}

DescribeParameterTemplatesResponse Alibabacloud_Rds20140815::Client::describeParameterTemplatesWithOptions(shared_ptr<DescribeParameterTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("Engine", *request->engine));
  query->insert(pair<string, string>("EngineVersion", *request->engineVersion));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("Category", *request->category));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeParameterTemplates"))},
    {"version", boost::any(string("2014-08-15"))},
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

DescribeParameterTemplatesResponse Alibabacloud_Rds20140815::Client::describeParameterTemplates(shared_ptr<DescribeParameterTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeParameterTemplatesWithOptions(request, runtime);
}

DescribePriceResponse Alibabacloud_Rds20140815::Client::describePriceWithOptions(shared_ptr<DescribePriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("CommodityCode", *request->commodityCode));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("Engine", *request->engine));
  query->insert(pair<string, string>("EngineVersion", *request->engineVersion));
  query->insert(pair<string, string>("DBInstanceClass", *request->DBInstanceClass));
  query->insert(pair<string, long>("DBInstanceStorage", *request->DBInstanceStorage));
  query->insert(pair<string, string>("PayType", *request->payType));
  query->insert(pair<string, string>("ZoneId", *request->zoneId));
  query->insert(pair<string, long>("UsedTime", *request->usedTime));
  query->insert(pair<string, string>("TimeType", *request->timeType));
  query->insert(pair<string, long>("Quantity", *request->quantity));
  query->insert(pair<string, long>("InstanceUsedType", *request->instanceUsedType));
  query->insert(pair<string, string>("OrderType", *request->orderType));
  query->insert(pair<string, string>("DBInstanceStorageType", *request->DBInstanceStorageType));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePrice"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePriceResponse(callApi(params, req, runtime));
}

DescribePriceResponse Alibabacloud_Rds20140815::Client::describePrice(shared_ptr<DescribePriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePriceWithOptions(request, runtime);
}

DescribeRdsResourceSettingsResponse Alibabacloud_Rds20140815::Client::describeRdsResourceSettingsWithOptions(shared_ptr<DescribeRdsResourceSettingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ResourceNiche", *request->resourceNiche));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRdsResourceSettings"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRdsResourceSettingsResponse(callApi(params, req, runtime));
}

DescribeRdsResourceSettingsResponse Alibabacloud_Rds20140815::Client::describeRdsResourceSettings(shared_ptr<DescribeRdsResourceSettingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRdsResourceSettingsWithOptions(request, runtime);
}

DescribeReadDBInstanceDelayResponse Alibabacloud_Rds20140815::Client::describeReadDBInstanceDelayWithOptions(shared_ptr<DescribeReadDBInstanceDelayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("ReadInstanceId", *request->readInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeReadDBInstanceDelay"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeReadDBInstanceDelayResponse(callApi(params, req, runtime));
}

DescribeReadDBInstanceDelayResponse Alibabacloud_Rds20140815::Client::describeReadDBInstanceDelay(shared_ptr<DescribeReadDBInstanceDelayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeReadDBInstanceDelayWithOptions(request, runtime);
}

DescribeRegionInfosResponse Alibabacloud_Rds20140815::Client::describeRegionInfosWithOptions(shared_ptr<DescribeRegionInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("InstanceUsedType", *request->instanceUsedType));
  query->insert(pair<string, string>("SpecifyCount", *request->specifyCount));
  query->insert(pair<string, string>("HostType", *request->hostType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegionInfos"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRegionInfosResponse(callApi(params, req, runtime));
}

DescribeRegionInfosResponse Alibabacloud_Rds20140815::Client::describeRegionInfos(shared_ptr<DescribeRegionInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionInfosWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Rds20140815::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2014-08-15"))},
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

DescribeRegionsResponse Alibabacloud_Rds20140815::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeRenewalPriceResponse Alibabacloud_Rds20140815::Client::describeRenewalPriceWithOptions(shared_ptr<DescribeRenewalPriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("PayType", *request->payType));
  query->insert(pair<string, string>("DBInstanceClass", *request->DBInstanceClass));
  query->insert(pair<string, long>("UsedTime", *request->usedTime));
  query->insert(pair<string, string>("TimeType", *request->timeType));
  query->insert(pair<string, long>("Quantity", *request->quantity));
  query->insert(pair<string, string>("OrderType", *request->orderType));
  query->insert(pair<string, string>("BusinessInfo", *request->businessInfo));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRenewalPrice"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRenewalPriceResponse(callApi(params, req, runtime));
}

DescribeRenewalPriceResponse Alibabacloud_Rds20140815::Client::describeRenewalPrice(shared_ptr<DescribeRenewalPriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRenewalPriceWithOptions(request, runtime);
}

DescribeResourceUsageResponse Alibabacloud_Rds20140815::Client::describeResourceUsageWithOptions(shared_ptr<DescribeResourceUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeResourceUsage"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeResourceUsageResponse(callApi(params, req, runtime));
}

DescribeResourceUsageResponse Alibabacloud_Rds20140815::Client::describeResourceUsage(shared_ptr<DescribeResourceUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeResourceUsageWithOptions(request, runtime);
}

DescribeSecurityGroupConfigurationResponse Alibabacloud_Rds20140815::Client::describeSecurityGroupConfigurationWithOptions(shared_ptr<DescribeSecurityGroupConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSecurityGroupConfiguration"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSecurityGroupConfigurationResponse(callApi(params, req, runtime));
}

DescribeSecurityGroupConfigurationResponse Alibabacloud_Rds20140815::Client::describeSecurityGroupConfiguration(shared_ptr<DescribeSecurityGroupConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSecurityGroupConfigurationWithOptions(request, runtime);
}

DescribeSlowLogRecordsResponse Alibabacloud_Rds20140815::Client::describeSlowLogRecordsWithOptions(shared_ptr<DescribeSlowLogRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("SQLHASH", *request->SQLHASH));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, string>("DBName", *request->DBName));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSlowLogRecords"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSlowLogRecordsResponse(callApi(params, req, runtime));
}

DescribeSlowLogRecordsResponse Alibabacloud_Rds20140815::Client::describeSlowLogRecords(shared_ptr<DescribeSlowLogRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSlowLogRecordsWithOptions(request, runtime);
}

DescribeSlowLogsResponse Alibabacloud_Rds20140815::Client::describeSlowLogsWithOptions(shared_ptr<DescribeSlowLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, string>("DBName", *request->DBName));
  query->insert(pair<string, string>("SortKey", *request->sortKey));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSlowLogs"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSlowLogsResponse(callApi(params, req, runtime));
}

DescribeSlowLogsResponse Alibabacloud_Rds20140815::Client::describeSlowLogs(shared_ptr<DescribeSlowLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSlowLogsWithOptions(request, runtime);
}

DescribeSQLCollectorPolicyResponse Alibabacloud_Rds20140815::Client::describeSQLCollectorPolicyWithOptions(shared_ptr<DescribeSQLCollectorPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSQLCollectorPolicy"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSQLCollectorPolicyResponse(callApi(params, req, runtime));
}

DescribeSQLCollectorPolicyResponse Alibabacloud_Rds20140815::Client::describeSQLCollectorPolicy(shared_ptr<DescribeSQLCollectorPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSQLCollectorPolicyWithOptions(request, runtime);
}

DescribeSQLCollectorRetentionResponse Alibabacloud_Rds20140815::Client::describeSQLCollectorRetentionWithOptions(shared_ptr<DescribeSQLCollectorRetentionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSQLCollectorRetention"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSQLCollectorRetentionResponse(callApi(params, req, runtime));
}

DescribeSQLCollectorRetentionResponse Alibabacloud_Rds20140815::Client::describeSQLCollectorRetention(shared_ptr<DescribeSQLCollectorRetentionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSQLCollectorRetentionWithOptions(request, runtime);
}

DescribeSQLLogFilesResponse Alibabacloud_Rds20140815::Client::describeSQLLogFilesWithOptions(shared_ptr<DescribeSQLLogFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("FileName", *request->fileName));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSQLLogFiles"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSQLLogFilesResponse(callApi(params, req, runtime));
}

DescribeSQLLogFilesResponse Alibabacloud_Rds20140815::Client::describeSQLLogFiles(shared_ptr<DescribeSQLLogFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSQLLogFilesWithOptions(request, runtime);
}

DescribeSQLLogRecordsResponse Alibabacloud_Rds20140815::Client::describeSQLLogRecordsWithOptions(shared_ptr<DescribeSQLLogRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, long>("SQLId", *request->SQLId));
  query->insert(pair<string, string>("QueryKeywords", *request->queryKeywords));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("Database", *request->database));
  query->insert(pair<string, string>("User", *request->user));
  query->insert(pair<string, string>("Form", *request->form));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSQLLogRecords"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSQLLogRecordsResponse(callApi(params, req, runtime));
}

DescribeSQLLogRecordsResponse Alibabacloud_Rds20140815::Client::describeSQLLogRecords(shared_ptr<DescribeSQLLogRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSQLLogRecordsWithOptions(request, runtime);
}

DescribeSQLLogReportListResponse Alibabacloud_Rds20140815::Client::describeSQLLogReportListWithOptions(shared_ptr<DescribeSQLLogReportListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSQLLogReportList"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSQLLogReportListResponse(callApi(params, req, runtime));
}

DescribeSQLLogReportListResponse Alibabacloud_Rds20140815::Client::describeSQLLogReportList(shared_ptr<DescribeSQLLogReportListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSQLLogReportListWithOptions(request, runtime);
}

DescribeSQLLogReportsResponse Alibabacloud_Rds20140815::Client::describeSQLLogReportsWithOptions(shared_ptr<DescribeSQLLogReportsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSQLLogReports"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSQLLogReportsResponse(callApi(params, req, runtime));
}

DescribeSQLLogReportsResponse Alibabacloud_Rds20140815::Client::describeSQLLogReports(shared_ptr<DescribeSQLLogReportsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSQLLogReportsWithOptions(request, runtime);
}

DescribeTagsResponse Alibabacloud_Rds20140815::Client::describeTagsWithOptions(shared_ptr<DescribeTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("proxyId", *request->proxyId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("Tags", *request->tags));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("ResourceType", *request->resourceType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTags"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTagsResponse(callApi(params, req, runtime));
}

DescribeTagsResponse Alibabacloud_Rds20140815::Client::describeTags(shared_ptr<DescribeTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTagsWithOptions(request, runtime);
}

DescribeTasksResponse Alibabacloud_Rds20140815::Client::describeTasksWithOptions(shared_ptr<DescribeTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, string>("Status", *request->status));
  query->insert(pair<string, string>("TaskAction", *request->taskAction));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTasks"))},
    {"version", boost::any(string("2014-08-15"))},
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

DescribeTasksResponse Alibabacloud_Rds20140815::Client::describeTasks(shared_ptr<DescribeTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTasksWithOptions(request, runtime);
}

DestroyDBInstanceResponse Alibabacloud_Rds20140815::Client::destroyDBInstanceWithOptions(shared_ptr<DestroyDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DestroyDBInstance"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DestroyDBInstanceResponse(callApi(params, req, runtime));
}

DestroyDBInstanceResponse Alibabacloud_Rds20140815::Client::destroyDBInstance(shared_ptr<DestroyDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return destroyDBInstanceWithOptions(request, runtime);
}

DropDedicatedHostUserResponse Alibabacloud_Rds20140815::Client::dropDedicatedHostUserWithOptions(shared_ptr<DropDedicatedHostUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DedicatedHostName", *request->dedicatedHostName));
  query->insert(pair<string, string>("UserName", *request->userName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DropDedicatedHostUser"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DropDedicatedHostUserResponse(callApi(params, req, runtime));
}

DropDedicatedHostUserResponse Alibabacloud_Rds20140815::Client::dropDedicatedHostUser(shared_ptr<DropDedicatedHostUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dropDedicatedHostUserWithOptions(request, runtime);
}

EvaluateDedicatedHostInstanceResourceResponse Alibabacloud_Rds20140815::Client::evaluateDedicatedHostInstanceResourceWithOptions(shared_ptr<EvaluateDedicatedHostInstanceResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("DedicatedHostGroupId", *request->dedicatedHostGroupId));
  query->insert(pair<string, string>("DiskType", *request->diskType));
  query->insert(pair<string, string>("DiskSize", *request->diskSize));
  query->insert(pair<string, string>("InstanceClassNames", *request->instanceClassNames));
  query->insert(pair<string, string>("Engine", *request->engine));
  query->insert(pair<string, string>("EngineVersion", *request->engineVersion));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EvaluateDedicatedHostInstanceResource"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EvaluateDedicatedHostInstanceResourceResponse(callApi(params, req, runtime));
}

EvaluateDedicatedHostInstanceResourceResponse Alibabacloud_Rds20140815::Client::evaluateDedicatedHostInstanceResource(shared_ptr<EvaluateDedicatedHostInstanceResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return evaluateDedicatedHostInstanceResourceWithOptions(request, runtime);
}

GetDbProxyInstanceSslResponse Alibabacloud_Rds20140815::Client::getDbProxyInstanceSslWithOptions(shared_ptr<GetDbProxyInstanceSslRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("DbInstanceId", *request->dbInstanceId));
  query->insert(pair<string, string>("DbInstanceId", *request->dbInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDbProxyInstanceSsl"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDbProxyInstanceSslResponse(callApi(params, req, runtime));
}

GetDbProxyInstanceSslResponse Alibabacloud_Rds20140815::Client::getDbProxyInstanceSsl(shared_ptr<GetDbProxyInstanceSslRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDbProxyInstanceSslWithOptions(request, runtime);
}

GrantAccountPrivilegeResponse Alibabacloud_Rds20140815::Client::grantAccountPrivilegeWithOptions(shared_ptr<GrantAccountPrivilegeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("AccountName", *request->accountName));
  query->insert(pair<string, string>("DBName", *request->DBName));
  query->insert(pair<string, string>("AccountPrivilege", *request->accountPrivilege));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GrantAccountPrivilege"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GrantAccountPrivilegeResponse(callApi(params, req, runtime));
}

GrantAccountPrivilegeResponse Alibabacloud_Rds20140815::Client::grantAccountPrivilege(shared_ptr<GrantAccountPrivilegeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return grantAccountPrivilegeWithOptions(request, runtime);
}

GrantOperatorPermissionResponse Alibabacloud_Rds20140815::Client::grantOperatorPermissionWithOptions(shared_ptr<GrantOperatorPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("ExpiredTime", *request->expiredTime));
  query->insert(pair<string, string>("Privileges", *request->privileges));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GrantOperatorPermission"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GrantOperatorPermissionResponse(callApi(params, req, runtime));
}

GrantOperatorPermissionResponse Alibabacloud_Rds20140815::Client::grantOperatorPermission(shared_ptr<GrantOperatorPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return grantOperatorPermissionWithOptions(request, runtime);
}

ImportDatabaseBetweenInstancesResponse Alibabacloud_Rds20140815::Client::importDatabaseBetweenInstancesWithOptions(shared_ptr<ImportDatabaseBetweenInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("SourceDBInstanceId", *request->sourceDBInstanceId));
  query->insert(pair<string, string>("DBInfo", *request->DBInfo));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImportDatabaseBetweenInstances"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImportDatabaseBetweenInstancesResponse(callApi(params, req, runtime));
}

ImportDatabaseBetweenInstancesResponse Alibabacloud_Rds20140815::Client::importDatabaseBetweenInstances(shared_ptr<ImportDatabaseBetweenInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importDatabaseBetweenInstancesWithOptions(request, runtime);
}

ImportUserBackupFileResponse Alibabacloud_Rds20140815::Client::importUserBackupFileWithOptions(shared_ptr<ImportUserBackupFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("EngineVersion", *request->engineVersion));
  query->insert(pair<string, string>("BucketRegion", *request->bucketRegion));
  query->insert(pair<string, string>("BackupFile", *request->backupFile));
  query->insert(pair<string, string>("Comment", *request->comment));
  query->insert(pair<string, long>("RestoreSize", *request->restoreSize));
  query->insert(pair<string, long>("Retention", *request->retention));
  query->insert(pair<string, string>("ZoneId", *request->zoneId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImportUserBackupFile"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImportUserBackupFileResponse(callApi(params, req, runtime));
}

ImportUserBackupFileResponse Alibabacloud_Rds20140815::Client::importUserBackupFile(shared_ptr<ImportUserBackupFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importUserBackupFileWithOptions(request, runtime);
}

ListClassesResponse Alibabacloud_Rds20140815::Client::listClassesWithOptions(shared_ptr<ListClassesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("CommodityCode", *request->commodityCode));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("OrderType", *request->orderType));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListClasses"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListClassesResponse(callApi(params, req, runtime));
}

ListClassesResponse Alibabacloud_Rds20140815::Client::listClasses(shared_ptr<ListClassesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listClassesWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Rds20140815::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceType", *request->resourceType));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  query->insert(pair<string, vector<ListTagResourcesRequestTag>>("Tag", *request->tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagResources"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagResourcesResponse(callApi(params, req, runtime));
}

ListTagResourcesResponse Alibabacloud_Rds20140815::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ListUserBackupFilesResponse Alibabacloud_Rds20140815::Client::listUserBackupFilesWithOptions(shared_ptr<ListUserBackupFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("Status", *request->status));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("Comment", *request->comment));
  query->insert(pair<string, string>("BackupId", *request->backupId));
  query->insert(pair<string, string>("OssUrl", *request->ossUrl));
  query->insert(pair<string, string>("Tags", *request->tags));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserBackupFiles"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUserBackupFilesResponse(callApi(params, req, runtime));
}

ListUserBackupFilesResponse Alibabacloud_Rds20140815::Client::listUserBackupFiles(shared_ptr<ListUserBackupFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserBackupFilesWithOptions(request, runtime);
}

LockAccountResponse Alibabacloud_Rds20140815::Client::lockAccountWithOptions(shared_ptr<LockAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("AccountName", *request->accountName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LockAccount"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LockAccountResponse(callApi(params, req, runtime));
}

LockAccountResponse Alibabacloud_Rds20140815::Client::lockAccount(shared_ptr<LockAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return lockAccountWithOptions(request, runtime);
}

MigrateDBInstanceResponse Alibabacloud_Rds20140815::Client::migrateDBInstanceWithOptions(shared_ptr<MigrateDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("DedicatedHostGroupId", *request->dedicatedHostGroupId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("TargetDedicatedHostIdForMaster", *request->targetDedicatedHostIdForMaster));
  query->insert(pair<string, string>("TargetDedicatedHostIdForSlave", *request->targetDedicatedHostIdForSlave));
  query->insert(pair<string, string>("EffectiveTime", *request->effectiveTime));
  query->insert(pair<string, string>("SpecifiedTime", *request->specifiedTime));
  query->insert(pair<string, string>("ZoneIdForLog", *request->zoneIdForLog));
  query->insert(pair<string, string>("ZoneIdForFollower", *request->zoneIdForFollower));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MigrateDBInstance"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MigrateDBInstanceResponse(callApi(params, req, runtime));
}

MigrateDBInstanceResponse Alibabacloud_Rds20140815::Client::migrateDBInstance(shared_ptr<MigrateDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return migrateDBInstanceWithOptions(request, runtime);
}

MigrateSecurityIPModeResponse Alibabacloud_Rds20140815::Client::migrateSecurityIPModeWithOptions(shared_ptr<MigrateSecurityIPModeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MigrateSecurityIPMode"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MigrateSecurityIPModeResponse(callApi(params, req, runtime));
}

MigrateSecurityIPModeResponse Alibabacloud_Rds20140815::Client::migrateSecurityIPMode(shared_ptr<MigrateSecurityIPModeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return migrateSecurityIPModeWithOptions(request, runtime);
}

MigrateToOtherZoneResponse Alibabacloud_Rds20140815::Client::migrateToOtherZoneWithOptions(shared_ptr<MigrateToOtherZoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("VPCId", *request->VPCId));
  query->insert(pair<string, string>("ZoneId", *request->zoneId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("EffectiveTime", *request->effectiveTime));
  query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  query->insert(pair<string, string>("Category", *request->category));
  query->insert(pair<string, string>("ZoneIdSlave1", *request->zoneIdSlave1));
  query->insert(pair<string, string>("ZoneIdSlave2", *request->zoneIdSlave2));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MigrateToOtherZone"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MigrateToOtherZoneResponse(callApi(params, req, runtime));
}

MigrateToOtherZoneResponse Alibabacloud_Rds20140815::Client::migrateToOtherZone(shared_ptr<MigrateToOtherZoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return migrateToOtherZoneWithOptions(request, runtime);
}

ModifyAccountDescriptionResponse Alibabacloud_Rds20140815::Client::modifyAccountDescriptionWithOptions(shared_ptr<ModifyAccountDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("AccountName", *request->accountName));
  query->insert(pair<string, string>("AccountDescription", *request->accountDescription));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAccountDescription"))},
    {"version", boost::any(string("2014-08-15"))},
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

ModifyAccountDescriptionResponse Alibabacloud_Rds20140815::Client::modifyAccountDescription(shared_ptr<ModifyAccountDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAccountDescriptionWithOptions(request, runtime);
}

ModifyActionEventPolicyResponse Alibabacloud_Rds20140815::Client::modifyActionEventPolicyWithOptions(shared_ptr<ModifyActionEventPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("EnableEventLog", *request->enableEventLog));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyActionEventPolicy"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyActionEventPolicyResponse(callApi(params, req, runtime));
}

ModifyActionEventPolicyResponse Alibabacloud_Rds20140815::Client::modifyActionEventPolicy(shared_ptr<ModifyActionEventPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyActionEventPolicyWithOptions(request, runtime);
}

ModifyBackupPolicyResponse Alibabacloud_Rds20140815::Client::modifyBackupPolicyWithOptions(shared_ptr<ModifyBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("BackupPolicyMode", *request->backupPolicyMode));
  query->insert(pair<string, string>("PreferredBackupTime", *request->preferredBackupTime));
  query->insert(pair<string, string>("PreferredBackupPeriod", *request->preferredBackupPeriod));
  query->insert(pair<string, string>("BackupRetentionPeriod", *request->backupRetentionPeriod));
  query->insert(pair<string, string>("BackupLog", *request->backupLog));
  query->insert(pair<string, string>("LogBackupRetentionPeriod", *request->logBackupRetentionPeriod));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("EnableBackupLog", *request->enableBackupLog));
  query->insert(pair<string, string>("LocalLogRetentionHours", *request->localLogRetentionHours));
  query->insert(pair<string, string>("LocalLogRetentionSpace", *request->localLogRetentionSpace));
  query->insert(pair<string, string>("HighSpaceUsageProtection", *request->highSpaceUsageProtection));
  query->insert(pair<string, string>("LogBackupFrequency", *request->logBackupFrequency));
  query->insert(pair<string, string>("CompressType", *request->compressType));
  query->insert(pair<string, string>("ArchiveBackupRetentionPeriod", *request->archiveBackupRetentionPeriod));
  query->insert(pair<string, string>("ArchiveBackupKeepPolicy", *request->archiveBackupKeepPolicy));
  query->insert(pair<string, long>("ArchiveBackupKeepCount", *request->archiveBackupKeepCount));
  query->insert(pair<string, string>("ReleasedKeepPolicy", *request->releasedKeepPolicy));
  query->insert(pair<string, long>("LogBackupLocalRetentionNumber", *request->logBackupLocalRetentionNumber));
  query->insert(pair<string, string>("Category", *request->category));
  query->insert(pair<string, string>("BackupInterval", *request->backupInterval));
  query->insert(pair<string, string>("BackupMethod", *request->backupMethod));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyBackupPolicy"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyBackupPolicyResponse(callApi(params, req, runtime));
}

ModifyBackupPolicyResponse Alibabacloud_Rds20140815::Client::modifyBackupPolicy(shared_ptr<ModifyBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyBackupPolicyWithOptions(request, runtime);
}

ModifyCollationTimeZoneResponse Alibabacloud_Rds20140815::Client::modifyCollationTimeZoneWithOptions(shared_ptr<ModifyCollationTimeZoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("Collation", *request->collation));
  query->insert(pair<string, string>("Timezone", *request->timezone));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyCollationTimeZone"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyCollationTimeZoneResponse(callApi(params, req, runtime));
}

ModifyCollationTimeZoneResponse Alibabacloud_Rds20140815::Client::modifyCollationTimeZone(shared_ptr<ModifyCollationTimeZoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyCollationTimeZoneWithOptions(request, runtime);
}

ModifyDasInstanceConfigResponse Alibabacloud_Rds20140815::Client::modifyDasInstanceConfigWithOptions(shared_ptr<ModifyDasInstanceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("StorageAutoScale", *request->storageAutoScale));
  query->insert(pair<string, long>("StorageThreshold", *request->storageThreshold));
  query->insert(pair<string, long>("StorageUpperBound", *request->storageUpperBound));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDasInstanceConfig"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDasInstanceConfigResponse(callApi(params, req, runtime));
}

ModifyDasInstanceConfigResponse Alibabacloud_Rds20140815::Client::modifyDasInstanceConfig(shared_ptr<ModifyDasInstanceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDasInstanceConfigWithOptions(request, runtime);
}

ModifyDBDescriptionResponse Alibabacloud_Rds20140815::Client::modifyDBDescriptionWithOptions(shared_ptr<ModifyDBDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("DBName", *request->DBName));
  query->insert(pair<string, string>("DBDescription", *request->DBDescription));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDBDescription"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDBDescriptionResponse(callApi(params, req, runtime));
}

ModifyDBDescriptionResponse Alibabacloud_Rds20140815::Client::modifyDBDescription(shared_ptr<ModifyDBDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBDescriptionWithOptions(request, runtime);
}

ModifyDBInstanceAutoUpgradeMinorVersionResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceAutoUpgradeMinorVersionWithOptions(shared_ptr<ModifyDBInstanceAutoUpgradeMinorVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("AutoUpgradeMinorVersion", *request->autoUpgradeMinorVersion));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDBInstanceAutoUpgradeMinorVersion"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDBInstanceAutoUpgradeMinorVersionResponse(callApi(params, req, runtime));
}

ModifyDBInstanceAutoUpgradeMinorVersionResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceAutoUpgradeMinorVersion(shared_ptr<ModifyDBInstanceAutoUpgradeMinorVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceAutoUpgradeMinorVersionWithOptions(request, runtime);
}

ModifyDBInstanceConnectionModeResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceConnectionModeWithOptions(shared_ptr<ModifyDBInstanceConnectionModeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("ConnectionMode", *request->connectionMode));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDBInstanceConnectionMode"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDBInstanceConnectionModeResponse(callApi(params, req, runtime));
}

ModifyDBInstanceConnectionModeResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceConnectionMode(shared_ptr<ModifyDBInstanceConnectionModeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceConnectionModeWithOptions(request, runtime);
}

ModifyDBInstanceConnectionStringResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceConnectionStringWithOptions(shared_ptr<ModifyDBInstanceConnectionStringRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("CurrentConnectionString", *request->currentConnectionString));
  query->insert(pair<string, string>("ConnectionStringPrefix", *request->connectionStringPrefix));
  query->insert(pair<string, string>("Port", *request->port));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDBInstanceConnectionString"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDBInstanceConnectionStringResponse(callApi(params, req, runtime));
}

ModifyDBInstanceConnectionStringResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceConnectionString(shared_ptr<ModifyDBInstanceConnectionStringRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceConnectionStringWithOptions(request, runtime);
}

ModifyDBInstanceDescriptionResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceDescriptionWithOptions(shared_ptr<ModifyDBInstanceDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("DBInstanceDescription", *request->DBInstanceDescription));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDBInstanceDescription"))},
    {"version", boost::any(string("2014-08-15"))},
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

ModifyDBInstanceDescriptionResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceDescription(shared_ptr<ModifyDBInstanceDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceDescriptionWithOptions(request, runtime);
}

ModifyDBInstanceHAConfigResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceHAConfigWithOptions(shared_ptr<ModifyDBInstanceHAConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("SyncMode", *request->syncMode));
  query->insert(pair<string, string>("HAMode", *request->HAMode));
  query->insert(pair<string, string>("DbInstanceId", *request->dbInstanceId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDBInstanceHAConfig"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDBInstanceHAConfigResponse(callApi(params, req, runtime));
}

ModifyDBInstanceHAConfigResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceHAConfig(shared_ptr<ModifyDBInstanceHAConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceHAConfigWithOptions(request, runtime);
}

ModifyDBInstanceMaintainTimeResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceMaintainTimeWithOptions(shared_ptr<ModifyDBInstanceMaintainTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("MaintainTime", *request->maintainTime));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDBInstanceMaintainTime"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDBInstanceMaintainTimeResponse(callApi(params, req, runtime));
}

ModifyDBInstanceMaintainTimeResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceMaintainTime(shared_ptr<ModifyDBInstanceMaintainTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceMaintainTimeWithOptions(request, runtime);
}

ModifyDBInstanceMonitorResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceMonitorWithOptions(shared_ptr<ModifyDBInstanceMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("Period", *request->period));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDBInstanceMonitor"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDBInstanceMonitorResponse(callApi(params, req, runtime));
}

ModifyDBInstanceMonitorResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceMonitor(shared_ptr<ModifyDBInstanceMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceMonitorWithOptions(request, runtime);
}

ModifyDBInstanceNetworkExpireTimeResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceNetworkExpireTimeWithOptions(shared_ptr<ModifyDBInstanceNetworkExpireTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("ConnectionString", *request->connectionString));
  query->insert(pair<string, long>("ClassicExpiredDays", *request->classicExpiredDays));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDBInstanceNetworkExpireTime"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDBInstanceNetworkExpireTimeResponse(callApi(params, req, runtime));
}

ModifyDBInstanceNetworkExpireTimeResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceNetworkExpireTime(shared_ptr<ModifyDBInstanceNetworkExpireTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceNetworkExpireTimeWithOptions(request, runtime);
}

ModifyDBInstanceNetworkTypeResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceNetworkTypeWithOptions(shared_ptr<ModifyDBInstanceNetworkTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("RetainClassic", *request->retainClassic));
  query->insert(pair<string, string>("ClassicExpiredDays", *request->classicExpiredDays));
  query->insert(pair<string, string>("InstanceNetworkType", *request->instanceNetworkType));
  query->insert(pair<string, long>("ReadWriteSplittingClassicExpiredDays", *request->readWriteSplittingClassicExpiredDays));
  query->insert(pair<string, string>("VPCId", *request->VPCId));
  query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  query->insert(pair<string, string>("PrivateIpAddress", *request->privateIpAddress));
  query->insert(pair<string, string>("ReadWriteSplittingPrivateIpAddress", *request->readWriteSplittingPrivateIpAddress));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDBInstanceNetworkType"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDBInstanceNetworkTypeResponse(callApi(params, req, runtime));
}

ModifyDBInstanceNetworkTypeResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceNetworkType(shared_ptr<ModifyDBInstanceNetworkTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceNetworkTypeWithOptions(request, runtime);
}

ModifyDBInstancePayTypeResponse Alibabacloud_Rds20140815::Client::modifyDBInstancePayTypeWithOptions(shared_ptr<ModifyDBInstancePayTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, long>("UsedTime", *request->usedTime));
  query->insert(pair<string, string>("PayType", *request->payType));
  query->insert(pair<string, string>("Period", *request->period));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDBInstancePayType"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDBInstancePayTypeResponse(callApi(params, req, runtime));
}

ModifyDBInstancePayTypeResponse Alibabacloud_Rds20140815::Client::modifyDBInstancePayType(shared_ptr<ModifyDBInstancePayTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstancePayTypeWithOptions(request, runtime);
}

ModifyDBInstanceProxyConfigurationResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceProxyConfigurationWithOptions(shared_ptr<ModifyDBInstanceProxyConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("ProxyConfigurationKey", *request->proxyConfigurationKey));
  query->insert(pair<string, string>("ProxyConfigurationValue", *request->proxyConfigurationValue));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDBInstanceProxyConfiguration"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDBInstanceProxyConfigurationResponse(callApi(params, req, runtime));
}

ModifyDBInstanceProxyConfigurationResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceProxyConfiguration(shared_ptr<ModifyDBInstanceProxyConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceProxyConfigurationWithOptions(request, runtime);
}

ModifyDBInstanceSpecResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceSpecWithOptions(shared_ptr<ModifyDBInstanceSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("DBInstanceClass", *request->DBInstanceClass));
  query->insert(pair<string, long>("DBInstanceStorage", *request->DBInstanceStorage));
  query->insert(pair<string, string>("PayType", *request->payType));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("EffectiveTime", *request->effectiveTime));
  query->insert(pair<string, string>("EngineVersion", *request->engineVersion));
  query->insert(pair<string, string>("DBInstanceStorageType", *request->DBInstanceStorageType));
  query->insert(pair<string, string>("Direction", *request->direction));
  query->insert(pair<string, string>("SourceBiz", *request->sourceBiz));
  query->insert(pair<string, string>("DedicatedHostGroupId", *request->dedicatedHostGroupId));
  query->insert(pair<string, string>("ZoneId", *request->zoneId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDBInstanceSpec"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDBInstanceSpecResponse(callApi(params, req, runtime));
}

ModifyDBInstanceSpecResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceSpec(shared_ptr<ModifyDBInstanceSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceSpecWithOptions(request, runtime);
}

ModifyDBInstanceSSLResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceSSLWithOptions(shared_ptr<ModifyDBInstanceSSLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("ConnectionString", *request->connectionString));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, long>("SSLEnabled", *request->SSLEnabled));
  query->insert(pair<string, string>("CAType", *request->CAType));
  query->insert(pair<string, string>("ServerCert", *request->serverCert));
  query->insert(pair<string, string>("ServerKey", *request->serverKey));
  query->insert(pair<string, long>("ClientCAEnabled", *request->clientCAEnabled));
  query->insert(pair<string, string>("ClientCACert", *request->clientCACert));
  query->insert(pair<string, long>("ClientCrlEnabled", *request->clientCrlEnabled));
  query->insert(pair<string, string>("ClientCertRevocationList", *request->clientCertRevocationList));
  query->insert(pair<string, string>("ACL", *request->ACL));
  query->insert(pair<string, string>("ReplicationACL", *request->replicationACL));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDBInstanceSSL"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDBInstanceSSLResponse(callApi(params, req, runtime));
}

ModifyDBInstanceSSLResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceSSL(shared_ptr<ModifyDBInstanceSSLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceSSLWithOptions(request, runtime);
}

ModifyDBInstanceTDEResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceTDEWithOptions(shared_ptr<ModifyDBInstanceTDERequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("TDEStatus", *request->TDEStatus));
  query->insert(pair<string, string>("DBName", *request->DBName));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("EncryptionKey", *request->encryptionKey));
  query->insert(pair<string, string>("RoleArn", *request->roleArn));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDBInstanceTDE"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDBInstanceTDEResponse(callApi(params, req, runtime));
}

ModifyDBInstanceTDEResponse Alibabacloud_Rds20140815::Client::modifyDBInstanceTDE(shared_ptr<ModifyDBInstanceTDERequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBInstanceTDEWithOptions(request, runtime);
}

ModifyDBProxyResponse Alibabacloud_Rds20140815::Client::modifyDBProxyWithOptions(shared_ptr<ModifyDBProxyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("ConfigDBProxyService", *request->configDBProxyService));
  query->insert(pair<string, string>("DBProxyInstanceNum", *request->DBProxyInstanceNum));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("InstanceNetworkType", *request->instanceNetworkType));
  query->insert(pair<string, string>("VPCId", *request->VPCId));
  query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDBProxy"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDBProxyResponse(callApi(params, req, runtime));
}

ModifyDBProxyResponse Alibabacloud_Rds20140815::Client::modifyDBProxy(shared_ptr<ModifyDBProxyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBProxyWithOptions(request, runtime);
}

ModifyDBProxyEndpointResponse Alibabacloud_Rds20140815::Client::modifyDBProxyEndpointWithOptions(shared_ptr<ModifyDBProxyEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("DBProxyEndpointId", *request->DBProxyEndpointId));
  query->insert(pair<string, string>("ConfigDBProxyFeatures", *request->configDBProxyFeatures));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ReadOnlyInstanceMaxDelayTime", *request->readOnlyInstanceMaxDelayTime));
  query->insert(pair<string, string>("ReadOnlyInstanceDistributionType", *request->readOnlyInstanceDistributionType));
  query->insert(pair<string, string>("ReadOnlyInstanceWeight", *request->readOnlyInstanceWeight));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("DbEndpointOperator", *request->dbEndpointOperator));
  query->insert(pair<string, string>("DbEndpointAliases", *request->dbEndpointAliases));
  query->insert(pair<string, string>("DbEndpointType", *request->dbEndpointType));
  query->insert(pair<string, string>("DbEndpointReadWriteMode", *request->dbEndpointReadWriteMode));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDBProxyEndpoint"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDBProxyEndpointResponse(callApi(params, req, runtime));
}

ModifyDBProxyEndpointResponse Alibabacloud_Rds20140815::Client::modifyDBProxyEndpoint(shared_ptr<ModifyDBProxyEndpointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBProxyEndpointWithOptions(request, runtime);
}

ModifyDBProxyEndpointAddressResponse Alibabacloud_Rds20140815::Client::modifyDBProxyEndpointAddressWithOptions(shared_ptr<ModifyDBProxyEndpointAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("DBProxyEndpointId", *request->DBProxyEndpointId));
  query->insert(pair<string, string>("DBProxyNewConnectString", *request->DBProxyNewConnectString));
  query->insert(pair<string, string>("DBProxyNewConnectStringPort", *request->DBProxyNewConnectStringPort));
  query->insert(pair<string, string>("DBProxyConnectStringNetType", *request->DBProxyConnectStringNetType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDBProxyEndpointAddress"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDBProxyEndpointAddressResponse(callApi(params, req, runtime));
}

ModifyDBProxyEndpointAddressResponse Alibabacloud_Rds20140815::Client::modifyDBProxyEndpointAddress(shared_ptr<ModifyDBProxyEndpointAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBProxyEndpointAddressWithOptions(request, runtime);
}

ModifyDBProxyInstanceResponse Alibabacloud_Rds20140815::Client::modifyDBProxyInstanceWithOptions(shared_ptr<ModifyDBProxyInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("DBProxyInstanceType", *request->DBProxyInstanceType));
  query->insert(pair<string, string>("DBProxyInstanceNum", *request->DBProxyInstanceNum));
  query->insert(pair<string, string>("EffectiveTime", *request->effectiveTime));
  query->insert(pair<string, string>("EffectiveSpecificTime", *request->effectiveSpecificTime));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDBProxyInstance"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDBProxyInstanceResponse(callApi(params, req, runtime));
}

ModifyDBProxyInstanceResponse Alibabacloud_Rds20140815::Client::modifyDBProxyInstance(shared_ptr<ModifyDBProxyInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDBProxyInstanceWithOptions(request, runtime);
}

ModifyDbProxyInstanceSslResponse Alibabacloud_Rds20140815::Client::modifyDbProxyInstanceSslWithOptions(shared_ptr<ModifyDbProxyInstanceSslRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("DbInstanceId", *request->dbInstanceId));
  query->insert(pair<string, string>("DbInstanceId", *request->dbInstanceId));
  query->insert(pair<string, string>("DbProxyEndpointId", *request->dbProxyEndpointId));
  query->insert(pair<string, string>("DbProxyConnectString", *request->dbProxyConnectString));
  query->insert(pair<string, string>("DbProxySslEnabled", *request->dbProxySslEnabled));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDbProxyInstanceSsl"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDbProxyInstanceSslResponse(callApi(params, req, runtime));
}

ModifyDbProxyInstanceSslResponse Alibabacloud_Rds20140815::Client::modifyDbProxyInstanceSsl(shared_ptr<ModifyDbProxyInstanceSslRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDbProxyInstanceSslWithOptions(request, runtime);
}

ModifyDedicatedHostAccountResponse Alibabacloud_Rds20140815::Client::modifyDedicatedHostAccountWithOptions(shared_ptr<ModifyDedicatedHostAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DedicatedHostId", *request->dedicatedHostId));
  query->insert(pair<string, string>("AccountName", *request->accountName));
  query->insert(pair<string, string>("AccountPassword", *request->accountPassword));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDedicatedHostAccount"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDedicatedHostAccountResponse(callApi(params, req, runtime));
}

ModifyDedicatedHostAccountResponse Alibabacloud_Rds20140815::Client::modifyDedicatedHostAccount(shared_ptr<ModifyDedicatedHostAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDedicatedHostAccountWithOptions(request, runtime);
}

ModifyDedicatedHostAttributeResponse Alibabacloud_Rds20140815::Client::modifyDedicatedHostAttributeWithOptions(shared_ptr<ModifyDedicatedHostAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("DedicatedHostId", *request->dedicatedHostId));
  query->insert(pair<string, string>("HostName", *request->hostName));
  query->insert(pair<string, string>("AllocationStatus", *request->allocationStatus));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDedicatedHostAttribute"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDedicatedHostAttributeResponse(callApi(params, req, runtime));
}

ModifyDedicatedHostAttributeResponse Alibabacloud_Rds20140815::Client::modifyDedicatedHostAttribute(shared_ptr<ModifyDedicatedHostAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDedicatedHostAttributeWithOptions(request, runtime);
}

ModifyDedicatedHostGroupAttributeResponse Alibabacloud_Rds20140815::Client::modifyDedicatedHostGroupAttributeWithOptions(shared_ptr<ModifyDedicatedHostGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("DedicatedHostGroupId", *request->dedicatedHostGroupId));
  query->insert(pair<string, string>("DedicatedHostGroupDesc", *request->dedicatedHostGroupDesc));
  query->insert(pair<string, long>("CpuAllocationRatio", *request->cpuAllocationRatio));
  query->insert(pair<string, long>("MemAllocationRatio", *request->memAllocationRatio));
  query->insert(pair<string, long>("DiskAllocationRatio", *request->diskAllocationRatio));
  query->insert(pair<string, string>("AllocationPolicy", *request->allocationPolicy));
  query->insert(pair<string, string>("HostReplacePolicy", *request->hostReplacePolicy));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDedicatedHostGroupAttribute"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDedicatedHostGroupAttributeResponse(callApi(params, req, runtime));
}

ModifyDedicatedHostGroupAttributeResponse Alibabacloud_Rds20140815::Client::modifyDedicatedHostGroupAttribute(shared_ptr<ModifyDedicatedHostGroupAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDedicatedHostGroupAttributeWithOptions(request, runtime);
}

ModifyDedicatedHostUserResponse Alibabacloud_Rds20140815::Client::modifyDedicatedHostUserWithOptions(shared_ptr<ModifyDedicatedHostUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DedicatedHostName", *request->dedicatedHostName));
  query->insert(pair<string, string>("UserName", *request->userName));
  query->insert(pair<string, string>("OldPassword", *request->oldPassword));
  query->insert(pair<string, string>("NewPassword", *request->newPassword));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDedicatedHostUser"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDedicatedHostUserResponse(callApi(params, req, runtime));
}

ModifyDedicatedHostUserResponse Alibabacloud_Rds20140815::Client::modifyDedicatedHostUser(shared_ptr<ModifyDedicatedHostUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDedicatedHostUserWithOptions(request, runtime);
}

ModifyDTCSecurityIpHostsForSQLServerResponse Alibabacloud_Rds20140815::Client::modifyDTCSecurityIpHostsForSQLServerWithOptions(shared_ptr<ModifyDTCSecurityIpHostsForSQLServerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("SecurityIpHosts", *request->securityIpHosts));
  query->insert(pair<string, string>("WhiteListGroupName", *request->whiteListGroupName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDTCSecurityIpHostsForSQLServer"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDTCSecurityIpHostsForSQLServerResponse(callApi(params, req, runtime));
}

ModifyDTCSecurityIpHostsForSQLServerResponse Alibabacloud_Rds20140815::Client::modifyDTCSecurityIpHostsForSQLServer(shared_ptr<ModifyDTCSecurityIpHostsForSQLServerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDTCSecurityIpHostsForSQLServerWithOptions(request, runtime);
}

ModifyHADiagnoseConfigResponse Alibabacloud_Rds20140815::Client::modifyHADiagnoseConfigWithOptions(shared_ptr<ModifyHADiagnoseConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("TcpConnectionType", *request->tcpConnectionType));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyHADiagnoseConfig"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyHADiagnoseConfigResponse(callApi(params, req, runtime));
}

ModifyHADiagnoseConfigResponse Alibabacloud_Rds20140815::Client::modifyHADiagnoseConfig(shared_ptr<ModifyHADiagnoseConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyHADiagnoseConfigWithOptions(request, runtime);
}

ModifyHASwitchConfigResponse Alibabacloud_Rds20140815::Client::modifyHASwitchConfigWithOptions(shared_ptr<ModifyHASwitchConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("HAConfig", *request->HAConfig));
  query->insert(pair<string, string>("ManualHATime", *request->manualHATime));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyHASwitchConfig"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyHASwitchConfigResponse(callApi(params, req, runtime));
}

ModifyHASwitchConfigResponse Alibabacloud_Rds20140815::Client::modifyHASwitchConfig(shared_ptr<ModifyHASwitchConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyHASwitchConfigWithOptions(request, runtime);
}

ModifyInstanceAutoRenewalAttributeResponse Alibabacloud_Rds20140815::Client::modifyInstanceAutoRenewalAttributeWithOptions(shared_ptr<ModifyInstanceAutoRenewalAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("Duration", *request->duration));
  query->insert(pair<string, string>("AutoRenew", *request->autoRenew));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyInstanceAutoRenewalAttribute"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyInstanceAutoRenewalAttributeResponse(callApi(params, req, runtime));
}

ModifyInstanceAutoRenewalAttributeResponse Alibabacloud_Rds20140815::Client::modifyInstanceAutoRenewalAttribute(shared_ptr<ModifyInstanceAutoRenewalAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceAutoRenewalAttributeWithOptions(request, runtime);
}

ModifyInstanceCrossBackupPolicyResponse Alibabacloud_Rds20140815::Client::modifyInstanceCrossBackupPolicyWithOptions(shared_ptr<ModifyInstanceCrossBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("CrossBackupType", *request->crossBackupType));
  query->insert(pair<string, string>("LogBackupEnabled", *request->logBackupEnabled));
  query->insert(pair<string, string>("BackupEnabled", *request->backupEnabled));
  query->insert(pair<string, string>("CrossBackupRegion", *request->crossBackupRegion));
  query->insert(pair<string, long>("RetentType", *request->retentType));
  query->insert(pair<string, long>("Retention", *request->retention));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyInstanceCrossBackupPolicy"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyInstanceCrossBackupPolicyResponse(callApi(params, req, runtime));
}

ModifyInstanceCrossBackupPolicyResponse Alibabacloud_Rds20140815::Client::modifyInstanceCrossBackupPolicy(shared_ptr<ModifyInstanceCrossBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceCrossBackupPolicyWithOptions(request, runtime);
}

ModifyParameterResponse Alibabacloud_Rds20140815::Client::modifyParameterWithOptions(shared_ptr<ModifyParameterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("Parameters", *request->parameters));
  query->insert(pair<string, bool>("Forcerestart", *request->forcerestart));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("ParameterGroupId", *request->parameterGroupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyParameter"))},
    {"version", boost::any(string("2014-08-15"))},
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

ModifyParameterResponse Alibabacloud_Rds20140815::Client::modifyParameter(shared_ptr<ModifyParameterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyParameterWithOptions(request, runtime);
}

ModifyParameterGroupResponse Alibabacloud_Rds20140815::Client::modifyParameterGroupWithOptions(shared_ptr<ModifyParameterGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ParameterGroupId", *request->parameterGroupId));
  query->insert(pair<string, string>("ParameterGroupName", *request->parameterGroupName));
  query->insert(pair<string, string>("ParameterGroupDesc", *request->parameterGroupDesc));
  query->insert(pair<string, string>("Parameters", *request->parameters));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyParameterGroup"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyParameterGroupResponse(callApi(params, req, runtime));
}

ModifyParameterGroupResponse Alibabacloud_Rds20140815::Client::modifyParameterGroup(shared_ptr<ModifyParameterGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyParameterGroupWithOptions(request, runtime);
}

ModifyReadonlyInstanceDelayReplicationTimeResponse Alibabacloud_Rds20140815::Client::modifyReadonlyInstanceDelayReplicationTimeWithOptions(shared_ptr<ModifyReadonlyInstanceDelayReplicationTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("ReadSQLReplicationTime", *request->readSQLReplicationTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyReadonlyInstanceDelayReplicationTime"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyReadonlyInstanceDelayReplicationTimeResponse(callApi(params, req, runtime));
}

ModifyReadonlyInstanceDelayReplicationTimeResponse Alibabacloud_Rds20140815::Client::modifyReadonlyInstanceDelayReplicationTime(shared_ptr<ModifyReadonlyInstanceDelayReplicationTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyReadonlyInstanceDelayReplicationTimeWithOptions(request, runtime);
}

ModifyReadWriteSplittingConnectionResponse Alibabacloud_Rds20140815::Client::modifyReadWriteSplittingConnectionWithOptions(shared_ptr<ModifyReadWriteSplittingConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("ConnectionStringPrefix", *request->connectionStringPrefix));
  query->insert(pair<string, string>("Port", *request->port));
  query->insert(pair<string, string>("MaxDelayTime", *request->maxDelayTime));
  query->insert(pair<string, string>("DistributionType", *request->distributionType));
  query->insert(pair<string, string>("Weight", *request->weight));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyReadWriteSplittingConnection"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyReadWriteSplittingConnectionResponse(callApi(params, req, runtime));
}

ModifyReadWriteSplittingConnectionResponse Alibabacloud_Rds20140815::Client::modifyReadWriteSplittingConnection(shared_ptr<ModifyReadWriteSplittingConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyReadWriteSplittingConnectionWithOptions(request, runtime);
}

ModifyResourceGroupResponse Alibabacloud_Rds20140815::Client::modifyResourceGroupWithOptions(shared_ptr<ModifyResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyResourceGroup"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyResourceGroupResponse(callApi(params, req, runtime));
}

ModifyResourceGroupResponse Alibabacloud_Rds20140815::Client::modifyResourceGroup(shared_ptr<ModifyResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyResourceGroupWithOptions(request, runtime);
}

ModifySecurityGroupConfigurationResponse Alibabacloud_Rds20140815::Client::modifySecurityGroupConfigurationWithOptions(shared_ptr<ModifySecurityGroupConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifySecurityGroupConfiguration"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifySecurityGroupConfigurationResponse(callApi(params, req, runtime));
}

ModifySecurityGroupConfigurationResponse Alibabacloud_Rds20140815::Client::modifySecurityGroupConfiguration(shared_ptr<ModifySecurityGroupConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySecurityGroupConfigurationWithOptions(request, runtime);
}

ModifySecurityIpsResponse Alibabacloud_Rds20140815::Client::modifySecurityIpsWithOptions(shared_ptr<ModifySecurityIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("SecurityIps", *request->securityIps));
  query->insert(pair<string, string>("DBInstanceIPArrayName", *request->DBInstanceIPArrayName));
  query->insert(pair<string, string>("DBInstanceIPArrayAttribute", *request->DBInstanceIPArrayAttribute));
  query->insert(pair<string, string>("SecurityIPType", *request->securityIPType));
  query->insert(pair<string, string>("WhitelistNetworkType", *request->whitelistNetworkType));
  query->insert(pair<string, string>("ModifyMode", *request->modifyMode));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifySecurityIps"))},
    {"version", boost::any(string("2014-08-15"))},
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

ModifySecurityIpsResponse Alibabacloud_Rds20140815::Client::modifySecurityIps(shared_ptr<ModifySecurityIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySecurityIpsWithOptions(request, runtime);
}

ModifySQLCollectorPolicyResponse Alibabacloud_Rds20140815::Client::modifySQLCollectorPolicyWithOptions(shared_ptr<ModifySQLCollectorPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("SQLCollectorStatus", *request->SQLCollectorStatus));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifySQLCollectorPolicy"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifySQLCollectorPolicyResponse(callApi(params, req, runtime));
}

ModifySQLCollectorPolicyResponse Alibabacloud_Rds20140815::Client::modifySQLCollectorPolicy(shared_ptr<ModifySQLCollectorPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySQLCollectorPolicyWithOptions(request, runtime);
}

ModifySQLCollectorRetentionResponse Alibabacloud_Rds20140815::Client::modifySQLCollectorRetentionWithOptions(shared_ptr<ModifySQLCollectorRetentionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("ConfigValue", *request->configValue));
  query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifySQLCollectorRetention"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifySQLCollectorRetentionResponse(callApi(params, req, runtime));
}

ModifySQLCollectorRetentionResponse Alibabacloud_Rds20140815::Client::modifySQLCollectorRetention(shared_ptr<ModifySQLCollectorRetentionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySQLCollectorRetentionWithOptions(request, runtime);
}

PurgeDBInstanceLogResponse Alibabacloud_Rds20140815::Client::purgeDBInstanceLogWithOptions(shared_ptr<PurgeDBInstanceLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PurgeDBInstanceLog"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PurgeDBInstanceLogResponse(callApi(params, req, runtime));
}

PurgeDBInstanceLogResponse Alibabacloud_Rds20140815::Client::purgeDBInstanceLog(shared_ptr<PurgeDBInstanceLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return purgeDBInstanceLogWithOptions(request, runtime);
}

RebuildDBInstanceResponse Alibabacloud_Rds20140815::Client::rebuildDBInstanceWithOptions(shared_ptr<RebuildDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("DedicatedHostGroupId", *request->dedicatedHostGroupId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("DedicatedHostId", *request->dedicatedHostId));
  query->insert(pair<string, string>("RebuildNodeType", *request->rebuildNodeType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RebuildDBInstance"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RebuildDBInstanceResponse(callApi(params, req, runtime));
}

RebuildDBInstanceResponse Alibabacloud_Rds20140815::Client::rebuildDBInstance(shared_ptr<RebuildDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rebuildDBInstanceWithOptions(request, runtime);
}

RecoveryDBInstanceResponse Alibabacloud_Rds20140815::Client::recoveryDBInstanceWithOptions(shared_ptr<RecoveryDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceClass", *request->DBInstanceClass));
  query->insert(pair<string, long>("DBInstanceStorage", *request->DBInstanceStorage));
  query->insert(pair<string, string>("PayType", *request->payType));
  query->insert(pair<string, string>("InstanceNetworkType", *request->instanceNetworkType));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("TargetDBInstanceId", *request->targetDBInstanceId));
  query->insert(pair<string, string>("DbNames", *request->dbNames));
  query->insert(pair<string, string>("BackupId", *request->backupId));
  query->insert(pair<string, string>("RestoreTime", *request->restoreTime));
  query->insert(pair<string, string>("VPCId", *request->VPCId));
  query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  query->insert(pair<string, string>("PrivateIpAddress", *request->privateIpAddress));
  query->insert(pair<string, string>("UsedTime", *request->usedTime));
  query->insert(pair<string, string>("Period", *request->period));
  query->insert(pair<string, string>("DBInstanceStorageType", *request->DBInstanceStorageType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecoveryDBInstance"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecoveryDBInstanceResponse(callApi(params, req, runtime));
}

RecoveryDBInstanceResponse Alibabacloud_Rds20140815::Client::recoveryDBInstance(shared_ptr<RecoveryDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recoveryDBInstanceWithOptions(request, runtime);
}

ReleaseInstanceConnectionResponse Alibabacloud_Rds20140815::Client::releaseInstanceConnectionWithOptions(shared_ptr<ReleaseInstanceConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("CurrentConnectionString", *request->currentConnectionString));
  query->insert(pair<string, string>("InstanceNetworkType", *request->instanceNetworkType));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseInstanceConnection"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReleaseInstanceConnectionResponse(callApi(params, req, runtime));
}

ReleaseInstanceConnectionResponse Alibabacloud_Rds20140815::Client::releaseInstanceConnection(shared_ptr<ReleaseInstanceConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseInstanceConnectionWithOptions(request, runtime);
}

ReleaseInstancePublicConnectionResponse Alibabacloud_Rds20140815::Client::releaseInstancePublicConnectionWithOptions(shared_ptr<ReleaseInstancePublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("CurrentConnectionString", *request->currentConnectionString));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseInstancePublicConnection"))},
    {"version", boost::any(string("2014-08-15"))},
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

ReleaseInstancePublicConnectionResponse Alibabacloud_Rds20140815::Client::releaseInstancePublicConnection(shared_ptr<ReleaseInstancePublicConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseInstancePublicConnectionWithOptions(request, runtime);
}

ReleaseReadWriteSplittingConnectionResponse Alibabacloud_Rds20140815::Client::releaseReadWriteSplittingConnectionWithOptions(shared_ptr<ReleaseReadWriteSplittingConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseReadWriteSplittingConnection"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReleaseReadWriteSplittingConnectionResponse(callApi(params, req, runtime));
}

ReleaseReadWriteSplittingConnectionResponse Alibabacloud_Rds20140815::Client::releaseReadWriteSplittingConnection(shared_ptr<ReleaseReadWriteSplittingConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseReadWriteSplittingConnectionWithOptions(request, runtime);
}

RemoveTagsFromResourceResponse Alibabacloud_Rds20140815::Client::removeTagsFromResourceWithOptions(shared_ptr<RemoveTagsFromResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("proxyId", *request->proxyId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("Tags", *request->tags));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveTagsFromResource"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveTagsFromResourceResponse(callApi(params, req, runtime));
}

RemoveTagsFromResourceResponse Alibabacloud_Rds20140815::Client::removeTagsFromResource(shared_ptr<RemoveTagsFromResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeTagsFromResourceWithOptions(request, runtime);
}

RenewInstanceResponse Alibabacloud_Rds20140815::Client::renewInstanceWithOptions(shared_ptr<RenewInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, long>("Period", *request->period));
  query->insert(pair<string, string>("AutoPay", *request->autoPay));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenewInstance"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RenewInstanceResponse(callApi(params, req, runtime));
}

RenewInstanceResponse Alibabacloud_Rds20140815::Client::renewInstance(shared_ptr<RenewInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renewInstanceWithOptions(request, runtime);
}

ReplaceDedicatedHostResponse Alibabacloud_Rds20140815::Client::replaceDedicatedHostWithOptions(shared_ptr<ReplaceDedicatedHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("DedicatedHostId", *request->dedicatedHostId));
  query->insert(pair<string, string>("FailoverMode", *request->failoverMode));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReplaceDedicatedHost"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReplaceDedicatedHostResponse(callApi(params, req, runtime));
}

ReplaceDedicatedHostResponse Alibabacloud_Rds20140815::Client::replaceDedicatedHost(shared_ptr<ReplaceDedicatedHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return replaceDedicatedHostWithOptions(request, runtime);
}

ResetAccountResponse Alibabacloud_Rds20140815::Client::resetAccountWithOptions(shared_ptr<ResetAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("AccountName", *request->accountName));
  query->insert(pair<string, string>("AccountPassword", *request->accountPassword));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetAccount"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetAccountResponse(callApi(params, req, runtime));
}

ResetAccountResponse Alibabacloud_Rds20140815::Client::resetAccount(shared_ptr<ResetAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetAccountWithOptions(request, runtime);
}

ResetAccountPasswordResponse Alibabacloud_Rds20140815::Client::resetAccountPasswordWithOptions(shared_ptr<ResetAccountPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("AccountName", *request->accountName));
  query->insert(pair<string, string>("AccountPassword", *request->accountPassword));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetAccountPassword"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetAccountPasswordResponse(callApi(params, req, runtime));
}

ResetAccountPasswordResponse Alibabacloud_Rds20140815::Client::resetAccountPassword(shared_ptr<ResetAccountPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetAccountPasswordWithOptions(request, runtime);
}

RestartDBInstanceResponse Alibabacloud_Rds20140815::Client::restartDBInstanceWithOptions(shared_ptr<RestartDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestartDBInstance"))},
    {"version", boost::any(string("2014-08-15"))},
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

RestartDBInstanceResponse Alibabacloud_Rds20140815::Client::restartDBInstance(shared_ptr<RestartDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restartDBInstanceWithOptions(request, runtime);
}

RestartDedicatedHostResponse Alibabacloud_Rds20140815::Client::restartDedicatedHostWithOptions(shared_ptr<RestartDedicatedHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("DedicatedHostId", *request->dedicatedHostId));
  query->insert(pair<string, string>("FailoverMode", *request->failoverMode));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestartDedicatedHost"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RestartDedicatedHostResponse(callApi(params, req, runtime));
}

RestartDedicatedHostResponse Alibabacloud_Rds20140815::Client::restartDedicatedHost(shared_ptr<RestartDedicatedHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restartDedicatedHostWithOptions(request, runtime);
}

RestoreDdrTableResponse Alibabacloud_Rds20140815::Client::restoreDdrTableWithOptions(shared_ptr<RestoreDdrTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("RestoreType", *request->restoreType));
  query->insert(pair<string, string>("BackupId", *request->backupId));
  query->insert(pair<string, string>("RestoreTime", *request->restoreTime));
  query->insert(pair<string, string>("SourceRegion", *request->sourceRegion));
  query->insert(pair<string, string>("SourceDBInstanceName", *request->sourceDBInstanceName));
  query->insert(pair<string, string>("TableMeta", *request->tableMeta));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestoreDdrTable"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RestoreDdrTableResponse(callApi(params, req, runtime));
}

RestoreDdrTableResponse Alibabacloud_Rds20140815::Client::restoreDdrTable(shared_ptr<RestoreDdrTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restoreDdrTableWithOptions(request, runtime);
}

RestoreTableResponse Alibabacloud_Rds20140815::Client::restoreTableWithOptions(shared_ptr<RestoreTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("BackupId", *request->backupId));
  query->insert(pair<string, string>("RestoreTime", *request->restoreTime));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("TableMeta", *request->tableMeta));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestoreTable"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RestoreTableResponse(callApi(params, req, runtime));
}

RestoreTableResponse Alibabacloud_Rds20140815::Client::restoreTable(shared_ptr<RestoreTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restoreTableWithOptions(request, runtime);
}

RevokeAccountPrivilegeResponse Alibabacloud_Rds20140815::Client::revokeAccountPrivilegeWithOptions(shared_ptr<RevokeAccountPrivilegeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("AccountName", *request->accountName));
  query->insert(pair<string, string>("DBName", *request->DBName));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RevokeAccountPrivilege"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RevokeAccountPrivilegeResponse(callApi(params, req, runtime));
}

RevokeAccountPrivilegeResponse Alibabacloud_Rds20140815::Client::revokeAccountPrivilege(shared_ptr<RevokeAccountPrivilegeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeAccountPrivilegeWithOptions(request, runtime);
}

RevokeOperatorPermissionResponse Alibabacloud_Rds20140815::Client::revokeOperatorPermissionWithOptions(shared_ptr<RevokeOperatorPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RevokeOperatorPermission"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RevokeOperatorPermissionResponse(callApi(params, req, runtime));
}

RevokeOperatorPermissionResponse Alibabacloud_Rds20140815::Client::revokeOperatorPermission(shared_ptr<RevokeOperatorPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeOperatorPermissionWithOptions(request, runtime);
}

StartDBInstanceResponse Alibabacloud_Rds20140815::Client::startDBInstanceWithOptions(shared_ptr<StartDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("DedicatedHostGroupId", *request->dedicatedHostGroupId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("TargetDedicatedHostIdForMaster", *request->targetDedicatedHostIdForMaster));
  query->insert(pair<string, string>("TargetDedicatedHostIdForSlave", *request->targetDedicatedHostIdForSlave));
  query->insert(pair<string, string>("TargetDedicatedHostIdForLog", *request->targetDedicatedHostIdForLog));
  query->insert(pair<string, string>("EffectiveTime", *request->effectiveTime));
  query->insert(pair<string, string>("SpecifiedTime", *request->specifiedTime));
  query->insert(pair<string, string>("TargetDBInstanceClass", *request->targetDBInstanceClass));
  query->insert(pair<string, string>("EngineVersion", *request->engineVersion));
  query->insert(pair<string, long>("DBInstanceTransType", *request->DBInstanceTransType));
  query->insert(pair<string, long>("Storage", *request->storage));
  query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  query->insert(pair<string, string>("ZoneId", *request->zoneId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartDBInstance"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartDBInstanceResponse(callApi(params, req, runtime));
}

StartDBInstanceResponse Alibabacloud_Rds20140815::Client::startDBInstance(shared_ptr<StartDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startDBInstanceWithOptions(request, runtime);
}

StopDBInstanceResponse Alibabacloud_Rds20140815::Client::stopDBInstanceWithOptions(shared_ptr<StopDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopDBInstance"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopDBInstanceResponse(callApi(params, req, runtime));
}

StopDBInstanceResponse Alibabacloud_Rds20140815::Client::stopDBInstance(shared_ptr<StopDBInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopDBInstanceWithOptions(request, runtime);
}

SwitchDBInstanceHAResponse Alibabacloud_Rds20140815::Client::switchDBInstanceHAWithOptions(shared_ptr<SwitchDBInstanceHARequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("NodeId", *request->nodeId));
  query->insert(pair<string, string>("Force", *request->force));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("EffectiveTime", *request->effectiveTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SwitchDBInstanceHA"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SwitchDBInstanceHAResponse(callApi(params, req, runtime));
}

SwitchDBInstanceHAResponse Alibabacloud_Rds20140815::Client::switchDBInstanceHA(shared_ptr<SwitchDBInstanceHARequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchDBInstanceHAWithOptions(request, runtime);
}

SwitchDBInstanceNetTypeResponse Alibabacloud_Rds20140815::Client::switchDBInstanceNetTypeWithOptions(shared_ptr<SwitchDBInstanceNetTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("ConnectionStringPrefix", *request->connectionStringPrefix));
  query->insert(pair<string, string>("Port", *request->port));
  query->insert(pair<string, string>("ConnectionStringType", *request->connectionStringType));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SwitchDBInstanceNetType"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SwitchDBInstanceNetTypeResponse(callApi(params, req, runtime));
}

SwitchDBInstanceNetTypeResponse Alibabacloud_Rds20140815::Client::switchDBInstanceNetType(shared_ptr<SwitchDBInstanceNetTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchDBInstanceNetTypeWithOptions(request, runtime);
}

SwitchDBInstanceVpcResponse Alibabacloud_Rds20140815::Client::switchDBInstanceVpcWithOptions(shared_ptr<SwitchDBInstanceVpcRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("VPCId", *request->VPCId));
  query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  query->insert(pair<string, string>("PrivateIpAddress", *request->privateIpAddress));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SwitchDBInstanceVpc"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SwitchDBInstanceVpcResponse(callApi(params, req, runtime));
}

SwitchDBInstanceVpcResponse Alibabacloud_Rds20140815::Client::switchDBInstanceVpc(shared_ptr<SwitchDBInstanceVpcRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchDBInstanceVpcWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Rds20140815::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceType", *request->resourceType));
  query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  query->insert(pair<string, vector<TagResourcesRequestTag>>("Tag", *request->tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagResourcesResponse(callApi(params, req, runtime));
}

TagResourcesResponse Alibabacloud_Rds20140815::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

TerminateMigrateTaskResponse Alibabacloud_Rds20140815::Client::terminateMigrateTaskWithOptions(shared_ptr<TerminateMigrateTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("MigrateTaskId", *request->migrateTaskId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TerminateMigrateTask"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TerminateMigrateTaskResponse(callApi(params, req, runtime));
}

TerminateMigrateTaskResponse Alibabacloud_Rds20140815::Client::terminateMigrateTask(shared_ptr<TerminateMigrateTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return terminateMigrateTaskWithOptions(request, runtime);
}

TransformDBInstancePayTypeResponse Alibabacloud_Rds20140815::Client::transformDBInstancePayTypeWithOptions(shared_ptr<TransformDBInstancePayTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, long>("UsedTime", *request->usedTime));
  query->insert(pair<string, string>("PayType", *request->payType));
  query->insert(pair<string, string>("Period", *request->period));
  query->insert(pair<string, string>("BusinessInfo", *request->businessInfo));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TransformDBInstancePayType"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TransformDBInstancePayTypeResponse(callApi(params, req, runtime));
}

TransformDBInstancePayTypeResponse Alibabacloud_Rds20140815::Client::transformDBInstancePayType(shared_ptr<TransformDBInstancePayTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return transformDBInstancePayTypeWithOptions(request, runtime);
}

UnlockAccountResponse Alibabacloud_Rds20140815::Client::unlockAccountWithOptions(shared_ptr<UnlockAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("AccountName", *request->accountName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnlockAccount"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnlockAccountResponse(callApi(params, req, runtime));
}

UnlockAccountResponse Alibabacloud_Rds20140815::Client::unlockAccount(shared_ptr<UnlockAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unlockAccountWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Rds20140815::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceType", *request->resourceType));
  query->insert(pair<string, bool>("All", *request->all));
  query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  query->insert(pair<string, vector<string>>("TagKey", *request->tagKey));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UntagResourcesResponse(callApi(params, req, runtime));
}

UntagResourcesResponse Alibabacloud_Rds20140815::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UpdateUserBackupFileResponse Alibabacloud_Rds20140815::Client::updateUserBackupFileWithOptions(shared_ptr<UpdateUserBackupFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("BackupId", *request->backupId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("Comment", *request->comment));
  query->insert(pair<string, long>("Retention", *request->retention));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateUserBackupFile"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateUserBackupFileResponse(callApi(params, req, runtime));
}

UpdateUserBackupFileResponse Alibabacloud_Rds20140815::Client::updateUserBackupFile(shared_ptr<UpdateUserBackupFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateUserBackupFileWithOptions(request, runtime);
}

UpgradeDBInstanceEngineVersionResponse Alibabacloud_Rds20140815::Client::upgradeDBInstanceEngineVersionWithOptions(shared_ptr<UpgradeDBInstanceEngineVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("EngineVersion", *request->engineVersion));
  query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  query->insert(pair<string, string>("EffectiveTime", *request->effectiveTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeDBInstanceEngineVersion"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpgradeDBInstanceEngineVersionResponse(callApi(params, req, runtime));
}

UpgradeDBInstanceEngineVersionResponse Alibabacloud_Rds20140815::Client::upgradeDBInstanceEngineVersion(shared_ptr<UpgradeDBInstanceEngineVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeDBInstanceEngineVersionWithOptions(request, runtime);
}

UpgradeDBInstanceKernelVersionResponse Alibabacloud_Rds20140815::Client::upgradeDBInstanceKernelVersionWithOptions(shared_ptr<UpgradeDBInstanceKernelVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("UpgradeTime", *request->upgradeTime));
  query->insert(pair<string, string>("SwitchTime", *request->switchTime));
  query->insert(pair<string, string>("TargetMinorVersion", *request->targetMinorVersion));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeDBInstanceKernelVersion"))},
    {"version", boost::any(string("2014-08-15"))},
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

UpgradeDBInstanceKernelVersionResponse Alibabacloud_Rds20140815::Client::upgradeDBInstanceKernelVersion(shared_ptr<UpgradeDBInstanceKernelVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeDBInstanceKernelVersionWithOptions(request, runtime);
}

UpgradeDBProxyInstanceKernelVersionResponse Alibabacloud_Rds20140815::Client::upgradeDBProxyInstanceKernelVersionWithOptions(shared_ptr<UpgradeDBProxyInstanceKernelVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("OwnerId", *request->ownerId));
  query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("UpgradeTime", *request->upgradeTime));
  query->insert(pair<string, string>("SwitchTime", *request->switchTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeDBProxyInstanceKernelVersion"))},
    {"version", boost::any(string("2014-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpgradeDBProxyInstanceKernelVersionResponse(callApi(params, req, runtime));
}

UpgradeDBProxyInstanceKernelVersionResponse Alibabacloud_Rds20140815::Client::upgradeDBProxyInstanceKernelVersion(shared_ptr<UpgradeDBProxyInstanceKernelVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeDBProxyInstanceKernelVersionWithOptions(request, runtime);
}

