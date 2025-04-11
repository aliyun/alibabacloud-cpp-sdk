// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/eds_aic_20230930.hpp>
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

using namespace Alibabacloud_Eds-aic20230930;

Alibabacloud_Eds-aic20230930::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _signatureAlgorithm = make_shared<string>("v2");
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("eds-aic"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Eds-aic20230930::Client::getEndpoint(shared_ptr<string> productId,
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

AttachKeyPairResponse Alibabacloud_Eds-aic20230930::Client::attachKeyPairWithOptions(shared_ptr<AttachKeyPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceIds)) {
    query->insert(pair<string, vector<string>>("InstanceIds", *request->instanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPairId)) {
    query->insert(pair<string, string>("KeyPairId", *request->keyPairId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachKeyPair"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AttachKeyPairResponse(callApi(params, req, runtime));
  }
  else {
    return AttachKeyPairResponse(execute(params, req, runtime));
  }
}

AttachKeyPairResponse Alibabacloud_Eds-aic20230930::Client::attachKeyPair(shared_ptr<AttachKeyPairRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachKeyPairWithOptions(request, runtime);
}

AuthorizeAndroidInstanceResponse Alibabacloud_Eds-aic20230930::Client::authorizeAndroidInstanceWithOptions(shared_ptr<AuthorizeAndroidInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->androidInstanceIds)) {
    query->insert(pair<string, vector<string>>("AndroidInstanceIds", *request->androidInstanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizeUserId)) {
    query->insert(pair<string, string>("AuthorizeUserId", *request->authorizeUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->unAuthorizeUserId)) {
    query->insert(pair<string, string>("UnAuthorizeUserId", *request->unAuthorizeUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AuthorizeAndroidInstance"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AuthorizeAndroidInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return AuthorizeAndroidInstanceResponse(execute(params, req, runtime));
  }
}

AuthorizeAndroidInstanceResponse Alibabacloud_Eds-aic20230930::Client::authorizeAndroidInstance(shared_ptr<AuthorizeAndroidInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return authorizeAndroidInstanceWithOptions(request, runtime);
}

BackupFileResponse Alibabacloud_Eds-aic20230930::Client::backupFileWithOptions(shared_ptr<BackupFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->androidInstanceIdList)) {
    query->insert(pair<string, vector<string>>("AndroidInstanceIdList", *request->androidInstanceIdList));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->backupAll)) {
    query->insert(pair<string, bool>("BackupAll", *request->backupAll));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupFileName)) {
    query->insert(pair<string, string>("BackupFileName", *request->backupFileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupFilePath)) {
    query->insert(pair<string, string>("BackupFilePath", *request->backupFilePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->sourceAppList)) {
    query->insert(pair<string, vector<string>>("SourceAppList", *request->sourceAppList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->sourceFilePathList)) {
    query->insert(pair<string, vector<string>>("SourceFilePathList", *request->sourceFilePathList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadEndpoint)) {
    query->insert(pair<string, string>("UploadEndpoint", *request->uploadEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadType)) {
    query->insert(pair<string, string>("UploadType", *request->uploadType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BackupFile"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return BackupFileResponse(callApi(params, req, runtime));
  }
  else {
    return BackupFileResponse(execute(params, req, runtime));
  }
}

BackupFileResponse Alibabacloud_Eds-aic20230930::Client::backupFile(shared_ptr<BackupFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return backupFileWithOptions(request, runtime);
}

BatchGetAcpConnectionTicketResponse Alibabacloud_Eds-aic20230930::Client::batchGetAcpConnectionTicketWithOptions(shared_ptr<BatchGetAcpConnectionTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceGroupId)) {
    query->insert(pair<string, string>("InstanceGroupId", *request->instanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceIds)) {
    query->insert(pair<string, vector<string>>("InstanceIds", *request->instanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<BatchGetAcpConnectionTicketRequestInstanceTasks>>(request->instanceTasks)) {
    query->insert(pair<string, vector<BatchGetAcpConnectionTicketRequestInstanceTasks>>("InstanceTasks", *request->instanceTasks));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchGetAcpConnectionTicket"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return BatchGetAcpConnectionTicketResponse(callApi(params, req, runtime));
  }
  else {
    return BatchGetAcpConnectionTicketResponse(execute(params, req, runtime));
  }
}

BatchGetAcpConnectionTicketResponse Alibabacloud_Eds-aic20230930::Client::batchGetAcpConnectionTicket(shared_ptr<BatchGetAcpConnectionTicketRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchGetAcpConnectionTicketWithOptions(request, runtime);
}

ChangeCloudPhoneNodeResponse Alibabacloud_Eds-aic20230930::Client::changeCloudPhoneNodeWithOptions(shared_ptr<ChangeCloudPhoneNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->phoneCount)) {
    query->insert(pair<string, long>("PhoneCount", *request->phoneCount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeCloudPhoneNode"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ChangeCloudPhoneNodeResponse(callApi(params, req, runtime));
  }
  else {
    return ChangeCloudPhoneNodeResponse(execute(params, req, runtime));
  }
}

ChangeCloudPhoneNodeResponse Alibabacloud_Eds-aic20230930::Client::changeCloudPhoneNode(shared_ptr<ChangeCloudPhoneNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeCloudPhoneNodeWithOptions(request, runtime);
}

CheckResourceStockResponse Alibabacloud_Eds-aic20230930::Client::checkResourceStockWithOptions(shared_ptr<CheckResourceStockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acpSpecId)) {
    query->insert(pair<string, string>("AcpSpecId", *request->acpSpecId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->amount)) {
    query->insert(pair<string, long>("Amount", *request->amount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRegionId)) {
    query->insert(pair<string, string>("BizRegionId", *request->bizRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->gpuAcceleration)) {
    query->insert(pair<string, bool>("GpuAcceleration", *request->gpuAcceleration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    query->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckResourceStock"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CheckResourceStockResponse(callApi(params, req, runtime));
  }
  else {
    return CheckResourceStockResponse(execute(params, req, runtime));
  }
}

CheckResourceStockResponse Alibabacloud_Eds-aic20230930::Client::checkResourceStock(shared_ptr<CheckResourceStockRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkResourceStockWithOptions(request, runtime);
}

CreateAndroidInstanceGroupResponse Alibabacloud_Eds-aic20230930::Client::createAndroidInstanceGroupWithOptions(shared_ptr<CreateAndroidInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->amount)) {
    query->insert(pair<string, long>("Amount", *request->amount));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRenew)) {
    query->insert(pair<string, bool>("AutoRenew", *request->autoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRegionId)) {
    query->insert(pair<string, string>("BizRegionId", *request->bizRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    query->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableIpv6)) {
    query->insert(pair<string, bool>("EnableIpv6", *request->enableIpv6));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->gpuAcceleration)) {
    query->insert(pair<string, bool>("GpuAcceleration", *request->gpuAcceleration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceGroupName)) {
    query->insert(pair<string, string>("InstanceGroupName", *request->instanceGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceGroupSpec)) {
    query->insert(pair<string, string>("InstanceGroupSpec", *request->instanceGroupSpec));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ipv6Bandwidth)) {
    query->insert(pair<string, long>("Ipv6Bandwidth", *request->ipv6Bandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPairId)) {
    query->insert(pair<string, string>("KeyPairId", *request->keyPairId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->numberOfInstances)) {
    query->insert(pair<string, long>("NumberOfInstances", *request->numberOfInstances));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteId)) {
    query->insert(pair<string, string>("OfficeSiteId", *request->officeSiteId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyGroupId)) {
    query->insert(pair<string, string>("PolicyGroupId", *request->policyGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateAndroidInstanceGroupRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateAndroidInstanceGroupRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAndroidInstanceGroup"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateAndroidInstanceGroupResponse(callApi(params, req, runtime));
  }
  else {
    return CreateAndroidInstanceGroupResponse(execute(params, req, runtime));
  }
}

CreateAndroidInstanceGroupResponse Alibabacloud_Eds-aic20230930::Client::createAndroidInstanceGroup(shared_ptr<CreateAndroidInstanceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAndroidInstanceGroupWithOptions(request, runtime);
}

CreateAppResponse Alibabacloud_Eds-aic20230930::Client::createAppWithOptions(shared_ptr<CreateAppRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateAppShrinkRequest> request = make_shared<CreateAppShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateAppRequestCustomAppInfo>(tmpReq->customAppInfo)) {
    request->customAppInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->customAppInfo, make_shared<string>("CustomAppInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRegionId)) {
    query->insert(pair<string, string>("BizRegionId", *request->bizRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customAppInfoShrink)) {
    query->insert(pair<string, string>("CustomAppInfo", *request->customAppInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filePath)) {
    query->insert(pair<string, string>("FilePath", *request->filePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iconUrl)) {
    query->insert(pair<string, string>("IconUrl", *request->iconUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->installParam)) {
    query->insert(pair<string, string>("InstallParam", *request->installParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossAppUrl)) {
    query->insert(pair<string, string>("OssAppUrl", *request->ossAppUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signApk)) {
    query->insert(pair<string, string>("SignApk", *request->signApk));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateApp"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateAppResponse(callApi(params, req, runtime));
  }
  else {
    return CreateAppResponse(execute(params, req, runtime));
  }
}

CreateAppResponse Alibabacloud_Eds-aic20230930::Client::createApp(shared_ptr<CreateAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAppWithOptions(request, runtime);
}

CreateCloudPhoneNodeResponse Alibabacloud_Eds-aic20230930::Client::createCloudPhoneNodeWithOptions(shared_ptr<CreateCloudPhoneNodeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateCloudPhoneNodeShrinkRequest> request = make_shared<CreateCloudPhoneNodeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateCloudPhoneNodeRequestDisplayConfig>(tmpReq->displayConfig)) {
    request->displayConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->displayConfig, make_shared<string>("DisplayConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRenew)) {
    query->insert(pair<string, bool>("AutoRenew", *request->autoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRegionId)) {
    query->insert(pair<string, string>("BizRegionId", *request->bizRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    query->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->count)) {
    query->insert(pair<string, string>("Count", *request->count));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkId)) {
    query->insert(pair<string, string>("NetworkId", *request->networkId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeName)) {
    query->insert(pair<string, string>("NodeName", *request->nodeName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->phoneCount)) {
    query->insert(pair<string, long>("PhoneCount", *request->phoneCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resolutionHeight)) {
    query->insert(pair<string, long>("ResolutionHeight", *request->resolutionHeight));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resolutionWidth)) {
    query->insert(pair<string, long>("ResolutionWidth", *request->resolutionWidth));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serverShareDataVolume)) {
    query->insert(pair<string, long>("ServerShareDataVolume", *request->serverShareDataVolume));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverType)) {
    query->insert(pair<string, string>("ServerType", *request->serverType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateCloudPhoneNodeShrinkRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateCloudPhoneNodeShrinkRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->displayConfigShrink)) {
    body->insert(pair<string, string>("DisplayConfig", *request->displayConfigShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCloudPhoneNode"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateCloudPhoneNodeResponse(callApi(params, req, runtime));
  }
  else {
    return CreateCloudPhoneNodeResponse(execute(params, req, runtime));
  }
}

CreateCloudPhoneNodeResponse Alibabacloud_Eds-aic20230930::Client::createCloudPhoneNode(shared_ptr<CreateCloudPhoneNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCloudPhoneNodeWithOptions(request, runtime);
}

CreateCustomImageResponse Alibabacloud_Eds-aic20230930::Client::createCustomImageWithOptions(shared_ptr<CreateCustomImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageName)) {
    body->insert(pair<string, string>("ImageName", *request->imageName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCustomImage"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateCustomImageResponse(callApi(params, req, runtime));
  }
  else {
    return CreateCustomImageResponse(execute(params, req, runtime));
  }
}

CreateCustomImageResponse Alibabacloud_Eds-aic20230930::Client::createCustomImage(shared_ptr<CreateCustomImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCustomImageWithOptions(request, runtime);
}

CreateKeyPairResponse Alibabacloud_Eds-aic20230930::Client::createKeyPairWithOptions(shared_ptr<CreateKeyPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPairName)) {
    query->insert(pair<string, string>("KeyPairName", *request->keyPairName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateKeyPair"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateKeyPairResponse(callApi(params, req, runtime));
  }
  else {
    return CreateKeyPairResponse(execute(params, req, runtime));
  }
}

CreateKeyPairResponse Alibabacloud_Eds-aic20230930::Client::createKeyPair(shared_ptr<CreateKeyPairRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createKeyPairWithOptions(request, runtime);
}

CreatePolicyGroupResponse Alibabacloud_Eds-aic20230930::Client::createPolicyGroupWithOptions(shared_ptr<CreatePolicyGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreatePolicyGroupShrinkRequest> request = make_shared<CreatePolicyGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreatePolicyGroupRequestNetRedirectPolicy>(tmpReq->netRedirectPolicy)) {
    request->netRedirectPolicyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->netRedirectPolicy, make_shared<string>("NetRedirectPolicy"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cameraRedirect)) {
    body->insert(pair<string, string>("CameraRedirect", *request->cameraRedirect));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clipboard)) {
    body->insert(pair<string, string>("Clipboard", *request->clipboard));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->html5FileTransfer)) {
    body->insert(pair<string, string>("Html5FileTransfer", *request->html5FileTransfer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->localDrive)) {
    body->insert(pair<string, string>("LocalDrive", *request->localDrive));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lockResolution)) {
    body->insert(pair<string, string>("LockResolution", *request->lockResolution));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->netRedirectPolicyShrink)) {
    body->insert(pair<string, string>("NetRedirectPolicy", *request->netRedirectPolicyShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyGroupName)) {
    body->insert(pair<string, string>("PolicyGroupName", *request->policyGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyType)) {
    body->insert(pair<string, string>("PolicyType", *request->policyType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resolutionHeight)) {
    body->insert(pair<string, long>("ResolutionHeight", *request->resolutionHeight));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resolutionWidth)) {
    body->insert(pair<string, long>("ResolutionWidth", *request->resolutionWidth));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePolicyGroup"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreatePolicyGroupResponse(callApi(params, req, runtime));
  }
  else {
    return CreatePolicyGroupResponse(execute(params, req, runtime));
  }
}

CreatePolicyGroupResponse Alibabacloud_Eds-aic20230930::Client::createPolicyGroup(shared_ptr<CreatePolicyGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPolicyGroupWithOptions(request, runtime);
}

CreateScreenshotResponse Alibabacloud_Eds-aic20230930::Client::createScreenshotWithOptions(shared_ptr<CreateScreenshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->androidInstanceIdList)) {
    query->insert(pair<string, vector<string>>("AndroidInstanceIdList", *request->androidInstanceIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossBucketName)) {
    query->insert(pair<string, string>("OssBucketName", *request->ossBucketName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->skipCheckPolicyConfig)) {
    query->insert(pair<string, string>("SkipCheckPolicyConfig", *request->skipCheckPolicyConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateScreenshot"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateScreenshotResponse(callApi(params, req, runtime));
  }
  else {
    return CreateScreenshotResponse(execute(params, req, runtime));
  }
}

CreateScreenshotResponse Alibabacloud_Eds-aic20230930::Client::createScreenshot(shared_ptr<CreateScreenshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createScreenshotWithOptions(request, runtime);
}

DeleteAndroidInstanceGroupResponse Alibabacloud_Eds-aic20230930::Client::deleteAndroidInstanceGroupWithOptions(shared_ptr<DeleteAndroidInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceGroupIds)) {
    query->insert(pair<string, vector<string>>("InstanceGroupIds", *request->instanceGroupIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAndroidInstanceGroup"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteAndroidInstanceGroupResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteAndroidInstanceGroupResponse(execute(params, req, runtime));
  }
}

DeleteAndroidInstanceGroupResponse Alibabacloud_Eds-aic20230930::Client::deleteAndroidInstanceGroup(shared_ptr<DeleteAndroidInstanceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAndroidInstanceGroupWithOptions(request, runtime);
}

DeleteAppsResponse Alibabacloud_Eds-aic20230930::Client::deleteAppsWithOptions(shared_ptr<DeleteAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->appIdList)) {
    query->insert(pair<string, vector<string>>("AppIdList", *request->appIdList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteApps"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteAppsResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteAppsResponse(execute(params, req, runtime));
  }
}

DeleteAppsResponse Alibabacloud_Eds-aic20230930::Client::deleteApps(shared_ptr<DeleteAppsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAppsWithOptions(request, runtime);
}

DeleteCloudPhoneNodesResponse Alibabacloud_Eds-aic20230930::Client::deleteCloudPhoneNodesWithOptions(shared_ptr<DeleteCloudPhoneNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->nodeIds)) {
    body->insert(pair<string, vector<string>>("NodeIds", *request->nodeIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCloudPhoneNodes"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteCloudPhoneNodesResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteCloudPhoneNodesResponse(execute(params, req, runtime));
  }
}

DeleteCloudPhoneNodesResponse Alibabacloud_Eds-aic20230930::Client::deleteCloudPhoneNodes(shared_ptr<DeleteCloudPhoneNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCloudPhoneNodesWithOptions(request, runtime);
}

DeleteImagesResponse Alibabacloud_Eds-aic20230930::Client::deleteImagesWithOptions(shared_ptr<DeleteImagesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteImagesShrinkRequest> request = make_shared<DeleteImagesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->imageIds)) {
    request->imageIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->imageIds, make_shared<string>("ImageIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageIdsShrink)) {
    body->insert(pair<string, string>("ImageIds", *request->imageIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteImages"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteImagesResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteImagesResponse(execute(params, req, runtime));
  }
}

DeleteImagesResponse Alibabacloud_Eds-aic20230930::Client::deleteImages(shared_ptr<DeleteImagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteImagesWithOptions(request, runtime);
}

DeleteKeyPairsResponse Alibabacloud_Eds-aic20230930::Client::deleteKeyPairsWithOptions(shared_ptr<DeleteKeyPairsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->keyPairIds)) {
    query->insert(pair<string, vector<string>>("KeyPairIds", *request->keyPairIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteKeyPairs"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteKeyPairsResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteKeyPairsResponse(execute(params, req, runtime));
  }
}

DeleteKeyPairsResponse Alibabacloud_Eds-aic20230930::Client::deleteKeyPairs(shared_ptr<DeleteKeyPairsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteKeyPairsWithOptions(request, runtime);
}

DeletePolicyGroupResponse Alibabacloud_Eds-aic20230930::Client::deletePolicyGroupWithOptions(shared_ptr<DeletePolicyGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->policyGroupIds)) {
    query->insert(pair<string, vector<string>>("PolicyGroupIds", *request->policyGroupIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePolicyGroup"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeletePolicyGroupResponse(callApi(params, req, runtime));
  }
  else {
    return DeletePolicyGroupResponse(execute(params, req, runtime));
  }
}

DeletePolicyGroupResponse Alibabacloud_Eds-aic20230930::Client::deletePolicyGroup(shared_ptr<DeletePolicyGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePolicyGroupWithOptions(request, runtime);
}

DescribeAndroidInstanceGroupsResponse Alibabacloud_Eds-aic20230930::Client::describeAndroidInstanceGroupsWithOptions(shared_ptr<DescribeAndroidInstanceGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRegionId)) {
    query->insert(pair<string, string>("BizRegionId", *request->bizRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    query->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceGroupIds)) {
    query->insert(pair<string, vector<string>>("InstanceGroupIds", *request->instanceGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceGroupName)) {
    query->insert(pair<string, string>("InstanceGroupName", *request->instanceGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPairId)) {
    query->insert(pair<string, string>("KeyPairId", *request->keyPairId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyGroupId)) {
    query->insert(pair<string, string>("PolicyGroupId", *request->policyGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->saleMode)) {
    query->insert(pair<string, string>("SaleMode", *request->saleMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAndroidInstanceGroups"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeAndroidInstanceGroupsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeAndroidInstanceGroupsResponse(execute(params, req, runtime));
  }
}

DescribeAndroidInstanceGroupsResponse Alibabacloud_Eds-aic20230930::Client::describeAndroidInstanceGroups(shared_ptr<DescribeAndroidInstanceGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAndroidInstanceGroupsWithOptions(request, runtime);
}

DescribeAndroidInstancesResponse Alibabacloud_Eds-aic20230930::Client::describeAndroidInstancesWithOptions(shared_ptr<DescribeAndroidInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->androidInstanceIds)) {
    query->insert(pair<string, vector<string>>("AndroidInstanceIds", *request->androidInstanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidInstanceName)) {
    query->insert(pair<string, string>("AndroidInstanceName", *request->androidInstanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRegionId)) {
    query->insert(pair<string, string>("BizRegionId", *request->bizRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    query->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceGroupId)) {
    query->insert(pair<string, string>("InstanceGroupId", *request->instanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceGroupIds)) {
    query->insert(pair<string, vector<string>>("InstanceGroupIds", *request->instanceGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceGroupName)) {
    query->insert(pair<string, string>("InstanceGroupName", *request->instanceGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPairId)) {
    query->insert(pair<string, string>("KeyPairId", *request->keyPairId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeName)) {
    query->insert(pair<string, string>("NodeName", *request->nodeName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->officeSiteIds)) {
    query->insert(pair<string, vector<string>>("OfficeSiteIds", *request->officeSiteIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->saleMode)) {
    query->insert(pair<string, string>("SaleMode", *request->saleMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeAndroidInstancesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeAndroidInstancesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAndroidInstances"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeAndroidInstancesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeAndroidInstancesResponse(execute(params, req, runtime));
  }
}

DescribeAndroidInstancesResponse Alibabacloud_Eds-aic20230930::Client::describeAndroidInstances(shared_ptr<DescribeAndroidInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAndroidInstancesWithOptions(request, runtime);
}

DescribeAppsResponse Alibabacloud_Eds-aic20230930::Client::describeAppsWithOptions(shared_ptr<DescribeAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->appIdList)) {
    query->insert(pair<string, vector<string>>("AppIdList", *request->appIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    query->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRegionId)) {
    query->insert(pair<string, string>("BizRegionId", *request->bizRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->installationStatus)) {
    query->insert(pair<string, string>("InstallationStatus", *request->installationStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->MD5)) {
    query->insert(pair<string, string>("MD5", *request->MD5));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApps"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeAppsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeAppsResponse(execute(params, req, runtime));
  }
}

DescribeAppsResponse Alibabacloud_Eds-aic20230930::Client::describeApps(shared_ptr<DescribeAppsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAppsWithOptions(request, runtime);
}

DescribeBackupFilesResponse Alibabacloud_Eds-aic20230930::Client::describeBackupFilesWithOptions(shared_ptr<DescribeBackupFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->androidInstanceId)) {
    query->insert(pair<string, string>("AndroidInstanceId", *request->androidInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->androidInstanceName)) {
    query->insert(pair<string, string>("AndroidInstanceName", *request->androidInstanceName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->backupAll)) {
    query->insert(pair<string, bool>("BackupAll", *request->backupAll));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupFileId)) {
    query->insert(pair<string, string>("BackupFileId", *request->backupFileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupFileName)) {
    query->insert(pair<string, string>("BackupFileName", *request->backupFileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceGroupId)) {
    query->insert(pair<string, string>("InstanceGroupId", *request->instanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->statusList)) {
    query->insert(pair<string, vector<string>>("StatusList", *request->statusList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBackupFiles"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeBackupFilesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeBackupFilesResponse(execute(params, req, runtime));
  }
}

DescribeBackupFilesResponse Alibabacloud_Eds-aic20230930::Client::describeBackupFiles(shared_ptr<DescribeBackupFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupFilesWithOptions(request, runtime);
}

DescribeCloudPhoneNodesResponse Alibabacloud_Eds-aic20230930::Client::describeCloudPhoneNodesWithOptions(shared_ptr<DescribeCloudPhoneNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRegionId)) {
    query->insert(pair<string, string>("BizRegionId", *request->bizRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    query->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maxResults)) {
    query->insert(pair<string, string>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->nodeIds)) {
    query->insert(pair<string, vector<string>>("NodeIds", *request->nodeIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeName)) {
    query->insert(pair<string, string>("NodeName", *request->nodeName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverType)) {
    query->insert(pair<string, string>("ServerType", *request->serverType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCloudPhoneNodes"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeCloudPhoneNodesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeCloudPhoneNodesResponse(execute(params, req, runtime));
  }
}

DescribeCloudPhoneNodesResponse Alibabacloud_Eds-aic20230930::Client::describeCloudPhoneNodes(shared_ptr<DescribeCloudPhoneNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCloudPhoneNodesWithOptions(request, runtime);
}

DescribeImageListResponse Alibabacloud_Eds-aic20230930::Client::describeImageListWithOptions(shared_ptr<DescribeImageListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imagePackageType)) {
    query->insert(pair<string, string>("ImagePackageType", *request->imagePackageType));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    body->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageName)) {
    body->insert(pair<string, string>("ImageName", *request->imageName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageType)) {
    body->insert(pair<string, string>("ImageType", *request->imageType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeImageList"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeImageListResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeImageListResponse(execute(params, req, runtime));
  }
}

DescribeImageListResponse Alibabacloud_Eds-aic20230930::Client::describeImageList(shared_ptr<DescribeImageListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeImageListWithOptions(request, runtime);
}

DescribeInvocationsResponse Alibabacloud_Eds-aic20230930::Client::describeInvocationsWithOptions(shared_ptr<DescribeInvocationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceIds)) {
    query->insert(pair<string, vector<string>>("InstanceIds", *request->instanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->invocationId)) {
    query->insert(pair<string, string>("InvocationId", *request->invocationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInvocations"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeInvocationsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeInvocationsResponse(execute(params, req, runtime));
  }
}

DescribeInvocationsResponse Alibabacloud_Eds-aic20230930::Client::describeInvocations(shared_ptr<DescribeInvocationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInvocationsWithOptions(request, runtime);
}

DescribeKeyPairsResponse Alibabacloud_Eds-aic20230930::Client::describeKeyPairsWithOptions(shared_ptr<DescribeKeyPairsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->keyPairIds)) {
    query->insert(pair<string, vector<string>>("KeyPairIds", *request->keyPairIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPairName)) {
    query->insert(pair<string, string>("KeyPairName", *request->keyPairName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeKeyPairs"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeKeyPairsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeKeyPairsResponse(execute(params, req, runtime));
  }
}

DescribeKeyPairsResponse Alibabacloud_Eds-aic20230930::Client::describeKeyPairs(shared_ptr<DescribeKeyPairsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeKeyPairsWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Eds-aic20230930::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->saleMode)) {
    query->insert(pair<string, string>("SaleMode", *request->saleMode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeRegionsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeRegionsResponse(execute(params, req, runtime));
  }
}

DescribeRegionsResponse Alibabacloud_Eds-aic20230930::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeSpecResponse Alibabacloud_Eds-aic20230930::Client::describeSpecWithOptions(shared_ptr<DescribeSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRegionId)) {
    query->insert(pair<string, string>("BizRegionId", *request->bizRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->matrixSpec)) {
    query->insert(pair<string, string>("MatrixSpec", *request->matrixSpec));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->saleMode)) {
    query->insert(pair<string, string>("SaleMode", *request->saleMode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->specIds)) {
    query->insert(pair<string, vector<string>>("SpecIds", *request->specIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specStatus)) {
    query->insert(pair<string, string>("SpecStatus", *request->specStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specType)) {
    query->insert(pair<string, string>("SpecType", *request->specType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSpec"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeSpecResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeSpecResponse(execute(params, req, runtime));
  }
}

DescribeSpecResponse Alibabacloud_Eds-aic20230930::Client::describeSpec(shared_ptr<DescribeSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSpecWithOptions(request, runtime);
}

DescribeTasksResponse Alibabacloud_Eds-aic20230930::Client::describeTasksWithOptions(shared_ptr<DescribeTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->invokeId)) {
    query->insert(pair<string, string>("InvokeId", *request->invokeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->level)) {
    query->insert(pair<string, long>("Level", *request->level));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->param)) {
    query->insert(pair<string, string>("Param", *request->param));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentTaskId)) {
    query->insert(pair<string, string>("ParentTaskId", *request->parentTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceIds)) {
    query->insert(pair<string, vector<string>>("ResourceIds", *request->resourceIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->taskIds)) {
    query->insert(pair<string, vector<string>>("TaskIds", *request->taskIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskStatus)) {
    query->insert(pair<string, string>("TaskStatus", *request->taskStatus));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->taskStatuses)) {
    query->insert(pair<string, vector<string>>("TaskStatuses", *request->taskStatuses));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("TaskType", *request->taskType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->taskTypes)) {
    query->insert(pair<string, vector<string>>("TaskTypes", *request->taskTypes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTasks"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeTasksResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeTasksResponse(execute(params, req, runtime));
  }
}

DescribeTasksResponse Alibabacloud_Eds-aic20230930::Client::describeTasks(shared_ptr<DescribeTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTasksWithOptions(request, runtime);
}

DetachKeyPairResponse Alibabacloud_Eds-aic20230930::Client::detachKeyPairWithOptions(shared_ptr<DetachKeyPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceIds)) {
    query->insert(pair<string, vector<string>>("InstanceIds", *request->instanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPairId)) {
    query->insert(pair<string, string>("KeyPairId", *request->keyPairId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachKeyPair"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DetachKeyPairResponse(callApi(params, req, runtime));
  }
  else {
    return DetachKeyPairResponse(execute(params, req, runtime));
  }
}

DetachKeyPairResponse Alibabacloud_Eds-aic20230930::Client::detachKeyPair(shared_ptr<DetachKeyPairRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachKeyPairWithOptions(request, runtime);
}

DisconnectAndroidInstanceResponse Alibabacloud_Eds-aic20230930::Client::disconnectAndroidInstanceWithOptions(shared_ptr<DisconnectAndroidInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceIds)) {
    query->insert(pair<string, vector<string>>("InstanceIds", *request->instanceIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisconnectAndroidInstance"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DisconnectAndroidInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return DisconnectAndroidInstanceResponse(execute(params, req, runtime));
  }
}

DisconnectAndroidInstanceResponse Alibabacloud_Eds-aic20230930::Client::disconnectAndroidInstance(shared_ptr<DisconnectAndroidInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disconnectAndroidInstanceWithOptions(request, runtime);
}

DistributeImageResponse Alibabacloud_Eds-aic20230930::Client::distributeImageWithOptions(shared_ptr<DistributeImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->distributeRegionList)) {
    body->insert(pair<string, vector<string>>("DistributeRegionList", *request->distributeRegionList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    body->insert(pair<string, string>("ImageId", *request->imageId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DistributeImage"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DistributeImageResponse(callApi(params, req, runtime));
  }
  else {
    return DistributeImageResponse(execute(params, req, runtime));
  }
}

DistributeImageResponse Alibabacloud_Eds-aic20230930::Client::distributeImage(shared_ptr<DistributeImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return distributeImageWithOptions(request, runtime);
}

DowngradeAndroidInstanceGroupResponse Alibabacloud_Eds-aic20230930::Client::downgradeAndroidInstanceGroupWithOptions(shared_ptr<DowngradeAndroidInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->androidInstanceIds)) {
    query->insert(pair<string, vector<string>>("AndroidInstanceIds", *request->androidInstanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceGroupId)) {
    query->insert(pair<string, string>("InstanceGroupId", *request->instanceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DowngradeAndroidInstanceGroup"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DowngradeAndroidInstanceGroupResponse(callApi(params, req, runtime));
  }
  else {
    return DowngradeAndroidInstanceGroupResponse(execute(params, req, runtime));
  }
}

DowngradeAndroidInstanceGroupResponse Alibabacloud_Eds-aic20230930::Client::downgradeAndroidInstanceGroup(shared_ptr<DowngradeAndroidInstanceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return downgradeAndroidInstanceGroupWithOptions(request, runtime);
}

EndCoordinationResponse Alibabacloud_Eds-aic20230930::Client::endCoordinationWithOptions(shared_ptr<EndCoordinationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->coordinatorUserId)) {
    query->insert(pair<string, string>("CoordinatorUserId", *request->coordinatorUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerUserId)) {
    query->insert(pair<string, string>("OwnerUserId", *request->ownerUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EndCoordination"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return EndCoordinationResponse(callApi(params, req, runtime));
  }
  else {
    return EndCoordinationResponse(execute(params, req, runtime));
  }
}

EndCoordinationResponse Alibabacloud_Eds-aic20230930::Client::endCoordination(shared_ptr<EndCoordinationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return endCoordinationWithOptions(request, runtime);
}

ExpandDataVolumeResponse Alibabacloud_Eds-aic20230930::Client::expandDataVolumeWithOptions(shared_ptr<ExpandDataVolumeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRegionId)) {
    query->insert(pair<string, string>("BizRegionId", *request->bizRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->nodeIds)) {
    query->insert(pair<string, vector<string>>("NodeIds", *request->nodeIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->shareDataVolume)) {
    query->insert(pair<string, long>("ShareDataVolume", *request->shareDataVolume));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExpandDataVolume"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ExpandDataVolumeResponse(callApi(params, req, runtime));
  }
  else {
    return ExpandDataVolumeResponse(execute(params, req, runtime));
  }
}

ExpandDataVolumeResponse Alibabacloud_Eds-aic20230930::Client::expandDataVolume(shared_ptr<ExpandDataVolumeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return expandDataVolumeWithOptions(request, runtime);
}

FetchFileResponse Alibabacloud_Eds-aic20230930::Client::fetchFileWithOptions(shared_ptr<FetchFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->androidInstanceIdList)) {
    query->insert(pair<string, vector<string>>("AndroidInstanceIdList", *request->androidInstanceIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceFilePath)) {
    query->insert(pair<string, string>("SourceFilePath", *request->sourceFilePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadEndpoint)) {
    query->insert(pair<string, string>("UploadEndpoint", *request->uploadEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadType)) {
    query->insert(pair<string, string>("UploadType", *request->uploadType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadUrl)) {
    query->insert(pair<string, string>("UploadUrl", *request->uploadUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FetchFile"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return FetchFileResponse(callApi(params, req, runtime));
  }
  else {
    return FetchFileResponse(execute(params, req, runtime));
  }
}

FetchFileResponse Alibabacloud_Eds-aic20230930::Client::fetchFile(shared_ptr<FetchFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return fetchFileWithOptions(request, runtime);
}

GenerateCoordinationCodeResponse Alibabacloud_Eds-aic20230930::Client::generateCoordinationCodeWithOptions(shared_ptr<GenerateCoordinationCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerUserId)) {
    query->insert(pair<string, string>("OwnerUserId", *request->ownerUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateCoordinationCode"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GenerateCoordinationCodeResponse(callApi(params, req, runtime));
  }
  else {
    return GenerateCoordinationCodeResponse(execute(params, req, runtime));
  }
}

GenerateCoordinationCodeResponse Alibabacloud_Eds-aic20230930::Client::generateCoordinationCode(shared_ptr<GenerateCoordinationCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateCoordinationCodeWithOptions(request, runtime);
}

ImportKeyPairResponse Alibabacloud_Eds-aic20230930::Client::importKeyPairWithOptions(shared_ptr<ImportKeyPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPairName)) {
    query->insert(pair<string, string>("KeyPairName", *request->keyPairName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->publicKeyBody)) {
    query->insert(pair<string, string>("PublicKeyBody", *request->publicKeyBody));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImportKeyPair"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ImportKeyPairResponse(callApi(params, req, runtime));
  }
  else {
    return ImportKeyPairResponse(execute(params, req, runtime));
  }
}

ImportKeyPairResponse Alibabacloud_Eds-aic20230930::Client::importKeyPair(shared_ptr<ImportKeyPairRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importKeyPairWithOptions(request, runtime);
}

InstallAppResponse Alibabacloud_Eds-aic20230930::Client::installAppWithOptions(shared_ptr<InstallAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->appIdList)) {
    query->insert(pair<string, vector<string>>("AppIdList", *request->appIdList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceGroupIdList)) {
    query->insert(pair<string, vector<string>>("InstanceGroupIdList", *request->instanceGroupIdList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceIdList)) {
    query->insert(pair<string, vector<string>>("InstanceIdList", *request->instanceIdList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InstallApp"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return InstallAppResponse(callApi(params, req, runtime));
  }
  else {
    return InstallAppResponse(execute(params, req, runtime));
  }
}

InstallAppResponse Alibabacloud_Eds-aic20230930::Client::installApp(shared_ptr<InstallAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return installAppWithOptions(request, runtime);
}

ListPolicyGroupsResponse Alibabacloud_Eds-aic20230930::Client::listPolicyGroupsWithOptions(shared_ptr<ListPolicyGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->policyGroupIds)) {
    body->insert(pair<string, vector<string>>("PolicyGroupIds", *request->policyGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyGroupName)) {
    body->insert(pair<string, string>("PolicyGroupName", *request->policyGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyType)) {
    body->insert(pair<string, string>("PolicyType", *request->policyType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPolicyGroups"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListPolicyGroupsResponse(callApi(params, req, runtime));
  }
  else {
    return ListPolicyGroupsResponse(execute(params, req, runtime));
  }
}

ListPolicyGroupsResponse Alibabacloud_Eds-aic20230930::Client::listPolicyGroups(shared_ptr<ListPolicyGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPolicyGroupsWithOptions(request, runtime);
}

ModifyAndroidInstanceResponse Alibabacloud_Eds-aic20230930::Client::modifyAndroidInstanceWithOptions(shared_ptr<ModifyAndroidInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->androidInstanceId)) {
    query->insert(pair<string, string>("AndroidInstanceId", *request->androidInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newAndroidInstanceName)) {
    query->insert(pair<string, string>("NewAndroidInstanceName", *request->newAndroidInstanceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAndroidInstance"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyAndroidInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyAndroidInstanceResponse(execute(params, req, runtime));
  }
}

ModifyAndroidInstanceResponse Alibabacloud_Eds-aic20230930::Client::modifyAndroidInstance(shared_ptr<ModifyAndroidInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAndroidInstanceWithOptions(request, runtime);
}

ModifyAndroidInstanceGroupResponse Alibabacloud_Eds-aic20230930::Client::modifyAndroidInstanceGroupWithOptions(shared_ptr<ModifyAndroidInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceGroupId)) {
    query->insert(pair<string, string>("InstanceGroupId", *request->instanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newInstanceGroupName)) {
    query->insert(pair<string, string>("NewInstanceGroupName", *request->newInstanceGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyGroupId)) {
    query->insert(pair<string, string>("PolicyGroupId", *request->policyGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAndroidInstanceGroup"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyAndroidInstanceGroupResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyAndroidInstanceGroupResponse(execute(params, req, runtime));
  }
}

ModifyAndroidInstanceGroupResponse Alibabacloud_Eds-aic20230930::Client::modifyAndroidInstanceGroup(shared_ptr<ModifyAndroidInstanceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAndroidInstanceGroupWithOptions(request, runtime);
}

ModifyAppResponse Alibabacloud_Eds-aic20230930::Client::modifyAppWithOptions(shared_ptr<ModifyAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appId)) {
    query->insert(pair<string, long>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iconUrl)) {
    query->insert(pair<string, string>("IconUrl", *request->iconUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyApp"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyAppResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyAppResponse(execute(params, req, runtime));
  }
}

ModifyAppResponse Alibabacloud_Eds-aic20230930::Client::modifyApp(shared_ptr<ModifyAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAppWithOptions(request, runtime);
}

ModifyCloudPhoneNodeResponse Alibabacloud_Eds-aic20230930::Client::modifyCloudPhoneNodeWithOptions(shared_ptr<ModifyCloudPhoneNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyCloudPhoneNode"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyCloudPhoneNodeResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyCloudPhoneNodeResponse(execute(params, req, runtime));
  }
}

ModifyCloudPhoneNodeResponse Alibabacloud_Eds-aic20230930::Client::modifyCloudPhoneNode(shared_ptr<ModifyCloudPhoneNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyCloudPhoneNodeWithOptions(request, runtime);
}

ModifyInstanceChargeTypeResponse Alibabacloud_Eds-aic20230930::Client::modifyInstanceChargeTypeWithOptions(shared_ptr<ModifyInstanceChargeTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRenew)) {
    query->insert(pair<string, bool>("AutoRenew", *request->autoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    query->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceGroupIds)) {
    query->insert(pair<string, vector<string>>("InstanceGroupIds", *request->instanceGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyInstanceChargeType"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyInstanceChargeTypeResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyInstanceChargeTypeResponse(execute(params, req, runtime));
  }
}

ModifyInstanceChargeTypeResponse Alibabacloud_Eds-aic20230930::Client::modifyInstanceChargeType(shared_ptr<ModifyInstanceChargeTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceChargeTypeWithOptions(request, runtime);
}

ModifyKeyPairNameResponse Alibabacloud_Eds-aic20230930::Client::modifyKeyPairNameWithOptions(shared_ptr<ModifyKeyPairNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyPairId)) {
    query->insert(pair<string, string>("KeyPairId", *request->keyPairId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newKeyPairName)) {
    query->insert(pair<string, string>("NewKeyPairName", *request->newKeyPairName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyKeyPairName"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyKeyPairNameResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyKeyPairNameResponse(execute(params, req, runtime));
  }
}

ModifyKeyPairNameResponse Alibabacloud_Eds-aic20230930::Client::modifyKeyPairName(shared_ptr<ModifyKeyPairNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyKeyPairNameWithOptions(request, runtime);
}

ModifyPolicyGroupResponse Alibabacloud_Eds-aic20230930::Client::modifyPolicyGroupWithOptions(shared_ptr<ModifyPolicyGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ModifyPolicyGroupShrinkRequest> request = make_shared<ModifyPolicyGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ModifyPolicyGroupRequestNetRedirectPolicy>(tmpReq->netRedirectPolicy)) {
    request->netRedirectPolicyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->netRedirectPolicy, make_shared<string>("NetRedirectPolicy"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cameraRedirect)) {
    body->insert(pair<string, string>("CameraRedirect", *request->cameraRedirect));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clipboard)) {
    body->insert(pair<string, string>("Clipboard", *request->clipboard));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->html5FileTransfer)) {
    body->insert(pair<string, string>("Html5FileTransfer", *request->html5FileTransfer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->localDrive)) {
    body->insert(pair<string, string>("LocalDrive", *request->localDrive));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lockResolution)) {
    body->insert(pair<string, string>("LockResolution", *request->lockResolution));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->netRedirectPolicyShrink)) {
    body->insert(pair<string, string>("NetRedirectPolicy", *request->netRedirectPolicyShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyGroupId)) {
    body->insert(pair<string, string>("PolicyGroupId", *request->policyGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyGroupName)) {
    body->insert(pair<string, string>("PolicyGroupName", *request->policyGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resolutionHeight)) {
    body->insert(pair<string, long>("ResolutionHeight", *request->resolutionHeight));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resolutionWidth)) {
    body->insert(pair<string, long>("ResolutionWidth", *request->resolutionWidth));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyPolicyGroup"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyPolicyGroupResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyPolicyGroupResponse(execute(params, req, runtime));
  }
}

ModifyPolicyGroupResponse Alibabacloud_Eds-aic20230930::Client::modifyPolicyGroup(shared_ptr<ModifyPolicyGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyPolicyGroupWithOptions(request, runtime);
}

OperateAppResponse Alibabacloud_Eds-aic20230930::Client::operateAppWithOptions(shared_ptr<OperateAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appId)) {
    query->insert(pair<string, long>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceIdList)) {
    query->insert(pair<string, vector<string>>("InstanceIdList", *request->instanceIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operateType)) {
    query->insert(pair<string, string>("OperateType", *request->operateType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OperateApp"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return OperateAppResponse(callApi(params, req, runtime));
  }
  else {
    return OperateAppResponse(execute(params, req, runtime));
  }
}

OperateAppResponse Alibabacloud_Eds-aic20230930::Client::operateApp(shared_ptr<OperateAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return operateAppWithOptions(request, runtime);
}

RebootAndroidInstancesInGroupResponse Alibabacloud_Eds-aic20230930::Client::rebootAndroidInstancesInGroupWithOptions(shared_ptr<RebootAndroidInstancesInGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->androidInstanceIds)) {
    query->insert(pair<string, vector<string>>("AndroidInstanceIds", *request->androidInstanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->forceStop)) {
    query->insert(pair<string, bool>("ForceStop", *request->forceStop));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->saleMode)) {
    query->insert(pair<string, string>("SaleMode", *request->saleMode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RebootAndroidInstancesInGroup"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RebootAndroidInstancesInGroupResponse(callApi(params, req, runtime));
  }
  else {
    return RebootAndroidInstancesInGroupResponse(execute(params, req, runtime));
  }
}

RebootAndroidInstancesInGroupResponse Alibabacloud_Eds-aic20230930::Client::rebootAndroidInstancesInGroup(shared_ptr<RebootAndroidInstancesInGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rebootAndroidInstancesInGroupWithOptions(request, runtime);
}

RecoveryFileResponse Alibabacloud_Eds-aic20230930::Client::recoveryFileWithOptions(shared_ptr<RecoveryFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->androidInstanceIdList)) {
    query->insert(pair<string, vector<string>>("AndroidInstanceIdList", *request->androidInstanceIdList));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->backupAll)) {
    query->insert(pair<string, bool>("BackupAll", *request->backupAll));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupFileId)) {
    query->insert(pair<string, string>("BackupFileId", *request->backupFileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backupFilePath)) {
    query->insert(pair<string, string>("BackupFilePath", *request->backupFilePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadEndpoint)) {
    query->insert(pair<string, string>("UploadEndpoint", *request->uploadEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadType)) {
    query->insert(pair<string, string>("UploadType", *request->uploadType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecoveryFile"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RecoveryFileResponse(callApi(params, req, runtime));
  }
  else {
    return RecoveryFileResponse(execute(params, req, runtime));
  }
}

RecoveryFileResponse Alibabacloud_Eds-aic20230930::Client::recoveryFile(shared_ptr<RecoveryFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recoveryFileWithOptions(request, runtime);
}

RenewAndroidInstanceGroupsResponse Alibabacloud_Eds-aic20230930::Client::renewAndroidInstanceGroupsWithOptions(shared_ptr<RenewAndroidInstanceGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceGroupIds)) {
    query->insert(pair<string, vector<string>>("InstanceGroupIds", *request->instanceGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenewAndroidInstanceGroups"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RenewAndroidInstanceGroupsResponse(callApi(params, req, runtime));
  }
  else {
    return RenewAndroidInstanceGroupsResponse(execute(params, req, runtime));
  }
}

RenewAndroidInstanceGroupsResponse Alibabacloud_Eds-aic20230930::Client::renewAndroidInstanceGroups(shared_ptr<RenewAndroidInstanceGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renewAndroidInstanceGroupsWithOptions(request, runtime);
}

RenewCloudPhoneNodesResponse Alibabacloud_Eds-aic20230930::Client::renewCloudPhoneNodesWithOptions(shared_ptr<RenewCloudPhoneNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRenew)) {
    body->insert(pair<string, bool>("AutoRenew", *request->autoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->nodeIds)) {
    body->insert(pair<string, vector<string>>("NodeIds", *request->nodeIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    body->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    body->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenewCloudPhoneNodes"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RenewCloudPhoneNodesResponse(callApi(params, req, runtime));
  }
  else {
    return RenewCloudPhoneNodesResponse(execute(params, req, runtime));
  }
}

RenewCloudPhoneNodesResponse Alibabacloud_Eds-aic20230930::Client::renewCloudPhoneNodes(shared_ptr<RenewCloudPhoneNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renewCloudPhoneNodesWithOptions(request, runtime);
}

ResetAndroidInstancesInGroupResponse Alibabacloud_Eds-aic20230930::Client::resetAndroidInstancesInGroupWithOptions(shared_ptr<ResetAndroidInstancesInGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->androidInstanceIds)) {
    query->insert(pair<string, vector<string>>("AndroidInstanceIds", *request->androidInstanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->saleMode)) {
    query->insert(pair<string, string>("SaleMode", *request->saleMode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetAndroidInstancesInGroup"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ResetAndroidInstancesInGroupResponse(callApi(params, req, runtime));
  }
  else {
    return ResetAndroidInstancesInGroupResponse(execute(params, req, runtime));
  }
}

ResetAndroidInstancesInGroupResponse Alibabacloud_Eds-aic20230930::Client::resetAndroidInstancesInGroup(shared_ptr<ResetAndroidInstancesInGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetAndroidInstancesInGroupWithOptions(request, runtime);
}

RunCommandResponse Alibabacloud_Eds-aic20230930::Client::runCommandWithOptions(shared_ptr<RunCommandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->commandContent)) {
    query->insert(pair<string, string>("CommandContent", *request->commandContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contentEncoding)) {
    query->insert(pair<string, string>("ContentEncoding", *request->contentEncoding));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceIds)) {
    query->insert(pair<string, vector<string>>("InstanceIds", *request->instanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    query->insert(pair<string, long>("Timeout", *request->timeout));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunCommand"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RunCommandResponse(callApi(params, req, runtime));
  }
  else {
    return RunCommandResponse(execute(params, req, runtime));
  }
}

RunCommandResponse Alibabacloud_Eds-aic20230930::Client::runCommand(shared_ptr<RunCommandRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runCommandWithOptions(request, runtime);
}

SendFileResponse Alibabacloud_Eds-aic20230930::Client::sendFileWithOptions(shared_ptr<SendFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->androidInstanceIdList)) {
    query->insert(pair<string, vector<string>>("AndroidInstanceIdList", *request->androidInstanceIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceFilePath)) {
    query->insert(pair<string, string>("SourceFilePath", *request->sourceFilePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetFileName)) {
    query->insert(pair<string, string>("TargetFileName", *request->targetFileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadEndpoint)) {
    query->insert(pair<string, string>("UploadEndpoint", *request->uploadEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadType)) {
    query->insert(pair<string, string>("UploadType", *request->uploadType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadUrl)) {
    query->insert(pair<string, string>("UploadUrl", *request->uploadUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendFile"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SendFileResponse(callApi(params, req, runtime));
  }
  else {
    return SendFileResponse(execute(params, req, runtime));
  }
}

SendFileResponse Alibabacloud_Eds-aic20230930::Client::sendFile(shared_ptr<SendFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendFileWithOptions(request, runtime);
}

SetAdbSecureResponse Alibabacloud_Eds-aic20230930::Client::setAdbSecureWithOptions(shared_ptr<SetAdbSecureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceIds)) {
    query->insert(pair<string, vector<string>>("InstanceIds", *request->instanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetAdbSecure"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SetAdbSecureResponse(callApi(params, req, runtime));
  }
  else {
    return SetAdbSecureResponse(execute(params, req, runtime));
  }
}

SetAdbSecureResponse Alibabacloud_Eds-aic20230930::Client::setAdbSecure(shared_ptr<SetAdbSecureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setAdbSecureWithOptions(request, runtime);
}

StartAndroidInstanceResponse Alibabacloud_Eds-aic20230930::Client::startAndroidInstanceWithOptions(shared_ptr<StartAndroidInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->androidInstanceIds)) {
    query->insert(pair<string, vector<string>>("AndroidInstanceIds", *request->androidInstanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->saleMode)) {
    query->insert(pair<string, string>("SaleMode", *request->saleMode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartAndroidInstance"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StartAndroidInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return StartAndroidInstanceResponse(execute(params, req, runtime));
  }
}

StartAndroidInstanceResponse Alibabacloud_Eds-aic20230930::Client::startAndroidInstance(shared_ptr<StartAndroidInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startAndroidInstanceWithOptions(request, runtime);
}

StopAndroidInstanceResponse Alibabacloud_Eds-aic20230930::Client::stopAndroidInstanceWithOptions(shared_ptr<StopAndroidInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->androidInstanceIds)) {
    query->insert(pair<string, vector<string>>("AndroidInstanceIds", *request->androidInstanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->forceStop)) {
    query->insert(pair<string, bool>("ForceStop", *request->forceStop));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->saleMode)) {
    query->insert(pair<string, string>("SaleMode", *request->saleMode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopAndroidInstance"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StopAndroidInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return StopAndroidInstanceResponse(execute(params, req, runtime));
  }
}

StopAndroidInstanceResponse Alibabacloud_Eds-aic20230930::Client::stopAndroidInstance(shared_ptr<StopAndroidInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopAndroidInstanceWithOptions(request, runtime);
}

UninstallAppResponse Alibabacloud_Eds-aic20230930::Client::uninstallAppWithOptions(shared_ptr<UninstallAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->appIdList)) {
    query->insert(pair<string, vector<string>>("AppIdList", *request->appIdList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceGroupIdList)) {
    query->insert(pair<string, vector<string>>("InstanceGroupIdList", *request->instanceGroupIdList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceIdList)) {
    query->insert(pair<string, vector<string>>("InstanceIdList", *request->instanceIdList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UninstallApp"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UninstallAppResponse(callApi(params, req, runtime));
  }
  else {
    return UninstallAppResponse(execute(params, req, runtime));
  }
}

UninstallAppResponse Alibabacloud_Eds-aic20230930::Client::uninstallApp(shared_ptr<UninstallAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uninstallAppWithOptions(request, runtime);
}

UpdateCustomImageNameResponse Alibabacloud_Eds-aic20230930::Client::updateCustomImageNameWithOptions(shared_ptr<UpdateCustomImageNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    body->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageName)) {
    body->insert(pair<string, string>("ImageName", *request->imageName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCustomImageName"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateCustomImageNameResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateCustomImageNameResponse(execute(params, req, runtime));
  }
}

UpdateCustomImageNameResponse Alibabacloud_Eds-aic20230930::Client::updateCustomImageName(shared_ptr<UpdateCustomImageNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCustomImageNameWithOptions(request, runtime);
}

UpdateInstanceGroupImageResponse Alibabacloud_Eds-aic20230930::Client::updateInstanceGroupImageWithOptions(shared_ptr<UpdateInstanceGroupImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    body->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceGroupIds)) {
    body->insert(pair<string, vector<string>>("InstanceGroupIds", *request->instanceGroupIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateInstanceGroupImage"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateInstanceGroupImageResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateInstanceGroupImageResponse(execute(params, req, runtime));
  }
}

UpdateInstanceGroupImageResponse Alibabacloud_Eds-aic20230930::Client::updateInstanceGroupImage(shared_ptr<UpdateInstanceGroupImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateInstanceGroupImageWithOptions(request, runtime);
}

UpgradeAndroidInstanceGroupResponse Alibabacloud_Eds-aic20230930::Client::upgradeAndroidInstanceGroupWithOptions(shared_ptr<UpgradeAndroidInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->increaseNumberOfInstance)) {
    query->insert(pair<string, long>("IncreaseNumberOfInstance", *request->increaseNumberOfInstance));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceGroupId)) {
    query->insert(pair<string, string>("InstanceGroupId", *request->instanceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeAndroidInstanceGroup"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpgradeAndroidInstanceGroupResponse(callApi(params, req, runtime));
  }
  else {
    return UpgradeAndroidInstanceGroupResponse(execute(params, req, runtime));
  }
}

UpgradeAndroidInstanceGroupResponse Alibabacloud_Eds-aic20230930::Client::upgradeAndroidInstanceGroup(shared_ptr<UpgradeAndroidInstanceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeAndroidInstanceGroupWithOptions(request, runtime);
}

