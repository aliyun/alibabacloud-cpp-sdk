// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/alimt_20181012.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <alibabacloud/open_platform_20191219.hpp>
#include <alibabacloud/oss.hpp>
#include <alibabacloud/ossutil.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/file_form.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Alimt20181012;

Alibabacloud_Alimt20181012::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _signatureAlgorithm = make_shared<string>("v2");
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-hangzhou", "mt.cn-hangzhou.aliyuncs.com"},
    {"ap-northeast-1", "mt.aliyuncs.com"},
    {"ap-northeast-2-pop", "mt.aliyuncs.com"},
    {"ap-south-1", "mt.aliyuncs.com"},
    {"ap-southeast-1", "mt.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2", "mt.aliyuncs.com"},
    {"ap-southeast-3", "mt.aliyuncs.com"},
    {"ap-southeast-5", "mt.aliyuncs.com"},
    {"cn-beijing", "mt.aliyuncs.com"},
    {"cn-beijing-finance-1", "mt.aliyuncs.com"},
    {"cn-beijing-finance-pop", "mt.aliyuncs.com"},
    {"cn-beijing-gov-1", "mt.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "mt.aliyuncs.com"},
    {"cn-chengdu", "mt.aliyuncs.com"},
    {"cn-edge-1", "mt.aliyuncs.com"},
    {"cn-fujian", "mt.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "mt.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "mt.aliyuncs.com"},
    {"cn-hangzhou-finance", "mt.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "mt.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "mt.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "mt.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "mt.aliyuncs.com"},
    {"cn-hangzhou-test-306", "mt.aliyuncs.com"},
    {"cn-hongkong", "mt.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "mt.aliyuncs.com"},
    {"cn-huhehaote", "mt.aliyuncs.com"},
    {"cn-north-2-gov-1", "mt.aliyuncs.com"},
    {"cn-qingdao", "mt.aliyuncs.com"},
    {"cn-qingdao-nebula", "mt.aliyuncs.com"},
    {"cn-shanghai", "mt.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "mt.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "mt.aliyuncs.com"},
    {"cn-shanghai-finance-1", "mt.aliyuncs.com"},
    {"cn-shanghai-inner", "mt.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "mt.aliyuncs.com"},
    {"cn-shenzhen", "mt.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "mt.aliyuncs.com"},
    {"cn-shenzhen-inner", "mt.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "mt.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "mt.aliyuncs.com"},
    {"cn-wuhan", "mt.aliyuncs.com"},
    {"cn-yushanfang", "mt.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "mt.aliyuncs.com"},
    {"cn-zhangjiakou", "mt.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "mt.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "mt.aliyuncs.com"},
    {"eu-central-1", "mt.aliyuncs.com"},
    {"eu-west-1", "mt.aliyuncs.com"},
    {"eu-west-1-oxs", "mt.aliyuncs.com"},
    {"me-east-1", "mt.aliyuncs.com"},
    {"rus-west-1-pop", "mt.aliyuncs.com"},
    {"us-east-1", "mt.aliyuncs.com"},
    {"us-west-1", "mt.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("alimt"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Alimt20181012::Client::getEndpoint(shared_ptr<string> productId,
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

CreateAsyncTranslateResponse Alibabacloud_Alimt20181012::Client::createAsyncTranslateWithOptions(shared_ptr<CreateAsyncTranslateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiType)) {
    body->insert(pair<string, string>("ApiType", *request->apiType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formatType)) {
    body->insert(pair<string, string>("FormatType", *request->formatType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scene)) {
    body->insert(pair<string, string>("Scene", *request->scene));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceLanguage)) {
    body->insert(pair<string, string>("SourceLanguage", *request->sourceLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceText)) {
    body->insert(pair<string, string>("SourceText", *request->sourceText));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetLanguage)) {
    body->insert(pair<string, string>("TargetLanguage", *request->targetLanguage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAsyncTranslate"))},
    {"version", boost::any(string("2018-10-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAsyncTranslateResponse(callApi(params, req, runtime));
}

CreateAsyncTranslateResponse Alibabacloud_Alimt20181012::Client::createAsyncTranslate(shared_ptr<CreateAsyncTranslateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAsyncTranslateWithOptions(request, runtime);
}

CreateDocTranslateTaskResponse Alibabacloud_Alimt20181012::Client::createDocTranslateTaskWithOptions(shared_ptr<CreateDocTranslateTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackUrl)) {
    body->insert(pair<string, string>("CallbackUrl", *request->callbackUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileUrl)) {
    body->insert(pair<string, string>("FileUrl", *request->fileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scene)) {
    body->insert(pair<string, string>("Scene", *request->scene));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceLanguage)) {
    body->insert(pair<string, string>("SourceLanguage", *request->sourceLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetLanguage)) {
    body->insert(pair<string, string>("TargetLanguage", *request->targetLanguage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDocTranslateTask"))},
    {"version", boost::any(string("2018-10-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDocTranslateTaskResponse(callApi(params, req, runtime));
}

CreateDocTranslateTaskResponse Alibabacloud_Alimt20181012::Client::createDocTranslateTask(shared_ptr<CreateDocTranslateTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDocTranslateTaskWithOptions(request, runtime);
}

CreateDocTranslateTaskResponse Alibabacloud_Alimt20181012::Client::createDocTranslateTaskAdvance(shared_ptr<CreateDocTranslateTaskAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::isUnset<string>(openPlatformEndpoint)) {
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
    {"product", boost::any(string("alimt"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient;
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<CreateDocTranslateTaskRequest> createDocTranslateTaskReq = make_shared<CreateDocTranslateTaskRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, createDocTranslateTaskReq);
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
    createDocTranslateTaskReq->fileUrl = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
  }
  shared_ptr<CreateDocTranslateTaskResponse> createDocTranslateTaskResp = make_shared<CreateDocTranslateTaskResponse>(createDocTranslateTaskWithOptions(createDocTranslateTaskReq, runtime));
  return *createDocTranslateTaskResp;
}

CreateImageTranslateTaskResponse Alibabacloud_Alimt20181012::Client::createImageTranslateTaskWithOptions(shared_ptr<CreateImageTranslateTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extra)) {
    body->insert(pair<string, string>("Extra", *request->extra));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceLanguage)) {
    body->insert(pair<string, string>("SourceLanguage", *request->sourceLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetLanguage)) {
    body->insert(pair<string, string>("TargetLanguage", *request->targetLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->urlList)) {
    body->insert(pair<string, string>("UrlList", *request->urlList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateImageTranslateTask"))},
    {"version", boost::any(string("2018-10-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateImageTranslateTaskResponse(callApi(params, req, runtime));
}

CreateImageTranslateTaskResponse Alibabacloud_Alimt20181012::Client::createImageTranslateTask(shared_ptr<CreateImageTranslateTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createImageTranslateTaskWithOptions(request, runtime);
}

GetAsyncTranslateResponse Alibabacloud_Alimt20181012::Client::getAsyncTranslateWithOptions(shared_ptr<GetAsyncTranslateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAsyncTranslate"))},
    {"version", boost::any(string("2018-10-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAsyncTranslateResponse(callApi(params, req, runtime));
}

GetAsyncTranslateResponse Alibabacloud_Alimt20181012::Client::getAsyncTranslate(shared_ptr<GetAsyncTranslateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAsyncTranslateWithOptions(request, runtime);
}

GetBatchTranslateResponse Alibabacloud_Alimt20181012::Client::getBatchTranslateWithOptions(shared_ptr<GetBatchTranslateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiType)) {
    body->insert(pair<string, string>("ApiType", *request->apiType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formatType)) {
    body->insert(pair<string, string>("FormatType", *request->formatType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scene)) {
    body->insert(pair<string, string>("Scene", *request->scene));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceLanguage)) {
    body->insert(pair<string, string>("SourceLanguage", *request->sourceLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceText)) {
    body->insert(pair<string, string>("SourceText", *request->sourceText));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetLanguage)) {
    body->insert(pair<string, string>("TargetLanguage", *request->targetLanguage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBatchTranslate"))},
    {"version", boost::any(string("2018-10-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBatchTranslateResponse(callApi(params, req, runtime));
}

GetBatchTranslateResponse Alibabacloud_Alimt20181012::Client::getBatchTranslate(shared_ptr<GetBatchTranslateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBatchTranslateWithOptions(request, runtime);
}

GetDetectLanguageResponse Alibabacloud_Alimt20181012::Client::getDetectLanguageWithOptions(shared_ptr<GetDetectLanguageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceText)) {
    body->insert(pair<string, string>("SourceText", *request->sourceText));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDetectLanguage"))},
    {"version", boost::any(string("2018-10-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDetectLanguageResponse(callApi(params, req, runtime));
}

GetDetectLanguageResponse Alibabacloud_Alimt20181012::Client::getDetectLanguage(shared_ptr<GetDetectLanguageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDetectLanguageWithOptions(request, runtime);
}

GetDocTranslateTaskResponse Alibabacloud_Alimt20181012::Client::getDocTranslateTaskWithOptions(shared_ptr<GetDocTranslateTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDocTranslateTask"))},
    {"version", boost::any(string("2018-10-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDocTranslateTaskResponse(callApi(params, req, runtime));
}

GetDocTranslateTaskResponse Alibabacloud_Alimt20181012::Client::getDocTranslateTask(shared_ptr<GetDocTranslateTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDocTranslateTaskWithOptions(request, runtime);
}

GetImageDiagnoseResponse Alibabacloud_Alimt20181012::Client::getImageDiagnoseWithOptions(shared_ptr<GetImageDiagnoseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extra)) {
    body->insert(pair<string, string>("Extra", *request->extra));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    body->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetImageDiagnose"))},
    {"version", boost::any(string("2018-10-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetImageDiagnoseResponse(callApi(params, req, runtime));
}

GetImageDiagnoseResponse Alibabacloud_Alimt20181012::Client::getImageDiagnose(shared_ptr<GetImageDiagnoseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getImageDiagnoseWithOptions(request, runtime);
}

GetImageTranslateResponse Alibabacloud_Alimt20181012::Client::getImageTranslateWithOptions(shared_ptr<GetImageTranslateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extra)) {
    body->insert(pair<string, string>("Extra", *request->extra));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceLanguage)) {
    body->insert(pair<string, string>("SourceLanguage", *request->sourceLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetLanguage)) {
    body->insert(pair<string, string>("TargetLanguage", *request->targetLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    body->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetImageTranslate"))},
    {"version", boost::any(string("2018-10-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetImageTranslateResponse(callApi(params, req, runtime));
}

GetImageTranslateResponse Alibabacloud_Alimt20181012::Client::getImageTranslate(shared_ptr<GetImageTranslateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getImageTranslateWithOptions(request, runtime);
}

GetImageTranslateTaskResponse Alibabacloud_Alimt20181012::Client::getImageTranslateTaskWithOptions(shared_ptr<GetImageTranslateTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetImageTranslateTask"))},
    {"version", boost::any(string("2018-10-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetImageTranslateTaskResponse(callApi(params, req, runtime));
}

GetImageTranslateTaskResponse Alibabacloud_Alimt20181012::Client::getImageTranslateTask(shared_ptr<GetImageTranslateTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getImageTranslateTaskWithOptions(request, runtime);
}

GetTitleDiagnoseResponse Alibabacloud_Alimt20181012::Client::getTitleDiagnoseWithOptions(shared_ptr<GetTitleDiagnoseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryId)) {
    body->insert(pair<string, string>("CategoryId", *request->categoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extra)) {
    body->insert(pair<string, string>("Extra", *request->extra));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->platform)) {
    body->insert(pair<string, string>("Platform", *request->platform));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTitleDiagnose"))},
    {"version", boost::any(string("2018-10-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTitleDiagnoseResponse(callApi(params, req, runtime));
}

GetTitleDiagnoseResponse Alibabacloud_Alimt20181012::Client::getTitleDiagnose(shared_ptr<GetTitleDiagnoseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTitleDiagnoseWithOptions(request, runtime);
}

GetTitleGenerateResponse Alibabacloud_Alimt20181012::Client::getTitleGenerateWithOptions(shared_ptr<GetTitleGenerateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->attributes)) {
    body->insert(pair<string, string>("Attributes", *request->attributes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryId)) {
    body->insert(pair<string, string>("CategoryId", *request->categoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extra)) {
    body->insert(pair<string, string>("Extra", *request->extra));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotWords)) {
    body->insert(pair<string, string>("HotWords", *request->hotWords));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->platform)) {
    body->insert(pair<string, string>("Platform", *request->platform));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTitleGenerate"))},
    {"version", boost::any(string("2018-10-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTitleGenerateResponse(callApi(params, req, runtime));
}

GetTitleGenerateResponse Alibabacloud_Alimt20181012::Client::getTitleGenerate(shared_ptr<GetTitleGenerateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTitleGenerateWithOptions(request, runtime);
}

GetTitleIntelligenceResponse Alibabacloud_Alimt20181012::Client::getTitleIntelligenceWithOptions(shared_ptr<GetTitleIntelligenceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->catLevelThreeId)) {
    body->insert(pair<string, long>("CatLevelThreeId", *request->catLevelThreeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->catLevelTwoId)) {
    body->insert(pair<string, long>("CatLevelTwoId", *request->catLevelTwoId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extra)) {
    body->insert(pair<string, string>("Extra", *request->extra));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keywords)) {
    body->insert(pair<string, string>("Keywords", *request->keywords));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->platform)) {
    body->insert(pair<string, string>("Platform", *request->platform));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTitleIntelligence"))},
    {"version", boost::any(string("2018-10-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTitleIntelligenceResponse(callApi(params, req, runtime));
}

GetTitleIntelligenceResponse Alibabacloud_Alimt20181012::Client::getTitleIntelligence(shared_ptr<GetTitleIntelligenceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTitleIntelligenceWithOptions(request, runtime);
}

GetTranslateImageBatchResultResponse Alibabacloud_Alimt20181012::Client::getTranslateImageBatchResultWithOptions(shared_ptr<GetTranslateImageBatchResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTranslateImageBatchResult"))},
    {"version", boost::any(string("2018-10-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTranslateImageBatchResultResponse(callApi(params, req, runtime));
}

GetTranslateImageBatchResultResponse Alibabacloud_Alimt20181012::Client::getTranslateImageBatchResult(shared_ptr<GetTranslateImageBatchResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTranslateImageBatchResultWithOptions(request, runtime);
}

GetTranslateReportResponse Alibabacloud_Alimt20181012::Client::getTranslateReportWithOptions(shared_ptr<GetTranslateReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiName)) {
    query->insert(pair<string, string>("ApiName", *request->apiName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->beginTime)) {
    query->insert(pair<string, string>("BeginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->group)) {
    query->insert(pair<string, string>("Group", *request->group));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTranslateReport"))},
    {"version", boost::any(string("2018-10-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTranslateReportResponse(callApi(params, req, runtime));
}

GetTranslateReportResponse Alibabacloud_Alimt20181012::Client::getTranslateReport(shared_ptr<GetTranslateReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTranslateReportWithOptions(request, runtime);
}

OpenAlimtServiceResponse Alibabacloud_Alimt20181012::Client::openAlimtServiceWithOptions(shared_ptr<OpenAlimtServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenAlimtService"))},
    {"version", boost::any(string("2018-10-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenAlimtServiceResponse(callApi(params, req, runtime));
}

OpenAlimtServiceResponse Alibabacloud_Alimt20181012::Client::openAlimtService(shared_ptr<OpenAlimtServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openAlimtServiceWithOptions(request, runtime);
}

TranslateResponse Alibabacloud_Alimt20181012::Client::translateWithOptions(shared_ptr<TranslateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->context)) {
    query->insert(pair<string, string>("Context", *request->context));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->formatType)) {
    body->insert(pair<string, string>("FormatType", *request->formatType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scene)) {
    body->insert(pair<string, string>("Scene", *request->scene));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceLanguage)) {
    body->insert(pair<string, string>("SourceLanguage", *request->sourceLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceText)) {
    body->insert(pair<string, string>("SourceText", *request->sourceText));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetLanguage)) {
    body->insert(pair<string, string>("TargetLanguage", *request->targetLanguage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Translate"))},
    {"version", boost::any(string("2018-10-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TranslateResponse(callApi(params, req, runtime));
}

TranslateResponse Alibabacloud_Alimt20181012::Client::translate(shared_ptr<TranslateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return translateWithOptions(request, runtime);
}

TranslateCertificateResponse Alibabacloud_Alimt20181012::Client::translateCertificateWithOptions(shared_ptr<TranslateCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certificateType)) {
    body->insert(pair<string, string>("CertificateType", *request->certificateType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUrl)) {
    body->insert(pair<string, string>("ImageUrl", *request->imageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resultType)) {
    body->insert(pair<string, string>("ResultType", *request->resultType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceLanguage)) {
    body->insert(pair<string, string>("SourceLanguage", *request->sourceLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetLanguage)) {
    body->insert(pair<string, string>("TargetLanguage", *request->targetLanguage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TranslateCertificate"))},
    {"version", boost::any(string("2018-10-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TranslateCertificateResponse(callApi(params, req, runtime));
}

TranslateCertificateResponse Alibabacloud_Alimt20181012::Client::translateCertificate(shared_ptr<TranslateCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return translateCertificateWithOptions(request, runtime);
}

TranslateCertificateResponse Alibabacloud_Alimt20181012::Client::translateCertificateAdvance(shared_ptr<TranslateCertificateAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::isUnset<string>(openPlatformEndpoint)) {
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
    {"product", boost::any(string("alimt"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient;
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<TranslateCertificateRequest> translateCertificateReq = make_shared<TranslateCertificateRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, translateCertificateReq);
  if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(request->imageUrlObject)) {
    authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
    ossConfig->accessKeyId = authResponse->body->accessKeyId;
    ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
    ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
    fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
      {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
      {"content", !request->imageUrlObject ? boost::any() : boost::any(*request->imageUrlObject)},
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
    translateCertificateReq->imageUrl = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
  }
  shared_ptr<TranslateCertificateResponse> translateCertificateResp = make_shared<TranslateCertificateResponse>(translateCertificateWithOptions(translateCertificateReq, runtime));
  return *translateCertificateResp;
}

TranslateECommerceResponse Alibabacloud_Alimt20181012::Client::translateECommerceWithOptions(shared_ptr<TranslateECommerceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->context)) {
    query->insert(pair<string, string>("Context", *request->context));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->formatType)) {
    body->insert(pair<string, string>("FormatType", *request->formatType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scene)) {
    body->insert(pair<string, string>("Scene", *request->scene));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceLanguage)) {
    body->insert(pair<string, string>("SourceLanguage", *request->sourceLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceText)) {
    body->insert(pair<string, string>("SourceText", *request->sourceText));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetLanguage)) {
    body->insert(pair<string, string>("TargetLanguage", *request->targetLanguage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TranslateECommerce"))},
    {"version", boost::any(string("2018-10-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TranslateECommerceResponse(callApi(params, req, runtime));
}

TranslateECommerceResponse Alibabacloud_Alimt20181012::Client::translateECommerce(shared_ptr<TranslateECommerceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return translateECommerceWithOptions(request, runtime);
}

TranslateGeneralResponse Alibabacloud_Alimt20181012::Client::translateGeneralWithOptions(shared_ptr<TranslateGeneralRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->context)) {
    query->insert(pair<string, string>("Context", *request->context));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->formatType)) {
    body->insert(pair<string, string>("FormatType", *request->formatType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scene)) {
    body->insert(pair<string, string>("Scene", *request->scene));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceLanguage)) {
    body->insert(pair<string, string>("SourceLanguage", *request->sourceLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceText)) {
    body->insert(pair<string, string>("SourceText", *request->sourceText));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetLanguage)) {
    body->insert(pair<string, string>("TargetLanguage", *request->targetLanguage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TranslateGeneral"))},
    {"version", boost::any(string("2018-10-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TranslateGeneralResponse(callApi(params, req, runtime));
}

TranslateGeneralResponse Alibabacloud_Alimt20181012::Client::translateGeneral(shared_ptr<TranslateGeneralRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return translateGeneralWithOptions(request, runtime);
}

TranslateImageResponse Alibabacloud_Alimt20181012::Client::translateImageWithOptions(shared_ptr<TranslateImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ext)) {
    body->insert(pair<string, string>("Ext", *request->ext));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->field)) {
    body->insert(pair<string, string>("Field", *request->field));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageBase64)) {
    body->insert(pair<string, string>("ImageBase64", *request->imageBase64));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUrl)) {
    body->insert(pair<string, string>("ImageUrl", *request->imageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceLanguage)) {
    body->insert(pair<string, string>("SourceLanguage", *request->sourceLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetLanguage)) {
    body->insert(pair<string, string>("TargetLanguage", *request->targetLanguage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TranslateImage"))},
    {"version", boost::any(string("2018-10-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TranslateImageResponse(callApi(params, req, runtime));
}

TranslateImageResponse Alibabacloud_Alimt20181012::Client::translateImage(shared_ptr<TranslateImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return translateImageWithOptions(request, runtime);
}

TranslateImageBatchResponse Alibabacloud_Alimt20181012::Client::translateImageBatchWithOptions(shared_ptr<TranslateImageBatchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customTaskId)) {
    body->insert(pair<string, string>("CustomTaskId", *request->customTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ext)) {
    body->insert(pair<string, string>("Ext", *request->ext));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->field)) {
    body->insert(pair<string, string>("Field", *request->field));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUrls)) {
    body->insert(pair<string, string>("ImageUrls", *request->imageUrls));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceLanguage)) {
    body->insert(pair<string, string>("SourceLanguage", *request->sourceLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetLanguage)) {
    body->insert(pair<string, string>("TargetLanguage", *request->targetLanguage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TranslateImageBatch"))},
    {"version", boost::any(string("2018-10-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TranslateImageBatchResponse(callApi(params, req, runtime));
}

TranslateImageBatchResponse Alibabacloud_Alimt20181012::Client::translateImageBatch(shared_ptr<TranslateImageBatchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return translateImageBatchWithOptions(request, runtime);
}

