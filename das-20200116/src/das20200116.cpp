// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/das20200116.hpp>
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

using namespace Alibabacloud_DAS20200116;

Alibabacloud_DAS20200116::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-shanghai", "das.cn-shanghai.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("das"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_DAS20200116::Client::getEndpoint(shared_ptr<string> productId,
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

AddHDMInstanceResponse Alibabacloud_DAS20200116::Client::addHDMInstanceWithOptions(shared_ptr<AddHDMInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->engine)) {
    query->insert(pair<string, string>("Engine", *request->engine));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->flushAccount)) {
    query->insert(pair<string, string>("FlushAccount", *request->flushAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceAlias)) {
    query->insert(pair<string, string>("InstanceAlias", *request->instanceAlias));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceArea)) {
    query->insert(pair<string, string>("InstanceArea", *request->instanceArea));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    query->insert(pair<string, string>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkType)) {
    query->insert(pair<string, string>("NetworkType", *request->networkType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->port)) {
    query->insert(pair<string, string>("Port", *request->port));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    query->insert(pair<string, string>("Username", *request->username));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->context)) {
    query->insert(pair<string, string>("__context", *request->context));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddHDMInstance"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddHDMInstanceResponse(callApi(params, req, runtime));
}

AddHDMInstanceResponse Alibabacloud_DAS20200116::Client::addHDMInstance(shared_ptr<AddHDMInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addHDMInstanceWithOptions(request, runtime);
}

CreateCacheAnalysisJobResponse Alibabacloud_DAS20200116::Client::createCacheAnalysisJobWithOptions(shared_ptr<CreateCacheAnalysisJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupSetId)) {
    query->insert(pair<string, string>("BackupSetId", *request->backupSetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->separators)) {
    query->insert(pair<string, string>("Separators", *request->separators));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCacheAnalysisJob"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCacheAnalysisJobResponse(callApi(params, req, runtime));
}

CreateCacheAnalysisJobResponse Alibabacloud_DAS20200116::Client::createCacheAnalysisJob(shared_ptr<CreateCacheAnalysisJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCacheAnalysisJobWithOptions(request, runtime);
}

CreateCloudBenchTasksResponse Alibabacloud_DAS20200116::Client::createCloudBenchTasksWithOptions(shared_ptr<CreateCloudBenchTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->amount)) {
    query->insert(pair<string, string>("Amount", *request->amount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupId)) {
    query->insert(pair<string, string>("BackupId", *request->backupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupTime)) {
    query->insert(pair<string, string>("BackupTime", *request->backupTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientType)) {
    query->insert(pair<string, string>("ClientType", *request->clientType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dstConnectionString)) {
    query->insert(pair<string, string>("DstConnectionString", *request->dstConnectionString));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dstInstanceId)) {
    query->insert(pair<string, string>("DstInstanceId", *request->dstInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dstPort)) {
    query->insert(pair<string, string>("DstPort", *request->dstPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dstSuperAccount)) {
    query->insert(pair<string, string>("DstSuperAccount", *request->dstSuperAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dstSuperPassword)) {
    query->insert(pair<string, string>("DstSuperPassword", *request->dstSuperPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dstType)) {
    query->insert(pair<string, string>("DstType", *request->dstType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobClass)) {
    query->insert(pair<string, string>("DtsJobClass", *request->dtsJobClass));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endState)) {
    query->insert(pair<string, string>("EndState", *request->endState));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayVpcId)) {
    query->insert(pair<string, string>("GatewayVpcId", *request->gatewayVpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayVpcIp)) {
    query->insert(pair<string, string>("GatewayVpcIp", *request->gatewayVpcIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rate)) {
    query->insert(pair<string, string>("Rate", *request->rate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestDuration)) {
    query->insert(pair<string, string>("RequestDuration", *request->requestDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestEndTime)) {
    query->insert(pair<string, string>("RequestEndTime", *request->requestEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestStartTime)) {
    query->insert(pair<string, string>("RequestStartTime", *request->requestStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->smartPressureTime)) {
    query->insert(pair<string, string>("SmartPressureTime", *request->smartPressureTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcInstanceId)) {
    query->insert(pair<string, string>("SrcInstanceId", *request->srcInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcPublicIp)) {
    query->insert(pair<string, string>("SrcPublicIp", *request->srcPublicIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcSuperAccount)) {
    query->insert(pair<string, string>("SrcSuperAccount", *request->srcSuperAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcSuperPassword)) {
    query->insert(pair<string, string>("SrcSuperPassword", *request->srcSuperPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("TaskType", *request->taskType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workDir)) {
    query->insert(pair<string, string>("WorkDir", *request->workDir));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCloudBenchTasks"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCloudBenchTasksResponse(callApi(params, req, runtime));
}

CreateCloudBenchTasksResponse Alibabacloud_DAS20200116::Client::createCloudBenchTasks(shared_ptr<CreateCloudBenchTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCloudBenchTasksWithOptions(request, runtime);
}

CreateDiagnosticReportResponse Alibabacloud_DAS20200116::Client::createDiagnosticReportWithOptions(shared_ptr<CreateDiagnosticReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBInstanceId)) {
    query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
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
    {"action", boost::any(string("CreateDiagnosticReport"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDiagnosticReportResponse(callApi(params, req, runtime));
}

CreateDiagnosticReportResponse Alibabacloud_DAS20200116::Client::createDiagnosticReport(shared_ptr<CreateDiagnosticReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDiagnosticReportWithOptions(request, runtime);
}

CreateKillInstanceSessionTaskResponse Alibabacloud_DAS20200116::Client::createKillInstanceSessionTaskWithOptions(shared_ptr<CreateKillInstanceSessionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbUser)) {
    query->insert(pair<string, string>("DbUser", *request->dbUser));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbUserPassword)) {
    query->insert(pair<string, string>("DbUserPassword", *request->dbUserPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ignoredUsers)) {
    query->insert(pair<string, string>("IgnoredUsers", *request->ignoredUsers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->killAllSessions)) {
    query->insert(pair<string, bool>("KillAllSessions", *request->killAllSessions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionIds)) {
    query->insert(pair<string, string>("SessionIds", *request->sessionIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateKillInstanceSessionTask"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateKillInstanceSessionTaskResponse(callApi(params, req, runtime));
}

CreateKillInstanceSessionTaskResponse Alibabacloud_DAS20200116::Client::createKillInstanceSessionTask(shared_ptr<CreateKillInstanceSessionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createKillInstanceSessionTaskWithOptions(request, runtime);
}

CreateKillInstanceSessionTaskWithMaintainUserResponse Alibabacloud_DAS20200116::Client::createKillInstanceSessionTaskWithMaintainUserWithOptions(shared_ptr<CreateKillInstanceSessionTaskWithMaintainUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ignoredUsers)) {
    query->insert(pair<string, string>("IgnoredUsers", *request->ignoredUsers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->killAllSessions)) {
    query->insert(pair<string, bool>("KillAllSessions", *request->killAllSessions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionIds)) {
    query->insert(pair<string, string>("SessionIds", *request->sessionIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateKillInstanceSessionTaskWithMaintainUser"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateKillInstanceSessionTaskWithMaintainUserResponse(callApi(params, req, runtime));
}

CreateKillInstanceSessionTaskWithMaintainUserResponse Alibabacloud_DAS20200116::Client::createKillInstanceSessionTaskWithMaintainUser(shared_ptr<CreateKillInstanceSessionTaskWithMaintainUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createKillInstanceSessionTaskWithMaintainUserWithOptions(request, runtime);
}

CreateLatestDeadLockAnalysisResponse Alibabacloud_DAS20200116::Client::createLatestDeadLockAnalysisWithOptions(shared_ptr<CreateLatestDeadLockAnalysisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    body->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLatestDeadLockAnalysis"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLatestDeadLockAnalysisResponse(callApi(params, req, runtime));
}

CreateLatestDeadLockAnalysisResponse Alibabacloud_DAS20200116::Client::createLatestDeadLockAnalysis(shared_ptr<CreateLatestDeadLockAnalysisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLatestDeadLockAnalysisWithOptions(request, runtime);
}

CreateQueryOptimizeTagResponse Alibabacloud_DAS20200116::Client::createQueryOptimizeTagWithOptions(shared_ptr<CreateQueryOptimizeTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->comments)) {
    query->insert(pair<string, string>("Comments", *request->comments));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engine)) {
    query->insert(pair<string, string>("Engine", *request->engine));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlIds)) {
    query->insert(pair<string, string>("SqlIds", *request->sqlIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateQueryOptimizeTag"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateQueryOptimizeTagResponse(callApi(params, req, runtime));
}

CreateQueryOptimizeTagResponse Alibabacloud_DAS20200116::Client::createQueryOptimizeTag(shared_ptr<CreateQueryOptimizeTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createQueryOptimizeTagWithOptions(request, runtime);
}

CreateRequestDiagnosisResponse Alibabacloud_DAS20200116::Client::createRequestDiagnosisWithOptions(shared_ptr<CreateRequestDiagnosisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->database)) {
    query->insert(pair<string, string>("Database", *request->database));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sql)) {
    query->insert(pair<string, string>("Sql", *request->sql));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRequestDiagnosis"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRequestDiagnosisResponse(callApi(params, req, runtime));
}

CreateRequestDiagnosisResponse Alibabacloud_DAS20200116::Client::createRequestDiagnosis(shared_ptr<CreateRequestDiagnosisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRequestDiagnosisWithOptions(request, runtime);
}

CreateSqlLogTaskResponse Alibabacloud_DAS20200116::Client::createSqlLogTaskWithOptions(shared_ptr<CreateSqlLogTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateSqlLogTaskRequestFilters>>(request->filters)) {
    query->insert(pair<string, vector<CreateSqlLogTaskRequestFilters>>("Filters", *request->filters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->role)) {
    query->insert(pair<string, string>("Role", *request->role));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    body->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSqlLogTask"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSqlLogTaskResponse(callApi(params, req, runtime));
}

CreateSqlLogTaskResponse Alibabacloud_DAS20200116::Client::createSqlLogTask(shared_ptr<CreateSqlLogTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSqlLogTaskWithOptions(request, runtime);
}

CreateStorageAnalysisTaskResponse Alibabacloud_DAS20200116::Client::createStorageAnalysisTaskWithOptions(shared_ptr<CreateStorageAnalysisTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateStorageAnalysisTask"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateStorageAnalysisTaskResponse(callApi(params, req, runtime));
}

CreateStorageAnalysisTaskResponse Alibabacloud_DAS20200116::Client::createStorageAnalysisTask(shared_ptr<CreateStorageAnalysisTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createStorageAnalysisTaskWithOptions(request, runtime);
}

DeleteCloudBenchTaskResponse Alibabacloud_DAS20200116::Client::deleteCloudBenchTaskWithOptions(shared_ptr<DeleteCloudBenchTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCloudBenchTask"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCloudBenchTaskResponse(callApi(params, req, runtime));
}

DeleteCloudBenchTaskResponse Alibabacloud_DAS20200116::Client::deleteCloudBenchTask(shared_ptr<DeleteCloudBenchTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCloudBenchTaskWithOptions(request, runtime);
}

DeleteStopGatewayResponse Alibabacloud_DAS20200116::Client::deleteStopGatewayWithOptions(shared_ptr<DeleteStopGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteStopGateway"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteStopGatewayResponse(callApi(params, req, runtime));
}

DeleteStopGatewayResponse Alibabacloud_DAS20200116::Client::deleteStopGateway(shared_ptr<DeleteStopGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteStopGatewayWithOptions(request, runtime);
}

DescribeAutoScalingConfigResponse Alibabacloud_DAS20200116::Client::describeAutoScalingConfigWithOptions(shared_ptr<DescribeAutoScalingConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAutoScalingConfig"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAutoScalingConfigResponse(callApi(params, req, runtime));
}

DescribeAutoScalingConfigResponse Alibabacloud_DAS20200116::Client::describeAutoScalingConfig(shared_ptr<DescribeAutoScalingConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAutoScalingConfigWithOptions(request, runtime);
}

DescribeAutoScalingHistoryResponse Alibabacloud_DAS20200116::Client::describeAutoScalingHistoryWithOptions(shared_ptr<DescribeAutoScalingHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAutoScalingHistory"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAutoScalingHistoryResponse(callApi(params, req, runtime));
}

DescribeAutoScalingHistoryResponse Alibabacloud_DAS20200116::Client::describeAutoScalingHistory(shared_ptr<DescribeAutoScalingHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAutoScalingHistoryWithOptions(request, runtime);
}

DescribeCacheAnalysisJobResponse Alibabacloud_DAS20200116::Client::describeCacheAnalysisJobWithOptions(shared_ptr<DescribeCacheAnalysisJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCacheAnalysisJob"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCacheAnalysisJobResponse(callApi(params, req, runtime));
}

DescribeCacheAnalysisJobResponse Alibabacloud_DAS20200116::Client::describeCacheAnalysisJob(shared_ptr<DescribeCacheAnalysisJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCacheAnalysisJobWithOptions(request, runtime);
}

DescribeCacheAnalysisJobsResponse Alibabacloud_DAS20200116::Client::describeCacheAnalysisJobsWithOptions(shared_ptr<DescribeCacheAnalysisJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNo)) {
    query->insert(pair<string, string>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCacheAnalysisJobs"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCacheAnalysisJobsResponse(callApi(params, req, runtime));
}

DescribeCacheAnalysisJobsResponse Alibabacloud_DAS20200116::Client::describeCacheAnalysisJobs(shared_ptr<DescribeCacheAnalysisJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCacheAnalysisJobsWithOptions(request, runtime);
}

DescribeCloudBenchTasksResponse Alibabacloud_DAS20200116::Client::describeCloudBenchTasksWithOptions(shared_ptr<DescribeCloudBenchTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNo)) {
    query->insert(pair<string, string>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("TaskType", *request->taskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCloudBenchTasks"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCloudBenchTasksResponse(callApi(params, req, runtime));
}

DescribeCloudBenchTasksResponse Alibabacloud_DAS20200116::Client::describeCloudBenchTasks(shared_ptr<DescribeCloudBenchTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCloudBenchTasksWithOptions(request, runtime);
}

DescribeCloudbenchTaskResponse Alibabacloud_DAS20200116::Client::describeCloudbenchTaskWithOptions(shared_ptr<DescribeCloudbenchTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCloudbenchTask"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCloudbenchTaskResponse(callApi(params, req, runtime));
}

DescribeCloudbenchTaskResponse Alibabacloud_DAS20200116::Client::describeCloudbenchTask(shared_ptr<DescribeCloudbenchTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCloudbenchTaskWithOptions(request, runtime);
}

DescribeCloudbenchTaskConfigResponse Alibabacloud_DAS20200116::Client::describeCloudbenchTaskConfigWithOptions(shared_ptr<DescribeCloudbenchTaskConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCloudbenchTaskConfig"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCloudbenchTaskConfigResponse(callApi(params, req, runtime));
}

DescribeCloudbenchTaskConfigResponse Alibabacloud_DAS20200116::Client::describeCloudbenchTaskConfig(shared_ptr<DescribeCloudbenchTaskConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCloudbenchTaskConfigWithOptions(request, runtime);
}

DescribeDiagnosticReportListResponse Alibabacloud_DAS20200116::Client::describeDiagnosticReportListWithOptions(shared_ptr<DescribeDiagnosticReportListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBInstanceId)) {
    query->insert(pair<string, string>("DBInstanceId", *request->DBInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNo)) {
    query->insert(pair<string, string>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDiagnosticReportList"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDiagnosticReportListResponse(callApi(params, req, runtime));
}

DescribeDiagnosticReportListResponse Alibabacloud_DAS20200116::Client::describeDiagnosticReportList(shared_ptr<DescribeDiagnosticReportListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDiagnosticReportListWithOptions(request, runtime);
}

DescribeHotBigKeysResponse Alibabacloud_DAS20200116::Client::describeHotBigKeysWithOptions(shared_ptr<DescribeHotBigKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consoleContext)) {
    query->insert(pair<string, string>("ConsoleContext", *request->consoleContext));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHotBigKeys"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHotBigKeysResponse(callApi(params, req, runtime));
}

DescribeHotBigKeysResponse Alibabacloud_DAS20200116::Client::describeHotBigKeys(shared_ptr<DescribeHotBigKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHotBigKeysWithOptions(request, runtime);
}

DescribeHotKeysResponse Alibabacloud_DAS20200116::Client::describeHotKeysWithOptions(shared_ptr<DescribeHotKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHotKeys"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHotKeysResponse(callApi(params, req, runtime));
}

DescribeHotKeysResponse Alibabacloud_DAS20200116::Client::describeHotKeys(shared_ptr<DescribeHotKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHotKeysWithOptions(request, runtime);
}

DescribeInstanceDasProResponse Alibabacloud_DAS20200116::Client::describeInstanceDasProWithOptions(shared_ptr<DescribeInstanceDasProRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceDasPro"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceDasProResponse(callApi(params, req, runtime));
}

DescribeInstanceDasProResponse Alibabacloud_DAS20200116::Client::describeInstanceDasPro(shared_ptr<DescribeInstanceDasProRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceDasProWithOptions(request, runtime);
}

DescribeSlowLogHistogramAsyncResponse Alibabacloud_DAS20200116::Client::describeSlowLogHistogramAsyncWithOptions(shared_ptr<DescribeSlowLogHistogramAsyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeSlowLogHistogramAsyncRequestFilters>>(request->filters)) {
    body->insert(pair<string, vector<DescribeSlowLogHistogramAsyncRequestFilters>>("Filters", *request->filters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    body->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSlowLogHistogramAsync"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSlowLogHistogramAsyncResponse(callApi(params, req, runtime));
}

DescribeSlowLogHistogramAsyncResponse Alibabacloud_DAS20200116::Client::describeSlowLogHistogramAsync(shared_ptr<DescribeSlowLogHistogramAsyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSlowLogHistogramAsyncWithOptions(request, runtime);
}

DescribeSlowLogStatisticResponse Alibabacloud_DAS20200116::Client::describeSlowLogStatisticWithOptions(shared_ptr<DescribeSlowLogStatisticRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->asc)) {
    body->insert(pair<string, bool>("Asc", *request->asc));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeSlowLogStatisticRequestFilters>>(request->filters)) {
    body->insert(pair<string, vector<DescribeSlowLogStatisticRequestFilters>>("Filters", *request->filters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    body->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    body->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    body->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSlowLogStatistic"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSlowLogStatisticResponse(callApi(params, req, runtime));
}

DescribeSlowLogStatisticResponse Alibabacloud_DAS20200116::Client::describeSlowLogStatistic(shared_ptr<DescribeSlowLogStatisticRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSlowLogStatisticWithOptions(request, runtime);
}

DescribeSqlLogConfigResponse Alibabacloud_DAS20200116::Client::describeSqlLogConfigWithOptions(shared_ptr<DescribeSqlLogConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSqlLogConfig"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSqlLogConfigResponse(callApi(params, req, runtime));
}

DescribeSqlLogConfigResponse Alibabacloud_DAS20200116::Client::describeSqlLogConfig(shared_ptr<DescribeSqlLogConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSqlLogConfigWithOptions(request, runtime);
}

DescribeSqlLogRecordsResponse Alibabacloud_DAS20200116::Client::describeSqlLogRecordsWithOptions(shared_ptr<DescribeSqlLogRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<DescribeSqlLogRecordsRequestFilters>>(request->filters)) {
    query->insert(pair<string, vector<DescribeSqlLogRecordsRequestFilters>>("Filters", *request->filters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->role)) {
    query->insert(pair<string, string>("Role", *request->role));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    body->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    body->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSqlLogRecords"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSqlLogRecordsResponse(callApi(params, req, runtime));
}

DescribeSqlLogRecordsResponse Alibabacloud_DAS20200116::Client::describeSqlLogRecords(shared_ptr<DescribeSqlLogRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSqlLogRecordsWithOptions(request, runtime);
}

DescribeSqlLogStatisticResponse Alibabacloud_DAS20200116::Client::describeSqlLogStatisticWithOptions(shared_ptr<DescribeSqlLogStatisticRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSqlLogStatistic"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSqlLogStatisticResponse(callApi(params, req, runtime));
}

DescribeSqlLogStatisticResponse Alibabacloud_DAS20200116::Client::describeSqlLogStatistic(shared_ptr<DescribeSqlLogStatisticRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSqlLogStatisticWithOptions(request, runtime);
}

DescribeSqlLogTaskResponse Alibabacloud_DAS20200116::Client::describeSqlLogTaskWithOptions(shared_ptr<DescribeSqlLogTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    body->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSqlLogTask"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSqlLogTaskResponse(callApi(params, req, runtime));
}

DescribeSqlLogTaskResponse Alibabacloud_DAS20200116::Client::describeSqlLogTask(shared_ptr<DescribeSqlLogTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSqlLogTaskWithOptions(request, runtime);
}

DescribeSqlLogTasksResponse Alibabacloud_DAS20200116::Client::describeSqlLogTasksWithOptions(shared_ptr<DescribeSqlLogTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeSqlLogTasksRequestFilters>>(request->filters)) {
    body->insert(pair<string, vector<DescribeSqlLogTasksRequestFilters>>("Filters", *request->filters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    body->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    body->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSqlLogTasks"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSqlLogTasksResponse(callApi(params, req, runtime));
}

DescribeSqlLogTasksResponse Alibabacloud_DAS20200116::Client::describeSqlLogTasks(shared_ptr<DescribeSqlLogTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSqlLogTasksWithOptions(request, runtime);
}

DescribeTopBigKeysResponse Alibabacloud_DAS20200116::Client::describeTopBigKeysWithOptions(shared_ptr<DescribeTopBigKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consoleContext)) {
    query->insert(pair<string, string>("ConsoleContext", *request->consoleContext));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTopBigKeys"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTopBigKeysResponse(callApi(params, req, runtime));
}

DescribeTopBigKeysResponse Alibabacloud_DAS20200116::Client::describeTopBigKeys(shared_ptr<DescribeTopBigKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTopBigKeysWithOptions(request, runtime);
}

DescribeTopHotKeysResponse Alibabacloud_DAS20200116::Client::describeTopHotKeysWithOptions(shared_ptr<DescribeTopHotKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consoleContext)) {
    query->insert(pair<string, string>("ConsoleContext", *request->consoleContext));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTopHotKeys"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTopHotKeysResponse(callApi(params, req, runtime));
}

DescribeTopHotKeysResponse Alibabacloud_DAS20200116::Client::describeTopHotKeys(shared_ptr<DescribeTopHotKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTopHotKeysWithOptions(request, runtime);
}

DisableAllSqlConcurrencyControlRulesResponse Alibabacloud_DAS20200116::Client::disableAllSqlConcurrencyControlRulesWithOptions(shared_ptr<DisableAllSqlConcurrencyControlRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consoleContext)) {
    query->insert(pair<string, string>("ConsoleContext", *request->consoleContext));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableAllSqlConcurrencyControlRules"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableAllSqlConcurrencyControlRulesResponse(callApi(params, req, runtime));
}

DisableAllSqlConcurrencyControlRulesResponse Alibabacloud_DAS20200116::Client::disableAllSqlConcurrencyControlRules(shared_ptr<DisableAllSqlConcurrencyControlRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableAllSqlConcurrencyControlRulesWithOptions(request, runtime);
}

DisableAutoResourceOptimizeRulesResponse Alibabacloud_DAS20200116::Client::disableAutoResourceOptimizeRulesWithOptions(shared_ptr<DisableAutoResourceOptimizeRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consoleContext)) {
    query->insert(pair<string, string>("ConsoleContext", *request->consoleContext));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIds)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableAutoResourceOptimizeRules"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableAutoResourceOptimizeRulesResponse(callApi(params, req, runtime));
}

DisableAutoResourceOptimizeRulesResponse Alibabacloud_DAS20200116::Client::disableAutoResourceOptimizeRules(shared_ptr<DisableAutoResourceOptimizeRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableAutoResourceOptimizeRulesWithOptions(request, runtime);
}

DisableAutoThrottleRulesResponse Alibabacloud_DAS20200116::Client::disableAutoThrottleRulesWithOptions(shared_ptr<DisableAutoThrottleRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consoleContext)) {
    query->insert(pair<string, string>("ConsoleContext", *request->consoleContext));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIds)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableAutoThrottleRules"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableAutoThrottleRulesResponse(callApi(params, req, runtime));
}

DisableAutoThrottleRulesResponse Alibabacloud_DAS20200116::Client::disableAutoThrottleRules(shared_ptr<DisableAutoThrottleRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableAutoThrottleRulesWithOptions(request, runtime);
}

DisableDasProResponse Alibabacloud_DAS20200116::Client::disableDasProWithOptions(shared_ptr<DisableDasProRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableDasPro"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableDasProResponse(callApi(params, req, runtime));
}

DisableDasProResponse Alibabacloud_DAS20200116::Client::disableDasPro(shared_ptr<DisableDasProRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableDasProWithOptions(request, runtime);
}

DisableInstanceDasConfigResponse Alibabacloud_DAS20200116::Client::disableInstanceDasConfigWithOptions(shared_ptr<DisableInstanceDasConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->engine)) {
    query->insert(pair<string, string>("Engine", *request->engine));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scaleType)) {
    query->insert(pair<string, string>("ScaleType", *request->scaleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableInstanceDasConfig"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableInstanceDasConfigResponse(callApi(params, req, runtime));
}

DisableInstanceDasConfigResponse Alibabacloud_DAS20200116::Client::disableInstanceDasConfig(shared_ptr<DisableInstanceDasConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableInstanceDasConfigWithOptions(request, runtime);
}

DisableSqlConcurrencyControlResponse Alibabacloud_DAS20200116::Client::disableSqlConcurrencyControlWithOptions(shared_ptr<DisableSqlConcurrencyControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consoleContext)) {
    query->insert(pair<string, string>("ConsoleContext", *request->consoleContext));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->itemId)) {
    query->insert(pair<string, long>("ItemId", *request->itemId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableSqlConcurrencyControl"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableSqlConcurrencyControlResponse(callApi(params, req, runtime));
}

DisableSqlConcurrencyControlResponse Alibabacloud_DAS20200116::Client::disableSqlConcurrencyControl(shared_ptr<DisableSqlConcurrencyControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableSqlConcurrencyControlWithOptions(request, runtime);
}

EnableDasProResponse Alibabacloud_DAS20200116::Client::enableDasProWithOptions(shared_ptr<EnableDasProRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sqlRetention)) {
    query->insert(pair<string, long>("SqlRetention", *request->sqlRetention));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableDasPro"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableDasProResponse(callApi(params, req, runtime));
}

EnableDasProResponse Alibabacloud_DAS20200116::Client::enableDasPro(shared_ptr<EnableDasProRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableDasProWithOptions(request, runtime);
}

EnableSqlConcurrencyControlResponse Alibabacloud_DAS20200116::Client::enableSqlConcurrencyControlWithOptions(shared_ptr<EnableSqlConcurrencyControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->concurrencyControlTime)) {
    query->insert(pair<string, long>("ConcurrencyControlTime", *request->concurrencyControlTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consoleContext)) {
    query->insert(pair<string, string>("ConsoleContext", *request->consoleContext));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxConcurrency)) {
    query->insert(pair<string, long>("MaxConcurrency", *request->maxConcurrency));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlKeywords)) {
    query->insert(pair<string, string>("SqlKeywords", *request->sqlKeywords));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlType)) {
    query->insert(pair<string, string>("SqlType", *request->sqlType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableSqlConcurrencyControl"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableSqlConcurrencyControlResponse(callApi(params, req, runtime));
}

EnableSqlConcurrencyControlResponse Alibabacloud_DAS20200116::Client::enableSqlConcurrencyControl(shared_ptr<EnableSqlConcurrencyControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableSqlConcurrencyControlWithOptions(request, runtime);
}

GetAsyncErrorRequestListByCodeResponse Alibabacloud_DAS20200116::Client::getAsyncErrorRequestListByCodeWithOptions(shared_ptr<GetAsyncErrorRequestListByCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->end)) {
    query->insert(pair<string, long>("End", *request->end));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->errorCode)) {
    query->insert(pair<string, string>("ErrorCode", *request->errorCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->start)) {
    query->insert(pair<string, long>("Start", *request->start));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAsyncErrorRequestListByCode"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAsyncErrorRequestListByCodeResponse(callApi(params, req, runtime));
}

GetAsyncErrorRequestListByCodeResponse Alibabacloud_DAS20200116::Client::getAsyncErrorRequestListByCode(shared_ptr<GetAsyncErrorRequestListByCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAsyncErrorRequestListByCodeWithOptions(request, runtime);
}

GetAsyncErrorRequestStatByCodeResponse Alibabacloud_DAS20200116::Client::getAsyncErrorRequestStatByCodeWithOptions(shared_ptr<GetAsyncErrorRequestStatByCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->end)) {
    query->insert(pair<string, long>("End", *request->end));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->start)) {
    query->insert(pair<string, long>("Start", *request->start));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAsyncErrorRequestStatByCode"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAsyncErrorRequestStatByCodeResponse(callApi(params, req, runtime));
}

GetAsyncErrorRequestStatByCodeResponse Alibabacloud_DAS20200116::Client::getAsyncErrorRequestStatByCode(shared_ptr<GetAsyncErrorRequestStatByCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAsyncErrorRequestStatByCodeWithOptions(request, runtime);
}

GetAsyncErrorRequestStatResultResponse Alibabacloud_DAS20200116::Client::getAsyncErrorRequestStatResultWithOptions(shared_ptr<GetAsyncErrorRequestStatResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->end)) {
    query->insert(pair<string, long>("End", *request->end));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlIdList)) {
    query->insert(pair<string, string>("SqlIdList", *request->sqlIdList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->start)) {
    query->insert(pair<string, long>("Start", *request->start));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAsyncErrorRequestStatResult"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAsyncErrorRequestStatResultResponse(callApi(params, req, runtime));
}

GetAsyncErrorRequestStatResultResponse Alibabacloud_DAS20200116::Client::getAsyncErrorRequestStatResult(shared_ptr<GetAsyncErrorRequestStatResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAsyncErrorRequestStatResultWithOptions(request, runtime);
}

GetAutoIncrementUsageStatisticResponse Alibabacloud_DAS20200116::Client::getAutoIncrementUsageStatisticWithOptions(shared_ptr<GetAutoIncrementUsageStatisticRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbNames)) {
    query->insert(pair<string, string>("DbNames", *request->dbNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->ratioFilter)) {
    query->insert(pair<string, double>("RatioFilter", *request->ratioFilter));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->realTime)) {
    query->insert(pair<string, bool>("RealTime", *request->realTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAutoIncrementUsageStatistic"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAutoIncrementUsageStatisticResponse(callApi(params, req, runtime));
}

GetAutoIncrementUsageStatisticResponse Alibabacloud_DAS20200116::Client::getAutoIncrementUsageStatistic(shared_ptr<GetAutoIncrementUsageStatisticRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAutoIncrementUsageStatisticWithOptions(request, runtime);
}

GetAutoResourceOptimizeRulesResponse Alibabacloud_DAS20200116::Client::getAutoResourceOptimizeRulesWithOptions(shared_ptr<GetAutoResourceOptimizeRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consoleContext)) {
    query->insert(pair<string, string>("ConsoleContext", *request->consoleContext));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIds)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAutoResourceOptimizeRules"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAutoResourceOptimizeRulesResponse(callApi(params, req, runtime));
}

GetAutoResourceOptimizeRulesResponse Alibabacloud_DAS20200116::Client::getAutoResourceOptimizeRules(shared_ptr<GetAutoResourceOptimizeRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAutoResourceOptimizeRulesWithOptions(request, runtime);
}

GetAutoThrottleRulesResponse Alibabacloud_DAS20200116::Client::getAutoThrottleRulesWithOptions(shared_ptr<GetAutoThrottleRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consoleContext)) {
    query->insert(pair<string, string>("ConsoleContext", *request->consoleContext));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIds)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAutoThrottleRules"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAutoThrottleRulesResponse(callApi(params, req, runtime));
}

GetAutoThrottleRulesResponse Alibabacloud_DAS20200116::Client::getAutoThrottleRules(shared_ptr<GetAutoThrottleRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAutoThrottleRulesWithOptions(request, runtime);
}

GetAutonomousNotifyEventContentResponse Alibabacloud_DAS20200116::Client::getAutonomousNotifyEventContentWithOptions(shared_ptr<GetAutonomousNotifyEventContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spanId)) {
    query->insert(pair<string, string>("SpanId", *request->spanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->context)) {
    query->insert(pair<string, string>("__context", *request->context));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAutonomousNotifyEventContent"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAutonomousNotifyEventContentResponse(callApi(params, req, runtime));
}

GetAutonomousNotifyEventContentResponse Alibabacloud_DAS20200116::Client::getAutonomousNotifyEventContent(shared_ptr<GetAutonomousNotifyEventContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAutonomousNotifyEventContentWithOptions(request, runtime);
}

GetAutonomousNotifyEventsInRangeResponse Alibabacloud_DAS20200116::Client::getAutonomousNotifyEventsInRangeWithOptions(shared_ptr<GetAutonomousNotifyEventsInRangeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventContext)) {
    query->insert(pair<string, string>("EventContext", *request->eventContext));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->level)) {
    query->insert(pair<string, string>("Level", *request->level));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->minLevel)) {
    query->insert(pair<string, string>("MinLevel", *request->minLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageOffset)) {
    query->insert(pair<string, string>("PageOffset", *request->pageOffset));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->context)) {
    query->insert(pair<string, string>("__context", *request->context));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAutonomousNotifyEventsInRange"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAutonomousNotifyEventsInRangeResponse(callApi(params, req, runtime));
}

GetAutonomousNotifyEventsInRangeResponse Alibabacloud_DAS20200116::Client::getAutonomousNotifyEventsInRange(shared_ptr<GetAutonomousNotifyEventsInRangeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAutonomousNotifyEventsInRangeWithOptions(request, runtime);
}

GetBlockingDetailListResponse Alibabacloud_DAS20200116::Client::getBlockingDetailListWithOptions(shared_ptr<GetBlockingDetailListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbNameList)) {
    query->insert(pair<string, string>("DbNameList", *request->dbNameList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNo)) {
    query->insert(pair<string, string>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryHash)) {
    query->insert(pair<string, string>("QueryHash", *request->queryHash));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBlockingDetailList"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBlockingDetailListResponse(callApi(params, req, runtime));
}

GetBlockingDetailListResponse Alibabacloud_DAS20200116::Client::getBlockingDetailList(shared_ptr<GetBlockingDetailListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBlockingDetailListWithOptions(request, runtime);
}

GetDBInstanceConnectivityDiagnosisResponse Alibabacloud_DAS20200116::Client::getDBInstanceConnectivityDiagnosisWithOptions(shared_ptr<GetDBInstanceConnectivityDiagnosisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcIp)) {
    query->insert(pair<string, string>("SrcIp", *request->srcIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDBInstanceConnectivityDiagnosis"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDBInstanceConnectivityDiagnosisResponse(callApi(params, req, runtime));
}

GetDBInstanceConnectivityDiagnosisResponse Alibabacloud_DAS20200116::Client::getDBInstanceConnectivityDiagnosis(shared_ptr<GetDBInstanceConnectivityDiagnosisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDBInstanceConnectivityDiagnosisWithOptions(request, runtime);
}

GetDasProServiceUsageResponse Alibabacloud_DAS20200116::Client::getDasProServiceUsageWithOptions(shared_ptr<GetDasProServiceUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDasProServiceUsage"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDasProServiceUsageResponse(callApi(params, req, runtime));
}

GetDasProServiceUsageResponse Alibabacloud_DAS20200116::Client::getDasProServiceUsage(shared_ptr<GetDasProServiceUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDasProServiceUsageWithOptions(request, runtime);
}

GetDasSQLLogHotDataResponse Alibabacloud_DAS20200116::Client::getDasSQLLogHotDataWithOptions(shared_ptr<GetDasSQLLogHotDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    body->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->childDBInstanceIDs)) {
    body->insert(pair<string, string>("ChildDBInstanceIDs", *request->childDBInstanceIDs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBName)) {
    body->insert(pair<string, string>("DBName", *request->DBName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->end)) {
    body->insert(pair<string, long>("End", *request->end));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fail)) {
    body->insert(pair<string, string>("Fail", *request->fail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hostAddress)) {
    body->insert(pair<string, string>("HostAddress", *request->hostAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalOperator)) {
    body->insert(pair<string, string>("LogicalOperator", *request->logicalOperator));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxLatancy)) {
    body->insert(pair<string, long>("MaxLatancy", *request->maxLatancy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxRecordsPerPage)) {
    body->insert(pair<string, long>("MaxRecordsPerPage", *request->maxRecordsPerPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxRows)) {
    body->insert(pair<string, long>("MaxRows", *request->maxRows));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxScanRows)) {
    body->insert(pair<string, long>("MaxScanRows", *request->maxScanRows));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxSpillCnt)) {
    body->insert(pair<string, long>("MaxSpillCnt", *request->maxSpillCnt));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minLatancy)) {
    body->insert(pair<string, long>("MinLatancy", *request->minLatancy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minRows)) {
    body->insert(pair<string, long>("MinRows", *request->minRows));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minScanRows)) {
    body->insert(pair<string, long>("MinScanRows", *request->minScanRows));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minSpillCnt)) {
    body->insert(pair<string, long>("MinSpillCnt", *request->minSpillCnt));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumbers)) {
    body->insert(pair<string, long>("PageNumbers", *request->pageNumbers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryKeyword)) {
    body->insert(pair<string, string>("QueryKeyword", *request->queryKeyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->role)) {
    body->insert(pair<string, string>("Role", *request->role));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortKey)) {
    body->insert(pair<string, string>("SortKey", *request->sortKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortMethod)) {
    body->insert(pair<string, string>("SortMethod", *request->sortMethod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlType)) {
    body->insert(pair<string, string>("SqlType", *request->sqlType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->start)) {
    body->insert(pair<string, long>("Start", *request->start));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    body->insert(pair<string, string>("State", *request->state));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->threadID)) {
    body->insert(pair<string, string>("ThreadID", *request->threadID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->traceId)) {
    body->insert(pair<string, string>("TraceId", *request->traceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transactionId)) {
    body->insert(pair<string, string>("TransactionId", *request->transactionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDasSQLLogHotData"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDasSQLLogHotDataResponse(callApi(params, req, runtime));
}

GetDasSQLLogHotDataResponse Alibabacloud_DAS20200116::Client::getDasSQLLogHotData(shared_ptr<GetDasSQLLogHotDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDasSQLLogHotDataWithOptions(request, runtime);
}

GetDeadLockDetailResponse Alibabacloud_DAS20200116::Client::getDeadLockDetailWithOptions(shared_ptr<GetDeadLockDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->textId)) {
    query->insert(pair<string, string>("TextId", *request->textId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeadLockDetail"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeadLockDetailResponse(callApi(params, req, runtime));
}

GetDeadLockDetailResponse Alibabacloud_DAS20200116::Client::getDeadLockDetail(shared_ptr<GetDeadLockDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeadLockDetailWithOptions(request, runtime);
}

GetDeadLockDetailListResponse Alibabacloud_DAS20200116::Client::getDeadLockDetailListWithOptions(shared_ptr<GetDeadLockDetailListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbNameList)) {
    query->insert(pair<string, string>("DbNameList", *request->dbNameList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNo)) {
    query->insert(pair<string, string>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeadLockDetailList"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeadLockDetailListResponse(callApi(params, req, runtime));
}

GetDeadLockDetailListResponse Alibabacloud_DAS20200116::Client::getDeadLockDetailList(shared_ptr<GetDeadLockDetailListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeadLockDetailListWithOptions(request, runtime);
}

GetDeadLockHistoryResponse Alibabacloud_DAS20200116::Client::getDeadLockHistoryWithOptions(shared_ptr<GetDeadLockHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeadLockHistory"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeadLockHistoryResponse(callApi(params, req, runtime));
}

GetDeadLockHistoryResponse Alibabacloud_DAS20200116::Client::getDeadLockHistory(shared_ptr<GetDeadLockHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeadLockHistoryWithOptions(request, runtime);
}

GetDeadlockHistogramResponse Alibabacloud_DAS20200116::Client::getDeadlockHistogramWithOptions(shared_ptr<GetDeadlockHistogramRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    body->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeadlockHistogram"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeadlockHistogramResponse(callApi(params, req, runtime));
}

GetDeadlockHistogramResponse Alibabacloud_DAS20200116::Client::getDeadlockHistogram(shared_ptr<GetDeadlockHistogramRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeadlockHistogramWithOptions(request, runtime);
}

GetEndpointSwitchTaskResponse Alibabacloud_DAS20200116::Client::getEndpointSwitchTaskWithOptions(shared_ptr<GetEndpointSwitchTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uid)) {
    query->insert(pair<string, string>("Uid", *request->uid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->context)) {
    query->insert(pair<string, string>("__context", *request->context));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessKey)) {
    query->insert(pair<string, string>("accessKey", *request->accessKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signature)) {
    query->insert(pair<string, string>("signature", *request->signature));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->skipAuth)) {
    query->insert(pair<string, string>("skipAuth", *request->skipAuth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timestamp)) {
    query->insert(pair<string, string>("timestamp", *request->timestamp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEndpointSwitchTask"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEndpointSwitchTaskResponse(callApi(params, req, runtime));
}

GetEndpointSwitchTaskResponse Alibabacloud_DAS20200116::Client::getEndpointSwitchTask(shared_ptr<GetEndpointSwitchTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEndpointSwitchTaskWithOptions(request, runtime);
}

GetErrorRequestSampleResponse Alibabacloud_DAS20200116::Client::getErrorRequestSampleWithOptions(shared_ptr<GetErrorRequestSampleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->end)) {
    query->insert(pair<string, long>("End", *request->end));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlId)) {
    query->insert(pair<string, string>("SqlId", *request->sqlId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->start)) {
    query->insert(pair<string, long>("Start", *request->start));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetErrorRequestSample"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetErrorRequestSampleResponse(callApi(params, req, runtime));
}

GetErrorRequestSampleResponse Alibabacloud_DAS20200116::Client::getErrorRequestSample(shared_ptr<GetErrorRequestSampleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getErrorRequestSampleWithOptions(request, runtime);
}

GetEventSubscriptionResponse Alibabacloud_DAS20200116::Client::getEventSubscriptionWithOptions(shared_ptr<GetEventSubscriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEventSubscription"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEventSubscriptionResponse(callApi(params, req, runtime));
}

GetEventSubscriptionResponse Alibabacloud_DAS20200116::Client::getEventSubscription(shared_ptr<GetEventSubscriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEventSubscriptionWithOptions(request, runtime);
}

GetFullRequestOriginStatByInstanceIdResponse Alibabacloud_DAS20200116::Client::getFullRequestOriginStatByInstanceIdWithOptions(shared_ptr<GetFullRequestOriginStatByInstanceIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->asc)) {
    query->insert(pair<string, bool>("Asc", *request->asc));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->end)) {
    query->insert(pair<string, long>("End", *request->end));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->role)) {
    query->insert(pair<string, string>("Role", *request->role));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlType)) {
    query->insert(pair<string, string>("SqlType", *request->sqlType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->start)) {
    query->insert(pair<string, long>("Start", *request->start));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFullRequestOriginStatByInstanceId"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFullRequestOriginStatByInstanceIdResponse(callApi(params, req, runtime));
}

GetFullRequestOriginStatByInstanceIdResponse Alibabacloud_DAS20200116::Client::getFullRequestOriginStatByInstanceId(shared_ptr<GetFullRequestOriginStatByInstanceIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFullRequestOriginStatByInstanceIdWithOptions(request, runtime);
}

GetFullRequestSampleByInstanceIdResponse Alibabacloud_DAS20200116::Client::getFullRequestSampleByInstanceIdWithOptions(shared_ptr<GetFullRequestSampleByInstanceIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->role)) {
    query->insert(pair<string, string>("Role", *request->role));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->end)) {
    body->insert(pair<string, long>("End", *request->end));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlId)) {
    body->insert(pair<string, string>("SqlId", *request->sqlId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->start)) {
    body->insert(pair<string, long>("Start", *request->start));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFullRequestSampleByInstanceId"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFullRequestSampleByInstanceIdResponse(callApi(params, req, runtime));
}

GetFullRequestSampleByInstanceIdResponse Alibabacloud_DAS20200116::Client::getFullRequestSampleByInstanceId(shared_ptr<GetFullRequestSampleByInstanceIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFullRequestSampleByInstanceIdWithOptions(request, runtime);
}

GetFullRequestStatResultByInstanceIdResponse Alibabacloud_DAS20200116::Client::getFullRequestStatResultByInstanceIdWithOptions(shared_ptr<GetFullRequestStatResultByInstanceIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->asc)) {
    query->insert(pair<string, bool>("Asc", *request->asc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->end)) {
    query->insert(pair<string, long>("End", *request->end));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originHost)) {
    query->insert(pair<string, string>("OriginHost", *request->originHost));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->role)) {
    query->insert(pair<string, string>("Role", *request->role));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlId)) {
    query->insert(pair<string, string>("SqlId", *request->sqlId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlType)) {
    query->insert(pair<string, string>("SqlType", *request->sqlType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->start)) {
    query->insert(pair<string, long>("Start", *request->start));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFullRequestStatResultByInstanceId"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFullRequestStatResultByInstanceIdResponse(callApi(params, req, runtime));
}

GetFullRequestStatResultByInstanceIdResponse Alibabacloud_DAS20200116::Client::getFullRequestStatResultByInstanceId(shared_ptr<GetFullRequestStatResultByInstanceIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFullRequestStatResultByInstanceIdWithOptions(request, runtime);
}

GetHDMAliyunResourceSyncResultResponse Alibabacloud_DAS20200116::Client::getHDMAliyunResourceSyncResultWithOptions(shared_ptr<GetHDMAliyunResourceSyncResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uid)) {
    query->insert(pair<string, string>("Uid", *request->uid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->context)) {
    query->insert(pair<string, string>("__context", *request->context));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessKey)) {
    query->insert(pair<string, string>("accessKey", *request->accessKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signature)) {
    query->insert(pair<string, string>("signature", *request->signature));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->skipAuth)) {
    query->insert(pair<string, string>("skipAuth", *request->skipAuth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timestamp)) {
    query->insert(pair<string, string>("timestamp", *request->timestamp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHDMAliyunResourceSyncResult"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHDMAliyunResourceSyncResultResponse(callApi(params, req, runtime));
}

GetHDMAliyunResourceSyncResultResponse Alibabacloud_DAS20200116::Client::getHDMAliyunResourceSyncResult(shared_ptr<GetHDMAliyunResourceSyncResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHDMAliyunResourceSyncResultWithOptions(request, runtime);
}

GetHDMLastAliyunResourceSyncResultResponse Alibabacloud_DAS20200116::Client::getHDMLastAliyunResourceSyncResultWithOptions(shared_ptr<GetHDMLastAliyunResourceSyncResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->uid)) {
    query->insert(pair<string, string>("Uid", *request->uid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->context)) {
    query->insert(pair<string, string>("__context", *request->context));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessKey)) {
    query->insert(pair<string, string>("accessKey", *request->accessKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signature)) {
    query->insert(pair<string, string>("signature", *request->signature));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->skipAuth)) {
    query->insert(pair<string, string>("skipAuth", *request->skipAuth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timestamp)) {
    query->insert(pair<string, string>("timestamp", *request->timestamp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHDMLastAliyunResourceSyncResult"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHDMLastAliyunResourceSyncResultResponse(callApi(params, req, runtime));
}

GetHDMLastAliyunResourceSyncResultResponse Alibabacloud_DAS20200116::Client::getHDMLastAliyunResourceSyncResult(shared_ptr<GetHDMLastAliyunResourceSyncResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHDMLastAliyunResourceSyncResultWithOptions(request, runtime);
}

GetInstanceInspectionsResponse Alibabacloud_DAS20200116::Client::getInstanceInspectionsWithOptions(shared_ptr<GetInstanceInspectionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engine)) {
    query->insert(pair<string, string>("Engine", *request->engine));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceArea)) {
    query->insert(pair<string, string>("InstanceArea", *request->instanceArea));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNo)) {
    query->insert(pair<string, string>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchMap)) {
    query->insert(pair<string, string>("SearchMap", *request->searchMap));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstanceInspections"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstanceInspectionsResponse(callApi(params, req, runtime));
}

GetInstanceInspectionsResponse Alibabacloud_DAS20200116::Client::getInstanceInspections(shared_ptr<GetInstanceInspectionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceInspectionsWithOptions(request, runtime);
}

GetInstanceMissingIndexListResponse Alibabacloud_DAS20200116::Client::getInstanceMissingIndexListWithOptions(shared_ptr<GetInstanceMissingIndexListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->avgTotalUserCost)) {
    query->insert(pair<string, string>("AvgTotalUserCost", *request->avgTotalUserCost));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->avgUserImpact)) {
    query->insert(pair<string, string>("AvgUserImpact", *request->avgUserImpact));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexCount)) {
    query->insert(pair<string, string>("IndexCount", *request->indexCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectName)) {
    query->insert(pair<string, string>("ObjectName", *request->objectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNo)) {
    query->insert(pair<string, string>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reservedPages)) {
    query->insert(pair<string, string>("ReservedPages", *request->reservedPages));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reservedSize)) {
    query->insert(pair<string, string>("ReservedSize", *request->reservedSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rowCount)) {
    query->insert(pair<string, string>("RowCount", *request->rowCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uniqueCompiles)) {
    query->insert(pair<string, string>("UniqueCompiles", *request->uniqueCompiles));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userScans)) {
    query->insert(pair<string, string>("UserScans", *request->userScans));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userSeeks)) {
    query->insert(pair<string, string>("UserSeeks", *request->userSeeks));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstanceMissingIndexList"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstanceMissingIndexListResponse(callApi(params, req, runtime));
}

GetInstanceMissingIndexListResponse Alibabacloud_DAS20200116::Client::getInstanceMissingIndexList(shared_ptr<GetInstanceMissingIndexListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceMissingIndexListWithOptions(request, runtime);
}

GetInstanceSqlOptimizeStatisticResponse Alibabacloud_DAS20200116::Client::getInstanceSqlOptimizeStatisticWithOptions(shared_ptr<GetInstanceSqlOptimizeStatisticRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterEnable)) {
    query->insert(pair<string, string>("FilterEnable", *request->filterEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->threshold)) {
    query->insert(pair<string, string>("Threshold", *request->threshold));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->useMerging)) {
    query->insert(pair<string, string>("UseMerging", *request->useMerging));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstanceSqlOptimizeStatistic"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstanceSqlOptimizeStatisticResponse(callApi(params, req, runtime));
}

GetInstanceSqlOptimizeStatisticResponse Alibabacloud_DAS20200116::Client::getInstanceSqlOptimizeStatistic(shared_ptr<GetInstanceSqlOptimizeStatisticRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceSqlOptimizeStatisticWithOptions(request, runtime);
}

GetKillInstanceSessionTaskResultResponse Alibabacloud_DAS20200116::Client::getKillInstanceSessionTaskResultWithOptions(shared_ptr<GetKillInstanceSessionTaskResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetKillInstanceSessionTaskResult"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetKillInstanceSessionTaskResultResponse(callApi(params, req, runtime));
}

GetKillInstanceSessionTaskResultResponse Alibabacloud_DAS20200116::Client::getKillInstanceSessionTaskResult(shared_ptr<GetKillInstanceSessionTaskResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getKillInstanceSessionTaskResultWithOptions(request, runtime);
}

GetMongoDBCurrentOpResponse Alibabacloud_DAS20200116::Client::getMongoDBCurrentOpWithOptions(shared_ptr<GetMongoDBCurrentOpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->filterDoc)) {
    query->insert(pair<string, string>("FilterDoc", *request->filterDoc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->role)) {
    query->insert(pair<string, string>("Role", *request->role));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMongoDBCurrentOp"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMongoDBCurrentOpResponse(callApi(params, req, runtime));
}

GetMongoDBCurrentOpResponse Alibabacloud_DAS20200116::Client::getMongoDBCurrentOp(shared_ptr<GetMongoDBCurrentOpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMongoDBCurrentOpWithOptions(request, runtime);
}

GetMySQLAllSessionAsyncResponse Alibabacloud_DAS20200116::Client::getMySQLAllSessionAsyncWithOptions(shared_ptr<GetMySQLAllSessionAsyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resultId)) {
    query->insert(pair<string, string>("ResultId", *request->resultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMySQLAllSessionAsync"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMySQLAllSessionAsyncResponse(callApi(params, req, runtime));
}

GetMySQLAllSessionAsyncResponse Alibabacloud_DAS20200116::Client::getMySQLAllSessionAsync(shared_ptr<GetMySQLAllSessionAsyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMySQLAllSessionAsyncWithOptions(request, runtime);
}

GetPartitionsHeatmapResponse Alibabacloud_DAS20200116::Client::getPartitionsHeatmapWithOptions(shared_ptr<GetPartitionsHeatmapRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consoleContext)) {
    query->insert(pair<string, string>("ConsoleContext", *request->consoleContext));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeRange)) {
    query->insert(pair<string, string>("TimeRange", *request->timeRange));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPartitionsHeatmap"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPartitionsHeatmapResponse(callApi(params, req, runtime));
}

GetPartitionsHeatmapResponse Alibabacloud_DAS20200116::Client::getPartitionsHeatmap(shared_ptr<GetPartitionsHeatmapRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPartitionsHeatmapWithOptions(request, runtime);
}

GetPfsMetricTrendsResponse Alibabacloud_DAS20200116::Client::getPfsMetricTrendsWithOptions(shared_ptr<GetPfsMetricTrendsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metric)) {
    body->insert(pair<string, string>("Metric", *request->metric));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    body->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPfsMetricTrends"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPfsMetricTrendsResponse(callApi(params, req, runtime));
}

GetPfsMetricTrendsResponse Alibabacloud_DAS20200116::Client::getPfsMetricTrends(shared_ptr<GetPfsMetricTrendsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPfsMetricTrendsWithOptions(request, runtime);
}

GetPfsSqlSampleResponse Alibabacloud_DAS20200116::Client::getPfsSqlSampleWithOptions(shared_ptr<GetPfsSqlSampleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    body->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlId)) {
    body->insert(pair<string, string>("SqlId", *request->sqlId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPfsSqlSample"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPfsSqlSampleResponse(callApi(params, req, runtime));
}

GetPfsSqlSampleResponse Alibabacloud_DAS20200116::Client::getPfsSqlSample(shared_ptr<GetPfsSqlSampleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPfsSqlSampleWithOptions(request, runtime);
}

GetPfsSqlSummariesResponse Alibabacloud_DAS20200116::Client::getPfsSqlSummariesWithOptions(shared_ptr<GetPfsSqlSummariesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->asc)) {
    body->insert(pair<string, bool>("Asc", *request->asc));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keywords)) {
    body->insert(pair<string, string>("Keywords", *request->keywords));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    body->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    body->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    body->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlId)) {
    body->insert(pair<string, string>("SqlId", *request->sqlId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPfsSqlSummaries"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPfsSqlSummariesResponse(callApi(params, req, runtime));
}

GetPfsSqlSummariesResponse Alibabacloud_DAS20200116::Client::getPfsSqlSummaries(shared_ptr<GetPfsSqlSummariesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPfsSqlSummariesWithOptions(request, runtime);
}

GetQueryOptimizeDataStatsResponse Alibabacloud_DAS20200116::Client::getQueryOptimizeDataStatsWithOptions(shared_ptr<GetQueryOptimizeDataStatsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQueryOptimizeDataStats"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQueryOptimizeDataStatsResponse(callApi(params, req, runtime));
}

GetQueryOptimizeDataStatsResponse Alibabacloud_DAS20200116::Client::getQueryOptimizeDataStats(shared_ptr<GetQueryOptimizeDataStatsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQueryOptimizeDataStatsWithOptions(request, runtime);
}

GetQueryOptimizeDataTopResponse Alibabacloud_DAS20200116::Client::getQueryOptimizeDataTopWithOptions(shared_ptr<GetQueryOptimizeDataTopRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQueryOptimizeDataTop"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQueryOptimizeDataTopResponse(callApi(params, req, runtime));
}

GetQueryOptimizeDataTopResponse Alibabacloud_DAS20200116::Client::getQueryOptimizeDataTop(shared_ptr<GetQueryOptimizeDataTopRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQueryOptimizeDataTopWithOptions(request, runtime);
}

GetQueryOptimizeDataTrendResponse Alibabacloud_DAS20200116::Client::getQueryOptimizeDataTrendWithOptions(shared_ptr<GetQueryOptimizeDataTrendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQueryOptimizeDataTrend"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQueryOptimizeDataTrendResponse(callApi(params, req, runtime));
}

GetQueryOptimizeDataTrendResponse Alibabacloud_DAS20200116::Client::getQueryOptimizeDataTrend(shared_ptr<GetQueryOptimizeDataTrendRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQueryOptimizeDataTrendWithOptions(request, runtime);
}

GetQueryOptimizeExecErrorSampleResponse Alibabacloud_DAS20200116::Client::getQueryOptimizeExecErrorSampleWithOptions(shared_ptr<GetQueryOptimizeExecErrorSampleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQueryOptimizeExecErrorSample"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQueryOptimizeExecErrorSampleResponse(callApi(params, req, runtime));
}

GetQueryOptimizeExecErrorSampleResponse Alibabacloud_DAS20200116::Client::getQueryOptimizeExecErrorSample(shared_ptr<GetQueryOptimizeExecErrorSampleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQueryOptimizeExecErrorSampleWithOptions(request, runtime);
}

GetQueryOptimizeExecErrorStatsResponse Alibabacloud_DAS20200116::Client::getQueryOptimizeExecErrorStatsWithOptions(shared_ptr<GetQueryOptimizeExecErrorStatsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQueryOptimizeExecErrorStats"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQueryOptimizeExecErrorStatsResponse(callApi(params, req, runtime));
}

GetQueryOptimizeExecErrorStatsResponse Alibabacloud_DAS20200116::Client::getQueryOptimizeExecErrorStats(shared_ptr<GetQueryOptimizeExecErrorStatsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQueryOptimizeExecErrorStatsWithOptions(request, runtime);
}

GetQueryOptimizeRuleListResponse Alibabacloud_DAS20200116::Client::getQueryOptimizeRuleListWithOptions(shared_ptr<GetQueryOptimizeRuleListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQueryOptimizeRuleList"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQueryOptimizeRuleListResponse(callApi(params, req, runtime));
}

GetQueryOptimizeRuleListResponse Alibabacloud_DAS20200116::Client::getQueryOptimizeRuleList(shared_ptr<GetQueryOptimizeRuleListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQueryOptimizeRuleListWithOptions(request, runtime);
}

GetQueryOptimizeShareUrlResponse Alibabacloud_DAS20200116::Client::getQueryOptimizeShareUrlWithOptions(shared_ptr<GetQueryOptimizeShareUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQueryOptimizeShareUrl"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQueryOptimizeShareUrlResponse(callApi(params, req, runtime));
}

GetQueryOptimizeShareUrlResponse Alibabacloud_DAS20200116::Client::getQueryOptimizeShareUrl(shared_ptr<GetQueryOptimizeShareUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQueryOptimizeShareUrlWithOptions(request, runtime);
}

GetQueryOptimizeSolutionResponse Alibabacloud_DAS20200116::Client::getQueryOptimizeSolutionWithOptions(shared_ptr<GetQueryOptimizeSolutionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQueryOptimizeSolution"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQueryOptimizeSolutionResponse(callApi(params, req, runtime));
}

GetQueryOptimizeSolutionResponse Alibabacloud_DAS20200116::Client::getQueryOptimizeSolution(shared_ptr<GetQueryOptimizeSolutionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQueryOptimizeSolutionWithOptions(request, runtime);
}

GetQueryOptimizeTagResponse Alibabacloud_DAS20200116::Client::getQueryOptimizeTagWithOptions(shared_ptr<GetQueryOptimizeTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQueryOptimizeTag"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQueryOptimizeTagResponse(callApi(params, req, runtime));
}

GetQueryOptimizeTagResponse Alibabacloud_DAS20200116::Client::getQueryOptimizeTag(shared_ptr<GetQueryOptimizeTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQueryOptimizeTagWithOptions(request, runtime);
}

GetRedisAllSessionResponse Alibabacloud_DAS20200116::Client::getRedisAllSessionWithOptions(shared_ptr<GetRedisAllSessionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consoleContext)) {
    query->insert(pair<string, string>("ConsoleContext", *request->consoleContext));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRedisAllSession"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRedisAllSessionResponse(callApi(params, req, runtime));
}

GetRedisAllSessionResponse Alibabacloud_DAS20200116::Client::getRedisAllSession(shared_ptr<GetRedisAllSessionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRedisAllSessionWithOptions(request, runtime);
}

GetRequestDiagnosisPageResponse Alibabacloud_DAS20200116::Client::getRequestDiagnosisPageWithOptions(shared_ptr<GetRequestDiagnosisPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRequestDiagnosisPage"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRequestDiagnosisPageResponse(callApi(params, req, runtime));
}

GetRequestDiagnosisPageResponse Alibabacloud_DAS20200116::Client::getRequestDiagnosisPage(shared_ptr<GetRequestDiagnosisPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRequestDiagnosisPageWithOptions(request, runtime);
}

GetRequestDiagnosisResultResponse Alibabacloud_DAS20200116::Client::getRequestDiagnosisResultWithOptions(shared_ptr<GetRequestDiagnosisResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->messageId)) {
    query->insert(pair<string, string>("MessageId", *request->messageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlId)) {
    query->insert(pair<string, string>("SqlId", *request->sqlId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRequestDiagnosisResult"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRequestDiagnosisResultResponse(callApi(params, req, runtime));
}

GetRequestDiagnosisResultResponse Alibabacloud_DAS20200116::Client::getRequestDiagnosisResult(shared_ptr<GetRequestDiagnosisResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRequestDiagnosisResultWithOptions(request, runtime);
}

GetRunningSqlConcurrencyControlRulesResponse Alibabacloud_DAS20200116::Client::getRunningSqlConcurrencyControlRulesWithOptions(shared_ptr<GetRunningSqlConcurrencyControlRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consoleContext)) {
    query->insert(pair<string, string>("ConsoleContext", *request->consoleContext));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRunningSqlConcurrencyControlRules"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRunningSqlConcurrencyControlRulesResponse(callApi(params, req, runtime));
}

GetRunningSqlConcurrencyControlRulesResponse Alibabacloud_DAS20200116::Client::getRunningSqlConcurrencyControlRules(shared_ptr<GetRunningSqlConcurrencyControlRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRunningSqlConcurrencyControlRulesWithOptions(request, runtime);
}

GetSqlConcurrencyControlKeywordsFromSqlTextResponse Alibabacloud_DAS20200116::Client::getSqlConcurrencyControlKeywordsFromSqlTextWithOptions(shared_ptr<GetSqlConcurrencyControlKeywordsFromSqlTextRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consoleContext)) {
    query->insert(pair<string, string>("ConsoleContext", *request->consoleContext));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sqlText)) {
    query->insert(pair<string, string>("SqlText", *request->sqlText));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSqlConcurrencyControlKeywordsFromSqlText"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSqlConcurrencyControlKeywordsFromSqlTextResponse(callApi(params, req, runtime));
}

GetSqlConcurrencyControlKeywordsFromSqlTextResponse Alibabacloud_DAS20200116::Client::getSqlConcurrencyControlKeywordsFromSqlText(shared_ptr<GetSqlConcurrencyControlKeywordsFromSqlTextRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSqlConcurrencyControlKeywordsFromSqlTextWithOptions(request, runtime);
}

GetSqlConcurrencyControlRulesHistoryResponse Alibabacloud_DAS20200116::Client::getSqlConcurrencyControlRulesHistoryWithOptions(shared_ptr<GetSqlConcurrencyControlRulesHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consoleContext)) {
    query->insert(pair<string, string>("ConsoleContext", *request->consoleContext));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSqlConcurrencyControlRulesHistory"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSqlConcurrencyControlRulesHistoryResponse(callApi(params, req, runtime));
}

GetSqlConcurrencyControlRulesHistoryResponse Alibabacloud_DAS20200116::Client::getSqlConcurrencyControlRulesHistory(shared_ptr<GetSqlConcurrencyControlRulesHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSqlConcurrencyControlRulesHistoryWithOptions(request, runtime);
}

GetSqlOptimizeAdviceResponse Alibabacloud_DAS20200116::Client::getSqlOptimizeAdviceWithOptions(shared_ptr<GetSqlOptimizeAdviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consoleContext)) {
    query->insert(pair<string, string>("ConsoleContext", *request->consoleContext));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDt)) {
    query->insert(pair<string, string>("EndDt", *request->endDt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engine)) {
    query->insert(pair<string, string>("Engine", *request->engine));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIds)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDt)) {
    query->insert(pair<string, string>("StartDt", *request->startDt));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSqlOptimizeAdvice"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSqlOptimizeAdviceResponse(callApi(params, req, runtime));
}

GetSqlOptimizeAdviceResponse Alibabacloud_DAS20200116::Client::getSqlOptimizeAdvice(shared_ptr<GetSqlOptimizeAdviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSqlOptimizeAdviceWithOptions(request, runtime);
}

GetStorageAnalysisResultResponse Alibabacloud_DAS20200116::Client::getStorageAnalysisResultWithOptions(shared_ptr<GetStorageAnalysisResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetStorageAnalysisResult"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetStorageAnalysisResultResponse(callApi(params, req, runtime));
}

GetStorageAnalysisResultResponse Alibabacloud_DAS20200116::Client::getStorageAnalysisResult(shared_ptr<GetStorageAnalysisResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStorageAnalysisResultWithOptions(request, runtime);
}

KillInstanceAllSessionResponse Alibabacloud_DAS20200116::Client::killInstanceAllSessionWithOptions(shared_ptr<KillInstanceAllSessionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consoleContext)) {
    query->insert(pair<string, string>("ConsoleContext", *request->consoleContext));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("KillInstanceAllSession"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return KillInstanceAllSessionResponse(callApi(params, req, runtime));
}

KillInstanceAllSessionResponse Alibabacloud_DAS20200116::Client::killInstanceAllSession(shared_ptr<KillInstanceAllSessionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return killInstanceAllSessionWithOptions(request, runtime);
}

ModifyAutoScalingConfigResponse Alibabacloud_DAS20200116::Client::modifyAutoScalingConfigWithOptions(shared_ptr<ModifyAutoScalingConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<ModifyAutoScalingConfigRequestBandwidth>(request->bandwidth)) {
    query->insert(pair<string, ModifyAutoScalingConfigRequestBandwidth>("Bandwidth", *request->bandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyAutoScalingConfigRequestResource>(request->resource)) {
    query->insert(pair<string, ModifyAutoScalingConfigRequestResource>("Resource", *request->resource));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyAutoScalingConfigRequestShard>(request->shard)) {
    query->insert(pair<string, ModifyAutoScalingConfigRequestShard>("Shard", *request->shard));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyAutoScalingConfigRequestSpec>(request->spec)) {
    query->insert(pair<string, ModifyAutoScalingConfigRequestSpec>("Spec", *request->spec));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyAutoScalingConfigRequestStorage>(request->storage)) {
    query->insert(pair<string, ModifyAutoScalingConfigRequestStorage>("Storage", *request->storage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAutoScalingConfig"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAutoScalingConfigResponse(callApi(params, req, runtime));
}

ModifyAutoScalingConfigResponse Alibabacloud_DAS20200116::Client::modifyAutoScalingConfig(shared_ptr<ModifyAutoScalingConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAutoScalingConfigWithOptions(request, runtime);
}

ModifySqlLogConfigResponse Alibabacloud_DAS20200116::Client::modifySqlLogConfigWithOptions(shared_ptr<ModifySqlLogConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ModifySqlLogConfigRequestFilters>>(request->filters)) {
    query->insert(pair<string, vector<ModifySqlLogConfigRequestFilters>>("Filters", *request->filters));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enable)) {
    body->insert(pair<string, bool>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->hotRetention)) {
    body->insert(pair<string, long>("HotRetention", *request->hotRetention));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->requestEnable)) {
    body->insert(pair<string, bool>("RequestEnable", *request->requestEnable));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->retention)) {
    body->insert(pair<string, long>("Retention", *request->retention));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifySqlLogConfig"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifySqlLogConfigResponse(callApi(params, req, runtime));
}

ModifySqlLogConfigResponse Alibabacloud_DAS20200116::Client::modifySqlLogConfig(shared_ptr<ModifySqlLogConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySqlLogConfigWithOptions(request, runtime);
}

RunCloudBenchTaskResponse Alibabacloud_DAS20200116::Client::runCloudBenchTaskWithOptions(shared_ptr<RunCloudBenchTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunCloudBenchTask"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunCloudBenchTaskResponse(callApi(params, req, runtime));
}

RunCloudBenchTaskResponse Alibabacloud_DAS20200116::Client::runCloudBenchTask(shared_ptr<RunCloudBenchTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runCloudBenchTaskWithOptions(request, runtime);
}

SetEventSubscriptionResponse Alibabacloud_DAS20200116::Client::setEventSubscriptionWithOptions(shared_ptr<SetEventSubscriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->active)) {
    query->insert(pair<string, string>("Active", *request->active));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelType)) {
    query->insert(pair<string, string>("ChannelType", *request->channelType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactGroupName)) {
    query->insert(pair<string, string>("ContactGroupName", *request->contactGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactName)) {
    query->insert(pair<string, string>("ContactName", *request->contactName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dispatchRule)) {
    query->insert(pair<string, string>("DispatchRule", *request->dispatchRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventContext)) {
    query->insert(pair<string, string>("EventContext", *request->eventContext));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->level)) {
    query->insert(pair<string, string>("Level", *request->level));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->minInterval)) {
    query->insert(pair<string, string>("MinInterval", *request->minInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->severity)) {
    query->insert(pair<string, string>("Severity", *request->severity));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetEventSubscription"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetEventSubscriptionResponse(callApi(params, req, runtime));
}

SetEventSubscriptionResponse Alibabacloud_DAS20200116::Client::setEventSubscription(shared_ptr<SetEventSubscriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setEventSubscriptionWithOptions(request, runtime);
}

UpdateAutoResourceOptimizeRulesAsyncResponse Alibabacloud_DAS20200116::Client::updateAutoResourceOptimizeRulesAsyncWithOptions(shared_ptr<UpdateAutoResourceOptimizeRulesAsyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consoleContext)) {
    query->insert(pair<string, string>("ConsoleContext", *request->consoleContext));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIds)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resultId)) {
    query->insert(pair<string, string>("ResultId", *request->resultId));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->tableFragmentationRatio)) {
    query->insert(pair<string, double>("TableFragmentationRatio", *request->tableFragmentationRatio));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->tableSpaceSize)) {
    query->insert(pair<string, double>("TableSpaceSize", *request->tableSpaceSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAutoResourceOptimizeRulesAsync"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAutoResourceOptimizeRulesAsyncResponse(callApi(params, req, runtime));
}

UpdateAutoResourceOptimizeRulesAsyncResponse Alibabacloud_DAS20200116::Client::updateAutoResourceOptimizeRulesAsync(shared_ptr<UpdateAutoResourceOptimizeRulesAsyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAutoResourceOptimizeRulesAsyncWithOptions(request, runtime);
}

UpdateAutoSqlOptimizeStatusResponse Alibabacloud_DAS20200116::Client::updateAutoSqlOptimizeStatusWithOptions(shared_ptr<UpdateAutoSqlOptimizeStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instances)) {
    query->insert(pair<string, string>("Instances", *request->instances));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAutoSqlOptimizeStatus"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAutoSqlOptimizeStatusResponse(callApi(params, req, runtime));
}

UpdateAutoSqlOptimizeStatusResponse Alibabacloud_DAS20200116::Client::updateAutoSqlOptimizeStatus(shared_ptr<UpdateAutoSqlOptimizeStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAutoSqlOptimizeStatusWithOptions(request, runtime);
}

UpdateAutoThrottleRulesAsyncResponse Alibabacloud_DAS20200116::Client::updateAutoThrottleRulesAsyncWithOptions(shared_ptr<UpdateAutoThrottleRulesAsyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<double>(request->abnormalDuration)) {
    query->insert(pair<string, double>("AbnormalDuration", *request->abnormalDuration));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->activeSessions)) {
    query->insert(pair<string, long>("ActiveSessions", *request->activeSessions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->allowThrottleEndTime)) {
    query->insert(pair<string, string>("AllowThrottleEndTime", *request->allowThrottleEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->allowThrottleStartTime)) {
    query->insert(pair<string, string>("AllowThrottleStartTime", *request->allowThrottleStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoKillSession)) {
    query->insert(pair<string, bool>("AutoKillSession", *request->autoKillSession));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consoleContext)) {
    query->insert(pair<string, string>("ConsoleContext", *request->consoleContext));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cpuSessionRelation)) {
    query->insert(pair<string, string>("CpuSessionRelation", *request->cpuSessionRelation));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->cpuUsage)) {
    query->insert(pair<string, double>("CpuUsage", *request->cpuUsage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIds)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->maxThrottleTime)) {
    query->insert(pair<string, double>("MaxThrottleTime", *request->maxThrottleTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resultId)) {
    query->insert(pair<string, string>("ResultId", *request->resultId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAutoThrottleRulesAsync"))},
    {"version", boost::any(string("2020-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAutoThrottleRulesAsyncResponse(callApi(params, req, runtime));
}

UpdateAutoThrottleRulesAsyncResponse Alibabacloud_DAS20200116::Client::updateAutoThrottleRulesAsync(shared_ptr<UpdateAutoThrottleRulesAsyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAutoThrottleRulesAsyncWithOptions(request, runtime);
}

