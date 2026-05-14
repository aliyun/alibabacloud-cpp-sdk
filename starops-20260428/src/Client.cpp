#include <darabonba/Core.hpp>
#include <alibabacloud/STAROps20260428.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
#include <darabonba/Stream.hpp>
#include <darabonba/Convert.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::STAROps20260428::Models;
namespace AlibabaCloud
{
namespace STAROps20260428
{

AlibabaCloud::STAROps20260428::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("starops", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 创建对话
 *
 * @param request CreateChatRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateChatResponse
 */
FutureGenerator<CreateChatResponse> Client::createChatWithSSE(const CreateChatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAction()) {
    body["action"] = request.getAction();
  }

  if (!!request.hasDigitalEmployeeName()) {
    body["digitalEmployeeName"] = request.getDigitalEmployeeName();
  }

  if (!!request.hasMessages()) {
    body["messages"] = request.getMessages();
  }

  if (!!request.hasThreadId()) {
    body["threadId"] = request.getThreadId();
  }

  if (!!request.hasVariables()) {
    body["variables"] = request.getVariables();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateChat"},
    {"version" , "2026-04-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/chat")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<CreateChatResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary 创建对话
 *
 * @param request CreateChatRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateChatResponse
 */
CreateChatResponse Client::createChatWithOptions(const CreateChatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAction()) {
    body["action"] = request.getAction();
  }

  if (!!request.hasDigitalEmployeeName()) {
    body["digitalEmployeeName"] = request.getDigitalEmployeeName();
  }

  if (!!request.hasMessages()) {
    body["messages"] = request.getMessages();
  }

  if (!!request.hasThreadId()) {
    body["threadId"] = request.getThreadId();
  }

  if (!!request.hasVariables()) {
    body["variables"] = request.getVariables();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateChat"},
    {"version" , "2026-04-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/chat")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateChatResponse>();
}

/**
 * @summary 创建对话
 *
 * @param request CreateChatRequest
 * @return CreateChatResponse
 */
CreateChatResponse Client::createChat(const CreateChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createChatWithOptions(request, headers, runtime);
}

/**
 * @summary 创建DigitalEmployee
 *
 * @param request CreateDigitalEmployeeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDigitalEmployeeResponse
 */
CreateDigitalEmployeeResponse Client::createDigitalEmployeeWithOptions(const CreateDigitalEmployeeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAttributes()) {
    body["attributes"] = request.getAttributes();
  }

  if (!!request.hasDefaultRule()) {
    body["defaultRule"] = request.getDefaultRule();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDisplayName()) {
    body["displayName"] = request.getDisplayName();
  }

  if (!!request.hasKnowledges()) {
    body["knowledges"] = request.getKnowledges();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasRoleArn()) {
    body["roleArn"] = request.getRoleArn();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDigitalEmployee"},
    {"version" , "2026-04-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/digital-employee")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDigitalEmployeeResponse>();
}

/**
 * @summary 创建DigitalEmployee
 *
 * @param request CreateDigitalEmployeeRequest
 * @return CreateDigitalEmployeeResponse
 */
CreateDigitalEmployeeResponse Client::createDigitalEmployee(const CreateDigitalEmployeeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDigitalEmployeeWithOptions(request, headers, runtime);
}

/**
 * @summary 创建技能
 *
 * @param request CreateDigitalEmployeeSkillRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDigitalEmployeeSkillResponse
 */
CreateDigitalEmployeeSkillResponse Client::createDigitalEmployeeSkillWithOptions(const string &name, const CreateDigitalEmployeeSkillRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDisplayName()) {
    body["displayName"] = request.getDisplayName();
  }

  if (!!request.hasEnable()) {
    body["enable"] = request.getEnable();
  }

  if (!!request.hasFiles()) {
    body["files"] = request.getFiles();
  }

  if (!!request.hasRemark()) {
    body["remark"] = request.getRemark();
  }

  if (!!request.hasSkillName()) {
    body["skillName"] = request.getSkillName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDigitalEmployeeSkill"},
    {"version" , "2026-04-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/digitalEmployee/" , Darabonba::Encode::Encoder::percentEncode(name) , "/skill")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDigitalEmployeeSkillResponse>();
}

/**
 * @summary 创建技能
 *
 * @param request CreateDigitalEmployeeSkillRequest
 * @return CreateDigitalEmployeeSkillResponse
 */
CreateDigitalEmployeeSkillResponse Client::createDigitalEmployeeSkill(const string &name, const CreateDigitalEmployeeSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDigitalEmployeeSkillWithOptions(name, request, headers, runtime);
}

/**
 * @summary 创建会话
 *
 * @param request CreateThreadRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateThreadResponse
 */
CreateThreadResponse Client::createThreadWithOptions(const string &name, const CreateThreadRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAttributes()) {
    body["attributes"] = request.getAttributes();
  }

  if (!!request.hasTitle()) {
    body["title"] = request.getTitle();
  }

  if (!!request.hasVariables()) {
    body["variables"] = request.getVariables();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateThread"},
    {"version" , "2026-04-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/digitalEmployee/" , Darabonba::Encode::Encoder::percentEncode(name) , "/thread")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateThreadResponse>();
}

/**
 * @summary 创建会话
 *
 * @param request CreateThreadRequest
 * @return CreateThreadResponse
 */
CreateThreadResponse Client::createThread(const string &name, const CreateThreadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createThreadWithOptions(name, request, headers, runtime);
}

/**
 * @summary 创建票据
 *
 * @param request CreateTicketRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTicketResponse
 */
CreateTicketResponse Client::createTicketWithOptions(const CreateTicketRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessTokenExpirationTime()) {
    query["accessTokenExpirationTime"] = request.getAccessTokenExpirationTime();
  }

  if (!!request.hasExpirationTime()) {
    query["expirationTime"] = request.getExpirationTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTicket"},
    {"version" , "2026-04-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tickets")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTicketResponse>();
}

/**
 * @summary 创建票据
 *
 * @param request CreateTicketRequest
 * @return CreateTicketResponse
 */
CreateTicketResponse Client::createTicket(const CreateTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTicketWithOptions(request, headers, runtime);
}

/**
 * @summary 删除DigitalEmployee
 *
 * @param request DeleteDigitalEmployeeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDigitalEmployeeResponse
 */
DeleteDigitalEmployeeResponse Client::deleteDigitalEmployeeWithOptions(const string &name, const DeleteDigitalEmployeeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDigitalEmployee"},
    {"version" , "2026-04-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/digital-employee/" , Darabonba::Encode::Encoder::percentEncode(name))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDigitalEmployeeResponse>();
}

/**
 * @summary 删除DigitalEmployee
 *
 * @param request DeleteDigitalEmployeeRequest
 * @return DeleteDigitalEmployeeResponse
 */
DeleteDigitalEmployeeResponse Client::deleteDigitalEmployee(const string &name, const DeleteDigitalEmployeeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDigitalEmployeeWithOptions(name, request, headers, runtime);
}

/**
 * @summary 删除技能
 *
 * @param request DeleteDigitalEmployeeSkillRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDigitalEmployeeSkillResponse
 */
DeleteDigitalEmployeeSkillResponse Client::deleteDigitalEmployeeSkillWithOptions(const string &name, const string &skillName, const DeleteDigitalEmployeeSkillRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDigitalEmployeeSkill"},
    {"version" , "2026-04-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/digitalEmployee/" , Darabonba::Encode::Encoder::percentEncode(name) , "/skill/" , Darabonba::Encode::Encoder::percentEncode(skillName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDigitalEmployeeSkillResponse>();
}

/**
 * @summary 删除技能
 *
 * @param request DeleteDigitalEmployeeSkillRequest
 * @return DeleteDigitalEmployeeSkillResponse
 */
DeleteDigitalEmployeeSkillResponse Client::deleteDigitalEmployeeSkill(const string &name, const string &skillName, const DeleteDigitalEmployeeSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDigitalEmployeeSkillWithOptions(name, skillName, request, headers, runtime);
}

/**
 * @summary 删除会话
 *
 * @param request DeleteThreadRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteThreadResponse
 */
DeleteThreadResponse Client::deleteThreadWithOptions(const string &name, const string &threadId, const DeleteThreadRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteThread"},
    {"version" , "2026-04-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/digitalEmployee/" , Darabonba::Encode::Encoder::percentEncode(name) , "/thread/" , Darabonba::Encode::Encoder::percentEncode(threadId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteThreadResponse>();
}

/**
 * @summary 删除会话
 *
 * @param request DeleteThreadRequest
 * @return DeleteThreadResponse
 */
DeleteThreadResponse Client::deleteThread(const string &name, const string &threadId, const DeleteThreadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteThreadWithOptions(name, threadId, request, headers, runtime);
}

/**
 * @summary 下载产物文件
 *
 * @param request GetArtifactRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetArtifactResponse
 */
GetArtifactResponse Client::getArtifactWithOptions(const string &name, const GetArtifactRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArtifactPath()) {
    query["artifactPath"] = request.getArtifactPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetArtifact"},
    {"version" , "2026-04-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/digitalEmployee/" , Darabonba::Encode::Encoder::percentEncode(name) , "/artifact")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "binary"}
  }).get<map<string, string>>());
  GetArtifactResponse res = GetArtifactResponse();
  json tmp = callApi(params, req, runtime);
  if (!!tmp.contains("body")) {
    shared_ptr<Darabonba::IStream> respBody = Darabonba::Stream::toReadable(tmp.value("body", Darabonba::Json()));
    res.setBody(respBody);
  }

  if (!!tmp.contains("headers")) {
    json respHeaders = json(tmp.value("headers", Darabonba::Json()));
    res.setHeaders(Utils::Utils::stringifyMapValue(respHeaders));
  }

  if (!!tmp.contains("statusCode")) {
    int32_t statusCode = Darabonba::Convert::integerVal(tmp.value("statusCode", Darabonba::Json()));
    res.setStatusCode(statusCode);
  }

  return res;
}

/**
 * @summary 下载产物文件
 *
 * @param request GetArtifactRequest
 * @return GetArtifactResponse
 */
GetArtifactResponse Client::getArtifact(const string &name, const GetArtifactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getArtifactWithOptions(name, request, headers, runtime);
}

/**
 * @summary 查询 DigitalEmployee
 *
 * @param request GetDigitalEmployeeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDigitalEmployeeResponse
 */
GetDigitalEmployeeResponse Client::getDigitalEmployeeWithOptions(const string &name, const GetDigitalEmployeeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDigitalEmployee"},
    {"version" , "2026-04-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/digital-employee/" , Darabonba::Encode::Encoder::percentEncode(name))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDigitalEmployeeResponse>();
}

/**
 * @summary 查询 DigitalEmployee
 *
 * @param request GetDigitalEmployeeRequest
 * @return GetDigitalEmployeeResponse
 */
GetDigitalEmployeeResponse Client::getDigitalEmployee(const string &name, const GetDigitalEmployeeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDigitalEmployeeWithOptions(name, request, headers, runtime);
}

/**
 * @summary 获取技能详情
 *
 * @param request GetDigitalEmployeeSkillRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDigitalEmployeeSkillResponse
 */
GetDigitalEmployeeSkillResponse Client::getDigitalEmployeeSkillWithOptions(const string &name, const string &skillName, const GetDigitalEmployeeSkillRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDigitalEmployeeSkill"},
    {"version" , "2026-04-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/digitalEmployee/" , Darabonba::Encode::Encoder::percentEncode(name) , "/skill/" , Darabonba::Encode::Encoder::percentEncode(skillName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDigitalEmployeeSkillResponse>();
}

/**
 * @summary 获取技能详情
 *
 * @param request GetDigitalEmployeeSkillRequest
 * @return GetDigitalEmployeeSkillResponse
 */
GetDigitalEmployeeSkillResponse Client::getDigitalEmployeeSkill(const string &name, const string &skillName, const GetDigitalEmployeeSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDigitalEmployeeSkillWithOptions(name, skillName, request, headers, runtime);
}

/**
 * @summary 获取会话
 *
 * @param request GetThreadRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetThreadResponse
 */
GetThreadResponse Client::getThreadWithOptions(const string &name, const string &threadId, const GetThreadRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetThread"},
    {"version" , "2026-04-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/digitalEmployee/" , Darabonba::Encode::Encoder::percentEncode(name) , "/thread/" , Darabonba::Encode::Encoder::percentEncode(threadId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetThreadResponse>();
}

/**
 * @summary 获取会话
 *
 * @param request GetThreadRequest
 * @return GetThreadResponse
 */
GetThreadResponse Client::getThread(const string &name, const string &threadId, const GetThreadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getThreadWithOptions(name, threadId, request, headers, runtime);
}

/**
 * @summary 获取会话数据
 *
 * @param request GetThreadDataRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetThreadDataResponse
 */
GetThreadDataResponse Client::getThreadDataWithOptions(const string &name, const string &threadId, const GetThreadDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetThreadData"},
    {"version" , "2026-04-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/digitalEmployee/" , Darabonba::Encode::Encoder::percentEncode(name) , "/thread/" , Darabonba::Encode::Encoder::percentEncode(threadId) , "/data")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetThreadDataResponse>();
}

/**
 * @summary 获取会话数据
 *
 * @param request GetThreadDataRequest
 * @return GetThreadDataResponse
 */
GetThreadDataResponse Client::getThreadData(const string &name, const string &threadId, const GetThreadDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getThreadDataWithOptions(name, threadId, request, headers, runtime);
}

/**
 * @summary 列出产物文件
 *
 * @param request ListArtifactsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListArtifactsResponse
 */
ListArtifactsResponse Client::listArtifactsWithOptions(const string &name, const ListArtifactsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArtifactPath()) {
    query["artifactPath"] = request.getArtifactPath();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListArtifacts"},
    {"version" , "2026-04-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/digitalEmployee/" , Darabonba::Encode::Encoder::percentEncode(name) , "/artifacts")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListArtifactsResponse>();
}

/**
 * @summary 列出产物文件
 *
 * @param request ListArtifactsRequest
 * @return ListArtifactsResponse
 */
ListArtifactsResponse Client::listArtifacts(const string &name, const ListArtifactsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listArtifactsWithOptions(name, request, headers, runtime);
}

/**
 * @summary 列出技能版本
 *
 * @param request ListDigitalEmployeeSkillVersionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDigitalEmployeeSkillVersionsResponse
 */
ListDigitalEmployeeSkillVersionsResponse Client::listDigitalEmployeeSkillVersionsWithOptions(const string &name, const string &skillName, const ListDigitalEmployeeSkillVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDigitalEmployeeSkillVersions"},
    {"version" , "2026-04-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/digitalEmployee/" , Darabonba::Encode::Encoder::percentEncode(name) , "/skill/" , Darabonba::Encode::Encoder::percentEncode(skillName) , "/versions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDigitalEmployeeSkillVersionsResponse>();
}

/**
 * @summary 列出技能版本
 *
 * @param request ListDigitalEmployeeSkillVersionsRequest
 * @return ListDigitalEmployeeSkillVersionsResponse
 */
ListDigitalEmployeeSkillVersionsResponse Client::listDigitalEmployeeSkillVersions(const string &name, const string &skillName, const ListDigitalEmployeeSkillVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDigitalEmployeeSkillVersionsWithOptions(name, skillName, request, headers, runtime);
}

/**
 * @summary 列出技能
 *
 * @param request ListDigitalEmployeeSkillsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDigitalEmployeeSkillsResponse
 */
ListDigitalEmployeeSkillsResponse Client::listDigitalEmployeeSkillsWithOptions(const string &name, const ListDigitalEmployeeSkillsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasSkillName()) {
    query["skillName"] = request.getSkillName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDigitalEmployeeSkills"},
    {"version" , "2026-04-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/digitalEmployee/" , Darabonba::Encode::Encoder::percentEncode(name) , "/skills")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDigitalEmployeeSkillsResponse>();
}

/**
 * @summary 列出技能
 *
 * @param request ListDigitalEmployeeSkillsRequest
 * @return ListDigitalEmployeeSkillsResponse
 */
ListDigitalEmployeeSkillsResponse Client::listDigitalEmployeeSkills(const string &name, const ListDigitalEmployeeSkillsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDigitalEmployeeSkillsWithOptions(name, request, headers, runtime);
}

/**
 * @summary 列出资源DigitalEmployee
 *
 * @param tmpReq ListDigitalEmployeesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDigitalEmployeesResponse
 */
ListDigitalEmployeesResponse Client::listDigitalEmployeesWithOptions(const ListDigitalEmployeesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDigitalEmployeesShrinkRequest request = ListDigitalEmployeesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "tags", "json"));
  }

  json query = {};
  if (!!request.hasDisplayName()) {
    query["displayName"] = request.getDisplayName();
  }

  if (!!request.hasEmployeeType()) {
    query["employeeType"] = request.getEmployeeType();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTagsShrink()) {
    query["tags"] = request.getTagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDigitalEmployees"},
    {"version" , "2026-04-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/digital-employee")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDigitalEmployeesResponse>();
}

/**
 * @summary 列出资源DigitalEmployee
 *
 * @param request ListDigitalEmployeesRequest
 * @return ListDigitalEmployeesResponse
 */
ListDigitalEmployeesResponse Client::listDigitalEmployees(const ListDigitalEmployeesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDigitalEmployeesWithOptions(request, headers, runtime);
}

/**
 * @summary 列出会话
 *
 * @param tmpReq ListThreadsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListThreadsResponse
 */
ListThreadsResponse Client::listThreadsWithOptions(const string &name, const ListThreadsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListThreadsShrinkRequest request = ListThreadsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilter()) {
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilter(), "filter", "json"));
  }

  json query = {};
  if (!!request.hasFilterShrink()) {
    query["filter"] = request.getFilterShrink();
  }

  if (!!request.hasIncludeMission()) {
    query["includeMission"] = request.getIncludeMission();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  if (!!request.hasThreadId()) {
    query["threadId"] = request.getThreadId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListThreads"},
    {"version" , "2026-04-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/digitalEmployee/" , Darabonba::Encode::Encoder::percentEncode(name) , "/threads")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListThreadsResponse>();
}

/**
 * @summary 列出会话
 *
 * @param request ListThreadsRequest
 * @return ListThreadsResponse
 */
ListThreadsResponse Client::listThreads(const string &name, const ListThreadsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listThreadsWithOptions(name, request, headers, runtime);
}

/**
 * @summary 更新UpdateDigitalEmployee
 *
 * @param request UpdateDigitalEmployeeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDigitalEmployeeResponse
 */
UpdateDigitalEmployeeResponse Client::updateDigitalEmployeeWithOptions(const string &name, const UpdateDigitalEmployeeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAttributes()) {
    body["attributes"] = request.getAttributes();
  }

  if (!!request.hasDefaultRule()) {
    body["defaultRule"] = request.getDefaultRule();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDisplayName()) {
    body["displayName"] = request.getDisplayName();
  }

  if (!!request.hasKnowledges()) {
    body["knowledges"] = request.getKnowledges();
  }

  if (!!request.hasRoleArn()) {
    body["roleArn"] = request.getRoleArn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDigitalEmployee"},
    {"version" , "2026-04-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/digital-employee/" , Darabonba::Encode::Encoder::percentEncode(name))},
    {"method" , "PATCH"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDigitalEmployeeResponse>();
}

/**
 * @summary 更新UpdateDigitalEmployee
 *
 * @param request UpdateDigitalEmployeeRequest
 * @return UpdateDigitalEmployeeResponse
 */
UpdateDigitalEmployeeResponse Client::updateDigitalEmployee(const string &name, const UpdateDigitalEmployeeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateDigitalEmployeeWithOptions(name, request, headers, runtime);
}

/**
 * @summary 更新技能
 *
 * @param request UpdateDigitalEmployeeSkillRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDigitalEmployeeSkillResponse
 */
UpdateDigitalEmployeeSkillResponse Client::updateDigitalEmployeeSkillWithOptions(const string &name, const string &skillName, const UpdateDigitalEmployeeSkillRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDisplayName()) {
    body["displayName"] = request.getDisplayName();
  }

  if (!!request.hasEnable()) {
    body["enable"] = request.getEnable();
  }

  if (!!request.hasFiles()) {
    body["files"] = request.getFiles();
  }

  if (!!request.hasRemark()) {
    body["remark"] = request.getRemark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDigitalEmployeeSkill"},
    {"version" , "2026-04-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/digitalEmployee/" , Darabonba::Encode::Encoder::percentEncode(name) , "/skill/" , Darabonba::Encode::Encoder::percentEncode(skillName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDigitalEmployeeSkillResponse>();
}

/**
 * @summary 更新技能
 *
 * @param request UpdateDigitalEmployeeSkillRequest
 * @return UpdateDigitalEmployeeSkillResponse
 */
UpdateDigitalEmployeeSkillResponse Client::updateDigitalEmployeeSkill(const string &name, const string &skillName, const UpdateDigitalEmployeeSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateDigitalEmployeeSkillWithOptions(name, skillName, request, headers, runtime);
}

/**
 * @summary 更新会话
 *
 * @param request UpdateThreadRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateThreadResponse
 */
UpdateThreadResponse Client::updateThreadWithOptions(const string &name, const string &threadId, const UpdateThreadRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAttributes()) {
    body["attributes"] = request.getAttributes();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.getStatus();
  }

  if (!!request.hasTitle()) {
    body["title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateThread"},
    {"version" , "2026-04-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/digitalEmployee/" , Darabonba::Encode::Encoder::percentEncode(name) , "/thread/" , Darabonba::Encode::Encoder::percentEncode(threadId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateThreadResponse>();
}

/**
 * @summary 更新会话
 *
 * @param request UpdateThreadRequest
 * @return UpdateThreadResponse
 */
UpdateThreadResponse Client::updateThread(const string &name, const string &threadId, const UpdateThreadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateThreadWithOptions(name, threadId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace STAROps20260428