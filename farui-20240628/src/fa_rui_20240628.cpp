// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/fa_rui_20240628.hpp>
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

using namespace Alibabacloud_FaRui20240628;

Alibabacloud_FaRui20240628::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("farui"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_FaRui20240628::Client::getEndpoint(shared_ptr<string> productId,
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

CreateTextFileResponse Alibabacloud_FaRui20240628::Client::createTextFileWithOptions(shared_ptr<string> WorkspaceId,
                                                                                     shared_ptr<CreateTextFileRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createTime)) {
    body->insert(pair<string, string>("CreateTime", *request->createTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->textFileName)) {
    body->insert(pair<string, string>("TextFileName", *request->textFileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->textFileUrl)) {
    body->insert(pair<string, string>("TextFileUrl", *request->textFileUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTextFile"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/data/textFile"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTextFileResponse(callApi(params, req, runtime));
}

CreateTextFileResponse Alibabacloud_FaRui20240628::Client::createTextFile(shared_ptr<string> WorkspaceId, shared_ptr<CreateTextFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createTextFileWithOptions(WorkspaceId, request, headers, runtime);
}

CreateTextFileResponse Alibabacloud_FaRui20240628::Client::createTextFileAdvance(shared_ptr<string> WorkspaceId,
                                                                                 shared_ptr<CreateTextFileAdvanceRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"product", boost::any(string("FaRui"))},
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
  shared_ptr<CreateTextFileRequest> createTextFileReq = make_shared<CreateTextFileRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, createTextFileReq);
  if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(request->textFileUrlObject)) {
    authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
    ossConfig->accessKeyId = authResponse->body->accessKeyId;
    ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
    ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
    fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
      {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
      {"content", !request->textFileUrlObject ? boost::any() : boost::any(*request->textFileUrlObject)},
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
    createTextFileReq->textFileUrl = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
  }
  shared_ptr<CreateTextFileResponse> createTextFileResp = make_shared<CreateTextFileResponse>(createTextFileWithOptions(WorkspaceId, createTextFileReq, headers, runtime));
  return *createTextFileResp;
}

RunContractResultGenerationResponse Alibabacloud_FaRui20240628::Client::runContractResultGenerationWithOptions(shared_ptr<string> workspaceId,
                                                                                                               shared_ptr<RunContractResultGenerationRequest> tmpReq,
                                                                                                               shared_ptr<map<string, string>> headers,
                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RunContractResultGenerationShrinkRequest> request = make_shared<RunContractResultGenerationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RunContractResultGenerationRequestAssistant>(tmpReq->assistant)) {
    request->assistantShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->assistant, make_shared<string>("assistant"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("appId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->assistantShrink)) {
    body->insert(pair<string, string>("assistant", *request->assistantShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->stream)) {
    body->insert(pair<string, bool>("stream", *request->stream));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunContractResultGeneration"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/farui/contract/result/genarate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunContractResultGenerationResponse(callApi(params, req, runtime));
}

RunContractResultGenerationResponse Alibabacloud_FaRui20240628::Client::runContractResultGeneration(shared_ptr<string> workspaceId, shared_ptr<RunContractResultGenerationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runContractResultGenerationWithOptions(workspaceId, request, headers, runtime);
}

RunContractRuleGenerationResponse Alibabacloud_FaRui20240628::Client::runContractRuleGenerationWithOptions(shared_ptr<string> workspaceId,
                                                                                                           shared_ptr<RunContractRuleGenerationRequest> tmpReq,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RunContractRuleGenerationShrinkRequest> request = make_shared<RunContractRuleGenerationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RunContractRuleGenerationRequestAssistant>(tmpReq->assistant)) {
    request->assistantShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->assistant, make_shared<string>("assistant"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("appId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->assistantShrink)) {
    body->insert(pair<string, string>("assistant", *request->assistantShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->stream)) {
    body->insert(pair<string, bool>("stream", *request->stream));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunContractRuleGeneration"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/farui/contract/rule/genarate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunContractRuleGenerationResponse(callApi(params, req, runtime));
}

RunContractRuleGenerationResponse Alibabacloud_FaRui20240628::Client::runContractRuleGeneration(shared_ptr<string> workspaceId, shared_ptr<RunContractRuleGenerationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runContractRuleGenerationWithOptions(workspaceId, request, headers, runtime);
}

RunLegalAdviceConsultationResponse Alibabacloud_FaRui20240628::Client::runLegalAdviceConsultationWithOptions(shared_ptr<string> workspaceId,
                                                                                                             shared_ptr<RunLegalAdviceConsultationRequest> tmpReq,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RunLegalAdviceConsultationShrinkRequest> request = make_shared<RunLegalAdviceConsultationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RunLegalAdviceConsultationRequestAssistant>(tmpReq->assistant)) {
    request->assistantShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->assistant, make_shared<string>("assistant"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<RunLegalAdviceConsultationRequestThread>(tmpReq->thread)) {
    request->threadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->thread, make_shared<string>("thread"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("appId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->assistantShrink)) {
    body->insert(pair<string, string>("assistant", *request->assistantShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->stream)) {
    body->insert(pair<string, bool>("stream", *request->stream));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->threadShrink)) {
    body->insert(pair<string, string>("thread", *request->threadShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunLegalAdviceConsultation"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/farui/legalAdvice/consult"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunLegalAdviceConsultationResponse(callApi(params, req, runtime));
}

RunLegalAdviceConsultationResponse Alibabacloud_FaRui20240628::Client::runLegalAdviceConsultation(shared_ptr<string> workspaceId, shared_ptr<RunLegalAdviceConsultationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runLegalAdviceConsultationWithOptions(workspaceId, request, headers, runtime);
}

RunSearchCaseFullTextResponse Alibabacloud_FaRui20240628::Client::runSearchCaseFullTextWithOptions(shared_ptr<string> workspaceId,
                                                                                                   shared_ptr<RunSearchCaseFullTextRequest> tmpReq,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RunSearchCaseFullTextShrinkRequest> request = make_shared<RunSearchCaseFullTextShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RunSearchCaseFullTextRequestFilterCondition>(tmpReq->filterCondition)) {
    request->filterConditionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filterCondition, make_shared<string>("filterCondition"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<RunSearchCaseFullTextRequestPageParam>(tmpReq->pageParam)) {
    request->pageParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->pageParam, make_shared<string>("pageParam"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->queryKeywords)) {
    request->queryKeywordsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->queryKeywords, make_shared<string>("queryKeywords"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->sortKeyAndDirection)) {
    request->sortKeyAndDirectionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sortKeyAndDirection, make_shared<string>("sortKeyAndDirection"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<RunSearchCaseFullTextRequestThread>(tmpReq->thread)) {
    request->threadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->thread, make_shared<string>("thread"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("appId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterConditionShrink)) {
    body->insert(pair<string, string>("filterCondition", *request->filterConditionShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageParamShrink)) {
    body->insert(pair<string, string>("pageParam", *request->pageParamShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    body->insert(pair<string, string>("query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryKeywordsShrink)) {
    body->insert(pair<string, string>("queryKeywords", *request->queryKeywordsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortKeyAndDirectionShrink)) {
    body->insert(pair<string, string>("sortKeyAndDirection", *request->sortKeyAndDirectionShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->threadShrink)) {
    body->insert(pair<string, string>("thread", *request->threadShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunSearchCaseFullText"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/farui/search/case/fulltext"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunSearchCaseFullTextResponse(callApi(params, req, runtime));
}

RunSearchCaseFullTextResponse Alibabacloud_FaRui20240628::Client::runSearchCaseFullText(shared_ptr<string> workspaceId, shared_ptr<RunSearchCaseFullTextRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runSearchCaseFullTextWithOptions(workspaceId, request, headers, runtime);
}

RunSearchLawQueryResponse Alibabacloud_FaRui20240628::Client::runSearchLawQueryWithOptions(shared_ptr<string> workspaceId,
                                                                                           shared_ptr<RunSearchLawQueryRequest> tmpReq,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RunSearchLawQueryShrinkRequest> request = make_shared<RunSearchLawQueryShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RunSearchLawQueryRequestFilterCondition>(tmpReq->filterCondition)) {
    request->filterConditionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filterCondition, make_shared<string>("filterCondition"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<RunSearchLawQueryRequestPageParam>(tmpReq->pageParam)) {
    request->pageParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->pageParam, make_shared<string>("pageParam"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->queryKeywords)) {
    request->queryKeywordsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->queryKeywords, make_shared<string>("queryKeywords"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<RunSearchLawQueryRequestThread>(tmpReq->thread)) {
    request->threadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->thread, make_shared<string>("thread"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("appId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterConditionShrink)) {
    body->insert(pair<string, string>("filterCondition", *request->filterConditionShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageParamShrink)) {
    body->insert(pair<string, string>("pageParam", *request->pageParamShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    body->insert(pair<string, string>("query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryKeywordsShrink)) {
    body->insert(pair<string, string>("queryKeywords", *request->queryKeywordsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->threadShrink)) {
    body->insert(pair<string, string>("thread", *request->threadShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunSearchLawQuery"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/farui/search/law/query"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunSearchLawQueryResponse(callApi(params, req, runtime));
}

RunSearchLawQueryResponse Alibabacloud_FaRui20240628::Client::runSearchLawQuery(shared_ptr<string> workspaceId, shared_ptr<RunSearchLawQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runSearchLawQueryWithOptions(workspaceId, request, headers, runtime);
}

