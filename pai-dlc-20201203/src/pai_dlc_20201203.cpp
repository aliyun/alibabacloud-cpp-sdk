// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/pai_dlc_20201203.hpp>
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

using namespace Alibabacloud_Pai-dlc20201203;

Alibabacloud_Pai-dlc20201203::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
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

BatchGetJobsStatisticsResponse Alibabacloud_Pai-dlc20201203::Client::batchGetJobsStatistics(shared_ptr<BatchGetJobsStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return batchGetJobsStatisticsWithOptions(request, headers, runtime);
}

BatchGetJobsStatisticsResponse Alibabacloud_Pai-dlc20201203::Client::batchGetJobsStatisticsWithOptions(shared_ptr<BatchGetJobsStatisticsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceIds)) {
    (*query)["WorkspaceIds"] = *request->workspaceIds;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return BatchGetJobsStatisticsResponse(doROARequest(make_shared<string>("BatchGetJobsStatistics"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/batch/statistics/jobs")), make_shared<string>("json"), req, runtime));
}

CreateCodeSourceResponse Alibabacloud_Pai-dlc20201203::Client::createCodeSource(shared_ptr<CreateCodeSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createCodeSourceWithOptions(request, headers, runtime);
}

CreateCodeSourceResponse Alibabacloud_Pai-dlc20201203::Client::createCodeSourceWithOptions(shared_ptr<CreateCodeSourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->codeBranch)) {
    (*body)["CodeBranch"] = *request->codeBranch;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->codeRepo)) {
    (*body)["CodeRepo"] = *request->codeRepo;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->codeRepoAccessToken)) {
    (*body)["CodeRepoAccessToken"] = *request->codeRepoAccessToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->codeRepoUserName)) {
    (*body)["CodeRepoUserName"] = *request->codeRepoUserName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    (*body)["Description"] = *request->description;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    (*body)["DisplayName"] = *request->displayName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mountPath)) {
    (*body)["MountPath"] = *request->mountPath;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateCodeSourceResponse(doROARequest(make_shared<string>("CreateCodeSource"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/codesources")), make_shared<string>("json"), req, runtime));
}

CreateDataSourceResponse Alibabacloud_Pai-dlc20201203::Client::createDataSource(shared_ptr<CreateDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createDataSourceWithOptions(request, headers, runtime);
}

CreateDataSourceResponse Alibabacloud_Pai-dlc20201203::Client::createDataSourceWithOptions(shared_ptr<CreateDataSourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    (*body)["DataSourceType"] = *request->dataSourceType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    (*body)["Description"] = *request->description;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    (*body)["DisplayName"] = *request->displayName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpoint)) {
    (*body)["Endpoint"] = *request->endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSystemId)) {
    (*body)["FileSystemId"] = *request->fileSystemId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mountPath)) {
    (*body)["MountPath"] = *request->mountPath;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->options)) {
    (*body)["Options"] = *request->options;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    (*body)["Path"] = *request->path;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateDataSourceResponse(doROARequest(make_shared<string>("CreateDataSource"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/datasources")), make_shared<string>("json"), req, runtime));
}

CreateJobResponse Alibabacloud_Pai-dlc20201203::Client::createJob(shared_ptr<CreateJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createJobWithOptions(request, headers, runtime);
}

CreateJobResponse Alibabacloud_Pai-dlc20201203::Client::createJobWithOptions(shared_ptr<CreateJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<CreateJobRequestCodeSource>(request->codeSource)) {
    (*body)["CodeSource"] = *request->codeSource;
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateJobRequestDataSources>>(request->dataSources)) {
    (*body)["DataSources"] = *request->dataSources;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    (*body)["DisplayName"] = *request->displayName;
  }
  if (!Darabonba_Util::Client::isUnset<JobElasticSpec>(request->elasticSpec)) {
    (*body)["ElasticSpec"] = *request->elasticSpec;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(request->envs)) {
    (*body)["Envs"] = *request->envs;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->jobMaxRunningTimeMinutes)) {
    (*body)["JobMaxRunningTimeMinutes"] = *request->jobMaxRunningTimeMinutes;
  }
  if (!Darabonba_Util::Client::isUnset<vector<JobSpec>>(request->jobSpecs)) {
    (*body)["JobSpecs"] = *request->jobSpecs;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobType)) {
    (*body)["JobType"] = *request->jobType;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    (*body)["Priority"] = *request->priority;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    (*body)["ResourceId"] = *request->resourceId;
  }
  if (!Darabonba_Util::Client::isUnset<JobSettings>(request->settings)) {
    (*body)["Settings"] = *request->settings;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartyLibDir)) {
    (*body)["ThirdpartyLibDir"] = *request->thirdpartyLibDir;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->thirdpartyLibs)) {
    (*body)["ThirdpartyLibs"] = *request->thirdpartyLibs;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userCommand)) {
    (*body)["UserCommand"] = *request->userCommand;
  }
  if (!Darabonba_Util::Client::isUnset<CreateJobRequestUserVpc>(request->userVpc)) {
    (*body)["UserVpc"] = *request->userVpc;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    (*body)["WorkspaceId"] = *request->workspaceId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateJobResponse(doROARequest(make_shared<string>("CreateJob"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/jobs")), make_shared<string>("json"), req, runtime));
}

CreateTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::createTensorboard(shared_ptr<CreateTensorboardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createTensorboardWithOptions(request, headers, runtime);
}

CreateTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::createTensorboardWithOptions(shared_ptr<CreateTensorboardRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    (*query)["WorkspaceId"] = *request->workspaceId;
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceId)) {
    (*body)["DataSourceId"] = *request->dataSourceId;
  }
  if (!Darabonba_Util::Client::isUnset<vector<DataSourceItem>>(request->dataSources)) {
    (*body)["DataSources"] = *request->dataSources;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    (*body)["DisplayName"] = *request->displayName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    (*body)["JobId"] = *request->jobId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxRunningTimeMinutes)) {
    (*body)["MaxRunningTimeMinutes"] = *request->maxRunningTimeMinutes;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->summaryPath)) {
    (*body)["SummaryPath"] = *request->summaryPath;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateTensorboardResponse(doROARequest(make_shared<string>("CreateTensorboard"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/tensorboards")), make_shared<string>("json"), req, runtime));
}

DeleteCodeSourceResponse Alibabacloud_Pai-dlc20201203::Client::deleteCodeSource(shared_ptr<string> CodeSourceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteCodeSourceWithOptions(CodeSourceId, headers, runtime);
}

DeleteCodeSourceResponse Alibabacloud_Pai-dlc20201203::Client::deleteCodeSourceWithOptions(shared_ptr<string> CodeSourceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  CodeSourceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(CodeSourceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DeleteCodeSourceResponse(doROARequest(make_shared<string>("DeleteCodeSource"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/codesources/") + string(*CodeSourceId)), make_shared<string>("json"), req, runtime));
}

DeleteDataSourceResponse Alibabacloud_Pai-dlc20201203::Client::deleteDataSource(shared_ptr<string> DataSourceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteDataSourceWithOptions(DataSourceId, headers, runtime);
}

DeleteDataSourceResponse Alibabacloud_Pai-dlc20201203::Client::deleteDataSourceWithOptions(shared_ptr<string> DataSourceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  DataSourceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(DataSourceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DeleteDataSourceResponse(doROARequest(make_shared<string>("DeleteDataSource"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/datasources/") + string(*DataSourceId)), make_shared<string>("json"), req, runtime));
}

DeleteJobResponse Alibabacloud_Pai-dlc20201203::Client::deleteJob(shared_ptr<string> JobId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteJobWithOptions(JobId, headers, runtime);
}

DeleteJobResponse Alibabacloud_Pai-dlc20201203::Client::deleteJobWithOptions(shared_ptr<string> JobId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  JobId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(JobId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DeleteJobResponse(doROARequest(make_shared<string>("DeleteJob"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/jobs/") + string(*JobId)), make_shared<string>("json"), req, runtime));
}

DeleteTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::deleteTensorboard(shared_ptr<string> TensorboardId, shared_ptr<DeleteTensorboardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteTensorboardWithOptions(TensorboardId, request, headers, runtime);
}

DeleteTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::deleteTensorboardWithOptions(shared_ptr<string> TensorboardId,
                                                                                             shared_ptr<DeleteTensorboardRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  TensorboardId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TensorboardId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    (*query)["WorkspaceId"] = *request->workspaceId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteTensorboardResponse(doROARequest(make_shared<string>("DeleteTensorboard"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/tensorboards/") + string(*TensorboardId)), make_shared<string>("json"), req, runtime));
}

GetAuthorizationResponse Alibabacloud_Pai-dlc20201203::Client::getAuthorization() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAuthorizationWithOptions(headers, runtime);
}

GetAuthorizationResponse Alibabacloud_Pai-dlc20201203::Client::getAuthorizationWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetAuthorizationResponse(doROARequest(make_shared<string>("GetAuthorization"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/authorization")), make_shared<string>("json"), req, runtime));
}

GetCodeSourceResponse Alibabacloud_Pai-dlc20201203::Client::getCodeSource(shared_ptr<string> CodeSourceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getCodeSourceWithOptions(CodeSourceId, headers, runtime);
}

GetCodeSourceResponse Alibabacloud_Pai-dlc20201203::Client::getCodeSourceWithOptions(shared_ptr<string> CodeSourceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  CodeSourceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(CodeSourceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetCodeSourceResponse(doROARequest(make_shared<string>("GetCodeSource"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/codesources/") + string(*CodeSourceId)), make_shared<string>("json"), req, runtime));
}

GetDataSourceResponse Alibabacloud_Pai-dlc20201203::Client::getDataSource(shared_ptr<string> DataSourceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDataSourceWithOptions(DataSourceId, headers, runtime);
}

GetDataSourceResponse Alibabacloud_Pai-dlc20201203::Client::getDataSourceWithOptions(shared_ptr<string> DataSourceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  DataSourceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(DataSourceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetDataSourceResponse(doROARequest(make_shared<string>("GetDataSource"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/datasources/") + string(*DataSourceId)), make_shared<string>("json"), req, runtime));
}

GetJobResponse Alibabacloud_Pai-dlc20201203::Client::getJob(shared_ptr<string> JobId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getJobWithOptions(JobId, headers, runtime);
}

GetJobResponse Alibabacloud_Pai-dlc20201203::Client::getJobWithOptions(shared_ptr<string> JobId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  JobId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(JobId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetJobResponse(doROARequest(make_shared<string>("GetJob"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/jobs/") + string(*JobId)), make_shared<string>("json"), req, runtime));
}

GetJobEventsResponse Alibabacloud_Pai-dlc20201203::Client::getJobEvents(shared_ptr<string> JobId, shared_ptr<GetJobEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getJobEventsWithOptions(JobId, request, headers, runtime);
}

GetJobEventsResponse Alibabacloud_Pai-dlc20201203::Client::getJobEventsWithOptions(shared_ptr<string> JobId,
                                                                                   shared_ptr<GetJobEventsRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  JobId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(JobId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    (*query)["EndTime"] = *request->endTime;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxEventsNum)) {
    (*query)["MaxEventsNum"] = *request->maxEventsNum;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    (*query)["StartTime"] = *request->startTime;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetJobEventsResponse(doROARequest(make_shared<string>("GetJobEvents"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/jobs/") + string(*JobId) + string("/events")), make_shared<string>("json"), req, runtime));
}

GetJobMetricsResponse Alibabacloud_Pai-dlc20201203::Client::getJobMetrics(shared_ptr<string> JobId, shared_ptr<GetJobMetricsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getJobMetricsWithOptions(JobId, request, headers, runtime);
}

GetJobMetricsResponse Alibabacloud_Pai-dlc20201203::Client::getJobMetricsWithOptions(shared_ptr<string> JobId,
                                                                                     shared_ptr<GetJobMetricsRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  JobId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(JobId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    (*query)["EndTime"] = *request->endTime;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricType)) {
    (*query)["MetricType"] = *request->metricType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    (*query)["StartTime"] = *request->startTime;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeStep)) {
    (*query)["TimeStep"] = *request->timeStep;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    (*query)["Token"] = *request->token;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetJobMetricsResponse(doROARequest(make_shared<string>("GetJobMetrics"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/jobs/") + string(*JobId) + string("/metrics")), make_shared<string>("json"), req, runtime));
}

GetJobsStatisticsResponse Alibabacloud_Pai-dlc20201203::Client::getJobsStatistics(shared_ptr<GetJobsStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getJobsStatisticsWithOptions(request, headers, runtime);
}

GetJobsStatisticsResponse Alibabacloud_Pai-dlc20201203::Client::getJobsStatisticsWithOptions(shared_ptr<GetJobsStatisticsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    (*query)["WorkspaceId"] = *request->workspaceId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetJobsStatisticsResponse(doROARequest(make_shared<string>("GetJobsStatistics"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/statistics/jobs")), make_shared<string>("json"), req, runtime));
}

GetPodEventsResponse Alibabacloud_Pai-dlc20201203::Client::getPodEvents(shared_ptr<string> JobId, shared_ptr<string> PodId, shared_ptr<GetPodEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getPodEventsWithOptions(JobId, PodId, request, headers, runtime);
}

GetPodEventsResponse Alibabacloud_Pai-dlc20201203::Client::getPodEventsWithOptions(shared_ptr<string> JobId,
                                                                                   shared_ptr<string> PodId,
                                                                                   shared_ptr<GetPodEventsRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  JobId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(JobId));
  PodId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(PodId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    (*query)["EndTime"] = *request->endTime;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxEventsNum)) {
    (*query)["MaxEventsNum"] = *request->maxEventsNum;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    (*query)["StartTime"] = *request->startTime;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetPodEventsResponse(doROARequest(make_shared<string>("GetPodEvents"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/jobs/") + string(*JobId) + string("/pods/") + string(*PodId) + string("/events")), make_shared<string>("json"), req, runtime));
}

GetPodLogsResponse Alibabacloud_Pai-dlc20201203::Client::getPodLogs(shared_ptr<string> JobId, shared_ptr<string> PodId, shared_ptr<GetPodLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getPodLogsWithOptions(JobId, PodId, request, headers, runtime);
}

GetPodLogsResponse Alibabacloud_Pai-dlc20201203::Client::getPodLogsWithOptions(shared_ptr<string> JobId,
                                                                               shared_ptr<string> PodId,
                                                                               shared_ptr<GetPodLogsRequest> request,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  JobId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(JobId));
  PodId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(PodId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->downloadToFile)) {
    (*query)["DownloadToFile"] = *request->downloadToFile;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    (*query)["EndTime"] = *request->endTime;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxLines)) {
    (*query)["MaxLines"] = *request->maxLines;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    (*query)["StartTime"] = *request->startTime;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetPodLogsResponse(doROARequest(make_shared<string>("GetPodLogs"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/jobs/") + string(*JobId) + string("/pods/") + string(*PodId) + string("/logs")), make_shared<string>("json"), req, runtime));
}

GetSecurityGroupResponse Alibabacloud_Pai-dlc20201203::Client::getSecurityGroup(shared_ptr<string> SecurityGroupId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSecurityGroupWithOptions(SecurityGroupId, headers, runtime);
}

GetSecurityGroupResponse Alibabacloud_Pai-dlc20201203::Client::getSecurityGroupWithOptions(shared_ptr<string> SecurityGroupId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  SecurityGroupId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(SecurityGroupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetSecurityGroupResponse(doROARequest(make_shared<string>("GetSecurityGroup"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/securitygroups/") + string(*SecurityGroupId)), make_shared<string>("json"), req, runtime));
}

GetSwitchResponse Alibabacloud_Pai-dlc20201203::Client::getSwitch(shared_ptr<string> SwitchId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSwitchWithOptions(SwitchId, headers, runtime);
}

GetSwitchResponse Alibabacloud_Pai-dlc20201203::Client::getSwitchWithOptions(shared_ptr<string> SwitchId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  SwitchId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(SwitchId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetSwitchResponse(doROARequest(make_shared<string>("GetSwitch"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/switches/") + string(*SwitchId)), make_shared<string>("json"), req, runtime));
}

GetTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::getTensorboard(shared_ptr<string> TensorboardId, shared_ptr<GetTensorboardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTensorboardWithOptions(TensorboardId, request, headers, runtime);
}

GetTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::getTensorboardWithOptions(shared_ptr<string> TensorboardId,
                                                                                       shared_ptr<GetTensorboardRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  TensorboardId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TensorboardId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jodId)) {
    (*query)["JodId"] = *request->jodId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    (*query)["WorkspaceId"] = *request->workspaceId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetTensorboardResponse(doROARequest(make_shared<string>("GetTensorboard"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/tensorboards/") + string(*TensorboardId)), make_shared<string>("json"), req, runtime));
}

GetTokenResponse Alibabacloud_Pai-dlc20201203::Client::getToken(shared_ptr<GetTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTokenWithOptions(request, headers, runtime);
}

GetTokenResponse Alibabacloud_Pai-dlc20201203::Client::getTokenWithOptions(shared_ptr<GetTokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->expireTime)) {
    (*query)["ExpireTime"] = *request->expireTime;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetId)) {
    (*query)["TargetId"] = *request->targetId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetType)) {
    (*query)["TargetType"] = *request->targetType;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetTokenResponse(doROARequest(make_shared<string>("GetToken"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/tokens")), make_shared<string>("json"), req, runtime));
}

GetUserAuthorizationResponse Alibabacloud_Pai-dlc20201203::Client::getUserAuthorization(shared_ptr<string> UserId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getUserAuthorizationWithOptions(UserId, headers, runtime);
}

GetUserAuthorizationResponse Alibabacloud_Pai-dlc20201203::Client::getUserAuthorizationWithOptions(shared_ptr<string> UserId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  UserId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(UserId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetUserAuthorizationResponse(doROARequest(make_shared<string>("GetUserAuthorization"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/users/") + string(*UserId) + string("/authorization")), make_shared<string>("json"), req, runtime));
}

GetVpcResponse Alibabacloud_Pai-dlc20201203::Client::getVpc(shared_ptr<string> VpcId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getVpcWithOptions(VpcId, headers, runtime);
}

GetVpcResponse Alibabacloud_Pai-dlc20201203::Client::getVpcWithOptions(shared_ptr<string> VpcId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  VpcId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(VpcId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetVpcResponse(doROARequest(make_shared<string>("GetVpc"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/vpcs/") + string(*VpcId)), make_shared<string>("json"), req, runtime));
}

GetWorkspaceResponse Alibabacloud_Pai-dlc20201203::Client::getWorkspace(shared_ptr<string> WorkspaceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getWorkspaceWithOptions(WorkspaceId, headers, runtime);
}

GetWorkspaceResponse Alibabacloud_Pai-dlc20201203::Client::getWorkspaceWithOptions(shared_ptr<string> WorkspaceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  WorkspaceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetWorkspaceResponse(doROARequest(make_shared<string>("GetWorkspace"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/workspaces/") + string(*WorkspaceId)), make_shared<string>("json"), req, runtime));
}

JobDispatchQueryResponse Alibabacloud_Pai-dlc20201203::Client::jobDispatchQuery(shared_ptr<JobDispatchQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return jobDispatchQueryWithOptions(request, headers, runtime);
}

JobDispatchQueryResponse Alibabacloud_Pai-dlc20201203::Client::jobDispatchQueryWithOptions(shared_ptr<JobDispatchQueryRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<JobDispatchQueryShrinkRequest> request = make_shared<JobDispatchQueryShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->properties)) {
    request->propertiesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->properties, make_shared<string>("Properties"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->settings)) {
    request->settingsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->settings, make_shared<string>("Settings"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->algoName)) {
    (*query)["AlgoName"] = *request->algoName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    (*query)["ProjectName"] = *request->projectName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->propertiesShrink)) {
    (*query)["Properties"] = *request->propertiesShrink;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->settingsShrink)) {
    (*query)["Settings"] = *request->settingsShrink;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return JobDispatchQueryResponse(doROARequest(make_shared<string>("JobDispatchQuery"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/jobdispatch")), make_shared<string>("json"), req, runtime));
}

JobDispatchSubmitResponse Alibabacloud_Pai-dlc20201203::Client::jobDispatchSubmit(shared_ptr<JobDispatchSubmitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return jobDispatchSubmitWithOptions(request, headers, runtime);
}

JobDispatchSubmitResponse Alibabacloud_Pai-dlc20201203::Client::jobDispatchSubmitWithOptions(shared_ptr<JobDispatchSubmitRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->algoName)) {
    (*body)["AlgoName"] = *request->algoName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    (*body)["ProjectName"] = *request->projectName;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(request->properties)) {
    (*body)["Properties"] = *request->properties;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(request->settings)) {
    (*body)["Settings"] = *request->settings;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return JobDispatchSubmitResponse(doROARequest(make_shared<string>("JobDispatchSubmit"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/jobdispatch")), make_shared<string>("json"), req, runtime));
}

ListCodeSourcesResponse Alibabacloud_Pai-dlc20201203::Client::listCodeSources(shared_ptr<ListCodeSourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listCodeSourcesWithOptions(request, headers, runtime);
}

ListCodeSourcesResponse Alibabacloud_Pai-dlc20201203::Client::listCodeSourcesWithOptions(shared_ptr<ListCodeSourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    (*query)["DisplayName"] = *request->displayName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    (*query)["Order"] = *request->order;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*query)["PageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    (*query)["SortBy"] = *request->sortBy;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListCodeSourcesResponse(doROARequest(make_shared<string>("ListCodeSources"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/codesources")), make_shared<string>("json"), req, runtime));
}

ListDataSourcesResponse Alibabacloud_Pai-dlc20201203::Client::listDataSources(shared_ptr<ListDataSourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDataSourcesWithOptions(request, headers, runtime);
}

ListDataSourcesResponse Alibabacloud_Pai-dlc20201203::Client::listDataSourcesWithOptions(shared_ptr<ListDataSourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    (*query)["DataSourceType"] = *request->dataSourceType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    (*query)["DisplayName"] = *request->displayName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    (*query)["Order"] = *request->order;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*query)["PageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    (*query)["SortBy"] = *request->sortBy;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListDataSourcesResponse(doROARequest(make_shared<string>("ListDataSources"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/datasources")), make_shared<string>("json"), req, runtime));
}

ListEcsSpecsResponse Alibabacloud_Pai-dlc20201203::Client::listEcsSpecs(shared_ptr<ListEcsSpecsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listEcsSpecsWithOptions(request, headers, runtime);
}

ListEcsSpecsResponse Alibabacloud_Pai-dlc20201203::Client::listEcsSpecsWithOptions(shared_ptr<ListEcsSpecsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    (*query)["Order"] = *request->order;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*query)["PageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    (*query)["SortBy"] = *request->sortBy;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListEcsSpecsResponse(doROARequest(make_shared<string>("ListEcsSpecs"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/ecsspecs")), make_shared<string>("json"), req, runtime));
}

ListImagesResponse Alibabacloud_Pai-dlc20201203::Client::listImages(shared_ptr<ListImagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listImagesWithOptions(request, headers, runtime);
}

ListImagesResponse Alibabacloud_Pai-dlc20201203::Client::listImagesWithOptions(shared_ptr<ListImagesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorType)) {
    (*query)["AcceleratorType"] = *request->acceleratorType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->framework)) {
    (*query)["Framework"] = *request->framework;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageProviderType)) {
    (*query)["ImageProviderType"] = *request->imageProviderType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    (*query)["Order"] = *request->order;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    (*query)["SortBy"] = *request->sortBy;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListImagesResponse(doROARequest(make_shared<string>("ListImages"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/images")), make_shared<string>("json"), req, runtime));
}

ListJobsResponse Alibabacloud_Pai-dlc20201203::Client::listJobs(shared_ptr<ListJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listJobsWithOptions(request, headers, runtime);
}

ListJobsResponse Alibabacloud_Pai-dlc20201203::Client::listJobsWithOptions(shared_ptr<ListJobsRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListJobsShrinkRequest> request = make_shared<ListJobsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessUserId)) {
    (*query)["BusinessUserId"] = *request->businessUserId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->caller)) {
    (*query)["Caller"] = *request->caller;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    (*query)["DisplayName"] = *request->displayName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    (*query)["EndTime"] = *request->endTime;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobType)) {
    (*query)["JobType"] = *request->jobType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    (*query)["Order"] = *request->order;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*query)["PageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineId)) {
    (*query)["PipelineId"] = *request->pipelineId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    (*query)["ResourceId"] = *request->resourceId;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showOwn)) {
    (*query)["ShowOwn"] = *request->showOwn;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    (*query)["SortBy"] = *request->sortBy;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    (*query)["StartTime"] = *request->startTime;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    (*query)["Status"] = *request->status;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    (*query)["Tags"] = *request->tagsShrink;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    (*query)["WorkspaceId"] = *request->workspaceId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListJobsResponse(doROARequest(make_shared<string>("ListJobs"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/jobs")), make_shared<string>("json"), req, runtime));
}

ListSecurityGroupsResponse Alibabacloud_Pai-dlc20201203::Client::listSecurityGroups(shared_ptr<ListSecurityGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSecurityGroupsWithOptions(request, headers, runtime);
}

ListSecurityGroupsResponse Alibabacloud_Pai-dlc20201203::Client::listSecurityGroupsWithOptions(shared_ptr<ListSecurityGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*query)["PageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    (*query)["VpcId"] = *request->vpcId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListSecurityGroupsResponse(doROARequest(make_shared<string>("ListSecurityGroups"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/securitygroups")), make_shared<string>("json"), req, runtime));
}

ListSwitchesResponse Alibabacloud_Pai-dlc20201203::Client::listSwitches(shared_ptr<ListSwitchesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSwitchesWithOptions(request, headers, runtime);
}

ListSwitchesResponse Alibabacloud_Pai-dlc20201203::Client::listSwitchesWithOptions(shared_ptr<ListSwitchesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*query)["PageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    (*query)["VpcId"] = *request->vpcId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListSwitchesResponse(doROARequest(make_shared<string>("ListSwitches"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/switches")), make_shared<string>("json"), req, runtime));
}

ListTensorboardsResponse Alibabacloud_Pai-dlc20201203::Client::listTensorboards(shared_ptr<ListTensorboardsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTensorboardsWithOptions(request, headers, runtime);
}

ListTensorboardsResponse Alibabacloud_Pai-dlc20201203::Client::listTensorboardsWithOptions(shared_ptr<ListTensorboardsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    (*query)["DisplayName"] = *request->displayName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    (*query)["EndTime"] = *request->endTime;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    (*query)["JobId"] = *request->jobId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    (*query)["Order"] = *request->order;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*query)["PageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    (*query)["SortBy"] = *request->sortBy;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    (*query)["StartTime"] = *request->startTime;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    (*query)["Status"] = *request->status;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tensorboardId)) {
    (*query)["TensorboardId"] = *request->tensorboardId;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->verbose)) {
    (*query)["Verbose"] = *request->verbose;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    (*query)["WorkspaceId"] = *request->workspaceId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListTensorboardsResponse(doROARequest(make_shared<string>("ListTensorboards"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/tensorboards")), make_shared<string>("json"), req, runtime));
}

ListVpcsResponse Alibabacloud_Pai-dlc20201203::Client::listVpcs(shared_ptr<ListVpcsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listVpcsWithOptions(request, headers, runtime);
}

ListVpcsResponse Alibabacloud_Pai-dlc20201203::Client::listVpcsWithOptions(shared_ptr<ListVpcsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*query)["PageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListVpcsResponse(doROARequest(make_shared<string>("ListVpcs"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/vpcs")), make_shared<string>("json"), req, runtime));
}

ListWorkspacesResponse Alibabacloud_Pai-dlc20201203::Client::listWorkspaces(shared_ptr<ListWorkspacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listWorkspacesWithOptions(request, headers, runtime);
}

ListWorkspacesResponse Alibabacloud_Pai-dlc20201203::Client::listWorkspacesWithOptions(shared_ptr<ListWorkspacesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->needDetail)) {
    (*query)["NeedDetail"] = *request->needDetail;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    (*query)["Order"] = *request->order;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*query)["PageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    (*query)["SortBy"] = *request->sortBy;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListWorkspacesResponse(doROARequest(make_shared<string>("ListWorkspaces"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/workspaces")), make_shared<string>("json"), req, runtime));
}

StartTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::startTensorboard(shared_ptr<string> TensorboardId, shared_ptr<StartTensorboardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startTensorboardWithOptions(TensorboardId, request, headers, runtime);
}

StartTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::startTensorboardWithOptions(shared_ptr<string> TensorboardId,
                                                                                           shared_ptr<StartTensorboardRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  TensorboardId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TensorboardId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    (*query)["WorkspaceId"] = *request->workspaceId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return StartTensorboardResponse(doROARequest(make_shared<string>("StartTensorboard"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/tensorboards/") + string(*TensorboardId) + string("/start")), make_shared<string>("json"), req, runtime));
}

StopJobResponse Alibabacloud_Pai-dlc20201203::Client::stopJob(shared_ptr<string> JobId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopJobWithOptions(JobId, headers, runtime);
}

StopJobResponse Alibabacloud_Pai-dlc20201203::Client::stopJobWithOptions(shared_ptr<string> JobId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  JobId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(JobId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return StopJobResponse(doROARequest(make_shared<string>("StopJob"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/jobs/") + string(*JobId) + string("/stop")), make_shared<string>("json"), req, runtime));
}

StopTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::stopTensorboard(shared_ptr<string> TensorboardId, shared_ptr<StopTensorboardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopTensorboardWithOptions(TensorboardId, request, headers, runtime);
}

StopTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::stopTensorboardWithOptions(shared_ptr<string> TensorboardId,
                                                                                         shared_ptr<StopTensorboardRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  TensorboardId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TensorboardId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    (*query)["WorkspaceId"] = *request->workspaceId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return StopTensorboardResponse(doROARequest(make_shared<string>("StopTensorboard"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/tensorboards/") + string(*TensorboardId) + string("/stop")), make_shared<string>("json"), req, runtime));
}

UpdateTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::updateTensorboard(shared_ptr<string> TensorboardId, shared_ptr<UpdateTensorboardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateTensorboardWithOptions(TensorboardId, request, headers, runtime);
}

UpdateTensorboardResponse Alibabacloud_Pai-dlc20201203::Client::updateTensorboardWithOptions(shared_ptr<string> TensorboardId,
                                                                                             shared_ptr<UpdateTensorboardRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  TensorboardId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TensorboardId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxRunningTimeMinutes)) {
    (*query)["MaxRunningTimeMinutes"] = *request->maxRunningTimeMinutes;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    (*query)["WorkspaceId"] = *request->workspaceId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateTensorboardResponse(doROARequest(make_shared<string>("UpdateTensorboard"), make_shared<string>("2020-12-03"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/tensorboards/") + string(*TensorboardId)), make_shared<string>("json"), req, runtime));
}

