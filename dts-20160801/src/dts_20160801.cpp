// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dts_20160801.hpp>
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

using namespace Alibabacloud_Dts20160801;

Alibabacloud_Dts20160801::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-qingdao", "dts.aliyuncs.com"},
    {"cn-beijing", "dts.aliyuncs.com"},
    {"cn-zhangjiakou", "dts.aliyuncs.com"},
    {"cn-huhehaote", "dts.aliyuncs.com"},
    {"cn-hangzhou", "dts.aliyuncs.com"},
    {"cn-shanghai", "dts.aliyuncs.com"},
    {"cn-shenzhen", "dts.aliyuncs.com"},
    {"cn-hongkong", "dts.aliyuncs.com"},
    {"ap-southeast-1", "dts.aliyuncs.com"},
    {"ap-southeast-2", "dts.aliyuncs.com"},
    {"ap-southeast-3", "dts.aliyuncs.com"},
    {"ap-southeast-5", "dts.aliyuncs.com"},
    {"eu-west-1", "dts.aliyuncs.com"},
    {"us-west-1", "dts.aliyuncs.com"},
    {"us-east-1", "dts.aliyuncs.com"},
    {"eu-central-1", "dts.aliyuncs.com"},
    {"me-east-1", "dts.aliyuncs.com"},
    {"ap-south-1", "dts.aliyuncs.com"},
    {"cn-hangzhou-finance", "dts.aliyuncs.com"},
    {"cn-shanghai-finance-1", "dts.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "dts.aliyuncs.com"},
    {"cn-north-2-gov-1", "dts.aliyuncs.com"},
    {"ap-northeast-2-pop", "dts.aliyuncs.com"},
    {"cn-beijing-finance-1", "dts.aliyuncs.com"},
    {"cn-beijing-finance-pop", "dts.aliyuncs.com"},
    {"cn-beijing-gov-1", "dts.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "dts.aliyuncs.com"},
    {"cn-chengdu", "dts.aliyuncs.com"},
    {"cn-edge-1", "dts.aliyuncs.com"},
    {"cn-fujian", "dts.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "dts.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "dts.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "dts.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "dts.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "dts.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "dts.aliyuncs.com"},
    {"cn-hangzhou-test-306", "dts.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "dts.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "dts.aliyuncs.com"},
    {"cn-qingdao-nebula", "dts.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "dts.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "dts.aliyuncs.com"},
    {"cn-shanghai-inner", "dts.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "dts.aliyuncs.com"},
    {"cn-shenzhen-inner", "dts.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "dts.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "dts.aliyuncs.com"},
    {"cn-wuhan", "dts.aliyuncs.com"},
    {"cn-wulanchabu", "dts.aliyuncs.com"},
    {"cn-yushanfang", "dts.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "dts.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "dts.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "dts.aliyuncs.com"},
    {"eu-west-1-oxs", "dts.aliyuncs.com"},
    {"rus-west-1-pop", "dts.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("dts"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Dts20160801::Client::getEndpoint(shared_ptr<string> productId,
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

ConfigurationSynchronizationJobResponse Alibabacloud_Dts20160801::Client::configurationSynchronizationJobWithOptions(shared_ptr<ConfigurationSynchronizationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobId)) {
    query->insert(pair<string, string>("SynchronizationJobId", *request->synchronizationJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobName)) {
    query->insert(pair<string, string>("SynchronizationJobName", *request->synchronizationJobName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationObject)) {
    query->insert(pair<string, string>("SynchronizationObject", *request->synchronizationObject));
  }
  if (!Darabonba_Util::Client::isUnset<ConfigurationSynchronizationJobRequestDestinationEndpoint>(request->destinationEndpoint)) {
    query->insert(pair<string, ConfigurationSynchronizationJobRequestDestinationEndpoint>("DestinationEndpoint", *request->destinationEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<ConfigurationSynchronizationJobRequestInitialization>(request->initialization)) {
    query->insert(pair<string, ConfigurationSynchronizationJobRequestInitialization>("Initialization", *request->initialization));
  }
  if (!Darabonba_Util::Client::isUnset<ConfigurationSynchronizationJobRequestSourceEndpoint>(request->sourceEndpoint)) {
    query->insert(pair<string, ConfigurationSynchronizationJobRequestSourceEndpoint>("SourceEndpoint", *request->sourceEndpoint));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfigurationSynchronizationJob"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfigurationSynchronizationJobResponse(callApi(params, req, runtime));
}

ConfigurationSynchronizationJobResponse Alibabacloud_Dts20160801::Client::configurationSynchronizationJob(shared_ptr<ConfigurationSynchronizationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return configurationSynchronizationJobWithOptions(request, runtime);
}

ConfigureMigrationJobResponse Alibabacloud_Dts20160801::Client::configureMigrationJobWithOptions(shared_ptr<ConfigureMigrationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkpoint)) {
    query->insert(pair<string, string>("Checkpoint", *request->checkpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->migrationJobId)) {
    query->insert(pair<string, string>("MigrationJobId", *request->migrationJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->migrationJobName)) {
    query->insert(pair<string, string>("MigrationJobName", *request->migrationJobName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->migrationObject)) {
    query->insert(pair<string, string>("MigrationObject", *request->migrationObject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->migrationReserved)) {
    query->insert(pair<string, string>("MigrationReserved", *request->migrationReserved));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<ConfigureMigrationJobRequestDestinationEndpoint>(request->destinationEndpoint)) {
    query->insert(pair<string, ConfigureMigrationJobRequestDestinationEndpoint>("DestinationEndpoint", *request->destinationEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<ConfigureMigrationJobRequestMigrationMode>(request->migrationMode)) {
    query->insert(pair<string, ConfigureMigrationJobRequestMigrationMode>("MigrationMode", *request->migrationMode));
  }
  if (!Darabonba_Util::Client::isUnset<ConfigureMigrationJobRequestSourceEndpoint>(request->sourceEndpoint)) {
    query->insert(pair<string, ConfigureMigrationJobRequestSourceEndpoint>("SourceEndpoint", *request->sourceEndpoint));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfigureMigrationJob"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfigureMigrationJobResponse(callApi(params, req, runtime));
}

ConfigureMigrationJobResponse Alibabacloud_Dts20160801::Client::configureMigrationJob(shared_ptr<ConfigureMigrationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return configureMigrationJobWithOptions(request, runtime);
}

ConfigureSubscriptionInstanceResponse Alibabacloud_Dts20160801::Client::configureSubscriptionInstanceWithOptions(shared_ptr<ConfigureSubscriptionInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionInstanceId)) {
    query->insert(pair<string, string>("SubscriptionInstanceId", *request->subscriptionInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionInstanceName)) {
    query->insert(pair<string, string>("SubscriptionInstanceName", *request->subscriptionInstanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionObject)) {
    query->insert(pair<string, string>("SubscriptionObject", *request->subscriptionObject));
  }
  if (!Darabonba_Util::Client::isUnset<ConfigureSubscriptionInstanceRequestSourceEndpoint>(request->sourceEndpoint)) {
    query->insert(pair<string, ConfigureSubscriptionInstanceRequestSourceEndpoint>("SourceEndpoint", *request->sourceEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<ConfigureSubscriptionInstanceRequestSubscriptionDataType>(request->subscriptionDataType)) {
    query->insert(pair<string, ConfigureSubscriptionInstanceRequestSubscriptionDataType>("SubscriptionDataType", *request->subscriptionDataType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfigureSubscriptionInstance"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfigureSubscriptionInstanceResponse(callApi(params, req, runtime));
}

ConfigureSubscriptionInstanceResponse Alibabacloud_Dts20160801::Client::configureSubscriptionInstance(shared_ptr<ConfigureSubscriptionInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return configureSubscriptionInstanceWithOptions(request, runtime);
}

ConfigureSynchronizationJobResponse Alibabacloud_Dts20160801::Client::configureSynchronizationJobWithOptions(shared_ptr<ConfigureSynchronizationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkpoint)) {
    query->insert(pair<string, string>("Checkpoint", *request->checkpoint));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dataInitialization)) {
    query->insert(pair<string, bool>("DataInitialization", *request->dataInitialization));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->migrationReserved)) {
    query->insert(pair<string, string>("MigrationReserved", *request->migrationReserved));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->structureInitialization)) {
    query->insert(pair<string, bool>("StructureInitialization", *request->structureInitialization));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobId)) {
    query->insert(pair<string, string>("SynchronizationJobId", *request->synchronizationJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobName)) {
    query->insert(pair<string, string>("SynchronizationJobName", *request->synchronizationJobName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationObjects)) {
    query->insert(pair<string, string>("SynchronizationObjects", *request->synchronizationObjects));
  }
  if (!Darabonba_Util::Client::isUnset<ConfigureSynchronizationJobRequestDestinationEndpoint>(request->destinationEndpoint)) {
    query->insert(pair<string, ConfigureSynchronizationJobRequestDestinationEndpoint>("DestinationEndpoint", *request->destinationEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<ConfigureSynchronizationJobRequestPartitionKey>(request->partitionKey)) {
    query->insert(pair<string, ConfigureSynchronizationJobRequestPartitionKey>("PartitionKey", *request->partitionKey));
  }
  if (!Darabonba_Util::Client::isUnset<ConfigureSynchronizationJobRequestSourceEndpoint>(request->sourceEndpoint)) {
    query->insert(pair<string, ConfigureSynchronizationJobRequestSourceEndpoint>("SourceEndpoint", *request->sourceEndpoint));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfigureSynchronizationJob"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfigureSynchronizationJobResponse(callApi(params, req, runtime));
}

ConfigureSynchronizationJobResponse Alibabacloud_Dts20160801::Client::configureSynchronizationJob(shared_ptr<ConfigureSynchronizationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return configureSynchronizationJobWithOptions(request, runtime);
}

CreateMigrationJobResponse Alibabacloud_Dts20160801::Client::createMigrationJobWithOptions(shared_ptr<CreateMigrationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->migrationJobClass)) {
    query->insert(pair<string, string>("MigrationJobClass", *request->migrationJobClass));
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
    {"action", boost::any(string("CreateMigrationJob"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMigrationJobResponse(callApi(params, req, runtime));
}

CreateMigrationJobResponse Alibabacloud_Dts20160801::Client::createMigrationJob(shared_ptr<CreateMigrationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMigrationJobWithOptions(request, runtime);
}

CreateSubscriptionInstanceResponse Alibabacloud_Dts20160801::Client::createSubscriptionInstanceWithOptions(shared_ptr<CreateSubscriptionInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
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
  if (!Darabonba_Util::Client::isUnset<long>(request->usedTime)) {
    query->insert(pair<string, long>("UsedTime", *request->usedTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSubscriptionInstance"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSubscriptionInstanceResponse(callApi(params, req, runtime));
}

CreateSubscriptionInstanceResponse Alibabacloud_Dts20160801::Client::createSubscriptionInstance(shared_ptr<CreateSubscriptionInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSubscriptionInstanceWithOptions(request, runtime);
}

CreateSynchronizationJobResponse Alibabacloud_Dts20160801::Client::createSynchronizationJobWithOptions(shared_ptr<CreateSynchronizationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destRegion)) {
    query->insert(pair<string, string>("DestRegion", *request->destRegion));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceRegion)) {
    query->insert(pair<string, string>("SourceRegion", *request->sourceRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobClass)) {
    query->insert(pair<string, string>("SynchronizationJobClass", *request->synchronizationJobClass));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->usedTime)) {
    query->insert(pair<string, long>("UsedTime", *request->usedTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkType)) {
    query->insert(pair<string, string>("networkType", *request->networkType));
  }
  if (!Darabonba_Util::Client::isUnset<CreateSynchronizationJobRequestDestinationEndpoint>(request->destinationEndpoint)) {
    query->insert(pair<string, CreateSynchronizationJobRequestDestinationEndpoint>("DestinationEndpoint", *request->destinationEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<CreateSynchronizationJobRequestSourceEndpoint>(request->sourceEndpoint)) {
    query->insert(pair<string, CreateSynchronizationJobRequestSourceEndpoint>("SourceEndpoint", *request->sourceEndpoint));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSynchronizationJob"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSynchronizationJobResponse(callApi(params, req, runtime));
}

CreateSynchronizationJobResponse Alibabacloud_Dts20160801::Client::createSynchronizationJob(shared_ptr<CreateSynchronizationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSynchronizationJobWithOptions(request, runtime);
}

DeleteMigrationJobResponse Alibabacloud_Dts20160801::Client::deleteMigrationJobWithOptions(shared_ptr<DeleteMigrationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->migrationJobId)) {
    query->insert(pair<string, string>("MigrationJobId", *request->migrationJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMigrationJob"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMigrationJobResponse(callApi(params, req, runtime));
}

DeleteMigrationJobResponse Alibabacloud_Dts20160801::Client::deleteMigrationJob(shared_ptr<DeleteMigrationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMigrationJobWithOptions(request, runtime);
}

DeleteSubscriptionInstanceResponse Alibabacloud_Dts20160801::Client::deleteSubscriptionInstanceWithOptions(shared_ptr<DeleteSubscriptionInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionInstanceId)) {
    query->insert(pair<string, string>("SubscriptionInstanceId", *request->subscriptionInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSubscriptionInstance"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSubscriptionInstanceResponse(callApi(params, req, runtime));
}

DeleteSubscriptionInstanceResponse Alibabacloud_Dts20160801::Client::deleteSubscriptionInstance(shared_ptr<DeleteSubscriptionInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSubscriptionInstanceWithOptions(request, runtime);
}

DeleteSynchronizationJobResponse Alibabacloud_Dts20160801::Client::deleteSynchronizationJobWithOptions(shared_ptr<DeleteSynchronizationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobId)) {
    query->insert(pair<string, string>("SynchronizationJobId", *request->synchronizationJobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSynchronizationJob"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSynchronizationJobResponse(callApi(params, req, runtime));
}

DeleteSynchronizationJobResponse Alibabacloud_Dts20160801::Client::deleteSynchronizationJob(shared_ptr<DeleteSynchronizationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSynchronizationJobWithOptions(request, runtime);
}

DescirbeMigrationJobsResponse Alibabacloud_Dts20160801::Client::descirbeMigrationJobsWithOptions(shared_ptr<DescirbeMigrationJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->migrationJobName)) {
    query->insert(pair<string, string>("MigrationJobName", *request->migrationJobName));
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
    {"action", boost::any(string("DescirbeMigrationJobs"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescirbeMigrationJobsResponse(callApi(params, req, runtime));
}

DescirbeMigrationJobsResponse Alibabacloud_Dts20160801::Client::descirbeMigrationJobs(shared_ptr<DescirbeMigrationJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return descirbeMigrationJobsWithOptions(request, runtime);
}

DescribeInitializationStatusResponse Alibabacloud_Dts20160801::Client::describeInitializationStatusWithOptions(shared_ptr<DescribeInitializationStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobId)) {
    query->insert(pair<string, string>("SynchronizationJobId", *request->synchronizationJobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInitializationStatus"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInitializationStatusResponse(callApi(params, req, runtime));
}

DescribeInitializationStatusResponse Alibabacloud_Dts20160801::Client::describeInitializationStatus(shared_ptr<DescribeInitializationStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInitializationStatusWithOptions(request, runtime);
}

DescribeMigrationJobDetailResponse Alibabacloud_Dts20160801::Client::describeMigrationJobDetailWithOptions(shared_ptr<DescribeMigrationJobDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->migrationJobId)) {
    query->insert(pair<string, string>("MigrationJobId", *request->migrationJobId));
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
  if (!Darabonba_Util::Client::isUnset<DescribeMigrationJobDetailRequestMigrationMode>(request->migrationMode)) {
    query->insert(pair<string, DescribeMigrationJobDetailRequestMigrationMode>("MigrationMode", *request->migrationMode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMigrationJobDetail"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMigrationJobDetailResponse(callApi(params, req, runtime));
}

DescribeMigrationJobDetailResponse Alibabacloud_Dts20160801::Client::describeMigrationJobDetail(shared_ptr<DescribeMigrationJobDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMigrationJobDetailWithOptions(request, runtime);
}

DescribeMigrationJobStatusResponse Alibabacloud_Dts20160801::Client::describeMigrationJobStatusWithOptions(shared_ptr<DescribeMigrationJobStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->migrationJobId)) {
    query->insert(pair<string, string>("MigrationJobId", *request->migrationJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMigrationJobStatus"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMigrationJobStatusResponse(callApi(params, req, runtime));
}

DescribeMigrationJobStatusResponse Alibabacloud_Dts20160801::Client::describeMigrationJobStatus(shared_ptr<DescribeMigrationJobStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMigrationJobStatusWithOptions(request, runtime);
}

DescribeMigrationJobsResponse Alibabacloud_Dts20160801::Client::describeMigrationJobsWithOptions(shared_ptr<DescribeMigrationJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->migrationJobName)) {
    query->insert(pair<string, string>("MigrationJobName", *request->migrationJobName));
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
    {"action", boost::any(string("DescribeMigrationJobs"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMigrationJobsResponse(callApi(params, req, runtime));
}

DescribeMigrationJobsResponse Alibabacloud_Dts20160801::Client::describeMigrationJobs(shared_ptr<DescribeMigrationJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMigrationJobsWithOptions(request, runtime);
}

DescribeSubscriptionInstanceStatusResponse Alibabacloud_Dts20160801::Client::describeSubscriptionInstanceStatusWithOptions(shared_ptr<DescribeSubscriptionInstanceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionInstanceId)) {
    query->insert(pair<string, string>("SubscriptionInstanceId", *request->subscriptionInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSubscriptionInstanceStatus"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTP"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSubscriptionInstanceStatusResponse(callApi(params, req, runtime));
}

DescribeSubscriptionInstanceStatusResponse Alibabacloud_Dts20160801::Client::describeSubscriptionInstanceStatus(shared_ptr<DescribeSubscriptionInstanceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSubscriptionInstanceStatusWithOptions(request, runtime);
}

DescribeSubscriptionInstancesResponse Alibabacloud_Dts20160801::Client::describeSubscriptionInstancesWithOptions(shared_ptr<DescribeSubscriptionInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionInstanceName)) {
    query->insert(pair<string, string>("SubscriptionInstanceName", *request->subscriptionInstanceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSubscriptionInstances"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSubscriptionInstancesResponse(callApi(params, req, runtime));
}

DescribeSubscriptionInstancesResponse Alibabacloud_Dts20160801::Client::describeSubscriptionInstances(shared_ptr<DescribeSubscriptionInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSubscriptionInstancesWithOptions(request, runtime);
}

DescribeSubscriptionObjectModifyStatusResponse Alibabacloud_Dts20160801::Client::describeSubscriptionObjectModifyStatusWithOptions(shared_ptr<DescribeSubscriptionObjectModifyStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionInstanceId)) {
    query->insert(pair<string, string>("SubscriptionInstanceId", *request->subscriptionInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSubscriptionObjectModifyStatus"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSubscriptionObjectModifyStatusResponse(callApi(params, req, runtime));
}

DescribeSubscriptionObjectModifyStatusResponse Alibabacloud_Dts20160801::Client::describeSubscriptionObjectModifyStatus(shared_ptr<DescribeSubscriptionObjectModifyStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSubscriptionObjectModifyStatusWithOptions(request, runtime);
}

DescribeSynchronizationJobStatusResponse Alibabacloud_Dts20160801::Client::describeSynchronizationJobStatusWithOptions(shared_ptr<DescribeSynchronizationJobStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobId)) {
    query->insert(pair<string, string>("SynchronizationJobId", *request->synchronizationJobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSynchronizationJobStatus"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSynchronizationJobStatusResponse(callApi(params, req, runtime));
}

DescribeSynchronizationJobStatusResponse Alibabacloud_Dts20160801::Client::describeSynchronizationJobStatus(shared_ptr<DescribeSynchronizationJobStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSynchronizationJobStatusWithOptions(request, runtime);
}

DescribeSynchronizationJobsResponse Alibabacloud_Dts20160801::Client::describeSynchronizationJobsWithOptions(shared_ptr<DescribeSynchronizationJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobName)) {
    query->insert(pair<string, string>("SynchronizationJobName", *request->synchronizationJobName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSynchronizationJobs"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSynchronizationJobsResponse(callApi(params, req, runtime));
}

DescribeSynchronizationJobsResponse Alibabacloud_Dts20160801::Client::describeSynchronizationJobs(shared_ptr<DescribeSynchronizationJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSynchronizationJobsWithOptions(request, runtime);
}

DescribeSynchronizationObjectModifyStatusResponse Alibabacloud_Dts20160801::Client::describeSynchronizationObjectModifyStatusWithOptions(shared_ptr<DescribeSynchronizationObjectModifyStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
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
    {"action", boost::any(string("DescribeSynchronizationObjectModifyStatus"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSynchronizationObjectModifyStatusResponse(callApi(params, req, runtime));
}

DescribeSynchronizationObjectModifyStatusResponse Alibabacloud_Dts20160801::Client::describeSynchronizationObjectModifyStatus(shared_ptr<DescribeSynchronizationObjectModifyStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSynchronizationObjectModifyStatusWithOptions(request, runtime);
}

ModifyConsumptionTimestampResponse Alibabacloud_Dts20160801::Client::modifyConsumptionTimestampWithOptions(shared_ptr<ModifyConsumptionTimestampRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consumptionTimestamp)) {
    query->insert(pair<string, string>("ConsumptionTimestamp", *request->consumptionTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionInstanceId)) {
    query->insert(pair<string, string>("SubscriptionInstanceId", *request->subscriptionInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyConsumptionTimestamp"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyConsumptionTimestampResponse(callApi(params, req, runtime));
}

ModifyConsumptionTimestampResponse Alibabacloud_Dts20160801::Client::modifyConsumptionTimestamp(shared_ptr<ModifyConsumptionTimestampRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyConsumptionTimestampWithOptions(request, runtime);
}

ModifyMigrationObjectResponse Alibabacloud_Dts20160801::Client::modifyMigrationObjectWithOptions(shared_ptr<ModifyMigrationObjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->migrationJobId)) {
    query->insert(pair<string, string>("MigrationJobId", *request->migrationJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->migrationObject)) {
    query->insert(pair<string, string>("MigrationObject", *request->migrationObject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyMigrationObject"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyMigrationObjectResponse(callApi(params, req, runtime));
}

ModifyMigrationObjectResponse Alibabacloud_Dts20160801::Client::modifyMigrationObject(shared_ptr<ModifyMigrationObjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyMigrationObjectWithOptions(request, runtime);
}

ModifySubscriptionObjectResponse Alibabacloud_Dts20160801::Client::modifySubscriptionObjectWithOptions(shared_ptr<ModifySubscriptionObjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionInstanceId)) {
    query->insert(pair<string, string>("SubscriptionInstanceId", *request->subscriptionInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionObject)) {
    query->insert(pair<string, string>("SubscriptionObject", *request->subscriptionObject));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifySubscriptionObject"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifySubscriptionObjectResponse(callApi(params, req, runtime));
}

ModifySubscriptionObjectResponse Alibabacloud_Dts20160801::Client::modifySubscriptionObject(shared_ptr<ModifySubscriptionObjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySubscriptionObjectWithOptions(request, runtime);
}

ModifySynchronizationObjectResponse Alibabacloud_Dts20160801::Client::modifySynchronizationObjectWithOptions(shared_ptr<ModifySynchronizationObjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobId)) {
    query->insert(pair<string, string>("SynchronizationJobId", *request->synchronizationJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationObjects)) {
    query->insert(pair<string, string>("SynchronizationObjects", *request->synchronizationObjects));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifySynchronizationObject"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifySynchronizationObjectResponse(callApi(params, req, runtime));
}

ModifySynchronizationObjectResponse Alibabacloud_Dts20160801::Client::modifySynchronizationObject(shared_ptr<ModifySynchronizationObjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySynchronizationObjectWithOptions(request, runtime);
}

StartMigrationJobResponse Alibabacloud_Dts20160801::Client::startMigrationJobWithOptions(shared_ptr<StartMigrationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->migrationJobId)) {
    query->insert(pair<string, string>("MigrationJobId", *request->migrationJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartMigrationJob"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartMigrationJobResponse(callApi(params, req, runtime));
}

StartMigrationJobResponse Alibabacloud_Dts20160801::Client::startMigrationJob(shared_ptr<StartMigrationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startMigrationJobWithOptions(request, runtime);
}

StartSubscriptionInstanceResponse Alibabacloud_Dts20160801::Client::startSubscriptionInstanceWithOptions(shared_ptr<StartSubscriptionInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionInstanceId)) {
    query->insert(pair<string, string>("SubscriptionInstanceId", *request->subscriptionInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartSubscriptionInstance"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartSubscriptionInstanceResponse(callApi(params, req, runtime));
}

StartSubscriptionInstanceResponse Alibabacloud_Dts20160801::Client::startSubscriptionInstance(shared_ptr<StartSubscriptionInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startSubscriptionInstanceWithOptions(request, runtime);
}

StartSynchronizationJobResponse Alibabacloud_Dts20160801::Client::startSynchronizationJobWithOptions(shared_ptr<StartSynchronizationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobId)) {
    query->insert(pair<string, string>("SynchronizationJobId", *request->synchronizationJobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartSynchronizationJob"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartSynchronizationJobResponse(callApi(params, req, runtime));
}

StartSynchronizationJobResponse Alibabacloud_Dts20160801::Client::startSynchronizationJob(shared_ptr<StartSynchronizationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startSynchronizationJobWithOptions(request, runtime);
}

StopMigrationJobResponse Alibabacloud_Dts20160801::Client::stopMigrationJobWithOptions(shared_ptr<StopMigrationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->migrationJobId)) {
    query->insert(pair<string, string>("MigrationJobId", *request->migrationJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopMigrationJob"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopMigrationJobResponse(callApi(params, req, runtime));
}

StopMigrationJobResponse Alibabacloud_Dts20160801::Client::stopMigrationJob(shared_ptr<StopMigrationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopMigrationJobWithOptions(request, runtime);
}

SuspendMigrationJobResponse Alibabacloud_Dts20160801::Client::suspendMigrationJobWithOptions(shared_ptr<SuspendMigrationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->migrationJobId)) {
    query->insert(pair<string, string>("MigrationJobId", *request->migrationJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SuspendMigrationJob"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SuspendMigrationJobResponse(callApi(params, req, runtime));
}

SuspendMigrationJobResponse Alibabacloud_Dts20160801::Client::suspendMigrationJob(shared_ptr<SuspendMigrationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return suspendMigrationJobWithOptions(request, runtime);
}

SuspendSynchronizationJobResponse Alibabacloud_Dts20160801::Client::suspendSynchronizationJobWithOptions(shared_ptr<SuspendSynchronizationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobId)) {
    query->insert(pair<string, string>("SynchronizationJobId", *request->synchronizationJobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SuspendSynchronizationJob"))},
    {"version", boost::any(string("2016-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SuspendSynchronizationJobResponse(callApi(params, req, runtime));
}

SuspendSynchronizationJobResponse Alibabacloud_Dts20160801::Client::suspendSynchronizationJob(shared_ptr<SuspendSynchronizationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return suspendSynchronizationJobWithOptions(request, runtime);
}

