#include <darabonba/Core.hpp>
#include <alibabacloud/FaRui20240628.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
#include <alibabacloud/credential/Credential.hpp>
#include <darabonba/http/FileField.hpp>
#include <darabonba/Convert.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace Darabonba::Http;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using namespace AlibabaCloud::Credential::Models;
using namespace AlibabaCloud::OpenApi::Exceptions;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::FaRui20240628::Models;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace FaRui20240628
{

AlibabaCloud::FaRui20240628::Client::Client(AlibabaCloud::OpenApi::Utils::Models::Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("farui", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}



string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @summary 上传合同文件
 *
 * @param request CreateTextFileRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTextFileResponse
 */
CreateTextFileResponse Client::createTextFileWithOptions(const string &WorkspaceId, const CreateTextFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasContractId()) {
    body["ContractId"] = request.contractId();
  }

  if (!!request.hasCreateTime()) {
    body["CreateTime"] = request.createTime();
  }

  if (!!request.hasTextFileName()) {
    body["TextFileName"] = request.textFileName();
  }

  if (!!request.hasTextFileUrl()) {
    body["TextFileUrl"] = request.textFileUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTextFile"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/data/textFile")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTextFileResponse>();
}

/**
 * @summary 上传合同文件
 *
 * @param request CreateTextFileRequest
 * @return CreateTextFileResponse
 */
CreateTextFileResponse Client::createTextFile(const string &WorkspaceId, const CreateTextFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTextFileWithOptions(WorkspaceId, request, headers, runtime);
}

CreateTextFileResponse Client::createTextFileAdvance(const string &WorkspaceId, const CreateTextFileAdvanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  // Step 0: init client
  if (Darabonba::isNull(_credential)) {
    throw ClientException(json({
      {"code" , "InvalidCredentials"},
      {"message" , "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    }).get<map<string, string>>());
  }

  CredentialModel credentialModel = _credential->getCredential();
  string accessKeyId = credentialModel.accessKeyId();
  string accessKeySecret = credentialModel.accessKeySecret();
  string securityToken = credentialModel.securityToken();
  string credentialType = credentialModel.type();
  string openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba::isNull(openPlatformEndpoint) || openPlatformEndpoint == "") {
    openPlatformEndpoint = "openplatform.aliyuncs.com";
  }

  if (Darabonba::isNull(credentialType)) {
    credentialType = "access_key";
  }

  AlibabaCloud::OpenApi::Utils::Models::Config authConfig = AlibabaCloud::OpenApi::Utils::Models::Config(json({
    {"accessKeyId" , accessKeyId},
    {"accessKeySecret" , accessKeySecret},
    {"securityToken" , securityToken},
    {"type" , credentialType},
    {"endpoint" , openPlatformEndpoint},
    {"protocol" , _protocol},
    {"regionId" , _regionId}
  }).get<map<string, string>>());
  shared_ptr<OpenApiClient> authClient = make_shared<OpenApiClient>(authConfig);
  map<string, string> authRequest = json({
    {"Product" , "FaRui"},
    {"RegionId" , _regionId}
  }).get<map<string, string>>();
  OpenApiRequest authReq = OpenApiRequest(json({
    {"query" , Utils::Utils::query(authRequest)}
  }).get<map<string, map<string, string>>>());
  Params authParams = Params(json({
    {"action" , "AuthorizeFileUpload"},
    {"version" , "2019-12-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  json authResponse = {};
  Darabonba::Http::FileField fileObj = FileField();
  json ossHeader = {};
  json tmpBody = {};
  bool useAccelerate = false;
  map<string, string> authResponseBody = {};
  CreateTextFileRequest createTextFileReq = CreateTextFileRequest();
  Utils::Utils::convert(request, createTextFileReq);
  if (!!request.hasTextFileUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.textFileUrlObject()},
      {"contentType" , ""}
    }));
    ossHeader = json({
      {"host" , DARA_STRING_TEMPLATE("" , authResponseBody.at("Bucket") , "." , Utils::Utils::getEndpoint(authResponseBody.at("Endpoint"), useAccelerate, _endpointType))},
      {"OSSAccessKeyId" , authResponseBody.at("AccessKeyId")},
      {"policy" , authResponseBody.at("EncodedPolicy")},
      {"Signature" , authResponseBody.at("Signature")},
      {"key" , authResponseBody.at("ObjectKey")},
      {"file" , fileObj},
      {"success_action_status" , "201"}
    });
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader, runtime);
    createTextFileReq.setTextFileUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  CreateTextFileResponse createTextFileResp = createTextFileWithOptions(WorkspaceId, createTextFileReq, headers, runtime);
  return createTextFileResp;
}

/**
 * @summary 合同抽取
 *
 * @param tmpReq RunContractExtractRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunContractExtractResponse
 */
RunContractExtractResponse Client::runContractExtractWithOptions(const string &workspaceId, const RunContractExtractRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunContractExtractShrinkRequest request = RunContractExtractShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFieldsToExtract()) {
    request.setFieldsToExtractShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.fieldsToExtract(), "fieldsToExtract", "json"));
  }

  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.regionId();
  }

  json body = {};
  if (!!request.hasAppId()) {
    body["appId"] = request.appId();
  }

  if (!!request.hasFieldsToExtractShrink()) {
    body["fieldsToExtract"] = request.fieldsToExtractShrink();
  }

  if (!!request.hasFileOssUrl()) {
    body["fileOssUrl"] = request.fileOssUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunContractExtract"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/pop/contract/extraction")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunContractExtractResponse>();
}

/**
 * @summary 合同抽取
 *
 * @param request RunContractExtractRequest
 * @return RunContractExtractResponse
 */
RunContractExtractResponse Client::runContractExtract(const string &workspaceId, const RunContractExtractRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runContractExtractWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 生成合同审查结果
 *
 * @param tmpReq RunContractResultGenerationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunContractResultGenerationResponse
 */
FutrueGenerator<RunContractResultGenerationResponse> Client::runContractResultGenerationWithSSE(const string &workspaceId, const RunContractResultGenerationRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunContractResultGenerationShrinkRequest request = RunContractResultGenerationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAssistant()) {
    request.setAssistantShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.assistant(), "assistant", "json"));
  }

  json body = {};
  if (!!request.hasAppId()) {
    body["appId"] = request.appId();
  }

  if (!!request.hasAssistantShrink()) {
    body["assistant"] = request.assistantShrink();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.stream();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunContractResultGeneration"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/farui/contract/result/genarate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutrueGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.event().data()));
json     __retrun = json(json({
      {"statusCode" , resp.statusCode()},
      {"headers" , resp.headers()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.event().id()},
          {"Message" , resp.event().event()}
      )}
    })).get<RunContractResultGenerationResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 生成合同审查结果
 *
 * @param tmpReq RunContractResultGenerationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunContractResultGenerationResponse
 */
RunContractResultGenerationResponse Client::runContractResultGenerationWithOptions(const string &workspaceId, const RunContractResultGenerationRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunContractResultGenerationShrinkRequest request = RunContractResultGenerationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAssistant()) {
    request.setAssistantShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.assistant(), "assistant", "json"));
  }

  json body = {};
  if (!!request.hasAppId()) {
    body["appId"] = request.appId();
  }

  if (!!request.hasAssistantShrink()) {
    body["assistant"] = request.assistantShrink();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.stream();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunContractResultGeneration"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/farui/contract/result/genarate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunContractResultGenerationResponse>();
}

/**
 * @summary 生成合同审查结果
 *
 * @param request RunContractResultGenerationRequest
 * @return RunContractResultGenerationResponse
 */
RunContractResultGenerationResponse Client::runContractResultGeneration(const string &workspaceId, const RunContractResultGenerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runContractResultGenerationWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 生成合同审查规则
 *
 * @param tmpReq RunContractRuleGenerationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunContractRuleGenerationResponse
 */
FutrueGenerator<RunContractRuleGenerationResponse> Client::runContractRuleGenerationWithSSE(const string &workspaceId, const RunContractRuleGenerationRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunContractRuleGenerationShrinkRequest request = RunContractRuleGenerationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAssistant()) {
    request.setAssistantShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.assistant(), "assistant", "json"));
  }

  json body = {};
  if (!!request.hasAppId()) {
    body["appId"] = request.appId();
  }

  if (!!request.hasAssistantShrink()) {
    body["assistant"] = request.assistantShrink();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.stream();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunContractRuleGeneration"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/farui/contract/rule/genarate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutrueGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.event().data()));
json     __retrun = json(json({
      {"statusCode" , resp.statusCode()},
      {"headers" , resp.headers()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.event().id()},
          {"Message" , resp.event().event()}
      )}
    })).get<RunContractRuleGenerationResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 生成合同审查规则
 *
 * @param tmpReq RunContractRuleGenerationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunContractRuleGenerationResponse
 */
RunContractRuleGenerationResponse Client::runContractRuleGenerationWithOptions(const string &workspaceId, const RunContractRuleGenerationRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunContractRuleGenerationShrinkRequest request = RunContractRuleGenerationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAssistant()) {
    request.setAssistantShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.assistant(), "assistant", "json"));
  }

  json body = {};
  if (!!request.hasAppId()) {
    body["appId"] = request.appId();
  }

  if (!!request.hasAssistantShrink()) {
    body["assistant"] = request.assistantShrink();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.stream();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunContractRuleGeneration"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/farui/contract/rule/genarate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunContractRuleGenerationResponse>();
}

/**
 * @summary 生成合同审查规则
 *
 * @param request RunContractRuleGenerationRequest
 * @return RunContractRuleGenerationResponse
 */
RunContractRuleGenerationResponse Client::runContractRuleGeneration(const string &workspaceId, const RunContractRuleGenerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runContractRuleGenerationWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 法律咨询
 *
 * @param tmpReq RunLegalAdviceConsultationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunLegalAdviceConsultationResponse
 */
FutrueGenerator<RunLegalAdviceConsultationResponse> Client::runLegalAdviceConsultationWithSSE(const string &workspaceId, const RunLegalAdviceConsultationRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunLegalAdviceConsultationShrinkRequest request = RunLegalAdviceConsultationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAssistant()) {
    request.setAssistantShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.assistant(), "assistant", "json"));
  }

  if (!!tmpReq.hasExtra()) {
    request.setExtraShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.extra(), "extra", "json"));
  }

  if (!!tmpReq.hasThread()) {
    request.setThreadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.thread(), "thread", "json"));
  }

  json body = {};
  if (!!request.hasAppId()) {
    body["appId"] = request.appId();
  }

  if (!!request.hasAssistantShrink()) {
    body["assistant"] = request.assistantShrink();
  }

  if (!!request.hasExtraShrink()) {
    body["extra"] = request.extraShrink();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.stream();
  }

  if (!!request.hasThreadShrink()) {
    body["thread"] = request.threadShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunLegalAdviceConsultation"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/farui/legalAdvice/consult")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutrueGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.event().data()));
json     __retrun = json(json({
      {"statusCode" , resp.statusCode()},
      {"headers" , resp.headers()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.event().id()},
          {"Message" , resp.event().event()}
      )}
    })).get<RunLegalAdviceConsultationResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 法律咨询
 *
 * @param tmpReq RunLegalAdviceConsultationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunLegalAdviceConsultationResponse
 */
RunLegalAdviceConsultationResponse Client::runLegalAdviceConsultationWithOptions(const string &workspaceId, const RunLegalAdviceConsultationRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunLegalAdviceConsultationShrinkRequest request = RunLegalAdviceConsultationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAssistant()) {
    request.setAssistantShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.assistant(), "assistant", "json"));
  }

  if (!!tmpReq.hasExtra()) {
    request.setExtraShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.extra(), "extra", "json"));
  }

  if (!!tmpReq.hasThread()) {
    request.setThreadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.thread(), "thread", "json"));
  }

  json body = {};
  if (!!request.hasAppId()) {
    body["appId"] = request.appId();
  }

  if (!!request.hasAssistantShrink()) {
    body["assistant"] = request.assistantShrink();
  }

  if (!!request.hasExtraShrink()) {
    body["extra"] = request.extraShrink();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.stream();
  }

  if (!!request.hasThreadShrink()) {
    body["thread"] = request.threadShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunLegalAdviceConsultation"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/farui/legalAdvice/consult")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunLegalAdviceConsultationResponse>();
}

/**
 * @summary 法律咨询
 *
 * @param request RunLegalAdviceConsultationRequest
 * @return RunLegalAdviceConsultationResponse
 */
RunLegalAdviceConsultationResponse Client::runLegalAdviceConsultation(const string &workspaceId, const RunLegalAdviceConsultationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runLegalAdviceConsultationWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 案例检索
 *
 * @param tmpReq RunSearchCaseFullTextRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunSearchCaseFullTextResponse
 */
RunSearchCaseFullTextResponse Client::runSearchCaseFullTextWithOptions(const string &workspaceId, const RunSearchCaseFullTextRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunSearchCaseFullTextShrinkRequest request = RunSearchCaseFullTextShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilterCondition()) {
    request.setFilterConditionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.filterCondition(), "filterCondition", "json"));
  }

  if (!!tmpReq.hasPageParam()) {
    request.setPageParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.pageParam(), "pageParam", "json"));
  }

  if (!!tmpReq.hasQueryKeywords()) {
    request.setQueryKeywordsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.queryKeywords(), "queryKeywords", "json"));
  }

  if (!!tmpReq.hasSortKeyAndDirection()) {
    request.setSortKeyAndDirectionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sortKeyAndDirection(), "sortKeyAndDirection", "json"));
  }

  if (!!tmpReq.hasThread()) {
    request.setThreadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.thread(), "thread", "json"));
  }

  json body = {};
  if (!!request.hasAppId()) {
    body["appId"] = request.appId();
  }

  if (!!request.hasFilterConditionShrink()) {
    body["filterCondition"] = request.filterConditionShrink();
  }

  if (!!request.hasPageParamShrink()) {
    body["pageParam"] = request.pageParamShrink();
  }

  if (!!request.hasQuery()) {
    body["query"] = request.query();
  }

  if (!!request.hasQueryKeywordsShrink()) {
    body["queryKeywords"] = request.queryKeywordsShrink();
  }

  if (!!request.hasReferLevel()) {
    body["referLevel"] = request.referLevel();
  }

  if (!!request.hasSortKeyAndDirectionShrink()) {
    body["sortKeyAndDirection"] = request.sortKeyAndDirectionShrink();
  }

  if (!!request.hasThreadShrink()) {
    body["thread"] = request.threadShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunSearchCaseFullText"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/farui/search/case/fulltext")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunSearchCaseFullTextResponse>();
}

/**
 * @summary 案例检索
 *
 * @param request RunSearchCaseFullTextRequest
 * @return RunSearchCaseFullTextResponse
 */
RunSearchCaseFullTextResponse Client::runSearchCaseFullText(const string &workspaceId, const RunSearchCaseFullTextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runSearchCaseFullTextWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 法规搜索
 *
 * @param tmpReq RunSearchLawQueryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunSearchLawQueryResponse
 */
RunSearchLawQueryResponse Client::runSearchLawQueryWithOptions(const string &workspaceId, const RunSearchLawQueryRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunSearchLawQueryShrinkRequest request = RunSearchLawQueryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilterCondition()) {
    request.setFilterConditionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.filterCondition(), "filterCondition", "json"));
  }

  if (!!tmpReq.hasPageParam()) {
    request.setPageParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.pageParam(), "pageParam", "json"));
  }

  if (!!tmpReq.hasQueryKeywords()) {
    request.setQueryKeywordsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.queryKeywords(), "queryKeywords", "json"));
  }

  if (!!tmpReq.hasThread()) {
    request.setThreadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.thread(), "thread", "json"));
  }

  json body = {};
  if (!!request.hasAppId()) {
    body["appId"] = request.appId();
  }

  if (!!request.hasFilterConditionShrink()) {
    body["filterCondition"] = request.filterConditionShrink();
  }

  if (!!request.hasPageParamShrink()) {
    body["pageParam"] = request.pageParamShrink();
  }

  if (!!request.hasQuery()) {
    body["query"] = request.query();
  }

  if (!!request.hasQueryKeywordsShrink()) {
    body["queryKeywords"] = request.queryKeywordsShrink();
  }

  if (!!request.hasThreadShrink()) {
    body["thread"] = request.threadShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunSearchLawQuery"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/farui/search/law/query")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunSearchLawQueryResponse>();
}

/**
 * @summary 法规搜索
 *
 * @param request RunSearchLawQueryRequest
 * @return RunSearchLawQueryResponse
 */
RunSearchLawQueryResponse Client::runSearchLawQuery(const string &workspaceId, const RunSearchLawQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runSearchLawQueryWithOptions(workspaceId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace FaRui20240628