// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dts_20190901.hpp>
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

using namespace Alibabacloud_Dts20190901;

Alibabacloud_Dts20190901::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
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

string Alibabacloud_Dts20190901::Client::getEndpoint(shared_ptr<string> productId,
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

ConfigureSynchronizationJobResponse Alibabacloud_Dts20190901::Client::configureSynchronizationJobWithOptions(shared_ptr<ConfigureSynchronizationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationDirection)) {
    query->insert(pair<string, string>("SynchronizationDirection", *request->synchronizationDirection));
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
    {"version", boost::any(string("2019-09-01"))},
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

ConfigureSynchronizationJobResponse Alibabacloud_Dts20190901::Client::configureSynchronizationJob(shared_ptr<ConfigureSynchronizationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return configureSynchronizationJobWithOptions(request, runtime);
}

ConfigureSynchronizationJobAlertResponse Alibabacloud_Dts20190901::Client::configureSynchronizationJobAlertWithOptions(shared_ptr<ConfigureSynchronizationJobAlertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->delayAlertPhone)) {
    query->insert(pair<string, string>("DelayAlertPhone", *request->delayAlertPhone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->delayAlertStatus)) {
    query->insert(pair<string, string>("DelayAlertStatus", *request->delayAlertStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->delayOverSeconds)) {
    query->insert(pair<string, string>("DelayOverSeconds", *request->delayOverSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->errorAlertPhone)) {
    query->insert(pair<string, string>("ErrorAlertPhone", *request->errorAlertPhone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->errorAlertStatus)) {
    query->insert(pair<string, string>("ErrorAlertStatus", *request->errorAlertStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationDirection)) {
    query->insert(pair<string, string>("SynchronizationDirection", *request->synchronizationDirection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobId)) {
    query->insert(pair<string, string>("SynchronizationJobId", *request->synchronizationJobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfigureSynchronizationJobAlert"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfigureSynchronizationJobAlertResponse(callApi(params, req, runtime));
}

ConfigureSynchronizationJobAlertResponse Alibabacloud_Dts20190901::Client::configureSynchronizationJobAlert(shared_ptr<ConfigureSynchronizationJobAlertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return configureSynchronizationJobAlertWithOptions(request, runtime);
}

CreateSynchronizationJobResponse Alibabacloud_Dts20190901::Client::createSynchronizationJobWithOptions(shared_ptr<CreateSynchronizationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->topology)) {
    query->insert(pair<string, string>("Topology", *request->topology));
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
    {"version", boost::any(string("2019-09-01"))},
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

CreateSynchronizationJobResponse Alibabacloud_Dts20190901::Client::createSynchronizationJob(shared_ptr<CreateSynchronizationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSynchronizationJobWithOptions(request, runtime);
}

DeleteSynchronizationJobResponse Alibabacloud_Dts20190901::Client::deleteSynchronizationJobWithOptions(shared_ptr<DeleteSynchronizationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2019-09-01"))},
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

DeleteSynchronizationJobResponse Alibabacloud_Dts20190901::Client::deleteSynchronizationJob(shared_ptr<DeleteSynchronizationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSynchronizationJobWithOptions(request, runtime);
}

DescribeEndpointSwitchStatusResponse Alibabacloud_Dts20190901::Client::describeEndpointSwitchStatusWithOptions(shared_ptr<DescribeEndpointSwitchStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeEndpointSwitchStatus"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEndpointSwitchStatusResponse(callApi(params, req, runtime));
}

DescribeEndpointSwitchStatusResponse Alibabacloud_Dts20190901::Client::describeEndpointSwitchStatus(shared_ptr<DescribeEndpointSwitchStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEndpointSwitchStatusWithOptions(request, runtime);
}

DescribeSynchronizationJobAlertResponse Alibabacloud_Dts20190901::Client::describeSynchronizationJobAlertWithOptions(shared_ptr<DescribeSynchronizationJobAlertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationDirection)) {
    query->insert(pair<string, string>("SynchronizationDirection", *request->synchronizationDirection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobId)) {
    query->insert(pair<string, string>("SynchronizationJobId", *request->synchronizationJobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSynchronizationJobAlert"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSynchronizationJobAlertResponse(callApi(params, req, runtime));
}

DescribeSynchronizationJobAlertResponse Alibabacloud_Dts20190901::Client::describeSynchronizationJobAlert(shared_ptr<DescribeSynchronizationJobAlertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSynchronizationJobAlertWithOptions(request, runtime);
}

DescribeSynchronizationJobStatusResponse Alibabacloud_Dts20190901::Client::describeSynchronizationJobStatusWithOptions(shared_ptr<DescribeSynchronizationJobStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationDirection)) {
    query->insert(pair<string, string>("SynchronizationDirection", *request->synchronizationDirection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobId)) {
    query->insert(pair<string, string>("SynchronizationJobId", *request->synchronizationJobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSynchronizationJobStatus"))},
    {"version", boost::any(string("2019-09-01"))},
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

DescribeSynchronizationJobStatusResponse Alibabacloud_Dts20190901::Client::describeSynchronizationJobStatus(shared_ptr<DescribeSynchronizationJobStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSynchronizationJobStatusWithOptions(request, runtime);
}

DescribeSynchronizationJobsResponse Alibabacloud_Dts20190901::Client::describeSynchronizationJobsWithOptions(shared_ptr<DescribeSynchronizationJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2019-09-01"))},
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

DescribeSynchronizationJobsResponse Alibabacloud_Dts20190901::Client::describeSynchronizationJobs(shared_ptr<DescribeSynchronizationJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSynchronizationJobsWithOptions(request, runtime);
}

DescribeSynchronizationObjectModifyStatusResponse Alibabacloud_Dts20190901::Client::describeSynchronizationObjectModifyStatusWithOptions(shared_ptr<DescribeSynchronizationObjectModifyStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2019-09-01"))},
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

DescribeSynchronizationObjectModifyStatusResponse Alibabacloud_Dts20190901::Client::describeSynchronizationObjectModifyStatus(shared_ptr<DescribeSynchronizationObjectModifyStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSynchronizationObjectModifyStatusWithOptions(request, runtime);
}

ModifySynchronizationObjectResponse Alibabacloud_Dts20190901::Client::modifySynchronizationObjectWithOptions(shared_ptr<ModifySynchronizationObjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationDirection)) {
    query->insert(pair<string, string>("SynchronizationDirection", *request->synchronizationDirection));
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
    {"version", boost::any(string("2019-09-01"))},
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

ModifySynchronizationObjectResponse Alibabacloud_Dts20190901::Client::modifySynchronizationObject(shared_ptr<ModifySynchronizationObjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySynchronizationObjectWithOptions(request, runtime);
}

ResetSynchronizationJobResponse Alibabacloud_Dts20190901::Client::resetSynchronizationJobWithOptions(shared_ptr<ResetSynchronizationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationDirection)) {
    query->insert(pair<string, string>("SynchronizationDirection", *request->synchronizationDirection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobId)) {
    query->insert(pair<string, string>("SynchronizationJobId", *request->synchronizationJobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetSynchronizationJob"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetSynchronizationJobResponse(callApi(params, req, runtime));
}

ResetSynchronizationJobResponse Alibabacloud_Dts20190901::Client::resetSynchronizationJob(shared_ptr<ResetSynchronizationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetSynchronizationJobWithOptions(request, runtime);
}

StartSynchronizationJobResponse Alibabacloud_Dts20190901::Client::startSynchronizationJobWithOptions(shared_ptr<StartSynchronizationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationDirection)) {
    query->insert(pair<string, string>("SynchronizationDirection", *request->synchronizationDirection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobId)) {
    query->insert(pair<string, string>("SynchronizationJobId", *request->synchronizationJobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartSynchronizationJob"))},
    {"version", boost::any(string("2019-09-01"))},
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

StartSynchronizationJobResponse Alibabacloud_Dts20190901::Client::startSynchronizationJob(shared_ptr<StartSynchronizationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startSynchronizationJobWithOptions(request, runtime);
}

SuspendSynchronizationJobResponse Alibabacloud_Dts20190901::Client::suspendSynchronizationJobWithOptions(shared_ptr<SuspendSynchronizationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationDirection)) {
    query->insert(pair<string, string>("SynchronizationDirection", *request->synchronizationDirection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobId)) {
    query->insert(pair<string, string>("SynchronizationJobId", *request->synchronizationJobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SuspendSynchronizationJob"))},
    {"version", boost::any(string("2019-09-01"))},
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

SuspendSynchronizationJobResponse Alibabacloud_Dts20190901::Client::suspendSynchronizationJob(shared_ptr<SuspendSynchronizationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return suspendSynchronizationJobWithOptions(request, runtime);
}

SwitchSynchronizationEndpointResponse Alibabacloud_Dts20190901::Client::switchSynchronizationEndpointWithOptions(shared_ptr<SwitchSynchronizationEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationDirection)) {
    query->insert(pair<string, string>("SynchronizationDirection", *request->synchronizationDirection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobId)) {
    query->insert(pair<string, string>("SynchronizationJobId", *request->synchronizationJobId));
  }
  if (!Darabonba_Util::Client::isUnset<SwitchSynchronizationEndpointRequestEndpoint>(request->endpoint)) {
    query->insert(pair<string, SwitchSynchronizationEndpointRequestEndpoint>("Endpoint", *request->endpoint));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SwitchSynchronizationEndpoint"))},
    {"version", boost::any(string("2019-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SwitchSynchronizationEndpointResponse(callApi(params, req, runtime));
}

SwitchSynchronizationEndpointResponse Alibabacloud_Dts20190901::Client::switchSynchronizationEndpoint(shared_ptr<SwitchSynchronizationEndpointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchSynchronizationEndpointWithOptions(request, runtime);
}

