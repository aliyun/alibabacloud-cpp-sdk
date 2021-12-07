// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/drds_20190123.hpp>
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

using namespace Alibabacloud_Drds20190123;

Alibabacloud_Drds20190123::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-1", "drds.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-2-pop", "drds.ap-southeast-1.aliyuncs.com"},
    {"ap-south-1", "drds.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2", "drds.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-3", "drds.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-5", "drds.ap-southeast-1.aliyuncs.com"},
    {"cn-beijing-finance-1", "drds.aliyuncs.com"},
    {"cn-beijing-finance-pop", "drds.aliyuncs.com"},
    {"cn-beijing-gov-1", "drds.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "drds.aliyuncs.com"},
    {"cn-chengdu", "drds.aliyuncs.com"},
    {"cn-edge-1", "drds.aliyuncs.com"},
    {"cn-fujian", "drds.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "drds.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "drds.aliyuncs.com"},
    {"cn-hangzhou-finance", "drds.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "drds.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "drds.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "drds.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "drds.aliyuncs.com"},
    {"cn-hangzhou-test-306", "drds.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "drds.aliyuncs.com"},
    {"cn-qingdao-nebula", "drds.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "drds.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "drds.aliyuncs.com"},
    {"cn-shanghai-inner", "drds.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "drds.aliyuncs.com"},
    {"cn-shenzhen-inner", "drds.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "drds.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "drds.aliyuncs.com"},
    {"cn-wuhan", "drds.aliyuncs.com"},
    {"cn-yushanfang", "drds.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "drds.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "drds.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "drds.aliyuncs.com"},
    {"eu-central-1", "drds.ap-southeast-1.aliyuncs.com"},
    {"eu-west-1", "drds.ap-southeast-1.aliyuncs.com"},
    {"eu-west-1-oxs", "drds.ap-southeast-1.aliyuncs.com"},
    {"me-east-1", "drds.ap-southeast-1.aliyuncs.com"},
    {"rus-west-1-pop", "drds.ap-southeast-1.aliyuncs.com"},
    {"us-west-1", "drds.ap-southeast-1.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("drds"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Drds20190123::Client::getEndpoint(shared_ptr<string> productId,
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

ChangeAccountPasswordResponse Alibabacloud_Drds20190123::Client::changeAccountPasswordWithOptions(shared_ptr<ChangeAccountPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AccountName", *request->accountName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("Password", *request->password));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeAccountPassword"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeAccountPasswordResponse(callApi(params, req, runtime));
}

ChangeAccountPasswordResponse Alibabacloud_Drds20190123::Client::changeAccountPassword(shared_ptr<ChangeAccountPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeAccountPasswordWithOptions(request, runtime);
}

ChangeInstanceAzoneResponse Alibabacloud_Drds20190123::Client::changeInstanceAzoneWithOptions(shared_ptr<ChangeInstanceAzoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("DrdsRegionId", *request->drdsRegionId));
  query->insert(pair<string, string>("OriginAzoneId", *request->originAzoneId));
  query->insert(pair<string, string>("TargetAzoneId", *request->targetAzoneId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeInstanceAzone"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeInstanceAzoneResponse(callApi(params, req, runtime));
}

ChangeInstanceAzoneResponse Alibabacloud_Drds20190123::Client::changeInstanceAzone(shared_ptr<ChangeInstanceAzoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeInstanceAzoneWithOptions(request, runtime);
}

ChangeInstanceNetworkResponse Alibabacloud_Drds20190123::Client::changeInstanceNetworkWithOptions(shared_ptr<ChangeInstanceNetworkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("ClassicExpiredDays", *request->classicExpiredDays));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, bool>("RetainClassic", *request->retainClassic));
  query->insert(pair<string, string>("SrcInstanceNetworkType", *request->srcInstanceNetworkType));
  query->insert(pair<string, string>("VpcId", *request->vpcId));
  query->insert(pair<string, string>("VswitchId", *request->vswitchId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeInstanceNetwork"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeInstanceNetworkResponse(callApi(params, req, runtime));
}

ChangeInstanceNetworkResponse Alibabacloud_Drds20190123::Client::changeInstanceNetwork(shared_ptr<ChangeInstanceNetworkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeInstanceNetworkWithOptions(request, runtime);
}

CheckDrdsDbNameResponse Alibabacloud_Drds20190123::Client::checkDrdsDbNameWithOptions(shared_ptr<CheckDrdsDbNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckDrdsDbName"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckDrdsDbNameResponse(callApi(params, req, runtime));
}

CheckDrdsDbNameResponse Alibabacloud_Drds20190123::Client::checkDrdsDbName(shared_ptr<CheckDrdsDbNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkDrdsDbNameWithOptions(request, runtime);
}

CheckExpandStatusResponse Alibabacloud_Drds20190123::Client::checkExpandStatusWithOptions(shared_ptr<CheckExpandStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckExpandStatus"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckExpandStatusResponse(callApi(params, req, runtime));
}

CheckExpandStatusResponse Alibabacloud_Drds20190123::Client::checkExpandStatus(shared_ptr<CheckExpandStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkExpandStatusWithOptions(request, runtime);
}

CheckRdsSuperAccountResponse Alibabacloud_Drds20190123::Client::checkRdsSuperAccountWithOptions(shared_ptr<CheckRdsSuperAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AccountName", *request->accountName));
  query->insert(pair<string, string>("DbInstanceId", *request->dbInstanceId));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("Password", *request->password));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckRdsSuperAccount"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckRdsSuperAccountResponse(callApi(params, req, runtime));
}

CheckRdsSuperAccountResponse Alibabacloud_Drds20190123::Client::checkRdsSuperAccount(shared_ptr<CheckRdsSuperAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkRdsSuperAccountWithOptions(request, runtime);
}

CheckSqlAuditEnableStatusResponse Alibabacloud_Drds20190123::Client::checkSqlAuditEnableStatusWithOptions(shared_ptr<CheckSqlAuditEnableStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckSqlAuditEnableStatus"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckSqlAuditEnableStatusResponse(callApi(params, req, runtime));
}

CheckSqlAuditEnableStatusResponse Alibabacloud_Drds20190123::Client::checkSqlAuditEnableStatus(shared_ptr<CheckSqlAuditEnableStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkSqlAuditEnableStatusWithOptions(request, runtime);
}

ConfigureDrdsDbInstancesResponse Alibabacloud_Drds20190123::Client::configureDrdsDbInstancesWithOptions(shared_ptr<ConfigureDrdsDbInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, vector<ConfigureDrdsDbInstancesRequestDbInstance>>("DbInstance", *request->dbInstance));
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfigureDrdsDbInstances"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfigureDrdsDbInstancesResponse(callApi(params, req, runtime));
}

ConfigureDrdsDbInstancesResponse Alibabacloud_Drds20190123::Client::configureDrdsDbInstances(shared_ptr<ConfigureDrdsDbInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return configureDrdsDbInstancesWithOptions(request, runtime);
}

CreateDrdsDBResponse Alibabacloud_Drds20190123::Client::createDrdsDBWithOptions(shared_ptr<CreateDrdsDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AccountName", *request->accountName));
  query->insert(pair<string, string>("DbInstType", *request->dbInstType));
  query->insert(pair<string, bool>("DbInstanceIsCreating", *request->dbInstanceIsCreating));
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("Encode", *request->encode));
  query->insert(pair<string, vector<CreateDrdsDBRequestInstDbName>>("InstDbName", *request->instDbName));
  query->insert(pair<string, string>("Password", *request->password));
  query->insert(pair<string, vector<string>>("RdsInstance", *request->rdsInstance));
  query->insert(pair<string, vector<CreateDrdsDBRequestRdsSuperAccount>>("RdsSuperAccount", *request->rdsSuperAccount));
  query->insert(pair<string, string>("Type", *request->type));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDrdsDB"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDrdsDBResponse(callApi(params, req, runtime));
}

CreateDrdsDBResponse Alibabacloud_Drds20190123::Client::createDrdsDB(shared_ptr<CreateDrdsDBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDrdsDBWithOptions(request, runtime);
}

CreateDrdsDBPreCheckResponse Alibabacloud_Drds20190123::Client::createDrdsDBPreCheckWithOptions(shared_ptr<CreateDrdsDBPreCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AccountName", *request->accountName));
  query->insert(pair<string, string>("DbInstType", *request->dbInstType));
  query->insert(pair<string, bool>("DbInstanceIsCreating", *request->dbInstanceIsCreating));
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("Encode", *request->encode));
  query->insert(pair<string, vector<CreateDrdsDBPreCheckRequestInstDbName>>("InstDbName", *request->instDbName));
  query->insert(pair<string, string>("Password", *request->password));
  query->insert(pair<string, vector<string>>("RdsInstance", *request->rdsInstance));
  query->insert(pair<string, vector<CreateDrdsDBPreCheckRequestRdsSuperAccount>>("RdsSuperAccount", *request->rdsSuperAccount));
  query->insert(pair<string, string>("Type", *request->type));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDrdsDBPreCheck"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDrdsDBPreCheckResponse(callApi(params, req, runtime));
}

CreateDrdsDBPreCheckResponse Alibabacloud_Drds20190123::Client::createDrdsDBPreCheck(shared_ptr<CreateDrdsDBPreCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDrdsDBPreCheckWithOptions(request, runtime);
}

CreateDrdsDBPreviewResponse Alibabacloud_Drds20190123::Client::createDrdsDBPreviewWithOptions(shared_ptr<CreateDrdsDBPreviewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AccountName", *request->accountName));
  query->insert(pair<string, string>("DbInstType", *request->dbInstType));
  query->insert(pair<string, bool>("DbInstanceIsCreating", *request->dbInstanceIsCreating));
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, vector<CreateDrdsDBPreviewRequestInstDbName>>("InstDbName", *request->instDbName));
  query->insert(pair<string, string>("OrderId", *request->orderId));
  query->insert(pair<string, vector<string>>("RdsInstance", *request->rdsInstance));
  query->insert(pair<string, string>("Type", *request->type));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDrdsDBPreview"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDrdsDBPreviewResponse(callApi(params, req, runtime));
}

CreateDrdsDBPreviewResponse Alibabacloud_Drds20190123::Client::createDrdsDBPreview(shared_ptr<CreateDrdsDBPreviewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDrdsDBPreviewWithOptions(request, runtime);
}

CreateDrdsInstanceResponse Alibabacloud_Drds20190123::Client::createDrdsInstanceWithOptions(shared_ptr<CreateDrdsInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, long>("Duration", *request->duration));
  query->insert(pair<string, string>("InstanceSeries", *request->instanceSeries));
  query->insert(pair<string, bool>("IsAutoRenew", *request->isAutoRenew));
  query->insert(pair<string, string>("MasterInstId", *request->masterInstId));
  query->insert(pair<string, long>("MySQLVersion", *request->mySQLVersion));
  query->insert(pair<string, string>("PayType", *request->payType));
  query->insert(pair<string, string>("PricingCycle", *request->pricingCycle));
  query->insert(pair<string, long>("Quantity", *request->quantity));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  query->insert(pair<string, string>("Specification", *request->specification));
  query->insert(pair<string, string>("Type", *request->type));
  query->insert(pair<string, string>("VpcId", *request->vpcId));
  query->insert(pair<string, string>("VswitchId", *request->vswitchId));
  query->insert(pair<string, string>("ZoneId", *request->zoneId));
  query->insert(pair<string, bool>("isHa", *request->isHa));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDrdsInstance"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDrdsInstanceResponse(callApi(params, req, runtime));
}

CreateDrdsInstanceResponse Alibabacloud_Drds20190123::Client::createDrdsInstance(shared_ptr<CreateDrdsInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDrdsInstanceWithOptions(request, runtime);
}

CreateEvaluatePreCheckTaskResponse Alibabacloud_Drds20190123::Client::createEvaluatePreCheckTaskWithOptions(shared_ptr<CreateEvaluatePreCheckTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("AvgQpsGrowthScale", *request->avgQpsGrowthScale));
  query->insert(pair<string, long>("DataGrowthScale", *request->dataGrowthScale));
  query->insert(pair<string, vector<CreateEvaluatePreCheckTaskRequestDbInfo>>("DbInfo", *request->dbInfo));
  query->insert(pair<string, long>("EvaluateHours", *request->evaluateHours));
  query->insert(pair<string, string>("TaskName", *request->taskName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEvaluatePreCheckTask"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEvaluatePreCheckTaskResponse(callApi(params, req, runtime));
}

CreateEvaluatePreCheckTaskResponse Alibabacloud_Drds20190123::Client::createEvaluatePreCheckTask(shared_ptr<CreateEvaluatePreCheckTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEvaluatePreCheckTaskWithOptions(request, runtime);
}

CreateInstanceAccountResponse Alibabacloud_Drds20190123::Client::createInstanceAccountWithOptions(shared_ptr<CreateInstanceAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AccountName", *request->accountName));
  query->insert(pair<string, vector<CreateInstanceAccountRequestDbPrivilege>>("DbPrivilege", *request->dbPrivilege));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("Password", *request->password));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateInstanceAccount"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateInstanceAccountResponse(callApi(params, req, runtime));
}

CreateInstanceAccountResponse Alibabacloud_Drds20190123::Client::createInstanceAccount(shared_ptr<CreateInstanceAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createInstanceAccountWithOptions(request, runtime);
}

CreateInstanceInternetAddressResponse Alibabacloud_Drds20190123::Client::createInstanceInternetAddressWithOptions(shared_ptr<CreateInstanceInternetAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateInstanceInternetAddress"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateInstanceInternetAddressResponse(callApi(params, req, runtime));
}

CreateInstanceInternetAddressResponse Alibabacloud_Drds20190123::Client::createInstanceInternetAddress(shared_ptr<CreateInstanceInternetAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createInstanceInternetAddressWithOptions(request, runtime);
}

CreateOrderForRdsResponse Alibabacloud_Drds20190123::Client::createOrderForRdsWithOptions(shared_ptr<CreateOrderForRdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Params", *request->params));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOrderForRds"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOrderForRdsResponse(callApi(params, req, runtime));
}

CreateOrderForRdsResponse Alibabacloud_Drds20190123::Client::createOrderForRds(shared_ptr<CreateOrderForRdsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOrderForRdsWithOptions(request, runtime);
}

CreateShardTaskResponse Alibabacloud_Drds20190123::Client::createShardTaskWithOptions(shared_ptr<CreateShardTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("SourceTableName", *request->sourceTableName));
  query->insert(pair<string, string>("TargetTableName", *request->targetTableName));
  query->insert(pair<string, string>("TaskType", *request->taskType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateShardTask"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateShardTaskResponse(callApi(params, req, runtime));
}

CreateShardTaskResponse Alibabacloud_Drds20190123::Client::createShardTask(shared_ptr<CreateShardTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createShardTaskWithOptions(request, runtime);
}

DescribeBackMenuResponse Alibabacloud_Drds20190123::Client::describeBackMenuWithOptions(shared_ptr<DescribeBackMenuRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackMenu"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBackMenuResponse(callApi(params, req, runtime));
}

DescribeBackMenuResponse Alibabacloud_Drds20190123::Client::describeBackMenu(shared_ptr<DescribeBackMenuRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackMenuWithOptions(request, runtime);
}

DescribeBackupDbsResponse Alibabacloud_Drds20190123::Client::describeBackupDbsWithOptions(shared_ptr<DescribeBackupDbsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("BackupId", *request->backupId));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("PreferredRestoreTime", *request->preferredRestoreTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackupDbs"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBackupDbsResponse(callApi(params, req, runtime));
}

DescribeBackupDbsResponse Alibabacloud_Drds20190123::Client::describeBackupDbs(shared_ptr<DescribeBackupDbsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupDbsWithOptions(request, runtime);
}

DescribeBackupLocalResponse Alibabacloud_Drds20190123::Client::describeBackupLocalWithOptions(shared_ptr<DescribeBackupLocalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackupLocal"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBackupLocalResponse(callApi(params, req, runtime));
}

DescribeBackupLocalResponse Alibabacloud_Drds20190123::Client::describeBackupLocal(shared_ptr<DescribeBackupLocalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupLocalWithOptions(request, runtime);
}

DescribeBackupPolicyResponse Alibabacloud_Drds20190123::Client::describeBackupPolicyWithOptions(shared_ptr<DescribeBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackupPolicy"))},
    {"version", boost::any(string("2019-01-23"))},
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

DescribeBackupPolicyResponse Alibabacloud_Drds20190123::Client::describeBackupPolicy(shared_ptr<DescribeBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupPolicyWithOptions(request, runtime);
}

DescribeBackupSetsResponse Alibabacloud_Drds20190123::Client::describeBackupSetsWithOptions(shared_ptr<DescribeBackupSetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackupSets"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBackupSetsResponse(callApi(params, req, runtime));
}

DescribeBackupSetsResponse Alibabacloud_Drds20190123::Client::describeBackupSets(shared_ptr<DescribeBackupSetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupSetsWithOptions(request, runtime);
}

DescribeBackupTimesResponse Alibabacloud_Drds20190123::Client::describeBackupTimesWithOptions(shared_ptr<DescribeBackupTimesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackupTimes"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBackupTimesResponse(callApi(params, req, runtime));
}

DescribeBackupTimesResponse Alibabacloud_Drds20190123::Client::describeBackupTimes(shared_ptr<DescribeBackupTimesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupTimesWithOptions(request, runtime);
}

DescribeBroadcastTablesResponse Alibabacloud_Drds20190123::Client::describeBroadcastTablesWithOptions(shared_ptr<DescribeBroadcastTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("Query", *request->query));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBroadcastTables"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBroadcastTablesResponse(callApi(params, req, runtime));
}

DescribeBroadcastTablesResponse Alibabacloud_Drds20190123::Client::describeBroadcastTables(shared_ptr<DescribeBroadcastTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBroadcastTablesWithOptions(request, runtime);
}

DescribeDataImportTaskReportResponse Alibabacloud_Drds20190123::Client::describeDataImportTaskReportWithOptions(shared_ptr<DescribeDataImportTaskReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("TaskId", *request->taskId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDataImportTaskReport"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDataImportTaskReportResponse(callApi(params, req, runtime));
}

DescribeDataImportTaskReportResponse Alibabacloud_Drds20190123::Client::describeDataImportTaskReport(shared_ptr<DescribeDataImportTaskReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDataImportTaskReportWithOptions(request, runtime);
}

DescribeDbInstanceDbsResponse Alibabacloud_Drds20190123::Client::describeDbInstanceDbsWithOptions(shared_ptr<DescribeDbInstanceDbsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AccountName", *request->accountName));
  query->insert(pair<string, string>("DbInstType", *request->dbInstType));
  query->insert(pair<string, string>("DbInstanceId", *request->dbInstanceId));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("Password", *request->password));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDbInstanceDbs"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDbInstanceDbsResponse(callApi(params, req, runtime));
}

DescribeDbInstanceDbsResponse Alibabacloud_Drds20190123::Client::describeDbInstanceDbs(shared_ptr<DescribeDbInstanceDbsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDbInstanceDbsWithOptions(request, runtime);
}

DescribeDbInstancesResponse Alibabacloud_Drds20190123::Client::describeDbInstancesWithOptions(shared_ptr<DescribeDbInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbInstType", *request->dbInstType));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("Search", *request->search));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDbInstances"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDbInstancesResponse(callApi(params, req, runtime));
}

DescribeDbInstancesResponse Alibabacloud_Drds20190123::Client::describeDbInstances(shared_ptr<DescribeDbInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDbInstancesWithOptions(request, runtime);
}

DescribeDrdsDBResponse Alibabacloud_Drds20190123::Client::describeDrdsDBWithOptions(shared_ptr<DescribeDrdsDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsDB"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDrdsDBResponse(callApi(params, req, runtime));
}

DescribeDrdsDBResponse Alibabacloud_Drds20190123::Client::describeDrdsDB(shared_ptr<DescribeDrdsDBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsDBWithOptions(request, runtime);
}

DescribeDrdsDBClusterResponse Alibabacloud_Drds20190123::Client::describeDrdsDBClusterWithOptions(shared_ptr<DescribeDrdsDBClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbInstanceId", *request->dbInstanceId));
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsDBCluster"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDrdsDBClusterResponse(callApi(params, req, runtime));
}

DescribeDrdsDBClusterResponse Alibabacloud_Drds20190123::Client::describeDrdsDBCluster(shared_ptr<DescribeDrdsDBClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsDBClusterWithOptions(request, runtime);
}

DescribeDrdsDBIpWhiteListResponse Alibabacloud_Drds20190123::Client::describeDrdsDBIpWhiteListWithOptions(shared_ptr<DescribeDrdsDBIpWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("GroupName", *request->groupName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsDBIpWhiteList"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDrdsDBIpWhiteListResponse(callApi(params, req, runtime));
}

DescribeDrdsDBIpWhiteListResponse Alibabacloud_Drds20190123::Client::describeDrdsDBIpWhiteList(shared_ptr<DescribeDrdsDBIpWhiteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsDBIpWhiteListWithOptions(request, runtime);
}

DescribeDrdsDBsResponse Alibabacloud_Drds20190123::Client::describeDrdsDBsWithOptions(shared_ptr<DescribeDrdsDBsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsDBs"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDrdsDBsResponse(callApi(params, req, runtime));
}

DescribeDrdsDBsResponse Alibabacloud_Drds20190123::Client::describeDrdsDBs(shared_ptr<DescribeDrdsDBsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsDBsWithOptions(request, runtime);
}

DescribeDrdsDbInstanceResponse Alibabacloud_Drds20190123::Client::describeDrdsDbInstanceWithOptions(shared_ptr<DescribeDrdsDbInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbInstanceId", *request->dbInstanceId));
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsDbInstance"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDrdsDbInstanceResponse(callApi(params, req, runtime));
}

DescribeDrdsDbInstanceResponse Alibabacloud_Drds20190123::Client::describeDrdsDbInstance(shared_ptr<DescribeDrdsDbInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsDbInstanceWithOptions(request, runtime);
}

DescribeDrdsDbInstancesResponse Alibabacloud_Drds20190123::Client::describeDrdsDbInstancesWithOptions(shared_ptr<DescribeDrdsDbInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeDrdsDbInstances"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDrdsDbInstancesResponse(callApi(params, req, runtime));
}

DescribeDrdsDbInstancesResponse Alibabacloud_Drds20190123::Client::describeDrdsDbInstances(shared_ptr<DescribeDrdsDbInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsDbInstancesWithOptions(request, runtime);
}

DescribeDrdsDbRdsNameListResponse Alibabacloud_Drds20190123::Client::describeDrdsDbRdsNameListWithOptions(shared_ptr<DescribeDrdsDbRdsNameListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsDbRdsNameList"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDrdsDbRdsNameListResponse(callApi(params, req, runtime));
}

DescribeDrdsDbRdsNameListResponse Alibabacloud_Drds20190123::Client::describeDrdsDbRdsNameList(shared_ptr<DescribeDrdsDbRdsNameListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsDbRdsNameListWithOptions(request, runtime);
}

DescribeDrdsDbSpecAndPriceResponse Alibabacloud_Drds20190123::Client::describeDrdsDbSpecAndPriceWithOptions(shared_ptr<DescribeDrdsDbSpecAndPriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DBName", *request->DBName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsDbSpecAndPrice"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDrdsDbSpecAndPriceResponse(callApi(params, req, runtime));
}

DescribeDrdsDbSpecAndPriceResponse Alibabacloud_Drds20190123::Client::describeDrdsDbSpecAndPrice(shared_ptr<DescribeDrdsDbSpecAndPriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsDbSpecAndPriceWithOptions(request, runtime);
}

DescribeDrdsDbTasksResponse Alibabacloud_Drds20190123::Client::describeDrdsDbTasksWithOptions(shared_ptr<DescribeDrdsDbTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("TaskType", *request->taskType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsDbTasks"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDrdsDbTasksResponse(callApi(params, req, runtime));
}

DescribeDrdsDbTasksResponse Alibabacloud_Drds20190123::Client::describeDrdsDbTasks(shared_ptr<DescribeDrdsDbTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsDbTasksWithOptions(request, runtime);
}

DescribeDrdsInstanceResponse Alibabacloud_Drds20190123::Client::describeDrdsInstanceWithOptions(shared_ptr<DescribeDrdsInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsInstance"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDrdsInstanceResponse(callApi(params, req, runtime));
}

DescribeDrdsInstanceResponse Alibabacloud_Drds20190123::Client::describeDrdsInstance(shared_ptr<DescribeDrdsInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsInstanceWithOptions(request, runtime);
}

DescribeDrdsInstanceDbMonitorResponse Alibabacloud_Drds20190123::Client::describeDrdsInstanceDbMonitorWithOptions(shared_ptr<DescribeDrdsInstanceDbMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, long>("EndTime", *request->endTime));
  query->insert(pair<string, string>("Key", *request->key));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, long>("StartTime", *request->startTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsInstanceDbMonitor"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDrdsInstanceDbMonitorResponse(callApi(params, req, runtime));
}

DescribeDrdsInstanceDbMonitorResponse Alibabacloud_Drds20190123::Client::describeDrdsInstanceDbMonitor(shared_ptr<DescribeDrdsInstanceDbMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsInstanceDbMonitorWithOptions(request, runtime);
}

DescribeDrdsInstanceLevelTasksResponse Alibabacloud_Drds20190123::Client::describeDrdsInstanceLevelTasksWithOptions(shared_ptr<DescribeDrdsInstanceLevelTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsInstanceLevelTasks"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDrdsInstanceLevelTasksResponse(callApi(params, req, runtime));
}

DescribeDrdsInstanceLevelTasksResponse Alibabacloud_Drds20190123::Client::describeDrdsInstanceLevelTasks(shared_ptr<DescribeDrdsInstanceLevelTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsInstanceLevelTasksWithOptions(request, runtime);
}

DescribeDrdsInstanceMonitorResponse Alibabacloud_Drds20190123::Client::describeDrdsInstanceMonitorWithOptions(shared_ptr<DescribeDrdsInstanceMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, long>("EndTime", *request->endTime));
  query->insert(pair<string, string>("Key", *request->key));
  query->insert(pair<string, long>("PeriodMultiple", *request->periodMultiple));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, long>("StartTime", *request->startTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsInstanceMonitor"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDrdsInstanceMonitorResponse(callApi(params, req, runtime));
}

DescribeDrdsInstanceMonitorResponse Alibabacloud_Drds20190123::Client::describeDrdsInstanceMonitor(shared_ptr<DescribeDrdsInstanceMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsInstanceMonitorWithOptions(request, runtime);
}

DescribeDrdsInstanceVersionResponse Alibabacloud_Drds20190123::Client::describeDrdsInstanceVersionWithOptions(shared_ptr<DescribeDrdsInstanceVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsInstanceVersion"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDrdsInstanceVersionResponse(callApi(params, req, runtime));
}

DescribeDrdsInstanceVersionResponse Alibabacloud_Drds20190123::Client::describeDrdsInstanceVersion(shared_ptr<DescribeDrdsInstanceVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsInstanceVersionWithOptions(request, runtime);
}

DescribeDrdsInstancesResponse Alibabacloud_Drds20190123::Client::describeDrdsInstancesWithOptions(shared_ptr<DescribeDrdsInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, bool>("Expired", *request->expired));
  query->insert(pair<string, bool>("Mix", *request->mix));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("ProductVersion", *request->productVersion));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  query->insert(pair<string, vector<DescribeDrdsInstancesRequestTag>>("Tag", *request->tag));
  query->insert(pair<string, string>("Type", *request->type));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsInstances"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDrdsInstancesResponse(callApi(params, req, runtime));
}

DescribeDrdsInstancesResponse Alibabacloud_Drds20190123::Client::describeDrdsInstances(shared_ptr<DescribeDrdsInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsInstancesWithOptions(request, runtime);
}

DescribeDrdsParamsResponse Alibabacloud_Drds20190123::Client::describeDrdsParamsWithOptions(shared_ptr<DescribeDrdsParamsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("ParamLevel", *request->paramLevel));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsParams"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDrdsParamsResponse(callApi(params, req, runtime));
}

DescribeDrdsParamsResponse Alibabacloud_Drds20190123::Client::describeDrdsParams(shared_ptr<DescribeDrdsParamsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsParamsWithOptions(request, runtime);
}

DescribeDrdsRdsInstancesResponse Alibabacloud_Drds20190123::Client::describeDrdsRdsInstancesWithOptions(shared_ptr<DescribeDrdsRdsInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsRdsInstances"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDrdsRdsInstancesResponse(callApi(params, req, runtime));
}

DescribeDrdsRdsInstancesResponse Alibabacloud_Drds20190123::Client::describeDrdsRdsInstances(shared_ptr<DescribeDrdsRdsInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsRdsInstancesWithOptions(request, runtime);
}

DescribeDrdsShardingDbsResponse Alibabacloud_Drds20190123::Client::describeDrdsShardingDbsWithOptions(shared_ptr<DescribeDrdsShardingDbsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DbNamePattern", *request->dbNamePattern));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsShardingDbs"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDrdsShardingDbsResponse(callApi(params, req, runtime));
}

DescribeDrdsShardingDbsResponse Alibabacloud_Drds20190123::Client::describeDrdsShardingDbs(shared_ptr<DescribeDrdsShardingDbsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsShardingDbsWithOptions(request, runtime);
}

DescribeDrdsSlowSqlsResponse Alibabacloud_Drds20190123::Client::describeDrdsSlowSqlsWithOptions(shared_ptr<DescribeDrdsSlowSqlsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, long>("EndTime", *request->endTime));
  query->insert(pair<string, long>("ExeTime", *request->exeTime));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, long>("StartTime", *request->startTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsSlowSqls"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDrdsSlowSqlsResponse(callApi(params, req, runtime));
}

DescribeDrdsSlowSqlsResponse Alibabacloud_Drds20190123::Client::describeDrdsSlowSqls(shared_ptr<DescribeDrdsSlowSqlsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsSlowSqlsWithOptions(request, runtime);
}

DescribeDrdsSqlAuditStatusResponse Alibabacloud_Drds20190123::Client::describeDrdsSqlAuditStatusWithOptions(shared_ptr<DescribeDrdsSqlAuditStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsSqlAuditStatus"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDrdsSqlAuditStatusResponse(callApi(params, req, runtime));
}

DescribeDrdsSqlAuditStatusResponse Alibabacloud_Drds20190123::Client::describeDrdsSqlAuditStatus(shared_ptr<DescribeDrdsSqlAuditStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsSqlAuditStatusWithOptions(request, runtime);
}

DescribeDrdsTasksResponse Alibabacloud_Drds20190123::Client::describeDrdsTasksWithOptions(shared_ptr<DescribeDrdsTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("TaskType", *request->taskType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsTasks"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDrdsTasksResponse(callApi(params, req, runtime));
}

DescribeDrdsTasksResponse Alibabacloud_Drds20190123::Client::describeDrdsTasks(shared_ptr<DescribeDrdsTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsTasksWithOptions(request, runtime);
}

DescribeExpandLogicTableInfoListResponse Alibabacloud_Drds20190123::Client::describeExpandLogicTableInfoListWithOptions(shared_ptr<DescribeExpandLogicTableInfoListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeExpandLogicTableInfoList"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeExpandLogicTableInfoListResponse(callApi(params, req, runtime));
}

DescribeExpandLogicTableInfoListResponse Alibabacloud_Drds20190123::Client::describeExpandLogicTableInfoList(shared_ptr<DescribeExpandLogicTableInfoListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExpandLogicTableInfoListWithOptions(request, runtime);
}

DescribeHiStoreInstanceInfoResponse Alibabacloud_Drds20190123::Client::describeHiStoreInstanceInfoWithOptions(shared_ptr<DescribeHiStoreInstanceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("HistoreInstanceId", *request->historeInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHiStoreInstanceInfo"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHiStoreInstanceInfoResponse(callApi(params, req, runtime));
}

DescribeHiStoreInstanceInfoResponse Alibabacloud_Drds20190123::Client::describeHiStoreInstanceInfo(shared_ptr<DescribeHiStoreInstanceInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHiStoreInstanceInfoWithOptions(request, runtime);
}

DescribeHotDbListResponse Alibabacloud_Drds20190123::Client::describeHotDbListWithOptions(shared_ptr<DescribeHotDbListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHotDbList"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHotDbListResponse(callApi(params, req, runtime));
}

DescribeHotDbListResponse Alibabacloud_Drds20190123::Client::describeHotDbList(shared_ptr<DescribeHotDbListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHotDbListWithOptions(request, runtime);
}

DescribeInstDbLogInfoResponse Alibabacloud_Drds20190123::Client::describeInstDbLogInfoWithOptions(shared_ptr<DescribeInstDbLogInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstDbLogInfo"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstDbLogInfoResponse(callApi(params, req, runtime));
}

DescribeInstDbLogInfoResponse Alibabacloud_Drds20190123::Client::describeInstDbLogInfo(shared_ptr<DescribeInstDbLogInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstDbLogInfoWithOptions(request, runtime);
}

DescribeInstDbSlsInfoResponse Alibabacloud_Drds20190123::Client::describeInstDbSlsInfoWithOptions(shared_ptr<DescribeInstDbSlsInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstDbSlsInfo"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstDbSlsInfoResponse(callApi(params, req, runtime));
}

DescribeInstDbSlsInfoResponse Alibabacloud_Drds20190123::Client::describeInstDbSlsInfo(shared_ptr<DescribeInstDbSlsInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstDbSlsInfoWithOptions(request, runtime);
}

DescribeInstanceAccountsResponse Alibabacloud_Drds20190123::Client::describeInstanceAccountsWithOptions(shared_ptr<DescribeInstanceAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceAccounts"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceAccountsResponse(callApi(params, req, runtime));
}

DescribeInstanceAccountsResponse Alibabacloud_Drds20190123::Client::describeInstanceAccounts(shared_ptr<DescribeInstanceAccountsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceAccountsWithOptions(request, runtime);
}

DescribeInstanceMenuSwitchResponse Alibabacloud_Drds20190123::Client::describeInstanceMenuSwitchWithOptions(shared_ptr<DescribeInstanceMenuSwitchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceMenuSwitch"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceMenuSwitchResponse(callApi(params, req, runtime));
}

DescribeInstanceMenuSwitchResponse Alibabacloud_Drds20190123::Client::describeInstanceMenuSwitch(shared_ptr<DescribeInstanceMenuSwitchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceMenuSwitchWithOptions(request, runtime);
}

DescribeInstanceSwitchAzoneResponse Alibabacloud_Drds20190123::Client::describeInstanceSwitchAzoneWithOptions(shared_ptr<DescribeInstanceSwitchAzoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceSwitchAzone"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceSwitchAzoneResponse(callApi(params, req, runtime));
}

DescribeInstanceSwitchAzoneResponse Alibabacloud_Drds20190123::Client::describeInstanceSwitchAzone(shared_ptr<DescribeInstanceSwitchAzoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceSwitchAzoneWithOptions(request, runtime);
}

DescribeInstanceSwitchNetworkResponse Alibabacloud_Drds20190123::Client::describeInstanceSwitchNetworkWithOptions(shared_ptr<DescribeInstanceSwitchNetworkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceSwitchNetwork"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceSwitchNetworkResponse(callApi(params, req, runtime));
}

DescribeInstanceSwitchNetworkResponse Alibabacloud_Drds20190123::Client::describeInstanceSwitchNetwork(shared_ptr<DescribeInstanceSwitchNetworkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceSwitchNetworkWithOptions(request, runtime);
}

DescribePreCheckResultResponse Alibabacloud_Drds20190123::Client::describePreCheckResultWithOptions(shared_ptr<DescribePreCheckResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("TaskId", *request->taskId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePreCheckResult"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePreCheckResultResponse(callApi(params, req, runtime));
}

DescribePreCheckResultResponse Alibabacloud_Drds20190123::Client::describePreCheckResult(shared_ptr<DescribePreCheckResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePreCheckResultWithOptions(request, runtime);
}

DescribeRDSPerformanceResponse Alibabacloud_Drds20190123::Client::describeRDSPerformanceWithOptions(shared_ptr<DescribeRDSPerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbInstType", *request->dbInstType));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, long>("EndTime", *request->endTime));
  query->insert(pair<string, string>("Keys", *request->keys));
  query->insert(pair<string, string>("RdsInstanceId", *request->rdsInstanceId));
  query->insert(pair<string, long>("StartTime", *request->startTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRDSPerformance"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRDSPerformanceResponse(callApi(params, req, runtime));
}

DescribeRDSPerformanceResponse Alibabacloud_Drds20190123::Client::describeRDSPerformance(shared_ptr<DescribeRDSPerformanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRDSPerformanceWithOptions(request, runtime);
}

DescribeRdsCommodityResponse Alibabacloud_Drds20190123::Client::describeRdsCommodityWithOptions(shared_ptr<DescribeRdsCommodityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CommodityCode", *request->commodityCode));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("OrderType", *request->orderType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRdsCommodity"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRdsCommodityResponse(callApi(params, req, runtime));
}

DescribeRdsCommodityResponse Alibabacloud_Drds20190123::Client::describeRdsCommodity(shared_ptr<DescribeRdsCommodityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRdsCommodityWithOptions(request, runtime);
}

DescribeRdsDrdsDBResponse Alibabacloud_Drds20190123::Client::describeRdsDrdsDBWithOptions(shared_ptr<DescribeRdsDrdsDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, vector<string>>("RdsInstanceId", *request->rdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRdsDrdsDB"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRdsDrdsDBResponse(callApi(params, req, runtime));
}

DescribeRdsDrdsDBResponse Alibabacloud_Drds20190123::Client::describeRdsDrdsDB(shared_ptr<DescribeRdsDrdsDBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRdsDrdsDBWithOptions(request, runtime);
}

DescribeRdsPerformanceSummaryResponse Alibabacloud_Drds20190123::Client::describeRdsPerformanceSummaryWithOptions(shared_ptr<DescribeRdsPerformanceSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, vector<string>>("RdsInstanceId", *request->rdsInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRdsPerformanceSummary"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRdsPerformanceSummaryResponse(callApi(params, req, runtime));
}

DescribeRdsPerformanceSummaryResponse Alibabacloud_Drds20190123::Client::describeRdsPerformanceSummary(shared_ptr<DescribeRdsPerformanceSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRdsPerformanceSummaryWithOptions(request, runtime);
}

DescribeRdsPriceResponse Alibabacloud_Drds20190123::Client::describeRdsPriceWithOptions(shared_ptr<DescribeRdsPriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Params", *request->params));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRdsPrice"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRdsPriceResponse(callApi(params, req, runtime));
}

DescribeRdsPriceResponse Alibabacloud_Drds20190123::Client::describeRdsPrice(shared_ptr<DescribeRdsPriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRdsPriceWithOptions(request, runtime);
}

DescribeRdsReadOnlyResponse Alibabacloud_Drds20190123::Client::describeRdsReadOnlyWithOptions(shared_ptr<DescribeRdsReadOnlyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbInstType", *request->dbInstType));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("RdsInstanceId", *request->rdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRdsReadOnly"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRdsReadOnlyResponse(callApi(params, req, runtime));
}

DescribeRdsReadOnlyResponse Alibabacloud_Drds20190123::Client::describeRdsReadOnly(shared_ptr<DescribeRdsReadOnlyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRdsReadOnlyWithOptions(request, runtime);
}

DescribeRdsSuperAccountInstancesResponse Alibabacloud_Drds20190123::Client::describeRdsSuperAccountInstancesWithOptions(shared_ptr<DescribeRdsSuperAccountInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbInstType", *request->dbInstType));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, vector<string>>("RdsInstance", *request->rdsInstance));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRdsSuperAccountInstances"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRdsSuperAccountInstancesResponse(callApi(params, req, runtime));
}

DescribeRdsSuperAccountInstancesResponse Alibabacloud_Drds20190123::Client::describeRdsSuperAccountInstances(shared_ptr<DescribeRdsSuperAccountInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRdsSuperAccountInstancesWithOptions(request, runtime);
}

DescribeRdsVpcForZoneResponse Alibabacloud_Drds20190123::Client::describeRdsVpcForZoneWithOptions(shared_ptr<DescribeRdsVpcForZoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ZoneId", *request->zoneId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRdsVpcForZone"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRdsVpcForZoneResponse(callApi(params, req, runtime));
}

DescribeRdsVpcForZoneResponse Alibabacloud_Drds20190123::Client::describeRdsVpcForZone(shared_ptr<DescribeRdsVpcForZoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRdsVpcForZoneWithOptions(request, runtime);
}

DescribeRecycleBinStatusResponse Alibabacloud_Drds20190123::Client::describeRecycleBinStatusWithOptions(shared_ptr<DescribeRecycleBinStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRecycleBinStatus"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRecycleBinStatusResponse(callApi(params, req, runtime));
}

DescribeRecycleBinStatusResponse Alibabacloud_Drds20190123::Client::describeRecycleBinStatus(shared_ptr<DescribeRecycleBinStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRecycleBinStatusWithOptions(request, runtime);
}

DescribeRecycleBinTablesResponse Alibabacloud_Drds20190123::Client::describeRecycleBinTablesWithOptions(shared_ptr<DescribeRecycleBinTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRecycleBinTables"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRecycleBinTablesResponse(callApi(params, req, runtime));
}

DescribeRecycleBinTablesResponse Alibabacloud_Drds20190123::Client::describeRecycleBinTables(shared_ptr<DescribeRecycleBinTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRecycleBinTablesWithOptions(request, runtime);
}

DescribeRestoreOrderResponse Alibabacloud_Drds20190123::Client::describeRestoreOrderWithOptions(shared_ptr<DescribeRestoreOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("BackupDbNames", *request->backupDbNames));
  query->insert(pair<string, string>("BackupId", *request->backupId));
  query->insert(pair<string, string>("BackupLevel", *request->backupLevel));
  query->insert(pair<string, string>("BackupMode", *request->backupMode));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("PreferredBackupTime", *request->preferredBackupTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRestoreOrder"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRestoreOrderResponse(callApi(params, req, runtime));
}

DescribeRestoreOrderResponse Alibabacloud_Drds20190123::Client::describeRestoreOrder(shared_ptr<DescribeRestoreOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRestoreOrderWithOptions(request, runtime);
}

DescribeShardTaskInfoResponse Alibabacloud_Drds20190123::Client::describeShardTaskInfoWithOptions(shared_ptr<DescribeShardTaskInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("SourceTableName", *request->sourceTableName));
  query->insert(pair<string, string>("TargetTableName", *request->targetTableName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeShardTaskInfo"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeShardTaskInfoResponse(callApi(params, req, runtime));
}

DescribeShardTaskInfoResponse Alibabacloud_Drds20190123::Client::describeShardTaskInfo(shared_ptr<DescribeShardTaskInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeShardTaskInfoWithOptions(request, runtime);
}

DescribeShardTaskListResponse Alibabacloud_Drds20190123::Client::describeShardTaskListWithOptions(shared_ptr<DescribeShardTaskListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("Query", *request->query));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("TaskType", *request->taskType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeShardTaskList"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeShardTaskListResponse(callApi(params, req, runtime));
}

DescribeShardTaskListResponse Alibabacloud_Drds20190123::Client::describeShardTaskList(shared_ptr<DescribeShardTaskListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeShardTaskListWithOptions(request, runtime);
}

DescribeSqlFlashbakTaskResponse Alibabacloud_Drds20190123::Client::describeSqlFlashbakTaskWithOptions(shared_ptr<DescribeSqlFlashbakTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSqlFlashbakTask"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSqlFlashbakTaskResponse(callApi(params, req, runtime));
}

DescribeSqlFlashbakTaskResponse Alibabacloud_Drds20190123::Client::describeSqlFlashbakTask(shared_ptr<DescribeSqlFlashbakTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSqlFlashbakTaskWithOptions(request, runtime);
}

DescribeSrcRdsListResponse Alibabacloud_Drds20190123::Client::describeSrcRdsListWithOptions(shared_ptr<DescribeSrcRdsListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, vector<DescribeSrcRdsListRequestPartitionMapping>>("PartitionMapping", *request->partitionMapping));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSrcRdsList"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSrcRdsListResponse(callApi(params, req, runtime));
}

DescribeSrcRdsListResponse Alibabacloud_Drds20190123::Client::describeSrcRdsList(shared_ptr<DescribeSrcRdsListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSrcRdsListWithOptions(request, runtime);
}

DescribeTableResponse Alibabacloud_Drds20190123::Client::describeTableWithOptions(shared_ptr<DescribeTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("TableName", *request->tableName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTable"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTableResponse(callApi(params, req, runtime));
}

DescribeTableResponse Alibabacloud_Drds20190123::Client::describeTable(shared_ptr<DescribeTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTableWithOptions(request, runtime);
}

DescribeTableListByTypeResponse Alibabacloud_Drds20190123::Client::describeTableListByTypeWithOptions(shared_ptr<DescribeTableListByTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("Query", *request->query));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("TableType", *request->tableType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTableListByType"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTableListByTypeResponse(callApi(params, req, runtime));
}

DescribeTableListByTypeResponse Alibabacloud_Drds20190123::Client::describeTableListByType(shared_ptr<DescribeTableListByTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTableListByTypeWithOptions(request, runtime);
}

DescribeTablesResponse Alibabacloud_Drds20190123::Client::describeTablesWithOptions(shared_ptr<DescribeTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("Query", *request->query));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTables"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTablesResponse(callApi(params, req, runtime));
}

DescribeTablesResponse Alibabacloud_Drds20190123::Client::describeTables(shared_ptr<DescribeTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTablesWithOptions(request, runtime);
}

DisableSqlAuditResponse Alibabacloud_Drds20190123::Client::disableSqlAuditWithOptions(shared_ptr<DisableSqlAuditRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableSqlAudit"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableSqlAuditResponse(callApi(params, req, runtime));
}

DisableSqlAuditResponse Alibabacloud_Drds20190123::Client::disableSqlAudit(shared_ptr<DisableSqlAuditRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableSqlAuditWithOptions(request, runtime);
}

EnableInstanceIpv6AddressResponse Alibabacloud_Drds20190123::Client::enableInstanceIpv6AddressWithOptions(shared_ptr<EnableInstanceIpv6AddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableInstanceIpv6Address"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableInstanceIpv6AddressResponse(callApi(params, req, runtime));
}

EnableInstanceIpv6AddressResponse Alibabacloud_Drds20190123::Client::enableInstanceIpv6Address(shared_ptr<EnableInstanceIpv6AddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableInstanceIpv6AddressWithOptions(request, runtime);
}

EnableSqlAuditResponse Alibabacloud_Drds20190123::Client::enableSqlAuditWithOptions(shared_ptr<EnableSqlAuditRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, bool>("IsRecall", *request->isRecall));
  query->insert(pair<string, string>("RecallEndTimestamp", *request->recallEndTimestamp));
  query->insert(pair<string, string>("RecallStartTimestamp", *request->recallStartTimestamp));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableSqlAudit"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableSqlAuditResponse(callApi(params, req, runtime));
}

EnableSqlAuditResponse Alibabacloud_Drds20190123::Client::enableSqlAudit(shared_ptr<EnableSqlAuditRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableSqlAuditWithOptions(request, runtime);
}

EnableSqlFlashbackMatchSwitchResponse Alibabacloud_Drds20190123::Client::enableSqlFlashbackMatchSwitchWithOptions(shared_ptr<EnableSqlFlashbackMatchSwitchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableSqlFlashbackMatchSwitch"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableSqlFlashbackMatchSwitchResponse(callApi(params, req, runtime));
}

EnableSqlFlashbackMatchSwitchResponse Alibabacloud_Drds20190123::Client::enableSqlFlashbackMatchSwitch(shared_ptr<EnableSqlFlashbackMatchSwitchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableSqlFlashbackMatchSwitchWithOptions(request, runtime);
}

FlashbackRecycleBinTableResponse Alibabacloud_Drds20190123::Client::flashbackRecycleBinTableWithOptions(shared_ptr<FlashbackRecycleBinTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("TableName", *request->tableName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlashbackRecycleBinTable"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlashbackRecycleBinTableResponse(callApi(params, req, runtime));
}

FlashbackRecycleBinTableResponse Alibabacloud_Drds20190123::Client::flashbackRecycleBinTable(shared_ptr<FlashbackRecycleBinTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return flashbackRecycleBinTableWithOptions(request, runtime);
}

GetDrdsDbRdsRelationInfoResponse Alibabacloud_Drds20190123::Client::getDrdsDbRdsRelationInfoWithOptions(shared_ptr<GetDrdsDbRdsRelationInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDrdsDbRdsRelationInfo"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDrdsDbRdsRelationInfoResponse(callApi(params, req, runtime));
}

GetDrdsDbRdsRelationInfoResponse Alibabacloud_Drds20190123::Client::getDrdsDbRdsRelationInfo(shared_ptr<GetDrdsDbRdsRelationInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDrdsDbRdsRelationInfoWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Drds20190123::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  query->insert(pair<string, string>("ResourceType", *request->resourceType));
  query->insert(pair<string, vector<ListTagResourcesRequestTag>>("Tag", *request->tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagResources"))},
    {"version", boost::any(string("2019-01-23"))},
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

ListTagResourcesResponse Alibabacloud_Drds20190123::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ListUserReportsResponse Alibabacloud_Drds20190123::Client::listUserReportsWithOptions(shared_ptr<ListUserReportsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, long>("ReportId", *request->reportId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserReports"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUserReportsResponse(callApi(params, req, runtime));
}

ListUserReportsResponse Alibabacloud_Drds20190123::Client::listUserReports(shared_ptr<ListUserReportsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserReportsWithOptions(request, runtime);
}

ListVersionsResponse Alibabacloud_Drds20190123::Client::listVersionsWithOptions(shared_ptr<ListVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("DrdsVer", *request->drdsVer));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVersions"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListVersionsResponse(callApi(params, req, runtime));
}

ListVersionsResponse Alibabacloud_Drds20190123::Client::listVersions(shared_ptr<ListVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVersionsWithOptions(request, runtime);
}

ManagePrivateRdsResponse Alibabacloud_Drds20190123::Client::managePrivateRdsWithOptions(shared_ptr<ManagePrivateRdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("Params", *request->params));
  query->insert(pair<string, string>("RdsAction", *request->rdsAction));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ManagePrivateRds"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ManagePrivateRdsResponse(callApi(params, req, runtime));
}

ManagePrivateRdsResponse Alibabacloud_Drds20190123::Client::managePrivateRds(shared_ptr<ManagePrivateRdsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return managePrivateRdsWithOptions(request, runtime);
}

ModifyAccountDescriptionResponse Alibabacloud_Drds20190123::Client::modifyAccountDescriptionWithOptions(shared_ptr<ModifyAccountDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AccountName", *request->accountName));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAccountDescription"))},
    {"version", boost::any(string("2019-01-23"))},
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

ModifyAccountDescriptionResponse Alibabacloud_Drds20190123::Client::modifyAccountDescription(shared_ptr<ModifyAccountDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAccountDescriptionWithOptions(request, runtime);
}

ModifyAccountPrivilegeResponse Alibabacloud_Drds20190123::Client::modifyAccountPrivilegeWithOptions(shared_ptr<ModifyAccountPrivilegeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AccountName", *request->accountName));
  query->insert(pair<string, vector<ModifyAccountPrivilegeRequestDbPrivilege>>("DbPrivilege", *request->dbPrivilege));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAccountPrivilege"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAccountPrivilegeResponse(callApi(params, req, runtime));
}

ModifyAccountPrivilegeResponse Alibabacloud_Drds20190123::Client::modifyAccountPrivilege(shared_ptr<ModifyAccountPrivilegeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAccountPrivilegeWithOptions(request, runtime);
}

ModifyDrdsInstanceDescriptionResponse Alibabacloud_Drds20190123::Client::modifyDrdsInstanceDescriptionWithOptions(shared_ptr<ModifyDrdsInstanceDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDrdsInstanceDescription"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDrdsInstanceDescriptionResponse(callApi(params, req, runtime));
}

ModifyDrdsInstanceDescriptionResponse Alibabacloud_Drds20190123::Client::modifyDrdsInstanceDescription(shared_ptr<ModifyDrdsInstanceDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDrdsInstanceDescriptionWithOptions(request, runtime);
}

ModifyDrdsIpWhiteListResponse Alibabacloud_Drds20190123::Client::modifyDrdsIpWhiteListWithOptions(shared_ptr<ModifyDrdsIpWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("GroupAttribute", *request->groupAttribute));
  query->insert(pair<string, string>("GroupName", *request->groupName));
  query->insert(pair<string, string>("IpWhiteList", *request->ipWhiteList));
  query->insert(pair<string, bool>("Mode", *request->mode));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDrdsIpWhiteList"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDrdsIpWhiteListResponse(callApi(params, req, runtime));
}

ModifyDrdsIpWhiteListResponse Alibabacloud_Drds20190123::Client::modifyDrdsIpWhiteList(shared_ptr<ModifyDrdsIpWhiteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDrdsIpWhiteListWithOptions(request, runtime);
}

ModifyEventTaskStatusResponse Alibabacloud_Drds20190123::Client::modifyEventTaskStatusWithOptions(shared_ptr<ModifyEventTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("EventId", *request->eventId));
  query->insert(pair<string, string>("Region", *request->region));
  query->insert(pair<string, long>("SwitchTime", *request->switchTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyEventTaskStatus"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyEventTaskStatusResponse(callApi(params, req, runtime));
}

ModifyEventTaskStatusResponse Alibabacloud_Drds20190123::Client::modifyEventTaskStatus(shared_ptr<ModifyEventTaskStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyEventTaskStatusWithOptions(request, runtime);
}

ModifyPolarDbReadWeightResponse Alibabacloud_Drds20190123::Client::modifyPolarDbReadWeightWithOptions(shared_ptr<ModifyPolarDbReadWeightRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbInstanceId", *request->dbInstanceId));
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DbNodeIds", *request->dbNodeIds));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("Weights", *request->weights));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyPolarDbReadWeight"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyPolarDbReadWeightResponse(callApi(params, req, runtime));
}

ModifyPolarDbReadWeightResponse Alibabacloud_Drds20190123::Client::modifyPolarDbReadWeight(shared_ptr<ModifyPolarDbReadWeightRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyPolarDbReadWeightWithOptions(request, runtime);
}

ModifyRdsReadWeightResponse Alibabacloud_Drds20190123::Client::modifyRdsReadWeightWithOptions(shared_ptr<ModifyRdsReadWeightRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("InstanceNames", *request->instanceNames));
  query->insert(pair<string, string>("Weights", *request->weights));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyRdsReadWeight"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyRdsReadWeightResponse(callApi(params, req, runtime));
}

ModifyRdsReadWeightResponse Alibabacloud_Drds20190123::Client::modifyRdsReadWeight(shared_ptr<ModifyRdsReadWeightRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyRdsReadWeightWithOptions(request, runtime);
}

PreCheckSqlFlashbackTaskResponse Alibabacloud_Drds20190123::Client::preCheckSqlFlashbackTaskWithOptions(shared_ptr<PreCheckSqlFlashbackTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PreCheckSqlFlashbackTask"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PreCheckSqlFlashbackTaskResponse(callApi(params, req, runtime));
}

PreCheckSqlFlashbackTaskResponse Alibabacloud_Drds20190123::Client::preCheckSqlFlashbackTask(shared_ptr<PreCheckSqlFlashbackTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return preCheckSqlFlashbackTaskWithOptions(request, runtime);
}

PutRestorePreCheckResponse Alibabacloud_Drds20190123::Client::putRestorePreCheckWithOptions(shared_ptr<PutRestorePreCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("BackupDbNames", *request->backupDbNames));
  query->insert(pair<string, string>("BackupId", *request->backupId));
  query->insert(pair<string, string>("BackupLevel", *request->backupLevel));
  query->insert(pair<string, string>("BackupMode", *request->backupMode));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("PreferredBackupTime", *request->preferredBackupTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutRestorePreCheck"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutRestorePreCheckResponse(callApi(params, req, runtime));
}

PutRestorePreCheckResponse Alibabacloud_Drds20190123::Client::putRestorePreCheck(shared_ptr<PutRestorePreCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putRestorePreCheckWithOptions(request, runtime);
}

PutStartBackupResponse Alibabacloud_Drds20190123::Client::putStartBackupWithOptions(shared_ptr<PutStartBackupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("BackupDbNames", *request->backupDbNames));
  query->insert(pair<string, string>("BackupLevel", *request->backupLevel));
  query->insert(pair<string, string>("BackupMode", *request->backupMode));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutStartBackup"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutStartBackupResponse(callApi(params, req, runtime));
}

PutStartBackupResponse Alibabacloud_Drds20190123::Client::putStartBackup(shared_ptr<PutStartBackupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putStartBackupWithOptions(request, runtime);
}

RearrangeDbToInstanceResponse Alibabacloud_Drds20190123::Client::rearrangeDbToInstanceWithOptions(shared_ptr<RearrangeDbToInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ChooseRds", *request->chooseRds));
  query->insert(pair<string, string>("ChooseSubDb", *request->chooseSubDb));
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, vector<string>>("InstanceList", *request->instanceList));
  query->insert(pair<string, string>("OrderId", *request->orderId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RearrangeDbToInstance"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RearrangeDbToInstanceResponse(callApi(params, req, runtime));
}

RearrangeDbToInstanceResponse Alibabacloud_Drds20190123::Client::rearrangeDbToInstance(shared_ptr<RearrangeDbToInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rearrangeDbToInstanceWithOptions(request, runtime);
}

RefreshDrdsAtomUrlResponse Alibabacloud_Drds20190123::Client::refreshDrdsAtomUrlWithOptions(shared_ptr<RefreshDrdsAtomUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefreshDrdsAtomUrl"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefreshDrdsAtomUrlResponse(callApi(params, req, runtime));
}

RefreshDrdsAtomUrlResponse Alibabacloud_Drds20190123::Client::refreshDrdsAtomUrl(shared_ptr<RefreshDrdsAtomUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshDrdsAtomUrlWithOptions(request, runtime);
}

ReleaseInstanceInternetAddressResponse Alibabacloud_Drds20190123::Client::releaseInstanceInternetAddressWithOptions(shared_ptr<ReleaseInstanceInternetAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseInstanceInternetAddress"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReleaseInstanceInternetAddressResponse(callApi(params, req, runtime));
}

ReleaseInstanceInternetAddressResponse Alibabacloud_Drds20190123::Client::releaseInstanceInternetAddress(shared_ptr<ReleaseInstanceInternetAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseInstanceInternetAddressWithOptions(request, runtime);
}

RemoveBackupsSetResponse Alibabacloud_Drds20190123::Client::removeBackupsSetWithOptions(shared_ptr<RemoveBackupsSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("BackupId", *request->backupId));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveBackupsSet"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveBackupsSetResponse(callApi(params, req, runtime));
}

RemoveBackupsSetResponse Alibabacloud_Drds20190123::Client::removeBackupsSet(shared_ptr<RemoveBackupsSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeBackupsSetWithOptions(request, runtime);
}

RemoveDrdsDbResponse Alibabacloud_Drds20190123::Client::removeDrdsDbWithOptions(shared_ptr<RemoveDrdsDbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveDrdsDb"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveDrdsDbResponse(callApi(params, req, runtime));
}

RemoveDrdsDbResponse Alibabacloud_Drds20190123::Client::removeDrdsDb(shared_ptr<RemoveDrdsDbRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeDrdsDbWithOptions(request, runtime);
}

RemoveDrdsDbFailedRecordResponse Alibabacloud_Drds20190123::Client::removeDrdsDbFailedRecordWithOptions(shared_ptr<RemoveDrdsDbFailedRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveDrdsDbFailedRecord"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveDrdsDbFailedRecordResponse(callApi(params, req, runtime));
}

RemoveDrdsDbFailedRecordResponse Alibabacloud_Drds20190123::Client::removeDrdsDbFailedRecord(shared_ptr<RemoveDrdsDbFailedRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeDrdsDbFailedRecordWithOptions(request, runtime);
}

RemoveDrdsInstanceResponse Alibabacloud_Drds20190123::Client::removeDrdsInstanceWithOptions(shared_ptr<RemoveDrdsInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveDrdsInstance"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveDrdsInstanceResponse(callApi(params, req, runtime));
}

RemoveDrdsInstanceResponse Alibabacloud_Drds20190123::Client::removeDrdsInstance(shared_ptr<RemoveDrdsInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeDrdsInstanceWithOptions(request, runtime);
}

RemoveDrdsMysqlResponse Alibabacloud_Drds20190123::Client::removeDrdsMysqlWithOptions(shared_ptr<RemoveDrdsMysqlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbInstanceId", *request->dbInstanceId));
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, bool>("Force", *request->force));
  query->insert(pair<string, string>("RoDbInstanceId", *request->roDbInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveDrdsMysql"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveDrdsMysqlResponse(callApi(params, req, runtime));
}

RemoveDrdsMysqlResponse Alibabacloud_Drds20190123::Client::removeDrdsMysql(shared_ptr<RemoveDrdsMysqlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeDrdsMysqlWithOptions(request, runtime);
}

RemoveInstanceAccountResponse Alibabacloud_Drds20190123::Client::removeInstanceAccountWithOptions(shared_ptr<RemoveInstanceAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AccountName", *request->accountName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveInstanceAccount"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveInstanceAccountResponse(callApi(params, req, runtime));
}

RemoveInstanceAccountResponse Alibabacloud_Drds20190123::Client::removeInstanceAccount(shared_ptr<RemoveInstanceAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeInstanceAccountWithOptions(request, runtime);
}

RemoveRecycleBinTableResponse Alibabacloud_Drds20190123::Client::removeRecycleBinTableWithOptions(shared_ptr<RemoveRecycleBinTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("TableName", *request->tableName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveRecycleBinTable"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveRecycleBinTableResponse(callApi(params, req, runtime));
}

RemoveRecycleBinTableResponse Alibabacloud_Drds20190123::Client::removeRecycleBinTable(shared_ptr<RemoveRecycleBinTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeRecycleBinTableWithOptions(request, runtime);
}

RestartDrdsInstanceResponse Alibabacloud_Drds20190123::Client::restartDrdsInstanceWithOptions(shared_ptr<RestartDrdsInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestartDrdsInstance"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RestartDrdsInstanceResponse(callApi(params, req, runtime));
}

RestartDrdsInstanceResponse Alibabacloud_Drds20190123::Client::restartDrdsInstance(shared_ptr<RestartDrdsInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restartDrdsInstanceWithOptions(request, runtime);
}

RollbackInstanceVersionResponse Alibabacloud_Drds20190123::Client::rollbackInstanceVersionWithOptions(shared_ptr<RollbackInstanceVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RollbackInstanceVersion"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RollbackInstanceVersionResponse(callApi(params, req, runtime));
}

RollbackInstanceVersionResponse Alibabacloud_Drds20190123::Client::rollbackInstanceVersion(shared_ptr<RollbackInstanceVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rollbackInstanceVersionWithOptions(request, runtime);
}

SetBackupLocalResponse Alibabacloud_Drds20190123::Client::setBackupLocalWithOptions(shared_ptr<SetBackupLocalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("HighSpaceUsageProtection", *request->highSpaceUsageProtection));
  query->insert(pair<string, string>("LocalLogRetentionHours", *request->localLogRetentionHours));
  query->insert(pair<string, string>("LocalLogRetentionSpace", *request->localLogRetentionSpace));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetBackupLocal"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetBackupLocalResponse(callApi(params, req, runtime));
}

SetBackupLocalResponse Alibabacloud_Drds20190123::Client::setBackupLocal(shared_ptr<SetBackupLocalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setBackupLocalWithOptions(request, runtime);
}

SetBackupPolicyResponse Alibabacloud_Drds20190123::Client::setBackupPolicyWithOptions(shared_ptr<SetBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("BackupDbNames", *request->backupDbNames));
  query->insert(pair<string, string>("BackupLevel", *request->backupLevel));
  query->insert(pair<string, string>("BackupLog", *request->backupLog));
  query->insert(pair<string, string>("BackupMode", *request->backupMode));
  query->insert(pair<string, string>("DataBackupRetentionPeriod", *request->dataBackupRetentionPeriod));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("LogBackupRetentionPeriod", *request->logBackupRetentionPeriod));
  query->insert(pair<string, string>("PreferredBackupEndTime", *request->preferredBackupEndTime));
  query->insert(pair<string, string>("PreferredBackupPeriod", *request->preferredBackupPeriod));
  query->insert(pair<string, string>("PreferredBackupStartTime", *request->preferredBackupStartTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetBackupPolicy"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetBackupPolicyResponse(callApi(params, req, runtime));
}

SetBackupPolicyResponse Alibabacloud_Drds20190123::Client::setBackupPolicy(shared_ptr<SetBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setBackupPolicyWithOptions(request, runtime);
}

SetupBroadcastTablesResponse Alibabacloud_Drds20190123::Client::setupBroadcastTablesWithOptions(shared_ptr<SetupBroadcastTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, bool>("Active", *request->active));
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, vector<string>>("TableName", *request->tableName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetupBroadcastTables"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetupBroadcastTablesResponse(callApi(params, req, runtime));
}

SetupBroadcastTablesResponse Alibabacloud_Drds20190123::Client::setupBroadcastTables(shared_ptr<SetupBroadcastTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setupBroadcastTablesWithOptions(request, runtime);
}

SetupDrdsParamsResponse Alibabacloud_Drds20190123::Client::setupDrdsParamsWithOptions(shared_ptr<SetupDrdsParamsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, vector<SetupDrdsParamsRequestData>>("Data", *request->data));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("ParamLevel", *request->paramLevel));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetupDrdsParams"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetupDrdsParamsResponse(callApi(params, req, runtime));
}

SetupDrdsParamsResponse Alibabacloud_Drds20190123::Client::setupDrdsParams(shared_ptr<SetupDrdsParamsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setupDrdsParamsWithOptions(request, runtime);
}

SetupRecycleBinStatusResponse Alibabacloud_Drds20190123::Client::setupRecycleBinStatusWithOptions(shared_ptr<SetupRecycleBinStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("StatusAction", *request->statusAction));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetupRecycleBinStatus"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetupRecycleBinStatusResponse(callApi(params, req, runtime));
}

SetupRecycleBinStatusResponse Alibabacloud_Drds20190123::Client::setupRecycleBinStatus(shared_ptr<SetupRecycleBinStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setupRecycleBinStatusWithOptions(request, runtime);
}

SetupTableResponse Alibabacloud_Drds20190123::Client::setupTableWithOptions(shared_ptr<SetupTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, bool>("AllowFullTableScan", *request->allowFullTableScan));
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, vector<string>>("TableName", *request->tableName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetupTable"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetupTableResponse(callApi(params, req, runtime));
}

SetupTableResponse Alibabacloud_Drds20190123::Client::setupTable(shared_ptr<SetupTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setupTableWithOptions(request, runtime);
}

SetupTableAsyncResponse Alibabacloud_Drds20190123::Client::setupTableAsyncWithOptions(shared_ptr<SetupTableAsyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, bool>("AllowFullTableScan", *request->allowFullTableScan));
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, vector<string>>("TableName", *request->tableName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetupTableAsync"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetupTableAsyncResponse(callApi(params, req, runtime));
}

SetupTableAsyncResponse Alibabacloud_Drds20190123::Client::setupTableAsync(shared_ptr<SetupTableAsyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setupTableAsyncWithOptions(request, runtime);
}

SqlCompatibilityCancelResponse Alibabacloud_Drds20190123::Client::sqlCompatibilityCancelWithOptions(shared_ptr<SqlCompatibilityCancelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, long>("TaskId", *request->taskId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SqlCompatibilityCancel"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SqlCompatibilityCancelResponse(callApi(params, req, runtime));
}

SqlCompatibilityCancelResponse Alibabacloud_Drds20190123::Client::sqlCompatibilityCancel(shared_ptr<SqlCompatibilityCancelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sqlCompatibilityCancelWithOptions(request, runtime);
}

SqlCompatibilityStartResponse Alibabacloud_Drds20190123::Client::sqlCompatibilityStartWithOptions(shared_ptr<SqlCompatibilityStartRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, bool>("PerformanceTest", *request->performanceTest));
  query->insert(pair<string, string>("TargetVersion", *request->targetVersion));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SqlCompatibilityStart"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SqlCompatibilityStartResponse(callApi(params, req, runtime));
}

SqlCompatibilityStartResponse Alibabacloud_Drds20190123::Client::sqlCompatibilityStart(shared_ptr<SqlCompatibilityStartRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sqlCompatibilityStartWithOptions(request, runtime);
}

StartRestoreResponse Alibabacloud_Drds20190123::Client::startRestoreWithOptions(shared_ptr<StartRestoreRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("BackupDbNames", *request->backupDbNames));
  query->insert(pair<string, string>("BackupId", *request->backupId));
  query->insert(pair<string, string>("BackupLevel", *request->backupLevel));
  query->insert(pair<string, string>("BackupMode", *request->backupMode));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("PreferredBackupTime", *request->preferredBackupTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartRestore"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartRestoreResponse(callApi(params, req, runtime));
}

StartRestoreResponse Alibabacloud_Drds20190123::Client::startRestore(shared_ptr<StartRestoreRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startRestoreWithOptions(request, runtime);
}

SubmitCleanTaskResponse Alibabacloud_Drds20190123::Client::submitCleanTaskWithOptions(shared_ptr<SubmitCleanTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("ExpandType", *request->expandType));
  query->insert(pair<string, string>("JobId", *request->jobId));
  query->insert(pair<string, string>("ParentJobId", *request->parentJobId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitCleanTask"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitCleanTaskResponse(callApi(params, req, runtime));
}

SubmitCleanTaskResponse Alibabacloud_Drds20190123::Client::submitCleanTask(shared_ptr<SubmitCleanTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitCleanTaskWithOptions(request, runtime);
}

SubmitHotExpandPreCheckTaskResponse Alibabacloud_Drds20190123::Client::submitHotExpandPreCheckTaskWithOptions(shared_ptr<SubmitHotExpandPreCheckTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbInstType", *request->dbInstType));
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, vector<string>>("TableList", *request->tableList));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitHotExpandPreCheckTask"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitHotExpandPreCheckTaskResponse(callApi(params, req, runtime));
}

SubmitHotExpandPreCheckTaskResponse Alibabacloud_Drds20190123::Client::submitHotExpandPreCheckTask(shared_ptr<SubmitHotExpandPreCheckTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitHotExpandPreCheckTaskWithOptions(request, runtime);
}

SubmitHotExpandTaskResponse Alibabacloud_Drds20190123::Client::submitHotExpandTaskWithOptions(shared_ptr<SubmitHotExpandTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, vector<SubmitHotExpandTaskRequestExtendedMapping>>("ExtendedMapping", *request->extendedMapping));
  query->insert(pair<string, vector<SubmitHotExpandTaskRequestInstanceDbMapping>>("InstanceDbMapping", *request->instanceDbMapping));
  query->insert(pair<string, vector<SubmitHotExpandTaskRequestMapping>>("Mapping", *request->mapping));
  query->insert(pair<string, vector<SubmitHotExpandTaskRequestSupperAccountMapping>>("SupperAccountMapping", *request->supperAccountMapping));
  query->insert(pair<string, string>("TaskDesc", *request->taskDesc));
  query->insert(pair<string, string>("TaskName", *request->taskName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitHotExpandTask"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitHotExpandTaskResponse(callApi(params, req, runtime));
}

SubmitHotExpandTaskResponse Alibabacloud_Drds20190123::Client::submitHotExpandTask(shared_ptr<SubmitHotExpandTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitHotExpandTaskWithOptions(request, runtime);
}

SubmitSmoothExpandPreCheckResponse Alibabacloud_Drds20190123::Client::submitSmoothExpandPreCheckWithOptions(shared_ptr<SubmitSmoothExpandPreCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbInstType", *request->dbInstType));
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitSmoothExpandPreCheck"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitSmoothExpandPreCheckResponse(callApi(params, req, runtime));
}

SubmitSmoothExpandPreCheckResponse Alibabacloud_Drds20190123::Client::submitSmoothExpandPreCheck(shared_ptr<SubmitSmoothExpandPreCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSmoothExpandPreCheckWithOptions(request, runtime);
}

SubmitSmoothExpandPreCheckTaskResponse Alibabacloud_Drds20190123::Client::submitSmoothExpandPreCheckTaskWithOptions(shared_ptr<SubmitSmoothExpandPreCheckTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitSmoothExpandPreCheckTask"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitSmoothExpandPreCheckTaskResponse(callApi(params, req, runtime));
}

SubmitSmoothExpandPreCheckTaskResponse Alibabacloud_Drds20190123::Client::submitSmoothExpandPreCheckTask(shared_ptr<SubmitSmoothExpandPreCheckTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSmoothExpandPreCheckTaskWithOptions(request, runtime);
}

SubmitSqlFlashbackTaskResponse Alibabacloud_Drds20190123::Client::submitSqlFlashbackTaskWithOptions(shared_ptr<SubmitSqlFlashbackTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, long>("RecallRestoreType", *request->recallRestoreType));
  query->insert(pair<string, long>("RecallType", *request->recallType));
  query->insert(pair<string, string>("SqlPk", *request->sqlPk));
  query->insert(pair<string, string>("SqlType", *request->sqlType));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("TableName", *request->tableName));
  query->insert(pair<string, string>("TraceId", *request->traceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitSqlFlashbackTask"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitSqlFlashbackTaskResponse(callApi(params, req, runtime));
}

SubmitSqlFlashbackTaskResponse Alibabacloud_Drds20190123::Client::submitSqlFlashbackTask(shared_ptr<SubmitSqlFlashbackTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSqlFlashbackTaskWithOptions(request, runtime);
}

SwitchGlobalBroadcastTypeResponse Alibabacloud_Drds20190123::Client::switchGlobalBroadcastTypeWithOptions(shared_ptr<SwitchGlobalBroadcastTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SwitchGlobalBroadcastType"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SwitchGlobalBroadcastTypeResponse(callApi(params, req, runtime));
}

SwitchGlobalBroadcastTypeResponse Alibabacloud_Drds20190123::Client::switchGlobalBroadcastType(shared_ptr<SwitchGlobalBroadcastTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchGlobalBroadcastTypeWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Drds20190123::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  query->insert(pair<string, string>("ResourceType", *request->resourceType));
  query->insert(pair<string, vector<TagResourcesRequestTag>>("Tag", *request->tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2019-01-23"))},
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

TagResourcesResponse Alibabacloud_Drds20190123::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Drds20190123::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, bool>("All", *request->all));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  query->insert(pair<string, string>("ResourceType", *request->resourceType));
  query->insert(pair<string, vector<string>>("TagKey", *request->tagKey));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2019-01-23"))},
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

UntagResourcesResponse Alibabacloud_Drds20190123::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UpdateInstanceNetworkResponse Alibabacloud_Drds20190123::Client::updateInstanceNetworkWithOptions(shared_ptr<UpdateInstanceNetworkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("ClassicExpiredDays", *request->classicExpiredDays));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, bool>("RetainClassic", *request->retainClassic));
  query->insert(pair<string, string>("SrcInstanceNetworkType", *request->srcInstanceNetworkType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateInstanceNetwork"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateInstanceNetworkResponse(callApi(params, req, runtime));
}

UpdateInstanceNetworkResponse Alibabacloud_Drds20190123::Client::updateInstanceNetwork(shared_ptr<UpdateInstanceNetworkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateInstanceNetworkWithOptions(request, runtime);
}

UpdatePrivateRdsClassResponse Alibabacloud_Drds20190123::Client::updatePrivateRdsClassWithOptions(shared_ptr<UpdatePrivateRdsClassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, bool>("AutoUseCoupon", *request->autoUseCoupon));
  query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, long>("PrePayDuration", *request->prePayDuration));
  query->insert(pair<string, string>("RdsClass", *request->rdsClass));
  query->insert(pair<string, string>("Storage", *request->storage));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePrivateRdsClass"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePrivateRdsClassResponse(callApi(params, req, runtime));
}

UpdatePrivateRdsClassResponse Alibabacloud_Drds20190123::Client::updatePrivateRdsClass(shared_ptr<UpdatePrivateRdsClassRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePrivateRdsClassWithOptions(request, runtime);
}

UpdateResourceGroupAttributeResponse Alibabacloud_Drds20190123::Client::updateResourceGroupAttributeWithOptions(shared_ptr<UpdateResourceGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("NewResourceGroupId", *request->newResourceGroupId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateResourceGroupAttribute"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateResourceGroupAttributeResponse(callApi(params, req, runtime));
}

UpdateResourceGroupAttributeResponse Alibabacloud_Drds20190123::Client::updateResourceGroupAttribute(shared_ptr<UpdateResourceGroupAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateResourceGroupAttributeWithOptions(request, runtime);
}

UpgradeHiStoreInstanceResponse Alibabacloud_Drds20190123::Client::upgradeHiStoreInstanceWithOptions(shared_ptr<UpgradeHiStoreInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("HistoreInstanceId", *request->historeInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeHiStoreInstance"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpgradeHiStoreInstanceResponse(callApi(params, req, runtime));
}

UpgradeHiStoreInstanceResponse Alibabacloud_Drds20190123::Client::upgradeHiStoreInstance(shared_ptr<UpgradeHiStoreInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeHiStoreInstanceWithOptions(request, runtime);
}

UpgradeInstanceVersionResponse Alibabacloud_Drds20190123::Client::upgradeInstanceVersionWithOptions(shared_ptr<UpgradeInstanceVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("Rpm", *request->rpm));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeInstanceVersion"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpgradeInstanceVersionResponse(callApi(params, req, runtime));
}

UpgradeInstanceVersionResponse Alibabacloud_Drds20190123::Client::upgradeInstanceVersion(shared_ptr<UpgradeInstanceVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeInstanceVersionWithOptions(request, runtime);
}

ValidateShardTaskResponse Alibabacloud_Drds20190123::Client::validateShardTaskWithOptions(shared_ptr<ValidateShardTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DbName", *request->dbName));
  query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("SourceTableName", *request->sourceTableName));
  query->insert(pair<string, string>("TargetTableName", *request->targetTableName));
  query->insert(pair<string, string>("TaskType", *request->taskType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ValidateShardTask"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ValidateShardTaskResponse(callApi(params, req, runtime));
}

ValidateShardTaskResponse Alibabacloud_Drds20190123::Client::validateShardTask(shared_ptr<ValidateShardTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return validateShardTaskWithOptions(request, runtime);
}

DescribeRdsInstInfosResponse Alibabacloud_Drds20190123::Client::describeRdsInstInfosWithOptions(shared_ptr<DescribeRdsInstInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("Search", *request->search));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("describeRdsInstInfos"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRdsInstInfosResponse(callApi(params, req, runtime));
}

DescribeRdsInstInfosResponse Alibabacloud_Drds20190123::Client::describeRdsInstInfos(shared_ptr<DescribeRdsInstInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRdsInstInfosWithOptions(request, runtime);
}

