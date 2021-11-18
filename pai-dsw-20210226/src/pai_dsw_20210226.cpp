// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/pai_dsw_20210226.hpp>
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

using namespace Alibabacloud_Pai-dsw20210226;

Alibabacloud_Pai-dsw20210226::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("pai-dsw"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Pai-dsw20210226::Client::getEndpoint(shared_ptr<string> productId,
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

CreateImageResponse Alibabacloud_Pai-dsw20210226::Client::createImage(shared_ptr<CreateImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createImageWithOptions(request, headers, runtime);
}

CreateImageResponse Alibabacloud_Pai-dsw20210226::Client::createImageWithOptions(shared_ptr<CreateImageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    (*body)["Description"] = *request->description;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    (*body)["InstanceId"] = *request->instanceId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*body)["Name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repository)) {
    (*body)["Repository"] = *request->repository;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateImageResponse(doROARequest(make_shared<string>("CreateImage"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/images")), make_shared<string>("json"), req, runtime));
}

CreateInstanceResponse Alibabacloud_Pai-dsw20210226::Client::createInstance(shared_ptr<CreateInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createInstanceWithOptions(request, headers, runtime);
}

CreateInstanceResponse Alibabacloud_Pai-dsw20210226::Client::createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<Dataset>>(request->datasetList)) {
    (*body)["DatasetList"] = *request->datasetList;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsSpec)) {
    (*body)["EcsSpec"] = *request->ecsSpec;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->environments)) {
    (*body)["Environments"] = *request->environments;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    (*body)["ImageId"] = *request->imageId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUrl)) {
    (*body)["ImageUrl"] = *request->imageUrl;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    (*body)["InstanceName"] = *request->instanceName;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->isPublic)) {
    (*body)["IsPublic"] = *request->isPublic;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nasFileSystemId)) {
    (*body)["NasFileSystemId"] = *request->nasFileSystemId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    (*body)["UserName"] = *request->userName;
  }
  if (!Darabonba_Util::Client::isUnset<UserVpc>(request->userVpc)) {
    (*body)["UserVpc"] = *request->userVpc;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    (*body)["WorkspaceId"] = *request->workspaceId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateInstanceResponse(doROARequest(make_shared<string>("CreateInstance"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/instances/")), make_shared<string>("json"), req, runtime));
}

CreateInstanceShutdownTimerResponse Alibabacloud_Pai-dsw20210226::Client::createInstanceShutdownTimer(shared_ptr<string> InstanceId, shared_ptr<CreateInstanceShutdownTimerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createInstanceShutdownTimerWithOptions(InstanceId, request, headers, runtime);
}

CreateInstanceShutdownTimerResponse Alibabacloud_Pai-dsw20210226::Client::createInstanceShutdownTimerWithOptions(shared_ptr<string> InstanceId,
                                                                                                                 shared_ptr<CreateInstanceShutdownTimerRequest> request,
                                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleTime)) {
    (*body)["ScheduleTime"] = *request->scheduleTime;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ttlInMillis)) {
    (*body)["TtlInMillis"] = *request->ttlInMillis;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateInstanceShutdownTimerResponse(doROARequest(make_shared<string>("CreateInstanceShutdownTimer"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/instances/") + string(*InstanceId) + string("/shutdownTimer")), make_shared<string>("json"), req, runtime));
}

CreateInstanceSnapshotResponse Alibabacloud_Pai-dsw20210226::Client::createInstanceSnapshot(shared_ptr<string> InstanceId, shared_ptr<CreateInstanceSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createInstanceSnapshotWithOptions(InstanceId, request, headers, runtime);
}

CreateInstanceSnapshotResponse Alibabacloud_Pai-dsw20210226::Client::createInstanceSnapshotWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<CreateInstanceSnapshotRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceSnapshotDescription)) {
    (*body)["InstanceSnapshotDescription"] = *request->instanceSnapshotDescription;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceSnapshotName)) {
    (*body)["InstanceSnapshotName"] = *request->instanceSnapshotName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceSnapshotRepoUrl)) {
    (*body)["InstanceSnapshotRepoUrl"] = *request->instanceSnapshotRepoUrl;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateInstanceSnapshotResponse(doROARequest(make_shared<string>("CreateInstanceSnapshot"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/instances/") + string(*InstanceId) + string("/snapshots")), make_shared<string>("json"), req, runtime));
}

DeleteInstanceResponse Alibabacloud_Pai-dsw20210226::Client::deleteInstance(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteInstanceWithOptions(InstanceId, headers, runtime);
}

DeleteInstanceResponse Alibabacloud_Pai-dsw20210226::Client::deleteInstanceWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DeleteInstanceResponse(doROARequest(make_shared<string>("DeleteInstance"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/instances/") + string(*InstanceId)), make_shared<string>("json"), req, runtime));
}

DeleteInstanceShutdownTimerResponse Alibabacloud_Pai-dsw20210226::Client::deleteInstanceShutdownTimer(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteInstanceShutdownTimerWithOptions(InstanceId, headers, runtime);
}

DeleteInstanceShutdownTimerResponse Alibabacloud_Pai-dsw20210226::Client::deleteInstanceShutdownTimerWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DeleteInstanceShutdownTimerResponse(doROARequest(make_shared<string>("DeleteInstanceShutdownTimer"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/instances/") + string(*InstanceId) + string("/shutdownTimer")), make_shared<string>("json"), req, runtime));
}

DeleteInstanceSnapshotResponse Alibabacloud_Pai-dsw20210226::Client::deleteInstanceSnapshot(shared_ptr<string> InstanceId, shared_ptr<string> InstanceSnapshotId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteInstanceSnapshotWithOptions(InstanceId, InstanceSnapshotId, headers, runtime);
}

DeleteInstanceSnapshotResponse Alibabacloud_Pai-dsw20210226::Client::deleteInstanceSnapshotWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<string> InstanceSnapshotId,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  InstanceSnapshotId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceSnapshotId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DeleteInstanceSnapshotResponse(doROARequest(make_shared<string>("DeleteInstanceSnapshot"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/instances/") + string(*InstanceId) + string("/snapshots/") + string(*InstanceSnapshotId)), make_shared<string>("json"), req, runtime));
}

GetAuthorizationResponse Alibabacloud_Pai-dsw20210226::Client::getAuthorization() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAuthorizationWithOptions(headers, runtime);
}

GetAuthorizationResponse Alibabacloud_Pai-dsw20210226::Client::getAuthorizationWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetAuthorizationResponse(doROARequest(make_shared<string>("GetAuthorization"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/authorization")), make_shared<string>("json"), req, runtime));
}

GetDashboardStatisticsResponse Alibabacloud_Pai-dsw20210226::Client::getDashboardStatistics(shared_ptr<GetDashboardStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDashboardStatisticsWithOptions(request, headers, runtime);
}

GetDashboardStatisticsResponse Alibabacloud_Pai-dsw20210226::Client::getDashboardStatisticsWithOptions(shared_ptr<GetDashboardStatisticsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    (*query)["WorkspaceId"] = *request->workspaceId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetDashboardStatisticsResponse(doROARequest(make_shared<string>("GetDashboardStatistics"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/statistics/dashboard")), make_shared<string>("json"), req, runtime));
}

GetInstanceResponse Alibabacloud_Pai-dsw20210226::Client::getInstance(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getInstanceWithOptions(InstanceId, headers, runtime);
}

GetInstanceResponse Alibabacloud_Pai-dsw20210226::Client::getInstanceWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetInstanceResponse(doROARequest(make_shared<string>("GetInstance"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/instances/") + string(*InstanceId)), make_shared<string>("json"), req, runtime));
}

GetInstanceImageResponse Alibabacloud_Pai-dsw20210226::Client::getInstanceImage(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getInstanceImageWithOptions(InstanceId, headers, runtime);
}

GetInstanceImageResponse Alibabacloud_Pai-dsw20210226::Client::getInstanceImageWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetInstanceImageResponse(doROARequest(make_shared<string>("GetInstanceImage"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/instances/") + string(*InstanceId) + string("/image")), make_shared<string>("json"), req, runtime));
}

GetInstanceShutdownTimerResponse Alibabacloud_Pai-dsw20210226::Client::getInstanceShutdownTimer(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getInstanceShutdownTimerWithOptions(InstanceId, headers, runtime);
}

GetInstanceShutdownTimerResponse Alibabacloud_Pai-dsw20210226::Client::getInstanceShutdownTimerWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetInstanceShutdownTimerResponse(doROARequest(make_shared<string>("GetInstanceShutdownTimer"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/instances/") + string(*InstanceId) + string("/shutdownTimer")), make_shared<string>("json"), req, runtime));
}

GetInstanceSnapshotResponse Alibabacloud_Pai-dsw20210226::Client::getInstanceSnapshot(shared_ptr<string> InstanceId, shared_ptr<string> InstanceSnapshotId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getInstanceSnapshotWithOptions(InstanceId, InstanceSnapshotId, headers, runtime);
}

GetInstanceSnapshotResponse Alibabacloud_Pai-dsw20210226::Client::getInstanceSnapshotWithOptions(shared_ptr<string> InstanceId,
                                                                                                 shared_ptr<string> InstanceSnapshotId,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  InstanceSnapshotId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceSnapshotId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetInstanceSnapshotResponse(doROARequest(make_shared<string>("GetInstanceSnapshot"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/instances/") + string(*InstanceId) + string("/snapshots/") + string(*InstanceSnapshotId)), make_shared<string>("json"), req, runtime));
}

GetInstanceTypeResponse Alibabacloud_Pai-dsw20210226::Client::getInstanceType(shared_ptr<string> InstanceTypeId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getInstanceTypeWithOptions(InstanceTypeId, headers, runtime);
}

GetInstanceTypeResponse Alibabacloud_Pai-dsw20210226::Client::getInstanceTypeWithOptions(shared_ptr<string> InstanceTypeId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceTypeId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceTypeId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetInstanceTypeResponse(doROARequest(make_shared<string>("GetInstanceType"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/instanceTypes/") + string(*InstanceTypeId)), make_shared<string>("json"), req, runtime));
}

GetInstanceUrlResponse Alibabacloud_Pai-dsw20210226::Client::getInstanceUrl(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getInstanceUrlWithOptions(InstanceId, headers, runtime);
}

GetInstanceUrlResponse Alibabacloud_Pai-dsw20210226::Client::getInstanceUrlWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetInstanceUrlResponse(doROARequest(make_shared<string>("GetInstanceUrl"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/instances/") + string(*InstanceId) + string("/url")), make_shared<string>("json"), req, runtime));
}

GetInstancesStatisticsResponse Alibabacloud_Pai-dsw20210226::Client::getInstancesStatistics(shared_ptr<GetInstancesStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getInstancesStatisticsWithOptions(request, headers, runtime);
}

GetInstancesStatisticsResponse Alibabacloud_Pai-dsw20210226::Client::getInstancesStatisticsWithOptions(shared_ptr<GetInstancesStatisticsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceIds)) {
    (*query)["WorkspaceIds"] = *request->workspaceIds;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetInstancesStatisticsResponse(doROARequest(make_shared<string>("GetInstancesStatistics"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/statistics/instances")), make_shared<string>("json"), req, runtime));
}

GetUserConfigResponse Alibabacloud_Pai-dsw20210226::Client::getUserConfig() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getUserConfigWithOptions(headers, runtime);
}

GetUserConfigResponse Alibabacloud_Pai-dsw20210226::Client::getUserConfigWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetUserConfigResponse(doROARequest(make_shared<string>("GetUserConfig"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/users/config")), make_shared<string>("json"), req, runtime));
}

GetUserResourceAuthorizationStatusResponse Alibabacloud_Pai-dsw20210226::Client::getUserResourceAuthorizationStatus() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getUserResourceAuthorizationStatusWithOptions(headers, runtime);
}

GetUserResourceAuthorizationStatusResponse Alibabacloud_Pai-dsw20210226::Client::getUserResourceAuthorizationStatusWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetUserResourceAuthorizationStatusResponse(doROARequest(make_shared<string>("GetUserResourceAuthorizationStatus"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/users/resourceAuthorizationStatus")), make_shared<string>("json"), req, runtime));
}

GetUserResourceStatusResponse Alibabacloud_Pai-dsw20210226::Client::getUserResourceStatus() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getUserResourceStatusWithOptions(headers, runtime);
}

GetUserResourceStatusResponse Alibabacloud_Pai-dsw20210226::Client::getUserResourceStatusWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetUserResourceStatusResponse(doROARequest(make_shared<string>("GetUserResourceStatus"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/users/resourceStatus")), make_shared<string>("json"), req, runtime));
}

GetUserSpecialVersionGpuResourceInfoResponse Alibabacloud_Pai-dsw20210226::Client::getUserSpecialVersionGpuResourceInfo(shared_ptr<GetUserSpecialVersionGpuResourceInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getUserSpecialVersionGpuResourceInfoWithOptions(request, headers, runtime);
}

GetUserSpecialVersionGpuResourceInfoResponse Alibabacloud_Pai-dsw20210226::Client::getUserSpecialVersionGpuResourceInfoWithOptions(shared_ptr<GetUserSpecialVersionGpuResourceInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->payType)) {
    (*query)["PayType"] = *request->payType;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetUserSpecialVersionGpuResourceInfoResponse(doROARequest(make_shared<string>("GetUserSpecialVersionGpuResourceInfo"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/users/specialVersionGpuResourceInfo")), make_shared<string>("json"), req, runtime));
}

ListConfigsResponse Alibabacloud_Pai-dsw20210226::Client::listConfigs() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listConfigsWithOptions(headers, runtime);
}

ListConfigsResponse Alibabacloud_Pai-dsw20210226::Client::listConfigsWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return ListConfigsResponse(doROARequest(make_shared<string>("ListConfigs"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/configs")), make_shared<string>("json"), req, runtime));
}

ListDatasetsResponse Alibabacloud_Pai-dsw20210226::Client::listDatasets(shared_ptr<ListDatasetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDatasetsWithOptions(request, headers, runtime);
}

ListDatasetsResponse Alibabacloud_Pai-dsw20210226::Client::listDatasetsWithOptions(shared_ptr<ListDatasetsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    (*query)["WorkspaceId"] = *request->workspaceId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListDatasetsResponse(doROARequest(make_shared<string>("ListDatasets"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/datasets")), make_shared<string>("json"), req, runtime));
}

ListEcsSpecsResponse Alibabacloud_Pai-dsw20210226::Client::listEcsSpecs(shared_ptr<ListEcsSpecsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listEcsSpecsWithOptions(request, headers, runtime);
}

ListEcsSpecsResponse Alibabacloud_Pai-dsw20210226::Client::listEcsSpecsWithOptions(shared_ptr<ListEcsSpecsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorTypeEquals)) {
    (*query)["AcceleratorTypeEquals"] = *request->acceleratorTypeEquals;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListEcsSpecsResponse(doROARequest(make_shared<string>("ListEcsSpecs"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/ecsSpecs")), make_shared<string>("json"), req, runtime));
}

ListImagesResponse Alibabacloud_Pai-dsw20210226::Client::listImages(shared_ptr<ListImagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listImagesWithOptions(request, headers, runtime);
}

ListImagesResponse Alibabacloud_Pai-dsw20210226::Client::listImagesWithOptions(shared_ptr<ListImagesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorTypeEquals)) {
    (*query)["AcceleratorTypeEquals"] = *request->acceleratorTypeEquals;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageNameContains)) {
    (*query)["ImageNameContains"] = *request->imageNameContains;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageTypeEquals)) {
    (*query)["ImageTypeEquals"] = *request->imageTypeEquals;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->product)) {
    (*query)["Product"] = *request->product;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    (*query)["WorkspaceId"] = *request->workspaceId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListImagesResponse(doROARequest(make_shared<string>("ListImages"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/images")), make_shared<string>("json"), req, runtime));
}

ListInstanceSnapshotsResponse Alibabacloud_Pai-dsw20210226::Client::listInstanceSnapshots(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInstanceSnapshotsWithOptions(InstanceId, headers, runtime);
}

ListInstanceSnapshotsResponse Alibabacloud_Pai-dsw20210226::Client::listInstanceSnapshotsWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return ListInstanceSnapshotsResponse(doROARequest(make_shared<string>("ListInstanceSnapshots"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/instances/") + string(*InstanceId) + string("/snapshots")), make_shared<string>("json"), req, runtime));
}

ListInstanceTypesResponse Alibabacloud_Pai-dsw20210226::Client::listInstanceTypes(shared_ptr<ListInstanceTypesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInstanceTypesWithOptions(request, headers, runtime);
}

ListInstanceTypesResponse Alibabacloud_Pai-dsw20210226::Client::listInstanceTypesWithOptions(shared_ptr<ListInstanceTypesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorType)) {
    (*query)["AcceleratorType"] = *request->acceleratorType;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListInstanceTypesResponse(doROARequest(make_shared<string>("ListInstanceTypes"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/instanceTypes")), make_shared<string>("json"), req, runtime));
}

ListInstancesResponse Alibabacloud_Pai-dsw20210226::Client::listInstances(shared_ptr<ListInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInstancesWithOptions(request, headers, runtime);
}

ListInstancesResponse Alibabacloud_Pai-dsw20210226::Client::listInstancesWithOptions(shared_ptr<ListInstancesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->inWorkspace)) {
    (*query)["InWorkspace"] = *request->inWorkspace;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceNameContains)) {
    (*query)["InstanceNameContains"] = *request->instanceNameContains;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceStatusEquals)) {
    (*query)["InstanceStatusEquals"] = *request->instanceStatusEquals;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    (*query)["PageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    (*query)["SortBy"] = *request->sortBy;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortOrder)) {
    (*query)["SortOrder"] = *request->sortOrder;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceIdEquals)) {
    (*query)["WorkspaceIdEquals"] = *request->workspaceIdEquals;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListInstancesResponse(doROARequest(make_shared<string>("ListInstances"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/instances")), make_shared<string>("json"), req, runtime));
}

ListInstancesStatusResponse Alibabacloud_Pai-dsw20210226::Client::listInstancesStatus(shared_ptr<ListInstancesStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInstancesStatusWithOptions(request, headers, runtime);
}

ListInstancesStatusResponse Alibabacloud_Pai-dsw20210226::Client::listInstancesStatusWithOptions(shared_ptr<ListInstancesStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIds)) {
    (*query)["InstanceIds"] = *request->instanceIds;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListInstancesStatusResponse(doROARequest(make_shared<string>("ListInstancesStatus"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/statuses/instances")), make_shared<string>("json"), req, runtime));
}

ListNamespacesResponse Alibabacloud_Pai-dsw20210226::Client::listNamespaces() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listNamespacesWithOptions(headers, runtime);
}

ListNamespacesResponse Alibabacloud_Pai-dsw20210226::Client::listNamespacesWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return ListNamespacesResponse(doROARequest(make_shared<string>("ListNamespaces"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/imageRegistry/namespaces")), make_shared<string>("json"), req, runtime));
}

ListNasesResponse Alibabacloud_Pai-dsw20210226::Client::listNases() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listNasesWithOptions(headers, runtime);
}

ListNasesResponse Alibabacloud_Pai-dsw20210226::Client::listNasesWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return ListNasesResponse(doROARequest(make_shared<string>("ListNases"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/nases")), make_shared<string>("json"), req, runtime));
}

ListNetworkSecurityGroupsResponse Alibabacloud_Pai-dsw20210226::Client::listNetworkSecurityGroups(shared_ptr<string> VpcId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listNetworkSecurityGroupsWithOptions(VpcId, headers, runtime);
}

ListNetworkSecurityGroupsResponse Alibabacloud_Pai-dsw20210226::Client::listNetworkSecurityGroupsWithOptions(shared_ptr<string> VpcId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  VpcId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(VpcId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return ListNetworkSecurityGroupsResponse(doROARequest(make_shared<string>("ListNetworkSecurityGroups"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/network/vpcs/") + string(*VpcId) + string("/securityGroups")), make_shared<string>("json"), req, runtime));
}

ListNetworkVSwitchesResponse Alibabacloud_Pai-dsw20210226::Client::listNetworkVSwitches(shared_ptr<string> VpcId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listNetworkVSwitchesWithOptions(VpcId, headers, runtime);
}

ListNetworkVSwitchesResponse Alibabacloud_Pai-dsw20210226::Client::listNetworkVSwitchesWithOptions(shared_ptr<string> VpcId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  VpcId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(VpcId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return ListNetworkVSwitchesResponse(doROARequest(make_shared<string>("ListNetworkVSwitches"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/network/vpcs/") + string(*VpcId) + string("/vSwitches")), make_shared<string>("json"), req, runtime));
}

ListNetworkVpcsResponse Alibabacloud_Pai-dsw20210226::Client::listNetworkVpcs() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listNetworkVpcsWithOptions(headers, runtime);
}

ListNetworkVpcsResponse Alibabacloud_Pai-dsw20210226::Client::listNetworkVpcsWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return ListNetworkVpcsResponse(doROARequest(make_shared<string>("ListNetworkVpcs"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/network/vpcs")), make_shared<string>("json"), req, runtime));
}

ListRegionsResponse Alibabacloud_Pai-dsw20210226::Client::listRegions() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRegionsWithOptions(headers, runtime);
}

ListRegionsResponse Alibabacloud_Pai-dsw20210226::Client::listRegionsWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return ListRegionsResponse(doROARequest(make_shared<string>("ListRegions"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/configs/regions")), make_shared<string>("json"), req, runtime));
}

ListRepositoriesResponse Alibabacloud_Pai-dsw20210226::Client::listRepositories(shared_ptr<string> Namespace_) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRepositoriesWithOptions(shared_ptr<string> Namespace_, headers, runtime);
}

ListRepositoriesResponse Alibabacloud_Pai-dsw20210226::Client::listRepositoriesWithOptions(shared_ptr<string> Namespace_, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<string> Namespace_ = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Namespace_));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return ListRepositoriesResponse(doROARequest(make_shared<string>("ListRepositories"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/imageRegistry/namespaces/") + string(*Namespace_) + string("/repositories")), make_shared<string>("json"), req, runtime));
}

ListUserClustersResponse Alibabacloud_Pai-dsw20210226::Client::listUserClusters() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listUserClustersWithOptions(headers, runtime);
}

ListUserClustersResponse Alibabacloud_Pai-dsw20210226::Client::listUserClustersWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return ListUserClustersResponse(doROARequest(make_shared<string>("ListUserClusters"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/users/clusters")), make_shared<string>("json"), req, runtime));
}

ListUserWorkNodesResponse Alibabacloud_Pai-dsw20210226::Client::listUserWorkNodes(shared_ptr<ListUserWorkNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listUserWorkNodesWithOptions(request, headers, runtime);
}

ListUserWorkNodesResponse Alibabacloud_Pai-dsw20210226::Client::listUserWorkNodesWithOptions(shared_ptr<ListUserWorkNodesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    (*query)["ClusterId"] = *request->clusterId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListUserWorkNodesResponse(doROARequest(make_shared<string>("ListUserWorkNodes"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/users/workerNodes")), make_shared<string>("json"), req, runtime));
}

StartInstanceResponse Alibabacloud_Pai-dsw20210226::Client::startInstance(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startInstanceWithOptions(InstanceId, headers, runtime);
}

StartInstanceResponse Alibabacloud_Pai-dsw20210226::Client::startInstanceWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return StartInstanceResponse(doROARequest(make_shared<string>("StartInstance"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/instances/") + string(*InstanceId) + string("/start")), make_shared<string>("json"), req, runtime));
}

StopInstanceResponse Alibabacloud_Pai-dsw20210226::Client::stopInstance(shared_ptr<string> InstanceId, shared_ptr<StopInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopInstanceWithOptions(InstanceId, request, headers, runtime);
}

StopInstanceResponse Alibabacloud_Pai-dsw20210226::Client::stopInstanceWithOptions(shared_ptr<string> InstanceId,
                                                                                   shared_ptr<StopInstanceRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->saveImage)) {
    (*query)["SaveImage"] = *request->saveImage;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return StopInstanceResponse(doROARequest(make_shared<string>("StopInstance"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/instances/") + string(*InstanceId) + string("/stop")), make_shared<string>("json"), req, runtime));
}

UpdateInstanceResponse Alibabacloud_Pai-dsw20210226::Client::updateInstance(shared_ptr<string> InstanceId, shared_ptr<UpdateInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateInstanceWithOptions(InstanceId, request, headers, runtime);
}

UpdateInstanceResponse Alibabacloud_Pai-dsw20210226::Client::updateInstanceWithOptions(shared_ptr<string> InstanceId,
                                                                                       shared_ptr<UpdateInstanceRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    (*body)["InstanceName"] = *request->instanceName;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return UpdateInstanceResponse(doROARequest(make_shared<string>("UpdateInstance"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/instances/") + string(*InstanceId)), make_shared<string>("json"), req, runtime));
}

UpdateInstanceSnapshotResponse Alibabacloud_Pai-dsw20210226::Client::updateInstanceSnapshot(shared_ptr<string> InstanceId, shared_ptr<string> InstanceSnapshotId, shared_ptr<UpdateInstanceSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateInstanceSnapshotWithOptions(InstanceId, InstanceSnapshotId, request, headers, runtime);
}

UpdateInstanceSnapshotResponse Alibabacloud_Pai-dsw20210226::Client::updateInstanceSnapshotWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<string> InstanceSnapshotId,
                                                                                                       shared_ptr<UpdateInstanceSnapshotRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  InstanceSnapshotId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceSnapshotId));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceSnapshotName)) {
    (*body)["InstanceSnapshotName"] = *request->instanceSnapshotName;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return UpdateInstanceSnapshotResponse(doROARequest(make_shared<string>("UpdateInstanceSnapshot"), make_shared<string>("2021-02-26"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/instances/") + string(*InstanceId) + string("/snapshots/") + string(*InstanceSnapshotId)), make_shared<string>("json"), req, runtime));
}

