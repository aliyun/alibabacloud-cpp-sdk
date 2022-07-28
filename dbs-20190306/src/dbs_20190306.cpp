// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dbs_20190306.hpp>
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

using namespace Alibabacloud_Dbs20190306;

Alibabacloud_Dbs20190306::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
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

string Alibabacloud_Dbs20190306::Client::getEndpoint(shared_ptr<string> productId,
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

ConfigureBackupPlanResponse Alibabacloud_Dbs20190306::Client::configureBackupPlanWithOptions(shared_ptr<ConfigureBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoStartBackup)) {
    query->insert(pair<string, bool>("AutoStartBackup", *request->autoStartBackup));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->backupGatewayId)) {
    query->insert(pair<string, long>("BackupGatewayId", *request->backupGatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->backupLogIntervalSeconds)) {
    query->insert(pair<string, long>("BackupLogIntervalSeconds", *request->backupLogIntervalSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupObjects)) {
    query->insert(pair<string, string>("BackupObjects", *request->backupObjects));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPeriod)) {
    query->insert(pair<string, string>("BackupPeriod", *request->backupPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanName)) {
    query->insert(pair<string, string>("BackupPlanName", *request->backupPlanName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->backupRateLimit)) {
    query->insert(pair<string, long>("BackupRateLimit", *request->backupRateLimit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->backupRetentionPeriod)) {
    query->insert(pair<string, long>("BackupRetentionPeriod", *request->backupRetentionPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->backupSpeedLimit)) {
    query->insert(pair<string, long>("BackupSpeedLimit", *request->backupSpeedLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupStartTime)) {
    query->insert(pair<string, string>("BackupStartTime", *request->backupStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupStorageType)) {
    query->insert(pair<string, string>("BackupStorageType", *request->backupStorageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupStrategyType)) {
    query->insert(pair<string, string>("BackupStrategyType", *request->backupStrategyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crossAliyunId)) {
    query->insert(pair<string, string>("CrossAliyunId", *request->crossAliyunId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crossRoleName)) {
    query->insert(pair<string, string>("CrossRoleName", *request->crossRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->duplicationArchivePeriod)) {
    query->insert(pair<string, long>("DuplicationArchivePeriod", *request->duplicationArchivePeriod));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->duplicationInfrequentAccessPeriod)) {
    query->insert(pair<string, long>("DuplicationInfrequentAccessPeriod", *request->duplicationInfrequentAccessPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableBackupLog)) {
    query->insert(pair<string, bool>("EnableBackupLog", *request->enableBackupLog));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OSSBucketName)) {
    query->insert(pair<string, string>("OSSBucketName", *request->OSSBucketName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointDatabaseName)) {
    query->insert(pair<string, string>("SourceEndpointDatabaseName", *request->sourceEndpointDatabaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointIP)) {
    query->insert(pair<string, string>("SourceEndpointIP", *request->sourceEndpointIP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointInstanceID)) {
    query->insert(pair<string, string>("SourceEndpointInstanceID", *request->sourceEndpointInstanceID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointInstanceType)) {
    query->insert(pair<string, string>("SourceEndpointInstanceType", *request->sourceEndpointInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointOracleSID)) {
    query->insert(pair<string, string>("SourceEndpointOracleSID", *request->sourceEndpointOracleSID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointPassword)) {
    query->insert(pair<string, string>("SourceEndpointPassword", *request->sourceEndpointPassword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sourceEndpointPort)) {
    query->insert(pair<string, long>("SourceEndpointPort", *request->sourceEndpointPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointRegion)) {
    query->insert(pair<string, string>("SourceEndpointRegion", *request->sourceEndpointRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointUserName)) {
    query->insert(pair<string, string>("SourceEndpointUserName", *request->sourceEndpointUserName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfigureBackupPlan"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfigureBackupPlanResponse(callApi(params, req, runtime));
}

ConfigureBackupPlanResponse Alibabacloud_Dbs20190306::Client::configureBackupPlan(shared_ptr<ConfigureBackupPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return configureBackupPlanWithOptions(request, runtime);
}

CreateAndStartBackupPlanResponse Alibabacloud_Dbs20190306::Client::createAndStartBackupPlanWithOptions(shared_ptr<CreateAndStartBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->backupGatewayId)) {
    query->insert(pair<string, long>("BackupGatewayId", *request->backupGatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->backupLogIntervalSeconds)) {
    query->insert(pair<string, long>("BackupLogIntervalSeconds", *request->backupLogIntervalSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupMethod)) {
    query->insert(pair<string, string>("BackupMethod", *request->backupMethod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupObjects)) {
    query->insert(pair<string, string>("BackupObjects", *request->backupObjects));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPeriod)) {
    query->insert(pair<string, string>("BackupPeriod", *request->backupPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanName)) {
    query->insert(pair<string, string>("BackupPlanName", *request->backupPlanName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->backupRateLimit)) {
    query->insert(pair<string, long>("BackupRateLimit", *request->backupRateLimit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->backupRetentionPeriod)) {
    query->insert(pair<string, long>("BackupRetentionPeriod", *request->backupRetentionPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->backupSpeedLimit)) {
    query->insert(pair<string, long>("BackupSpeedLimit", *request->backupSpeedLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupStartTime)) {
    query->insert(pair<string, string>("BackupStartTime", *request->backupStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupStorageType)) {
    query->insert(pair<string, string>("BackupStorageType", *request->backupStorageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupStrategyType)) {
    query->insert(pair<string, string>("BackupStrategyType", *request->backupStrategyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crossAliyunId)) {
    query->insert(pair<string, string>("CrossAliyunId", *request->crossAliyunId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crossRoleName)) {
    query->insert(pair<string, string>("CrossRoleName", *request->crossRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseRegion)) {
    query->insert(pair<string, string>("DatabaseRegion", *request->databaseRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseType)) {
    query->insert(pair<string, string>("DatabaseType", *request->databaseType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->duplicationArchivePeriod)) {
    query->insert(pair<string, long>("DuplicationArchivePeriod", *request->duplicationArchivePeriod));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->duplicationInfrequentAccessPeriod)) {
    query->insert(pair<string, long>("DuplicationInfrequentAccessPeriod", *request->duplicationInfrequentAccessPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableBackupLog)) {
    query->insert(pair<string, bool>("EnableBackupLog", *request->enableBackupLog));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fromApp)) {
    query->insert(pair<string, string>("FromApp", *request->fromApp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceClass)) {
    query->insert(pair<string, string>("InstanceClass", *request->instanceClass));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OSSBucketName)) {
    query->insert(pair<string, string>("OSSBucketName", *request->OSSBucketName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payType)) {
    query->insert(pair<string, string>("PayType", *request->payType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->period)) {
    query->insert(pair<string, string>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointDatabaseName)) {
    query->insert(pair<string, string>("SourceEndpointDatabaseName", *request->sourceEndpointDatabaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointIP)) {
    query->insert(pair<string, string>("SourceEndpointIP", *request->sourceEndpointIP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointInstanceID)) {
    query->insert(pair<string, string>("SourceEndpointInstanceID", *request->sourceEndpointInstanceID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointInstanceType)) {
    query->insert(pair<string, string>("SourceEndpointInstanceType", *request->sourceEndpointInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointOracleSID)) {
    query->insert(pair<string, string>("SourceEndpointOracleSID", *request->sourceEndpointOracleSID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointPassword)) {
    query->insert(pair<string, string>("SourceEndpointPassword", *request->sourceEndpointPassword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sourceEndpointPort)) {
    query->insert(pair<string, long>("SourceEndpointPort", *request->sourceEndpointPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointRegion)) {
    query->insert(pair<string, string>("SourceEndpointRegion", *request->sourceEndpointRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointUserName)) {
    query->insert(pair<string, string>("SourceEndpointUserName", *request->sourceEndpointUserName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageRegion)) {
    query->insert(pair<string, string>("StorageRegion", *request->storageRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageType)) {
    query->insert(pair<string, string>("StorageType", *request->storageType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->usedTime)) {
    query->insert(pair<string, long>("UsedTime", *request->usedTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAndStartBackupPlan"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAndStartBackupPlanResponse(callApi(params, req, runtime));
}

CreateAndStartBackupPlanResponse Alibabacloud_Dbs20190306::Client::createAndStartBackupPlan(shared_ptr<CreateAndStartBackupPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAndStartBackupPlanWithOptions(request, runtime);
}

CreateBackupPlanResponse Alibabacloud_Dbs20190306::Client::createBackupPlanWithOptions(shared_ptr<CreateBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupMethod)) {
    query->insert(pair<string, string>("BackupMethod", *request->backupMethod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseRegion)) {
    query->insert(pair<string, string>("DatabaseRegion", *request->databaseRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseType)) {
    query->insert(pair<string, string>("DatabaseType", *request->databaseType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fromApp)) {
    query->insert(pair<string, string>("FromApp", *request->fromApp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceClass)) {
    query->insert(pair<string, string>("InstanceClass", *request->instanceClass));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payType)) {
    query->insert(pair<string, string>("PayType", *request->payType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->period)) {
    query->insert(pair<string, string>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageRegion)) {
    query->insert(pair<string, string>("StorageRegion", *request->storageRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageType)) {
    query->insert(pair<string, string>("StorageType", *request->storageType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->usedTime)) {
    query->insert(pair<string, long>("UsedTime", *request->usedTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBackupPlan"))},
    {"version", boost::any(string("2019-03-06"))},
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

CreateBackupPlanResponse Alibabacloud_Dbs20190306::Client::createBackupPlan(shared_ptr<CreateBackupPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBackupPlanWithOptions(request, runtime);
}

CreateFullBackupSetDownloadResponse Alibabacloud_Dbs20190306::Client::createFullBackupSetDownloadWithOptions(shared_ptr<CreateFullBackupSetDownloadRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupSetDataFormat)) {
    query->insert(pair<string, string>("BackupSetDataFormat", *request->backupSetDataFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupSetId)) {
    query->insert(pair<string, string>("BackupSetId", *request->backupSetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFullBackupSetDownload"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFullBackupSetDownloadResponse(callApi(params, req, runtime));
}

CreateFullBackupSetDownloadResponse Alibabacloud_Dbs20190306::Client::createFullBackupSetDownload(shared_ptr<CreateFullBackupSetDownloadRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFullBackupSetDownloadWithOptions(request, runtime);
}

CreateGetDBListFromAgentTaskResponse Alibabacloud_Dbs20190306::Client::createGetDBListFromAgentTaskWithOptions(shared_ptr<CreateGetDBListFromAgentTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->backupGatewayId)) {
    query->insert(pair<string, long>("BackupGatewayId", *request->backupGatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseType)) {
    query->insert(pair<string, string>("DatabaseType", *request->databaseType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointIP)) {
    query->insert(pair<string, string>("SourceEndpointIP", *request->sourceEndpointIP));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sourceEndpointPort)) {
    query->insert(pair<string, long>("SourceEndpointPort", *request->sourceEndpointPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointRegion)) {
    query->insert(pair<string, string>("SourceEndpointRegion", *request->sourceEndpointRegion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGetDBListFromAgentTask"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGetDBListFromAgentTaskResponse(callApi(params, req, runtime));
}

CreateGetDBListFromAgentTaskResponse Alibabacloud_Dbs20190306::Client::createGetDBListFromAgentTask(shared_ptr<CreateGetDBListFromAgentTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGetDBListFromAgentTaskWithOptions(request, runtime);
}

CreateIncrementBackupSetDownloadResponse Alibabacloud_Dbs20190306::Client::createIncrementBackupSetDownloadWithOptions(shared_ptr<CreateIncrementBackupSetDownloadRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupSetDataFormat)) {
    query->insert(pair<string, string>("BackupSetDataFormat", *request->backupSetDataFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupSetId)) {
    query->insert(pair<string, string>("BackupSetId", *request->backupSetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupSetName)) {
    query->insert(pair<string, string>("BackupSetName", *request->backupSetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateIncrementBackupSetDownload"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateIncrementBackupSetDownloadResponse(callApi(params, req, runtime));
}

CreateIncrementBackupSetDownloadResponse Alibabacloud_Dbs20190306::Client::createIncrementBackupSetDownload(shared_ptr<CreateIncrementBackupSetDownloadRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createIncrementBackupSetDownloadWithOptions(request, runtime);
}

CreateRestoreTaskResponse Alibabacloud_Dbs20190306::Client::createRestoreTaskWithOptions(shared_ptr<CreateRestoreTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->backupGatewayId)) {
    query->insert(pair<string, long>("BackupGatewayId", *request->backupGatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupSetId)) {
    query->insert(pair<string, string>("BackupSetId", *request->backupSetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crossAliyunId)) {
    query->insert(pair<string, string>("CrossAliyunId", *request->crossAliyunId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crossRoleName)) {
    query->insert(pair<string, string>("CrossRoleName", *request->crossRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEndpointDatabaseName)) {
    query->insert(pair<string, string>("DestinationEndpointDatabaseName", *request->destinationEndpointDatabaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEndpointIP)) {
    query->insert(pair<string, string>("DestinationEndpointIP", *request->destinationEndpointIP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEndpointInstanceID)) {
    query->insert(pair<string, string>("DestinationEndpointInstanceID", *request->destinationEndpointInstanceID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEndpointInstanceType)) {
    query->insert(pair<string, string>("DestinationEndpointInstanceType", *request->destinationEndpointInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEndpointOracleSID)) {
    query->insert(pair<string, string>("DestinationEndpointOracleSID", *request->destinationEndpointOracleSID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEndpointPassword)) {
    query->insert(pair<string, string>("DestinationEndpointPassword", *request->destinationEndpointPassword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->destinationEndpointPort)) {
    query->insert(pair<string, long>("DestinationEndpointPort", *request->destinationEndpointPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEndpointRegion)) {
    query->insert(pair<string, string>("DestinationEndpointRegion", *request->destinationEndpointRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEndpointUserName)) {
    query->insert(pair<string, string>("DestinationEndpointUserName", *request->destinationEndpointUserName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->duplicateConflict)) {
    query->insert(pair<string, string>("DuplicateConflict", *request->duplicateConflict));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->restoreDir)) {
    query->insert(pair<string, string>("RestoreDir", *request->restoreDir));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->restoreHome)) {
    query->insert(pair<string, string>("RestoreHome", *request->restoreHome));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->restoreObjects)) {
    query->insert(pair<string, string>("RestoreObjects", *request->restoreObjects));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->restoreTaskName)) {
    query->insert(pair<string, string>("RestoreTaskName", *request->restoreTaskName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->restoreTime)) {
    query->insert(pair<string, long>("RestoreTime", *request->restoreTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRestoreTask"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRestoreTaskResponse(callApi(params, req, runtime));
}

CreateRestoreTaskResponse Alibabacloud_Dbs20190306::Client::createRestoreTask(shared_ptr<CreateRestoreTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRestoreTaskWithOptions(request, runtime);
}

DescribeBackupGatewayListResponse Alibabacloud_Dbs20190306::Client::describeBackupGatewayListWithOptions(shared_ptr<DescribeBackupGatewayListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    query->insert(pair<string, string>("Identifier", *request->identifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackupGatewayList"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBackupGatewayListResponse(callApi(params, req, runtime));
}

DescribeBackupGatewayListResponse Alibabacloud_Dbs20190306::Client::describeBackupGatewayList(shared_ptr<DescribeBackupGatewayListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupGatewayListWithOptions(request, runtime);
}

DescribeBackupPlanBillingResponse Alibabacloud_Dbs20190306::Client::describeBackupPlanBillingWithOptions(shared_ptr<DescribeBackupPlanBillingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showStorageType)) {
    query->insert(pair<string, bool>("ShowStorageType", *request->showStorageType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackupPlanBilling"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBackupPlanBillingResponse(callApi(params, req, runtime));
}

DescribeBackupPlanBillingResponse Alibabacloud_Dbs20190306::Client::describeBackupPlanBilling(shared_ptr<DescribeBackupPlanBillingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupPlanBillingWithOptions(request, runtime);
}

DescribeBackupPlanListResponse Alibabacloud_Dbs20190306::Client::describeBackupPlanListWithOptions(shared_ptr<DescribeBackupPlanListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanName)) {
    query->insert(pair<string, string>("BackupPlanName", *request->backupPlanName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanStatus)) {
    query->insert(pair<string, string>("BackupPlanStatus", *request->backupPlanStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackupPlanList"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBackupPlanListResponse(callApi(params, req, runtime));
}

DescribeBackupPlanListResponse Alibabacloud_Dbs20190306::Client::describeBackupPlanList(shared_ptr<DescribeBackupPlanListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupPlanListWithOptions(request, runtime);
}

DescribeBackupSetDownloadTaskListResponse Alibabacloud_Dbs20190306::Client::describeBackupSetDownloadTaskListWithOptions(shared_ptr<DescribeBackupSetDownloadTaskListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupSetDownloadTaskId)) {
    query->insert(pair<string, string>("BackupSetDownloadTaskId", *request->backupSetDownloadTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackupSetDownloadTaskList"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBackupSetDownloadTaskListResponse(callApi(params, req, runtime));
}

DescribeBackupSetDownloadTaskListResponse Alibabacloud_Dbs20190306::Client::describeBackupSetDownloadTaskList(shared_ptr<DescribeBackupSetDownloadTaskListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupSetDownloadTaskListWithOptions(request, runtime);
}

DescribeDLAServiceResponse Alibabacloud_Dbs20190306::Client::describeDLAServiceWithOptions(shared_ptr<DescribeDLAServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDLAService"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDLAServiceResponse(callApi(params, req, runtime));
}

DescribeDLAServiceResponse Alibabacloud_Dbs20190306::Client::describeDLAService(shared_ptr<DescribeDLAServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDLAServiceWithOptions(request, runtime);
}

DescribeFullBackupListResponse Alibabacloud_Dbs20190306::Client::describeFullBackupListWithOptions(shared_ptr<DescribeFullBackupListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupSetId)) {
    query->insert(pair<string, string>("BackupSetId", *request->backupSetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTimestamp)) {
    query->insert(pair<string, long>("EndTimestamp", *request->endTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showStorageType)) {
    query->insert(pair<string, bool>("ShowStorageType", *request->showStorageType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTimestamp)) {
    query->insert(pair<string, long>("StartTimestamp", *request->startTimestamp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFullBackupList"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFullBackupListResponse(callApi(params, req, runtime));
}

DescribeFullBackupListResponse Alibabacloud_Dbs20190306::Client::describeFullBackupList(shared_ptr<DescribeFullBackupListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFullBackupListWithOptions(request, runtime);
}

DescribeIncrementBackupListResponse Alibabacloud_Dbs20190306::Client::describeIncrementBackupListWithOptions(shared_ptr<DescribeIncrementBackupListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTimestamp)) {
    query->insert(pair<string, long>("EndTimestamp", *request->endTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showStorageType)) {
    query->insert(pair<string, bool>("ShowStorageType", *request->showStorageType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTimestamp)) {
    query->insert(pair<string, long>("StartTimestamp", *request->startTimestamp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeIncrementBackupList"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeIncrementBackupListResponse(callApi(params, req, runtime));
}

DescribeIncrementBackupListResponse Alibabacloud_Dbs20190306::Client::describeIncrementBackupList(shared_ptr<DescribeIncrementBackupListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeIncrementBackupListWithOptions(request, runtime);
}

DescribeJobErrorCodeResponse Alibabacloud_Dbs20190306::Client::describeJobErrorCodeWithOptions(shared_ptr<DescribeJobErrorCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeJobErrorCode"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeJobErrorCodeResponse(callApi(params, req, runtime));
}

DescribeJobErrorCodeResponse Alibabacloud_Dbs20190306::Client::describeJobErrorCode(shared_ptr<DescribeJobErrorCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeJobErrorCodeWithOptions(request, runtime);
}

DescribeNodeCidrListResponse Alibabacloud_Dbs20190306::Client::describeNodeCidrListWithOptions(shared_ptr<DescribeNodeCidrListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNodeCidrList"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeNodeCidrListResponse(callApi(params, req, runtime));
}

DescribeNodeCidrListResponse Alibabacloud_Dbs20190306::Client::describeNodeCidrList(shared_ptr<DescribeNodeCidrListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNodeCidrListWithOptions(request, runtime);
}

DescribePreCheckProgressListResponse Alibabacloud_Dbs20190306::Client::describePreCheckProgressListWithOptions(shared_ptr<DescribePreCheckProgressListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->restoreTaskId)) {
    query->insert(pair<string, string>("RestoreTaskId", *request->restoreTaskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePreCheckProgressList"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePreCheckProgressListResponse(callApi(params, req, runtime));
}

DescribePreCheckProgressListResponse Alibabacloud_Dbs20190306::Client::describePreCheckProgressList(shared_ptr<DescribePreCheckProgressListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePreCheckProgressListWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Dbs20190306::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2019-03-06"))},
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

DescribeRegionsResponse Alibabacloud_Dbs20190306::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeRestoreRangeInfoResponse Alibabacloud_Dbs20190306::Client::describeRestoreRangeInfoWithOptions(shared_ptr<DescribeRestoreRangeInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTimestampForRestore)) {
    query->insert(pair<string, long>("BeginTimestampForRestore", *request->beginTimestampForRestore));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTimestampForRestore)) {
    query->insert(pair<string, long>("EndTimestampForRestore", *request->endTimestampForRestore));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->recentlyRestore)) {
    query->insert(pair<string, bool>("RecentlyRestore", *request->recentlyRestore));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRestoreRangeInfo"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRestoreRangeInfoResponse(callApi(params, req, runtime));
}

DescribeRestoreRangeInfoResponse Alibabacloud_Dbs20190306::Client::describeRestoreRangeInfo(shared_ptr<DescribeRestoreRangeInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRestoreRangeInfoWithOptions(request, runtime);
}

DescribeRestoreTaskListResponse Alibabacloud_Dbs20190306::Client::describeRestoreTaskListWithOptions(shared_ptr<DescribeRestoreTaskListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTimestamp)) {
    query->insert(pair<string, long>("EndTimestamp", *request->endTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->restoreTaskId)) {
    query->insert(pair<string, string>("RestoreTaskId", *request->restoreTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTimestamp)) {
    query->insert(pair<string, long>("StartTimestamp", *request->startTimestamp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRestoreTaskList"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRestoreTaskListResponse(callApi(params, req, runtime));
}

DescribeRestoreTaskListResponse Alibabacloud_Dbs20190306::Client::describeRestoreTaskList(shared_ptr<DescribeRestoreTaskListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRestoreTaskListWithOptions(request, runtime);
}

DisableBackupLogResponse Alibabacloud_Dbs20190306::Client::disableBackupLogWithOptions(shared_ptr<DisableBackupLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableBackupLog"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableBackupLogResponse(callApi(params, req, runtime));
}

DisableBackupLogResponse Alibabacloud_Dbs20190306::Client::disableBackupLog(shared_ptr<DisableBackupLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableBackupLogWithOptions(request, runtime);
}

EnableBackupLogResponse Alibabacloud_Dbs20190306::Client::enableBackupLogWithOptions(shared_ptr<EnableBackupLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableBackupLog"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableBackupLogResponse(callApi(params, req, runtime));
}

EnableBackupLogResponse Alibabacloud_Dbs20190306::Client::enableBackupLog(shared_ptr<EnableBackupLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableBackupLogWithOptions(request, runtime);
}

GetDBListFromAgentResponse Alibabacloud_Dbs20190306::Client::getDBListFromAgentWithOptions(shared_ptr<GetDBListFromAgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->backupGatewayId)) {
    query->insert(pair<string, long>("BackupGatewayId", *request->backupGatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointRegion)) {
    query->insert(pair<string, string>("SourceEndpointRegion", *request->sourceEndpointRegion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    query->insert(pair<string, long>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDBListFromAgent"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDBListFromAgentResponse(callApi(params, req, runtime));
}

GetDBListFromAgentResponse Alibabacloud_Dbs20190306::Client::getDBListFromAgent(shared_ptr<GetDBListFromAgentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDBListFromAgentWithOptions(request, runtime);
}

InitializeDbsServiceLinkedRoleResponse Alibabacloud_Dbs20190306::Client::initializeDbsServiceLinkedRoleWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InitializeDbsServiceLinkedRole"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InitializeDbsServiceLinkedRoleResponse(callApi(params, req, runtime));
}

InitializeDbsServiceLinkedRoleResponse Alibabacloud_Dbs20190306::Client::initializeDbsServiceLinkedRole() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return initializeDbsServiceLinkedRoleWithOptions(runtime);
}

ModifyBackupObjectsResponse Alibabacloud_Dbs20190306::Client::modifyBackupObjectsWithOptions(shared_ptr<ModifyBackupObjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupObjects)) {
    query->insert(pair<string, string>("BackupObjects", *request->backupObjects));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyBackupObjects"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyBackupObjectsResponse(callApi(params, req, runtime));
}

ModifyBackupObjectsResponse Alibabacloud_Dbs20190306::Client::modifyBackupObjects(shared_ptr<ModifyBackupObjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyBackupObjectsWithOptions(request, runtime);
}

ModifyBackupPlanNameResponse Alibabacloud_Dbs20190306::Client::modifyBackupPlanNameWithOptions(shared_ptr<ModifyBackupPlanNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanName)) {
    query->insert(pair<string, string>("BackupPlanName", *request->backupPlanName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyBackupPlanName"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyBackupPlanNameResponse(callApi(params, req, runtime));
}

ModifyBackupPlanNameResponse Alibabacloud_Dbs20190306::Client::modifyBackupPlanName(shared_ptr<ModifyBackupPlanNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyBackupPlanNameWithOptions(request, runtime);
}

ModifyBackupSetDownloadRulesResponse Alibabacloud_Dbs20190306::Client::modifyBackupSetDownloadRulesWithOptions(shared_ptr<ModifyBackupSetDownloadRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->backupGatewayId)) {
    query->insert(pair<string, long>("BackupGatewayId", *request->backupGatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupSetDownloadDir)) {
    query->insert(pair<string, string>("BackupSetDownloadDir", *request->backupSetDownloadDir));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupSetDownloadTargetType)) {
    query->insert(pair<string, string>("BackupSetDownloadTargetType", *request->backupSetDownloadTargetType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupSetDownloadTargetTypeLocation)) {
    query->insert(pair<string, string>("BackupSetDownloadTargetTypeLocation", *request->backupSetDownloadTargetTypeLocation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fullDataFormat)) {
    query->insert(pair<string, string>("FullDataFormat", *request->fullDataFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incrementDataFormat)) {
    query->insert(pair<string, string>("IncrementDataFormat", *request->incrementDataFormat));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->openAutoDownload)) {
    query->insert(pair<string, bool>("OpenAutoDownload", *request->openAutoDownload));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyBackupSetDownloadRules"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyBackupSetDownloadRulesResponse(callApi(params, req, runtime));
}

ModifyBackupSetDownloadRulesResponse Alibabacloud_Dbs20190306::Client::modifyBackupSetDownloadRules(shared_ptr<ModifyBackupSetDownloadRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyBackupSetDownloadRulesWithOptions(request, runtime);
}

ModifyBackupSourceEndpointResponse Alibabacloud_Dbs20190306::Client::modifyBackupSourceEndpointWithOptions(shared_ptr<ModifyBackupSourceEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->backupGatewayId)) {
    query->insert(pair<string, long>("BackupGatewayId", *request->backupGatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupObjects)) {
    query->insert(pair<string, string>("BackupObjects", *request->backupObjects));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crossAliyunId)) {
    query->insert(pair<string, string>("CrossAliyunId", *request->crossAliyunId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crossRoleName)) {
    query->insert(pair<string, string>("CrossRoleName", *request->crossRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointDatabaseName)) {
    query->insert(pair<string, string>("SourceEndpointDatabaseName", *request->sourceEndpointDatabaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointIP)) {
    query->insert(pair<string, string>("SourceEndpointIP", *request->sourceEndpointIP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointInstanceID)) {
    query->insert(pair<string, string>("SourceEndpointInstanceID", *request->sourceEndpointInstanceID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointInstanceType)) {
    query->insert(pair<string, string>("SourceEndpointInstanceType", *request->sourceEndpointInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointOracleSID)) {
    query->insert(pair<string, string>("SourceEndpointOracleSID", *request->sourceEndpointOracleSID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointPassword)) {
    query->insert(pair<string, string>("SourceEndpointPassword", *request->sourceEndpointPassword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sourceEndpointPort)) {
    query->insert(pair<string, long>("SourceEndpointPort", *request->sourceEndpointPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointRegion)) {
    query->insert(pair<string, string>("SourceEndpointRegion", *request->sourceEndpointRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointUserName)) {
    query->insert(pair<string, string>("SourceEndpointUserName", *request->sourceEndpointUserName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyBackupSourceEndpoint"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyBackupSourceEndpointResponse(callApi(params, req, runtime));
}

ModifyBackupSourceEndpointResponse Alibabacloud_Dbs20190306::Client::modifyBackupSourceEndpoint(shared_ptr<ModifyBackupSourceEndpointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyBackupSourceEndpointWithOptions(request, runtime);
}

ModifyBackupStrategyResponse Alibabacloud_Dbs20190306::Client::modifyBackupStrategyWithOptions(shared_ptr<ModifyBackupStrategyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->backupLogIntervalSeconds)) {
    query->insert(pair<string, long>("BackupLogIntervalSeconds", *request->backupLogIntervalSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPeriod)) {
    query->insert(pair<string, string>("BackupPeriod", *request->backupPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupStartTime)) {
    query->insert(pair<string, string>("BackupStartTime", *request->backupStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupStrategyType)) {
    query->insert(pair<string, string>("BackupStrategyType", *request->backupStrategyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyBackupStrategy"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyBackupStrategyResponse(callApi(params, req, runtime));
}

ModifyBackupStrategyResponse Alibabacloud_Dbs20190306::Client::modifyBackupStrategy(shared_ptr<ModifyBackupStrategyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyBackupStrategyWithOptions(request, runtime);
}

ModifyStorageStrategyResponse Alibabacloud_Dbs20190306::Client::modifyStorageStrategyWithOptions(shared_ptr<ModifyStorageStrategyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->backupRetentionPeriod)) {
    query->insert(pair<string, long>("BackupRetentionPeriod", *request->backupRetentionPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->duplicationArchivePeriod)) {
    query->insert(pair<string, long>("DuplicationArchivePeriod", *request->duplicationArchivePeriod));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->duplicationInfrequentAccessPeriod)) {
    query->insert(pair<string, long>("DuplicationInfrequentAccessPeriod", *request->duplicationInfrequentAccessPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyStorageStrategy"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyStorageStrategyResponse(callApi(params, req, runtime));
}

ModifyStorageStrategyResponse Alibabacloud_Dbs20190306::Client::modifyStorageStrategy(shared_ptr<ModifyStorageStrategyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyStorageStrategyWithOptions(request, runtime);
}

ReleaseBackupPlanResponse Alibabacloud_Dbs20190306::Client::releaseBackupPlanWithOptions(shared_ptr<ReleaseBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseBackupPlan"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReleaseBackupPlanResponse(callApi(params, req, runtime));
}

ReleaseBackupPlanResponse Alibabacloud_Dbs20190306::Client::releaseBackupPlan(shared_ptr<ReleaseBackupPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseBackupPlanWithOptions(request, runtime);
}

RenewBackupPlanResponse Alibabacloud_Dbs20190306::Client::renewBackupPlanWithOptions(shared_ptr<RenewBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->period)) {
    query->insert(pair<string, string>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->usedTime)) {
    query->insert(pair<string, long>("UsedTime", *request->usedTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenewBackupPlan"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RenewBackupPlanResponse(callApi(params, req, runtime));
}

RenewBackupPlanResponse Alibabacloud_Dbs20190306::Client::renewBackupPlan(shared_ptr<RenewBackupPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renewBackupPlanWithOptions(request, runtime);
}

StartBackupPlanResponse Alibabacloud_Dbs20190306::Client::startBackupPlanWithOptions(shared_ptr<StartBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartBackupPlan"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartBackupPlanResponse(callApi(params, req, runtime));
}

StartBackupPlanResponse Alibabacloud_Dbs20190306::Client::startBackupPlan(shared_ptr<StartBackupPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startBackupPlanWithOptions(request, runtime);
}

StartRestoreTaskResponse Alibabacloud_Dbs20190306::Client::startRestoreTaskWithOptions(shared_ptr<StartRestoreTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->restoreTaskId)) {
    query->insert(pair<string, string>("RestoreTaskId", *request->restoreTaskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartRestoreTask"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartRestoreTaskResponse(callApi(params, req, runtime));
}

StartRestoreTaskResponse Alibabacloud_Dbs20190306::Client::startRestoreTask(shared_ptr<StartRestoreTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startRestoreTaskWithOptions(request, runtime);
}

StopBackupPlanResponse Alibabacloud_Dbs20190306::Client::stopBackupPlanWithOptions(shared_ptr<StopBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stopMethod)) {
    query->insert(pair<string, string>("StopMethod", *request->stopMethod));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopBackupPlan"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopBackupPlanResponse(callApi(params, req, runtime));
}

StopBackupPlanResponse Alibabacloud_Dbs20190306::Client::stopBackupPlan(shared_ptr<StopBackupPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopBackupPlanWithOptions(request, runtime);
}

UpgradeBackupPlanResponse Alibabacloud_Dbs20190306::Client::upgradeBackupPlanWithOptions(shared_ptr<UpgradeBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupPlanId)) {
    query->insert(pair<string, string>("BackupPlanId", *request->backupPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceClass)) {
    query->insert(pair<string, string>("InstanceClass", *request->instanceClass));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeBackupPlan"))},
    {"version", boost::any(string("2019-03-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpgradeBackupPlanResponse(callApi(params, req, runtime));
}

UpgradeBackupPlanResponse Alibabacloud_Dbs20190306::Client::upgradeBackupPlan(shared_ptr<UpgradeBackupPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeBackupPlanWithOptions(request, runtime);
}

