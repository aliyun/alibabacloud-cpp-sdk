// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/energy_expert_external_20220923.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <alibabacloud/open_platform_20191219.hpp>
#include <alibabacloud/oss.hpp>
#include <alibabacloud/ossutil.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/file_form.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_EnergyExpertExternal20220923;

Alibabacloud_EnergyExpertExternal20220923::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("energyexpertexternal"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_EnergyExpertExternal20220923::Client::getEndpoint(shared_ptr<string> productId,
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

AnalyzeVlRealtimeResponse Alibabacloud_EnergyExpertExternal20220923::Client::analyzeVlRealtimeWithOptions(shared_ptr<AnalyzeVlRealtimeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileUrl)) {
    query->insert(pair<string, string>("fileUrl", *request->fileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("templateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AnalyzeVlRealtime"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/aidoc/document/analyzeVlRealtime"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AnalyzeVlRealtimeResponse(callApi(params, req, runtime));
}

AnalyzeVlRealtimeResponse Alibabacloud_EnergyExpertExternal20220923::Client::analyzeVlRealtime(shared_ptr<AnalyzeVlRealtimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return analyzeVlRealtimeWithOptions(request, headers, runtime);
}

AnalyzeVlRealtimeResponse Alibabacloud_EnergyExpertExternal20220923::Client::analyzeVlRealtimeAdvance(shared_ptr<AnalyzeVlRealtimeAdvanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::empty(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("energyExpertExternal"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<AnalyzeVlRealtimeRequest> analyzeVlRealtimeReq = make_shared<AnalyzeVlRealtimeRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, analyzeVlRealtimeReq);
  if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(request->fileUrlObject)) {
    authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
    ossConfig->accessKeyId = authResponse->body->accessKeyId;
    ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
    ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
    fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
      {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
      {"content", !request->fileUrlObject ? boost::any() : boost::any(*request->fileUrlObject)},
      {"contentType", boost::any(string(""))}
    }));
    ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
      {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
      {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
      {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
      {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
      {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
      {"successActionStatus", boost::any(string("201"))}
    }));
    uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
      {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
      {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
    }));
    ossClient->postObject(uploadRequest, ossRuntime);
    analyzeVlRealtimeReq->fileUrl = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
  }
  shared_ptr<AnalyzeVlRealtimeResponse> analyzeVlRealtimeResp = make_shared<AnalyzeVlRealtimeResponse>(analyzeVlRealtimeWithOptions(analyzeVlRealtimeReq, headers, runtime));
  return *analyzeVlRealtimeResp;
}

BatchSaveInstructionStatusResponse Alibabacloud_EnergyExpertExternal20220923::Client::batchSaveInstructionStatusWithOptions(shared_ptr<BatchSaveInstructionStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->factoryId)) {
    body->insert(pair<string, string>("factoryId", *request->factoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pKey)) {
    body->insert(pair<string, string>("pKey", *request->pKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statusList)) {
    body->insert(pair<string, string>("statusList", *request->statusList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchSaveInstructionStatus"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/hvac/batchSaveInstructionStatus"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchSaveInstructionStatusResponse(callApi(params, req, runtime));
}

BatchSaveInstructionStatusResponse Alibabacloud_EnergyExpertExternal20220923::Client::batchSaveInstructionStatus(shared_ptr<BatchSaveInstructionStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return batchSaveInstructionStatusWithOptions(request, headers, runtime);
}

BatchUpdateSystemRunningPlanResponse Alibabacloud_EnergyExpertExternal20220923::Client::batchUpdateSystemRunningPlanWithOptions(shared_ptr<BatchUpdateSystemRunningPlanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->controlType)) {
    body->insert(pair<string, long>("controlType", *request->controlType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dateType)) {
    body->insert(pair<string, long>("dateType", *request->dateType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->earliestStartupTime)) {
    body->insert(pair<string, string>("earliestStartupTime", *request->earliestStartupTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->factoryId)) {
    body->insert(pair<string, string>("factoryId", *request->factoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->latestShutdownTime)) {
    body->insert(pair<string, string>("latestShutdownTime", *request->latestShutdownTime));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->maxCarbonDioxide)) {
    body->insert(pair<string, double>("maxCarbonDioxide", *request->maxCarbonDioxide));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->maxTem)) {
    body->insert(pair<string, double>("maxTem", *request->maxTem));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->minTem)) {
    body->insert(pair<string, double>("minTem", *request->minTem));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->seasonMode)) {
    body->insert(pair<string, long>("seasonMode", *request->seasonMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("startTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemId)) {
    body->insert(pair<string, string>("systemId", *request->systemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workingEndTime)) {
    body->insert(pair<string, string>("workingEndTime", *request->workingEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workingStartTime)) {
    body->insert(pair<string, string>("workingStartTime", *request->workingStartTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchUpdateSystemRunningPlan"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/hvac/batchUpdateSystemRunningPlan"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchUpdateSystemRunningPlanResponse(callApi(params, req, runtime));
}

BatchUpdateSystemRunningPlanResponse Alibabacloud_EnergyExpertExternal20220923::Client::batchUpdateSystemRunningPlan(shared_ptr<BatchUpdateSystemRunningPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return batchUpdateSystemRunningPlanWithOptions(request, headers, runtime);
}

ChatResponse Alibabacloud_EnergyExpertExternal20220923::Client::chatWithOptions(shared_ptr<ChatRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->question)) {
    body->insert(pair<string, string>("question", *request->question));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("sessionId", *request->sessionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Chat"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/aidoc/document/chat"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChatResponse(callApi(params, req, runtime));
}

ChatResponse Alibabacloud_EnergyExpertExternal20220923::Client::chat(shared_ptr<ChatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return chatWithOptions(request, headers, runtime);
}

CreateChatSessionResponse Alibabacloud_EnergyExpertExternal20220923::Client::createChatSessionWithOptions(shared_ptr<CreateChatSessionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->folderId)) {
    body->insert(pair<string, string>("folderId", *request->folderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("userId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateChatSession"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/aidoc/document/chat/session/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateChatSessionResponse(callApi(params, req, runtime));
}

CreateChatSessionResponse Alibabacloud_EnergyExpertExternal20220923::Client::createChatSession(shared_ptr<CreateChatSessionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createChatSessionWithOptions(request, headers, runtime);
}

EditProhibitedDevicesResponse Alibabacloud_EnergyExpertExternal20220923::Client::editProhibitedDevicesWithOptions(shared_ptr<EditProhibitedDevicesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->factoryId)) {
    body->insert(pair<string, string>("factoryId", *request->factoryId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<EditProhibitedDevicesRequestHvacDeviceConfigVOList>>(request->hvacDeviceConfigVOList)) {
    body->insert(pair<string, vector<EditProhibitedDevicesRequestHvacDeviceConfigVOList>>("hvacDeviceConfigVOList", *request->hvacDeviceConfigVOList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemId)) {
    body->insert(pair<string, string>("systemId", *request->systemId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EditProhibitedDevices"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/hvac/editProhibitedDevices"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EditProhibitedDevicesResponse(callApi(params, req, runtime));
}

EditProhibitedDevicesResponse Alibabacloud_EnergyExpertExternal20220923::Client::editProhibitedDevices(shared_ptr<EditProhibitedDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return editProhibitedDevicesWithOptions(request, headers, runtime);
}

EditUnfavorableAreaDevicesResponse Alibabacloud_EnergyExpertExternal20220923::Client::editUnfavorableAreaDevicesWithOptions(shared_ptr<EditUnfavorableAreaDevicesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->factoryId)) {
    body->insert(pair<string, string>("factoryId", *request->factoryId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<EditUnfavorableAreaDevicesRequestHvacDeviceConfigVOList>>(request->hvacDeviceConfigVOList)) {
    body->insert(pair<string, vector<EditUnfavorableAreaDevicesRequestHvacDeviceConfigVOList>>("hvacDeviceConfigVOList", *request->hvacDeviceConfigVOList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemId)) {
    body->insert(pair<string, string>("systemId", *request->systemId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EditUnfavorableAreaDevices"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/hvac/editUnfavorableAreaDevices"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EditUnfavorableAreaDevicesResponse(callApi(params, req, runtime));
}

EditUnfavorableAreaDevicesResponse Alibabacloud_EnergyExpertExternal20220923::Client::editUnfavorableAreaDevices(shared_ptr<EditUnfavorableAreaDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return editUnfavorableAreaDevicesWithOptions(request, headers, runtime);
}

GenerateResultResponse Alibabacloud_EnergyExpertExternal20220923::Client::generateResultWithOptions(shared_ptr<GenerateResultRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productId)) {
    body->insert(pair<string, long>("productId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productType)) {
    body->insert(pair<string, long>("productType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateResult"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/footprint/result/generate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateResultResponse(callApi(params, req, runtime));
}

GenerateResultResponse Alibabacloud_EnergyExpertExternal20220923::Client::generateResult(shared_ptr<GenerateResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return generateResultWithOptions(request, headers, runtime);
}

GetAreaElecConstituteResponse Alibabacloud_EnergyExpertExternal20220923::Client::getAreaElecConstituteWithOptions(shared_ptr<GetAreaElecConstituteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->year)) {
    body->insert(pair<string, long>("year", *request->year));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAreaElecConstitute"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/emission/analysis/elec/area"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAreaElecConstituteResponse(callApi(params, req, runtime));
}

GetAreaElecConstituteResponse Alibabacloud_EnergyExpertExternal20220923::Client::getAreaElecConstitute(shared_ptr<GetAreaElecConstituteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAreaElecConstituteWithOptions(request, headers, runtime);
}

GetCarbonEmissionTrendResponse Alibabacloud_EnergyExpertExternal20220923::Client::getCarbonEmissionTrendWithOptions(shared_ptr<GetCarbonEmissionTrendRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleCode)) {
    body->insert(pair<string, string>("moduleCode", *request->moduleCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->moduleType)) {
    body->insert(pair<string, long>("moduleType", *request->moduleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->trendType)) {
    body->insert(pair<string, long>("trendType", *request->trendType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->yearList)) {
    body->insert(pair<string, vector<long>>("yearList", *request->yearList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCarbonEmissionTrend"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/emission/analysis/trend"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCarbonEmissionTrendResponse(callApi(params, req, runtime));
}

GetCarbonEmissionTrendResponse Alibabacloud_EnergyExpertExternal20220923::Client::getCarbonEmissionTrend(shared_ptr<GetCarbonEmissionTrendRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getCarbonEmissionTrendWithOptions(request, headers, runtime);
}

GetChatFolderListResponse Alibabacloud_EnergyExpertExternal20220923::Client::getChatFolderListWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetChatFolderList"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/aidoc/document/chat/folder/list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetChatFolderListResponse(callApi(params, req, runtime));
}

GetChatFolderListResponse Alibabacloud_EnergyExpertExternal20220923::Client::getChatFolderList() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getChatFolderListWithOptions(headers, runtime);
}

GetChatListResponse Alibabacloud_EnergyExpertExternal20220923::Client::getChatListWithOptions(shared_ptr<GetChatListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("sessionId", *request->sessionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetChatList"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/aidoc/document/chat/list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetChatListResponse(callApi(params, req, runtime));
}

GetChatListResponse Alibabacloud_EnergyExpertExternal20220923::Client::getChatList(shared_ptr<GetChatListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getChatListWithOptions(request, headers, runtime);
}

GetChatSessionListResponse Alibabacloud_EnergyExpertExternal20220923::Client::getChatSessionListWithOptions(shared_ptr<GetChatSessionListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("userId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetChatSessionList"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/aidoc/document/chat/session/list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetChatSessionListResponse(callApi(params, req, runtime));
}

GetChatSessionListResponse Alibabacloud_EnergyExpertExternal20220923::Client::getChatSessionList(shared_ptr<GetChatSessionListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getChatSessionListWithOptions(request, headers, runtime);
}

GetDataItemListResponse Alibabacloud_EnergyExpertExternal20220923::Client::getDataItemListWithOptions(shared_ptr<GetDataItemListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataItemList"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/emission/data/item/list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataItemListResponse(callApi(params, req, runtime));
}

GetDataItemListResponse Alibabacloud_EnergyExpertExternal20220923::Client::getDataItemList(shared_ptr<GetDataItemListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDataItemListWithOptions(request, headers, runtime);
}

GetDataQualityAnalysisResponse Alibabacloud_EnergyExpertExternal20220923::Client::getDataQualityAnalysisWithOptions(shared_ptr<GetDataQualityAnalysisRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataQualityEvaluationType)) {
    body->insert(pair<string, long>("dataQualityEvaluationType", *request->dataQualityEvaluationType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productId)) {
    body->insert(pair<string, long>("productId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productType)) {
    body->insert(pair<string, long>("productType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataQualityAnalysis"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/footprint/data/quality/analysis"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataQualityAnalysisResponse(callApi(params, req, runtime));
}

GetDataQualityAnalysisResponse Alibabacloud_EnergyExpertExternal20220923::Client::getDataQualityAnalysis(shared_ptr<GetDataQualityAnalysisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDataQualityAnalysisWithOptions(request, headers, runtime);
}

GetDeviceInfoResponse Alibabacloud_EnergyExpertExternal20220923::Client::getDeviceInfoWithOptions(shared_ptr<GetDeviceInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceId)) {
    query->insert(pair<string, string>("deviceId", *request->deviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ds)) {
    query->insert(pair<string, string>("ds", *request->ds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->factoryId)) {
    query->insert(pair<string, string>("factoryId", *request->factoryId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeviceInfo"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/external/getDeviceInfo"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeviceInfoResponse(callApi(params, req, runtime));
}

GetDeviceInfoResponse Alibabacloud_EnergyExpertExternal20220923::Client::getDeviceInfo(shared_ptr<GetDeviceInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDeviceInfoWithOptions(request, headers, runtime);
}

GetDeviceListResponse Alibabacloud_EnergyExpertExternal20220923::Client::getDeviceListWithOptions(shared_ptr<GetDeviceListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->factoryId)) {
    query->insert(pair<string, string>("factoryId", *request->factoryId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeviceList"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/external/getDeviceList"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeviceListResponse(callApi(params, req, runtime));
}

GetDeviceListResponse Alibabacloud_EnergyExpertExternal20220923::Client::getDeviceList(shared_ptr<GetDeviceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDeviceListWithOptions(request, headers, runtime);
}

GetDocExtractionResultResponse Alibabacloud_EnergyExpertExternal20220923::Client::getDocExtractionResultWithOptions(shared_ptr<GetDocExtractionResultRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("taskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDocExtractionResult"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/aidoc/document/getDocExtractionResult"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDocExtractionResultResponse(callApi(params, req, runtime));
}

GetDocExtractionResultResponse Alibabacloud_EnergyExpertExternal20220923::Client::getDocExtractionResult(shared_ptr<GetDocExtractionResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDocExtractionResultWithOptions(request, headers, runtime);
}

GetDocParsingResultResponse Alibabacloud_EnergyExpertExternal20220923::Client::getDocParsingResultWithOptions(shared_ptr<GetDocParsingResultRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->returnFormat)) {
    body->insert(pair<string, string>("returnFormat", *request->returnFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("taskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDocParsingResult"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/aidoc/document/getDocParsingResult"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDocParsingResultResponse(callApi(params, req, runtime));
}

GetDocParsingResultResponse Alibabacloud_EnergyExpertExternal20220923::Client::getDocParsingResult(shared_ptr<GetDocParsingResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDocParsingResultWithOptions(request, headers, runtime);
}

GetDocumentAnalyzeResultResponse Alibabacloud_EnergyExpertExternal20220923::Client::getDocumentAnalyzeResultWithOptions(shared_ptr<GetDocumentAnalyzeResultRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("jobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDocumentAnalyzeResult"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/aidoc/document/getDocumentAnalyzeResult"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDocumentAnalyzeResultResponse(callApi(params, req, runtime));
}

GetDocumentAnalyzeResultResponse Alibabacloud_EnergyExpertExternal20220923::Client::getDocumentAnalyzeResult(shared_ptr<GetDocumentAnalyzeResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDocumentAnalyzeResultWithOptions(request, headers, runtime);
}

GetElecConstituteResponse Alibabacloud_EnergyExpertExternal20220923::Client::getElecConstituteWithOptions(shared_ptr<GetElecConstituteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->year)) {
    body->insert(pair<string, long>("year", *request->year));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetElecConstitute"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/emission/analysis/elec/constitute"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetElecConstituteResponse(callApi(params, req, runtime));
}

GetElecConstituteResponse Alibabacloud_EnergyExpertExternal20220923::Client::getElecConstitute(shared_ptr<GetElecConstituteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getElecConstituteWithOptions(request, headers, runtime);
}

GetElecTrendResponse Alibabacloud_EnergyExpertExternal20220923::Client::getElecTrendWithOptions(shared_ptr<GetElecTrendRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->yearList)) {
    body->insert(pair<string, vector<long>>("yearList", *request->yearList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetElecTrend"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/emission/analysis/elec/trend"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetElecTrendResponse(callApi(params, req, runtime));
}

GetElecTrendResponse Alibabacloud_EnergyExpertExternal20220923::Client::getElecTrend(shared_ptr<GetElecTrendRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getElecTrendWithOptions(request, headers, runtime);
}

GetEmissionSourceConstituteResponse Alibabacloud_EnergyExpertExternal20220923::Client::getEmissionSourceConstituteWithOptions(shared_ptr<GetEmissionSourceConstituteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleCode)) {
    body->insert(pair<string, string>("moduleCode", *request->moduleCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->moduleType)) {
    body->insert(pair<string, long>("moduleType", *request->moduleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->year)) {
    body->insert(pair<string, long>("year", *request->year));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEmissionSourceConstitute"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/emission/analysis/constitute"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEmissionSourceConstituteResponse(callApi(params, req, runtime));
}

GetEmissionSourceConstituteResponse Alibabacloud_EnergyExpertExternal20220923::Client::getEmissionSourceConstitute(shared_ptr<GetEmissionSourceConstituteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getEmissionSourceConstituteWithOptions(request, headers, runtime);
}

GetEmissionSummaryResponse Alibabacloud_EnergyExpertExternal20220923::Client::getEmissionSummaryWithOptions(shared_ptr<GetEmissionSummaryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleCode)) {
    body->insert(pair<string, string>("moduleCode", *request->moduleCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->moduleType)) {
    body->insert(pair<string, long>("moduleType", *request->moduleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->year)) {
    body->insert(pair<string, long>("year", *request->year));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEmissionSummary"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/emission/analysis/summary"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEmissionSummaryResponse(callApi(params, req, runtime));
}

GetEmissionSummaryResponse Alibabacloud_EnergyExpertExternal20220923::Client::getEmissionSummary(shared_ptr<GetEmissionSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getEmissionSummaryWithOptions(request, headers, runtime);
}

GetEpdInventoryConstituteResponse Alibabacloud_EnergyExpertExternal20220923::Client::getEpdInventoryConstituteWithOptions(shared_ptr<GetEpdInventoryConstituteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productId)) {
    body->insert(pair<string, long>("productId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productType)) {
    body->insert(pair<string, long>("productType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEpdInventoryConstitute"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/footprint/result/epd/inventory/constitute"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEpdInventoryConstituteResponse(callApi(params, req, runtime));
}

GetEpdInventoryConstituteResponse Alibabacloud_EnergyExpertExternal20220923::Client::getEpdInventoryConstitute(shared_ptr<GetEpdInventoryConstituteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getEpdInventoryConstituteWithOptions(request, headers, runtime);
}

GetEpdSummaryResponse Alibabacloud_EnergyExpertExternal20220923::Client::getEpdSummaryWithOptions(shared_ptr<GetEpdSummaryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productId)) {
    body->insert(pair<string, long>("productId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productType)) {
    body->insert(pair<string, long>("productType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEpdSummary"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/footprint/result/epd/summary"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEpdSummaryResponse(callApi(params, req, runtime));
}

GetEpdSummaryResponse Alibabacloud_EnergyExpertExternal20220923::Client::getEpdSummary(shared_ptr<GetEpdSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getEpdSummaryWithOptions(request, headers, runtime);
}

GetFootprintListResponse Alibabacloud_EnergyExpertExternal20220923::Client::getFootprintListWithOptions(shared_ptr<GetFootprintListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productType)) {
    body->insert(pair<string, long>("productType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFootprintList"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/footprint/product/list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFootprintListResponse(callApi(params, req, runtime));
}

GetFootprintListResponse Alibabacloud_EnergyExpertExternal20220923::Client::getFootprintList(shared_ptr<GetFootprintListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFootprintListWithOptions(request, headers, runtime);
}

GetGasConstituteResponse Alibabacloud_EnergyExpertExternal20220923::Client::getGasConstituteWithOptions(shared_ptr<GetGasConstituteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleCode)) {
    body->insert(pair<string, string>("moduleCode", *request->moduleCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->moduleType)) {
    body->insert(pair<string, long>("moduleType", *request->moduleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->year)) {
    body->insert(pair<string, long>("year", *request->year));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGasConstitute"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/emission/analysis/gas/constitute"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGasConstituteResponse(callApi(params, req, runtime));
}

GetGasConstituteResponse Alibabacloud_EnergyExpertExternal20220923::Client::getGasConstitute(shared_ptr<GetGasConstituteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getGasConstituteWithOptions(request, headers, runtime);
}

GetGwpBenchmarkListResponse Alibabacloud_EnergyExpertExternal20220923::Client::getGwpBenchmarkListWithOptions(shared_ptr<GetGwpBenchmarkListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productId)) {
    body->insert(pair<string, long>("productId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productType)) {
    body->insert(pair<string, long>("productType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGwpBenchmarkList"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/footprint/result/gwp/benchmark/list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGwpBenchmarkListResponse(callApi(params, req, runtime));
}

GetGwpBenchmarkListResponse Alibabacloud_EnergyExpertExternal20220923::Client::getGwpBenchmarkList(shared_ptr<GetGwpBenchmarkListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getGwpBenchmarkListWithOptions(request, headers, runtime);
}

GetGwpBenchmarkSummaryResponse Alibabacloud_EnergyExpertExternal20220923::Client::getGwpBenchmarkSummaryWithOptions(shared_ptr<GetGwpBenchmarkSummaryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productId)) {
    body->insert(pair<string, long>("productId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productType)) {
    body->insert(pair<string, long>("productType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGwpBenchmarkSummary"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/footprint/result/gwp/benchmark/summary"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGwpBenchmarkSummaryResponse(callApi(params, req, runtime));
}

GetGwpBenchmarkSummaryResponse Alibabacloud_EnergyExpertExternal20220923::Client::getGwpBenchmarkSummary(shared_ptr<GetGwpBenchmarkSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getGwpBenchmarkSummaryWithOptions(request, headers, runtime);
}

GetGwpInventoryConstituteResponse Alibabacloud_EnergyExpertExternal20220923::Client::getGwpInventoryConstituteWithOptions(shared_ptr<GetGwpInventoryConstituteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productId)) {
    body->insert(pair<string, long>("productId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productType)) {
    body->insert(pair<string, long>("productType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGwpInventoryConstitute"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/footprint/result/gwp/inventory/constitute"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGwpInventoryConstituteResponse(callApi(params, req, runtime));
}

GetGwpInventoryConstituteResponse Alibabacloud_EnergyExpertExternal20220923::Client::getGwpInventoryConstitute(shared_ptr<GetGwpInventoryConstituteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getGwpInventoryConstituteWithOptions(request, headers, runtime);
}

GetGwpInventorySummaryResponse Alibabacloud_EnergyExpertExternal20220923::Client::getGwpInventorySummaryWithOptions(shared_ptr<GetGwpInventorySummaryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productId)) {
    body->insert(pair<string, long>("productId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productType)) {
    body->insert(pair<string, long>("productType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGwpInventorySummary"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/footprint/result/gwp/inventory/summary"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGwpInventorySummaryResponse(callApi(params, req, runtime));
}

GetGwpInventorySummaryResponse Alibabacloud_EnergyExpertExternal20220923::Client::getGwpInventorySummary(shared_ptr<GetGwpInventorySummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getGwpInventorySummaryWithOptions(request, headers, runtime);
}

GetInventoryListResponse Alibabacloud_EnergyExpertExternal20220923::Client::getInventoryListWithOptions(shared_ptr<GetInventoryListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->emissionType)) {
    body->insert(pair<string, string>("emissionType", *request->emissionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->group)) {
    body->insert(pair<string, string>("group", *request->group));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->methodType)) {
    body->insert(pair<string, string>("methodType", *request->methodType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productId)) {
    body->insert(pair<string, long>("productId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productType)) {
    body->insert(pair<string, long>("productType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInventoryList"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/footprint/result/inventory/list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInventoryListResponse(callApi(params, req, runtime));
}

GetInventoryListResponse Alibabacloud_EnergyExpertExternal20220923::Client::getInventoryList(shared_ptr<GetInventoryListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getInventoryListWithOptions(request, headers, runtime);
}

GetOrgAndFactoryResponse Alibabacloud_EnergyExpertExternal20220923::Client::getOrgAndFactoryWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOrgAndFactory"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/external/getOrgAndFactory"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOrgAndFactoryResponse(callApi(params, req, runtime));
}

GetOrgAndFactoryResponse Alibabacloud_EnergyExpertExternal20220923::Client::getOrgAndFactory() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getOrgAndFactoryWithOptions(headers, runtime);
}

GetOrgConstituteResponse Alibabacloud_EnergyExpertExternal20220923::Client::getOrgConstituteWithOptions(shared_ptr<GetOrgConstituteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleCode)) {
    body->insert(pair<string, string>("moduleCode", *request->moduleCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->moduleType)) {
    body->insert(pair<string, long>("moduleType", *request->moduleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->year)) {
    body->insert(pair<string, long>("year", *request->year));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOrgConstitute"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/emission/analysis/org"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOrgConstituteResponse(callApi(params, req, runtime));
}

GetOrgConstituteResponse Alibabacloud_EnergyExpertExternal20220923::Client::getOrgConstitute(shared_ptr<GetOrgConstituteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getOrgConstituteWithOptions(request, headers, runtime);
}

GetPcrInfoResponse Alibabacloud_EnergyExpertExternal20220923::Client::getPcrInfoWithOptions(shared_ptr<GetPcrInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productId)) {
    body->insert(pair<string, string>("productId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productType)) {
    body->insert(pair<string, long>("productType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPcrInfo"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/footprint/result/pcr/detail"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPcrInfoResponse(callApi(params, req, runtime));
}

GetPcrInfoResponse Alibabacloud_EnergyExpertExternal20220923::Client::getPcrInfo(shared_ptr<GetPcrInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getPcrInfoWithOptions(request, headers, runtime);
}

GetReductionProposalResponse Alibabacloud_EnergyExpertExternal20220923::Client::getReductionProposalWithOptions(shared_ptr<GetReductionProposalRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataQualityEvaluationType)) {
    body->insert(pair<string, long>("dataQualityEvaluationType", *request->dataQualityEvaluationType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productId)) {
    body->insert(pair<string, long>("productId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productType)) {
    body->insert(pair<string, long>("productType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetReductionProposal"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/footprint/result/reduction/proposal"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetReductionProposalResponse(callApi(params, req, runtime));
}

GetReductionProposalResponse Alibabacloud_EnergyExpertExternal20220923::Client::getReductionProposal(shared_ptr<GetReductionProposalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getReductionProposalWithOptions(request, headers, runtime);
}

GetVLExtractionResultResponse Alibabacloud_EnergyExpertExternal20220923::Client::getVLExtractionResultWithOptions(shared_ptr<GetVLExtractionResultRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("taskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVLExtractionResult"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/aidoc/document/getVLExtractionResult"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVLExtractionResultResponse(callApi(params, req, runtime));
}

GetVLExtractionResultResponse Alibabacloud_EnergyExpertExternal20220923::Client::getVLExtractionResult(shared_ptr<GetVLExtractionResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getVLExtractionResultWithOptions(request, headers, runtime);
}

IsCompletedResponse Alibabacloud_EnergyExpertExternal20220923::Client::isCompletedWithOptions(shared_ptr<IsCompletedRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productId)) {
    body->insert(pair<string, long>("productId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productType)) {
    body->insert(pair<string, long>("productType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IsCompleted"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/footprint/result/completed"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IsCompletedResponse(callApi(params, req, runtime));
}

IsCompletedResponse Alibabacloud_EnergyExpertExternal20220923::Client::isCompleted(shared_ptr<IsCompletedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return isCompletedWithOptions(request, headers, runtime);
}

PushDeviceDataResponse Alibabacloud_EnergyExpertExternal20220923::Client::pushDeviceDataWithOptions(shared_ptr<PushDeviceDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceType)) {
    body->insert(pair<string, string>("deviceType", *request->deviceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<PushDeviceDataRequestDevices>>(request->devices)) {
    body->insert(pair<string, vector<PushDeviceDataRequestDevices>>("devices", *request->devices));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushDeviceData"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/data/increment/push"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PushDeviceDataResponse(callApi(params, req, runtime));
}

PushDeviceDataResponse Alibabacloud_EnergyExpertExternal20220923::Client::pushDeviceData(shared_ptr<PushDeviceDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return pushDeviceDataWithOptions(request, headers, runtime);
}

PushItemDataResponse Alibabacloud_EnergyExpertExternal20220923::Client::pushItemDataWithOptions(shared_ptr<PushItemDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<PushItemDataRequestItems>(request->items)) {
    body->insert(pair<string, PushItemDataRequestItems>("items", *request->items));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->year)) {
    body->insert(pair<string, string>("year", *request->year));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushItemData"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/emission/data/item/push"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PushItemDataResponse(callApi(params, req, runtime));
}

PushItemDataResponse Alibabacloud_EnergyExpertExternal20220923::Client::pushItemData(shared_ptr<PushItemDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return pushItemDataWithOptions(request, headers, runtime);
}

RecalculateCarbonEmissionResponse Alibabacloud_EnergyExpertExternal20220923::Client::recalculateCarbonEmissionWithOptions(shared_ptr<RecalculateCarbonEmissionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->year)) {
    body->insert(pair<string, string>("year", *request->year));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecalculateCarbonEmission"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/emission/data/item/recalculate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecalculateCarbonEmissionResponse(callApi(params, req, runtime));
}

RecalculateCarbonEmissionResponse Alibabacloud_EnergyExpertExternal20220923::Client::recalculateCarbonEmission(shared_ptr<RecalculateCarbonEmissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return recalculateCarbonEmissionWithOptions(request, headers, runtime);
}

SendDocumentAskQuestionResponse Alibabacloud_EnergyExpertExternal20220923::Client::sendDocumentAskQuestionWithOptions(shared_ptr<SendDocumentAskQuestionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->folderId)) {
    body->insert(pair<string, string>("folderId", *request->folderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prompt)) {
    body->insert(pair<string, string>("prompt", *request->prompt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("sessionId", *request->sessionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendDocumentAskQuestion"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/aidoc/document/sendDocumentAskQuestion"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendDocumentAskQuestionResponse(callApi(params, req, runtime));
}

SendDocumentAskQuestionResponse Alibabacloud_EnergyExpertExternal20220923::Client::sendDocumentAskQuestion(shared_ptr<SendDocumentAskQuestionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return sendDocumentAskQuestionWithOptions(request, headers, runtime);
}

SetRunningPlanResponse Alibabacloud_EnergyExpertExternal20220923::Client::setRunningPlanWithOptions(shared_ptr<SetRunningPlanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->controlType)) {
    body->insert(pair<string, long>("controlType", *request->controlType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dateType)) {
    body->insert(pair<string, long>("dateType", *request->dateType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->earliestStartupTime)) {
    body->insert(pair<string, string>("earliestStartupTime", *request->earliestStartupTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->factoryId)) {
    body->insert(pair<string, string>("factoryId", *request->factoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->latestShutdownTime)) {
    body->insert(pair<string, string>("latestShutdownTime", *request->latestShutdownTime));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->maxCarbonDioxide)) {
    body->insert(pair<string, double>("maxCarbonDioxide", *request->maxCarbonDioxide));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->maxTem)) {
    body->insert(pair<string, double>("maxTem", *request->maxTem));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->minTem)) {
    body->insert(pair<string, double>("minTem", *request->minTem));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pKey)) {
    body->insert(pair<string, string>("pKey", *request->pKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->seasonMode)) {
    body->insert(pair<string, long>("seasonMode", *request->seasonMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("startTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statisticsTime)) {
    body->insert(pair<string, string>("statisticsTime", *request->statisticsTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemId)) {
    body->insert(pair<string, string>("systemId", *request->systemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workingEndTime)) {
    body->insert(pair<string, string>("workingEndTime", *request->workingEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workingStartTime)) {
    body->insert(pair<string, string>("workingStartTime", *request->workingStartTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetRunningPlan"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/carbon/hvac/setRunningPlan"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetRunningPlanResponse(callApi(params, req, runtime));
}

SetRunningPlanResponse Alibabacloud_EnergyExpertExternal20220923::Client::setRunningPlan(shared_ptr<SetRunningPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return setRunningPlanWithOptions(request, headers, runtime);
}

SubmitDocExtractionTaskResponse Alibabacloud_EnergyExpertExternal20220923::Client::submitDocExtractionTaskWithOptions(shared_ptr<SubmitDocExtractionTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extractType)) {
    query->insert(pair<string, string>("extractType", *request->extractType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("fileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileUrl)) {
    query->insert(pair<string, string>("fileUrl", *request->fileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->folderId)) {
    query->insert(pair<string, string>("folderId", *request->folderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("templateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitDocExtractionTask"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/aidoc/document/submitDocExtractionTask"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitDocExtractionTaskResponse(callApi(params, req, runtime));
}

SubmitDocExtractionTaskResponse Alibabacloud_EnergyExpertExternal20220923::Client::submitDocExtractionTask(shared_ptr<SubmitDocExtractionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return submitDocExtractionTaskWithOptions(request, headers, runtime);
}

SubmitDocExtractionTaskResponse Alibabacloud_EnergyExpertExternal20220923::Client::submitDocExtractionTaskAdvance(shared_ptr<SubmitDocExtractionTaskAdvanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::empty(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("energyExpertExternal"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<SubmitDocExtractionTaskRequest> submitDocExtractionTaskReq = make_shared<SubmitDocExtractionTaskRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, submitDocExtractionTaskReq);
  if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(request->fileUrlObject)) {
    authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
    ossConfig->accessKeyId = authResponse->body->accessKeyId;
    ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
    ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
    fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
      {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
      {"content", !request->fileUrlObject ? boost::any() : boost::any(*request->fileUrlObject)},
      {"contentType", boost::any(string(""))}
    }));
    ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
      {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
      {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
      {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
      {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
      {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
      {"successActionStatus", boost::any(string("201"))}
    }));
    uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
      {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
      {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
    }));
    ossClient->postObject(uploadRequest, ossRuntime);
    submitDocExtractionTaskReq->fileUrl = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
  }
  shared_ptr<SubmitDocExtractionTaskResponse> submitDocExtractionTaskResp = make_shared<SubmitDocExtractionTaskResponse>(submitDocExtractionTaskWithOptions(submitDocExtractionTaskReq, headers, runtime));
  return *submitDocExtractionTaskResp;
}

SubmitDocParsingTaskResponse Alibabacloud_EnergyExpertExternal20220923::Client::submitDocParsingTaskWithOptions(shared_ptr<SubmitDocParsingTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("fileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileUrl)) {
    query->insert(pair<string, string>("fileUrl", *request->fileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->folderId)) {
    query->insert(pair<string, string>("folderId", *request->folderId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needAnalyzeImg)) {
    query->insert(pair<string, bool>("needAnalyzeImg", *request->needAnalyzeImg));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitDocParsingTask"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/aidoc/document/submitDocParsingTask"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitDocParsingTaskResponse(callApi(params, req, runtime));
}

SubmitDocParsingTaskResponse Alibabacloud_EnergyExpertExternal20220923::Client::submitDocParsingTask(shared_ptr<SubmitDocParsingTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return submitDocParsingTaskWithOptions(request, headers, runtime);
}

SubmitDocParsingTaskResponse Alibabacloud_EnergyExpertExternal20220923::Client::submitDocParsingTaskAdvance(shared_ptr<SubmitDocParsingTaskAdvanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::empty(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("energyExpertExternal"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<SubmitDocParsingTaskRequest> submitDocParsingTaskReq = make_shared<SubmitDocParsingTaskRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, submitDocParsingTaskReq);
  if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(request->fileUrlObject)) {
    authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
    ossConfig->accessKeyId = authResponse->body->accessKeyId;
    ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
    ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
    fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
      {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
      {"content", !request->fileUrlObject ? boost::any() : boost::any(*request->fileUrlObject)},
      {"contentType", boost::any(string(""))}
    }));
    ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
      {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
      {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
      {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
      {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
      {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
      {"successActionStatus", boost::any(string("201"))}
    }));
    uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
      {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
      {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
    }));
    ossClient->postObject(uploadRequest, ossRuntime);
    submitDocParsingTaskReq->fileUrl = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
  }
  shared_ptr<SubmitDocParsingTaskResponse> submitDocParsingTaskResp = make_shared<SubmitDocParsingTaskResponse>(submitDocParsingTaskWithOptions(submitDocParsingTaskReq, headers, runtime));
  return *submitDocParsingTaskResp;
}

SubmitDocumentAnalyzeJobResponse Alibabacloud_EnergyExpertExternal20220923::Client::submitDocumentAnalyzeJobWithOptions(shared_ptr<SubmitDocumentAnalyzeJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->analysisType)) {
    query->insert(pair<string, string>("analysisType", *request->analysisType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("fileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileUrl)) {
    query->insert(pair<string, string>("fileUrl", *request->fileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->folderId)) {
    query->insert(pair<string, string>("folderId", *request->folderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("templateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitDocumentAnalyzeJob"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/aidoc/document/submitDocumentAnalyzeJob"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitDocumentAnalyzeJobResponse(callApi(params, req, runtime));
}

SubmitDocumentAnalyzeJobResponse Alibabacloud_EnergyExpertExternal20220923::Client::submitDocumentAnalyzeJob(shared_ptr<SubmitDocumentAnalyzeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return submitDocumentAnalyzeJobWithOptions(request, headers, runtime);
}

SubmitDocumentAnalyzeJobResponse Alibabacloud_EnergyExpertExternal20220923::Client::submitDocumentAnalyzeJobAdvance(shared_ptr<SubmitDocumentAnalyzeJobAdvanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::empty(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("energyExpertExternal"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<SubmitDocumentAnalyzeJobRequest> submitDocumentAnalyzeJobReq = make_shared<SubmitDocumentAnalyzeJobRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, submitDocumentAnalyzeJobReq);
  if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(request->fileUrlObject)) {
    authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
    ossConfig->accessKeyId = authResponse->body->accessKeyId;
    ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
    ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
    fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
      {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
      {"content", !request->fileUrlObject ? boost::any() : boost::any(*request->fileUrlObject)},
      {"contentType", boost::any(string(""))}
    }));
    ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
      {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
      {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
      {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
      {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
      {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
      {"successActionStatus", boost::any(string("201"))}
    }));
    uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
      {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
      {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
    }));
    ossClient->postObject(uploadRequest, ossRuntime);
    submitDocumentAnalyzeJobReq->fileUrl = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
  }
  shared_ptr<SubmitDocumentAnalyzeJobResponse> submitDocumentAnalyzeJobResp = make_shared<SubmitDocumentAnalyzeJobResponse>(submitDocumentAnalyzeJobWithOptions(submitDocumentAnalyzeJobReq, headers, runtime));
  return *submitDocumentAnalyzeJobResp;
}

SubmitVLExtractionTaskResponse Alibabacloud_EnergyExpertExternal20220923::Client::submitVLExtractionTaskWithOptions(shared_ptr<SubmitVLExtractionTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("fileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileUrl)) {
    query->insert(pair<string, string>("fileUrl", *request->fileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->folderId)) {
    query->insert(pair<string, string>("folderId", *request->folderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("templateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitVLExtractionTask"))},
    {"version", boost::any(string("2022-09-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/aidoc/document/submitVLExtractionTask"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitVLExtractionTaskResponse(callApi(params, req, runtime));
}

SubmitVLExtractionTaskResponse Alibabacloud_EnergyExpertExternal20220923::Client::submitVLExtractionTask(shared_ptr<SubmitVLExtractionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return submitVLExtractionTaskWithOptions(request, headers, runtime);
}

SubmitVLExtractionTaskResponse Alibabacloud_EnergyExpertExternal20220923::Client::submitVLExtractionTaskAdvance(shared_ptr<SubmitVLExtractionTaskAdvanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::empty(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("energyExpertExternal"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<SubmitVLExtractionTaskRequest> submitVLExtractionTaskReq = make_shared<SubmitVLExtractionTaskRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, submitVLExtractionTaskReq);
  if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(request->fileUrlObject)) {
    authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
    ossConfig->accessKeyId = authResponse->body->accessKeyId;
    ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
    ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
    fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
      {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
      {"content", !request->fileUrlObject ? boost::any() : boost::any(*request->fileUrlObject)},
      {"contentType", boost::any(string(""))}
    }));
    ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
      {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
      {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
      {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
      {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
      {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
      {"successActionStatus", boost::any(string("201"))}
    }));
    uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
      {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
      {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
    }));
    ossClient->postObject(uploadRequest, ossRuntime);
    submitVLExtractionTaskReq->fileUrl = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
  }
  shared_ptr<SubmitVLExtractionTaskResponse> submitVLExtractionTaskResp = make_shared<SubmitVLExtractionTaskResponse>(submitVLExtractionTaskWithOptions(submitVLExtractionTaskReq, headers, runtime));
  return *submitVLExtractionTaskResp;
}

