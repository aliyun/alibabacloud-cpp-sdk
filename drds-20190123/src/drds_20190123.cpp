// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/drds_20190123.hpp>
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
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    query->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeAccountPassword"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ChangeAccountPasswordResponse(callApi(params, req, runtime));
  }
  else {
    return ChangeAccountPasswordResponse(execute(params, req, runtime));
  }
}

ChangeAccountPasswordResponse Alibabacloud_Drds20190123::Client::changeAccountPassword(shared_ptr<ChangeAccountPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeAccountPasswordWithOptions(request, runtime);
}

ChangeInstanceAzoneResponse Alibabacloud_Drds20190123::Client::changeInstanceAzoneWithOptions(shared_ptr<ChangeInstanceAzoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->changeVSwitch)) {
    query->insert(pair<string, bool>("ChangeVSwitch", *request->changeVSwitch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsRegionId)) {
    query->insert(pair<string, string>("DrdsRegionId", *request->drdsRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newVSwitch)) {
    query->insert(pair<string, string>("NewVSwitch", *request->newVSwitch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originAzoneId)) {
    query->insert(pair<string, string>("OriginAzoneId", *request->originAzoneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetAzoneId)) {
    query->insert(pair<string, string>("TargetAzoneId", *request->targetAzoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeInstanceAzone"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ChangeInstanceAzoneResponse(callApi(params, req, runtime));
  }
  else {
    return ChangeInstanceAzoneResponse(execute(params, req, runtime));
  }
}

ChangeInstanceAzoneResponse Alibabacloud_Drds20190123::Client::changeInstanceAzone(shared_ptr<ChangeInstanceAzoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeInstanceAzoneWithOptions(request, runtime);
}

CheckDrdsDbNameResponse Alibabacloud_Drds20190123::Client::checkDrdsDbNameWithOptions(shared_ptr<CheckDrdsDbNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckDrdsDbName"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CheckDrdsDbNameResponse(callApi(params, req, runtime));
  }
  else {
    return CheckDrdsDbNameResponse(execute(params, req, runtime));
  }
}

CheckDrdsDbNameResponse Alibabacloud_Drds20190123::Client::checkDrdsDbName(shared_ptr<CheckDrdsDbNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkDrdsDbNameWithOptions(request, runtime);
}

CheckExpandStatusResponse Alibabacloud_Drds20190123::Client::checkExpandStatusWithOptions(shared_ptr<CheckExpandStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckExpandStatus"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CheckExpandStatusResponse(callApi(params, req, runtime));
  }
  else {
    return CheckExpandStatusResponse(execute(params, req, runtime));
  }
}

CheckExpandStatusResponse Alibabacloud_Drds20190123::Client::checkExpandStatus(shared_ptr<CheckExpandStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkExpandStatusWithOptions(request, runtime);
}

CheckSqlAuditEnableStatusResponse Alibabacloud_Drds20190123::Client::checkSqlAuditEnableStatusWithOptions(shared_ptr<CheckSqlAuditEnableStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckSqlAuditEnableStatus"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CheckSqlAuditEnableStatusResponse(callApi(params, req, runtime));
  }
  else {
    return CheckSqlAuditEnableStatusResponse(execute(params, req, runtime));
  }
}

CheckSqlAuditEnableStatusResponse Alibabacloud_Drds20190123::Client::checkSqlAuditEnableStatus(shared_ptr<CheckSqlAuditEnableStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkSqlAuditEnableStatusWithOptions(request, runtime);
}

CreateDrdsDBResponse Alibabacloud_Drds20190123::Client::createDrdsDBWithOptions(shared_ptr<CreateDrdsDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    query->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbInstType)) {
    query->insert(pair<string, string>("DbInstType", *request->dbInstType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dbInstanceIsCreating)) {
    query->insert(pair<string, bool>("DbInstanceIsCreating", *request->dbInstanceIsCreating));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encode)) {
    query->insert(pair<string, string>("Encode", *request->encode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateDrdsDBRequestInstDbName>>(request->instDbName)) {
    query->insert(pair<string, vector<CreateDrdsDBRequestInstDbName>>("InstDbName", *request->instDbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->rdsInstance)) {
    query->insert(pair<string, vector<string>>("RdsInstance", *request->rdsInstance));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateDrdsDBRequestRdsSuperAccount>>(request->rdsSuperAccount)) {
    query->insert(pair<string, vector<CreateDrdsDBRequestRdsSuperAccount>>("RdsSuperAccount", *request->rdsSuperAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDrdsDB"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateDrdsDBResponse(callApi(params, req, runtime));
  }
  else {
    return CreateDrdsDBResponse(execute(params, req, runtime));
  }
}

CreateDrdsDBResponse Alibabacloud_Drds20190123::Client::createDrdsDB(shared_ptr<CreateDrdsDBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDrdsDBWithOptions(request, runtime);
}

CreateDrdsInstanceResponse Alibabacloud_Drds20190123::Client::createDrdsInstanceWithOptions(shared_ptr<CreateDrdsInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->duration)) {
    query->insert(pair<string, long>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceSeries)) {
    query->insert(pair<string, string>("InstanceSeries", *request->instanceSeries));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isAutoRenew)) {
    query->insert(pair<string, bool>("IsAutoRenew", *request->isAutoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterInstId)) {
    query->insert(pair<string, string>("MasterInstId", *request->masterInstId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mySQLVersion)) {
    query->insert(pair<string, long>("MySQLVersion", *request->mySQLVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payType)) {
    query->insert(pair<string, string>("PayType", *request->payType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pricingCycle)) {
    query->insert(pair<string, string>("PricingCycle", *request->pricingCycle));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->quantity)) {
    query->insert(pair<string, long>("Quantity", *request->quantity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specification)) {
    query->insert(pair<string, string>("Specification", *request->specification));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
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
  if (!Darabonba_Util::Client::isUnset<bool>(request->isHa)) {
    query->insert(pair<string, bool>("isHa", *request->isHa));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDrdsInstance"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateDrdsInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return CreateDrdsInstanceResponse(execute(params, req, runtime));
  }
}

CreateDrdsInstanceResponse Alibabacloud_Drds20190123::Client::createDrdsInstance(shared_ptr<CreateDrdsInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDrdsInstanceWithOptions(request, runtime);
}

CreateInstanceAccountResponse Alibabacloud_Drds20190123::Client::createInstanceAccountWithOptions(shared_ptr<CreateInstanceAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    query->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateInstanceAccountRequestDbPrivilege>>(request->dbPrivilege)) {
    query->insert(pair<string, vector<CreateInstanceAccountRequestDbPrivilege>>("DbPrivilege", *request->dbPrivilege));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateInstanceAccount"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateInstanceAccountResponse(callApi(params, req, runtime));
  }
  else {
    return CreateInstanceAccountResponse(execute(params, req, runtime));
  }
}

CreateInstanceAccountResponse Alibabacloud_Drds20190123::Client::createInstanceAccount(shared_ptr<CreateInstanceAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createInstanceAccountWithOptions(request, runtime);
}

CreateInstanceInternetAddressResponse Alibabacloud_Drds20190123::Client::createInstanceInternetAddressWithOptions(shared_ptr<CreateInstanceInternetAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateInstanceInternetAddress"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateInstanceInternetAddressResponse(callApi(params, req, runtime));
  }
  else {
    return CreateInstanceInternetAddressResponse(execute(params, req, runtime));
  }
}

CreateInstanceInternetAddressResponse Alibabacloud_Drds20190123::Client::createInstanceInternetAddress(shared_ptr<CreateInstanceInternetAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createInstanceInternetAddressWithOptions(request, runtime);
}

CreateOrderForRdsResponse Alibabacloud_Drds20190123::Client::createOrderForRdsWithOptions(shared_ptr<CreateOrderForRdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    query->insert(pair<string, string>("Params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOrderForRds"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateOrderForRdsResponse(callApi(params, req, runtime));
  }
  else {
    return CreateOrderForRdsResponse(execute(params, req, runtime));
  }
}

CreateOrderForRdsResponse Alibabacloud_Drds20190123::Client::createOrderForRds(shared_ptr<CreateOrderForRdsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOrderForRdsWithOptions(request, runtime);
}

CreateShardTaskResponse Alibabacloud_Drds20190123::Client::createShardTaskWithOptions(shared_ptr<CreateShardTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceTableName)) {
    query->insert(pair<string, string>("SourceTableName", *request->sourceTableName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetTableName)) {
    query->insert(pair<string, string>("TargetTableName", *request->targetTableName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("TaskType", *request->taskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateShardTask"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateShardTaskResponse(callApi(params, req, runtime));
  }
  else {
    return CreateShardTaskResponse(execute(params, req, runtime));
  }
}

CreateShardTaskResponse Alibabacloud_Drds20190123::Client::createShardTask(shared_ptr<CreateShardTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createShardTaskWithOptions(request, runtime);
}

DescribeBackMenuResponse Alibabacloud_Drds20190123::Client::describeBackMenuWithOptions(shared_ptr<DescribeBackMenuRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackMenu"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeBackMenuResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeBackMenuResponse(execute(params, req, runtime));
  }
}

DescribeBackMenuResponse Alibabacloud_Drds20190123::Client::describeBackMenu(shared_ptr<DescribeBackMenuRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackMenuWithOptions(request, runtime);
}

DescribeBackupDbsResponse Alibabacloud_Drds20190123::Client::describeBackupDbsWithOptions(shared_ptr<DescribeBackupDbsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupId)) {
    query->insert(pair<string, string>("BackupId", *request->backupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preferredRestoreTime)) {
    query->insert(pair<string, string>("PreferredRestoreTime", *request->preferredRestoreTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackupDbs"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeBackupDbsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeBackupDbsResponse(execute(params, req, runtime));
  }
}

DescribeBackupDbsResponse Alibabacloud_Drds20190123::Client::describeBackupDbs(shared_ptr<DescribeBackupDbsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupDbsWithOptions(request, runtime);
}

DescribeBackupLocalResponse Alibabacloud_Drds20190123::Client::describeBackupLocalWithOptions(shared_ptr<DescribeBackupLocalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackupLocal"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeBackupLocalResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeBackupLocalResponse(execute(params, req, runtime));
  }
}

DescribeBackupLocalResponse Alibabacloud_Drds20190123::Client::describeBackupLocal(shared_ptr<DescribeBackupLocalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupLocalWithOptions(request, runtime);
}

DescribeBackupPolicyResponse Alibabacloud_Drds20190123::Client::describeBackupPolicyWithOptions(shared_ptr<DescribeBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackupPolicy"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeBackupPolicyResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeBackupPolicyResponse(execute(params, req, runtime));
  }
}

DescribeBackupPolicyResponse Alibabacloud_Drds20190123::Client::describeBackupPolicy(shared_ptr<DescribeBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupPolicyWithOptions(request, runtime);
}

DescribeBackupSetsResponse Alibabacloud_Drds20190123::Client::describeBackupSetsWithOptions(shared_ptr<DescribeBackupSetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
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
    {"action", boost::any(string("DescribeBackupSets"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeBackupSetsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeBackupSetsResponse(execute(params, req, runtime));
  }
}

DescribeBackupSetsResponse Alibabacloud_Drds20190123::Client::describeBackupSets(shared_ptr<DescribeBackupSetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupSetsWithOptions(request, runtime);
}

DescribeBackupTimesResponse Alibabacloud_Drds20190123::Client::describeBackupTimesWithOptions(shared_ptr<DescribeBackupTimesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackupTimes"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeBackupTimesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeBackupTimesResponse(execute(params, req, runtime));
  }
}

DescribeBackupTimesResponse Alibabacloud_Drds20190123::Client::describeBackupTimes(shared_ptr<DescribeBackupTimesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupTimesWithOptions(request, runtime);
}

DescribeBroadcastTablesResponse Alibabacloud_Drds20190123::Client::describeBroadcastTablesWithOptions(shared_ptr<DescribeBroadcastTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("Query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBroadcastTables"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeBroadcastTablesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeBroadcastTablesResponse(execute(params, req, runtime));
  }
}

DescribeBroadcastTablesResponse Alibabacloud_Drds20190123::Client::describeBroadcastTables(shared_ptr<DescribeBroadcastTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBroadcastTablesWithOptions(request, runtime);
}

DescribeDbInstanceDbsResponse Alibabacloud_Drds20190123::Client::describeDbInstanceDbsWithOptions(shared_ptr<DescribeDbInstanceDbsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    query->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbInstType)) {
    query->insert(pair<string, string>("DbInstType", *request->dbInstType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbInstanceId)) {
    query->insert(pair<string, string>("DbInstanceId", *request->dbInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDbInstanceDbs"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDbInstanceDbsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDbInstanceDbsResponse(execute(params, req, runtime));
  }
}

DescribeDbInstanceDbsResponse Alibabacloud_Drds20190123::Client::describeDbInstanceDbs(shared_ptr<DescribeDbInstanceDbsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDbInstanceDbsWithOptions(request, runtime);
}

DescribeDbInstancesResponse Alibabacloud_Drds20190123::Client::describeDbInstancesWithOptions(shared_ptr<DescribeDbInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbInstType)) {
    query->insert(pair<string, string>("DbInstType", *request->dbInstType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->search)) {
    query->insert(pair<string, string>("Search", *request->search));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDbInstances"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDbInstancesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDbInstancesResponse(execute(params, req, runtime));
  }
}

DescribeDbInstancesResponse Alibabacloud_Drds20190123::Client::describeDbInstances(shared_ptr<DescribeDbInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDbInstancesWithOptions(request, runtime);
}

DescribeDrdsDBResponse Alibabacloud_Drds20190123::Client::describeDrdsDBWithOptions(shared_ptr<DescribeDrdsDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsDB"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDrdsDBResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDrdsDBResponse(execute(params, req, runtime));
  }
}

DescribeDrdsDBResponse Alibabacloud_Drds20190123::Client::describeDrdsDB(shared_ptr<DescribeDrdsDBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsDBWithOptions(request, runtime);
}

DescribeDrdsDBClusterResponse Alibabacloud_Drds20190123::Client::describeDrdsDBClusterWithOptions(shared_ptr<DescribeDrdsDBClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbInstanceId)) {
    query->insert(pair<string, string>("DbInstanceId", *request->dbInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsDBCluster"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDrdsDBClusterResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDrdsDBClusterResponse(execute(params, req, runtime));
  }
}

DescribeDrdsDBClusterResponse Alibabacloud_Drds20190123::Client::describeDrdsDBCluster(shared_ptr<DescribeDrdsDBClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsDBClusterWithOptions(request, runtime);
}

DescribeDrdsDBIpWhiteListResponse Alibabacloud_Drds20190123::Client::describeDrdsDBIpWhiteListWithOptions(shared_ptr<DescribeDrdsDBIpWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsDBIpWhiteList"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDrdsDBIpWhiteListResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDrdsDBIpWhiteListResponse(execute(params, req, runtime));
  }
}

DescribeDrdsDBIpWhiteListResponse Alibabacloud_Drds20190123::Client::describeDrdsDBIpWhiteList(shared_ptr<DescribeDrdsDBIpWhiteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsDBIpWhiteListWithOptions(request, runtime);
}

DescribeDrdsDBsResponse Alibabacloud_Drds20190123::Client::describeDrdsDBsWithOptions(shared_ptr<DescribeDrdsDBsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
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
    {"action", boost::any(string("DescribeDrdsDBs"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDrdsDBsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDrdsDBsResponse(execute(params, req, runtime));
  }
}

DescribeDrdsDBsResponse Alibabacloud_Drds20190123::Client::describeDrdsDBs(shared_ptr<DescribeDrdsDBsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsDBsWithOptions(request, runtime);
}

DescribeDrdsDbInstanceResponse Alibabacloud_Drds20190123::Client::describeDrdsDbInstanceWithOptions(shared_ptr<DescribeDrdsDbInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbInstanceId)) {
    query->insert(pair<string, string>("DbInstanceId", *request->dbInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsDbInstance"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDrdsDbInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDrdsDbInstanceResponse(execute(params, req, runtime));
  }
}

DescribeDrdsDbInstanceResponse Alibabacloud_Drds20190123::Client::describeDrdsDbInstance(shared_ptr<DescribeDrdsDbInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsDbInstanceWithOptions(request, runtime);
}

DescribeDrdsDbInstancesResponse Alibabacloud_Drds20190123::Client::describeDrdsDbInstancesWithOptions(shared_ptr<DescribeDrdsDbInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
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
    {"action", boost::any(string("DescribeDrdsDbInstances"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDrdsDbInstancesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDrdsDbInstancesResponse(execute(params, req, runtime));
  }
}

DescribeDrdsDbInstancesResponse Alibabacloud_Drds20190123::Client::describeDrdsDbInstances(shared_ptr<DescribeDrdsDbInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsDbInstancesWithOptions(request, runtime);
}

DescribeDrdsDbRdsNameListResponse Alibabacloud_Drds20190123::Client::describeDrdsDbRdsNameListWithOptions(shared_ptr<DescribeDrdsDbRdsNameListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsDbRdsNameList"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDrdsDbRdsNameListResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDrdsDbRdsNameListResponse(execute(params, req, runtime));
  }
}

DescribeDrdsDbRdsNameListResponse Alibabacloud_Drds20190123::Client::describeDrdsDbRdsNameList(shared_ptr<DescribeDrdsDbRdsNameListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsDbRdsNameListWithOptions(request, runtime);
}

DescribeDrdsInstanceResponse Alibabacloud_Drds20190123::Client::describeDrdsInstanceWithOptions(shared_ptr<DescribeDrdsInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsInstance"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDrdsInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDrdsInstanceResponse(execute(params, req, runtime));
  }
}

DescribeDrdsInstanceResponse Alibabacloud_Drds20190123::Client::describeDrdsInstance(shared_ptr<DescribeDrdsInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsInstanceWithOptions(request, runtime);
}

DescribeDrdsInstanceDbMonitorResponse Alibabacloud_Drds20190123::Client::describeDrdsInstanceDbMonitorWithOptions(shared_ptr<DescribeDrdsInstanceDbMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsInstanceDbMonitor"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDrdsInstanceDbMonitorResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDrdsInstanceDbMonitorResponse(execute(params, req, runtime));
  }
}

DescribeDrdsInstanceDbMonitorResponse Alibabacloud_Drds20190123::Client::describeDrdsInstanceDbMonitor(shared_ptr<DescribeDrdsInstanceDbMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsInstanceDbMonitorWithOptions(request, runtime);
}

DescribeDrdsInstanceLevelTasksResponse Alibabacloud_Drds20190123::Client::describeDrdsInstanceLevelTasksWithOptions(shared_ptr<DescribeDrdsInstanceLevelTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsInstanceLevelTasks"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDrdsInstanceLevelTasksResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDrdsInstanceLevelTasksResponse(execute(params, req, runtime));
  }
}

DescribeDrdsInstanceLevelTasksResponse Alibabacloud_Drds20190123::Client::describeDrdsInstanceLevelTasks(shared_ptr<DescribeDrdsInstanceLevelTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsInstanceLevelTasksWithOptions(request, runtime);
}

DescribeDrdsInstanceMonitorResponse Alibabacloud_Drds20190123::Client::describeDrdsInstanceMonitorWithOptions(shared_ptr<DescribeDrdsInstanceMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->periodMultiple)) {
    query->insert(pair<string, long>("PeriodMultiple", *request->periodMultiple));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsInstanceMonitor"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDrdsInstanceMonitorResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDrdsInstanceMonitorResponse(execute(params, req, runtime));
  }
}

DescribeDrdsInstanceMonitorResponse Alibabacloud_Drds20190123::Client::describeDrdsInstanceMonitor(shared_ptr<DescribeDrdsInstanceMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsInstanceMonitorWithOptions(request, runtime);
}

DescribeDrdsInstanceVersionResponse Alibabacloud_Drds20190123::Client::describeDrdsInstanceVersionWithOptions(shared_ptr<DescribeDrdsInstanceVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsInstanceVersion"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDrdsInstanceVersionResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDrdsInstanceVersionResponse(execute(params, req, runtime));
  }
}

DescribeDrdsInstanceVersionResponse Alibabacloud_Drds20190123::Client::describeDrdsInstanceVersion(shared_ptr<DescribeDrdsInstanceVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsInstanceVersionWithOptions(request, runtime);
}

DescribeDrdsInstancesResponse Alibabacloud_Drds20190123::Client::describeDrdsInstancesWithOptions(shared_ptr<DescribeDrdsInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->expired)) {
    query->insert(pair<string, bool>("Expired", *request->expired));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->mix)) {
    query->insert(pair<string, bool>("Mix", *request->mix));
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
  if (!Darabonba_Util::Client::isUnset<vector<DescribeDrdsInstancesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeDrdsInstancesRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsInstances"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDrdsInstancesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDrdsInstancesResponse(execute(params, req, runtime));
  }
}

DescribeDrdsInstancesResponse Alibabacloud_Drds20190123::Client::describeDrdsInstances(shared_ptr<DescribeDrdsInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsInstancesWithOptions(request, runtime);
}

DescribeDrdsParamsResponse Alibabacloud_Drds20190123::Client::describeDrdsParamsWithOptions(shared_ptr<DescribeDrdsParamsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramLevel)) {
    query->insert(pair<string, string>("ParamLevel", *request->paramLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsParams"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDrdsParamsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDrdsParamsResponse(execute(params, req, runtime));
  }
}

DescribeDrdsParamsResponse Alibabacloud_Drds20190123::Client::describeDrdsParams(shared_ptr<DescribeDrdsParamsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsParamsWithOptions(request, runtime);
}

DescribeDrdsRdsInstancesResponse Alibabacloud_Drds20190123::Client::describeDrdsRdsInstancesWithOptions(shared_ptr<DescribeDrdsRdsInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsRdsInstances"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDrdsRdsInstancesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDrdsRdsInstancesResponse(execute(params, req, runtime));
  }
}

DescribeDrdsRdsInstancesResponse Alibabacloud_Drds20190123::Client::describeDrdsRdsInstances(shared_ptr<DescribeDrdsRdsInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsRdsInstancesWithOptions(request, runtime);
}

DescribeDrdsShardingDbsResponse Alibabacloud_Drds20190123::Client::describeDrdsShardingDbsWithOptions(shared_ptr<DescribeDrdsShardingDbsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbNamePattern)) {
    query->insert(pair<string, string>("DbNamePattern", *request->dbNamePattern));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
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
    {"action", boost::any(string("DescribeDrdsShardingDbs"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDrdsShardingDbsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDrdsShardingDbsResponse(execute(params, req, runtime));
  }
}

DescribeDrdsShardingDbsResponse Alibabacloud_Drds20190123::Client::describeDrdsShardingDbs(shared_ptr<DescribeDrdsShardingDbsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsShardingDbsWithOptions(request, runtime);
}

DescribeDrdsSlowSqlsResponse Alibabacloud_Drds20190123::Client::describeDrdsSlowSqlsWithOptions(shared_ptr<DescribeDrdsSlowSqlsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->exeTime)) {
    query->insert(pair<string, long>("ExeTime", *request->exeTime));
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
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsSlowSqls"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDrdsSlowSqlsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDrdsSlowSqlsResponse(execute(params, req, runtime));
  }
}

DescribeDrdsSlowSqlsResponse Alibabacloud_Drds20190123::Client::describeDrdsSlowSqls(shared_ptr<DescribeDrdsSlowSqlsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsSlowSqlsWithOptions(request, runtime);
}

DescribeDrdsSqlAuditStatusResponse Alibabacloud_Drds20190123::Client::describeDrdsSqlAuditStatusWithOptions(shared_ptr<DescribeDrdsSqlAuditStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsSqlAuditStatus"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDrdsSqlAuditStatusResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDrdsSqlAuditStatusResponse(execute(params, req, runtime));
  }
}

DescribeDrdsSqlAuditStatusResponse Alibabacloud_Drds20190123::Client::describeDrdsSqlAuditStatus(shared_ptr<DescribeDrdsSqlAuditStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsSqlAuditStatusWithOptions(request, runtime);
}

DescribeDrdsTasksResponse Alibabacloud_Drds20190123::Client::describeDrdsTasksWithOptions(shared_ptr<DescribeDrdsTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("TaskType", *request->taskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDrdsTasks"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDrdsTasksResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDrdsTasksResponse(execute(params, req, runtime));
  }
}

DescribeDrdsTasksResponse Alibabacloud_Drds20190123::Client::describeDrdsTasks(shared_ptr<DescribeDrdsTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDrdsTasksWithOptions(request, runtime);
}

DescribeExpandLogicTableInfoListResponse Alibabacloud_Drds20190123::Client::describeExpandLogicTableInfoListWithOptions(shared_ptr<DescribeExpandLogicTableInfoListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeExpandLogicTableInfoList"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeExpandLogicTableInfoListResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeExpandLogicTableInfoListResponse(execute(params, req, runtime));
  }
}

DescribeExpandLogicTableInfoListResponse Alibabacloud_Drds20190123::Client::describeExpandLogicTableInfoList(shared_ptr<DescribeExpandLogicTableInfoListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExpandLogicTableInfoListWithOptions(request, runtime);
}

DescribeHotDbListResponse Alibabacloud_Drds20190123::Client::describeHotDbListWithOptions(shared_ptr<DescribeHotDbListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHotDbList"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeHotDbListResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeHotDbListResponse(execute(params, req, runtime));
  }
}

DescribeHotDbListResponse Alibabacloud_Drds20190123::Client::describeHotDbList(shared_ptr<DescribeHotDbListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHotDbListWithOptions(request, runtime);
}

DescribeInstDbLogInfoResponse Alibabacloud_Drds20190123::Client::describeInstDbLogInfoWithOptions(shared_ptr<DescribeInstDbLogInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstDbLogInfo"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeInstDbLogInfoResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeInstDbLogInfoResponse(execute(params, req, runtime));
  }
}

DescribeInstDbLogInfoResponse Alibabacloud_Drds20190123::Client::describeInstDbLogInfo(shared_ptr<DescribeInstDbLogInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstDbLogInfoWithOptions(request, runtime);
}

DescribeInstDbSlsInfoResponse Alibabacloud_Drds20190123::Client::describeInstDbSlsInfoWithOptions(shared_ptr<DescribeInstDbSlsInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstDbSlsInfo"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeInstDbSlsInfoResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeInstDbSlsInfoResponse(execute(params, req, runtime));
  }
}

DescribeInstDbSlsInfoResponse Alibabacloud_Drds20190123::Client::describeInstDbSlsInfo(shared_ptr<DescribeInstDbSlsInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstDbSlsInfoWithOptions(request, runtime);
}

DescribeInstanceAccountsResponse Alibabacloud_Drds20190123::Client::describeInstanceAccountsWithOptions(shared_ptr<DescribeInstanceAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceAccounts"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeInstanceAccountsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeInstanceAccountsResponse(execute(params, req, runtime));
  }
}

DescribeInstanceAccountsResponse Alibabacloud_Drds20190123::Client::describeInstanceAccounts(shared_ptr<DescribeInstanceAccountsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceAccountsWithOptions(request, runtime);
}

DescribeInstanceSwitchAzoneResponse Alibabacloud_Drds20190123::Client::describeInstanceSwitchAzoneWithOptions(shared_ptr<DescribeInstanceSwitchAzoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceSwitchAzone"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeInstanceSwitchAzoneResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeInstanceSwitchAzoneResponse(execute(params, req, runtime));
  }
}

DescribeInstanceSwitchAzoneResponse Alibabacloud_Drds20190123::Client::describeInstanceSwitchAzone(shared_ptr<DescribeInstanceSwitchAzoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceSwitchAzoneWithOptions(request, runtime);
}

DescribeInstanceSwitchNetworkResponse Alibabacloud_Drds20190123::Client::describeInstanceSwitchNetworkWithOptions(shared_ptr<DescribeInstanceSwitchNetworkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceSwitchNetwork"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeInstanceSwitchNetworkResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeInstanceSwitchNetworkResponse(execute(params, req, runtime));
  }
}

DescribeInstanceSwitchNetworkResponse Alibabacloud_Drds20190123::Client::describeInstanceSwitchNetwork(shared_ptr<DescribeInstanceSwitchNetworkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceSwitchNetworkWithOptions(request, runtime);
}

DescribePreCheckResultResponse Alibabacloud_Drds20190123::Client::describePreCheckResultWithOptions(shared_ptr<DescribePreCheckResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePreCheckResult"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribePreCheckResultResponse(callApi(params, req, runtime));
  }
  else {
    return DescribePreCheckResultResponse(execute(params, req, runtime));
  }
}

DescribePreCheckResultResponse Alibabacloud_Drds20190123::Client::describePreCheckResult(shared_ptr<DescribePreCheckResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePreCheckResultWithOptions(request, runtime);
}

DescribeRDSPerformanceResponse Alibabacloud_Drds20190123::Client::describeRDSPerformanceWithOptions(shared_ptr<DescribeRDSPerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbInstType)) {
    query->insert(pair<string, string>("DbInstType", *request->dbInstType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keys)) {
    query->insert(pair<string, string>("Keys", *request->keys));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rdsInstanceId)) {
    query->insert(pair<string, string>("RdsInstanceId", *request->rdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRDSPerformance"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeRDSPerformanceResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeRDSPerformanceResponse(execute(params, req, runtime));
  }
}

DescribeRDSPerformanceResponse Alibabacloud_Drds20190123::Client::describeRDSPerformance(shared_ptr<DescribeRDSPerformanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRDSPerformanceWithOptions(request, runtime);
}

DescribeRdsCommodityResponse Alibabacloud_Drds20190123::Client::describeRdsCommodityWithOptions(shared_ptr<DescribeRdsCommodityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->commodityCode)) {
    query->insert(pair<string, string>("CommodityCode", *request->commodityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderType)) {
    query->insert(pair<string, string>("OrderType", *request->orderType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRdsCommodity"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeRdsCommodityResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeRdsCommodityResponse(execute(params, req, runtime));
  }
}

DescribeRdsCommodityResponse Alibabacloud_Drds20190123::Client::describeRdsCommodity(shared_ptr<DescribeRdsCommodityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRdsCommodityWithOptions(request, runtime);
}

DescribeRdsPerformanceSummaryResponse Alibabacloud_Drds20190123::Client::describeRdsPerformanceSummaryWithOptions(shared_ptr<DescribeRdsPerformanceSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->rdsInstanceId)) {
    query->insert(pair<string, vector<string>>("RdsInstanceId", *request->rdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRdsPerformanceSummary"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeRdsPerformanceSummaryResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeRdsPerformanceSummaryResponse(execute(params, req, runtime));
  }
}

DescribeRdsPerformanceSummaryResponse Alibabacloud_Drds20190123::Client::describeRdsPerformanceSummary(shared_ptr<DescribeRdsPerformanceSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRdsPerformanceSummaryWithOptions(request, runtime);
}

DescribeRdsSuperAccountInstancesResponse Alibabacloud_Drds20190123::Client::describeRdsSuperAccountInstancesWithOptions(shared_ptr<DescribeRdsSuperAccountInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbInstType)) {
    query->insert(pair<string, string>("DbInstType", *request->dbInstType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->rdsInstance)) {
    query->insert(pair<string, vector<string>>("RdsInstance", *request->rdsInstance));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRdsSuperAccountInstances"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeRdsSuperAccountInstancesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeRdsSuperAccountInstancesResponse(execute(params, req, runtime));
  }
}

DescribeRdsSuperAccountInstancesResponse Alibabacloud_Drds20190123::Client::describeRdsSuperAccountInstances(shared_ptr<DescribeRdsSuperAccountInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRdsSuperAccountInstancesWithOptions(request, runtime);
}

DescribeRecycleBinStatusResponse Alibabacloud_Drds20190123::Client::describeRecycleBinStatusWithOptions(shared_ptr<DescribeRecycleBinStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRecycleBinStatus"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeRecycleBinStatusResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeRecycleBinStatusResponse(execute(params, req, runtime));
  }
}

DescribeRecycleBinStatusResponse Alibabacloud_Drds20190123::Client::describeRecycleBinStatus(shared_ptr<DescribeRecycleBinStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRecycleBinStatusWithOptions(request, runtime);
}

DescribeRecycleBinTablesResponse Alibabacloud_Drds20190123::Client::describeRecycleBinTablesWithOptions(shared_ptr<DescribeRecycleBinTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRecycleBinTables"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeRecycleBinTablesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeRecycleBinTablesResponse(execute(params, req, runtime));
  }
}

DescribeRecycleBinTablesResponse Alibabacloud_Drds20190123::Client::describeRecycleBinTables(shared_ptr<DescribeRecycleBinTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRecycleBinTablesWithOptions(request, runtime);
}

DescribeRestoreOrderResponse Alibabacloud_Drds20190123::Client::describeRestoreOrderWithOptions(shared_ptr<DescribeRestoreOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupDbNames)) {
    query->insert(pair<string, string>("BackupDbNames", *request->backupDbNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupId)) {
    query->insert(pair<string, string>("BackupId", *request->backupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupLevel)) {
    query->insert(pair<string, string>("BackupLevel", *request->backupLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupMode)) {
    query->insert(pair<string, string>("BackupMode", *request->backupMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preferredBackupTime)) {
    query->insert(pair<string, string>("PreferredBackupTime", *request->preferredBackupTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRestoreOrder"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeRestoreOrderResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeRestoreOrderResponse(execute(params, req, runtime));
  }
}

DescribeRestoreOrderResponse Alibabacloud_Drds20190123::Client::describeRestoreOrder(shared_ptr<DescribeRestoreOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRestoreOrderWithOptions(request, runtime);
}

DescribeShardTaskInfoResponse Alibabacloud_Drds20190123::Client::describeShardTaskInfoWithOptions(shared_ptr<DescribeShardTaskInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceTableName)) {
    query->insert(pair<string, string>("SourceTableName", *request->sourceTableName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetTableName)) {
    query->insert(pair<string, string>("TargetTableName", *request->targetTableName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeShardTaskInfo"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeShardTaskInfoResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeShardTaskInfoResponse(execute(params, req, runtime));
  }
}

DescribeShardTaskInfoResponse Alibabacloud_Drds20190123::Client::describeShardTaskInfo(shared_ptr<DescribeShardTaskInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeShardTaskInfoWithOptions(request, runtime);
}

DescribeSqlFlashbakTaskResponse Alibabacloud_Drds20190123::Client::describeSqlFlashbakTaskWithOptions(shared_ptr<DescribeSqlFlashbakTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSqlFlashbakTask"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeSqlFlashbakTaskResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeSqlFlashbakTaskResponse(execute(params, req, runtime));
  }
}

DescribeSqlFlashbakTaskResponse Alibabacloud_Drds20190123::Client::describeSqlFlashbakTask(shared_ptr<DescribeSqlFlashbakTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSqlFlashbakTaskWithOptions(request, runtime);
}

DescribeTableResponse Alibabacloud_Drds20190123::Client::describeTableWithOptions(shared_ptr<DescribeTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
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
    {"action", boost::any(string("DescribeTable"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeTableResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeTableResponse(execute(params, req, runtime));
  }
}

DescribeTableResponse Alibabacloud_Drds20190123::Client::describeTable(shared_ptr<DescribeTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTableWithOptions(request, runtime);
}

DescribeTableListByTypeResponse Alibabacloud_Drds20190123::Client::describeTableListByTypeWithOptions(shared_ptr<DescribeTableListByTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("Query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableType)) {
    query->insert(pair<string, string>("TableType", *request->tableType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTableListByType"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeTableListByTypeResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeTableListByTypeResponse(execute(params, req, runtime));
  }
}

DescribeTableListByTypeResponse Alibabacloud_Drds20190123::Client::describeTableListByType(shared_ptr<DescribeTableListByTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTableListByTypeWithOptions(request, runtime);
}

DescribeTablesResponse Alibabacloud_Drds20190123::Client::describeTablesWithOptions(shared_ptr<DescribeTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("Query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTables"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeTablesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeTablesResponse(execute(params, req, runtime));
  }
}

DescribeTablesResponse Alibabacloud_Drds20190123::Client::describeTables(shared_ptr<DescribeTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTablesWithOptions(request, runtime);
}

DisableSqlAuditResponse Alibabacloud_Drds20190123::Client::disableSqlAuditWithOptions(shared_ptr<DisableSqlAuditRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableSqlAudit"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DisableSqlAuditResponse(callApi(params, req, runtime));
  }
  else {
    return DisableSqlAuditResponse(execute(params, req, runtime));
  }
}

DisableSqlAuditResponse Alibabacloud_Drds20190123::Client::disableSqlAudit(shared_ptr<DisableSqlAuditRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableSqlAuditWithOptions(request, runtime);
}

EnableInstanceIpv6AddressResponse Alibabacloud_Drds20190123::Client::enableInstanceIpv6AddressWithOptions(shared_ptr<EnableInstanceIpv6AddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableInstanceIpv6Address"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return EnableInstanceIpv6AddressResponse(callApi(params, req, runtime));
  }
  else {
    return EnableInstanceIpv6AddressResponse(execute(params, req, runtime));
  }
}

EnableInstanceIpv6AddressResponse Alibabacloud_Drds20190123::Client::enableInstanceIpv6Address(shared_ptr<EnableInstanceIpv6AddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableInstanceIpv6AddressWithOptions(request, runtime);
}

EnableSqlAuditResponse Alibabacloud_Drds20190123::Client::enableSqlAuditWithOptions(shared_ptr<EnableSqlAuditRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isRecall)) {
    query->insert(pair<string, bool>("IsRecall", *request->isRecall));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recallEndTimestamp)) {
    query->insert(pair<string, string>("RecallEndTimestamp", *request->recallEndTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recallStartTimestamp)) {
    query->insert(pair<string, string>("RecallStartTimestamp", *request->recallStartTimestamp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableSqlAudit"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return EnableSqlAuditResponse(callApi(params, req, runtime));
  }
  else {
    return EnableSqlAuditResponse(execute(params, req, runtime));
  }
}

EnableSqlAuditResponse Alibabacloud_Drds20190123::Client::enableSqlAudit(shared_ptr<EnableSqlAuditRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableSqlAuditWithOptions(request, runtime);
}

EnableSqlFlashbackMatchSwitchResponse Alibabacloud_Drds20190123::Client::enableSqlFlashbackMatchSwitchWithOptions(shared_ptr<EnableSqlFlashbackMatchSwitchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableSqlFlashbackMatchSwitch"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return EnableSqlFlashbackMatchSwitchResponse(callApi(params, req, runtime));
  }
  else {
    return EnableSqlFlashbackMatchSwitchResponse(execute(params, req, runtime));
  }
}

EnableSqlFlashbackMatchSwitchResponse Alibabacloud_Drds20190123::Client::enableSqlFlashbackMatchSwitch(shared_ptr<EnableSqlFlashbackMatchSwitchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableSqlFlashbackMatchSwitchWithOptions(request, runtime);
}

FlashbackRecycleBinTableResponse Alibabacloud_Drds20190123::Client::flashbackRecycleBinTableWithOptions(shared_ptr<FlashbackRecycleBinTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
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
    {"action", boost::any(string("FlashbackRecycleBinTable"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return FlashbackRecycleBinTableResponse(callApi(params, req, runtime));
  }
  else {
    return FlashbackRecycleBinTableResponse(execute(params, req, runtime));
  }
}

FlashbackRecycleBinTableResponse Alibabacloud_Drds20190123::Client::flashbackRecycleBinTable(shared_ptr<FlashbackRecycleBinTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return flashbackRecycleBinTableWithOptions(request, runtime);
}

GetDrdsDbRdsRelationInfoResponse Alibabacloud_Drds20190123::Client::getDrdsDbRdsRelationInfoWithOptions(shared_ptr<GetDrdsDbRdsRelationInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDrdsDbRdsRelationInfo"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetDrdsDbRdsRelationInfoResponse(callApi(params, req, runtime));
  }
  else {
    return GetDrdsDbRdsRelationInfoResponse(execute(params, req, runtime));
  }
}

GetDrdsDbRdsRelationInfoResponse Alibabacloud_Drds20190123::Client::getDrdsDbRdsRelationInfo(shared_ptr<GetDrdsDbRdsRelationInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDrdsDbRdsRelationInfoWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Drds20190123::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListTagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListTagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagResources"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListTagResourcesResponse(callApi(params, req, runtime));
  }
  else {
    return ListTagResourcesResponse(execute(params, req, runtime));
  }
}

ListTagResourcesResponse Alibabacloud_Drds20190123::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ManagePrivateRdsResponse Alibabacloud_Drds20190123::Client::managePrivateRdsWithOptions(shared_ptr<ManagePrivateRdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBInstanceId)) {
    query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    query->insert(pair<string, string>("Params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rdsAction)) {
    query->insert(pair<string, string>("RdsAction", *request->rdsAction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ManagePrivateRds"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ManagePrivateRdsResponse(callApi(params, req, runtime));
  }
  else {
    return ManagePrivateRdsResponse(execute(params, req, runtime));
  }
}

ManagePrivateRdsResponse Alibabacloud_Drds20190123::Client::managePrivateRds(shared_ptr<ManagePrivateRdsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return managePrivateRdsWithOptions(request, runtime);
}

ModifyAccountDescriptionResponse Alibabacloud_Drds20190123::Client::modifyAccountDescriptionWithOptions(shared_ptr<ModifyAccountDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    query->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAccountDescription"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyAccountDescriptionResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyAccountDescriptionResponse(execute(params, req, runtime));
  }
}

ModifyAccountDescriptionResponse Alibabacloud_Drds20190123::Client::modifyAccountDescription(shared_ptr<ModifyAccountDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAccountDescriptionWithOptions(request, runtime);
}

ModifyAccountPrivilegeResponse Alibabacloud_Drds20190123::Client::modifyAccountPrivilegeWithOptions(shared_ptr<ModifyAccountPrivilegeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    query->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyAccountPrivilegeRequestDbPrivilege>>(request->dbPrivilege)) {
    query->insert(pair<string, vector<ModifyAccountPrivilegeRequestDbPrivilege>>("DbPrivilege", *request->dbPrivilege));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAccountPrivilege"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyAccountPrivilegeResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyAccountPrivilegeResponse(execute(params, req, runtime));
  }
}

ModifyAccountPrivilegeResponse Alibabacloud_Drds20190123::Client::modifyAccountPrivilege(shared_ptr<ModifyAccountPrivilegeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAccountPrivilegeWithOptions(request, runtime);
}

ModifyDrdsInstanceDescriptionResponse Alibabacloud_Drds20190123::Client::modifyDrdsInstanceDescriptionWithOptions(shared_ptr<ModifyDrdsInstanceDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDrdsInstanceDescription"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyDrdsInstanceDescriptionResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyDrdsInstanceDescriptionResponse(execute(params, req, runtime));
  }
}

ModifyDrdsInstanceDescriptionResponse Alibabacloud_Drds20190123::Client::modifyDrdsInstanceDescription(shared_ptr<ModifyDrdsInstanceDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDrdsInstanceDescriptionWithOptions(request, runtime);
}

ModifyDrdsIpWhiteListResponse Alibabacloud_Drds20190123::Client::modifyDrdsIpWhiteListWithOptions(shared_ptr<ModifyDrdsIpWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupAttribute)) {
    query->insert(pair<string, string>("GroupAttribute", *request->groupAttribute));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipWhiteList)) {
    query->insert(pair<string, string>("IpWhiteList", *request->ipWhiteList));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->mode)) {
    query->insert(pair<string, bool>("Mode", *request->mode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDrdsIpWhiteList"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyDrdsIpWhiteListResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyDrdsIpWhiteListResponse(execute(params, req, runtime));
  }
}

ModifyDrdsIpWhiteListResponse Alibabacloud_Drds20190123::Client::modifyDrdsIpWhiteList(shared_ptr<ModifyDrdsIpWhiteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDrdsIpWhiteListWithOptions(request, runtime);
}

ModifyPolarDbReadWeightResponse Alibabacloud_Drds20190123::Client::modifyPolarDbReadWeightWithOptions(shared_ptr<ModifyPolarDbReadWeightRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbInstanceId)) {
    query->insert(pair<string, string>("DbInstanceId", *request->dbInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbNodeIds)) {
    query->insert(pair<string, string>("DbNodeIds", *request->dbNodeIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->weights)) {
    query->insert(pair<string, string>("Weights", *request->weights));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyPolarDbReadWeight"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyPolarDbReadWeightResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyPolarDbReadWeightResponse(execute(params, req, runtime));
  }
}

ModifyPolarDbReadWeightResponse Alibabacloud_Drds20190123::Client::modifyPolarDbReadWeight(shared_ptr<ModifyPolarDbReadWeightRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyPolarDbReadWeightWithOptions(request, runtime);
}

ModifyRdsReadWeightResponse Alibabacloud_Drds20190123::Client::modifyRdsReadWeightWithOptions(shared_ptr<ModifyRdsReadWeightRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceNames)) {
    query->insert(pair<string, string>("InstanceNames", *request->instanceNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->weights)) {
    query->insert(pair<string, string>("Weights", *request->weights));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyRdsReadWeight"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyRdsReadWeightResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyRdsReadWeightResponse(execute(params, req, runtime));
  }
}

ModifyRdsReadWeightResponse Alibabacloud_Drds20190123::Client::modifyRdsReadWeight(shared_ptr<ModifyRdsReadWeightRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyRdsReadWeightWithOptions(request, runtime);
}

PutStartBackupResponse Alibabacloud_Drds20190123::Client::putStartBackupWithOptions(shared_ptr<PutStartBackupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupDbNames)) {
    query->insert(pair<string, string>("BackupDbNames", *request->backupDbNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupLevel)) {
    query->insert(pair<string, string>("BackupLevel", *request->backupLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupMode)) {
    query->insert(pair<string, string>("BackupMode", *request->backupMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutStartBackup"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return PutStartBackupResponse(callApi(params, req, runtime));
  }
  else {
    return PutStartBackupResponse(execute(params, req, runtime));
  }
}

PutStartBackupResponse Alibabacloud_Drds20190123::Client::putStartBackup(shared_ptr<PutStartBackupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putStartBackupWithOptions(request, runtime);
}

RefreshDrdsAtomUrlResponse Alibabacloud_Drds20190123::Client::refreshDrdsAtomUrlWithOptions(shared_ptr<RefreshDrdsAtomUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefreshDrdsAtomUrl"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RefreshDrdsAtomUrlResponse(callApi(params, req, runtime));
  }
  else {
    return RefreshDrdsAtomUrlResponse(execute(params, req, runtime));
  }
}

RefreshDrdsAtomUrlResponse Alibabacloud_Drds20190123::Client::refreshDrdsAtomUrl(shared_ptr<RefreshDrdsAtomUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshDrdsAtomUrlWithOptions(request, runtime);
}

ReleaseInstanceInternetAddressResponse Alibabacloud_Drds20190123::Client::releaseInstanceInternetAddressWithOptions(shared_ptr<ReleaseInstanceInternetAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseInstanceInternetAddress"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ReleaseInstanceInternetAddressResponse(callApi(params, req, runtime));
  }
  else {
    return ReleaseInstanceInternetAddressResponse(execute(params, req, runtime));
  }
}

ReleaseInstanceInternetAddressResponse Alibabacloud_Drds20190123::Client::releaseInstanceInternetAddress(shared_ptr<ReleaseInstanceInternetAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseInstanceInternetAddressWithOptions(request, runtime);
}

RemoveBackupsSetResponse Alibabacloud_Drds20190123::Client::removeBackupsSetWithOptions(shared_ptr<RemoveBackupsSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupId)) {
    query->insert(pair<string, string>("BackupId", *request->backupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveBackupsSet"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RemoveBackupsSetResponse(callApi(params, req, runtime));
  }
  else {
    return RemoveBackupsSetResponse(execute(params, req, runtime));
  }
}

RemoveBackupsSetResponse Alibabacloud_Drds20190123::Client::removeBackupsSet(shared_ptr<RemoveBackupsSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeBackupsSetWithOptions(request, runtime);
}

RemoveDrdsDbResponse Alibabacloud_Drds20190123::Client::removeDrdsDbWithOptions(shared_ptr<RemoveDrdsDbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveDrdsDb"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RemoveDrdsDbResponse(callApi(params, req, runtime));
  }
  else {
    return RemoveDrdsDbResponse(execute(params, req, runtime));
  }
}

RemoveDrdsDbResponse Alibabacloud_Drds20190123::Client::removeDrdsDb(shared_ptr<RemoveDrdsDbRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeDrdsDbWithOptions(request, runtime);
}

RemoveDrdsDbFailedRecordResponse Alibabacloud_Drds20190123::Client::removeDrdsDbFailedRecordWithOptions(shared_ptr<RemoveDrdsDbFailedRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveDrdsDbFailedRecord"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RemoveDrdsDbFailedRecordResponse(callApi(params, req, runtime));
  }
  else {
    return RemoveDrdsDbFailedRecordResponse(execute(params, req, runtime));
  }
}

RemoveDrdsDbFailedRecordResponse Alibabacloud_Drds20190123::Client::removeDrdsDbFailedRecord(shared_ptr<RemoveDrdsDbFailedRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeDrdsDbFailedRecordWithOptions(request, runtime);
}

RemoveDrdsInstanceResponse Alibabacloud_Drds20190123::Client::removeDrdsInstanceWithOptions(shared_ptr<RemoveDrdsInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveDrdsInstance"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RemoveDrdsInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return RemoveDrdsInstanceResponse(execute(params, req, runtime));
  }
}

RemoveDrdsInstanceResponse Alibabacloud_Drds20190123::Client::removeDrdsInstance(shared_ptr<RemoveDrdsInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeDrdsInstanceWithOptions(request, runtime);
}

RemoveInstanceAccountResponse Alibabacloud_Drds20190123::Client::removeInstanceAccountWithOptions(shared_ptr<RemoveInstanceAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    query->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveInstanceAccount"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RemoveInstanceAccountResponse(callApi(params, req, runtime));
  }
  else {
    return RemoveInstanceAccountResponse(execute(params, req, runtime));
  }
}

RemoveInstanceAccountResponse Alibabacloud_Drds20190123::Client::removeInstanceAccount(shared_ptr<RemoveInstanceAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeInstanceAccountWithOptions(request, runtime);
}

RemoveRecycleBinTableResponse Alibabacloud_Drds20190123::Client::removeRecycleBinTableWithOptions(shared_ptr<RemoveRecycleBinTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
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
    {"action", boost::any(string("RemoveRecycleBinTable"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RemoveRecycleBinTableResponse(callApi(params, req, runtime));
  }
  else {
    return RemoveRecycleBinTableResponse(execute(params, req, runtime));
  }
}

RemoveRecycleBinTableResponse Alibabacloud_Drds20190123::Client::removeRecycleBinTable(shared_ptr<RemoveRecycleBinTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeRecycleBinTableWithOptions(request, runtime);
}

RestartDrdsInstanceResponse Alibabacloud_Drds20190123::Client::restartDrdsInstanceWithOptions(shared_ptr<RestartDrdsInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestartDrdsInstance"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RestartDrdsInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return RestartDrdsInstanceResponse(execute(params, req, runtime));
  }
}

RestartDrdsInstanceResponse Alibabacloud_Drds20190123::Client::restartDrdsInstance(shared_ptr<RestartDrdsInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restartDrdsInstanceWithOptions(request, runtime);
}

RollbackInstanceVersionResponse Alibabacloud_Drds20190123::Client::rollbackInstanceVersionWithOptions(shared_ptr<RollbackInstanceVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RollbackInstanceVersion"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RollbackInstanceVersionResponse(callApi(params, req, runtime));
  }
  else {
    return RollbackInstanceVersionResponse(execute(params, req, runtime));
  }
}

RollbackInstanceVersionResponse Alibabacloud_Drds20190123::Client::rollbackInstanceVersion(shared_ptr<RollbackInstanceVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rollbackInstanceVersionWithOptions(request, runtime);
}

SetBackupLocalResponse Alibabacloud_Drds20190123::Client::setBackupLocalWithOptions(shared_ptr<SetBackupLocalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->highSpaceUsageProtection)) {
    query->insert(pair<string, string>("HighSpaceUsageProtection", *request->highSpaceUsageProtection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->localLogRetentionHours)) {
    query->insert(pair<string, string>("LocalLogRetentionHours", *request->localLogRetentionHours));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->localLogRetentionSpace)) {
    query->insert(pair<string, string>("LocalLogRetentionSpace", *request->localLogRetentionSpace));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetBackupLocal"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SetBackupLocalResponse(callApi(params, req, runtime));
  }
  else {
    return SetBackupLocalResponse(execute(params, req, runtime));
  }
}

SetBackupLocalResponse Alibabacloud_Drds20190123::Client::setBackupLocal(shared_ptr<SetBackupLocalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setBackupLocalWithOptions(request, runtime);
}

SetBackupPolicyResponse Alibabacloud_Drds20190123::Client::setBackupPolicyWithOptions(shared_ptr<SetBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupDbNames)) {
    query->insert(pair<string, string>("BackupDbNames", *request->backupDbNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupLevel)) {
    query->insert(pair<string, string>("BackupLevel", *request->backupLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupLog)) {
    query->insert(pair<string, string>("BackupLog", *request->backupLog));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupMode)) {
    query->insert(pair<string, string>("BackupMode", *request->backupMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataBackupRetentionPeriod)) {
    query->insert(pair<string, string>("DataBackupRetentionPeriod", *request->dataBackupRetentionPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logBackupRetentionPeriod)) {
    query->insert(pair<string, string>("LogBackupRetentionPeriod", *request->logBackupRetentionPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preferredBackupEndTime)) {
    query->insert(pair<string, string>("PreferredBackupEndTime", *request->preferredBackupEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preferredBackupPeriod)) {
    query->insert(pair<string, string>("PreferredBackupPeriod", *request->preferredBackupPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preferredBackupStartTime)) {
    query->insert(pair<string, string>("PreferredBackupStartTime", *request->preferredBackupStartTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetBackupPolicy"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SetBackupPolicyResponse(callApi(params, req, runtime));
  }
  else {
    return SetBackupPolicyResponse(execute(params, req, runtime));
  }
}

SetBackupPolicyResponse Alibabacloud_Drds20190123::Client::setBackupPolicy(shared_ptr<SetBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setBackupPolicyWithOptions(request, runtime);
}

SetupBroadcastTablesResponse Alibabacloud_Drds20190123::Client::setupBroadcastTablesWithOptions(shared_ptr<SetupBroadcastTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->active)) {
    query->insert(pair<string, bool>("Active", *request->active));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tableName)) {
    query->insert(pair<string, vector<string>>("TableName", *request->tableName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetupBroadcastTables"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SetupBroadcastTablesResponse(callApi(params, req, runtime));
  }
  else {
    return SetupBroadcastTablesResponse(execute(params, req, runtime));
  }
}

SetupBroadcastTablesResponse Alibabacloud_Drds20190123::Client::setupBroadcastTables(shared_ptr<SetupBroadcastTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setupBroadcastTablesWithOptions(request, runtime);
}

SetupDrdsParamsResponse Alibabacloud_Drds20190123::Client::setupDrdsParamsWithOptions(shared_ptr<SetupDrdsParamsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<SetupDrdsParamsRequestData>>(request->data)) {
    query->insert(pair<string, vector<SetupDrdsParamsRequestData>>("Data", *request->data));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramLevel)) {
    query->insert(pair<string, string>("ParamLevel", *request->paramLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetupDrdsParams"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SetupDrdsParamsResponse(callApi(params, req, runtime));
  }
  else {
    return SetupDrdsParamsResponse(execute(params, req, runtime));
  }
}

SetupDrdsParamsResponse Alibabacloud_Drds20190123::Client::setupDrdsParams(shared_ptr<SetupDrdsParamsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setupDrdsParamsWithOptions(request, runtime);
}

SetupRecycleBinStatusResponse Alibabacloud_Drds20190123::Client::setupRecycleBinStatusWithOptions(shared_ptr<SetupRecycleBinStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statusAction)) {
    query->insert(pair<string, string>("StatusAction", *request->statusAction));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetupRecycleBinStatus"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SetupRecycleBinStatusResponse(callApi(params, req, runtime));
  }
  else {
    return SetupRecycleBinStatusResponse(execute(params, req, runtime));
  }
}

SetupRecycleBinStatusResponse Alibabacloud_Drds20190123::Client::setupRecycleBinStatus(shared_ptr<SetupRecycleBinStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setupRecycleBinStatusWithOptions(request, runtime);
}

SetupTableResponse Alibabacloud_Drds20190123::Client::setupTableWithOptions(shared_ptr<SetupTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->allowFullTableScan)) {
    query->insert(pair<string, bool>("AllowFullTableScan", *request->allowFullTableScan));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tableName)) {
    query->insert(pair<string, vector<string>>("TableName", *request->tableName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetupTable"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SetupTableResponse(callApi(params, req, runtime));
  }
  else {
    return SetupTableResponse(execute(params, req, runtime));
  }
}

SetupTableResponse Alibabacloud_Drds20190123::Client::setupTable(shared_ptr<SetupTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setupTableWithOptions(request, runtime);
}

StartRestoreResponse Alibabacloud_Drds20190123::Client::startRestoreWithOptions(shared_ptr<StartRestoreRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupDbNames)) {
    query->insert(pair<string, string>("BackupDbNames", *request->backupDbNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupId)) {
    query->insert(pair<string, string>("BackupId", *request->backupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupLevel)) {
    query->insert(pair<string, string>("BackupLevel", *request->backupLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupMode)) {
    query->insert(pair<string, string>("BackupMode", *request->backupMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preferredBackupTime)) {
    query->insert(pair<string, string>("PreferredBackupTime", *request->preferredBackupTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartRestore"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StartRestoreResponse(callApi(params, req, runtime));
  }
  else {
    return StartRestoreResponse(execute(params, req, runtime));
  }
}

StartRestoreResponse Alibabacloud_Drds20190123::Client::startRestore(shared_ptr<StartRestoreRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startRestoreWithOptions(request, runtime);
}

SubmitCleanTaskResponse Alibabacloud_Drds20190123::Client::submitCleanTaskWithOptions(shared_ptr<SubmitCleanTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expandType)) {
    query->insert(pair<string, string>("ExpandType", *request->expandType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentJobId)) {
    query->insert(pair<string, string>("ParentJobId", *request->parentJobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitCleanTask"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitCleanTaskResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitCleanTaskResponse(execute(params, req, runtime));
  }
}

SubmitCleanTaskResponse Alibabacloud_Drds20190123::Client::submitCleanTask(shared_ptr<SubmitCleanTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitCleanTaskWithOptions(request, runtime);
}

SubmitHotExpandPreCheckTaskResponse Alibabacloud_Drds20190123::Client::submitHotExpandPreCheckTaskWithOptions(shared_ptr<SubmitHotExpandPreCheckTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbInstType)) {
    query->insert(pair<string, string>("DbInstType", *request->dbInstType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tableList)) {
    query->insert(pair<string, vector<string>>("TableList", *request->tableList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitHotExpandPreCheckTask"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitHotExpandPreCheckTaskResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitHotExpandPreCheckTaskResponse(execute(params, req, runtime));
  }
}

SubmitHotExpandPreCheckTaskResponse Alibabacloud_Drds20190123::Client::submitHotExpandPreCheckTask(shared_ptr<SubmitHotExpandPreCheckTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitHotExpandPreCheckTaskWithOptions(request, runtime);
}

SubmitHotExpandTaskResponse Alibabacloud_Drds20190123::Client::submitHotExpandTaskWithOptions(shared_ptr<SubmitHotExpandTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SubmitHotExpandTaskRequestExtendedMapping>>(request->extendedMapping)) {
    query->insert(pair<string, vector<SubmitHotExpandTaskRequestExtendedMapping>>("ExtendedMapping", *request->extendedMapping));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SubmitHotExpandTaskRequestInstanceDbMapping>>(request->instanceDbMapping)) {
    query->insert(pair<string, vector<SubmitHotExpandTaskRequestInstanceDbMapping>>("InstanceDbMapping", *request->instanceDbMapping));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SubmitHotExpandTaskRequestMapping>>(request->mapping)) {
    query->insert(pair<string, vector<SubmitHotExpandTaskRequestMapping>>("Mapping", *request->mapping));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SubmitHotExpandTaskRequestSupperAccountMapping>>(request->supperAccountMapping)) {
    query->insert(pair<string, vector<SubmitHotExpandTaskRequestSupperAccountMapping>>("SupperAccountMapping", *request->supperAccountMapping));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskDesc)) {
    query->insert(pair<string, string>("TaskDesc", *request->taskDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    query->insert(pair<string, string>("TaskName", *request->taskName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitHotExpandTask"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitHotExpandTaskResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitHotExpandTaskResponse(execute(params, req, runtime));
  }
}

SubmitHotExpandTaskResponse Alibabacloud_Drds20190123::Client::submitHotExpandTask(shared_ptr<SubmitHotExpandTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitHotExpandTaskWithOptions(request, runtime);
}

SubmitSmoothExpandPreCheckResponse Alibabacloud_Drds20190123::Client::submitSmoothExpandPreCheckWithOptions(shared_ptr<SubmitSmoothExpandPreCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbInstType)) {
    query->insert(pair<string, string>("DbInstType", *request->dbInstType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitSmoothExpandPreCheck"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitSmoothExpandPreCheckResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitSmoothExpandPreCheckResponse(execute(params, req, runtime));
  }
}

SubmitSmoothExpandPreCheckResponse Alibabacloud_Drds20190123::Client::submitSmoothExpandPreCheck(shared_ptr<SubmitSmoothExpandPreCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSmoothExpandPreCheckWithOptions(request, runtime);
}

SubmitSmoothExpandPreCheckTaskResponse Alibabacloud_Drds20190123::Client::submitSmoothExpandPreCheckTaskWithOptions(shared_ptr<SubmitSmoothExpandPreCheckTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitSmoothExpandPreCheckTask"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitSmoothExpandPreCheckTaskResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitSmoothExpandPreCheckTaskResponse(execute(params, req, runtime));
  }
}

SubmitSmoothExpandPreCheckTaskResponse Alibabacloud_Drds20190123::Client::submitSmoothExpandPreCheckTask(shared_ptr<SubmitSmoothExpandPreCheckTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSmoothExpandPreCheckTaskWithOptions(request, runtime);
}

SubmitSqlFlashbackTaskResponse Alibabacloud_Drds20190123::Client::submitSqlFlashbackTaskWithOptions(shared_ptr<SubmitSqlFlashbackTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->recallRestoreType)) {
    query->insert(pair<string, long>("RecallRestoreType", *request->recallRestoreType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->recallType)) {
    query->insert(pair<string, long>("RecallType", *request->recallType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlPk)) {
    query->insert(pair<string, string>("SqlPk", *request->sqlPk));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlType)) {
    query->insert(pair<string, string>("SqlType", *request->sqlType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->traceId)) {
    query->insert(pair<string, string>("TraceId", *request->traceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitSqlFlashbackTask"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitSqlFlashbackTaskResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitSqlFlashbackTaskResponse(execute(params, req, runtime));
  }
}

SubmitSqlFlashbackTaskResponse Alibabacloud_Drds20190123::Client::submitSqlFlashbackTask(shared_ptr<SubmitSqlFlashbackTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSqlFlashbackTaskWithOptions(request, runtime);
}

SwitchGlobalBroadcastTypeResponse Alibabacloud_Drds20190123::Client::switchGlobalBroadcastTypeWithOptions(shared_ptr<SwitchGlobalBroadcastTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SwitchGlobalBroadcastType"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SwitchGlobalBroadcastTypeResponse(callApi(params, req, runtime));
  }
  else {
    return SwitchGlobalBroadcastTypeResponse(execute(params, req, runtime));
  }
}

SwitchGlobalBroadcastTypeResponse Alibabacloud_Drds20190123::Client::switchGlobalBroadcastType(shared_ptr<SwitchGlobalBroadcastTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchGlobalBroadcastTypeWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Drds20190123::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<TagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return TagResourcesResponse(callApi(params, req, runtime));
  }
  else {
    return TagResourcesResponse(execute(params, req, runtime));
  }
}

TagResourcesResponse Alibabacloud_Drds20190123::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Drds20190123::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagKey)) {
    query->insert(pair<string, vector<string>>("TagKey", *request->tagKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UntagResourcesResponse(callApi(params, req, runtime));
  }
  else {
    return UntagResourcesResponse(execute(params, req, runtime));
  }
}

UntagResourcesResponse Alibabacloud_Drds20190123::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UpdateInstanceNetworkResponse Alibabacloud_Drds20190123::Client::updateInstanceNetworkWithOptions(shared_ptr<UpdateInstanceNetworkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->classicExpiredDays)) {
    query->insert(pair<string, long>("ClassicExpiredDays", *request->classicExpiredDays));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->retainClassic)) {
    query->insert(pair<string, bool>("RetainClassic", *request->retainClassic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcInstanceNetworkType)) {
    query->insert(pair<string, string>("SrcInstanceNetworkType", *request->srcInstanceNetworkType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateInstanceNetwork"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateInstanceNetworkResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateInstanceNetworkResponse(execute(params, req, runtime));
  }
}

UpdateInstanceNetworkResponse Alibabacloud_Drds20190123::Client::updateInstanceNetwork(shared_ptr<UpdateInstanceNetworkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateInstanceNetworkWithOptions(request, runtime);
}

UpdatePrivateRdsClassResponse Alibabacloud_Drds20190123::Client::updatePrivateRdsClassWithOptions(shared_ptr<UpdatePrivateRdsClassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoUseCoupon)) {
    query->insert(pair<string, bool>("AutoUseCoupon", *request->autoUseCoupon));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBInstanceId)) {
    query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->prePayDuration)) {
    query->insert(pair<string, long>("PrePayDuration", *request->prePayDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rdsClass)) {
    query->insert(pair<string, string>("RdsClass", *request->rdsClass));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storage)) {
    query->insert(pair<string, string>("Storage", *request->storage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePrivateRdsClass"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdatePrivateRdsClassResponse(callApi(params, req, runtime));
  }
  else {
    return UpdatePrivateRdsClassResponse(execute(params, req, runtime));
  }
}

UpdatePrivateRdsClassResponse Alibabacloud_Drds20190123::Client::updatePrivateRdsClass(shared_ptr<UpdatePrivateRdsClassRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePrivateRdsClassWithOptions(request, runtime);
}

UpdateResourceGroupAttributeResponse Alibabacloud_Drds20190123::Client::updateResourceGroupAttributeWithOptions(shared_ptr<UpdateResourceGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newResourceGroupId)) {
    query->insert(pair<string, string>("NewResourceGroupId", *request->newResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateResourceGroupAttribute"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateResourceGroupAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateResourceGroupAttributeResponse(execute(params, req, runtime));
  }
}

UpdateResourceGroupAttributeResponse Alibabacloud_Drds20190123::Client::updateResourceGroupAttribute(shared_ptr<UpdateResourceGroupAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateResourceGroupAttributeWithOptions(request, runtime);
}

UpgradeHiStoreInstanceResponse Alibabacloud_Drds20190123::Client::upgradeHiStoreInstanceWithOptions(shared_ptr<UpgradeHiStoreInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->historeInstanceId)) {
    query->insert(pair<string, string>("HistoreInstanceId", *request->historeInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeHiStoreInstance"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpgradeHiStoreInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return UpgradeHiStoreInstanceResponse(execute(params, req, runtime));
  }
}

UpgradeHiStoreInstanceResponse Alibabacloud_Drds20190123::Client::upgradeHiStoreInstance(shared_ptr<UpgradeHiStoreInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeHiStoreInstanceWithOptions(request, runtime);
}

UpgradeInstanceVersionResponse Alibabacloud_Drds20190123::Client::upgradeInstanceVersionWithOptions(shared_ptr<UpgradeInstanceVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rpm)) {
    query->insert(pair<string, string>("Rpm", *request->rpm));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeInstanceVersion"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpgradeInstanceVersionResponse(callApi(params, req, runtime));
  }
  else {
    return UpgradeInstanceVersionResponse(execute(params, req, runtime));
  }
}

UpgradeInstanceVersionResponse Alibabacloud_Drds20190123::Client::upgradeInstanceVersion(shared_ptr<UpgradeInstanceVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeInstanceVersionWithOptions(request, runtime);
}

ValidateShardTaskResponse Alibabacloud_Drds20190123::Client::validateShardTaskWithOptions(shared_ptr<ValidateShardTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drdsInstanceId)) {
    query->insert(pair<string, string>("DrdsInstanceId", *request->drdsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceTableName)) {
    query->insert(pair<string, string>("SourceTableName", *request->sourceTableName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetTableName)) {
    query->insert(pair<string, string>("TargetTableName", *request->targetTableName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("TaskType", *request->taskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ValidateShardTask"))},
    {"version", boost::any(string("2019-01-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ValidateShardTaskResponse(callApi(params, req, runtime));
  }
  else {
    return ValidateShardTaskResponse(execute(params, req, runtime));
  }
}

ValidateShardTaskResponse Alibabacloud_Drds20190123::Client::validateShardTask(shared_ptr<ValidateShardTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return validateShardTaskWithOptions(request, runtime);
}

