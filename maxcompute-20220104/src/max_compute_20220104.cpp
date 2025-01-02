// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/max_compute_20220104.hpp>
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

using namespace Alibabacloud_MaxCompute20220104;

Alibabacloud_MaxCompute20220104::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-1", "maxcompute.aliyuncs.com"},
    {"ap-northeast-2-pop", "maxcompute.aliyuncs.com"},
    {"ap-south-1", "maxcompute.aliyuncs.com"},
    {"ap-southeast-1", "maxcompute.aliyuncs.com"},
    {"ap-southeast-2", "maxcompute.aliyuncs.com"},
    {"ap-southeast-3", "maxcompute.aliyuncs.com"},
    {"ap-southeast-5", "maxcompute.aliyuncs.com"},
    {"cn-beijing", "maxcompute.aliyuncs.com"},
    {"cn-beijing-finance-1", "maxcompute.aliyuncs.com"},
    {"cn-beijing-finance-pop", "maxcompute.aliyuncs.com"},
    {"cn-beijing-gov-1", "maxcompute.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "maxcompute.aliyuncs.com"},
    {"cn-chengdu", "maxcompute.aliyuncs.com"},
    {"cn-edge-1", "maxcompute.aliyuncs.com"},
    {"cn-fujian", "maxcompute.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "maxcompute.aliyuncs.com"},
    {"cn-hangzhou", "maxcompute.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "maxcompute.aliyuncs.com"},
    {"cn-hangzhou-finance", "maxcompute.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "maxcompute.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "maxcompute.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "maxcompute.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "maxcompute.aliyuncs.com"},
    {"cn-hangzhou-test-306", "maxcompute.aliyuncs.com"},
    {"cn-hongkong", "maxcompute.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "maxcompute.aliyuncs.com"},
    {"cn-huhehaote", "maxcompute.aliyuncs.com"},
    {"cn-north-2-gov-1", "maxcompute.aliyuncs.com"},
    {"cn-qingdao", "maxcompute.aliyuncs.com"},
    {"cn-qingdao-nebula", "maxcompute.aliyuncs.com"},
    {"cn-shanghai", "maxcompute.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "maxcompute.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "maxcompute.aliyuncs.com"},
    {"cn-shanghai-finance-1", "maxcompute.aliyuncs.com"},
    {"cn-shanghai-inner", "maxcompute.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "maxcompute.aliyuncs.com"},
    {"cn-shenzhen", "maxcompute.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "maxcompute.aliyuncs.com"},
    {"cn-shenzhen-inner", "maxcompute.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "maxcompute.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "maxcompute.aliyuncs.com"},
    {"cn-wuhan", "maxcompute.aliyuncs.com"},
    {"cn-yushanfang", "maxcompute.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "maxcompute.aliyuncs.com"},
    {"cn-zhangjiakou", "maxcompute.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "maxcompute.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "maxcompute.aliyuncs.com"},
    {"eu-central-1", "maxcompute.aliyuncs.com"},
    {"eu-west-1", "maxcompute.aliyuncs.com"},
    {"eu-west-1-oxs", "maxcompute.aliyuncs.com"},
    {"me-east-1", "maxcompute.aliyuncs.com"},
    {"rus-west-1-pop", "maxcompute.aliyuncs.com"},
    {"us-east-1", "maxcompute.aliyuncs.com"},
    {"us-west-1", "maxcompute.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("maxcompute"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_MaxCompute20220104::Client::getEndpoint(shared_ptr<string> productId,
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

ApplyComputeQuotaPlanResponse Alibabacloud_MaxCompute20220104::Client::applyComputeQuotaPlanWithOptions(shared_ptr<string> nickname,
                                                                                                        shared_ptr<string> planName,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyComputeQuotaPlan"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/quotas/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(nickname)) + string("/computeQuotaPlan/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(planName)) + string("/apply"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyComputeQuotaPlanResponse(callApi(params, req, runtime));
}

ApplyComputeQuotaPlanResponse Alibabacloud_MaxCompute20220104::Client::applyComputeQuotaPlan(shared_ptr<string> nickname, shared_ptr<string> planName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return applyComputeQuotaPlanWithOptions(nickname, planName, headers, runtime);
}

CreateComputeQuotaPlanResponse Alibabacloud_MaxCompute20220104::Client::createComputeQuotaPlanWithOptions(shared_ptr<string> nickname,
                                                                                                          shared_ptr<CreateComputeQuotaPlanRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<CreateComputeQuotaPlanRequestQuota>(request->quota)) {
    body->insert(pair<string, CreateComputeQuotaPlanRequestQuota>("quota", *request->quota));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateComputeQuotaPlan"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/quotas/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(nickname)) + string("/computeQuotaPlan"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateComputeQuotaPlanResponse(callApi(params, req, runtime));
}

CreateComputeQuotaPlanResponse Alibabacloud_MaxCompute20220104::Client::createComputeQuotaPlan(shared_ptr<string> nickname, shared_ptr<CreateComputeQuotaPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createComputeQuotaPlanWithOptions(nickname, request, headers, runtime);
}

CreateMmsDataSourceResponse Alibabacloud_MaxCompute20220104::Client::createMmsDataSourceWithOptions(shared_ptr<CreateMmsDataSourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->config)) {
    body->insert(pair<string, map<string, boost::any>>("config", *request->config));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networklink)) {
    body->insert(pair<string, string>("networklink", *request->networklink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMmsDataSource"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/mms/datasources"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMmsDataSourceResponse(callApi(params, req, runtime));
}

CreateMmsDataSourceResponse Alibabacloud_MaxCompute20220104::Client::createMmsDataSource(shared_ptr<CreateMmsDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createMmsDataSourceWithOptions(request, headers, runtime);
}

CreateMmsFetchMetadataJobResponse Alibabacloud_MaxCompute20220104::Client::createMmsFetchMetadataJobWithOptions(shared_ptr<string> sourceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMmsFetchMetadataJob"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/mms/datasources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sourceId)) + string("/scans"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMmsFetchMetadataJobResponse(callApi(params, req, runtime));
}

CreateMmsFetchMetadataJobResponse Alibabacloud_MaxCompute20220104::Client::createMmsFetchMetadataJob(shared_ptr<string> sourceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createMmsFetchMetadataJobWithOptions(sourceId, headers, runtime);
}

CreateMmsJobResponse Alibabacloud_MaxCompute20220104::Client::createMmsJobWithOptions(shared_ptr<string> sourceId,
                                                                                      shared_ptr<CreateMmsJobRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(request->columnMapping)) {
    body->insert(pair<string, map<string, string>>("columnMapping", *request->columnMapping));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dstDbName)) {
    body->insert(pair<string, string>("dstDbName", *request->dstDbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dstSchemaName)) {
    body->insert(pair<string, string>("dstSchemaName", *request->dstSchemaName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableVerification)) {
    body->insert(pair<string, bool>("enableVerification", *request->enableVerification));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->increment)) {
    body->insert(pair<string, bool>("increment", *request->increment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->others)) {
    body->insert(pair<string, map<string, boost::any>>("others", *request->others));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(request->partitionFilters)) {
    body->insert(pair<string, map<string, string>>("partitionFilters", *request->partitionFilters));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->partitions)) {
    body->insert(pair<string, vector<long>>("partitions", *request->partitions));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->schemaOnly)) {
    body->insert(pair<string, bool>("schemaOnly", *request->schemaOnly));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sourceId)) {
    body->insert(pair<string, long>("sourceId", *request->sourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceName)) {
    body->insert(pair<string, string>("sourceName", *request->sourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcDbName)) {
    body->insert(pair<string, string>("srcDbName", *request->srcDbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcSchemaName)) {
    body->insert(pair<string, string>("srcSchemaName", *request->srcSchemaName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tableBlackList)) {
    body->insert(pair<string, vector<string>>("tableBlackList", *request->tableBlackList));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(request->tableMapping)) {
    body->insert(pair<string, map<string, string>>("tableMapping", *request->tableMapping));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tableWhiteList)) {
    body->insert(pair<string, vector<string>>("tableWhiteList", *request->tableWhiteList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tables)) {
    body->insert(pair<string, vector<string>>("tables", *request->tables));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    body->insert(pair<string, string>("taskType", *request->taskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMmsJob"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/mms/datasources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sourceId)) + string("/jobs"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMmsJobResponse(callApi(params, req, runtime));
}

CreateMmsJobResponse Alibabacloud_MaxCompute20220104::Client::createMmsJob(shared_ptr<string> sourceId, shared_ptr<CreateMmsJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createMmsJobWithOptions(sourceId, request, headers, runtime);
}

CreatePackageResponse Alibabacloud_MaxCompute20220104::Client::createPackageWithOptions(shared_ptr<string> projectName,
                                                                                        shared_ptr<CreatePackageRequest> request,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->isInstall)) {
    query->insert(pair<string, bool>("isInstall", *request->isInstall));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePackage"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectName)) + string("/packages"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePackageResponse(callApi(params, req, runtime));
}

CreatePackageResponse Alibabacloud_MaxCompute20220104::Client::createPackage(shared_ptr<string> projectName, shared_ptr<CreatePackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createPackageWithOptions(projectName, request, headers, runtime);
}

CreateProjectResponse Alibabacloud_MaxCompute20220104::Client::createProjectWithOptions(shared_ptr<CreateProjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProject"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/projects"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProjectResponse(callApi(params, req, runtime));
}

CreateProjectResponse Alibabacloud_MaxCompute20220104::Client::createProject(shared_ptr<CreateProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createProjectWithOptions(request, headers, runtime);
}

CreateQuotaPlanResponse Alibabacloud_MaxCompute20220104::Client::createQuotaPlanWithOptions(shared_ptr<string> nickname,
                                                                                            shared_ptr<CreateQuotaPlanRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    query->insert(pair<string, string>("tenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateQuotaPlan"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/quotas/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(nickname)) + string("/plans"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateQuotaPlanResponse(callApi(params, req, runtime));
}

CreateQuotaPlanResponse Alibabacloud_MaxCompute20220104::Client::createQuotaPlan(shared_ptr<string> nickname, shared_ptr<CreateQuotaPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createQuotaPlanWithOptions(nickname, request, headers, runtime);
}

CreateRoleResponse Alibabacloud_MaxCompute20220104::Client::createRoleWithOptions(shared_ptr<string> projectName,
                                                                                  shared_ptr<CreateRoleRequest> request,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRole"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectName)) + string("/roles"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRoleResponse(callApi(params, req, runtime));
}

CreateRoleResponse Alibabacloud_MaxCompute20220104::Client::createRole(shared_ptr<string> projectName, shared_ptr<CreateRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createRoleWithOptions(projectName, request, headers, runtime);
}

DeleteComputeQuotaPlanResponse Alibabacloud_MaxCompute20220104::Client::deleteComputeQuotaPlanWithOptions(shared_ptr<string> nickname,
                                                                                                          shared_ptr<string> planName,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteComputeQuotaPlan"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/quotas/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(nickname)) + string("/computeQuotaPlan/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(planName)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteComputeQuotaPlanResponse(callApi(params, req, runtime));
}

DeleteComputeQuotaPlanResponse Alibabacloud_MaxCompute20220104::Client::deleteComputeQuotaPlan(shared_ptr<string> nickname, shared_ptr<string> planName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteComputeQuotaPlanWithOptions(nickname, planName, headers, runtime);
}

DeleteMmsDataSourceResponse Alibabacloud_MaxCompute20220104::Client::deleteMmsDataSourceWithOptions(shared_ptr<string> sourceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMmsDataSource"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/mms/datasources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sourceId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMmsDataSourceResponse(callApi(params, req, runtime));
}

DeleteMmsDataSourceResponse Alibabacloud_MaxCompute20220104::Client::deleteMmsDataSource(shared_ptr<string> sourceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteMmsDataSourceWithOptions(sourceId, headers, runtime);
}

DeleteMmsJobResponse Alibabacloud_MaxCompute20220104::Client::deleteMmsJobWithOptions(shared_ptr<string> sourceId,
                                                                                      shared_ptr<string> jobId,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMmsJob"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/mms/datasources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sourceId)) + string("/jobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(jobId)))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMmsJobResponse(callApi(params, req, runtime));
}

DeleteMmsJobResponse Alibabacloud_MaxCompute20220104::Client::deleteMmsJob(shared_ptr<string> sourceId, shared_ptr<string> jobId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteMmsJobWithOptions(sourceId, jobId, headers, runtime);
}

DeleteQuotaPlanResponse Alibabacloud_MaxCompute20220104::Client::deleteQuotaPlanWithOptions(shared_ptr<string> nickname,
                                                                                            shared_ptr<string> planName,
                                                                                            shared_ptr<DeleteQuotaPlanRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    query->insert(pair<string, string>("tenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteQuotaPlan"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/quotas/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(nickname)) + string("/plans/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(planName)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteQuotaPlanResponse(callApi(params, req, runtime));
}

DeleteQuotaPlanResponse Alibabacloud_MaxCompute20220104::Client::deleteQuotaPlan(shared_ptr<string> nickname, shared_ptr<string> planName, shared_ptr<DeleteQuotaPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteQuotaPlanWithOptions(nickname, planName, request, headers, runtime);
}

GetComputeEffectivePlanResponse Alibabacloud_MaxCompute20220104::Client::getComputeEffectivePlanWithOptions(shared_ptr<string> nickname, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetComputeEffectivePlan"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/quotas/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(nickname)) + string("/computeEffectivePlan/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetComputeEffectivePlanResponse(callApi(params, req, runtime));
}

GetComputeEffectivePlanResponse Alibabacloud_MaxCompute20220104::Client::getComputeEffectivePlan(shared_ptr<string> nickname) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getComputeEffectivePlanWithOptions(nickname, headers, runtime);
}

GetComputeQuotaPlanResponse Alibabacloud_MaxCompute20220104::Client::getComputeQuotaPlanWithOptions(shared_ptr<string> nickname,
                                                                                                    shared_ptr<string> planName,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetComputeQuotaPlan"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/quotas/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(nickname)) + string("/computeQuotaPlan/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(planName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetComputeQuotaPlanResponse(callApi(params, req, runtime));
}

GetComputeQuotaPlanResponse Alibabacloud_MaxCompute20220104::Client::getComputeQuotaPlan(shared_ptr<string> nickname, shared_ptr<string> planName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getComputeQuotaPlanWithOptions(nickname, planName, headers, runtime);
}

GetComputeQuotaScheduleResponse Alibabacloud_MaxCompute20220104::Client::getComputeQuotaScheduleWithOptions(shared_ptr<string> nickname,
                                                                                                            shared_ptr<GetComputeQuotaScheduleRequest> request,
                                                                                                            shared_ptr<map<string, string>> headers,
                                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->displayTimezone)) {
    query->insert(pair<string, string>("displayTimezone", *request->displayTimezone));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetComputeQuotaSchedule"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/quotas/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(nickname)) + string("/computeQuotaSchedule"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetComputeQuotaScheduleResponse(callApi(params, req, runtime));
}

GetComputeQuotaScheduleResponse Alibabacloud_MaxCompute20220104::Client::getComputeQuotaSchedule(shared_ptr<string> nickname, shared_ptr<GetComputeQuotaScheduleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getComputeQuotaScheduleWithOptions(nickname, request, headers, runtime);
}

GetJobResourceUsageResponse Alibabacloud_MaxCompute20220104::Client::getJobResourceUsageWithOptions(shared_ptr<GetJobResourceUsageRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetJobResourceUsageShrinkRequest> request = make_shared<GetJobResourceUsageShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->jobOwnerList)) {
    request->jobOwnerListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->jobOwnerList, make_shared<string>("jobOwnerList"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->quotaNicknameList)) {
    request->quotaNicknameListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->quotaNicknameList, make_shared<string>("quotaNicknameList"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->date)) {
    query->insert(pair<string, string>("date", *request->date));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobOwnerListShrink)) {
    query->insert(pair<string, string>("jobOwnerList", *request->jobOwnerListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaNicknameListShrink)) {
    query->insert(pair<string, string>("quotaNicknameList", *request->quotaNicknameListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetJobResourceUsage"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/jobs/resourceUsage"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetJobResourceUsageResponse(callApi(params, req, runtime));
}

GetJobResourceUsageResponse Alibabacloud_MaxCompute20220104::Client::getJobResourceUsage(shared_ptr<GetJobResourceUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getJobResourceUsageWithOptions(request, headers, runtime);
}

GetMmsAsyncTaskResponse Alibabacloud_MaxCompute20220104::Client::getMmsAsyncTaskWithOptions(shared_ptr<string> sourceId,
                                                                                            shared_ptr<string> asyncTaskId,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMmsAsyncTask"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/mms/datasources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sourceId)) + string("/asyncTasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(asyncTaskId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMmsAsyncTaskResponse(callApi(params, req, runtime));
}

GetMmsAsyncTaskResponse Alibabacloud_MaxCompute20220104::Client::getMmsAsyncTask(shared_ptr<string> sourceId, shared_ptr<string> asyncTaskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getMmsAsyncTaskWithOptions(sourceId, asyncTaskId, headers, runtime);
}

GetMmsDataSourceResponse Alibabacloud_MaxCompute20220104::Client::getMmsDataSourceWithOptions(shared_ptr<string> sourceId,
                                                                                              shared_ptr<GetMmsDataSourceRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withConfig)) {
    query->insert(pair<string, bool>("withConfig", *request->withConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMmsDataSource"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/mms/datasources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sourceId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMmsDataSourceResponse(callApi(params, req, runtime));
}

GetMmsDataSourceResponse Alibabacloud_MaxCompute20220104::Client::getMmsDataSource(shared_ptr<string> sourceId, shared_ptr<GetMmsDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getMmsDataSourceWithOptions(sourceId, request, headers, runtime);
}

GetMmsDbResponse Alibabacloud_MaxCompute20220104::Client::getMmsDbWithOptions(shared_ptr<string> sourceId,
                                                                              shared_ptr<string> dbId,
                                                                              shared_ptr<map<string, string>> headers,
                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMmsDb"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/mms/datasources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sourceId)) + string("/dbs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(dbId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMmsDbResponse(callApi(params, req, runtime));
}

GetMmsDbResponse Alibabacloud_MaxCompute20220104::Client::getMmsDb(shared_ptr<string> sourceId, shared_ptr<string> dbId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getMmsDbWithOptions(sourceId, dbId, headers, runtime);
}

GetMmsFetchMetadataJobResponse Alibabacloud_MaxCompute20220104::Client::getMmsFetchMetadataJobWithOptions(shared_ptr<string> sourceId,
                                                                                                          shared_ptr<string> scanId,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMmsFetchMetadataJob"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/mms/datasources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sourceId)) + string("/scans/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(scanId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMmsFetchMetadataJobResponse(callApi(params, req, runtime));
}

GetMmsFetchMetadataJobResponse Alibabacloud_MaxCompute20220104::Client::getMmsFetchMetadataJob(shared_ptr<string> sourceId, shared_ptr<string> scanId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getMmsFetchMetadataJobWithOptions(sourceId, scanId, headers, runtime);
}

GetMmsJobResponse Alibabacloud_MaxCompute20220104::Client::getMmsJobWithOptions(shared_ptr<string> sourceId,
                                                                                shared_ptr<string> jobId,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMmsJob"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/mms/datasources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sourceId)) + string("/jobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(jobId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMmsJobResponse(callApi(params, req, runtime));
}

GetMmsJobResponse Alibabacloud_MaxCompute20220104::Client::getMmsJob(shared_ptr<string> sourceId, shared_ptr<string> jobId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getMmsJobWithOptions(sourceId, jobId, headers, runtime);
}

GetMmsPartitionResponse Alibabacloud_MaxCompute20220104::Client::getMmsPartitionWithOptions(shared_ptr<string> sourceId,
                                                                                            shared_ptr<string> partitionId,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMmsPartition"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/mms/datasources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sourceId)) + string("/partitions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(partitionId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMmsPartitionResponse(callApi(params, req, runtime));
}

GetMmsPartitionResponse Alibabacloud_MaxCompute20220104::Client::getMmsPartition(shared_ptr<string> sourceId, shared_ptr<string> partitionId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getMmsPartitionWithOptions(sourceId, partitionId, headers, runtime);
}

GetMmsTableResponse Alibabacloud_MaxCompute20220104::Client::getMmsTableWithOptions(shared_ptr<string> sourceId,
                                                                                    shared_ptr<string> tableId,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMmsTable"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/mms/datasources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sourceId)) + string("/tables/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(tableId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMmsTableResponse(callApi(params, req, runtime));
}

GetMmsTableResponse Alibabacloud_MaxCompute20220104::Client::getMmsTable(shared_ptr<string> sourceId, shared_ptr<string> tableId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getMmsTableWithOptions(sourceId, tableId, headers, runtime);
}

GetMmsTaskResponse Alibabacloud_MaxCompute20220104::Client::getMmsTaskWithOptions(shared_ptr<string> sourceId,
                                                                                  shared_ptr<string> taskId,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMmsTask"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/mms/datasources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sourceId)) + string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(taskId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMmsTaskResponse(callApi(params, req, runtime));
}

GetMmsTaskResponse Alibabacloud_MaxCompute20220104::Client::getMmsTask(shared_ptr<string> sourceId, shared_ptr<string> taskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getMmsTaskWithOptions(sourceId, taskId, headers, runtime);
}

GetPackageResponse Alibabacloud_MaxCompute20220104::Client::getPackageWithOptions(shared_ptr<string> projectName,
                                                                                  shared_ptr<string> packageName,
                                                                                  shared_ptr<GetPackageRequest> request,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceProject)) {
    query->insert(pair<string, string>("sourceProject", *request->sourceProject));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPackage"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectName)) + string("/packages/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(packageName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPackageResponse(callApi(params, req, runtime));
}

GetPackageResponse Alibabacloud_MaxCompute20220104::Client::getPackage(shared_ptr<string> projectName, shared_ptr<string> packageName, shared_ptr<GetPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getPackageWithOptions(projectName, packageName, request, headers, runtime);
}

GetProjectResponse Alibabacloud_MaxCompute20220104::Client::getProjectWithOptions(shared_ptr<string> projectName,
                                                                                  shared_ptr<GetProjectRequest> request,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->verbose)) {
    query->insert(pair<string, bool>("verbose", *request->verbose));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProject"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProjectResponse(callApi(params, req, runtime));
}

GetProjectResponse Alibabacloud_MaxCompute20220104::Client::getProject(shared_ptr<string> projectName, shared_ptr<GetProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProjectWithOptions(projectName, request, headers, runtime);
}

GetQuotaResponse Alibabacloud_MaxCompute20220104::Client::getQuotaWithOptions(shared_ptr<string> nickname,
                                                                              shared_ptr<GetQuotaRequest> request,
                                                                              shared_ptr<map<string, string>> headers,
                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->akProven)) {
    query->insert(pair<string, string>("AkProven", *request->akProven));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->mock)) {
    query->insert(pair<string, bool>("mock", *request->mock));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    query->insert(pair<string, string>("tenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQuota"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/quotas/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(nickname)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQuotaResponse(callApi(params, req, runtime));
}

GetQuotaResponse Alibabacloud_MaxCompute20220104::Client::getQuota(shared_ptr<string> nickname, shared_ptr<GetQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getQuotaWithOptions(nickname, request, headers, runtime);
}

GetQuotaPlanResponse Alibabacloud_MaxCompute20220104::Client::getQuotaPlanWithOptions(shared_ptr<string> nickname,
                                                                                      shared_ptr<string> planName,
                                                                                      shared_ptr<GetQuotaPlanRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    query->insert(pair<string, string>("tenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQuotaPlan"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/quotas/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(nickname)) + string("/plans/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(planName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQuotaPlanResponse(callApi(params, req, runtime));
}

GetQuotaPlanResponse Alibabacloud_MaxCompute20220104::Client::getQuotaPlan(shared_ptr<string> nickname, shared_ptr<string> planName, shared_ptr<GetQuotaPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getQuotaPlanWithOptions(nickname, planName, request, headers, runtime);
}

GetQuotaScheduleResponse Alibabacloud_MaxCompute20220104::Client::getQuotaScheduleWithOptions(shared_ptr<string> nickname,
                                                                                              shared_ptr<GetQuotaScheduleRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->displayTimezone)) {
    query->insert(pair<string, string>("displayTimezone", *request->displayTimezone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    query->insert(pair<string, string>("tenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQuotaSchedule"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/quotas/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(nickname)) + string("/schedule"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQuotaScheduleResponse(callApi(params, req, runtime));
}

GetQuotaScheduleResponse Alibabacloud_MaxCompute20220104::Client::getQuotaSchedule(shared_ptr<string> nickname, shared_ptr<GetQuotaScheduleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getQuotaScheduleWithOptions(nickname, request, headers, runtime);
}

GetQuotaUsageResponse Alibabacloud_MaxCompute20220104::Client::getQuotaUsageWithOptions(shared_ptr<string> nickname,
                                                                                        shared_ptr<GetQuotaUsageRequest> tmpReq,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetQuotaUsageShrinkRequest> request = make_shared<GetQuotaUsageShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->plotTypes)) {
    request->plotTypesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->plotTypes, make_shared<string>("plotTypes"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->yAxisTypes)) {
    request->yAxisTypesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->yAxisTypes, make_shared<string>("yAxisTypes"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggMethod)) {
    query->insert(pair<string, string>("aggMethod", *request->aggMethod));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->from)) {
    query->insert(pair<string, long>("from", *request->from));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->plotTypesShrink)) {
    query->insert(pair<string, string>("plotTypes", *request->plotTypesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productId)) {
    query->insert(pair<string, string>("productId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subQuotaNickname)) {
    query->insert(pair<string, string>("subQuotaNickname", *request->subQuotaNickname));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    query->insert(pair<string, string>("tenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->to)) {
    query->insert(pair<string, long>("to", *request->to));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->yAxisTypesShrink)) {
    query->insert(pair<string, string>("yAxisTypes", *request->yAxisTypesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQuotaUsage"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/quotas/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(nickname)) + string("/usage"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQuotaUsageResponse(callApi(params, req, runtime));
}

GetQuotaUsageResponse Alibabacloud_MaxCompute20220104::Client::getQuotaUsage(shared_ptr<string> nickname, shared_ptr<GetQuotaUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getQuotaUsageWithOptions(nickname, request, headers, runtime);
}

GetRoleAclResponse Alibabacloud_MaxCompute20220104::Client::getRoleAclWithOptions(shared_ptr<string> projectName,
                                                                                  shared_ptr<string> roleName,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRoleAcl"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectName)) + string("/roles/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(roleName)) + string("/roleAcl"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRoleAclResponse(callApi(params, req, runtime));
}

GetRoleAclResponse Alibabacloud_MaxCompute20220104::Client::getRoleAcl(shared_ptr<string> projectName, shared_ptr<string> roleName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRoleAclWithOptions(projectName, roleName, headers, runtime);
}

GetRoleAclOnObjectResponse Alibabacloud_MaxCompute20220104::Client::getRoleAclOnObjectWithOptions(shared_ptr<string> projectName,
                                                                                                  shared_ptr<string> roleName,
                                                                                                  shared_ptr<GetRoleAclOnObjectRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->objectName)) {
    query->insert(pair<string, string>("objectName", *request->objectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectType)) {
    query->insert(pair<string, string>("objectType", *request->objectType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRoleAclOnObject"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectName)) + string("/roles/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(roleName)) + string("/acl"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRoleAclOnObjectResponse(callApi(params, req, runtime));
}

GetRoleAclOnObjectResponse Alibabacloud_MaxCompute20220104::Client::getRoleAclOnObject(shared_ptr<string> projectName, shared_ptr<string> roleName, shared_ptr<GetRoleAclOnObjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRoleAclOnObjectWithOptions(projectName, roleName, request, headers, runtime);
}

GetRolePolicyResponse Alibabacloud_MaxCompute20220104::Client::getRolePolicyWithOptions(shared_ptr<string> projectName,
                                                                                        shared_ptr<string> roleName,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRolePolicy"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectName)) + string("/roles/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(roleName)) + string("/policy"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRolePolicyResponse(callApi(params, req, runtime));
}

GetRolePolicyResponse Alibabacloud_MaxCompute20220104::Client::getRolePolicy(shared_ptr<string> projectName, shared_ptr<string> roleName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRolePolicyWithOptions(projectName, roleName, headers, runtime);
}

GetRunningJobsResponse Alibabacloud_MaxCompute20220104::Client::getRunningJobsWithOptions(shared_ptr<GetRunningJobsRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetRunningJobsShrinkRequest> request = make_shared<GetRunningJobsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->jobOwnerList)) {
    request->jobOwnerListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->jobOwnerList, make_shared<string>("jobOwnerList"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->quotaNicknameList)) {
    request->quotaNicknameListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->quotaNicknameList, make_shared<string>("quotaNicknameList"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->from)) {
    query->insert(pair<string, long>("from", *request->from));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobOwnerListShrink)) {
    query->insert(pair<string, string>("jobOwnerList", *request->jobOwnerListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaNicknameListShrink)) {
    query->insert(pair<string, string>("quotaNicknameList", *request->quotaNicknameListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->to)) {
    query->insert(pair<string, long>("to", *request->to));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRunningJobs"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/jobs/runningJobs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRunningJobsResponse(callApi(params, req, runtime));
}

GetRunningJobsResponse Alibabacloud_MaxCompute20220104::Client::getRunningJobs(shared_ptr<GetRunningJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRunningJobsWithOptions(request, headers, runtime);
}

GetTableInfoResponse Alibabacloud_MaxCompute20220104::Client::getTableInfoWithOptions(shared_ptr<string> projectName,
                                                                                      shared_ptr<string> tableName,
                                                                                      shared_ptr<GetTableInfoRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->schemaName)) {
    query->insert(pair<string, string>("schemaName", *request->schemaName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTableInfo"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectName)) + string("/tables/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(tableName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTableInfoResponse(callApi(params, req, runtime));
}

GetTableInfoResponse Alibabacloud_MaxCompute20220104::Client::getTableInfo(shared_ptr<string> projectName, shared_ptr<string> tableName, shared_ptr<GetTableInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTableInfoWithOptions(projectName, tableName, request, headers, runtime);
}

GetTrustedProjectsResponse Alibabacloud_MaxCompute20220104::Client::getTrustedProjectsWithOptions(shared_ptr<string> projectName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTrustedProjects"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectName)) + string("/trustedProjects"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTrustedProjectsResponse(callApi(params, req, runtime));
}

GetTrustedProjectsResponse Alibabacloud_MaxCompute20220104::Client::getTrustedProjects(shared_ptr<string> projectName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTrustedProjectsWithOptions(projectName, headers, runtime);
}

KillJobsResponse Alibabacloud_MaxCompute20220104::Client::killJobsWithOptions(shared_ptr<KillJobsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    query->insert(pair<string, string>("tenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("KillJobs"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/jobs/kill"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return KillJobsResponse(callApi(params, req, runtime));
}

KillJobsResponse Alibabacloud_MaxCompute20220104::Client::killJobs(shared_ptr<KillJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return killJobsWithOptions(request, headers, runtime);
}

ListComputeQuotaPlanResponse Alibabacloud_MaxCompute20220104::Client::listComputeQuotaPlanWithOptions(shared_ptr<string> nickname, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListComputeQuotaPlan"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/quotas/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(nickname)) + string("/computeQuotaPlan"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListComputeQuotaPlanResponse(callApi(params, req, runtime));
}

ListComputeQuotaPlanResponse Alibabacloud_MaxCompute20220104::Client::listComputeQuotaPlan(shared_ptr<string> nickname) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listComputeQuotaPlanWithOptions(nickname, headers, runtime);
}

ListFunctionsResponse Alibabacloud_MaxCompute20220104::Client::listFunctionsWithOptions(shared_ptr<string> projectName,
                                                                                        shared_ptr<ListFunctionsRequest> request,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->marker)) {
    query->insert(pair<string, string>("marker", *request->marker));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxItem)) {
    query->insert(pair<string, long>("maxItem", *request->maxItem));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prefix)) {
    query->insert(pair<string, string>("prefix", *request->prefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schemaName)) {
    query->insert(pair<string, string>("schemaName", *request->schemaName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFunctions"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectName)) + string("/functions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFunctionsResponse(callApi(params, req, runtime));
}

ListFunctionsResponse Alibabacloud_MaxCompute20220104::Client::listFunctions(shared_ptr<string> projectName, shared_ptr<ListFunctionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listFunctionsWithOptions(projectName, request, headers, runtime);
}

ListJobInfosResponse Alibabacloud_MaxCompute20220104::Client::listJobInfosWithOptions(shared_ptr<ListJobInfosRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->ascOrder)) {
    query->insert(pair<string, bool>("ascOrder", *request->ascOrder));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderColumn)) {
    query->insert(pair<string, string>("orderColumn", *request->orderColumn));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    query->insert(pair<string, string>("tenantId", *request->tenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->extNodeIdList)) {
    body->insert(pair<string, vector<string>>("extNodeIdList", *request->extNodeIdList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->from)) {
    body->insert(pair<string, long>("from", *request->from));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceIdList)) {
    body->insert(pair<string, vector<string>>("instanceIdList", *request->instanceIdList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->jobOwnerList)) {
    body->insert(pair<string, vector<string>>("jobOwnerList", *request->jobOwnerList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->priorityList)) {
    body->insert(pair<string, vector<long>>("priorityList", *request->priorityList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->projectList)) {
    body->insert(pair<string, vector<string>>("projectList", *request->projectList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaNickname)) {
    body->insert(pair<string, string>("quotaNickname", *request->quotaNickname));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->sceneTagList)) {
    body->insert(pair<string, vector<string>>("sceneTagList", *request->sceneTagList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->signatureList)) {
    body->insert(pair<string, vector<string>>("signatureList", *request->signatureList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->sortByList)) {
    body->insert(pair<string, vector<string>>("sortByList", *request->sortByList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->sortOrderList)) {
    body->insert(pair<string, vector<string>>("sortOrderList", *request->sortOrderList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->statusList)) {
    body->insert(pair<string, vector<string>>("statusList", *request->statusList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->to)) {
    body->insert(pair<string, long>("to", *request->to));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->typeList)) {
    body->insert(pair<string, vector<string>>("typeList", *request->typeList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListJobInfos"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/jobs"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListJobInfosResponse(callApi(params, req, runtime));
}

ListJobInfosResponse Alibabacloud_MaxCompute20220104::Client::listJobInfos(shared_ptr<ListJobInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listJobInfosWithOptions(request, headers, runtime);
}

ListMmsDataSourcesResponse Alibabacloud_MaxCompute20220104::Client::listMmsDataSourcesWithOptions(shared_ptr<ListMmsDataSourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("pageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMmsDataSources"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/mms/datasources"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMmsDataSourcesResponse(callApi(params, req, runtime));
}

ListMmsDataSourcesResponse Alibabacloud_MaxCompute20220104::Client::listMmsDataSources(shared_ptr<ListMmsDataSourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listMmsDataSourcesWithOptions(request, headers, runtime);
}

ListMmsDbsResponse Alibabacloud_MaxCompute20220104::Client::listMmsDbsWithOptions(shared_ptr<string> sourceId,
                                                                                  shared_ptr<ListMmsDbsRequest> tmpReq,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListMmsDbsShrinkRequest> request = make_shared<ListMmsDbsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListMmsDbsRequestSorter>(tmpReq->sorter)) {
    request->sorterShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sorter, make_shared<string>("sorter"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("pageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sorterShrink)) {
    query->insert(pair<string, string>("sorter", *request->sorterShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMmsDbs"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/mms/datasources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sourceId)) + string("/dbs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMmsDbsResponse(callApi(params, req, runtime));
}

ListMmsDbsResponse Alibabacloud_MaxCompute20220104::Client::listMmsDbs(shared_ptr<string> sourceId, shared_ptr<ListMmsDbsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listMmsDbsWithOptions(sourceId, request, headers, runtime);
}

ListMmsJobsResponse Alibabacloud_MaxCompute20220104::Client::listMmsJobsWithOptions(shared_ptr<string> sourceId,
                                                                                    shared_ptr<ListMmsJobsRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dstDbName)) {
    query->insert(pair<string, string>("dstDbName", *request->dstDbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dstTableName)) {
    query->insert(pair<string, string>("dstTableName", *request->dstTableName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("pageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcDbName)) {
    query->insert(pair<string, string>("srcDbName", *request->srcDbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcTableName)) {
    query->insert(pair<string, string>("srcTableName", *request->srcTableName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->stopped)) {
    query->insert(pair<string, long>("stopped", *request->stopped));
  }
  if (!Darabonba_Util::Client::isUnset<ListMmsJobsRequestSorter>(request->sorter)) {
    query->insert(pair<string, ListMmsJobsRequestSorter>("sorter", *request->sorter));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMmsJobs"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/mms/datasources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sourceId)) + string("/jobs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMmsJobsResponse(callApi(params, req, runtime));
}

ListMmsJobsResponse Alibabacloud_MaxCompute20220104::Client::listMmsJobs(shared_ptr<string> sourceId, shared_ptr<ListMmsJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listMmsJobsWithOptions(sourceId, request, headers, runtime);
}

ListMmsPartitionsResponse Alibabacloud_MaxCompute20220104::Client::listMmsPartitionsWithOptions(shared_ptr<string> sourceId,
                                                                                                shared_ptr<ListMmsPartitionsRequest> tmpReq,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListMmsPartitionsShrinkRequest> request = make_shared<ListMmsPartitionsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->status)) {
    request->statusShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->status, make_shared<string>("status"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dbId)) {
    query->insert(pair<string, long>("dbId", *request->dbId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("dbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lastDdlTimeEnd)) {
    query->insert(pair<string, string>("lastDdlTimeEnd", *request->lastDdlTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lastDdlTimeStart)) {
    query->insert(pair<string, string>("lastDdlTimeStart", *request->lastDdlTimeStart));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("pageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statusShrink)) {
    query->insert(pair<string, string>("status", *request->statusShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("tableName", *request->tableName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->updated)) {
    query->insert(pair<string, bool>("updated", *request->updated));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    query->insert(pair<string, string>("value", *request->value));
  }
  if (!Darabonba_Util::Client::isUnset<ListMmsPartitionsShrinkRequestSorter>(request->sorter)) {
    query->insert(pair<string, ListMmsPartitionsShrinkRequestSorter>("sorter", *request->sorter));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMmsPartitions"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/mms/datasources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sourceId)) + string("/partitions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMmsPartitionsResponse(callApi(params, req, runtime));
}

ListMmsPartitionsResponse Alibabacloud_MaxCompute20220104::Client::listMmsPartitions(shared_ptr<string> sourceId, shared_ptr<ListMmsPartitionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listMmsPartitionsWithOptions(sourceId, request, headers, runtime);
}

ListMmsTablesResponse Alibabacloud_MaxCompute20220104::Client::listMmsTablesWithOptions(shared_ptr<string> sourceId,
                                                                                        shared_ptr<ListMmsTablesRequest> tmpReq,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListMmsTablesShrinkRequest> request = make_shared<ListMmsTablesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->status)) {
    request->statusShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->status, make_shared<string>("status"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dbId)) {
    query->insert(pair<string, long>("dbId", *request->dbId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("dbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->hasPartitions)) {
    query->insert(pair<string, bool>("hasPartitions", *request->hasPartitions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lastDdlTimeEnd)) {
    query->insert(pair<string, string>("lastDdlTimeEnd", *request->lastDdlTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lastDdlTimeStart)) {
    query->insert(pair<string, string>("lastDdlTimeStart", *request->lastDdlTimeStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->onlyName)) {
    query->insert(pair<string, bool>("onlyName", *request->onlyName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("pageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statusShrink)) {
    query->insert(pair<string, string>("status", *request->statusShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<ListMmsTablesShrinkRequestSorter>(request->sorter)) {
    query->insert(pair<string, ListMmsTablesShrinkRequestSorter>("sorter", *request->sorter));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMmsTables"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/mms/datasources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sourceId)) + string("/tables"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMmsTablesResponse(callApi(params, req, runtime));
}

ListMmsTablesResponse Alibabacloud_MaxCompute20220104::Client::listMmsTables(shared_ptr<string> sourceId, shared_ptr<ListMmsTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listMmsTablesWithOptions(sourceId, request, headers, runtime);
}

ListMmsTaskLogsResponse Alibabacloud_MaxCompute20220104::Client::listMmsTaskLogsWithOptions(shared_ptr<string> sourceId,
                                                                                            shared_ptr<string> taskId,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMmsTaskLogs"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/mms/datasources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sourceId)) + string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(taskId)) + string("/logs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMmsTaskLogsResponse(callApi(params, req, runtime));
}

ListMmsTaskLogsResponse Alibabacloud_MaxCompute20220104::Client::listMmsTaskLogs(shared_ptr<string> sourceId, shared_ptr<string> taskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listMmsTaskLogsWithOptions(sourceId, taskId, headers, runtime);
}

ListMmsTasksResponse Alibabacloud_MaxCompute20220104::Client::listMmsTasksWithOptions(shared_ptr<string> sourceId,
                                                                                      shared_ptr<ListMmsTasksRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dstDbName)) {
    query->insert(pair<string, string>("dstDbName", *request->dstDbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dstTableName)) {
    query->insert(pair<string, string>("dstTableName", *request->dstTableName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->jobId)) {
    query->insert(pair<string, long>("jobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobName)) {
    query->insert(pair<string, string>("jobName", *request->jobName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("pageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->partition)) {
    query->insert(pair<string, string>("partition", *request->partition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcDbName)) {
    query->insert(pair<string, string>("srcDbName", *request->srcDbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcTableName)) {
    query->insert(pair<string, string>("srcTableName", *request->srcTableName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<ListMmsTasksRequestSorter>(request->sorter)) {
    query->insert(pair<string, ListMmsTasksRequestSorter>("sorter", *request->sorter));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMmsTasks"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/mms/datasources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sourceId)) + string("/tasks"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMmsTasksResponse(callApi(params, req, runtime));
}

ListMmsTasksResponse Alibabacloud_MaxCompute20220104::Client::listMmsTasks(shared_ptr<string> sourceId, shared_ptr<ListMmsTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listMmsTasksWithOptions(sourceId, request, headers, runtime);
}

ListPackagesResponse Alibabacloud_MaxCompute20220104::Client::listPackagesWithOptions(shared_ptr<string> projectName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPackages"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectName)) + string("/packages"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPackagesResponse(callApi(params, req, runtime));
}

ListPackagesResponse Alibabacloud_MaxCompute20220104::Client::listPackages(shared_ptr<string> projectName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listPackagesWithOptions(projectName, headers, runtime);
}

ListProjectUsersResponse Alibabacloud_MaxCompute20220104::Client::listProjectUsersWithOptions(shared_ptr<string> projectName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProjectUsers"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectName)) + string("/users"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProjectUsersResponse(callApi(params, req, runtime));
}

ListProjectUsersResponse Alibabacloud_MaxCompute20220104::Client::listProjectUsers(shared_ptr<string> projectName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProjectUsersWithOptions(projectName, headers, runtime);
}

ListProjectsResponse Alibabacloud_MaxCompute20220104::Client::listProjectsWithOptions(shared_ptr<ListProjectsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->listSystemCatalog)) {
    query->insert(pair<string, bool>("listSystemCatalog", *request->listSystemCatalog));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->marker)) {
    query->insert(pair<string, string>("marker", *request->marker));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxItem)) {
    query->insert(pair<string, long>("maxItem", *request->maxItem));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prefix)) {
    query->insert(pair<string, string>("prefix", *request->prefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaName)) {
    query->insert(pair<string, string>("quotaName", *request->quotaName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaNickName)) {
    query->insert(pair<string, string>("quotaNickName", *request->quotaNickName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->saleTags)) {
    query->insert(pair<string, string>("saleTags", *request->saleTags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    query->insert(pair<string, string>("tenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProjects"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/projects"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProjectsResponse(callApi(params, req, runtime));
}

ListProjectsResponse Alibabacloud_MaxCompute20220104::Client::listProjects(shared_ptr<ListProjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProjectsWithOptions(request, headers, runtime);
}

ListQuotasResponse Alibabacloud_MaxCompute20220104::Client::listQuotasWithOptions(shared_ptr<ListQuotasRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billingType)) {
    query->insert(pair<string, string>("billingType", *request->billingType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->marker)) {
    query->insert(pair<string, string>("marker", *request->marker));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxItem)) {
    query->insert(pair<string, long>("maxItem", *request->maxItem));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productId)) {
    query->insert(pair<string, string>("productId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->saleTags)) {
    query->insert(pair<string, string>("saleTags", *request->saleTags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    query->insert(pair<string, string>("tenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListQuotas"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/quotas"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListQuotasResponse(callApi(params, req, runtime));
}

ListQuotasResponse Alibabacloud_MaxCompute20220104::Client::listQuotas(shared_ptr<ListQuotasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listQuotasWithOptions(request, headers, runtime);
}

ListQuotasPlansResponse Alibabacloud_MaxCompute20220104::Client::listQuotasPlansWithOptions(shared_ptr<string> nickname,
                                                                                            shared_ptr<ListQuotasPlansRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    query->insert(pair<string, string>("tenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListQuotasPlans"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/quotas/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(nickname)) + string("/plans"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListQuotasPlansResponse(callApi(params, req, runtime));
}

ListQuotasPlansResponse Alibabacloud_MaxCompute20220104::Client::listQuotasPlans(shared_ptr<string> nickname, shared_ptr<ListQuotasPlansRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listQuotasPlansWithOptions(nickname, request, headers, runtime);
}

ListResourcesResponse Alibabacloud_MaxCompute20220104::Client::listResourcesWithOptions(shared_ptr<string> projectName,
                                                                                        shared_ptr<ListResourcesRequest> request,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->marker)) {
    query->insert(pair<string, string>("marker", *request->marker));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxItem)) {
    query->insert(pair<string, long>("maxItem", *request->maxItem));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schemaName)) {
    query->insert(pair<string, string>("schemaName", *request->schemaName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResources"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectName)) + string("/resources"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResourcesResponse(callApi(params, req, runtime));
}

ListResourcesResponse Alibabacloud_MaxCompute20220104::Client::listResources(shared_ptr<string> projectName, shared_ptr<ListResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listResourcesWithOptions(projectName, request, headers, runtime);
}

ListRolesResponse Alibabacloud_MaxCompute20220104::Client::listRolesWithOptions(shared_ptr<string> projectName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRoles"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectName)) + string("/roles"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRolesResponse(callApi(params, req, runtime));
}

ListRolesResponse Alibabacloud_MaxCompute20220104::Client::listRoles(shared_ptr<string> projectName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRolesWithOptions(projectName, headers, runtime);
}

ListStoragePartitionsInfoResponse Alibabacloud_MaxCompute20220104::Client::listStoragePartitionsInfoWithOptions(shared_ptr<string> project,
                                                                                                                shared_ptr<string> table,
                                                                                                                shared_ptr<ListStoragePartitionsInfoRequest> tmpReq,
                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListStoragePartitionsInfoShrinkRequest> request = make_shared<ListStoragePartitionsInfoShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->types)) {
    request->typesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->types, make_shared<string>("types"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->ascOrder)) {
    query->insert(pair<string, bool>("ascOrder", *request->ascOrder));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->date)) {
    query->insert(pair<string, string>("date", *request->date));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderColumn)) {
    query->insert(pair<string, string>("orderColumn", *request->orderColumn));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->partitionPrefix)) {
    query->insert(pair<string, string>("partitionPrefix", *request->partitionPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schema)) {
    query->insert(pair<string, string>("schema", *request->schema));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    query->insert(pair<string, string>("tenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->typesShrink)) {
    query->insert(pair<string, string>("types", *request->typesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListStoragePartitionsInfo"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/observations/analysis/storage/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(project)) + string("/tables/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(table)) + string("/partitionsInfo"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListStoragePartitionsInfoResponse(callApi(params, req, runtime));
}

ListStoragePartitionsInfoResponse Alibabacloud_MaxCompute20220104::Client::listStoragePartitionsInfo(shared_ptr<string> project, shared_ptr<string> table, shared_ptr<ListStoragePartitionsInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listStoragePartitionsInfoWithOptions(project, table, request, headers, runtime);
}

ListStorageTablesInfoResponse Alibabacloud_MaxCompute20220104::Client::listStorageTablesInfoWithOptions(shared_ptr<string> project,
                                                                                                        shared_ptr<ListStorageTablesInfoRequest> tmpReq,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListStorageTablesInfoShrinkRequest> request = make_shared<ListStorageTablesInfoShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->types)) {
    request->typesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->types, make_shared<string>("types"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->ascOrder)) {
    query->insert(pair<string, bool>("ascOrder", *request->ascOrder));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->date)) {
    query->insert(pair<string, string>("date", *request->date));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderColumn)) {
    query->insert(pair<string, string>("orderColumn", *request->orderColumn));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->recentDays)) {
    query->insert(pair<string, long>("recentDays", *request->recentDays));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schema)) {
    query->insert(pair<string, string>("schema", *request->schema));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tablePrefix)) {
    query->insert(pair<string, string>("tablePrefix", *request->tablePrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    query->insert(pair<string, string>("tenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->typesShrink)) {
    query->insert(pair<string, string>("types", *request->typesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListStorageTablesInfo"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/observations/analysis/storage/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(project)) + string("/tablesInfo"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListStorageTablesInfoResponse(callApi(params, req, runtime));
}

ListStorageTablesInfoResponse Alibabacloud_MaxCompute20220104::Client::listStorageTablesInfo(shared_ptr<string> project, shared_ptr<ListStorageTablesInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listStorageTablesInfoWithOptions(project, request, headers, runtime);
}

ListTablesResponse Alibabacloud_MaxCompute20220104::Client::listTablesWithOptions(shared_ptr<string> projectName,
                                                                                  shared_ptr<ListTablesRequest> request,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->marker)) {
    query->insert(pair<string, string>("marker", *request->marker));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxItem)) {
    query->insert(pair<string, long>("maxItem", *request->maxItem));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prefix)) {
    query->insert(pair<string, string>("prefix", *request->prefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schemaName)) {
    query->insert(pair<string, string>("schemaName", *request->schemaName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTables"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectName)) + string("/tables"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTablesResponse(callApi(params, req, runtime));
}

ListTablesResponse Alibabacloud_MaxCompute20220104::Client::listTables(shared_ptr<string> projectName, shared_ptr<ListTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTablesWithOptions(projectName, request, headers, runtime);
}

ListTunnelQuotaTimerResponse Alibabacloud_MaxCompute20220104::Client::listTunnelQuotaTimerWithOptions(shared_ptr<string> nickname, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTunnelQuotaTimer"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/tunnel/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(nickname)) + string("/timers"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTunnelQuotaTimerResponse(callApi(params, req, runtime));
}

ListTunnelQuotaTimerResponse Alibabacloud_MaxCompute20220104::Client::listTunnelQuotaTimer(shared_ptr<string> nickname) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTunnelQuotaTimerWithOptions(nickname, headers, runtime);
}

ListUsersResponse Alibabacloud_MaxCompute20220104::Client::listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUsers"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/users"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUsersResponse(callApi(params, req, runtime));
}

ListUsersResponse Alibabacloud_MaxCompute20220104::Client::listUsers(shared_ptr<ListUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listUsersWithOptions(request, headers, runtime);
}

ListUsersByRoleResponse Alibabacloud_MaxCompute20220104::Client::listUsersByRoleWithOptions(shared_ptr<string> projectName,
                                                                                            shared_ptr<string> roleName,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUsersByRole"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectName)) + string("/roles/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(roleName)) + string("/users"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUsersByRoleResponse(callApi(params, req, runtime));
}

ListUsersByRoleResponse Alibabacloud_MaxCompute20220104::Client::listUsersByRole(shared_ptr<string> projectName, shared_ptr<string> roleName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listUsersByRoleWithOptions(projectName, roleName, headers, runtime);
}

QueryQuotaResponse Alibabacloud_MaxCompute20220104::Client::queryQuotaWithOptions(shared_ptr<string> nickname,
                                                                                  shared_ptr<QueryQuotaRequest> request,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->akProven)) {
    query->insert(pair<string, string>("AkProven", *request->akProven));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->mock)) {
    query->insert(pair<string, bool>("mock", *request->mock));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    query->insert(pair<string, string>("tenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryQuota"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/quotas/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(nickname)) + string("/query"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryQuotaResponse(callApi(params, req, runtime));
}

QueryQuotaResponse Alibabacloud_MaxCompute20220104::Client::queryQuota(shared_ptr<string> nickname, shared_ptr<QueryQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryQuotaWithOptions(nickname, request, headers, runtime);
}

RetryMmsJobResponse Alibabacloud_MaxCompute20220104::Client::retryMmsJobWithOptions(shared_ptr<string> sourceId,
                                                                                    shared_ptr<string> jobId,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RetryMmsJob"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/mms/datasources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sourceId)) + string("/jobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(jobId)) + string("/retry"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RetryMmsJobResponse(callApi(params, req, runtime));
}

RetryMmsJobResponse Alibabacloud_MaxCompute20220104::Client::retryMmsJob(shared_ptr<string> sourceId, shared_ptr<string> jobId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return retryMmsJobWithOptions(sourceId, jobId, headers, runtime);
}

StartMmsJobResponse Alibabacloud_MaxCompute20220104::Client::startMmsJobWithOptions(shared_ptr<string> sourceId,
                                                                                    shared_ptr<string> jobId,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartMmsJob"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/mms/datasources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sourceId)) + string("/jobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(jobId)) + string("/start"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartMmsJobResponse(callApi(params, req, runtime));
}

StartMmsJobResponse Alibabacloud_MaxCompute20220104::Client::startMmsJob(shared_ptr<string> sourceId, shared_ptr<string> jobId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startMmsJobWithOptions(sourceId, jobId, headers, runtime);
}

StopMmsJobResponse Alibabacloud_MaxCompute20220104::Client::stopMmsJobWithOptions(shared_ptr<string> sourceId,
                                                                                  shared_ptr<string> jobId,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopMmsJob"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/mms/datasources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sourceId)) + string("/jobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(jobId)) + string("/stop"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopMmsJobResponse(callApi(params, req, runtime));
}

StopMmsJobResponse Alibabacloud_MaxCompute20220104::Client::stopMmsJob(shared_ptr<string> sourceId, shared_ptr<string> jobId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopMmsJobWithOptions(sourceId, jobId, headers, runtime);
}

UpdateComputeQuotaPlanResponse Alibabacloud_MaxCompute20220104::Client::updateComputeQuotaPlanWithOptions(shared_ptr<string> nickname,
                                                                                                          shared_ptr<UpdateComputeQuotaPlanRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateComputeQuotaPlanRequestQuota>(request->quota)) {
    body->insert(pair<string, UpdateComputeQuotaPlanRequestQuota>("quota", *request->quota));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateComputeQuotaPlan"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/quotas/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(nickname)) + string("/computeQuotaPlan"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateComputeQuotaPlanResponse(callApi(params, req, runtime));
}

UpdateComputeQuotaPlanResponse Alibabacloud_MaxCompute20220104::Client::updateComputeQuotaPlan(shared_ptr<string> nickname, shared_ptr<UpdateComputeQuotaPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateComputeQuotaPlanWithOptions(nickname, request, headers, runtime);
}

UpdateComputeQuotaScheduleResponse Alibabacloud_MaxCompute20220104::Client::updateComputeQuotaScheduleWithOptions(shared_ptr<string> nickname,
                                                                                                                  shared_ptr<UpdateComputeQuotaScheduleRequest> request,
                                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Darabonba_Util::Client::toArray<vector<UpdateComputeQuotaScheduleRequestBody>>(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateComputeQuotaSchedule"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/quotas/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(nickname)) + string("/computeQuotaSchedule"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateComputeQuotaScheduleResponse(callApi(params, req, runtime));
}

UpdateComputeQuotaScheduleResponse Alibabacloud_MaxCompute20220104::Client::updateComputeQuotaSchedule(shared_ptr<string> nickname, shared_ptr<UpdateComputeQuotaScheduleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateComputeQuotaScheduleWithOptions(nickname, request, headers, runtime);
}

UpdateComputeSubQuotaResponse Alibabacloud_MaxCompute20220104::Client::updateComputeSubQuotaWithOptions(shared_ptr<string> nickname,
                                                                                                        shared_ptr<UpdateComputeSubQuotaRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpdateComputeSubQuotaRequestSubQuotaInfoList>>(request->subQuotaInfoList)) {
    body->insert(pair<string, vector<UpdateComputeSubQuotaRequestSubQuotaInfoList>>("subQuotaInfoList", *request->subQuotaInfoList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateComputeSubQuota"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/quotas/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(nickname)) + string("/computeSubQuota"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateComputeSubQuotaResponse(callApi(params, req, runtime));
}

UpdateComputeSubQuotaResponse Alibabacloud_MaxCompute20220104::Client::updateComputeSubQuota(shared_ptr<string> nickname, shared_ptr<UpdateComputeSubQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateComputeSubQuotaWithOptions(nickname, request, headers, runtime);
}

UpdateMmsDataSourceResponse Alibabacloud_MaxCompute20220104::Client::updateMmsDataSourceWithOptions(shared_ptr<string> sourceId,
                                                                                                    shared_ptr<UpdateMmsDataSourceRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->action)) {
    body->insert(pair<string, string>("action", *request->action));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->config)) {
    body->insert(pair<string, map<string, boost::any>>("config", *request->config));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->test)) {
    body->insert(pair<string, bool>("test", *request->test));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMmsDataSource"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/mms/datasources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sourceId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMmsDataSourceResponse(callApi(params, req, runtime));
}

UpdateMmsDataSourceResponse Alibabacloud_MaxCompute20220104::Client::updateMmsDataSource(shared_ptr<string> sourceId, shared_ptr<UpdateMmsDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateMmsDataSourceWithOptions(sourceId, request, headers, runtime);
}

UpdatePackageResponse Alibabacloud_MaxCompute20220104::Client::updatePackageWithOptions(shared_ptr<string> projectName,
                                                                                        shared_ptr<string> packageName,
                                                                                        shared_ptr<UpdatePackageRequest> request,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePackage"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectName)) + string("/packages/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(packageName)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePackageResponse(callApi(params, req, runtime));
}

UpdatePackageResponse Alibabacloud_MaxCompute20220104::Client::updatePackage(shared_ptr<string> projectName, shared_ptr<string> packageName, shared_ptr<UpdatePackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updatePackageWithOptions(projectName, packageName, request, headers, runtime);
}

UpdateProjectBasicMetaResponse Alibabacloud_MaxCompute20220104::Client::updateProjectBasicMetaWithOptions(shared_ptr<string> projectName,
                                                                                                          shared_ptr<UpdateProjectBasicMetaRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    body->insert(pair<string, string>("comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateProjectBasicMetaRequestProperties>(request->properties)) {
    body->insert(pair<string, UpdateProjectBasicMetaRequestProperties>("properties", *request->properties));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProjectBasicMeta"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectName)) + string("/meta"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProjectBasicMetaResponse(callApi(params, req, runtime));
}

UpdateProjectBasicMetaResponse Alibabacloud_MaxCompute20220104::Client::updateProjectBasicMeta(shared_ptr<string> projectName, shared_ptr<UpdateProjectBasicMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateProjectBasicMetaWithOptions(projectName, request, headers, runtime);
}

UpdateProjectDefaultQuotaResponse Alibabacloud_MaxCompute20220104::Client::updateProjectDefaultQuotaWithOptions(shared_ptr<string> projectName,
                                                                                                                shared_ptr<UpdateProjectDefaultQuotaRequest> request,
                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->quota)) {
    body->insert(pair<string, string>("quota", *request->quota));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProjectDefaultQuota"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectName)) + string("/quota"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProjectDefaultQuotaResponse(callApi(params, req, runtime));
}

UpdateProjectDefaultQuotaResponse Alibabacloud_MaxCompute20220104::Client::updateProjectDefaultQuota(shared_ptr<string> projectName, shared_ptr<UpdateProjectDefaultQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateProjectDefaultQuotaWithOptions(projectName, request, headers, runtime);
}

UpdateProjectIpWhiteListResponse Alibabacloud_MaxCompute20220104::Client::updateProjectIpWhiteListWithOptions(shared_ptr<string> projectName,
                                                                                                              shared_ptr<UpdateProjectIpWhiteListRequest> request,
                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProjectIpWhiteList"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(projectName)) + string("/ipWhiteList"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProjectIpWhiteListResponse(callApi(params, req, runtime));
}

UpdateProjectIpWhiteListResponse Alibabacloud_MaxCompute20220104::Client::updateProjectIpWhiteList(shared_ptr<string> projectName, shared_ptr<UpdateProjectIpWhiteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateProjectIpWhiteListWithOptions(projectName, request, headers, runtime);
}

UpdateQuotaPlanResponse Alibabacloud_MaxCompute20220104::Client::updateQuotaPlanWithOptions(shared_ptr<string> nickname,
                                                                                            shared_ptr<string> planName,
                                                                                            shared_ptr<UpdateQuotaPlanRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    query->insert(pair<string, string>("tenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateQuotaPlan"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/quotas/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(nickname)) + string("/plans/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(planName)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateQuotaPlanResponse(callApi(params, req, runtime));
}

UpdateQuotaPlanResponse Alibabacloud_MaxCompute20220104::Client::updateQuotaPlan(shared_ptr<string> nickname, shared_ptr<string> planName, shared_ptr<UpdateQuotaPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateQuotaPlanWithOptions(nickname, planName, request, headers, runtime);
}

UpdateQuotaScheduleResponse Alibabacloud_MaxCompute20220104::Client::updateQuotaScheduleWithOptions(shared_ptr<string> nickname,
                                                                                                    shared_ptr<UpdateQuotaScheduleRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    query->insert(pair<string, string>("tenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateQuotaSchedule"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/quotas/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(nickname)) + string("/schedule"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateQuotaScheduleResponse(callApi(params, req, runtime));
}

UpdateQuotaScheduleResponse Alibabacloud_MaxCompute20220104::Client::updateQuotaSchedule(shared_ptr<string> nickname, shared_ptr<UpdateQuotaScheduleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateQuotaScheduleWithOptions(nickname, request, headers, runtime);
}

UpdateTunnelQuotaTimerResponse Alibabacloud_MaxCompute20220104::Client::updateTunnelQuotaTimerWithOptions(shared_ptr<string> nickname,
                                                                                                          shared_ptr<UpdateTunnelQuotaTimerRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Darabonba_Util::Client::toArray<vector<UpdateTunnelQuotaTimerRequestBody>>(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTunnelQuotaTimer"))},
    {"version", boost::any(string("2022-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/tunnel/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(nickname)) + string("/timers"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTunnelQuotaTimerResponse(callApi(params, req, runtime));
}

UpdateTunnelQuotaTimerResponse Alibabacloud_MaxCompute20220104::Client::updateTunnelQuotaTimer(shared_ptr<string> nickname, shared_ptr<UpdateTunnelQuotaTimerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateTunnelQuotaTimerWithOptions(nickname, request, headers, runtime);
}

