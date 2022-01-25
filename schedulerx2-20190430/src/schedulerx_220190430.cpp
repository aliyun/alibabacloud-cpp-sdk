// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/schedulerx_220190430.hpp>
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

using namespace Alibabacloud_Schedulerx220190430;

Alibabacloud_Schedulerx220190430::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-beijing", "schedulerx.cn-beijing.aliyuncs.com"},
    {"cn-hangzhou", "schedulerx.cn-hangzhou.aliyuncs.com"},
    {"cn-shanghai", "schedulerx.cn-shanghai.aliyuncs.com"},
    {"cn-shenzhen", "schedulerx.cn-shenzhen.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("schedulerx2"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Schedulerx220190430::Client::getEndpoint(shared_ptr<string> productId,
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

BatchDeleteJobsResponse Alibabacloud_Schedulerx220190430::Client::batchDeleteJobsWithOptions(shared_ptr<BatchDeleteJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceSource)) {
    query->insert(pair<string, string>("NamespaceSource", *request->namespaceSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->jobIdList)) {
    body->insert(pair<string, vector<long>>("JobIdList", *request->jobIdList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchDeleteJobs"))},
    {"version", boost::any(string("2019-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchDeleteJobsResponse(callApi(params, req, runtime));
}

BatchDeleteJobsResponse Alibabacloud_Schedulerx220190430::Client::batchDeleteJobs(shared_ptr<BatchDeleteJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchDeleteJobsWithOptions(request, runtime);
}

BatchDisableJobsResponse Alibabacloud_Schedulerx220190430::Client::batchDisableJobsWithOptions(shared_ptr<BatchDisableJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceSource)) {
    query->insert(pair<string, string>("NamespaceSource", *request->namespaceSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->jobIdList)) {
    body->insert(pair<string, vector<long>>("JobIdList", *request->jobIdList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchDisableJobs"))},
    {"version", boost::any(string("2019-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchDisableJobsResponse(callApi(params, req, runtime));
}

BatchDisableJobsResponse Alibabacloud_Schedulerx220190430::Client::batchDisableJobs(shared_ptr<BatchDisableJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchDisableJobsWithOptions(request, runtime);
}

BatchEnableJobsResponse Alibabacloud_Schedulerx220190430::Client::batchEnableJobsWithOptions(shared_ptr<BatchEnableJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceSource)) {
    query->insert(pair<string, string>("NamespaceSource", *request->namespaceSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->jobIdList)) {
    body->insert(pair<string, vector<long>>("JobIdList", *request->jobIdList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchEnableJobs"))},
    {"version", boost::any(string("2019-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchEnableJobsResponse(callApi(params, req, runtime));
}

BatchEnableJobsResponse Alibabacloud_Schedulerx220190430::Client::batchEnableJobs(shared_ptr<BatchEnableJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchEnableJobsWithOptions(request, runtime);
}

CreateAppGroupResponse Alibabacloud_Schedulerx220190430::Client::createAppGroupWithOptions(shared_ptr<CreateAppGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAppGroup"))},
    {"version", boost::any(string("2019-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAppGroupResponse(callApi(params, req, runtime));
}

CreateAppGroupResponse Alibabacloud_Schedulerx220190430::Client::createAppGroup(shared_ptr<CreateAppGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAppGroupWithOptions(request, runtime);
}

CreateJobResponse Alibabacloud_Schedulerx220190430::Client::createJobWithOptions(shared_ptr<CreateJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->attemptInterval)) {
    body->insert(pair<string, long>("AttemptInterval", *request->attemptInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->calendar)) {
    body->insert(pair<string, string>("Calendar", *request->calendar));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->className)) {
    body->insert(pair<string, string>("ClassName", *request->className));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->consumerSize)) {
    body->insert(pair<string, long>("ConsumerSize", *request->consumerSize));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateJobRequestContactInfo>>(request->contactInfo)) {
    body->insert(pair<string, vector<CreateJobRequestContactInfo>>("ContactInfo", *request->contactInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataOffset)) {
    body->insert(pair<string, long>("DataOffset", *request->dataOffset));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dispatcherSize)) {
    body->insert(pair<string, long>("DispatcherSize", *request->dispatcherSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executeMode)) {
    body->insert(pair<string, string>("ExecuteMode", *request->executeMode));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->failEnable)) {
    body->insert(pair<string, bool>("FailEnable", *request->failEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    body->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jarUrl)) {
    body->insert(pair<string, string>("JarUrl", *request->jarUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobType)) {
    body->insert(pair<string, string>("JobType", *request->jobType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxAttempt)) {
    body->insert(pair<string, long>("MaxAttempt", *request->maxAttempt));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxConcurrency)) {
    body->insert(pair<string, long>("MaxConcurrency", *request->maxConcurrency));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->missWorkerEnable)) {
    body->insert(pair<string, bool>("MissWorkerEnable", *request->missWorkerEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    body->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceSource)) {
    body->insert(pair<string, string>("NamespaceSource", *request->namespaceSource));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parameters)) {
    body->insert(pair<string, string>("Parameters", *request->parameters));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->queueSize)) {
    body->insert(pair<string, long>("QueueSize", *request->queueSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sendChannel)) {
    body->insert(pair<string, string>("SendChannel", *request->sendChannel));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskAttemptInterval)) {
    body->insert(pair<string, long>("TaskAttemptInterval", *request->taskAttemptInterval));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskMaxAttempt)) {
    body->insert(pair<string, long>("TaskMaxAttempt", *request->taskMaxAttempt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeExpression)) {
    body->insert(pair<string, string>("TimeExpression", *request->timeExpression));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeType)) {
    body->insert(pair<string, long>("TimeType", *request->timeType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    body->insert(pair<string, long>("Timeout", *request->timeout));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->timeoutEnable)) {
    body->insert(pair<string, bool>("TimeoutEnable", *request->timeoutEnable));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->timeoutKillEnable)) {
    body->insert(pair<string, bool>("TimeoutKillEnable", *request->timeoutKillEnable));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateJob"))},
    {"version", boost::any(string("2019-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateJobResponse(callApi(params, req, runtime));
}

CreateJobResponse Alibabacloud_Schedulerx220190430::Client::createJob(shared_ptr<CreateJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createJobWithOptions(request, runtime);
}

DeleteJobResponse Alibabacloud_Schedulerx220190430::Client::deleteJobWithOptions(shared_ptr<DeleteJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteJob"))},
    {"version", boost::any(string("2019-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteJobResponse(callApi(params, req, runtime));
}

DeleteJobResponse Alibabacloud_Schedulerx220190430::Client::deleteJob(shared_ptr<DeleteJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteJobWithOptions(request, runtime);
}

DeleteWorkflowResponse Alibabacloud_Schedulerx220190430::Client::deleteWorkflowWithOptions(shared_ptr<DeleteWorkflowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteWorkflow"))},
    {"version", boost::any(string("2019-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteWorkflowResponse(callApi(params, req, runtime));
}

DeleteWorkflowResponse Alibabacloud_Schedulerx220190430::Client::deleteWorkflow(shared_ptr<DeleteWorkflowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteWorkflowWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Schedulerx220190430::Client::describeRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2019-04-30"))},
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

DescribeRegionsResponse Alibabacloud_Schedulerx220190430::Client::describeRegions() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(runtime);
}

DesignateWorkersResponse Alibabacloud_Schedulerx220190430::Client::designateWorkersWithOptions(shared_ptr<DesignateWorkersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DesignateWorkers"))},
    {"version", boost::any(string("2019-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DesignateWorkersResponse(callApi(params, req, runtime));
}

DesignateWorkersResponse Alibabacloud_Schedulerx220190430::Client::designateWorkers(shared_ptr<DesignateWorkersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return designateWorkersWithOptions(request, runtime);
}

DisableJobResponse Alibabacloud_Schedulerx220190430::Client::disableJobWithOptions(shared_ptr<DisableJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableJob"))},
    {"version", boost::any(string("2019-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableJobResponse(callApi(params, req, runtime));
}

DisableJobResponse Alibabacloud_Schedulerx220190430::Client::disableJob(shared_ptr<DisableJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableJobWithOptions(request, runtime);
}

DisableWorkflowResponse Alibabacloud_Schedulerx220190430::Client::disableWorkflowWithOptions(shared_ptr<DisableWorkflowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableWorkflow"))},
    {"version", boost::any(string("2019-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableWorkflowResponse(callApi(params, req, runtime));
}

DisableWorkflowResponse Alibabacloud_Schedulerx220190430::Client::disableWorkflow(shared_ptr<DisableWorkflowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableWorkflowWithOptions(request, runtime);
}

EnableJobResponse Alibabacloud_Schedulerx220190430::Client::enableJobWithOptions(shared_ptr<EnableJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableJob"))},
    {"version", boost::any(string("2019-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableJobResponse(callApi(params, req, runtime));
}

EnableJobResponse Alibabacloud_Schedulerx220190430::Client::enableJob(shared_ptr<EnableJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableJobWithOptions(request, runtime);
}

EnableWorkflowResponse Alibabacloud_Schedulerx220190430::Client::enableWorkflowWithOptions(shared_ptr<EnableWorkflowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableWorkflow"))},
    {"version", boost::any(string("2019-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableWorkflowResponse(callApi(params, req, runtime));
}

EnableWorkflowResponse Alibabacloud_Schedulerx220190430::Client::enableWorkflow(shared_ptr<EnableWorkflowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableWorkflowWithOptions(request, runtime);
}

ExecuteJobResponse Alibabacloud_Schedulerx220190430::Client::executeJobWithOptions(shared_ptr<ExecuteJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteJob"))},
    {"version", boost::any(string("2019-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteJobResponse(callApi(params, req, runtime));
}

ExecuteJobResponse Alibabacloud_Schedulerx220190430::Client::executeJob(shared_ptr<ExecuteJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executeJobWithOptions(request, runtime);
}

ExecuteWorkflowResponse Alibabacloud_Schedulerx220190430::Client::executeWorkflowWithOptions(shared_ptr<ExecuteWorkflowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteWorkflow"))},
    {"version", boost::any(string("2019-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteWorkflowResponse(callApi(params, req, runtime));
}

ExecuteWorkflowResponse Alibabacloud_Schedulerx220190430::Client::executeWorkflow(shared_ptr<ExecuteWorkflowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executeWorkflowWithOptions(request, runtime);
}

GetJobInfoResponse Alibabacloud_Schedulerx220190430::Client::getJobInfoWithOptions(shared_ptr<GetJobInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetJobInfo"))},
    {"version", boost::any(string("2019-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetJobInfoResponse(callApi(params, req, runtime));
}

GetJobInfoResponse Alibabacloud_Schedulerx220190430::Client::getJobInfo(shared_ptr<GetJobInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getJobInfoWithOptions(request, runtime);
}

GetJobInstanceResponse Alibabacloud_Schedulerx220190430::Client::getJobInstanceWithOptions(shared_ptr<GetJobInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetJobInstance"))},
    {"version", boost::any(string("2019-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetJobInstanceResponse(callApi(params, req, runtime));
}

GetJobInstanceResponse Alibabacloud_Schedulerx220190430::Client::getJobInstance(shared_ptr<GetJobInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getJobInstanceWithOptions(request, runtime);
}

GetJobInstanceListResponse Alibabacloud_Schedulerx220190430::Client::getJobInstanceListWithOptions(shared_ptr<GetJobInstanceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetJobInstanceList"))},
    {"version", boost::any(string("2019-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetJobInstanceListResponse(callApi(params, req, runtime));
}

GetJobInstanceListResponse Alibabacloud_Schedulerx220190430::Client::getJobInstanceList(shared_ptr<GetJobInstanceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getJobInstanceListWithOptions(request, runtime);
}

GetWorkFlowResponse Alibabacloud_Schedulerx220190430::Client::getWorkFlowWithOptions(shared_ptr<GetWorkFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWorkFlow"))},
    {"version", boost::any(string("2019-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWorkFlowResponse(callApi(params, req, runtime));
}

GetWorkFlowResponse Alibabacloud_Schedulerx220190430::Client::getWorkFlow(shared_ptr<GetWorkFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWorkFlowWithOptions(request, runtime);
}

GetWorkerListResponse Alibabacloud_Schedulerx220190430::Client::getWorkerListWithOptions(shared_ptr<GetWorkerListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWorkerList"))},
    {"version", boost::any(string("2019-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWorkerListResponse(callApi(params, req, runtime));
}

GetWorkerListResponse Alibabacloud_Schedulerx220190430::Client::getWorkerList(shared_ptr<GetWorkerListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWorkerListWithOptions(request, runtime);
}

GrantPermissionResponse Alibabacloud_Schedulerx220190430::Client::grantPermissionWithOptions(shared_ptr<GrantPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->grantOption)) {
    query->insert(pair<string, bool>("GrantOption", *request->grantOption));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceSource)) {
    query->insert(pair<string, string>("NamespaceSource", *request->namespaceSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    query->insert(pair<string, string>("UserName", *request->userName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GrantPermission"))},
    {"version", boost::any(string("2019-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GrantPermissionResponse(callApi(params, req, runtime));
}

GrantPermissionResponse Alibabacloud_Schedulerx220190430::Client::grantPermission(shared_ptr<GrantPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return grantPermissionWithOptions(request, runtime);
}

ListGroupsResponse Alibabacloud_Schedulerx220190430::Client::listGroupsWithOptions(shared_ptr<ListGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGroups"))},
    {"version", boost::any(string("2019-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGroupsResponse(callApi(params, req, runtime));
}

ListGroupsResponse Alibabacloud_Schedulerx220190430::Client::listGroups(shared_ptr<ListGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGroupsWithOptions(request, runtime);
}

ListJobsResponse Alibabacloud_Schedulerx220190430::Client::listJobsWithOptions(shared_ptr<ListJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListJobs"))},
    {"version", boost::any(string("2019-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListJobsResponse(callApi(params, req, runtime));
}

ListJobsResponse Alibabacloud_Schedulerx220190430::Client::listJobs(shared_ptr<ListJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listJobsWithOptions(request, runtime);
}

ListNamespacesResponse Alibabacloud_Schedulerx220190430::Client::listNamespacesWithOptions(shared_ptr<ListNamespacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNamespaces"))},
    {"version", boost::any(string("2019-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListNamespacesResponse(callApi(params, req, runtime));
}

ListNamespacesResponse Alibabacloud_Schedulerx220190430::Client::listNamespaces(shared_ptr<ListNamespacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNamespacesWithOptions(request, runtime);
}

RevokePermissionResponse Alibabacloud_Schedulerx220190430::Client::revokePermissionWithOptions(shared_ptr<RevokePermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceSource)) {
    query->insert(pair<string, string>("NamespaceSource", *request->namespaceSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RevokePermission"))},
    {"version", boost::any(string("2019-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RevokePermissionResponse(callApi(params, req, runtime));
}

RevokePermissionResponse Alibabacloud_Schedulerx220190430::Client::revokePermission(shared_ptr<RevokePermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokePermissionWithOptions(request, runtime);
}

StopInstanceResponse Alibabacloud_Schedulerx220190430::Client::stopInstanceWithOptions(shared_ptr<StopInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopInstance"))},
    {"version", boost::any(string("2019-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopInstanceResponse(callApi(params, req, runtime));
}

StopInstanceResponse Alibabacloud_Schedulerx220190430::Client::stopInstance(shared_ptr<StopInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopInstanceWithOptions(request, runtime);
}

UpdateJobResponse Alibabacloud_Schedulerx220190430::Client::updateJobWithOptions(shared_ptr<UpdateJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->attemptInterval)) {
    body->insert(pair<string, long>("AttemptInterval", *request->attemptInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->calendar)) {
    body->insert(pair<string, string>("Calendar", *request->calendar));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->className)) {
    body->insert(pair<string, string>("ClassName", *request->className));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->consumerSize)) {
    body->insert(pair<string, long>("ConsumerSize", *request->consumerSize));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateJobRequestContactInfo>>(request->contactInfo)) {
    body->insert(pair<string, vector<UpdateJobRequestContactInfo>>("ContactInfo", *request->contactInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataOffset)) {
    body->insert(pair<string, long>("DataOffset", *request->dataOffset));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dispatcherSize)) {
    body->insert(pair<string, long>("DispatcherSize", *request->dispatcherSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executeMode)) {
    body->insert(pair<string, string>("ExecuteMode", *request->executeMode));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->failEnable)) {
    body->insert(pair<string, bool>("FailEnable", *request->failEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    body->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jarUrl)) {
    body->insert(pair<string, string>("JarUrl", *request->jarUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->jobId)) {
    body->insert(pair<string, long>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxAttempt)) {
    body->insert(pair<string, long>("MaxAttempt", *request->maxAttempt));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxConcurrency)) {
    body->insert(pair<string, long>("MaxConcurrency", *request->maxConcurrency));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->missWorkerEnable)) {
    body->insert(pair<string, bool>("MissWorkerEnable", *request->missWorkerEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    body->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceSource)) {
    body->insert(pair<string, string>("NamespaceSource", *request->namespaceSource));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parameters)) {
    body->insert(pair<string, string>("Parameters", *request->parameters));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->queueSize)) {
    body->insert(pair<string, long>("QueueSize", *request->queueSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sendChannel)) {
    body->insert(pair<string, string>("SendChannel", *request->sendChannel));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskAttemptInterval)) {
    body->insert(pair<string, long>("TaskAttemptInterval", *request->taskAttemptInterval));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskMaxAttempt)) {
    body->insert(pair<string, long>("TaskMaxAttempt", *request->taskMaxAttempt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeExpression)) {
    body->insert(pair<string, string>("TimeExpression", *request->timeExpression));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeType)) {
    body->insert(pair<string, long>("TimeType", *request->timeType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    body->insert(pair<string, long>("Timeout", *request->timeout));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->timeoutEnable)) {
    body->insert(pair<string, bool>("TimeoutEnable", *request->timeoutEnable));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->timeoutKillEnable)) {
    body->insert(pair<string, bool>("TimeoutKillEnable", *request->timeoutKillEnable));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateJob"))},
    {"version", boost::any(string("2019-04-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateJobResponse(callApi(params, req, runtime));
}

UpdateJobResponse Alibabacloud_Schedulerx220190430::Client::updateJob(shared_ptr<UpdateJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateJobWithOptions(request, runtime);
}

