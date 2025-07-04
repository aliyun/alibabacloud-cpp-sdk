// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/fa_rui_20240628.hpp>
#include <alibabacloud/credential.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/file_form.hpp>
#include <darabonba/util.hpp>
#include <darabonba/xml.hpp>
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

map<string, boost::any> Alibabacloud_FaRui20240628::Client::_postOSSObject(shared_ptr<string> bucketName, shared_ptr<map<string, boost::any>> data) {
  shared_ptr<Darabonba::Request> request_ = make_shared<Darabonba::Request>();
  shared_ptr<map<string, boost::any>> form = make_shared<map<string, boost::any>>(Darabonba_Util::Client::assertAsMap(data));
  shared_ptr<string> boundary = make_shared<string>(Darabonba_FileForm::Client::getBoundary());
  shared_ptr<string> host = make_shared<string>(Darabonba_Util::Client::assertAsString(make_shared<boost::any>((*form)["host"])));
  request_->protocol = "HTTPS";
  request_->method = "POST";
  request_->pathname = string("/");
  request_->headers = {
    {"host", !host ? string() : *host},
    {"date", Darabonba_Util::Client::getDateUTCString()},
    {"user-agent", Darabonba_Util::Client::getUserAgent(make_shared<string>(""))}
  };
  request_->headers.insert(pair<string, string>("content-type", string("multipart/form-data; boundary=") + string(*boundary)));
  request_->body = Darabonba::Converter::toStream(Darabonba_FileForm::Client::toFileForm(form, boundary));
  shared_ptr<Darabonba::Request> _lastRequest = request_;
  shared_ptr<Darabonba::Response> response_ = make_shared<Darabonba::Response>(Darabonba::Core::doAction(request_));
  shared_ptr<map<string, boost::any>> respMap;
  shared_ptr<string> bodyStr = make_shared<string>(Darabonba_Util::Client::readAsString(response_->body));
  if (Darabonba_Util::Client::is4xx(make_shared<int>(response_->statusCode)) || Darabonba_Util::Client::is5xx(make_shared<int>(response_->statusCode))) {
    respMap = make_shared<map<string, boost::any>>(Darabonba_XML::Client::parseXml(bodyStr, nullptr));
    shared_ptr<map<string, boost::any>> err = make_shared<map<string, boost::any>>(Darabonba_Util::Client::assertAsMap(make_shared<boost::any>((*respMap)["Error"])));
    BOOST_THROW_EXCEPTION(Darabonba::Error(map<string, boost::any>({
      {"code", (*err)["Code"]},
      {"message", (*err)["Message"]},
      {"data", boost::any(map<string, boost::any>({
        {"httpCode", boost::any(response_->statusCode)},
        {"requestId", (*err)["RequestId"]},
        {"hostId", (*err)["HostId"]}
      }))}
    })));
  }
  respMap = make_shared<map<string, boost::any>>(Darabonba_XML::Client::parseXml(bodyStr, nullptr));
  return Darabonba::Converter::merge(map<string, boost::any>(), !respMap ? map<string, boost::any>() : *respMap);
}

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
  shared_ptr<Alibabacloud_Credential::CredentialModel> credentialModel;
  if (Darabonba_Util::Client::isUnset<Alibabacloud_Credential::Client>(_credential)) {
    BOOST_THROW_EXCEPTION(Darabonba::Error(map<string, string>({
      {"code", "InvalidCredentials"},
      {"message", "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    })));
  }
  credentialModel = make_shared<Alibabacloud_Credential::CredentialModel>(_credential->getCredential());
  shared_ptr<string> accessKeyId = credentialModel->accessKeyId;
  shared_ptr<string> accessKeySecret = credentialModel->accessKeySecret;
  shared_ptr<string> securityToken = credentialModel->securityToken;
  shared_ptr<string> credentialType = credentialModel->type;
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
  shared_ptr<Alibabacloud_OpenApi::Client> authClient = make_shared<Alibabacloud_OpenApi::Client>(authConfig);
  shared_ptr<map<string, string>> authRequest = make_shared<map<string, string>>(map<string, string>({
    {"Product", "FaRui"},
    {"RegionId", !_regionId ? string() : *_regionId}
  })
);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> authReq = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(authRequest))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> authParams = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AuthorizeFileUpload"))},
    {"version", boost::any(string("2019-12-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  shared_ptr<map<string, boost::any>> authResponse = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<map<string, boost::any>> ossHeader = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<map<string, boost::any>> tmpBody = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<bool> useAccelerate = make_shared<bool>(false);
  shared_ptr<map<string, string>> authResponseBody = make_shared<map<string, string>>(map<string, string>());
  shared_ptr<CreateTextFileRequest> createTextFileReq = make_shared<CreateTextFileRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, createTextFileReq);
  if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(request->textFileUrlObject)) {
    shared_ptr<boost::any> tmpResp0 = make_shared<boost::any>(authClient->callApi(authParams, authReq, runtime));
    authResponse = make_shared<map<string, boost::any>>(Darabonba_Util::Client::assertAsMap(tmpResp0));
    tmpBody = make_shared<map<string, boost::any>>(Darabonba_Util::Client::assertAsMap(make_shared<boost::any>((*authResponse)["body"])));
    useAccelerate = make_shared<bool>(Darabonba_Util::Client::assertAsBoolean(make_shared<boost::any>((*tmpBody)["UseAccelerate"])));
    authResponseBody = make_shared<map<string, string>>(Darabonba_Util::Client::stringifyMapValue(tmpBody));
    fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
      {"filename", boost::any(string((*authResponseBody)["ObjectKey"]))},
      {"content", !request->textFileUrlObject ? boost::any() : boost::any(*request->textFileUrlObject)},
      {"contentType", boost::any(string(""))}
    }));
    ossHeader = make_shared<map<string, boost::any>>(map<string, boost::any>({
      {"host", boost::any(string((*authResponseBody)["Bucket"]) + string(".") + string(Alibabacloud_OpenApiUtil::Client::getEndpoint(make_shared<string>((*authResponseBody)["Endpoint"]), useAccelerate, _endpointType)))},
      {"OSSAccessKeyId", boost::any(string((*authResponseBody)["AccessKeyId"]))},
      {"policy", boost::any(string((*authResponseBody)["EncodedPolicy"]))},
      {"Signature", boost::any(string((*authResponseBody)["Signature"]))},
      {"key", boost::any(string((*authResponseBody)["ObjectKey"]))},
      {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
      {"success_action_status", boost::any(string("201"))}
    })
);
    _postOSSObject(make_shared<string>((*authResponseBody)["Bucket"]), ossHeader);
    createTextFileReq->textFileUrl = make_shared<string>(string("http://") + string((*authResponseBody)["Bucket"]) + string(".") + string((*authResponseBody)["Endpoint"]) + string("/") + string((*authResponseBody)["ObjectKey"]));
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
  if (!Darabonba_Util::Client::isUnset<RunLegalAdviceConsultationRequestExtra>(tmpReq->extra)) {
    request->extraShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extra, make_shared<string>("extra"), make_shared<string>("json")));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->extraShrink)) {
    body->insert(pair<string, string>("extra", *request->extraShrink));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->referLevel)) {
    body->insert(pair<string, string>("referLevel", *request->referLevel));
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

