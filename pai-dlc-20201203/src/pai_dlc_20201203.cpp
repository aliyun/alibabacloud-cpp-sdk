// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/pai_dlc_20201203.hpp>
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

using namespace Alibabacloud_Pai-dlc20201203;

Alibabacloud_Pai-dlc20201203::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-2-pop", "pai-dlc.aliyuncs.com"},
    {"ap-south-1", "pai-dlc.aliyuncs.com"},
    {"ap-southeast-2", "pai-dlc.aliyuncs.com"},
    {"cn-beijing-finance-1", "pai-dlc.aliyuncs.com"},
    {"cn-beijing-finance-pop", "pai-dlc.aliyuncs.com"},
    {"cn-beijing-gov-1", "pai-dlc.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "pai-dlc.aliyuncs.com"},
    {"cn-chengdu", "pai-dlc.aliyuncs.com"},
    {"cn-edge-1", "pai-dlc.aliyuncs.com"},
    {"cn-fujian", "pai-dlc.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "pai-dlc.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "pai-dlc.aliyuncs.com"},
    {"cn-hangzhou-finance", "pai-dlc.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "pai-dlc.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "pai-dlc.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "pai-dlc.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "pai-dlc.aliyuncs.com"},
    {"cn-hangzhou-test-306", "pai-dlc.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "pai-dlc.aliyuncs.com"},
    {"cn-huhehaote", "pai-dlc.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "pai-dlc.aliyuncs.com"},
    {"cn-north-2-gov-1", "pai-dlc.aliyuncs.com"},
    {"cn-qingdao", "pai-dlc.aliyuncs.com"},
    {"cn-qingdao-nebula", "pai-dlc.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "pai-dlc.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "pai-dlc.aliyuncs.com"},
    {"cn-shanghai-inner", "pai-dlc.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "pai-dlc.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "pai-dlc.aliyuncs.com"},
    {"cn-shenzhen-inner", "pai-dlc.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "pai-dlc.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "pai-dlc.aliyuncs.com"},
    {"cn-wuhan", "pai-dlc.aliyuncs.com"},
    {"cn-yushanfang", "pai-dlc.aliyuncs.com"},
    {"cn-zhangbei", "pai-dlc.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "pai-dlc.aliyuncs.com"},
    {"cn-zhangjiakou", "pai-dlc.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "pai-dlc.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "pai-dlc.aliyuncs.com"},
    {"eu-west-1", "pai-dlc.aliyuncs.com"},
    {"eu-west-1-oxs", "pai-dlc.aliyuncs.com"},
    {"me-east-1", "pai-dlc.aliyuncs.com"},
    {"rus-west-1-pop", "pai-dlc.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("pai-dlc"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Pai-dlc20201203::Client::getEndpoint(shared_ptr<string> productId,
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

CreateJobResponse Alibabacloud_Pai-dlc20201203::Client::createJobWithOptions(shared_ptr<CreateJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessibility)) {
    body->insert(pair<string, string>("Accessibility", *request->accessibility));
  }
  if (!Darabonba_Util::Client::isUnset<CreateJobRequestCodeSource>(request->codeSource)) {
    body->insert(pair<string, CreateJobRequestCodeSource>("CodeSource", *request->codeSource));
  }
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(request->credentialConfig)) {
    body->insert(pair<string, CredentialConfig>("CredentialConfig", *request->credentialConfig));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateJobRequestDataSources>>(request->dataSources)) {
    body->insert(pair<string, vector<CreateJobRequestDataSources>>("DataSources", *request->dataSources));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->debuggerConfigContent)) {
    body->insert(pair<string, string>("DebuggerConfigContent", *request->debuggerConfigContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    body->insert(pair<string, string>("DisplayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<JobElasticSpec>(request->elasticSpec)) {
    body->insert(pair<string, JobElasticSpec>("ElasticSpec", *request->elasticSpec));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(request->envs)) {
    body->insert(pair<string, map<string, string>>("Envs", *request->envs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->jobMaxRunningTimeMinutes)) {
    body->insert(pair<string, long>("JobMaxRunningTimeMinutes", *request->jobMaxRunningTimeMinutes));
  }
  if (!Darabonba_Util::Client::isUnset<vector<JobSpec>>(request->jobSpecs)) {
    body->insert(pair<string, vector<JobSpec>>("JobSpecs", *request->jobSpecs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobType)) {
    body->insert(pair<string, string>("JobType", *request->jobType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->options)) {
    body->insert(pair<string, string>("Options", *request->options));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    body->insert(pair<string, long>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    body->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<JobSettings>(request->settings)) {
    body->insert(pair<string, JobSettings>("Settings", *request->settings));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->successPolicy)) {
    body->insert(pair<string, string>("SuccessPolicy", *request->successPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartyLibDir)) {
    body->insert(pair<string, string>("ThirdpartyLibDir", *request->thirdpartyLibDir));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->thirdpartyLibs)) {
    body->insert(pair<string, vector<string>>("ThirdpartyLibs", *request->thirdpartyLibs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userCommand)) {
    body->insert(pair<string, string>("UserCommand", *request->userCommand));
  }
  if (!Darabonba_Util::Client::isUnset<CreateJobRequestUserVpc>(request->userVpc)) {
    body->insert(pair<string, CreateJobRequestUserVpc>("UserVpc", *request->userVpc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateJob"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/jobs"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateJobResponse(callApi(params, req, runtime));
}

CreateJobResponse Alibabacloud_Pai-dlc20201203::Client::createJob(shared_ptr<CreateJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createJobWithOptions(request, headers, runtime);
}

CreateTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::createTensorboardWithOptions(shared_ptr<CreateTensorboardRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessibility)) {
    body->insert(pair<string, string>("Accessibility", *request->accessibility));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cpu)) {
    body->insert(pair<string, long>("Cpu", *request->cpu));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceId)) {
    body->insert(pair<string, string>("DataSourceId", *request->dataSourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    body->insert(pair<string, string>("DataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DataSourceItem>>(request->dataSources)) {
    body->insert(pair<string, vector<DataSourceItem>>("DataSources", *request->dataSources));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    body->insert(pair<string, string>("DisplayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxRunningTimeMinutes)) {
    body->insert(pair<string, long>("MaxRunningTimeMinutes", *request->maxRunningTimeMinutes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->memory)) {
    body->insert(pair<string, long>("Memory", *request->memory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->options)) {
    body->insert(pair<string, string>("Options", *request->options));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->priority)) {
    body->insert(pair<string, string>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaId)) {
    body->insert(pair<string, string>("QuotaId", *request->quotaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceId)) {
    body->insert(pair<string, string>("SourceId", *request->sourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    body->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->summaryPath)) {
    body->insert(pair<string, string>("SummaryPath", *request->summaryPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->summaryRelativePath)) {
    body->insert(pair<string, string>("SummaryRelativePath", *request->summaryRelativePath));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TensorboardDataSourceSpec>>(request->tensorboardDataSources)) {
    body->insert(pair<string, vector<TensorboardDataSourceSpec>>("TensorboardDataSources", *request->tensorboardDataSources));
  }
  if (!Darabonba_Util::Client::isUnset<TensorboardSpec>(request->tensorboardSpec)) {
    body->insert(pair<string, TensorboardSpec>("TensorboardSpec", *request->tensorboardSpec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uri)) {
    body->insert(pair<string, string>("Uri", *request->uri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTensorboard"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/tensorboards"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTensorboardResponse(callApi(params, req, runtime));
}

CreateTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::createTensorboard(shared_ptr<CreateTensorboardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createTensorboardWithOptions(request, headers, runtime);
}

DeleteJobResponse Alibabacloud_Pai-dlc20201203::Client::deleteJobWithOptions(shared_ptr<string> JobId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteJob"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/jobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(JobId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteJobResponse(callApi(params, req, runtime));
}

DeleteJobResponse Alibabacloud_Pai-dlc20201203::Client::deleteJob(shared_ptr<string> JobId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteJobWithOptions(JobId, headers, runtime);
}

DeleteTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::deleteTensorboardWithOptions(shared_ptr<string> TensorboardId,
                                                                                             shared_ptr<DeleteTensorboardRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTensorboard"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/tensorboards/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TensorboardId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTensorboardResponse(callApi(params, req, runtime));
}

DeleteTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::deleteTensorboard(shared_ptr<string> TensorboardId, shared_ptr<DeleteTensorboardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteTensorboardWithOptions(TensorboardId, request, headers, runtime);
}

GetJobResponse Alibabacloud_Pai-dlc20201203::Client::getJobWithOptions(shared_ptr<string> JobId,
                                                                       shared_ptr<GetJobRequest> request,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->needDetail)) {
    query->insert(pair<string, bool>("NeedDetail", *request->needDetail));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetJob"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/jobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(JobId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetJobResponse(callApi(params, req, runtime));
}

GetJobResponse Alibabacloud_Pai-dlc20201203::Client::getJob(shared_ptr<string> JobId, shared_ptr<GetJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getJobWithOptions(JobId, request, headers, runtime);
}

GetJobEventsResponse Alibabacloud_Pai-dlc20201203::Client::getJobEventsWithOptions(shared_ptr<string> JobId,
                                                                                   shared_ptr<GetJobEventsRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxEventsNum)) {
    query->insert(pair<string, long>("MaxEventsNum", *request->maxEventsNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetJobEvents"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/jobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(JobId)) + string("/events"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetJobEventsResponse(callApi(params, req, runtime));
}

GetJobEventsResponse Alibabacloud_Pai-dlc20201203::Client::getJobEvents(shared_ptr<string> JobId, shared_ptr<GetJobEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getJobEventsWithOptions(JobId, request, headers, runtime);
}

GetJobMetricsResponse Alibabacloud_Pai-dlc20201203::Client::getJobMetricsWithOptions(shared_ptr<string> JobId,
                                                                                     shared_ptr<GetJobMetricsRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricType)) {
    query->insert(pair<string, string>("MetricType", *request->metricType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeStep)) {
    query->insert(pair<string, string>("TimeStep", *request->timeStep));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("Token", *request->token));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetJobMetrics"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/jobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(JobId)) + string("/metrics"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetJobMetricsResponse(callApi(params, req, runtime));
}

GetJobMetricsResponse Alibabacloud_Pai-dlc20201203::Client::getJobMetrics(shared_ptr<string> JobId, shared_ptr<GetJobMetricsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getJobMetricsWithOptions(JobId, request, headers, runtime);
}

GetJobSanityCheckResultResponse Alibabacloud_Pai-dlc20201203::Client::getJobSanityCheckResultWithOptions(shared_ptr<string> JobId,
                                                                                                         shared_ptr<GetJobSanityCheckResultRequest> request,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->sanityCheckNumber)) {
    query->insert(pair<string, long>("SanityCheckNumber", *request->sanityCheckNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sanityCheckPhase)) {
    query->insert(pair<string, string>("SanityCheckPhase", *request->sanityCheckPhase));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("Token", *request->token));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetJobSanityCheckResult"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/jobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(JobId)) + string("/sanitycheckresult"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetJobSanityCheckResultResponse(callApi(params, req, runtime));
}

GetJobSanityCheckResultResponse Alibabacloud_Pai-dlc20201203::Client::getJobSanityCheckResult(shared_ptr<string> JobId, shared_ptr<GetJobSanityCheckResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getJobSanityCheckResultWithOptions(JobId, request, headers, runtime);
}

GetPodEventsResponse Alibabacloud_Pai-dlc20201203::Client::getPodEventsWithOptions(shared_ptr<string> JobId,
                                                                                   shared_ptr<string> PodId,
                                                                                   shared_ptr<GetPodEventsRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxEventsNum)) {
    query->insert(pair<string, long>("MaxEventsNum", *request->maxEventsNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->podUid)) {
    query->insert(pair<string, string>("PodUid", *request->podUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPodEvents"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/jobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(JobId)) + string("/pods/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(PodId)) + string("/events"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPodEventsResponse(callApi(params, req, runtime));
}

GetPodEventsResponse Alibabacloud_Pai-dlc20201203::Client::getPodEvents(shared_ptr<string> JobId, shared_ptr<string> PodId, shared_ptr<GetPodEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getPodEventsWithOptions(JobId, PodId, request, headers, runtime);
}

GetPodLogsResponse Alibabacloud_Pai-dlc20201203::Client::getPodLogsWithOptions(shared_ptr<string> JobId,
                                                                               shared_ptr<string> PodId,
                                                                               shared_ptr<GetPodLogsRequest> request,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->downloadToFile)) {
    query->insert(pair<string, bool>("DownloadToFile", *request->downloadToFile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxLines)) {
    query->insert(pair<string, long>("MaxLines", *request->maxLines));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->podUid)) {
    query->insert(pair<string, string>("PodUid", *request->podUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPodLogs"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/jobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(JobId)) + string("/pods/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(PodId)) + string("/logs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPodLogsResponse(callApi(params, req, runtime));
}

GetPodLogsResponse Alibabacloud_Pai-dlc20201203::Client::getPodLogs(shared_ptr<string> JobId, shared_ptr<string> PodId, shared_ptr<GetPodLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getPodLogsWithOptions(JobId, PodId, request, headers, runtime);
}

GetRayDashboardResponse Alibabacloud_Pai-dlc20201203::Client::getRayDashboardWithOptions(shared_ptr<string> jobId,
                                                                                         shared_ptr<GetRayDashboardRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->isShared)) {
    query->insert(pair<string, bool>("isShared", *request->isShared));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("token", *request->token));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRayDashboard"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/jobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(jobId)) + string("/rayDashboard"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRayDashboardResponse(callApi(params, req, runtime));
}

GetRayDashboardResponse Alibabacloud_Pai-dlc20201203::Client::getRayDashboard(shared_ptr<string> jobId, shared_ptr<GetRayDashboardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRayDashboardWithOptions(jobId, request, headers, runtime);
}

GetTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::getTensorboardWithOptions(shared_ptr<string> TensorboardId,
                                                                                       shared_ptr<GetTensorboardRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jodId)) {
    query->insert(pair<string, string>("JodId", *request->jodId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("Token", *request->token));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTensorboard"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/tensorboards/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TensorboardId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTensorboardResponse(callApi(params, req, runtime));
}

GetTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::getTensorboard(shared_ptr<string> TensorboardId, shared_ptr<GetTensorboardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTensorboardWithOptions(TensorboardId, request, headers, runtime);
}

GetTensorboardSharedUrlResponse Alibabacloud_Pai-dlc20201203::Client::getTensorboardSharedUrlWithOptions(shared_ptr<string> TensorboardId,
                                                                                                         shared_ptr<GetTensorboardSharedUrlRequest> request,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->expireTimeSeconds)) {
    query->insert(pair<string, string>("ExpireTimeSeconds", *request->expireTimeSeconds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTensorboardSharedUrl"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/tensorboards/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TensorboardId)) + string("/sharedurl"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTensorboardSharedUrlResponse(callApi(params, req, runtime));
}

GetTensorboardSharedUrlResponse Alibabacloud_Pai-dlc20201203::Client::getTensorboardSharedUrl(shared_ptr<string> TensorboardId, shared_ptr<GetTensorboardSharedUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTensorboardSharedUrlWithOptions(TensorboardId, request, headers, runtime);
}

GetTokenResponse Alibabacloud_Pai-dlc20201203::Client::getTokenWithOptions(shared_ptr<GetTokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->expireTime)) {
    query->insert(pair<string, long>("ExpireTime", *request->expireTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetId)) {
    query->insert(pair<string, string>("TargetId", *request->targetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetType)) {
    query->insert(pair<string, string>("TargetType", *request->targetType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetToken"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/tokens"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTokenResponse(callApi(params, req, runtime));
}

GetTokenResponse Alibabacloud_Pai-dlc20201203::Client::getToken(shared_ptr<GetTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTokenWithOptions(request, headers, runtime);
}

GetWebTerminalResponse Alibabacloud_Pai-dlc20201203::Client::getWebTerminalWithOptions(shared_ptr<string> JobId,
                                                                                       shared_ptr<string> PodId,
                                                                                       shared_ptr<GetWebTerminalRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->isShared)) {
    query->insert(pair<string, bool>("IsShared", *request->isShared));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->podUid)) {
    query->insert(pair<string, string>("PodUid", *request->podUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWebTerminal"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/jobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(JobId)) + string("/pods/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(PodId)) + string("/webterminal"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWebTerminalResponse(callApi(params, req, runtime));
}

GetWebTerminalResponse Alibabacloud_Pai-dlc20201203::Client::getWebTerminal(shared_ptr<string> JobId, shared_ptr<string> PodId, shared_ptr<GetWebTerminalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getWebTerminalWithOptions(JobId, PodId, request, headers, runtime);
}

ListEcsSpecsResponse Alibabacloud_Pai-dlc20201203::Client::listEcsSpecsWithOptions(shared_ptr<ListEcsSpecsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorType)) {
    query->insert(pair<string, string>("AcceleratorType", *request->acceleratorType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceTypes)) {
    query->insert(pair<string, string>("InstanceTypes", *request->instanceTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEcsSpecs"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/ecsspecs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEcsSpecsResponse(callApi(params, req, runtime));
}

ListEcsSpecsResponse Alibabacloud_Pai-dlc20201203::Client::listEcsSpecs(shared_ptr<ListEcsSpecsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listEcsSpecsWithOptions(request, headers, runtime);
}

ListJobSanityCheckResultsResponse Alibabacloud_Pai-dlc20201203::Client::listJobSanityCheckResultsWithOptions(shared_ptr<string> JobId,
                                                                                                             shared_ptr<ListJobSanityCheckResultsRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListJobSanityCheckResults"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/jobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(JobId)) + string("/sanitycheckresults"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListJobSanityCheckResultsResponse(callApi(params, req, runtime));
}

ListJobSanityCheckResultsResponse Alibabacloud_Pai-dlc20201203::Client::listJobSanityCheckResults(shared_ptr<string> JobId, shared_ptr<ListJobSanityCheckResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listJobSanityCheckResultsWithOptions(JobId, request, headers, runtime);
}

ListJobsResponse Alibabacloud_Pai-dlc20201203::Client::listJobsWithOptions(shared_ptr<ListJobsRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListJobsShrinkRequest> request = make_shared<ListJobsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessibility)) {
    query->insert(pair<string, string>("Accessibility", *request->accessibility));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessUserId)) {
    query->insert(pair<string, string>("BusinessUserId", *request->businessUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->caller)) {
    query->insert(pair<string, string>("Caller", *request->caller));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    query->insert(pair<string, string>("DisplayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->fromAllWorkspaces)) {
    query->insert(pair<string, bool>("FromAllWorkspaces", *request->fromAllWorkspaces));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobIds)) {
    query->insert(pair<string, string>("JobIds", *request->jobIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobType)) {
    query->insert(pair<string, string>("JobType", *request->jobType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oversoldInfo)) {
    query->insert(pair<string, string>("OversoldInfo", *request->oversoldInfo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paymentType)) {
    query->insert(pair<string, string>("PaymentType", *request->paymentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineId)) {
    query->insert(pair<string, string>("PipelineId", *request->pipelineId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceQuotaName)) {
    query->insert(pair<string, string>("ResourceQuotaName", *request->resourceQuotaName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showOwn)) {
    query->insert(pair<string, bool>("ShowOwn", *request->showOwn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userIdForFilter)) {
    query->insert(pair<string, string>("UserIdForFilter", *request->userIdForFilter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    query->insert(pair<string, string>("Username", *request->username));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListJobs"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/jobs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListJobsResponse(callApi(params, req, runtime));
}

ListJobsResponse Alibabacloud_Pai-dlc20201203::Client::listJobs(shared_ptr<ListJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listJobsWithOptions(request, headers, runtime);
}

ListTensorboardsResponse Alibabacloud_Pai-dlc20201203::Client::listTensorboardsWithOptions(shared_ptr<ListTensorboardsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessibility)) {
    query->insert(pair<string, string>("Accessibility", *request->accessibility));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    query->insert(pair<string, string>("DisplayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paymentType)) {
    query->insert(pair<string, string>("PaymentType", *request->paymentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaId)) {
    query->insert(pair<string, string>("QuotaId", *request->quotaId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showOwn)) {
    query->insert(pair<string, bool>("ShowOwn", *request->showOwn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceId)) {
    query->insert(pair<string, string>("SourceId", *request->sourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tensorboardId)) {
    query->insert(pair<string, string>("TensorboardId", *request->tensorboardId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    query->insert(pair<string, string>("Username", *request->username));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->verbose)) {
    query->insert(pair<string, bool>("Verbose", *request->verbose));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTensorboards"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/tensorboards"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTensorboardsResponse(callApi(params, req, runtime));
}

ListTensorboardsResponse Alibabacloud_Pai-dlc20201203::Client::listTensorboards(shared_ptr<ListTensorboardsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTensorboardsWithOptions(request, headers, runtime);
}

StartTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::startTensorboardWithOptions(shared_ptr<string> TensorboardId,
                                                                                           shared_ptr<StartTensorboardRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartTensorboard"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/tensorboards/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TensorboardId)) + string("/start"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartTensorboardResponse(callApi(params, req, runtime));
}

StartTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::startTensorboard(shared_ptr<string> TensorboardId, shared_ptr<StartTensorboardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startTensorboardWithOptions(TensorboardId, request, headers, runtime);
}

StopJobResponse Alibabacloud_Pai-dlc20201203::Client::stopJobWithOptions(shared_ptr<string> JobId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopJob"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/jobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(JobId)) + string("/stop"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopJobResponse(callApi(params, req, runtime));
}

StopJobResponse Alibabacloud_Pai-dlc20201203::Client::stopJob(shared_ptr<string> JobId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopJobWithOptions(JobId, headers, runtime);
}

StopTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::stopTensorboardWithOptions(shared_ptr<string> TensorboardId,
                                                                                         shared_ptr<StopTensorboardRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopTensorboard"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/tensorboards/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TensorboardId)) + string("/stop"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopTensorboardResponse(callApi(params, req, runtime));
}

StopTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::stopTensorboard(shared_ptr<string> TensorboardId, shared_ptr<StopTensorboardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopTensorboardWithOptions(TensorboardId, request, headers, runtime);
}

UpdateJobResponse Alibabacloud_Pai-dlc20201203::Client::updateJobWithOptions(shared_ptr<string> JobId,
                                                                             shared_ptr<UpdateJobRequest> request,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessibility)) {
    body->insert(pair<string, string>("Accessibility", *request->accessibility));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    body->insert(pair<string, long>("Priority", *request->priority));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateJob"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/jobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(JobId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateJobResponse(callApi(params, req, runtime));
}

UpdateJobResponse Alibabacloud_Pai-dlc20201203::Client::updateJob(shared_ptr<string> JobId, shared_ptr<UpdateJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateJobWithOptions(JobId, request, headers, runtime);
}

UpdateTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::updateTensorboardWithOptions(shared_ptr<string> TensorboardId,
                                                                                             shared_ptr<UpdateTensorboardRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessibility)) {
    query->insert(pair<string, string>("Accessibility", *request->accessibility));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxRunningTimeMinutes)) {
    query->insert(pair<string, long>("MaxRunningTimeMinutes", *request->maxRunningTimeMinutes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->priority)) {
    query->insert(pair<string, string>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTensorboard"))},
    {"version", boost::any(string("2020-12-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/tensorboards/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TensorboardId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTensorboardResponse(callApi(params, req, runtime));
}

UpdateTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::updateTensorboard(shared_ptr<string> TensorboardId, shared_ptr<UpdateTensorboardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateTensorboardWithOptions(TensorboardId, request, headers, runtime);
}

