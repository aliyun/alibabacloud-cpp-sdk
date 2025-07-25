// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ocean_base_pro_20190901.hpp>
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

using namespace Alibabacloud_OceanBasePro20190901;

Alibabacloud_OceanBasePro20190901::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("oceanbasepro"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_OceanBasePro20190901::Client::getEndpoint(shared_ptr<string> productId,
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

BatchKillProcessListResponse Alibabacloud_OceanBasePro20190901::Client::batchKillProcessListWithOptions(shared_ptr<BatchKillProcessListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->byObSessionId)) {
    body->insert(pair<string, bool>("ByObSessionId", *request->byObSessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionList)) {
    body->insert(pair<string, string>("SessionList", *request->sessionList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchKillProcessList"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchKillProcessListResponse(callApi(params, req, runtime));
}

BatchKillProcessListResponse Alibabacloud_OceanBasePro20190901::Client::batchKillProcessList(shared_ptr<BatchKillProcessListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchKillProcessListWithOptions(request, runtime);
}

BatchKillSessionListResponse Alibabacloud_OceanBasePro20190901::Client::batchKillSessionListWithOptions(shared_ptr<BatchKillSessionListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionList)) {
    body->insert(pair<string, string>("SessionList", *request->sessionList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchKillSessionList"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchKillSessionListResponse(callApi(params, req, runtime));
}

BatchKillSessionListResponse Alibabacloud_OceanBasePro20190901::Client::batchKillSessionList(shared_ptr<BatchKillSessionListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchKillSessionListWithOptions(request, runtime);
}

CancelProjectModifyRecordResponse Alibabacloud_OceanBasePro20190901::Client::cancelProjectModifyRecordWithOptions(shared_ptr<CancelProjectModifyRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelProjectModifyRecord"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelProjectModifyRecordResponse(callApi(params, req, runtime));
}

CancelProjectModifyRecordResponse Alibabacloud_OceanBasePro20190901::Client::cancelProjectModifyRecord(shared_ptr<CancelProjectModifyRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelProjectModifyRecordWithOptions(request, runtime);
}

CreateBackupSetDownloadLinkResponse Alibabacloud_OceanBasePro20190901::Client::createBackupSetDownloadLinkWithOptions(shared_ptr<CreateBackupSetDownloadLinkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupSetId)) {
    body->insert(pair<string, string>("BackupSetId", *request->backupSetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBackupSetDownloadLink"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBackupSetDownloadLinkResponse(callApi(params, req, runtime));
}

CreateBackupSetDownloadLinkResponse Alibabacloud_OceanBasePro20190901::Client::createBackupSetDownloadLink(shared_ptr<CreateBackupSetDownloadLinkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBackupSetDownloadLinkWithOptions(request, runtime);
}

CreateDatabaseResponse Alibabacloud_OceanBasePro20190901::Client::createDatabaseWithOptions(shared_ptr<CreateDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->collation)) {
    body->insert(pair<string, string>("Collation", *request->collation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseName)) {
    body->insert(pair<string, string>("DatabaseName", *request->databaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encoding)) {
    body->insert(pair<string, string>("Encoding", *request->encoding));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDatabase"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDatabaseResponse(callApi(params, req, runtime));
}

CreateDatabaseResponse Alibabacloud_OceanBasePro20190901::Client::createDatabase(shared_ptr<CreateDatabaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDatabaseWithOptions(request, runtime);
}

CreateInstanceResponse Alibabacloud_OceanBasePro20190901::Client::createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRenew)) {
    body->insert(pair<string, bool>("AutoRenew", *request->autoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->autoRenewPeriod)) {
    body->insert(pair<string, long>("AutoRenewPeriod", *request->autoRenewPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    body->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cpuArch)) {
    body->insert(pair<string, string>("CpuArch", *request->cpuArch));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->diskSize)) {
    body->insert(pair<string, long>("DiskSize", *request->diskSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->diskType)) {
    body->insert(pair<string, string>("DiskType", *request->diskType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    body->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceClass)) {
    body->insert(pair<string, string>("InstanceClass", *request->instanceClass));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    body->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isolationOptimization)) {
    body->insert(pair<string, string>("IsolationOptimization", *request->isolationOptimization));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->obVersion)) {
    body->insert(pair<string, string>("ObVersion", *request->obVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    body->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    body->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->primaryInstance)) {
    body->insert(pair<string, string>("PrimaryInstance", *request->primaryInstance));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->primaryRegion)) {
    body->insert(pair<string, string>("PrimaryRegion", *request->primaryRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->replicaMode)) {
    body->insert(pair<string, string>("ReplicaMode", *request->replicaMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->series)) {
    body->insert(pair<string, string>("Series", *request->series));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zones)) {
    body->insert(pair<string, string>("Zones", *request->zones));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateInstance"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateInstanceResponse(callApi(params, req, runtime));
}

CreateInstanceResponse Alibabacloud_OceanBasePro20190901::Client::createInstance(shared_ptr<CreateInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createInstanceWithOptions(request, runtime);
}

CreateLabelResponse Alibabacloud_OceanBasePro20190901::Client::createLabelWithOptions(shared_ptr<CreateLabelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLabel"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLabelResponse(callApi(params, req, runtime));
}

CreateLabelResponse Alibabacloud_OceanBasePro20190901::Client::createLabel(shared_ptr<CreateLabelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLabelWithOptions(request, runtime);
}

CreateMySqlDataSourceResponse Alibabacloud_OceanBasePro20190901::Client::createMySqlDataSourceWithOptions(shared_ptr<CreateMySqlDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dgInstanceId)) {
    body->insert(pair<string, string>("DgInstanceId", *request->dgInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    body->insert(pair<string, string>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    body->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->port)) {
    body->insert(pair<string, long>("Port", *request->port));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schema)) {
    body->insert(pair<string, string>("Schema", *request->schema));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useSsl)) {
    body->insert(pair<string, bool>("UseSsl", *request->useSsl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    body->insert(pair<string, string>("UserName", *request->userName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    body->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMySqlDataSource"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMySqlDataSourceResponse(callApi(params, req, runtime));
}

CreateMySqlDataSourceResponse Alibabacloud_OceanBasePro20190901::Client::createMySqlDataSource(shared_ptr<CreateMySqlDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMySqlDataSourceWithOptions(request, runtime);
}

CreateOasOutlineTaskResponse Alibabacloud_OceanBasePro20190901::Client::createOasOutlineTaskWithOptions(shared_ptr<CreateOasOutlineTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->bySqlId)) {
    body->insert(pair<string, bool>("BySqlId", *request->bySqlId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseName)) {
    body->insert(pair<string, string>("DatabaseName", *request->databaseName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dynamicSql)) {
    body->insert(pair<string, bool>("DynamicSql", *request->dynamicSql));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexName)) {
    body->insert(pair<string, string>("IndexName", *request->indexName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isConcurrentLimit)) {
    body->insert(pair<string, bool>("IsConcurrentLimit", *request->isConcurrentLimit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxConcurrent)) {
    body->insert(pair<string, long>("MaxConcurrent", *request->maxConcurrent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->planData)) {
    body->insert(pair<string, string>("PlanData", *request->planData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlId)) {
    body->insert(pair<string, string>("SqlId", *request->sqlId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlText)) {
    body->insert(pair<string, string>("SqlText", *request->sqlText));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statementId)) {
    body->insert(pair<string, string>("StatementId", *request->statementId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    body->insert(pair<string, string>("TableName", *request->tableName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->UId)) {
    body->insert(pair<string, string>("UId", *request->UId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOasOutlineTask"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOasOutlineTaskResponse(callApi(params, req, runtime));
}

CreateOasOutlineTaskResponse Alibabacloud_OceanBasePro20190901::Client::createOasOutlineTask(shared_ptr<CreateOasOutlineTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOasOutlineTaskWithOptions(request, runtime);
}

CreateOceanBaseDataSourceResponse Alibabacloud_OceanBasePro20190901::Client::createOceanBaseDataSourceWithOptions(shared_ptr<CreateOceanBaseDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cluster)) {
    body->insert(pair<string, string>("Cluster", *request->cluster));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configUrl)) {
    body->insert(pair<string, string>("ConfigUrl", *request->configUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drcPassword)) {
    body->insert(pair<string, string>("DrcPassword", *request->drcPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->drcUserName)) {
    body->insert(pair<string, string>("DrcUserName", *request->drcUserName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->innerDrcPassword)) {
    body->insert(pair<string, string>("InnerDrcPassword", *request->innerDrcPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    body->insert(pair<string, string>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logProxyIp)) {
    body->insert(pair<string, string>("LogProxyIp", *request->logProxyIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logProxyPort)) {
    body->insert(pair<string, string>("LogProxyPort", *request->logProxyPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    body->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->port)) {
    body->insert(pair<string, long>("Port", *request->port));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenant)) {
    body->insert(pair<string, string>("Tenant", *request->tenant));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    body->insert(pair<string, string>("UserName", *request->userName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    body->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOceanBaseDataSource"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOceanBaseDataSourceResponse(callApi(params, req, runtime));
}

CreateOceanBaseDataSourceResponse Alibabacloud_OceanBasePro20190901::Client::createOceanBaseDataSource(shared_ptr<CreateOceanBaseDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOceanBaseDataSourceWithOptions(request, runtime);
}

CreateOmsMysqlDataSourceResponse Alibabacloud_OceanBasePro20190901::Client::createOmsMysqlDataSourceWithOptions(shared_ptr<CreateOmsMysqlDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dgDatabaseId)) {
    body->insert(pair<string, string>("DgDatabaseId", *request->dgDatabaseId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    body->insert(pair<string, string>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    body->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->port)) {
    body->insert(pair<string, string>("Port", *request->port));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schema)) {
    body->insert(pair<string, string>("Schema", *request->schema));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    body->insert(pair<string, string>("Username", *request->username));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    body->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOmsMysqlDataSource"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOmsMysqlDataSourceResponse(callApi(params, req, runtime));
}

CreateOmsMysqlDataSourceResponse Alibabacloud_OceanBasePro20190901::Client::createOmsMysqlDataSource(shared_ptr<CreateOmsMysqlDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOmsMysqlDataSourceWithOptions(request, runtime);
}

CreateProjectResponse Alibabacloud_OceanBasePro20190901::Client::createProjectWithOptions(shared_ptr<CreateProjectRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateProjectShrinkRequest> request = make_shared<CreateProjectShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateProjectRequestCommonTransferConfig>(tmpReq->commonTransferConfig)) {
    request->commonTransferConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->commonTransferConfig, make_shared<string>("CommonTransferConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateProjectRequestFullTransferConfig>(tmpReq->fullTransferConfig)) {
    request->fullTransferConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->fullTransferConfig, make_shared<string>("FullTransferConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateProjectRequestIncrTransferConfig>(tmpReq->incrTransferConfig)) {
    request->incrTransferConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->incrTransferConfig, make_shared<string>("IncrTransferConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->labelIds)) {
    request->labelIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->labelIds, make_shared<string>("LabelIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateProjectRequestReverseIncrTransferConfig>(tmpReq->reverseIncrTransferConfig)) {
    request->reverseIncrTransferConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->reverseIncrTransferConfig, make_shared<string>("ReverseIncrTransferConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateProjectRequestStructTransferConfig>(tmpReq->structTransferConfig)) {
    request->structTransferConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->structTransferConfig, make_shared<string>("StructTransferConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateProjectRequestTransferMapping>(tmpReq->transferMapping)) {
    request->transferMappingShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->transferMapping, make_shared<string>("TransferMapping"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->commonTransferConfigShrink)) {
    body->insert(pair<string, string>("CommonTransferConfig", *request->commonTransferConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableFullTransfer)) {
    body->insert(pair<string, bool>("EnableFullTransfer", *request->enableFullTransfer));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableFullVerify)) {
    body->insert(pair<string, bool>("EnableFullVerify", *request->enableFullVerify));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableIncrTransfer)) {
    body->insert(pair<string, bool>("EnableIncrTransfer", *request->enableIncrTransfer));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableReverseIncrTransfer)) {
    body->insert(pair<string, bool>("EnableReverseIncrTransfer", *request->enableReverseIncrTransfer));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableStructTransfer)) {
    body->insert(pair<string, bool>("EnableStructTransfer", *request->enableStructTransfer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fullTransferConfigShrink)) {
    body->insert(pair<string, string>("FullTransferConfig", *request->fullTransferConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incrTransferConfigShrink)) {
    body->insert(pair<string, string>("IncrTransferConfig", *request->incrTransferConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelIdsShrink)) {
    body->insert(pair<string, string>("LabelIds", *request->labelIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossKey)) {
    body->insert(pair<string, string>("OssKey", *request->ossKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reverseIncrTransferConfigShrink)) {
    body->insert(pair<string, string>("ReverseIncrTransferConfig", *request->reverseIncrTransferConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sinkEndpointId)) {
    body->insert(pair<string, string>("SinkEndpointId", *request->sinkEndpointId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointId)) {
    body->insert(pair<string, string>("SourceEndpointId", *request->sourceEndpointId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->structTransferConfigShrink)) {
    body->insert(pair<string, string>("StructTransferConfig", *request->structTransferConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transferMappingShrink)) {
    body->insert(pair<string, string>("TransferMapping", *request->transferMappingShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useOss)) {
    body->insert(pair<string, bool>("UseOss", *request->useOss));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workerGradeId)) {
    body->insert(pair<string, string>("WorkerGradeId", *request->workerGradeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProject"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProjectResponse(callApi(params, req, runtime));
}

CreateProjectResponse Alibabacloud_OceanBasePro20190901::Client::createProject(shared_ptr<CreateProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProjectWithOptions(request, runtime);
}

CreateProjectModifyRecordsResponse Alibabacloud_OceanBasePro20190901::Client::createProjectModifyRecordsWithOptions(shared_ptr<CreateProjectModifyRecordsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateProjectModifyRecordsShrinkRequest> request = make_shared<CreateProjectModifyRecordsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateProjectModifyRecordsRequestDatabases>>(tmpReq->databases)) {
    request->databasesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->databases, make_shared<string>("Databases"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateProjectModifyRecordsRequestTransferMapping>(tmpReq->transferMapping)) {
    request->transferMappingShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->transferMapping, make_shared<string>("TransferMapping"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->databasesShrink)) {
    body->insert(pair<string, string>("Databases", *request->databasesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transferMappingShrink)) {
    body->insert(pair<string, string>("TransferMapping", *request->transferMappingShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProjectModifyRecords"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProjectModifyRecordsResponse(callApi(params, req, runtime));
}

CreateProjectModifyRecordsResponse Alibabacloud_OceanBasePro20190901::Client::createProjectModifyRecords(shared_ptr<CreateProjectModifyRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProjectModifyRecordsWithOptions(request, runtime);
}

CreateRdsPostgreSQLDataSourceResponse Alibabacloud_OceanBasePro20190901::Client::createRdsPostgreSQLDataSourceWithOptions(shared_ptr<CreateRdsPostgreSQLDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseName)) {
    body->insert(pair<string, string>("DatabaseName", *request->databaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    body->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    body->insert(pair<string, string>("UserName", *request->userName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRdsPostgreSQLDataSource"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRdsPostgreSQLDataSourceResponse(callApi(params, req, runtime));
}

CreateRdsPostgreSQLDataSourceResponse Alibabacloud_OceanBasePro20190901::Client::createRdsPostgreSQLDataSource(shared_ptr<CreateRdsPostgreSQLDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRdsPostgreSQLDataSourceWithOptions(request, runtime);
}

CreateSecurityIpGroupResponse Alibabacloud_OceanBasePro20190901::Client::createSecurityIpGroupWithOptions(shared_ptr<CreateSecurityIpGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityIpGroupName)) {
    body->insert(pair<string, string>("SecurityIpGroupName", *request->securityIpGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityIps)) {
    body->insert(pair<string, string>("SecurityIps", *request->securityIps));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSecurityIpGroup"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSecurityIpGroupResponse(callApi(params, req, runtime));
}

CreateSecurityIpGroupResponse Alibabacloud_OceanBasePro20190901::Client::createSecurityIpGroup(shared_ptr<CreateSecurityIpGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSecurityIpGroupWithOptions(request, runtime);
}

CreateTagResponse Alibabacloud_OceanBasePro20190901::Client::createTagWithOptions(shared_ptr<CreateTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    body->insert(pair<string, string>("Key", *request->key));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTag"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTagResponse(callApi(params, req, runtime));
}

CreateTagResponse Alibabacloud_OceanBasePro20190901::Client::createTag(shared_ptr<CreateTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTagWithOptions(request, runtime);
}

CreateTagValueResponse Alibabacloud_OceanBasePro20190901::Client::createTagValueWithOptions(shared_ptr<CreateTagValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    body->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    body->insert(pair<string, string>("Value", *request->value));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTagValue"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTagValueResponse(callApi(params, req, runtime));
}

CreateTagValueResponse Alibabacloud_OceanBasePro20190901::Client::createTagValue(shared_ptr<CreateTagValueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTagValueWithOptions(request, runtime);
}

CreateTenantResponse Alibabacloud_OceanBasePro20190901::Client::createTenantWithOptions(shared_ptr<CreateTenantRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateTenantShrinkRequest> request = make_shared<CreateTenantShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->createParams)) {
    request->createParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->createParams, make_shared<string>("CreateParams"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->charset)) {
    body->insert(pair<string, string>("Charset", *request->charset));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cpu)) {
    body->insert(pair<string, long>("Cpu", *request->cpu));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createParamsShrink)) {
    body->insert(pair<string, string>("CreateParams", *request->createParamsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->logDisk)) {
    body->insert(pair<string, long>("LogDisk", *request->logDisk));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->memory)) {
    body->insert(pair<string, long>("Memory", *request->memory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->primaryZone)) {
    body->insert(pair<string, string>("PrimaryZone", *request->primaryZone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->readOnlyZoneList)) {
    body->insert(pair<string, string>("ReadOnlyZoneList", *request->readOnlyZoneList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantMode)) {
    body->insert(pair<string, string>("TenantMode", *request->tenantMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantName)) {
    body->insert(pair<string, string>("TenantName", *request->tenantName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeZone)) {
    body->insert(pair<string, string>("TimeZone", *request->timeZone));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->unitNum)) {
    body->insert(pair<string, long>("UnitNum", *request->unitNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userVSwitchId)) {
    body->insert(pair<string, string>("UserVSwitchId", *request->userVSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userVpcId)) {
    body->insert(pair<string, string>("UserVpcId", *request->userVpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userVpcOwnerId)) {
    body->insert(pair<string, string>("UserVpcOwnerId", *request->userVpcOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTenant"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTenantResponse(callApi(params, req, runtime));
}

CreateTenantResponse Alibabacloud_OceanBasePro20190901::Client::createTenant(shared_ptr<CreateTenantRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTenantWithOptions(request, runtime);
}

CreateTenantReadOnlyConnectionResponse Alibabacloud_OceanBasePro20190901::Client::createTenantReadOnlyConnectionWithOptions(shared_ptr<CreateTenantReadOnlyConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    body->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    body->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    body->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTenantReadOnlyConnection"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTenantReadOnlyConnectionResponse(callApi(params, req, runtime));
}

CreateTenantReadOnlyConnectionResponse Alibabacloud_OceanBasePro20190901::Client::createTenantReadOnlyConnection(shared_ptr<CreateTenantReadOnlyConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTenantReadOnlyConnectionWithOptions(request, runtime);
}

CreateTenantSecurityIpGroupResponse Alibabacloud_OceanBasePro20190901::Client::createTenantSecurityIpGroupWithOptions(shared_ptr<CreateTenantSecurityIpGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityIpGroupName)) {
    body->insert(pair<string, string>("SecurityIpGroupName", *request->securityIpGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityIps)) {
    body->insert(pair<string, string>("SecurityIps", *request->securityIps));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTenantSecurityIpGroup"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTenantSecurityIpGroupResponse(callApi(params, req, runtime));
}

CreateTenantSecurityIpGroupResponse Alibabacloud_OceanBasePro20190901::Client::createTenantSecurityIpGroup(shared_ptr<CreateTenantSecurityIpGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTenantSecurityIpGroupWithOptions(request, runtime);
}

CreateTenantUserResponse Alibabacloud_OceanBasePro20190901::Client::createTenantUserWithOptions(shared_ptr<CreateTenantUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptionType)) {
    body->insert(pair<string, string>("EncryptionType", *request->encryptionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->globalPermissions)) {
    body->insert(pair<string, string>("GlobalPermissions", *request->globalPermissions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roles)) {
    body->insert(pair<string, string>("Roles", *request->roles));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    body->insert(pair<string, string>("UserName", *request->userName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userPassword)) {
    body->insert(pair<string, string>("UserPassword", *request->userPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userType)) {
    body->insert(pair<string, string>("UserType", *request->userType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTenantUser"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTenantUserResponse(callApi(params, req, runtime));
}

CreateTenantUserResponse Alibabacloud_OceanBasePro20190901::Client::createTenantUser(shared_ptr<CreateTenantUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTenantUserWithOptions(request, runtime);
}

DeleteDataSourceResponse Alibabacloud_OceanBasePro20190901::Client::deleteDataSourceWithOptions(shared_ptr<DeleteDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDataSource"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDataSourceResponse(callApi(params, req, runtime));
}

DeleteDataSourceResponse Alibabacloud_OceanBasePro20190901::Client::deleteDataSource(shared_ptr<DeleteDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDataSourceWithOptions(request, runtime);
}

DeleteDatabasesResponse Alibabacloud_OceanBasePro20190901::Client::deleteDatabasesWithOptions(shared_ptr<DeleteDatabasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseNames)) {
    body->insert(pair<string, string>("DatabaseNames", *request->databaseNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDatabases"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDatabasesResponse(callApi(params, req, runtime));
}

DeleteDatabasesResponse Alibabacloud_OceanBasePro20190901::Client::deleteDatabases(shared_ptr<DeleteDatabasesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDatabasesWithOptions(request, runtime);
}

DeleteInstancesResponse Alibabacloud_OceanBasePro20190901::Client::deleteInstancesWithOptions(shared_ptr<DeleteInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupRetainMode)) {
    body->insert(pair<string, string>("BackupRetainMode", *request->backupRetainMode));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    body->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIds)) {
    body->insert(pair<string, string>("InstanceIds", *request->instanceIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteInstances"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteInstancesResponse(callApi(params, req, runtime));
}

DeleteInstancesResponse Alibabacloud_OceanBasePro20190901::Client::deleteInstances(shared_ptr<DeleteInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteInstancesWithOptions(request, runtime);
}

DeleteProjectResponse Alibabacloud_OceanBasePro20190901::Client::deleteProjectWithOptions(shared_ptr<DeleteProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProject"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteProjectResponse(callApi(params, req, runtime));
}

DeleteProjectResponse Alibabacloud_OceanBasePro20190901::Client::deleteProject(shared_ptr<DeleteProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteProjectWithOptions(request, runtime);
}

DeleteSecurityIpGroupResponse Alibabacloud_OceanBasePro20190901::Client::deleteSecurityIpGroupWithOptions(shared_ptr<DeleteSecurityIpGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityIpGroupName)) {
    body->insert(pair<string, string>("SecurityIpGroupName", *request->securityIpGroupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSecurityIpGroup"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSecurityIpGroupResponse(callApi(params, req, runtime));
}

DeleteSecurityIpGroupResponse Alibabacloud_OceanBasePro20190901::Client::deleteSecurityIpGroup(shared_ptr<DeleteSecurityIpGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSecurityIpGroupWithOptions(request, runtime);
}

DeleteTagResponse Alibabacloud_OceanBasePro20190901::Client::deleteTagWithOptions(shared_ptr<DeleteTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    body->insert(pair<string, string>("Key", *request->key));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTag"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTagResponse(callApi(params, req, runtime));
}

DeleteTagResponse Alibabacloud_OceanBasePro20190901::Client::deleteTag(shared_ptr<DeleteTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTagWithOptions(request, runtime);
}

DeleteTagValueResponse Alibabacloud_OceanBasePro20190901::Client::deleteTagValueWithOptions(shared_ptr<DeleteTagValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    body->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    body->insert(pair<string, string>("Value", *request->value));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTagValue"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTagValueResponse(callApi(params, req, runtime));
}

DeleteTagValueResponse Alibabacloud_OceanBasePro20190901::Client::deleteTagValue(shared_ptr<DeleteTagValueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTagValueWithOptions(request, runtime);
}

DeleteTenantSecurityIpGroupResponse Alibabacloud_OceanBasePro20190901::Client::deleteTenantSecurityIpGroupWithOptions(shared_ptr<DeleteTenantSecurityIpGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityIpGroupName)) {
    body->insert(pair<string, string>("SecurityIpGroupName", *request->securityIpGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTenantSecurityIpGroup"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTenantSecurityIpGroupResponse(callApi(params, req, runtime));
}

DeleteTenantSecurityIpGroupResponse Alibabacloud_OceanBasePro20190901::Client::deleteTenantSecurityIpGroup(shared_ptr<DeleteTenantSecurityIpGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTenantSecurityIpGroupWithOptions(request, runtime);
}

DeleteTenantUsersResponse Alibabacloud_OceanBasePro20190901::Client::deleteTenantUsersWithOptions(shared_ptr<DeleteTenantUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->users)) {
    body->insert(pair<string, string>("Users", *request->users));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTenantUsers"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTenantUsersResponse(callApi(params, req, runtime));
}

DeleteTenantUsersResponse Alibabacloud_OceanBasePro20190901::Client::deleteTenantUsers(shared_ptr<DeleteTenantUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTenantUsersWithOptions(request, runtime);
}

DeleteTenantsResponse Alibabacloud_OceanBasePro20190901::Client::deleteTenantsWithOptions(shared_ptr<DeleteTenantsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantIds)) {
    body->insert(pair<string, string>("TenantIds", *request->tenantIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTenants"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTenantsResponse(callApi(params, req, runtime));
}

DeleteTenantsResponse Alibabacloud_OceanBasePro20190901::Client::deleteTenants(shared_ptr<DeleteTenantsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTenantsWithOptions(request, runtime);
}

DescribeAnomalySQLListResponse Alibabacloud_OceanBasePro20190901::Client::describeAnomalySQLListWithOptions(shared_ptr<DescribeAnomalySQLListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeAnomalySQLListShrinkRequest> request = make_shared<DescribeAnomalySQLListShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->filterCondition)) {
    request->filterConditionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filterCondition, make_shared<string>("FilterCondition"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    body->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    body->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterConditionShrink)) {
    body->insert(pair<string, string>("FilterCondition", *request->filterConditionShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeIp)) {
    body->insert(pair<string, string>("NodeIp", *request->nodeIp));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SQLId)) {
    body->insert(pair<string, string>("SQLId", *request->SQLId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchKeyWord)) {
    body->insert(pair<string, string>("SearchKeyWord", *request->searchKeyWord));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchParameter)) {
    body->insert(pair<string, string>("SearchParameter", *request->searchParameter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchRule)) {
    body->insert(pair<string, string>("SearchRule", *request->searchRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchValue)) {
    body->insert(pair<string, string>("SearchValue", *request->searchValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortColumn)) {
    body->insert(pair<string, string>("SortColumn", *request->sortColumn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortOrder)) {
    body->insert(pair<string, string>("SortOrder", *request->sortOrder));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAnomalySQLList"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAnomalySQLListResponse(callApi(params, req, runtime));
}

DescribeAnomalySQLListResponse Alibabacloud_OceanBasePro20190901::Client::describeAnomalySQLList(shared_ptr<DescribeAnomalySQLListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAnomalySQLListWithOptions(request, runtime);
}

DescribeAvailableCpuResourceResponse Alibabacloud_OceanBasePro20190901::Client::describeAvailableCpuResourceWithOptions(shared_ptr<DescribeAvailableCpuResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifyType)) {
    body->insert(pair<string, string>("ModifyType", *request->modifyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAvailableCpuResource"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAvailableCpuResourceResponse(callApi(params, req, runtime));
}

DescribeAvailableCpuResourceResponse Alibabacloud_OceanBasePro20190901::Client::describeAvailableCpuResource(shared_ptr<DescribeAvailableCpuResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvailableCpuResourceWithOptions(request, runtime);
}

DescribeAvailableMemResourceResponse Alibabacloud_OceanBasePro20190901::Client::describeAvailableMemResourceWithOptions(shared_ptr<DescribeAvailableMemResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->cpuNum)) {
    body->insert(pair<string, long>("CpuNum", *request->cpuNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->unitNum)) {
    body->insert(pair<string, long>("UnitNum", *request->unitNum));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAvailableMemResource"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAvailableMemResourceResponse(callApi(params, req, runtime));
}

DescribeAvailableMemResourceResponse Alibabacloud_OceanBasePro20190901::Client::describeAvailableMemResource(shared_ptr<DescribeAvailableMemResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvailableMemResourceWithOptions(request, runtime);
}

DescribeAvailableSpecResponse Alibabacloud_OceanBasePro20190901::Client::describeAvailableSpecWithOptions(shared_ptr<DescribeAvailableSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spec)) {
    body->insert(pair<string, string>("Spec", *request->spec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->upgradeType)) {
    body->insert(pair<string, string>("UpgradeType", *request->upgradeType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAvailableSpec"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAvailableSpecResponse(callApi(params, req, runtime));
}

DescribeAvailableSpecResponse Alibabacloud_OceanBasePro20190901::Client::describeAvailableSpec(shared_ptr<DescribeAvailableSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvailableSpecWithOptions(request, runtime);
}

DescribeAvailableZoneResponse Alibabacloud_OceanBasePro20190901::Client::describeAvailableZoneWithOptions(shared_ptr<DescribeAvailableZoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cpuArch)) {
    body->insert(pair<string, string>("CpuArch", *request->cpuArch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deployType)) {
    body->insert(pair<string, string>("DeployType", *request->deployType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    body->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->obVersion)) {
    body->insert(pair<string, string>("ObVersion", *request->obVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->series)) {
    body->insert(pair<string, string>("Series", *request->series));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spec)) {
    body->insert(pair<string, string>("Spec", *request->spec));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAvailableZone"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAvailableZoneResponse(callApi(params, req, runtime));
}

DescribeAvailableZoneResponse Alibabacloud_OceanBasePro20190901::Client::describeAvailableZone(shared_ptr<DescribeAvailableZoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvailableZoneWithOptions(request, runtime);
}

DescribeBackupEncryptedStringResponse Alibabacloud_OceanBasePro20190901::Client::describeBackupEncryptedStringWithOptions(shared_ptr<DescribeBackupEncryptedStringRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackupEncryptedString"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBackupEncryptedStringResponse(callApi(params, req, runtime));
}

DescribeBackupEncryptedStringResponse Alibabacloud_OceanBasePro20190901::Client::describeBackupEncryptedString(shared_ptr<DescribeBackupEncryptedStringRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupEncryptedStringWithOptions(request, runtime);
}

DescribeBackupSetDownloadLinkResponse Alibabacloud_OceanBasePro20190901::Client::describeBackupSetDownloadLinkWithOptions(shared_ptr<DescribeBackupSetDownloadLinkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->downloadTaskId)) {
    body->insert(pair<string, string>("DownloadTaskId", *request->downloadTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackupSetDownloadLink"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBackupSetDownloadLinkResponse(callApi(params, req, runtime));
}

DescribeBackupSetDownloadLinkResponse Alibabacloud_OceanBasePro20190901::Client::describeBackupSetDownloadLink(shared_ptr<DescribeBackupSetDownloadLinkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupSetDownloadLinkWithOptions(request, runtime);
}

DescribeCharsetResponse Alibabacloud_OceanBasePro20190901::Client::describeCharsetWithOptions(shared_ptr<DescribeCharsetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->series)) {
    body->insert(pair<string, string>("Series", *request->series));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantMode)) {
    body->insert(pair<string, string>("TenantMode", *request->tenantMode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCharset"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCharsetResponse(callApi(params, req, runtime));
}

DescribeCharsetResponse Alibabacloud_OceanBasePro20190901::Client::describeCharset(shared_ptr<DescribeCharsetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCharsetWithOptions(request, runtime);
}

DescribeDataBackupSetResponse Alibabacloud_OceanBasePro20190901::Client::describeDataBackupSetWithOptions(shared_ptr<DescribeDataBackupSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupObjectType)) {
    body->insert(pair<string, string>("BackupObjectType", *request->backupObjectType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDataBackupSet"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDataBackupSetResponse(callApi(params, req, runtime));
}

DescribeDataBackupSetResponse Alibabacloud_OceanBasePro20190901::Client::describeDataBackupSet(shared_ptr<DescribeDataBackupSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDataBackupSetWithOptions(request, runtime);
}

DescribeDatabasesResponse Alibabacloud_OceanBasePro20190901::Client::describeDatabasesWithOptions(shared_ptr<DescribeDatabasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseName)) {
    body->insert(pair<string, string>("DatabaseName", *request->databaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchKey)) {
    body->insert(pair<string, string>("SearchKey", *request->searchKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withTables)) {
    body->insert(pair<string, bool>("WithTables", *request->withTables));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDatabases"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDatabasesResponse(callApi(params, req, runtime));
}

DescribeDatabasesResponse Alibabacloud_OceanBasePro20190901::Client::describeDatabases(shared_ptr<DescribeDatabasesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDatabasesWithOptions(request, runtime);
}

DescribeInstanceResponse Alibabacloud_OceanBasePro20190901::Client::describeInstanceWithOptions(shared_ptr<DescribeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstance"))},
    {"version", boost::any(string("2019-09-01"))},
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

DescribeInstanceResponse Alibabacloud_OceanBasePro20190901::Client::describeInstance(shared_ptr<DescribeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceWithOptions(request, runtime);
}

DescribeInstanceAvailableZonesResponse Alibabacloud_OceanBasePro20190901::Client::describeInstanceAvailableZonesWithOptions(shared_ptr<DescribeInstanceAvailableZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceAvailableZones"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceAvailableZonesResponse(callApi(params, req, runtime));
}

DescribeInstanceAvailableZonesResponse Alibabacloud_OceanBasePro20190901::Client::describeInstanceAvailableZones(shared_ptr<DescribeInstanceAvailableZonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceAvailableZonesWithOptions(request, runtime);
}

DescribeInstanceCreatableZoneResponse Alibabacloud_OceanBasePro20190901::Client::describeInstanceCreatableZoneWithOptions(shared_ptr<DescribeInstanceCreatableZoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceCreatableZone"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceCreatableZoneResponse(callApi(params, req, runtime));
}

DescribeInstanceCreatableZoneResponse Alibabacloud_OceanBasePro20190901::Client::describeInstanceCreatableZone(shared_ptr<DescribeInstanceCreatableZoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceCreatableZoneWithOptions(request, runtime);
}

DescribeInstanceSSLResponse Alibabacloud_OceanBasePro20190901::Client::describeInstanceSSLWithOptions(shared_ptr<DescribeInstanceSSLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceSSL"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceSSLResponse(callApi(params, req, runtime));
}

DescribeInstanceSSLResponse Alibabacloud_OceanBasePro20190901::Client::describeInstanceSSL(shared_ptr<DescribeInstanceSSLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceSSLWithOptions(request, runtime);
}

DescribeInstanceSecurityConfigsResponse Alibabacloud_OceanBasePro20190901::Client::describeInstanceSecurityConfigsWithOptions(shared_ptr<DescribeInstanceSecurityConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkId)) {
    body->insert(pair<string, string>("CheckId", *request->checkId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceSecurityConfigs"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceSecurityConfigsResponse(callApi(params, req, runtime));
}

DescribeInstanceSecurityConfigsResponse Alibabacloud_OceanBasePro20190901::Client::describeInstanceSecurityConfigs(shared_ptr<DescribeInstanceSecurityConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceSecurityConfigsWithOptions(request, runtime);
}

DescribeInstanceSummaryResponse Alibabacloud_OceanBasePro20190901::Client::describeInstanceSummaryWithOptions(shared_ptr<DescribeInstanceSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("DescribeInstanceSummary"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceSummaryResponse(callApi(params, req, runtime));
}

DescribeInstanceSummaryResponse Alibabacloud_OceanBasePro20190901::Client::describeInstanceSummary(shared_ptr<DescribeInstanceSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceSummaryWithOptions(request, runtime);
}

DescribeInstanceTagsResponse Alibabacloud_OceanBasePro20190901::Client::describeInstanceTagsWithOptions(shared_ptr<DescribeInstanceTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIds)) {
    body->insert(pair<string, string>("InstanceIds", *request->instanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    body->insert(pair<string, string>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceTags"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceTagsResponse(callApi(params, req, runtime));
}

DescribeInstanceTagsResponse Alibabacloud_OceanBasePro20190901::Client::describeInstanceTags(shared_ptr<DescribeInstanceTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceTagsWithOptions(request, runtime);
}

DescribeInstanceTenantModesResponse Alibabacloud_OceanBasePro20190901::Client::describeInstanceTenantModesWithOptions(shared_ptr<DescribeInstanceTenantModesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceTenantModes"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceTenantModesResponse(callApi(params, req, runtime));
}

DescribeInstanceTenantModesResponse Alibabacloud_OceanBasePro20190901::Client::describeInstanceTenantModes(shared_ptr<DescribeInstanceTenantModesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceTenantModesWithOptions(request, runtime);
}

DescribeInstanceTopologyResponse Alibabacloud_OceanBasePro20190901::Client::describeInstanceTopologyWithOptions(shared_ptr<DescribeInstanceTopologyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceTopology"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceTopologyResponse(callApi(params, req, runtime));
}

DescribeInstanceTopologyResponse Alibabacloud_OceanBasePro20190901::Client::describeInstanceTopology(shared_ptr<DescribeInstanceTopologyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceTopologyWithOptions(request, runtime);
}

DescribeInstancesResponse Alibabacloud_OceanBasePro20190901::Client::describeInstancesWithOptions(shared_ptr<DescribeInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    body->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchKey)) {
    body->insert(pair<string, string>("SearchKey", *request->searchKey));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withOBCloudInstances)) {
    body->insert(pair<string, bool>("WithOBCloudInstances", *request->withOBCloudInstances));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstances"))},
    {"version", boost::any(string("2019-09-01"))},
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

DescribeInstancesResponse Alibabacloud_OceanBasePro20190901::Client::describeInstances(shared_ptr<DescribeInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstancesWithOptions(request, runtime);
}

DescribeMetricsDataResponse Alibabacloud_OceanBasePro20190901::Client::describeMetricsDataWithOptions(shared_ptr<DescribeMetricsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupByLabels)) {
    query->insert(pair<string, string>("GroupByLabels", *request->groupByLabels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labels)) {
    query->insert(pair<string, string>("Labels", *request->labels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->limit)) {
    query->insert(pair<string, string>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metrics)) {
    query->insert(pair<string, string>("Metrics", *request->metrics));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortMetricKey)) {
    query->insert(pair<string, string>("SortMetricKey", *request->sortMetricKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortOrder)) {
    query->insert(pair<string, string>("SortOrder", *request->sortOrder));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->metricScope)) {
    body->insert(pair<string, string>("MetricScope", *request->metricScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->replicaType)) {
    body->insert(pair<string, string>("ReplicaType", *request->replicaType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMetricsData"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMetricsDataResponse(callApi(params, req, runtime));
}

DescribeMetricsDataResponse Alibabacloud_OceanBasePro20190901::Client::describeMetricsData(shared_ptr<DescribeMetricsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMetricsDataWithOptions(request, runtime);
}

DescribeNodeMetricsResponse Alibabacloud_OceanBasePro20190901::Client::describeNodeMetricsWithOptions(shared_ptr<DescribeNodeMetricsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metrics)) {
    body->insert(pair<string, string>("Metrics", *request->metrics));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeIdList)) {
    body->insert(pair<string, string>("NodeIdList", *request->nodeIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeName)) {
    body->insert(pair<string, string>("NodeName", *request->nodeName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNodeMetrics"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeNodeMetricsResponse(callApi(params, req, runtime));
}

DescribeNodeMetricsResponse Alibabacloud_OceanBasePro20190901::Client::describeNodeMetrics(shared_ptr<DescribeNodeMetricsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNodeMetricsWithOptions(request, runtime);
}

DescribeOasAnomalySQLListResponse Alibabacloud_OceanBasePro20190901::Client::describeOasAnomalySQLListWithOptions(shared_ptr<DescribeOasAnomalySQLListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    body->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    body->insert(pair<string, long>("Current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    body->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dynamicSql)) {
    body->insert(pair<string, bool>("DynamicSql", *request->dynamicSql));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterCondition)) {
    body->insert(pair<string, string>("FilterCondition", *request->filterCondition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->mergeDynamicSql)) {
    body->insert(pair<string, bool>("MergeDynamicSql", *request->mergeDynamicSql));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeIp)) {
    body->insert(pair<string, string>("NodeIp", *request->nodeIp));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchKeyWord)) {
    body->insert(pair<string, string>("SearchKeyWord", *request->searchKeyWord));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchParam)) {
    body->insert(pair<string, string>("SearchParam", *request->searchParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchRule)) {
    body->insert(pair<string, string>("SearchRule", *request->searchRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchValue)) {
    body->insert(pair<string, string>("SearchValue", *request->searchValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlId)) {
    body->insert(pair<string, string>("SqlId", *request->sqlId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sqlTextLength)) {
    body->insert(pair<string, long>("SqlTextLength", *request->sqlTextLength));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOasAnomalySQLList"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOasAnomalySQLListResponse(callApi(params, req, runtime));
}

DescribeOasAnomalySQLListResponse Alibabacloud_OceanBasePro20190901::Client::describeOasAnomalySQLList(shared_ptr<DescribeOasAnomalySQLListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOasAnomalySQLListWithOptions(request, runtime);
}

DescribeOasSQLDetailsResponse Alibabacloud_OceanBasePro20190901::Client::describeOasSQLDetailsWithOptions(shared_ptr<DescribeOasSQLDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    body->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dynamicSql)) {
    body->insert(pair<string, bool>("DynamicSql", *request->dynamicSql));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->parseTable)) {
    body->insert(pair<string, bool>("ParseTable", *request->parseTable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlId)) {
    body->insert(pair<string, string>("SqlId", *request->sqlId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOasSQLDetails"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOasSQLDetailsResponse(callApi(params, req, runtime));
}

DescribeOasSQLDetailsResponse Alibabacloud_OceanBasePro20190901::Client::describeOasSQLDetails(shared_ptr<DescribeOasSQLDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOasSQLDetailsWithOptions(request, runtime);
}

DescribeOasSQLHistoryListResponse Alibabacloud_OceanBasePro20190901::Client::describeOasSQLHistoryListWithOptions(shared_ptr<DescribeOasSQLHistoryListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    body->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    body->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dynamicSql)) {
    body->insert(pair<string, bool>("DynamicSql", *request->dynamicSql));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeIp)) {
    body->insert(pair<string, string>("NodeIp", *request->nodeIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlId)) {
    body->insert(pair<string, string>("SqlId", *request->sqlId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOasSQLHistoryList"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOasSQLHistoryListResponse(callApi(params, req, runtime));
}

DescribeOasSQLHistoryListResponse Alibabacloud_OceanBasePro20190901::Client::describeOasSQLHistoryList(shared_ptr<DescribeOasSQLHistoryListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOasSQLHistoryListWithOptions(request, runtime);
}

DescribeOasSQLPlansResponse Alibabacloud_OceanBasePro20190901::Client::describeOasSQLPlansWithOptions(shared_ptr<DescribeOasSQLPlansRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    body->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    body->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dynamicSql)) {
    body->insert(pair<string, bool>("DynamicSql", *request->dynamicSql));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->planUnionHash)) {
    body->insert(pair<string, string>("PlanUnionHash", *request->planUnionHash));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->returnBriefInfo)) {
    body->insert(pair<string, bool>("ReturnBriefInfo", *request->returnBriefInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlId)) {
    body->insert(pair<string, string>("SqlId", *request->sqlId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOasSQLPlans"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOasSQLPlansResponse(callApi(params, req, runtime));
}

DescribeOasSQLPlansResponse Alibabacloud_OceanBasePro20190901::Client::describeOasSQLPlans(shared_ptr<DescribeOasSQLPlansRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOasSQLPlansWithOptions(request, runtime);
}

DescribeOasSlowSQLListResponse Alibabacloud_OceanBasePro20190901::Client::describeOasSlowSQLListWithOptions(shared_ptr<DescribeOasSlowSQLListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    body->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    body->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dynamicSql)) {
    body->insert(pair<string, bool>("DynamicSql", *request->dynamicSql));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterCondition)) {
    body->insert(pair<string, string>("FilterCondition", *request->filterCondition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->mergeDynamicSql)) {
    body->insert(pair<string, bool>("MergeDynamicSql", *request->mergeDynamicSql));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeIp)) {
    body->insert(pair<string, string>("NodeIp", *request->nodeIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchKeyWord)) {
    body->insert(pair<string, string>("SearchKeyWord", *request->searchKeyWord));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchParam)) {
    body->insert(pair<string, string>("SearchParam", *request->searchParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchRule)) {
    body->insert(pair<string, string>("SearchRule", *request->searchRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchValue)) {
    body->insert(pair<string, string>("SearchValue", *request->searchValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlId)) {
    body->insert(pair<string, string>("SqlId", *request->sqlId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sqlTextLength)) {
    body->insert(pair<string, long>("SqlTextLength", *request->sqlTextLength));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOasSlowSQLList"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOasSlowSQLListResponse(callApi(params, req, runtime));
}

DescribeOasSlowSQLListResponse Alibabacloud_OceanBasePro20190901::Client::describeOasSlowSQLList(shared_ptr<DescribeOasSlowSQLListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOasSlowSQLListWithOptions(request, runtime);
}

DescribeOasTopSQLListResponse Alibabacloud_OceanBasePro20190901::Client::describeOasTopSQLListWithOptions(shared_ptr<DescribeOasTopSQLListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    body->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customColumns)) {
    body->insert(pair<string, string>("CustomColumns", *request->customColumns));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    body->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dynamicSql)) {
    body->insert(pair<string, bool>("DynamicSql", *request->dynamicSql));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterCondition)) {
    body->insert(pair<string, string>("FilterCondition", *request->filterCondition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->mergeDynamicSql)) {
    body->insert(pair<string, bool>("MergeDynamicSql", *request->mergeDynamicSql));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeIp)) {
    body->insert(pair<string, string>("NodeIp", *request->nodeIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchKeyWord)) {
    body->insert(pair<string, string>("SearchKeyWord", *request->searchKeyWord));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchParam)) {
    body->insert(pair<string, string>("SearchParam", *request->searchParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchRule)) {
    body->insert(pair<string, string>("SearchRule", *request->searchRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchValue)) {
    body->insert(pair<string, string>("SearchValue", *request->searchValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlId)) {
    body->insert(pair<string, string>("SqlId", *request->sqlId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sqlTextLength)) {
    body->insert(pair<string, long>("SqlTextLength", *request->sqlTextLength));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOasTopSQLList"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOasTopSQLListResponse(callApi(params, req, runtime));
}

DescribeOasTopSQLListResponse Alibabacloud_OceanBasePro20190901::Client::describeOasTopSQLList(shared_ptr<DescribeOasTopSQLListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOasTopSQLListWithOptions(request, runtime);
}

DescribeOutlineBindingResponse Alibabacloud_OceanBasePro20190901::Client::describeOutlineBindingWithOptions(shared_ptr<DescribeOutlineBindingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseName)) {
    body->insert(pair<string, string>("DatabaseName", *request->databaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isConcurrentLimit)) {
    body->insert(pair<string, bool>("IsConcurrentLimit", *request->isConcurrentLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SQLId)) {
    body->insert(pair<string, string>("SQLId", *request->SQLId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    body->insert(pair<string, string>("TableName", *request->tableName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOutlineBinding"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOutlineBindingResponse(callApi(params, req, runtime));
}

DescribeOutlineBindingResponse Alibabacloud_OceanBasePro20190901::Client::describeOutlineBinding(shared_ptr<DescribeOutlineBindingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOutlineBindingWithOptions(request, runtime);
}

DescribeParametersResponse Alibabacloud_OceanBasePro20190901::Client::describeParametersWithOptions(shared_ptr<DescribeParametersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dimension)) {
    body->insert(pair<string, string>("Dimension", *request->dimension));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dimensionValue)) {
    body->insert(pair<string, string>("DimensionValue", *request->dimensionValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeParameters"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeParametersResponse(callApi(params, req, runtime));
}

DescribeParametersResponse Alibabacloud_OceanBasePro20190901::Client::describeParameters(shared_ptr<DescribeParametersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeParametersWithOptions(request, runtime);
}

DescribeParametersHistoryResponse Alibabacloud_OceanBasePro20190901::Client::describeParametersHistoryWithOptions(shared_ptr<DescribeParametersHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dimension)) {
    body->insert(pair<string, string>("Dimension", *request->dimension));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dimensionValue)) {
    body->insert(pair<string, string>("DimensionValue", *request->dimensionValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeParametersHistory"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeParametersHistoryResponse(callApi(params, req, runtime));
}

DescribeParametersHistoryResponse Alibabacloud_OceanBasePro20190901::Client::describeParametersHistory(shared_ptr<DescribeParametersHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeParametersHistoryWithOptions(request, runtime);
}

DescribeProcessStatsCompositionResponse Alibabacloud_OceanBasePro20190901::Client::describeProcessStatsCompositionWithOptions(shared_ptr<DescribeProcessStatsCompositionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientIp)) {
    body->insert(pair<string, string>("ClientIp", *request->clientIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->mergeDynamicSql)) {
    body->insert(pair<string, bool>("MergeDynamicSql", *request->mergeDynamicSql));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverIp)) {
    body->insert(pair<string, string>("ServerIp", *request->serverIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlText)) {
    body->insert(pair<string, string>("SqlText", *request->sqlText));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->UId)) {
    body->insert(pair<string, string>("UId", *request->UId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->users)) {
    body->insert(pair<string, string>("Users", *request->users));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeProcessStatsComposition"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeProcessStatsCompositionResponse(callApi(params, req, runtime));
}

DescribeProcessStatsCompositionResponse Alibabacloud_OceanBasePro20190901::Client::describeProcessStatsComposition(shared_ptr<DescribeProcessStatsCompositionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeProcessStatsCompositionWithOptions(request, runtime);
}

DescribeProjectResponse Alibabacloud_OceanBasePro20190901::Client::describeProjectWithOptions(shared_ptr<DescribeProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeProject"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeProjectResponse(callApi(params, req, runtime));
}

DescribeProjectResponse Alibabacloud_OceanBasePro20190901::Client::describeProject(shared_ptr<DescribeProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeProjectWithOptions(request, runtime);
}

DescribeProjectComponentsResponse Alibabacloud_OceanBasePro20190901::Client::describeProjectComponentsWithOptions(shared_ptr<DescribeProjectComponentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeProjectComponents"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeProjectComponentsResponse(callApi(params, req, runtime));
}

DescribeProjectComponentsResponse Alibabacloud_OceanBasePro20190901::Client::describeProjectComponents(shared_ptr<DescribeProjectComponentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeProjectComponentsWithOptions(request, runtime);
}

DescribeProjectProgressResponse Alibabacloud_OceanBasePro20190901::Client::describeProjectProgressWithOptions(shared_ptr<DescribeProjectProgressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeProjectProgress"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeProjectProgressResponse(callApi(params, req, runtime));
}

DescribeProjectProgressResponse Alibabacloud_OceanBasePro20190901::Client::describeProjectProgress(shared_ptr<DescribeProjectProgressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeProjectProgressWithOptions(request, runtime);
}

DescribeProjectStepMetricResponse Alibabacloud_OceanBasePro20190901::Client::describeProjectStepMetricWithOptions(shared_ptr<DescribeProjectStepMetricRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregator)) {
    body->insert(pair<string, string>("Aggregator", *request->aggregator));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTimestamp)) {
    body->insert(pair<string, long>("BeginTimestamp", *request->beginTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTimestamp)) {
    body->insert(pair<string, long>("EndTimestamp", *request->endTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxPointNum)) {
    body->insert(pair<string, long>("MaxPointNum", *request->maxPointNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricType)) {
    body->insert(pair<string, string>("MetricType", *request->metricType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stepName)) {
    body->insert(pair<string, string>("StepName", *request->stepName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeProjectStepMetric"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeProjectStepMetricResponse(callApi(params, req, runtime));
}

DescribeProjectStepMetricResponse Alibabacloud_OceanBasePro20190901::Client::describeProjectStepMetric(shared_ptr<DescribeProjectStepMetricRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeProjectStepMetricWithOptions(request, runtime);
}

DescribeProjectStepsResponse Alibabacloud_OceanBasePro20190901::Client::describeProjectStepsWithOptions(shared_ptr<DescribeProjectStepsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeProjectSteps"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeProjectStepsResponse(callApi(params, req, runtime));
}

DescribeProjectStepsResponse Alibabacloud_OceanBasePro20190901::Client::describeProjectSteps(shared_ptr<DescribeProjectStepsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeProjectStepsWithOptions(request, runtime);
}

DescribeProxyServiceResponse Alibabacloud_OceanBasePro20190901::Client::describeProxyServiceWithOptions(shared_ptr<DescribeProxyServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeProxyService"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeProxyServiceResponse(callApi(params, req, runtime));
}

DescribeProxyServiceResponse Alibabacloud_OceanBasePro20190901::Client::describeProxyService(shared_ptr<DescribeProxyServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeProxyServiceWithOptions(request, runtime);
}

DescribeRecommendIndexResponse Alibabacloud_OceanBasePro20190901::Client::describeRecommendIndexWithOptions(shared_ptr<DescribeRecommendIndexRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SQLId)) {
    body->insert(pair<string, string>("SQLId", *request->SQLId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRecommendIndex"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRecommendIndexResponse(callApi(params, req, runtime));
}

DescribeRecommendIndexResponse Alibabacloud_OceanBasePro20190901::Client::describeRecommendIndex(shared_ptr<DescribeRecommendIndexRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRecommendIndexWithOptions(request, runtime);
}

DescribeRestorableTenantsResponse Alibabacloud_OceanBasePro20190901::Client::describeRestorableTenantsWithOptions(shared_ptr<DescribeRestorableTenantsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isOnline)) {
    body->insert(pair<string, bool>("IsOnline", *request->isOnline));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isRemote)) {
    body->insert(pair<string, bool>("IsRemote", *request->isRemote));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->method)) {
    body->insert(pair<string, string>("Method", *request->method));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->restoreMode)) {
    body->insert(pair<string, string>("RestoreMode", *request->restoreMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->restoreObjectType)) {
    body->insert(pair<string, string>("RestoreObjectType", *request->restoreObjectType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->setId)) {
    body->insert(pair<string, string>("SetId", *request->setId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRestorableTenants"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRestorableTenantsResponse(callApi(params, req, runtime));
}

DescribeRestorableTenantsResponse Alibabacloud_OceanBasePro20190901::Client::describeRestorableTenants(shared_ptr<DescribeRestorableTenantsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRestorableTenantsWithOptions(request, runtime);
}

DescribeSQLDetailsResponse Alibabacloud_OceanBasePro20190901::Client::describeSQLDetailsWithOptions(shared_ptr<DescribeSQLDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->SQLId)) {
    body->insert(pair<string, string>("SQLId", *request->SQLId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSQLDetails"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSQLDetailsResponse(callApi(params, req, runtime));
}

DescribeSQLDetailsResponse Alibabacloud_OceanBasePro20190901::Client::describeSQLDetails(shared_ptr<DescribeSQLDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSQLDetailsWithOptions(request, runtime);
}

DescribeSQLHistoryListResponse Alibabacloud_OceanBasePro20190901::Client::describeSQLHistoryListWithOptions(shared_ptr<DescribeSQLHistoryListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SQLId)) {
    body->insert(pair<string, string>("SQLId", *request->SQLId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSQLHistoryList"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSQLHistoryListResponse(callApi(params, req, runtime));
}

DescribeSQLHistoryListResponse Alibabacloud_OceanBasePro20190901::Client::describeSQLHistoryList(shared_ptr<DescribeSQLHistoryListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSQLHistoryListWithOptions(request, runtime);
}

DescribeSQLPlansResponse Alibabacloud_OceanBasePro20190901::Client::describeSQLPlansWithOptions(shared_ptr<DescribeSQLPlansRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->SQLId)) {
    body->insert(pair<string, string>("SQLId", *request->SQLId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSQLPlans"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSQLPlansResponse(callApi(params, req, runtime));
}

DescribeSQLPlansResponse Alibabacloud_OceanBasePro20190901::Client::describeSQLPlans(shared_ptr<DescribeSQLPlansRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSQLPlansWithOptions(request, runtime);
}

DescribeSQLSamplesResponse Alibabacloud_OceanBasePro20190901::Client::describeSQLSamplesWithOptions(shared_ptr<DescribeSQLSamplesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    body->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->returnSqlText)) {
    body->insert(pair<string, bool>("ReturnSqlText", *request->returnSqlText));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlId)) {
    body->insert(pair<string, string>("SqlId", *request->sqlId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSQLSamples"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSQLSamplesResponse(callApi(params, req, runtime));
}

DescribeSQLSamplesResponse Alibabacloud_OceanBasePro20190901::Client::describeSQLSamples(shared_ptr<DescribeSQLSamplesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSQLSamplesWithOptions(request, runtime);
}

DescribeSQLTuningAdvicesResponse Alibabacloud_OceanBasePro20190901::Client::describeSQLTuningAdvicesWithOptions(shared_ptr<DescribeSQLTuningAdvicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    body->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    body->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlId)) {
    body->insert(pair<string, string>("SqlId", *request->sqlId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSQLTuningAdvices"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSQLTuningAdvicesResponse(callApi(params, req, runtime));
}

DescribeSQLTuningAdvicesResponse Alibabacloud_OceanBasePro20190901::Client::describeSQLTuningAdvices(shared_ptr<DescribeSQLTuningAdvicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSQLTuningAdvicesWithOptions(request, runtime);
}

DescribeSampleSqlRawTextsResponse Alibabacloud_OceanBasePro20190901::Client::describeSampleSqlRawTextsWithOptions(shared_ptr<DescribeSampleSqlRawTextsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    body->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dynamicSql)) {
    body->insert(pair<string, bool>("DynamicSql", *request->dynamicSql));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    body->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlId)) {
    body->insert(pair<string, string>("SqlId", *request->sqlId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->traceId)) {
    body->insert(pair<string, string>("TraceId", *request->traceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSampleSqlRawTexts"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSampleSqlRawTextsResponse(callApi(params, req, runtime));
}

DescribeSampleSqlRawTextsResponse Alibabacloud_OceanBasePro20190901::Client::describeSampleSqlRawTexts(shared_ptr<DescribeSampleSqlRawTextsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSampleSqlRawTextsWithOptions(request, runtime);
}

DescribeSecurityIpGroupsResponse Alibabacloud_OceanBasePro20190901::Client::describeSecurityIpGroupsWithOptions(shared_ptr<DescribeSecurityIpGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSecurityIpGroups"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSecurityIpGroupsResponse(callApi(params, req, runtime));
}

DescribeSecurityIpGroupsResponse Alibabacloud_OceanBasePro20190901::Client::describeSecurityIpGroups(shared_ptr<DescribeSecurityIpGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSecurityIpGroupsWithOptions(request, runtime);
}

DescribeSessionListResponse Alibabacloud_OceanBasePro20190901::Client::describeSessionListWithOptions(shared_ptr<DescribeSessionListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSessionList"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSessionListResponse(callApi(params, req, runtime));
}

DescribeSessionListResponse Alibabacloud_OceanBasePro20190901::Client::describeSessionList(shared_ptr<DescribeSessionListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSessionListWithOptions(request, runtime);
}

DescribeSlowSQLHistoryListResponse Alibabacloud_OceanBasePro20190901::Client::describeSlowSQLHistoryListWithOptions(shared_ptr<DescribeSlowSQLHistoryListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SQLId)) {
    body->insert(pair<string, string>("SQLId", *request->SQLId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSlowSQLHistoryList"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSlowSQLHistoryListResponse(callApi(params, req, runtime));
}

DescribeSlowSQLHistoryListResponse Alibabacloud_OceanBasePro20190901::Client::describeSlowSQLHistoryList(shared_ptr<DescribeSlowSQLHistoryListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSlowSQLHistoryListWithOptions(request, runtime);
}

DescribeSlowSQLListResponse Alibabacloud_OceanBasePro20190901::Client::describeSlowSQLListWithOptions(shared_ptr<DescribeSlowSQLListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeSlowSQLListShrinkRequest> request = make_shared<DescribeSlowSQLListShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->filterCondition)) {
    request->filterConditionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filterCondition, make_shared<string>("FilterCondition"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    body->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterConditionShrink)) {
    body->insert(pair<string, string>("FilterCondition", *request->filterConditionShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeIp)) {
    body->insert(pair<string, string>("NodeIp", *request->nodeIp));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SQLId)) {
    body->insert(pair<string, string>("SQLId", *request->SQLId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchKeyWord)) {
    body->insert(pair<string, string>("SearchKeyWord", *request->searchKeyWord));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchParameter)) {
    body->insert(pair<string, string>("SearchParameter", *request->searchParameter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchRule)) {
    body->insert(pair<string, string>("SearchRule", *request->searchRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchValue)) {
    body->insert(pair<string, string>("SearchValue", *request->searchValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortColumn)) {
    body->insert(pair<string, string>("SortColumn", *request->sortColumn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortOrder)) {
    body->insert(pair<string, string>("SortOrder", *request->sortOrder));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSlowSQLList"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSlowSQLListResponse(callApi(params, req, runtime));
}

DescribeSlowSQLListResponse Alibabacloud_OceanBasePro20190901::Client::describeSlowSQLList(shared_ptr<DescribeSlowSQLListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSlowSQLListWithOptions(request, runtime);
}

DescribeSqlAuditStatResponse Alibabacloud_OceanBasePro20190901::Client::describeSqlAuditStatWithOptions(shared_ptr<DescribeSqlAuditStatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operatorType)) {
    body->insert(pair<string, string>("OperatorType", *request->operatorType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSqlAuditStat"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSqlAuditStatResponse(callApi(params, req, runtime));
}

DescribeSqlAuditStatResponse Alibabacloud_OceanBasePro20190901::Client::describeSqlAuditStat(shared_ptr<DescribeSqlAuditStatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSqlAuditStatWithOptions(request, runtime);
}

DescribeStandbyCreateModeResponse Alibabacloud_OceanBasePro20190901::Client::describeStandbyCreateModeWithOptions(shared_ptr<DescribeStandbyCreateModeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeStandbyCreateMode"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeStandbyCreateModeResponse(callApi(params, req, runtime));
}

DescribeStandbyCreateModeResponse Alibabacloud_OceanBasePro20190901::Client::describeStandbyCreateMode(shared_ptr<DescribeStandbyCreateModeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeStandbyCreateModeWithOptions(request, runtime);
}

DescribeTagValuesResponse Alibabacloud_OceanBasePro20190901::Client::describeTagValuesWithOptions(shared_ptr<DescribeTagValuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    body->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTagValues"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTagValuesResponse(callApi(params, req, runtime));
}

DescribeTagValuesResponse Alibabacloud_OceanBasePro20190901::Client::describeTagValues(shared_ptr<DescribeTagValuesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTagValuesWithOptions(request, runtime);
}

DescribeTenantResponse Alibabacloud_OceanBasePro20190901::Client::describeTenantWithOptions(shared_ptr<DescribeTenantRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTenant"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTenantResponse(callApi(params, req, runtime));
}

DescribeTenantResponse Alibabacloud_OceanBasePro20190901::Client::describeTenant(shared_ptr<DescribeTenantRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTenantWithOptions(request, runtime);
}

DescribeTenantEncryptionResponse Alibabacloud_OceanBasePro20190901::Client::describeTenantEncryptionWithOptions(shared_ptr<DescribeTenantEncryptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantName)) {
    body->insert(pair<string, string>("TenantName", *request->tenantName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTenantEncryption"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTenantEncryptionResponse(callApi(params, req, runtime));
}

DescribeTenantEncryptionResponse Alibabacloud_OceanBasePro20190901::Client::describeTenantEncryption(shared_ptr<DescribeTenantEncryptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTenantEncryptionWithOptions(request, runtime);
}

DescribeTenantMetricsResponse Alibabacloud_OceanBasePro20190901::Client::describeTenantMetricsWithOptions(shared_ptr<DescribeTenantMetricsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metrics)) {
    body->insert(pair<string, string>("Metrics", *request->metrics));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantIdList)) {
    body->insert(pair<string, string>("TenantIdList", *request->tenantIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantName)) {
    body->insert(pair<string, string>("TenantName", *request->tenantName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTenantMetrics"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTenantMetricsResponse(callApi(params, req, runtime));
}

DescribeTenantMetricsResponse Alibabacloud_OceanBasePro20190901::Client::describeTenantMetrics(shared_ptr<DescribeTenantMetricsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTenantMetricsWithOptions(request, runtime);
}

DescribeTenantReadableScnResponse Alibabacloud_OceanBasePro20190901::Client::describeTenantReadableScnWithOptions(shared_ptr<DescribeTenantReadableScnRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTenantReadableScn"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTenantReadableScnResponse(callApi(params, req, runtime));
}

DescribeTenantReadableScnResponse Alibabacloud_OceanBasePro20190901::Client::describeTenantReadableScn(shared_ptr<DescribeTenantReadableScnRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTenantReadableScnWithOptions(request, runtime);
}

DescribeTenantSecurityConfigsResponse Alibabacloud_OceanBasePro20190901::Client::describeTenantSecurityConfigsWithOptions(shared_ptr<DescribeTenantSecurityConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkId)) {
    body->insert(pair<string, string>("CheckId", *request->checkId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTenantSecurityConfigs"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTenantSecurityConfigsResponse(callApi(params, req, runtime));
}

DescribeTenantSecurityConfigsResponse Alibabacloud_OceanBasePro20190901::Client::describeTenantSecurityConfigs(shared_ptr<DescribeTenantSecurityConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTenantSecurityConfigsWithOptions(request, runtime);
}

DescribeTenantSecurityIpGroupsResponse Alibabacloud_OceanBasePro20190901::Client::describeTenantSecurityIpGroupsWithOptions(shared_ptr<DescribeTenantSecurityIpGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTenantSecurityIpGroups"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTenantSecurityIpGroupsResponse(callApi(params, req, runtime));
}

DescribeTenantSecurityIpGroupsResponse Alibabacloud_OceanBasePro20190901::Client::describeTenantSecurityIpGroups(shared_ptr<DescribeTenantSecurityIpGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTenantSecurityIpGroupsWithOptions(request, runtime);
}

DescribeTenantTagsResponse Alibabacloud_OceanBasePro20190901::Client::describeTenantTagsWithOptions(shared_ptr<DescribeTenantTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    body->insert(pair<string, string>("Tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantIds)) {
    body->insert(pair<string, string>("TenantIds", *request->tenantIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTenantTags"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTenantTagsResponse(callApi(params, req, runtime));
}

DescribeTenantTagsResponse Alibabacloud_OceanBasePro20190901::Client::describeTenantTags(shared_ptr<DescribeTenantTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTenantTagsWithOptions(request, runtime);
}

DescribeTenantUserRolesResponse Alibabacloud_OceanBasePro20190901::Client::describeTenantUserRolesWithOptions(shared_ptr<DescribeTenantUserRolesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTenantUserRoles"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTenantUserRolesResponse(callApi(params, req, runtime));
}

DescribeTenantUserRolesResponse Alibabacloud_OceanBasePro20190901::Client::describeTenantUserRoles(shared_ptr<DescribeTenantUserRolesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTenantUserRolesWithOptions(request, runtime);
}

DescribeTenantUsersResponse Alibabacloud_OceanBasePro20190901::Client::describeTenantUsersWithOptions(shared_ptr<DescribeTenantUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchKey)) {
    body->insert(pair<string, string>("SearchKey", *request->searchKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    body->insert(pair<string, string>("UserName", *request->userName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTenantUsers"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTenantUsersResponse(callApi(params, req, runtime));
}

DescribeTenantUsersResponse Alibabacloud_OceanBasePro20190901::Client::describeTenantUsers(shared_ptr<DescribeTenantUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTenantUsersWithOptions(request, runtime);
}

DescribeTenantZonesReadResponse Alibabacloud_OceanBasePro20190901::Client::describeTenantZonesReadWithOptions(shared_ptr<DescribeTenantZonesReadRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTenantZonesRead"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTenantZonesReadResponse(callApi(params, req, runtime));
}

DescribeTenantZonesReadResponse Alibabacloud_OceanBasePro20190901::Client::describeTenantZonesRead(shared_ptr<DescribeTenantZonesReadRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTenantZonesReadWithOptions(request, runtime);
}

DescribeTenantsResponse Alibabacloud_OceanBasePro20190901::Client::describeTenantsWithOptions(shared_ptr<DescribeTenantsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchKey)) {
    body->insert(pair<string, string>("SearchKey", *request->searchKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantName)) {
    body->insert(pair<string, string>("TenantName", *request->tenantName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTenants"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTenantsResponse(callApi(params, req, runtime));
}

DescribeTenantsResponse Alibabacloud_OceanBasePro20190901::Client::describeTenants(shared_ptr<DescribeTenantsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTenantsWithOptions(request, runtime);
}

DescribeTimeZonesResponse Alibabacloud_OceanBasePro20190901::Client::describeTimeZonesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTimeZones"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTimeZonesResponse(callApi(params, req, runtime));
}

DescribeTimeZonesResponse Alibabacloud_OceanBasePro20190901::Client::describeTimeZones() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTimeZonesWithOptions(runtime);
}

DescribeTopSQLListResponse Alibabacloud_OceanBasePro20190901::Client::describeTopSQLListWithOptions(shared_ptr<DescribeTopSQLListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeTopSQLListShrinkRequest> request = make_shared<DescribeTopSQLListShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->filterCondition)) {
    request->filterConditionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filterCondition, make_shared<string>("FilterCondition"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    body->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterConditionShrink)) {
    body->insert(pair<string, string>("FilterCondition", *request->filterConditionShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeIp)) {
    body->insert(pair<string, string>("NodeIp", *request->nodeIp));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SQLId)) {
    body->insert(pair<string, string>("SQLId", *request->SQLId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchKeyWord)) {
    body->insert(pair<string, string>("SearchKeyWord", *request->searchKeyWord));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchParameter)) {
    body->insert(pair<string, string>("SearchParameter", *request->searchParameter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchRule)) {
    body->insert(pair<string, string>("SearchRule", *request->searchRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchValue)) {
    body->insert(pair<string, string>("SearchValue", *request->searchValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortColumn)) {
    body->insert(pair<string, string>("SortColumn", *request->sortColumn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortOrder)) {
    body->insert(pair<string, string>("SortOrder", *request->sortOrder));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTopSQLList"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTopSQLListResponse(callApi(params, req, runtime));
}

DescribeTopSQLListResponse Alibabacloud_OceanBasePro20190901::Client::describeTopSQLList(shared_ptr<DescribeTopSQLListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTopSQLListWithOptions(request, runtime);
}

DescribeZonesResponse Alibabacloud_OceanBasePro20190901::Client::describeZonesWithOptions(shared_ptr<DescribeZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cpuArch)) {
    body->insert(pair<string, string>("CpuArch", *request->cpuArch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deployType)) {
    body->insert(pair<string, string>("DeployType", *request->deployType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->series)) {
    body->insert(pair<string, string>("Series", *request->series));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeZones"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeZonesResponse(callApi(params, req, runtime));
}

DescribeZonesResponse Alibabacloud_OceanBasePro20190901::Client::describeZones(shared_ptr<DescribeZonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeZonesWithOptions(request, runtime);
}

GetUploadOssUrlResponse Alibabacloud_OceanBasePro20190901::Client::getUploadOssUrlWithOptions(shared_ptr<GetUploadOssUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->effectiveTimeMinutes)) {
    body->insert(pair<string, long>("EffectiveTimeMinutes", *request->effectiveTimeMinutes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUploadOssUrl"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUploadOssUrlResponse(callApi(params, req, runtime));
}

GetUploadOssUrlResponse Alibabacloud_OceanBasePro20190901::Client::getUploadOssUrl(shared_ptr<GetUploadOssUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUploadOssUrlWithOptions(request, runtime);
}

KillProcessListResponse Alibabacloud_OceanBasePro20190901::Client::killProcessListWithOptions(shared_ptr<KillProcessListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionList)) {
    body->insert(pair<string, string>("SessionList", *request->sessionList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("KillProcessList"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return KillProcessListResponse(callApi(params, req, runtime));
}

KillProcessListResponse Alibabacloud_OceanBasePro20190901::Client::killProcessList(shared_ptr<KillProcessListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return killProcessListWithOptions(request, runtime);
}

ListAllLabelsResponse Alibabacloud_OceanBasePro20190901::Client::listAllLabelsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAllLabels"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAllLabelsResponse(callApi(params, req, runtime));
}

ListAllLabelsResponse Alibabacloud_OceanBasePro20190901::Client::listAllLabels() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAllLabelsWithOptions(runtime);
}

ListDataSourceResponse Alibabacloud_OceanBasePro20190901::Client::listDataSourceWithOptions(shared_ptr<ListDataSourceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListDataSourceShrinkRequest> request = make_shared<ListDataSourceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->types)) {
    request->typesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->types, make_shared<string>("Types"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    body->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    body->insert(pair<string, string>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    body->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchKey)) {
    body->insert(pair<string, string>("SearchKey", *request->searchKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortField)) {
    body->insert(pair<string, string>("SortField", *request->sortField));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->typesShrink)) {
    body->insert(pair<string, string>("Types", *request->typesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataSource"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataSourceResponse(callApi(params, req, runtime));
}

ListDataSourceResponse Alibabacloud_OceanBasePro20190901::Client::listDataSource(shared_ptr<ListDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataSourceWithOptions(request, runtime);
}

ListProjectFullVerifyResultResponse Alibabacloud_OceanBasePro20190901::Client::listProjectFullVerifyResultWithOptions(shared_ptr<ListProjectFullVerifyResultRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListProjectFullVerifyResultShrinkRequest> request = make_shared<ListProjectFullVerifyResultShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->destSchemas)) {
    request->destSchemasShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->destSchemas, make_shared<string>("DestSchemas"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->sourceSchemas)) {
    request->sourceSchemasShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sourceSchemas, make_shared<string>("SourceSchemas"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destSchemasShrink)) {
    body->insert(pair<string, string>("DestSchemas", *request->destSchemasShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceSchemasShrink)) {
    body->insert(pair<string, string>("SourceSchemas", *request->sourceSchemasShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProjectFullVerifyResult"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProjectFullVerifyResultResponse(callApi(params, req, runtime));
}

ListProjectFullVerifyResultResponse Alibabacloud_OceanBasePro20190901::Client::listProjectFullVerifyResult(shared_ptr<ListProjectFullVerifyResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProjectFullVerifyResultWithOptions(request, runtime);
}

ListProjectModifyRecordsResponse Alibabacloud_OceanBasePro20190901::Client::listProjectModifyRecordsWithOptions(shared_ptr<ListProjectModifyRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProjectModifyRecords"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProjectModifyRecordsResponse(callApi(params, req, runtime));
}

ListProjectModifyRecordsResponse Alibabacloud_OceanBasePro20190901::Client::listProjectModifyRecords(shared_ptr<ListProjectModifyRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProjectModifyRecordsWithOptions(request, runtime);
}

ListProjectsResponse Alibabacloud_OceanBasePro20190901::Client::listProjectsWithOptions(shared_ptr<ListProjectsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListProjectsShrinkRequest> request = make_shared<ListProjectsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->labelIds)) {
    request->labelIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->labelIds, make_shared<string>("LabelIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->sinkEndpointTypes)) {
    request->sinkEndpointTypesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sinkEndpointTypes, make_shared<string>("SinkEndpointTypes"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->sourceEndpointTypes)) {
    request->sourceEndpointTypesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sourceEndpointTypes, make_shared<string>("SourceEndpointTypes"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->status)) {
    request->statusShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->status, make_shared<string>("Status"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->labelIdsShrink)) {
    body->insert(pair<string, string>("LabelIds", *request->labelIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needRelatedInfo)) {
    body->insert(pair<string, bool>("NeedRelatedInfo", *request->needRelatedInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    body->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchKey)) {
    body->insert(pair<string, string>("SearchKey", *request->searchKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sinkEndpointTypesShrink)) {
    body->insert(pair<string, string>("SinkEndpointTypes", *request->sinkEndpointTypesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortField)) {
    body->insert(pair<string, string>("SortField", *request->sortField));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointTypesShrink)) {
    body->insert(pair<string, string>("SourceEndpointTypes", *request->sourceEndpointTypesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statusShrink)) {
    body->insert(pair<string, string>("Status", *request->statusShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->visibleSubProject)) {
    body->insert(pair<string, bool>("VisibleSubProject", *request->visibleSubProject));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProjects"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProjectsResponse(callApi(params, req, runtime));
}

ListProjectsResponse Alibabacloud_OceanBasePro20190901::Client::listProjects(shared_ptr<ListProjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProjectsWithOptions(request, runtime);
}

ListWorkerInstancesResponse Alibabacloud_OceanBasePro20190901::Client::listWorkerInstancesWithOptions(shared_ptr<ListWorkerInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListWorkerInstancesShrinkRequest> request = make_shared<ListWorkerInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->specs)) {
    request->specsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->specs, make_shared<string>("Specs"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destType)) {
    body->insert(pair<string, string>("DestType", *request->destType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    body->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->onlyBindable)) {
    body->insert(pair<string, bool>("OnlyBindable", *request->onlyBindable));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    body->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specsShrink)) {
    body->insert(pair<string, string>("Specs", *request->specsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWorkerInstances"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListWorkerInstancesResponse(callApi(params, req, runtime));
}

ListWorkerInstancesResponse Alibabacloud_OceanBasePro20190901::Client::listWorkerInstances(shared_ptr<ListWorkerInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listWorkerInstancesWithOptions(request, runtime);
}

ModifyDatabaseDescriptionResponse Alibabacloud_OceanBasePro20190901::Client::modifyDatabaseDescriptionWithOptions(shared_ptr<ModifyDatabaseDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseName)) {
    body->insert(pair<string, string>("DatabaseName", *request->databaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDatabaseDescription"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDatabaseDescriptionResponse(callApi(params, req, runtime));
}

ModifyDatabaseDescriptionResponse Alibabacloud_OceanBasePro20190901::Client::modifyDatabaseDescription(shared_ptr<ModifyDatabaseDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDatabaseDescriptionWithOptions(request, runtime);
}

ModifyDatabaseUserRolesResponse Alibabacloud_OceanBasePro20190901::Client::modifyDatabaseUserRolesWithOptions(shared_ptr<ModifyDatabaseUserRolesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseName)) {
    body->insert(pair<string, string>("DatabaseName", *request->databaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->users)) {
    body->insert(pair<string, string>("Users", *request->users));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDatabaseUserRoles"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDatabaseUserRolesResponse(callApi(params, req, runtime));
}

ModifyDatabaseUserRolesResponse Alibabacloud_OceanBasePro20190901::Client::modifyDatabaseUserRoles(shared_ptr<ModifyDatabaseUserRolesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDatabaseUserRolesWithOptions(request, runtime);
}

ModifyInstanceNameResponse Alibabacloud_OceanBasePro20190901::Client::modifyInstanceNameWithOptions(shared_ptr<ModifyInstanceNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    body->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyInstanceName"))},
    {"version", boost::any(string("2019-09-01"))},
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

ModifyInstanceNameResponse Alibabacloud_OceanBasePro20190901::Client::modifyInstanceName(shared_ptr<ModifyInstanceNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceNameWithOptions(request, runtime);
}

ModifyInstanceNodeNumResponse Alibabacloud_OceanBasePro20190901::Client::modifyInstanceNodeNumWithOptions(shared_ptr<ModifyInstanceNodeNumRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    body->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeNum)) {
    body->insert(pair<string, string>("NodeNum", *request->nodeNum));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyInstanceNodeNum"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyInstanceNodeNumResponse(callApi(params, req, runtime));
}

ModifyInstanceNodeNumResponse Alibabacloud_OceanBasePro20190901::Client::modifyInstanceNodeNum(shared_ptr<ModifyInstanceNodeNumRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceNodeNumWithOptions(request, runtime);
}

ModifyInstanceSSLResponse Alibabacloud_OceanBasePro20190901::Client::modifyInstanceSSLWithOptions(shared_ptr<ModifyInstanceSSLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->enableSSL)) {
    body->insert(pair<string, string>("EnableSSL", *request->enableSSL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyInstanceSSL"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyInstanceSSLResponse(callApi(params, req, runtime));
}

ModifyInstanceSSLResponse Alibabacloud_OceanBasePro20190901::Client::modifyInstanceSSL(shared_ptr<ModifyInstanceSSLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceSSLWithOptions(request, runtime);
}

ModifyInstanceSpecResponse Alibabacloud_OceanBasePro20190901::Client::modifyInstanceSpecWithOptions(shared_ptr<ModifyInstanceSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->diskSize)) {
    body->insert(pair<string, long>("DiskSize", *request->diskSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->diskType)) {
    body->insert(pair<string, string>("DiskType", *request->diskType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    body->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceClass)) {
    body->insert(pair<string, string>("InstanceClass", *request->instanceClass));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->upgradeSpecNative)) {
    body->insert(pair<string, bool>("UpgradeSpecNative", *request->upgradeSpecNative));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyInstanceSpec"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyInstanceSpecResponse(callApi(params, req, runtime));
}

ModifyInstanceSpecResponse Alibabacloud_OceanBasePro20190901::Client::modifyInstanceSpec(shared_ptr<ModifyInstanceSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceSpecWithOptions(request, runtime);
}

ModifyInstanceTagsResponse Alibabacloud_OceanBasePro20190901::Client::modifyInstanceTagsWithOptions(shared_ptr<ModifyInstanceTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    body->insert(pair<string, string>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyInstanceTags"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyInstanceTagsResponse(callApi(params, req, runtime));
}

ModifyInstanceTagsResponse Alibabacloud_OceanBasePro20190901::Client::modifyInstanceTags(shared_ptr<ModifyInstanceTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceTagsWithOptions(request, runtime);
}

ModifyInstanceTemporaryCapacityResponse Alibabacloud_OceanBasePro20190901::Client::modifyInstanceTemporaryCapacityWithOptions(shared_ptr<ModifyInstanceTemporaryCapacityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    body->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->diskSize)) {
    body->insert(pair<string, string>("DiskSize", *request->diskSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spec)) {
    body->insert(pair<string, string>("Spec", *request->spec));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyInstanceTemporaryCapacity"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyInstanceTemporaryCapacityResponse(callApi(params, req, runtime));
}

ModifyInstanceTemporaryCapacityResponse Alibabacloud_OceanBasePro20190901::Client::modifyInstanceTemporaryCapacity(shared_ptr<ModifyInstanceTemporaryCapacityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceTemporaryCapacityWithOptions(request, runtime);
}

ModifyParametersResponse Alibabacloud_OceanBasePro20190901::Client::modifyParametersWithOptions(shared_ptr<ModifyParametersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dimension)) {
    body->insert(pair<string, string>("Dimension", *request->dimension));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dimensionValue)) {
    body->insert(pair<string, string>("DimensionValue", *request->dimensionValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parameters)) {
    body->insert(pair<string, string>("Parameters", *request->parameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyParameters"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyParametersResponse(callApi(params, req, runtime));
}

ModifyParametersResponse Alibabacloud_OceanBasePro20190901::Client::modifyParameters(shared_ptr<ModifyParametersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyParametersWithOptions(request, runtime);
}

ModifySecurityIpsResponse Alibabacloud_OceanBasePro20190901::Client::modifySecurityIpsWithOptions(shared_ptr<ModifySecurityIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityIpGroupName)) {
    body->insert(pair<string, string>("SecurityIpGroupName", *request->securityIpGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityIps)) {
    body->insert(pair<string, string>("SecurityIps", *request->securityIps));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifySecurityIps"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifySecurityIpsResponse(callApi(params, req, runtime));
}

ModifySecurityIpsResponse Alibabacloud_OceanBasePro20190901::Client::modifySecurityIps(shared_ptr<ModifySecurityIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySecurityIpsWithOptions(request, runtime);
}

ModifyTagNameResponse Alibabacloud_OceanBasePro20190901::Client::modifyTagNameWithOptions(shared_ptr<ModifyTagNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    body->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newKey)) {
    body->insert(pair<string, string>("NewKey", *request->newKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyTagName"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyTagNameResponse(callApi(params, req, runtime));
}

ModifyTagNameResponse Alibabacloud_OceanBasePro20190901::Client::modifyTagName(shared_ptr<ModifyTagNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyTagNameWithOptions(request, runtime);
}

ModifyTagValueNameResponse Alibabacloud_OceanBasePro20190901::Client::modifyTagValueNameWithOptions(shared_ptr<ModifyTagValueNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    body->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newValue)) {
    body->insert(pair<string, string>("NewValue", *request->newValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    body->insert(pair<string, string>("Value", *request->value));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyTagValueName"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyTagValueNameResponse(callApi(params, req, runtime));
}

ModifyTagValueNameResponse Alibabacloud_OceanBasePro20190901::Client::modifyTagValueName(shared_ptr<ModifyTagValueNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyTagValueNameWithOptions(request, runtime);
}

ModifyTenantEncryptionResponse Alibabacloud_OceanBasePro20190901::Client::modifyTenantEncryptionWithOptions(shared_ptr<ModifyTenantEncryptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptionKeyId)) {
    body->insert(pair<string, string>("EncryptionKeyId", *request->encryptionKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptionType)) {
    body->insert(pair<string, string>("EncryptionType", *request->encryptionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyTenantEncryption"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyTenantEncryptionResponse(callApi(params, req, runtime));
}

ModifyTenantEncryptionResponse Alibabacloud_OceanBasePro20190901::Client::modifyTenantEncryption(shared_ptr<ModifyTenantEncryptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyTenantEncryptionWithOptions(request, runtime);
}

ModifyTenantPrimaryZoneResponse Alibabacloud_OceanBasePro20190901::Client::modifyTenantPrimaryZoneWithOptions(shared_ptr<ModifyTenantPrimaryZoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterIntranetAddressZone)) {
    body->insert(pair<string, string>("MasterIntranetAddressZone", *request->masterIntranetAddressZone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->primaryZone)) {
    body->insert(pair<string, string>("PrimaryZone", *request->primaryZone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantEndpointDirectId)) {
    body->insert(pair<string, string>("TenantEndpointDirectId", *request->tenantEndpointDirectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantEndpointId)) {
    body->insert(pair<string, string>("TenantEndpointId", *request->tenantEndpointId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userDirectVSwitchId)) {
    body->insert(pair<string, string>("UserDirectVSwitchId", *request->userDirectVSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userVSwitchId)) {
    body->insert(pair<string, string>("UserVSwitchId", *request->userVSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userVpcOwnerId)) {
    body->insert(pair<string, string>("UserVpcOwnerId", *request->userVpcOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    body->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyTenantPrimaryZone"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyTenantPrimaryZoneResponse(callApi(params, req, runtime));
}

ModifyTenantPrimaryZoneResponse Alibabacloud_OceanBasePro20190901::Client::modifyTenantPrimaryZone(shared_ptr<ModifyTenantPrimaryZoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyTenantPrimaryZoneWithOptions(request, runtime);
}

ModifyTenantResourceResponse Alibabacloud_OceanBasePro20190901::Client::modifyTenantResourceWithOptions(shared_ptr<ModifyTenantResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->cpu)) {
    body->insert(pair<string, long>("Cpu", *request->cpu));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iops)) {
    body->insert(pair<string, string>("Iops", *request->iops));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->logDisk)) {
    body->insert(pair<string, long>("LogDisk", *request->logDisk));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->memory)) {
    body->insert(pair<string, long>("Memory", *request->memory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->readOnlyZoneList)) {
    body->insert(pair<string, string>("ReadOnlyZoneList", *request->readOnlyZoneList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyTenantResource"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyTenantResourceResponse(callApi(params, req, runtime));
}

ModifyTenantResourceResponse Alibabacloud_OceanBasePro20190901::Client::modifyTenantResource(shared_ptr<ModifyTenantResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyTenantResourceWithOptions(request, runtime);
}

ModifyTenantSecurityIpGroupResponse Alibabacloud_OceanBasePro20190901::Client::modifyTenantSecurityIpGroupWithOptions(shared_ptr<ModifyTenantSecurityIpGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityIpGroupName)) {
    body->insert(pair<string, string>("SecurityIpGroupName", *request->securityIpGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityIps)) {
    body->insert(pair<string, string>("SecurityIps", *request->securityIps));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyTenantSecurityIpGroup"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyTenantSecurityIpGroupResponse(callApi(params, req, runtime));
}

ModifyTenantSecurityIpGroupResponse Alibabacloud_OceanBasePro20190901::Client::modifyTenantSecurityIpGroup(shared_ptr<ModifyTenantSecurityIpGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyTenantSecurityIpGroupWithOptions(request, runtime);
}

ModifyTenantTagsResponse Alibabacloud_OceanBasePro20190901::Client::modifyTenantTagsWithOptions(shared_ptr<ModifyTenantTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    body->insert(pair<string, string>("Tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyTenantTags"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyTenantTagsResponse(callApi(params, req, runtime));
}

ModifyTenantTagsResponse Alibabacloud_OceanBasePro20190901::Client::modifyTenantTags(shared_ptr<ModifyTenantTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyTenantTagsWithOptions(request, runtime);
}

ModifyTenantUserDescriptionResponse Alibabacloud_OceanBasePro20190901::Client::modifyTenantUserDescriptionWithOptions(shared_ptr<ModifyTenantUserDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    body->insert(pair<string, string>("UserName", *request->userName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyTenantUserDescription"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyTenantUserDescriptionResponse(callApi(params, req, runtime));
}

ModifyTenantUserDescriptionResponse Alibabacloud_OceanBasePro20190901::Client::modifyTenantUserDescription(shared_ptr<ModifyTenantUserDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyTenantUserDescriptionWithOptions(request, runtime);
}

ModifyTenantUserPasswordResponse Alibabacloud_OceanBasePro20190901::Client::modifyTenantUserPasswordWithOptions(shared_ptr<ModifyTenantUserPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptionType)) {
    body->insert(pair<string, string>("EncryptionType", *request->encryptionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    body->insert(pair<string, string>("UserName", *request->userName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userPassword)) {
    body->insert(pair<string, string>("UserPassword", *request->userPassword));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyTenantUserPassword"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyTenantUserPasswordResponse(callApi(params, req, runtime));
}

ModifyTenantUserPasswordResponse Alibabacloud_OceanBasePro20190901::Client::modifyTenantUserPassword(shared_ptr<ModifyTenantUserPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyTenantUserPasswordWithOptions(request, runtime);
}

ModifyTenantUserRolesResponse Alibabacloud_OceanBasePro20190901::Client::modifyTenantUserRolesWithOptions(shared_ptr<ModifyTenantUserRolesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->globalPermissions)) {
    body->insert(pair<string, string>("GlobalPermissions", *request->globalPermissions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifyType)) {
    body->insert(pair<string, string>("ModifyType", *request->modifyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    body->insert(pair<string, string>("UserName", *request->userName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userRole)) {
    body->insert(pair<string, string>("UserRole", *request->userRole));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userType)) {
    body->insert(pair<string, string>("UserType", *request->userType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyTenantUserRoles"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyTenantUserRolesResponse(callApi(params, req, runtime));
}

ModifyTenantUserRolesResponse Alibabacloud_OceanBasePro20190901::Client::modifyTenantUserRoles(shared_ptr<ModifyTenantUserRolesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyTenantUserRolesWithOptions(request, runtime);
}

ModifyTenantUserStatusResponse Alibabacloud_OceanBasePro20190901::Client::modifyTenantUserStatusWithOptions(shared_ptr<ModifyTenantUserStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    body->insert(pair<string, string>("UserName", *request->userName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userStatus)) {
    body->insert(pair<string, string>("UserStatus", *request->userStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyTenantUserStatus"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyTenantUserStatusResponse(callApi(params, req, runtime));
}

ModifyTenantUserStatusResponse Alibabacloud_OceanBasePro20190901::Client::modifyTenantUserStatus(shared_ptr<ModifyTenantUserStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyTenantUserStatusWithOptions(request, runtime);
}

ReleaseProjectResponse Alibabacloud_OceanBasePro20190901::Client::releaseProjectWithOptions(shared_ptr<ReleaseProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseProject"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReleaseProjectResponse(callApi(params, req, runtime));
}

ReleaseProjectResponse Alibabacloud_OceanBasePro20190901::Client::releaseProject(shared_ptr<ReleaseProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseProjectWithOptions(request, runtime);
}

ReleaseWorkerInstanceResponse Alibabacloud_OceanBasePro20190901::Client::releaseWorkerInstanceWithOptions(shared_ptr<ReleaseWorkerInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseWorkerInstance"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReleaseWorkerInstanceResponse(callApi(params, req, runtime));
}

ReleaseWorkerInstanceResponse Alibabacloud_OceanBasePro20190901::Client::releaseWorkerInstance(shared_ptr<ReleaseWorkerInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseWorkerInstanceWithOptions(request, runtime);
}

RemoveStandbyInstanceResponse Alibabacloud_OceanBasePro20190901::Client::removeStandbyInstanceWithOptions(shared_ptr<RemoveStandbyInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->forced)) {
    body->insert(pair<string, bool>("Forced", *request->forced));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetInstanceId)) {
    body->insert(pair<string, string>("TargetInstanceId", *request->targetInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveStandbyInstance"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveStandbyInstanceResponse(callApi(params, req, runtime));
}

RemoveStandbyInstanceResponse Alibabacloud_OceanBasePro20190901::Client::removeStandbyInstance(shared_ptr<RemoveStandbyInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeStandbyInstanceWithOptions(request, runtime);
}

ResumeProjectResponse Alibabacloud_OceanBasePro20190901::Client::resumeProjectWithOptions(shared_ptr<ResumeProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResumeProject"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResumeProjectResponse(callApi(params, req, runtime));
}

ResumeProjectResponse Alibabacloud_OceanBasePro20190901::Client::resumeProject(shared_ptr<ResumeProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resumeProjectWithOptions(request, runtime);
}

RetryProjectModifyRecordsResponse Alibabacloud_OceanBasePro20190901::Client::retryProjectModifyRecordsWithOptions(shared_ptr<RetryProjectModifyRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RetryProjectModifyRecords"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RetryProjectModifyRecordsResponse(callApi(params, req, runtime));
}

RetryProjectModifyRecordsResponse Alibabacloud_OceanBasePro20190901::Client::retryProjectModifyRecords(shared_ptr<RetryProjectModifyRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return retryProjectModifyRecordsWithOptions(request, runtime);
}

StartProjectResponse Alibabacloud_OceanBasePro20190901::Client::startProjectWithOptions(shared_ptr<StartProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartProject"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartProjectResponse(callApi(params, req, runtime));
}

StartProjectResponse Alibabacloud_OceanBasePro20190901::Client::startProject(shared_ptr<StartProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startProjectWithOptions(request, runtime);
}

StartProjectsByLabelResponse Alibabacloud_OceanBasePro20190901::Client::startProjectsByLabelWithOptions(shared_ptr<StartProjectsByLabelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartProjectsByLabel"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartProjectsByLabelResponse(callApi(params, req, runtime));
}

StartProjectsByLabelResponse Alibabacloud_OceanBasePro20190901::Client::startProjectsByLabel(shared_ptr<StartProjectsByLabelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startProjectsByLabelWithOptions(request, runtime);
}

StopProjectResponse Alibabacloud_OceanBasePro20190901::Client::stopProjectWithOptions(shared_ptr<StopProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopProject"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopProjectResponse(callApi(params, req, runtime));
}

StopProjectResponse Alibabacloud_OceanBasePro20190901::Client::stopProject(shared_ptr<StopProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopProjectWithOptions(request, runtime);
}

StopProjectModifyRecordsResponse Alibabacloud_OceanBasePro20190901::Client::stopProjectModifyRecordsWithOptions(shared_ptr<StopProjectModifyRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopProjectModifyRecords"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopProjectModifyRecordsResponse(callApi(params, req, runtime));
}

StopProjectModifyRecordsResponse Alibabacloud_OceanBasePro20190901::Client::stopProjectModifyRecords(shared_ptr<StopProjectModifyRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopProjectModifyRecordsWithOptions(request, runtime);
}

StopProjectsByLabelResponse Alibabacloud_OceanBasePro20190901::Client::stopProjectsByLabelWithOptions(shared_ptr<StopProjectsByLabelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopProjectsByLabel"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopProjectsByLabelResponse(callApi(params, req, runtime));
}

StopProjectsByLabelResponse Alibabacloud_OceanBasePro20190901::Client::stopProjectsByLabel(shared_ptr<StopProjectsByLabelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopProjectsByLabelWithOptions(request, runtime);
}

SwitchoverInstanceResponse Alibabacloud_OceanBasePro20190901::Client::switchoverInstanceWithOptions(shared_ptr<SwitchoverInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->forced)) {
    body->insert(pair<string, bool>("Forced", *request->forced));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetInstanceId)) {
    body->insert(pair<string, string>("TargetInstanceId", *request->targetInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SwitchoverInstance"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SwitchoverInstanceResponse(callApi(params, req, runtime));
}

SwitchoverInstanceResponse Alibabacloud_OceanBasePro20190901::Client::switchoverInstance(shared_ptr<SwitchoverInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchoverInstanceWithOptions(request, runtime);
}

UpdateProjectConfigResponse Alibabacloud_OceanBasePro20190901::Client::updateProjectConfigWithOptions(shared_ptr<UpdateProjectConfigRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateProjectConfigShrinkRequest> request = make_shared<UpdateProjectConfigShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateProjectConfigRequestCommonTransferConfig>(tmpReq->commonTransferConfig)) {
    request->commonTransferConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->commonTransferConfig, make_shared<string>("CommonTransferConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateProjectConfigRequestFullTransferConfig>(tmpReq->fullTransferConfig)) {
    request->fullTransferConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->fullTransferConfig, make_shared<string>("FullTransferConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateProjectConfigRequestIncrTransferConfig>(tmpReq->incrTransferConfig)) {
    request->incrTransferConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->incrTransferConfig, make_shared<string>("IncrTransferConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateProjectConfigRequestReverseIncrTransferConfig>(tmpReq->reverseIncrTransferConfig)) {
    request->reverseIncrTransferConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->reverseIncrTransferConfig, make_shared<string>("ReverseIncrTransferConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->commonTransferConfigShrink)) {
    body->insert(pair<string, string>("CommonTransferConfig", *request->commonTransferConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fullTransferConfigShrink)) {
    body->insert(pair<string, string>("FullTransferConfig", *request->fullTransferConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incrTransferConfigShrink)) {
    body->insert(pair<string, string>("IncrTransferConfig", *request->incrTransferConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reverseIncrTransferConfigShrink)) {
    body->insert(pair<string, string>("ReverseIncrTransferConfig", *request->reverseIncrTransferConfigShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProjectConfig"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProjectConfigResponse(callApi(params, req, runtime));
}

UpdateProjectConfigResponse Alibabacloud_OceanBasePro20190901::Client::updateProjectConfig(shared_ptr<UpdateProjectConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateProjectConfigWithOptions(request, runtime);
}

