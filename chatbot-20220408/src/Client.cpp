#include <darabonba/Core.hpp>
#include <alibabacloud/Chatbot20220408.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::Chatbot20220408::Models;
namespace AlibabaCloud
{
namespace Chatbot20220408
{

AlibabaCloud::Chatbot20220408::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("chatbot", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Apply for Streaming Gateway AccessToken
 *
 * @param request ApplyForStreamAccessTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyForStreamAccessTokenResponse
 */
ApplyForStreamAccessTokenResponse Client::applyForStreamAccessTokenWithOptions(const ApplyForStreamAccessTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApplyForStreamAccessToken"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyForStreamAccessTokenResponse>();
}

/**
 * @summary Apply for Streaming Gateway AccessToken
 *
 * @param request ApplyForStreamAccessTokenRequest
 * @return ApplyForStreamAccessTokenResponse
 */
ApplyForStreamAccessTokenResponse Client::applyForStreamAccessToken(const ApplyForStreamAccessTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyForStreamAccessTokenWithOptions(request, runtime);
}

/**
 * @summary 会话-联想API
 *
 * @param tmpReq AssociateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateResponse
 */
AssociateResponse Client::associateWithOptions(const AssociateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AssociateShrinkRequest request = AssociateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPerspective()) {
    request.setPerspectiveShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPerspective(), "Perspective", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPerspectiveShrink()) {
    query["Perspective"] = request.getPerspectiveShrink();
  }

  if (!!request.hasRecommendNum()) {
    query["RecommendNum"] = request.getRecommendNum();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasUtterance()) {
    query["Utterance"] = request.getUtterance();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Associate"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateResponse>();
}

/**
 * @summary 会话-联想API
 *
 * @param request AssociateRequest
 * @return AssociateResponse
 */
AssociateResponse Client::associate(const AssociateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateWithOptions(request, runtime);
}

/**
 * @summary 获取欢迎语
 *
 * @param request BeginSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BeginSessionResponse
 */
BeginSessionResponse Client::beginSessionWithOptions(const BeginSessionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSandBox()) {
    body["SandBox"] = request.getSandBox();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasVendorParam()) {
    body["VendorParam"] = request.getVendorParam();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BeginSession"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BeginSessionResponse>();
}

/**
 * @summary 获取欢迎语
 *
 * @param request BeginSessionRequest
 * @return BeginSessionResponse
 */
BeginSessionResponse Client::beginSession(const BeginSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return beginSessionWithOptions(request, runtime);
}

/**
 * @summary 取消对应对话
 *
 * @param request CancelChatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelChatResponse
 */
CancelChatResponse Client::cancelChatWithOptions(const CancelChatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgentKey()) {
    body["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasAnswer()) {
    body["Answer"] = request.getAnswer();
  }

  if (!!request.hasChatId()) {
    body["ChatId"] = request.getChatId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CancelChat"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelChatResponse>();
}

/**
 * @summary 取消对应对话
 *
 * @param request CancelChatRequest
 * @return CancelChatResponse
 */
CancelChatResponse Client::cancelChat(const CancelChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelChatWithOptions(request, runtime);
}

/**
 * @summary 取消机器人发布
 *
 * @param request CancelInstancePublishTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelInstancePublishTaskResponse
 */
CancelInstancePublishTaskResponse Client::cancelInstancePublishTaskWithOptions(const CancelInstancePublishTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelInstancePublishTask"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelInstancePublishTaskResponse>();
}

/**
 * @summary 取消机器人发布
 *
 * @param request CancelInstancePublishTaskRequest
 * @return CancelInstancePublishTaskResponse
 */
CancelInstancePublishTaskResponse Client::cancelInstancePublishTask(const CancelInstancePublishTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelInstancePublishTaskWithOptions(request, runtime);
}

/**
 * @summary Cancel Publishing Task
 *
 * @param request CancelPublishTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelPublishTaskResponse
 */
CancelPublishTaskResponse Client::cancelPublishTaskWithOptions(const CancelPublishTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelPublishTask"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelPublishTaskResponse>();
}

/**
 * @summary Cancel Publishing Task
 *
 * @param request CancelPublishTaskRequest
 * @return CancelPublishTaskResponse
 */
CancelPublishTaskResponse Client::cancelPublishTask(const CancelPublishTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelPublishTaskWithOptions(request, runtime);
}

/**
 * @summary 会话API
 *
 * @param tmpReq ChatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatResponse
 */
ChatResponse Client::chatWithOptions(const ChatRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ChatShrinkRequest request = ChatShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPerspective()) {
    request.setPerspectiveShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPerspective(), "Perspective", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIntentName()) {
    query["IntentName"] = request.getIntentName();
  }

  if (!!request.hasKnowledgeId()) {
    query["KnowledgeId"] = request.getKnowledgeId();
  }

  if (!!request.hasPerspectiveShrink()) {
    query["Perspective"] = request.getPerspectiveShrink();
  }

  if (!!request.hasSandBox()) {
    query["SandBox"] = request.getSandBox();
  }

  if (!!request.hasSenderId()) {
    query["SenderId"] = request.getSenderId();
  }

  if (!!request.hasSenderNick()) {
    query["SenderNick"] = request.getSenderNick();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasUtterance()) {
    query["Utterance"] = request.getUtterance();
  }

  if (!!request.hasVendorParam()) {
    query["VendorParam"] = request.getVendorParam();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Chat"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatResponse>();
}

/**
 * @summary 会话API
 *
 * @param request ChatRequest
 * @return ChatResponse
 */
ChatResponse Client::chat(const ChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatWithOptions(request, runtime);
}

/**
 * @summary 继续机器人发布
 *
 * @param request ContinueInstancePublishTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ContinueInstancePublishTaskResponse
 */
ContinueInstancePublishTaskResponse Client::continueInstancePublishTaskWithOptions(const ContinueInstancePublishTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ContinueInstancePublishTask"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ContinueInstancePublishTaskResponse>();
}

/**
 * @summary 继续机器人发布
 *
 * @param request ContinueInstancePublishTaskRequest
 * @return ContinueInstancePublishTaskResponse
 */
ContinueInstancePublishTaskResponse Client::continueInstancePublishTask(const ContinueInstancePublishTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return continueInstancePublishTaskWithOptions(request, runtime);
}

/**
 * @summary Create Category
 *
 * @param request CreateCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCategoryResponse
 */
CreateCategoryResponse Client::createCategoryWithOptions(const CreateCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasBizCode()) {
    body["BizCode"] = request.getBizCode();
  }

  if (!!request.hasKnowledgeType()) {
    body["KnowledgeType"] = request.getKnowledgeType();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasParentCategoryId()) {
    body["ParentCategoryId"] = request.getParentCategoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateCategory"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCategoryResponse>();
}

/**
 * @summary Create Category
 *
 * @param request CreateCategoryRequest
 * @return CreateCategoryResponse
 */
CreateCategoryResponse Client::createCategory(const CreateCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCategoryWithOptions(request, runtime);
}

/**
 * @summary Create FAQ Connection Question
 *
 * @param request CreateConnQuestionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateConnQuestionResponse
 */
CreateConnQuestionResponse Client::createConnQuestionWithOptions(const CreateConnQuestionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasConnQuestionId()) {
    body["ConnQuestionId"] = request.getConnQuestionId();
  }

  if (!!request.hasKnowledgeId()) {
    body["KnowledgeId"] = request.getKnowledgeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateConnQuestion"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateConnQuestionResponse>();
}

/**
 * @summary Create FAQ Connection Question
 *
 * @param request CreateConnQuestionRequest
 * @return CreateConnQuestionResponse
 */
CreateConnQuestionResponse Client::createConnQuestion(const CreateConnQuestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createConnQuestionWithOptions(request, runtime);
}

/**
 * @summary 实体-创建
 *
 * @param request CreateDSEntityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDSEntityResponse
 */
CreateDSEntityResponse Client::createDSEntityWithOptions(const CreateDSEntityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasEntityName()) {
    query["EntityName"] = request.getEntityName();
  }

  if (!!request.hasEntityType()) {
    query["EntityType"] = request.getEntityType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDSEntity"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDSEntityResponse>();
}

/**
 * @summary 实体-创建
 *
 * @param request CreateDSEntityRequest
 * @return CreateDSEntityResponse
 */
CreateDSEntityResponse Client::createDSEntity(const CreateDSEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDSEntityWithOptions(request, runtime);
}

/**
 * @summary 实体成员-创建
 *
 * @param tmpReq CreateDSEntityValueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDSEntityValueResponse
 */
CreateDSEntityValueResponse Client::createDSEntityValueWithOptions(const CreateDSEntityValueRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDSEntityValueShrinkRequest request = CreateDSEntityValueShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSynonyms()) {
    request.setSynonymsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSynonyms(), "Synonyms", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.getEntityId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  json body = {};
  if (!!request.hasSynonymsShrink()) {
    body["Synonyms"] = request.getSynonymsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDSEntityValue"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDSEntityValueResponse>();
}

/**
 * @summary 实体成员-创建
 *
 * @param request CreateDSEntityValueRequest
 * @return CreateDSEntityValueResponse
 */
CreateDSEntityValueResponse Client::createDSEntityValue(const CreateDSEntityValueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDSEntityValueWithOptions(request, runtime);
}

/**
 * @summary Create Document
 *
 * @param tmpReq CreateDocRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDocResponse
 */
CreateDocResponse Client::createDocWithOptions(const CreateDocRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDocShrinkRequest request = CreateDocShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDocMetadata()) {
    request.setDocMetadataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDocMetadata(), "DocMetadata", "json"));
  }

  if (!!tmpReq.hasTagIds()) {
    request.setTagIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTagIds(), "TagIds", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasConfig()) {
    query["Config"] = request.getConfig();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasDocMetadataShrink()) {
    query["DocMetadata"] = request.getDocMetadataShrink();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasMeta()) {
    query["Meta"] = request.getMeta();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasTagIdsShrink()) {
    query["TagIds"] = request.getTagIdsShrink();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.getUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDoc"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDocResponse>();
}

/**
 * @summary Create Document
 *
 * @param request CreateDocRequest
 * @return CreateDocResponse
 */
CreateDocResponse Client::createDoc(const CreateDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDocWithOptions(request, runtime);
}

/**
 * @summary New FAQ
 *
 * @param tmpReq CreateFaqRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFaqResponse
 */
CreateFaqResponse Client::createFaqWithOptions(const CreateFaqRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateFaqShrinkRequest request = CreateFaqShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTagIdList()) {
    request.setTagIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTagIdList(), "TagIdList", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasCategoryId()) {
    body["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.getEndDate();
  }

  if (!!request.hasSolutionContent()) {
    body["SolutionContent"] = request.getSolutionContent();
  }

  if (!!request.hasSolutionType()) {
    body["SolutionType"] = request.getSolutionType();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.getStartDate();
  }

  if (!!request.hasTagIdListShrink()) {
    body["TagIdList"] = request.getTagIdListShrink();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateFaq"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFaqResponse>();
}

/**
 * @summary New FAQ
 *
 * @param request CreateFaqRequest
 * @return CreateFaqResponse
 */
CreateFaqResponse Client::createFaq(const CreateFaqRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFaqWithOptions(request, runtime);
}

/**
 * @summary 机器人-创建
 *
 * @param request CreateInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstanceWithOptions(const CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasIntroduction()) {
    query["Introduction"] = request.getIntroduction();
  }

  if (!!request.hasLanguageCode()) {
    query["LanguageCode"] = request.getLanguageCode();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRobotType()) {
    query["RobotType"] = request.getRobotType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateInstance"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceResponse>();
}

/**
 * @summary 机器人-创建
 *
 * @param request CreateInstanceRequest
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstance(const CreateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstanceWithOptions(request, runtime);
}

/**
 * @summary 创建机器人发布任务
 *
 * @param request CreateInstancePublishTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstancePublishTaskResponse
 */
CreateInstancePublishTaskResponse Client::createInstancePublishTaskWithOptions(const CreateInstancePublishTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateInstancePublishTask"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstancePublishTaskResponse>();
}

/**
 * @summary 创建机器人发布任务
 *
 * @param request CreateInstancePublishTaskRequest
 * @return CreateInstancePublishTaskResponse
 */
CreateInstancePublishTaskResponse Client::createInstancePublishTask(const CreateInstancePublishTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstancePublishTaskWithOptions(request, runtime);
}

/**
 * @summary 意图-创建
 *
 * @param tmpReq CreateIntentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIntentResponse
 */
CreateIntentResponse Client::createIntentWithOptions(const CreateIntentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateIntentShrinkRequest request = CreateIntentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIntentDefinition()) {
    request.setIntentDefinitionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIntentDefinition(), "IntentDefinition", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIntentDefinitionShrink()) {
    query["IntentDefinition"] = request.getIntentDefinitionShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateIntent"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIntentResponse>();
}

/**
 * @summary 意图-创建
 *
 * @param request CreateIntentRequest
 * @return CreateIntentResponse
 */
CreateIntentResponse Client::createIntent(const CreateIntentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIntentWithOptions(request, runtime);
}

/**
 * @summary 意图-LGF-创建
 *
 * @param tmpReq CreateLgfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLgfResponse
 */
CreateLgfResponse Client::createLgfWithOptions(const CreateLgfRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateLgfShrinkRequest request = CreateLgfShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLgfDefinition()) {
    request.setLgfDefinitionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLgfDefinition(), "LgfDefinition", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLgfDefinitionShrink()) {
    query["LgfDefinition"] = request.getLgfDefinitionShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLgf"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLgfResponse>();
}

/**
 * @summary 意图-LGF-创建
 *
 * @param request CreateLgfRequest
 * @return CreateLgfResponse
 */
CreateLgfResponse Client::createLgf(const CreateLgfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLgfWithOptions(request, runtime);
}

/**
 * @summary 视角-创建
 *
 * @param request CreatePerspectiveRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePerspectiveResponse
 */
CreatePerspectiveResponse Client::createPerspectiveWithOptions(const CreatePerspectiveRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePerspective"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePerspectiveResponse>();
}

/**
 * @summary 视角-创建
 *
 * @param request CreatePerspectiveRequest
 * @return CreatePerspectiveResponse
 */
CreatePerspectiveResponse Client::createPerspective(const CreatePerspectiveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPerspectiveWithOptions(request, runtime);
}

/**
 * @summary Create Publishing Task
 *
 * @param tmpReq CreatePublishTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePublishTaskResponse
 */
CreatePublishTaskResponse Client::createPublishTaskWithOptions(const CreatePublishTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePublishTaskShrinkRequest request = CreatePublishTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDataIdList()) {
    request.setDataIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDataIdList(), "DataIdList", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasDataIdListShrink()) {
    query["DataIdList"] = request.getDataIdListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePublishTask"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePublishTaskResponse>();
}

/**
 * @summary Create Publishing Task
 *
 * @param request CreatePublishTaskRequest
 * @return CreatePublishTaskResponse
 */
CreatePublishTaskResponse Client::createPublishTask(const CreatePublishTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPublishTaskWithOptions(request, runtime);
}

/**
 * @summary Create FAQ Similar Question
 *
 * @param request CreateSimQuestionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSimQuestionResponse
 */
CreateSimQuestionResponse Client::createSimQuestionWithOptions(const CreateSimQuestionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasKnowledgeId()) {
    body["KnowledgeId"] = request.getKnowledgeId();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSimQuestion"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSimQuestionResponse>();
}

/**
 * @summary Create FAQ Similar Question
 *
 * @param request CreateSimQuestionRequest
 * @return CreateSimQuestionResponse
 */
CreateSimQuestionResponse Client::createSimQuestion(const CreateSimQuestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSimQuestionWithOptions(request, runtime);
}

/**
 * @summary Create New FAQ Answer
 *
 * @param tmpReq CreateSolutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSolutionResponse
 */
CreateSolutionResponse Client::createSolutionWithOptions(const CreateSolutionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSolutionShrinkRequest request = CreateSolutionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTagIdList()) {
    request.setTagIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTagIdList(), "TagIdList", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasContentType()) {
    query["ContentType"] = request.getContentType();
  }

  if (!!request.hasKnowledgeId()) {
    query["KnowledgeId"] = request.getKnowledgeId();
  }

  if (!!request.hasPerspectiveCodes()) {
    query["PerspectiveCodes"] = request.getPerspectiveCodes();
  }

  json body = {};
  if (!!request.hasTagIdListShrink()) {
    body["TagIdList"] = request.getTagIdListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSolution"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSolutionResponse>();
}

/**
 * @summary Create New FAQ Answer
 *
 * @param request CreateSolutionRequest
 * @return CreateSolutionResponse
 */
CreateSolutionResponse Client::createSolution(const CreateSolutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSolutionWithOptions(request, runtime);
}

/**
 * @summary 标签创建
 *
 * @param request CreateTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTagResponse
 */
CreateTagResponse Client::createTagWithOptions(const CreateTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasGroupId()) {
    body["GroupId"] = request.getGroupId();
  }

  if (!!request.hasTagName()) {
    body["TagName"] = request.getTagName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTag"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTagResponse>();
}

/**
 * @summary 标签创建
 *
 * @param request CreateTagRequest
 * @return CreateTagResponse
 */
CreateTagResponse Client::createTag(const CreateTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTagWithOptions(request, runtime);
}

/**
 * @summary 标签组创建
 *
 * @param request CreateTagGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTagGroupResponse
 */
CreateTagGroupResponse Client::createTagGroupWithOptions(const CreateTagGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasGroupName()) {
    body["GroupName"] = request.getGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTagGroup"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTagGroupResponse>();
}

/**
 * @summary 标签组创建
 *
 * @param request CreateTagGroupRequest
 * @return CreateTagGroupResponse
 */
CreateTagGroupResponse Client::createTagGroup(const CreateTagGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTagGroupWithOptions(request, runtime);
}

/**
 * @summary 意图-话术-创建
 *
 * @param tmpReq CreateUserSayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserSayResponse
 */
CreateUserSayResponse Client::createUserSayWithOptions(const CreateUserSayRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateUserSayShrinkRequest request = CreateUserSayShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserSayDefinition()) {
    request.setUserSayDefinitionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserSayDefinition(), "UserSayDefinition", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserSayDefinitionShrink()) {
    query["UserSayDefinition"] = request.getUserSayDefinitionShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateUserSay"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUserSayResponse>();
}

/**
 * @summary 意图-话术-创建
 *
 * @param request CreateUserSayRequest
 * @return CreateUserSayResponse
 */
CreateUserSayResponse Client::createUserSay(const CreateUserSayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserSayWithOptions(request, runtime);
}

/**
 * @summary Delete Category
 *
 * @param request DeleteCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCategoryResponse
 */
DeleteCategoryResponse Client::deleteCategoryWithOptions(const DeleteCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasCategoryId()) {
    body["CategoryId"] = request.getCategoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteCategory"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCategoryResponse>();
}

/**
 * @summary Delete Category
 *
 * @param request DeleteCategoryRequest
 * @return DeleteCategoryResponse
 */
DeleteCategoryResponse Client::deleteCategory(const DeleteCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCategoryWithOptions(request, runtime);
}

/**
 * @summary Delete FAQ Connection Question
 *
 * @param request DeleteConnQuestionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteConnQuestionResponse
 */
DeleteConnQuestionResponse Client::deleteConnQuestionWithOptions(const DeleteConnQuestionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasOutlineId()) {
    body["OutlineId"] = request.getOutlineId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteConnQuestion"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteConnQuestionResponse>();
}

/**
 * @summary Delete FAQ Connection Question
 *
 * @param request DeleteConnQuestionRequest
 * @return DeleteConnQuestionResponse
 */
DeleteConnQuestionResponse Client::deleteConnQuestion(const DeleteConnQuestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteConnQuestionWithOptions(request, runtime);
}

/**
 * @summary 实体-删除
 *
 * @param request DeleteDSEntityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDSEntityResponse
 */
DeleteDSEntityResponse Client::deleteDSEntityWithOptions(const DeleteDSEntityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.getEntityId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDSEntity"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDSEntityResponse>();
}

/**
 * @summary 实体-删除
 *
 * @param request DeleteDSEntityRequest
 * @return DeleteDSEntityResponse
 */
DeleteDSEntityResponse Client::deleteDSEntity(const DeleteDSEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDSEntityWithOptions(request, runtime);
}

/**
 * @summary 实体成员-删除
 *
 * @param request DeleteDSEntityValueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDSEntityValueResponse
 */
DeleteDSEntityValueResponse Client::deleteDSEntityValueWithOptions(const DeleteDSEntityValueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.getEntityId();
  }

  if (!!request.hasEntityValueId()) {
    query["EntityValueId"] = request.getEntityValueId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDSEntityValue"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDSEntityValueResponse>();
}

/**
 * @summary 实体成员-删除
 *
 * @param request DeleteDSEntityValueRequest
 * @return DeleteDSEntityValueResponse
 */
DeleteDSEntityValueResponse Client::deleteDSEntityValue(const DeleteDSEntityValueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDSEntityValueWithOptions(request, runtime);
}

/**
 * @summary Document Deletion
 *
 * @param request DeleteDocRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDocResponse
 */
DeleteDocResponse Client::deleteDocWithOptions(const DeleteDocRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasKnowledgeId()) {
    query["KnowledgeId"] = request.getKnowledgeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDoc"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDocResponse>();
}

/**
 * @summary Document Deletion
 *
 * @param request DeleteDocRequest
 * @return DeleteDocResponse
 */
DeleteDocResponse Client::deleteDoc(const DeleteDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDocWithOptions(request, runtime);
}

/**
 * @summary Delete FAQ. If it is published knowledge, after deletion, it becomes deleted but not published, and requires publishing to be truly deleted.
 *
 * @param request DeleteFaqRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFaqResponse
 */
DeleteFaqResponse Client::deleteFaqWithOptions(const DeleteFaqRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasKnowledgeId()) {
    body["KnowledgeId"] = request.getKnowledgeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteFaq"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFaqResponse>();
}

/**
 * @summary Delete FAQ. If it is published knowledge, after deletion, it becomes deleted but not published, and requires publishing to be truly deleted.
 *
 * @param request DeleteFaqRequest
 * @return DeleteFaqResponse
 */
DeleteFaqResponse Client::deleteFaq(const DeleteFaqRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFaqWithOptions(request, runtime);
}

/**
 * @summary 机器人-删除
 *
 * @param request DeleteInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstanceWithOptions(const DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstance"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceResponse>();
}

/**
 * @summary 机器人-删除
 *
 * @param request DeleteInstanceRequest
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstance(const DeleteInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInstanceWithOptions(request, runtime);
}

/**
 * @summary 意图-删除
 *
 * @param request DeleteIntentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIntentResponse
 */
DeleteIntentResponse Client::deleteIntentWithOptions(const DeleteIntentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.getIntentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteIntent"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIntentResponse>();
}

/**
 * @summary 意图-删除
 *
 * @param request DeleteIntentRequest
 * @return DeleteIntentResponse
 */
DeleteIntentResponse Client::deleteIntent(const DeleteIntentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIntentWithOptions(request, runtime);
}

/**
 * @summary 意图-LGF-删除
 *
 * @param request DeleteLgfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLgfResponse
 */
DeleteLgfResponse Client::deleteLgfWithOptions(const DeleteLgfRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.getIntentId();
  }

  if (!!request.hasLgfId()) {
    query["LgfId"] = request.getLgfId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLgf"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLgfResponse>();
}

/**
 * @summary 意图-LGF-删除
 *
 * @param request DeleteLgfRequest
 * @return DeleteLgfResponse
 */
DeleteLgfResponse Client::deleteLgf(const DeleteLgfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLgfWithOptions(request, runtime);
}

/**
 * @summary 视角-删除
 *
 * @param request DeletePerspectiveRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePerspectiveResponse
 */
DeletePerspectiveResponse Client::deletePerspectiveWithOptions(const DeletePerspectiveRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasPerspectiveId()) {
    query["PerspectiveId"] = request.getPerspectiveId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePerspective"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePerspectiveResponse>();
}

/**
 * @summary 视角-删除
 *
 * @param request DeletePerspectiveRequest
 * @return DeletePerspectiveResponse
 */
DeletePerspectiveResponse Client::deletePerspective(const DeletePerspectiveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePerspectiveWithOptions(request, runtime);
}

/**
 * @summary Delete FAQ Similar Question
 *
 * @param request DeleteSimQuestionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSimQuestionResponse
 */
DeleteSimQuestionResponse Client::deleteSimQuestionWithOptions(const DeleteSimQuestionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasSimQuestionId()) {
    body["SimQuestionId"] = request.getSimQuestionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteSimQuestion"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSimQuestionResponse>();
}

/**
 * @summary Delete FAQ Similar Question
 *
 * @param request DeleteSimQuestionRequest
 * @return DeleteSimQuestionResponse
 */
DeleteSimQuestionResponse Client::deleteSimQuestion(const DeleteSimQuestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSimQuestionWithOptions(request, runtime);
}

/**
 * @summary Delete FAQ Solution
 *
 * @param request DeleteSolutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSolutionResponse
 */
DeleteSolutionResponse Client::deleteSolutionWithOptions(const DeleteSolutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasSolutionId()) {
    body["SolutionId"] = request.getSolutionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteSolution"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSolutionResponse>();
}

/**
 * @summary Delete FAQ Solution
 *
 * @param request DeleteSolutionRequest
 * @return DeleteSolutionResponse
 */
DeleteSolutionResponse Client::deleteSolution(const DeleteSolutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSolutionWithOptions(request, runtime);
}

/**
 * @summary 标签删除
 *
 * @param request DeleteTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTagResponse
 */
DeleteTagResponse Client::deleteTagWithOptions(const DeleteTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasGroupId()) {
    body["GroupId"] = request.getGroupId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteTag"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTagResponse>();
}

/**
 * @summary 标签删除
 *
 * @param request DeleteTagRequest
 * @return DeleteTagResponse
 */
DeleteTagResponse Client::deleteTag(const DeleteTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTagWithOptions(request, runtime);
}

/**
 * @summary 标签组删除
 *
 * @param request DeleteTagGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTagGroupResponse
 */
DeleteTagGroupResponse Client::deleteTagGroupWithOptions(const DeleteTagGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteTagGroup"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTagGroupResponse>();
}

/**
 * @summary 标签组删除
 *
 * @param request DeleteTagGroupRequest
 * @return DeleteTagGroupResponse
 */
DeleteTagGroupResponse Client::deleteTagGroup(const DeleteTagGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTagGroupWithOptions(request, runtime);
}

/**
 * @summary 意图-用户话术-删除
 *
 * @param request DeleteUserSayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserSayResponse
 */
DeleteUserSayResponse Client::deleteUserSayWithOptions(const DeleteUserSayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.getIntentId();
  }

  if (!!request.hasUserSayId()) {
    query["UserSayId"] = request.getUserSayId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUserSay"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserSayResponse>();
}

/**
 * @summary 意图-用户话术-删除
 *
 * @param request DeleteUserSayRequest
 * @return DeleteUserSayResponse
 */
DeleteUserSayResponse Client::deleteUserSay(const DeleteUserSayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserSayWithOptions(request, runtime);
}

/**
 * @summary View Single Category Information
 *
 * @param request DescribeCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCategoryResponse
 */
DescribeCategoryResponse Client::describeCategoryWithOptions(const DescribeCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasCategoryId()) {
    body["CategoryId"] = request.getCategoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeCategory"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCategoryResponse>();
}

/**
 * @summary View Single Category Information
 *
 * @param request DescribeCategoryRequest
 * @return DescribeCategoryResponse
 */
DescribeCategoryResponse Client::describeCategory(const DescribeCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCategoryWithOptions(request, runtime);
}

/**
 * @summary 实体-详情
 *
 * @param request DescribeDSEntityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDSEntityResponse
 */
DescribeDSEntityResponse Client::describeDSEntityWithOptions(const DescribeDSEntityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.getEntityId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDSEntity"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDSEntityResponse>();
}

/**
 * @summary 实体-详情
 *
 * @param request DescribeDSEntityRequest
 * @return DescribeDSEntityResponse
 */
DescribeDSEntityResponse Client::describeDSEntity(const DescribeDSEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDSEntityWithOptions(request, runtime);
}

/**
 * @summary Document Details
 *
 * @param request DescribeDocRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDocResponse
 */
DescribeDocResponse Client::describeDocWithOptions(const DescribeDocRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasKnowledgeId()) {
    query["KnowledgeId"] = request.getKnowledgeId();
  }

  if (!!request.hasShowDetail()) {
    query["ShowDetail"] = request.getShowDetail();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDoc"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDocResponse>();
}

/**
 * @summary Document Details
 *
 * @param request DescribeDocRequest
 * @return DescribeDocResponse
 */
DescribeDocResponse Client::describeDoc(const DescribeDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDocWithOptions(request, runtime);
}

/**
 * @summary Knowledge Details
 *
 * @param request DescribeFaqRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFaqResponse
 */
DescribeFaqResponse Client::describeFaqWithOptions(const DescribeFaqRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasKnowledgeId()) {
    body["KnowledgeId"] = request.getKnowledgeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeFaq"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFaqResponse>();
}

/**
 * @summary Knowledge Details
 *
 * @param request DescribeFaqRequest
 * @return DescribeFaqResponse
 */
DescribeFaqResponse Client::describeFaq(const DescribeFaqRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFaqWithOptions(request, runtime);
}

/**
 * @summary 机器人-详情
 *
 * @param request DescribeInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceResponse
 */
DescribeInstanceResponse Client::describeInstanceWithOptions(const DescribeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstance"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceResponse>();
}

/**
 * @summary 机器人-详情
 *
 * @param request DescribeInstanceRequest
 * @return DescribeInstanceResponse
 */
DescribeInstanceResponse Client::describeInstance(const DescribeInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceWithOptions(request, runtime);
}

/**
 * @summary 意图-详情
 *
 * @param request DescribeIntentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIntentResponse
 */
DescribeIntentResponse Client::describeIntentWithOptions(const DescribeIntentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  json body = {};
  if (!!request.hasIntentId()) {
    body["IntentId"] = request.getIntentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeIntent"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIntentResponse>();
}

/**
 * @summary 意图-详情
 *
 * @param request DescribeIntentRequest
 * @return DescribeIntentResponse
 */
DescribeIntentResponse Client::describeIntent(const DescribeIntentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIntentWithOptions(request, runtime);
}

/**
 * @summary 视角-详情
 *
 * @param request DescribePerspectiveRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePerspectiveResponse
 */
DescribePerspectiveResponse Client::describePerspectiveWithOptions(const DescribePerspectiveRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasPerspectiveId()) {
    query["PerspectiveId"] = request.getPerspectiveId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePerspective"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePerspectiveResponse>();
}

/**
 * @summary 视角-详情
 *
 * @param request DescribePerspectiveRequest
 * @return DescribePerspectiveResponse
 */
DescribePerspectiveResponse Client::describePerspective(const DescribePerspectiveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePerspectiveWithOptions(request, runtime);
}

/**
 * @summary 标签详情
 *
 * @param request DescribeTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagResponse
 */
DescribeTagResponse Client::describeTagWithOptions(const DescribeTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasGroupId()) {
    body["GroupId"] = request.getGroupId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeTag"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTagResponse>();
}

/**
 * @summary 标签详情
 *
 * @param request DescribeTagRequest
 * @return DescribeTagResponse
 */
DescribeTagResponse Client::describeTag(const DescribeTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagWithOptions(request, runtime);
}

/**
 * @summary 标签组详情
 *
 * @param request DescribeTagGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagGroupResponse
 */
DescribeTagGroupResponse Client::describeTagGroupWithOptions(const DescribeTagGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeTagGroup"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTagGroupResponse>();
}

/**
 * @summary 标签组详情
 *
 * @param request DescribeTagGroupRequest
 * @return DescribeTagGroupResponse
 */
DescribeTagGroupResponse Client::describeTagGroup(const DescribeTagGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagGroupWithOptions(request, runtime);
}

/**
 * @summary 问答点赞、点踩API
 *
 * @param request FeedbackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FeedbackResponse
 */
FeedbackResponse Client::feedbackWithOptions(const FeedbackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasFeedback()) {
    query["Feedback"] = request.getFeedback();
  }

  if (!!request.hasFeedbackContent()) {
    query["FeedbackContent"] = request.getFeedbackContent();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMessageId()) {
    query["MessageId"] = request.getMessageId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Feedback"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FeedbackResponse>();
}

/**
 * @summary 问答点赞、点踩API
 *
 * @param request FeedbackRequest
 * @return FeedbackResponse
 */
FeedbackResponse Client::feedback(const FeedbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return feedbackWithOptions(request, runtime);
}

/**
 * @summary 生成用户免登Token
 *
 * @param request GenerateUserAccessTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateUserAccessTokenResponse
 */
GenerateUserAccessTokenResponse Client::generateUserAccessTokenWithOptions(const GenerateUserAccessTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasEmail()) {
    body["Email"] = request.getEmail();
  }

  if (!!request.hasExpireTime()) {
    body["ExpireTime"] = request.getExpireTime();
  }

  if (!!request.hasExtraInfo()) {
    body["ExtraInfo"] = request.getExtraInfo();
  }

  if (!!request.hasForeignId()) {
    body["ForeignId"] = request.getForeignId();
  }

  if (!!request.hasNick()) {
    body["Nick"] = request.getNick();
  }

  if (!!request.hasTelephone()) {
    body["Telephone"] = request.getTelephone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GenerateUserAccessToken"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateUserAccessTokenResponse>();
}

/**
 * @summary 生成用户免登Token
 *
 * @param request GenerateUserAccessTokenRequest
 * @return GenerateUserAccessTokenResponse
 */
GenerateUserAccessTokenResponse Client::generateUserAccessToken(const GenerateUserAccessTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateUserAccessTokenWithOptions(request, runtime);
}

/**
 * @summary 获取业务空间信息
 *
 * @param request GetAgentInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentInfoResponse
 */
GetAgentInfoResponse Client::getAgentInfoWithOptions(const GetAgentInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgentInfo"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentInfoResponse>();
}

/**
 * @summary 获取业务空间信息
 *
 * @param request GetAgentInfoRequest
 * @return GetAgentInfoResponse
 */
GetAgentInfoResponse Client::getAgentInfo(const GetAgentInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgentInfoWithOptions(request, runtime);
}

/**
 * @summary 获取异步函数执行结果接口
 *
 * @param request GetAsyncResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAsyncResultResponse
 */
GetAsyncResultResponse Client::getAsyncResultWithOptions(const GetAsyncResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAsyncResult"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAsyncResultResponse>();
}

/**
 * @summary 获取异步函数执行结果接口
 *
 * @param request GetAsyncResultRequest
 * @return GetAsyncResultResponse
 */
GetAsyncResultResponse Client::getAsyncResult(const GetAsyncResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAsyncResultWithOptions(request, runtime);
}

/**
 * @summary 查询机器人接待人次和对话轮次
 *
 * @param request GetBotSessionDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBotSessionDataResponse
 */
GetBotSessionDataResponse Client::getBotSessionDataWithOptions(const GetBotSessionDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasRobotInstanceId()) {
    query["RobotInstanceId"] = request.getRobotInstanceId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBotSessionData"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBotSessionDataResponse>();
}

/**
 * @summary 查询机器人接待人次和对话轮次
 *
 * @param request GetBotSessionDataRequest
 * @return GetBotSessionDataResponse
 */
GetBotSessionDataResponse Client::getBotSessionData(const GetBotSessionDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBotSessionDataWithOptions(request, runtime);
}

/**
 * @summary 查询机器人发布进度
 *
 * @param request GetInstancePublishTaskStateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstancePublishTaskStateResponse
 */
GetInstancePublishTaskStateResponse Client::getInstancePublishTaskStateWithOptions(const GetInstancePublishTaskStateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstancePublishTaskState"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstancePublishTaskStateResponse>();
}

/**
 * @summary 查询机器人发布进度
 *
 * @param request GetInstancePublishTaskStateRequest
 * @return GetInstancePublishTaskStateResponse
 */
GetInstancePublishTaskStateResponse Client::getInstancePublishTaskState(const GetInstancePublishTaskStateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstancePublishTaskStateWithOptions(request, runtime);
}

/**
 * @summary Query Publishing Progress
 *
 * @param request GetPublishTaskStateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPublishTaskStateResponse
 */
GetPublishTaskStateResponse Client::getPublishTaskStateWithOptions(const GetPublishTaskStateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPublishTaskState"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPublishTaskStateResponse>();
}

/**
 * @summary Query Publishing Progress
 *
 * @param request GetPublishTaskStateRequest
 * @return GetPublishTaskStateResponse
 */
GetPublishTaskStateResponse Client::getPublishTaskState(const GetPublishTaskStateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPublishTaskStateWithOptions(request, runtime);
}

/**
 * @summary 初始化im连接信息
 *
 * @param request InitIMConnectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitIMConnectResponse
 */
InitIMConnectResponse Client::initIMConnectWithOptions(const InitIMConnectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasFrom()) {
    body["From"] = request.getFrom();
  }

  if (!!request.hasUserAccessToken()) {
    body["UserAccessToken"] = request.getUserAccessToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InitIMConnect"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InitIMConnectResponse>();
}

/**
 * @summary 初始化im连接信息
 *
 * @param request InitIMConnectRequest
 * @return InitIMConnectResponse
 */
InitIMConnectResponse Client::initIMConnect(const InitIMConnectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initIMConnectWithOptions(request, runtime);
}

/**
 * @summary 机器人-绑定类目
 *
 * @param request LinkInstanceCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LinkInstanceCategoryResponse
 */
LinkInstanceCategoryResponse Client::linkInstanceCategoryWithOptions(const LinkInstanceCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAbilityType()) {
    query["AbilityType"] = request.getAbilityType();
  }

  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  json body = {};
  if (!!request.hasCategoryIds()) {
    body["CategoryIds"] = request.getCategoryIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "LinkInstanceCategory"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LinkInstanceCategoryResponse>();
}

/**
 * @summary 机器人-绑定类目
 *
 * @param request LinkInstanceCategoryRequest
 * @return LinkInstanceCategoryResponse
 */
LinkInstanceCategoryResponse Client::linkInstanceCategory(const LinkInstanceCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return linkInstanceCategoryWithOptions(request, runtime);
}

/**
 * @summary 获取业务空间列表
 *
 * @param request ListAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAgentResponse
 */
ListAgentResponse Client::listAgentWithOptions(const ListAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentName()) {
    query["AgentName"] = request.getAgentName();
  }

  if (!!request.hasGoodsCodes()) {
    query["GoodsCodes"] = request.getGoodsCodes();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAgent"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAgentResponse>();
}

/**
 * @summary 获取业务空间列表
 *
 * @param request ListAgentRequest
 * @return ListAgentResponse
 */
ListAgentResponse Client::listAgent(const ListAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAgentWithOptions(request, runtime);
}

/**
 * @summary Category List
 *
 * @param request ListCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCategoryResponse
 */
ListCategoryResponse Client::listCategoryWithOptions(const ListCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasKnowledgeType()) {
    body["KnowledgeType"] = request.getKnowledgeType();
  }

  if (!!request.hasParentCategoryId()) {
    body["ParentCategoryId"] = request.getParentCategoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListCategory"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCategoryResponse>();
}

/**
 * @summary Category List
 *
 * @param request ListCategoryRequest
 * @return ListCategoryResponse
 */
ListCategoryResponse Client::listCategory(const ListCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCategoryWithOptions(request, runtime);
}

/**
 * @summary Query FAQ Connection Questions List
 *
 * @param request ListConnQuestionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConnQuestionResponse
 */
ListConnQuestionResponse Client::listConnQuestionWithOptions(const ListConnQuestionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasKnowledgeId()) {
    body["KnowledgeId"] = request.getKnowledgeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListConnQuestion"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConnQuestionResponse>();
}

/**
 * @summary Query FAQ Connection Questions List
 *
 * @param request ListConnQuestionRequest
 * @return ListConnQuestionResponse
 */
ListConnQuestionResponse Client::listConnQuestion(const ListConnQuestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listConnQuestionWithOptions(request, runtime);
}

/**
 * @summary 实体-列表
 *
 * @param request ListDSEntityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDSEntityResponse
 */
ListDSEntityResponse Client::listDSEntityWithOptions(const ListDSEntityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasEntityType()) {
    query["EntityType"] = request.getEntityType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDSEntity"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDSEntityResponse>();
}

/**
 * @summary 实体-列表
 *
 * @param request ListDSEntityRequest
 * @return ListDSEntityResponse
 */
ListDSEntityResponse Client::listDSEntity(const ListDSEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDSEntityWithOptions(request, runtime);
}

/**
 * @summary 实体成员-列表
 *
 * @param request ListDSEntityValueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDSEntityValueResponse
 */
ListDSEntityValueResponse Client::listDSEntityValueWithOptions(const ListDSEntityValueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  json body = {};
  if (!!request.hasEntityId()) {
    body["EntityId"] = request.getEntityId();
  }

  if (!!request.hasEntityValueId()) {
    body["EntityValueId"] = request.getEntityValueId();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.getKeyword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListDSEntityValue"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDSEntityValueResponse>();
}

/**
 * @summary 实体成员-列表
 *
 * @param request ListDSEntityValueRequest
 * @return ListDSEntityValueResponse
 */
ListDSEntityValueResponse Client::listDSEntityValue(const ListDSEntityValueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDSEntityValueWithOptions(request, runtime);
}

/**
 * @summary 机器人-修改
 *
 * @param request ListInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceResponse
 */
ListInstanceResponse Client::listInstanceWithOptions(const ListInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRobotType()) {
    query["RobotType"] = request.getRobotType();
  }

  if (!!request.hasSandbox()) {
    query["Sandbox"] = request.getSandbox();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstance"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceResponse>();
}

/**
 * @summary 机器人-修改
 *
 * @param request ListInstanceRequest
 * @return ListInstanceResponse
 */
ListInstanceResponse Client::listInstance(const ListInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstanceWithOptions(request, runtime);
}

/**
 * @summary 意图-列表
 *
 * @param request ListIntentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIntentResponse
 */
ListIntentResponse Client::listIntentWithOptions(const ListIntentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIntentName()) {
    query["IntentName"] = request.getIntentName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIntent"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIntentResponse>();
}

/**
 * @summary 意图-列表
 *
 * @param request ListIntentRequest
 * @return ListIntentResponse
 */
ListIntentResponse Client::listIntent(const ListIntentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIntentWithOptions(request, runtime);
}

/**
 * @summary 意图-LGF-列表
 *
 * @param request ListLgfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLgfResponse
 */
ListLgfResponse Client::listLgfWithOptions(const ListLgfRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.getIntentId();
  }

  if (!!request.hasLgfText()) {
    query["LgfText"] = request.getLgfText();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLgf"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLgfResponse>();
}

/**
 * @summary 意图-LGF-列表
 *
 * @param request ListLgfRequest
 * @return ListLgfResponse
 */
ListLgfResponse Client::listLgf(const ListLgfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLgfWithOptions(request, runtime);
}

/**
 * @summary 获取业务空间下可集成的SaaS信息列表
 *
 * @param request ListSaasInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSaasInfoResponse
 */
ListSaasInfoResponse Client::listSaasInfoWithOptions(const ListSaasInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasSaasGroupCodes()) {
    query["SaasGroupCodes"] = request.getSaasGroupCodes();
  }

  if (!!request.hasSaasName()) {
    query["SaasName"] = request.getSaasName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSaasInfo"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSaasInfoResponse>();
}

/**
 * @summary 获取业务空间下可集成的SaaS信息列表
 *
 * @param request ListSaasInfoRequest
 * @return ListSaasInfoResponse
 */
ListSaasInfoResponse Client::listSaasInfo(const ListSaasInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSaasInfoWithOptions(request, runtime);
}

/**
 * @summary 获取业务空间下可集成的权限组信息
 *
 * @param request ListSaasPermissionGroupInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSaasPermissionGroupInfosResponse
 */
ListSaasPermissionGroupInfosResponse Client::listSaasPermissionGroupInfosWithOptions(const ListSaasPermissionGroupInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSaasPermissionGroupInfos"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSaasPermissionGroupInfosResponse>();
}

/**
 * @summary 获取业务空间下可集成的权限组信息
 *
 * @param request ListSaasPermissionGroupInfosRequest
 * @return ListSaasPermissionGroupInfosResponse
 */
ListSaasPermissionGroupInfosResponse Client::listSaasPermissionGroupInfos(const ListSaasPermissionGroupInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSaasPermissionGroupInfosWithOptions(request, runtime);
}

/**
 * @summary FAQ Similar Questions List
 *
 * @param request ListSimQuestionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSimQuestionResponse
 */
ListSimQuestionResponse Client::listSimQuestionWithOptions(const ListSimQuestionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasKnowledgeId()) {
    body["KnowledgeId"] = request.getKnowledgeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListSimQuestion"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSimQuestionResponse>();
}

/**
 * @summary FAQ Similar Questions List
 *
 * @param request ListSimQuestionRequest
 * @return ListSimQuestionResponse
 */
ListSimQuestionResponse Client::listSimQuestion(const ListSimQuestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSimQuestionWithOptions(request, runtime);
}

/**
 * @summary FAQ Solution List
 *
 * @param request ListSolutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSolutionResponse
 */
ListSolutionResponse Client::listSolutionWithOptions(const ListSolutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasKnowledgeId()) {
    body["KnowledgeId"] = request.getKnowledgeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListSolution"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSolutionResponse>();
}

/**
 * @summary FAQ Solution List
 *
 * @param request ListSolutionRequest
 * @return ListSolutionResponse
 */
ListSolutionResponse Client::listSolution(const ListSolutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSolutionWithOptions(request, runtime);
}

/**
 * @summary 标签查询
 *
 * @param request ListTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResponse
 */
ListTagResponse Client::listTagWithOptions(const ListTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasGroupId()) {
    body["GroupId"] = request.getGroupId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTagName()) {
    body["TagName"] = request.getTagName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListTag"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResponse>();
}

/**
 * @summary 标签查询
 *
 * @param request ListTagRequest
 * @return ListTagResponse
 */
ListTagResponse Client::listTag(const ListTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagWithOptions(request, runtime);
}

/**
 * @summary 标签组查询
 *
 * @param request ListTagGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagGroupResponse
 */
ListTagGroupResponse Client::listTagGroupWithOptions(const ListTagGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasGroupName()) {
    body["GroupName"] = request.getGroupName();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListTagGroup"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagGroupResponse>();
}

/**
 * @summary 标签组查询
 *
 * @param request ListTagGroupRequest
 * @return ListTagGroupResponse
 */
ListTagGroupResponse Client::listTagGroup(const ListTagGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagGroupWithOptions(request, runtime);
}

/**
 * @summary Tongyi对话明细查询接口
 *
 * @param request ListTongyiChatHistorysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTongyiChatHistorysResponse
 */
ListTongyiChatHistorysResponse Client::listTongyiChatHistorysWithOptions(const ListTongyiChatHistorysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasRobotInstanceId()) {
    query["RobotInstanceId"] = request.getRobotInstanceId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTongyiChatHistorys"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTongyiChatHistorysResponse>();
}

/**
 * @summary Tongyi对话明细查询接口
 *
 * @param request ListTongyiChatHistorysRequest
 * @return ListTongyiChatHistorysResponse
 */
ListTongyiChatHistorysResponse Client::listTongyiChatHistorys(const ListTongyiChatHistorysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTongyiChatHistorysWithOptions(request, runtime);
}

/**
 * @summary 查询通义晓蜜的单个会话对话记录
 *
 * @param request ListTongyiConversationLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTongyiConversationLogsResponse
 */
ListTongyiConversationLogsResponse Client::listTongyiConversationLogsWithOptions(const ListTongyiConversationLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasRobotInstanceId()) {
    query["RobotInstanceId"] = request.getRobotInstanceId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTongyiConversationLogs"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTongyiConversationLogsResponse>();
}

/**
 * @summary 查询通义晓蜜的单个会话对话记录
 *
 * @param request ListTongyiConversationLogsRequest
 * @return ListTongyiConversationLogsResponse
 */
ListTongyiConversationLogsResponse Client::listTongyiConversationLogs(const ListTongyiConversationLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTongyiConversationLogsWithOptions(request, runtime);
}

/**
 * @summary 话术-列表
 *
 * @param request ListUserSayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserSayResponse
 */
ListUserSayResponse Client::listUserSayWithOptions(const ListUserSayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.getIntentId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserSay"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserSayResponse>();
}

/**
 * @summary 话术-列表
 *
 * @param request ListUserSayRequest
 * @return ListUserSayResponse
 */
ListUserSayResponse Client::listUserSay(const ListUserSayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserSayWithOptions(request, runtime);
}

/**
 * @summary 统一NLU接口
 *
 * @param request NluRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return NluResponse
 */
NluResponse Client::nluWithOptions(const NluRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUtterance()) {
    query["Utterance"] = request.getUtterance();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Nlu"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<NluResponse>();
}

/**
 * @summary 统一NLU接口
 *
 * @param request NluRequest
 * @return NluResponse
 */
NluResponse Client::nlu(const NluRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return nluWithOptions(request, runtime);
}

/**
 * @summary 视角-列表
 *
 * @param request QueryPerspectivesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPerspectivesResponse
 */
QueryPerspectivesResponse Client::queryPerspectivesWithOptions(const QueryPerspectivesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryPerspectives"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPerspectivesResponse>();
}

/**
 * @summary 视角-列表
 *
 * @param request QueryPerspectivesRequest
 * @return QueryPerspectivesResponse
 */
QueryPerspectivesResponse Client::queryPerspectives(const QueryPerspectivesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPerspectivesWithOptions(request, runtime);
}

/**
 * @summary Document Retry
 *
 * @param request RetryDocRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RetryDocResponse
 */
RetryDocResponse Client::retryDocWithOptions(const RetryDocRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasKnowledgeId()) {
    query["KnowledgeId"] = request.getKnowledgeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RetryDoc"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RetryDocResponse>();
}

/**
 * @summary Document Retry
 *
 * @param request RetryDocRequest
 * @return RetryDocResponse
 */
RetryDocResponse Client::retryDoc(const RetryDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return retryDocWithOptions(request, runtime);
}

/**
 * @summary Document Search
 *
 * @param tmpReq SearchDocRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchDocResponse
 */
SearchDocResponse Client::searchDocWithOptions(const SearchDocRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SearchDocShrinkRequest request = SearchDocShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCategoryIds()) {
    request.setCategoryIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCategoryIds(), "CategoryIds", "json"));
  }

  if (!!tmpReq.hasTagIds()) {
    request.setTagIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTagIds(), "TagIds", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasCategoryIdsShrink()) {
    query["CategoryIds"] = request.getCategoryIdsShrink();
  }

  if (!!request.hasCreateTimeBegin()) {
    query["CreateTimeBegin"] = request.getCreateTimeBegin();
  }

  if (!!request.hasCreateTimeEnd()) {
    query["CreateTimeEnd"] = request.getCreateTimeEnd();
  }

  if (!!request.hasCreateUserName()) {
    query["CreateUserName"] = request.getCreateUserName();
  }

  if (!!request.hasEndTimeBegin()) {
    query["EndTimeBegin"] = request.getEndTimeBegin();
  }

  if (!!request.hasEndTimeEnd()) {
    query["EndTimeEnd"] = request.getEndTimeEnd();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasModifyTimeBegin()) {
    query["ModifyTimeBegin"] = request.getModifyTimeBegin();
  }

  if (!!request.hasModifyTimeEnd()) {
    query["ModifyTimeEnd"] = request.getModifyTimeEnd();
  }

  if (!!request.hasModifyUserName()) {
    query["ModifyUserName"] = request.getModifyUserName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProcessStatus()) {
    query["ProcessStatus"] = request.getProcessStatus();
  }

  if (!!request.hasSearchScope()) {
    query["SearchScope"] = request.getSearchScope();
  }

  if (!!request.hasStartTimeBegin()) {
    query["StartTimeBegin"] = request.getStartTimeBegin();
  }

  if (!!request.hasStartTimeEnd()) {
    query["StartTimeEnd"] = request.getStartTimeEnd();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTagIdsShrink()) {
    query["TagIds"] = request.getTagIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchDoc"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchDocResponse>();
}

/**
 * @summary Document Search
 *
 * @param request SearchDocRequest
 * @return SearchDocResponse
 */
SearchDocResponse Client::searchDoc(const SearchDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchDocWithOptions(request, runtime);
}

/**
 * @summary Knowledge Search
 *
 * @param tmpReq SearchFaqRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchFaqResponse
 */
SearchFaqResponse Client::searchFaqWithOptions(const SearchFaqRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SearchFaqShrinkRequest request = SearchFaqShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCategoryIds()) {
    request.setCategoryIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCategoryIds(), "CategoryIds", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasCategoryIdsShrink()) {
    body["CategoryIds"] = request.getCategoryIdsShrink();
  }

  if (!!request.hasCreateTimeBegin()) {
    body["CreateTimeBegin"] = request.getCreateTimeBegin();
  }

  if (!!request.hasCreateTimeEnd()) {
    body["CreateTimeEnd"] = request.getCreateTimeEnd();
  }

  if (!!request.hasCreateUserName()) {
    body["CreateUserName"] = request.getCreateUserName();
  }

  if (!!request.hasEndTimeBegin()) {
    body["EndTimeBegin"] = request.getEndTimeBegin();
  }

  if (!!request.hasEndTimeEnd()) {
    body["EndTimeEnd"] = request.getEndTimeEnd();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.getKeyword();
  }

  if (!!request.hasModifyTimeBegin()) {
    body["ModifyTimeBegin"] = request.getModifyTimeBegin();
  }

  if (!!request.hasModifyTimeEnd()) {
    body["ModifyTimeEnd"] = request.getModifyTimeEnd();
  }

  if (!!request.hasModifyUserName()) {
    body["ModifyUserName"] = request.getModifyUserName();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchScope()) {
    body["SearchScope"] = request.getSearchScope();
  }

  if (!!request.hasStartTimeBegin()) {
    body["StartTimeBegin"] = request.getStartTimeBegin();
  }

  if (!!request.hasStartTimeEnd()) {
    body["StartTimeEnd"] = request.getStartTimeEnd();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SearchFaq"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchFaqResponse>();
}

/**
 * @summary Knowledge Search
 *
 * @param request SearchFaqRequest
 * @return SearchFaqResponse
 */
SearchFaqResponse Client::searchFaq(const SearchFaqRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchFaqWithOptions(request, runtime);
}

/**
 * @summary 大模型问答调试信息
 *
 * @param request TongyiChatDebugInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TongyiChatDebugInfoResponse
 */
TongyiChatDebugInfoResponse Client::tongyiChatDebugInfoWithOptions(const TongyiChatDebugInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMessageId()) {
    query["MessageId"] = request.getMessageId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TongyiChatDebugInfo"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TongyiChatDebugInfoResponse>();
}

/**
 * @summary 大模型问答调试信息
 *
 * @param request TongyiChatDebugInfoRequest
 * @return TongyiChatDebugInfoResponse
 */
TongyiChatDebugInfoResponse Client::tongyiChatDebugInfo(const TongyiChatDebugInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tongyiChatDebugInfoWithOptions(request, runtime);
}

/**
 * @summary Edit Category
 *
 * @param request UpdateCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCategoryResponse
 */
UpdateCategoryResponse Client::updateCategoryWithOptions(const UpdateCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasBizCode()) {
    body["BizCode"] = request.getBizCode();
  }

  if (!!request.hasCategoryId()) {
    body["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateCategory"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCategoryResponse>();
}

/**
 * @summary Edit Category
 *
 * @param request UpdateCategoryRequest
 * @return UpdateCategoryResponse
 */
UpdateCategoryResponse Client::updateCategory(const UpdateCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCategoryWithOptions(request, runtime);
}

/**
 * @summary Update FAQ Connection Question
 *
 * @param request UpdateConnQuestionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateConnQuestionResponse
 */
UpdateConnQuestionResponse Client::updateConnQuestionWithOptions(const UpdateConnQuestionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasConnQuestionId()) {
    body["ConnQuestionId"] = request.getConnQuestionId();
  }

  if (!!request.hasOutlineId()) {
    body["OutlineId"] = request.getOutlineId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateConnQuestion"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateConnQuestionResponse>();
}

/**
 * @summary Update FAQ Connection Question
 *
 * @param request UpdateConnQuestionRequest
 * @return UpdateConnQuestionResponse
 */
UpdateConnQuestionResponse Client::updateConnQuestion(const UpdateConnQuestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateConnQuestionWithOptions(request, runtime);
}

/**
 * @summary 实体-更新
 *
 * @param request UpdateDSEntityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDSEntityResponse
 */
UpdateDSEntityResponse Client::updateDSEntityWithOptions(const UpdateDSEntityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.getEntityId();
  }

  if (!!request.hasEntityName()) {
    query["EntityName"] = request.getEntityName();
  }

  if (!!request.hasEntityType()) {
    query["EntityType"] = request.getEntityType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDSEntity"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDSEntityResponse>();
}

/**
 * @summary 实体-更新
 *
 * @param request UpdateDSEntityRequest
 * @return UpdateDSEntityResponse
 */
UpdateDSEntityResponse Client::updateDSEntity(const UpdateDSEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDSEntityWithOptions(request, runtime);
}

/**
 * @summary 实体成员-更新
 *
 * @param tmpReq UpdateDSEntityValueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDSEntityValueResponse
 */
UpdateDSEntityValueResponse Client::updateDSEntityValueWithOptions(const UpdateDSEntityValueRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDSEntityValueShrinkRequest request = UpdateDSEntityValueShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSynonyms()) {
    request.setSynonymsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSynonyms(), "Synonyms", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.getEntityId();
  }

  if (!!request.hasEntityValueId()) {
    query["EntityValueId"] = request.getEntityValueId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  json body = {};
  if (!!request.hasSynonymsShrink()) {
    body["Synonyms"] = request.getSynonymsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDSEntityValue"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDSEntityValueResponse>();
}

/**
 * @summary 实体成员-更新
 *
 * @param request UpdateDSEntityValueRequest
 * @return UpdateDSEntityValueResponse
 */
UpdateDSEntityValueResponse Client::updateDSEntityValue(const UpdateDSEntityValueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDSEntityValueWithOptions(request, runtime);
}

/**
 * @summary Document Update
 *
 * @param tmpReq UpdateDocRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDocResponse
 */
UpdateDocResponse Client::updateDocWithOptions(const UpdateDocRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDocShrinkRequest request = UpdateDocShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDocMetadata()) {
    request.setDocMetadataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDocMetadata(), "DocMetadata", "json"));
  }

  if (!!tmpReq.hasTagIds()) {
    request.setTagIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTagIds(), "TagIds", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasConfig()) {
    query["Config"] = request.getConfig();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasDocMetadataShrink()) {
    query["DocMetadata"] = request.getDocMetadataShrink();
  }

  if (!!request.hasDocName()) {
    query["DocName"] = request.getDocName();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasKnowledgeId()) {
    query["KnowledgeId"] = request.getKnowledgeId();
  }

  if (!!request.hasMeta()) {
    query["Meta"] = request.getMeta();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasTagIdsShrink()) {
    query["TagIds"] = request.getTagIdsShrink();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDoc"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDocResponse>();
}

/**
 * @summary Document Update
 *
 * @param request UpdateDocRequest
 * @return UpdateDocResponse
 */
UpdateDocResponse Client::updateDoc(const UpdateDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDocWithOptions(request, runtime);
}

/**
 * @summary Update FAQ
 *
 * @param tmpReq UpdateFaqRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFaqResponse
 */
UpdateFaqResponse Client::updateFaqWithOptions(const UpdateFaqRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateFaqShrinkRequest request = UpdateFaqShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTagIdList()) {
    request.setTagIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTagIdList(), "TagIdList", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasCategoryId()) {
    body["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.getEndDate();
  }

  if (!!request.hasKnowledgeId()) {
    body["KnowledgeId"] = request.getKnowledgeId();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.getStartDate();
  }

  if (!!request.hasTagIdListShrink()) {
    body["TagIdList"] = request.getTagIdListShrink();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateFaq"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFaqResponse>();
}

/**
 * @summary Update FAQ
 *
 * @param request UpdateFaqRequest
 * @return UpdateFaqResponse
 */
UpdateFaqResponse Client::updateFaq(const UpdateFaqRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFaqWithOptions(request, runtime);
}

/**
 * @summary 机器人-修改
 *
 * @param request UpdateInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceResponse
 */
UpdateInstanceResponse Client::updateInstanceWithOptions(const UpdateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIntroduction()) {
    query["Introduction"] = request.getIntroduction();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateInstance"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceResponse>();
}

/**
 * @summary 机器人-修改
 *
 * @param request UpdateInstanceRequest
 * @return UpdateInstanceResponse
 */
UpdateInstanceResponse Client::updateInstance(const UpdateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateInstanceWithOptions(request, runtime);
}

/**
 * @summary 意图-更新
 *
 * @param tmpReq UpdateIntentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIntentResponse
 */
UpdateIntentResponse Client::updateIntentWithOptions(const UpdateIntentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateIntentShrinkRequest request = UpdateIntentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIntentDefinition()) {
    request.setIntentDefinitionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIntentDefinition(), "IntentDefinition", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIntentDefinitionShrink()) {
    query["IntentDefinition"] = request.getIntentDefinitionShrink();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.getIntentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateIntent"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateIntentResponse>();
}

/**
 * @summary 意图-更新
 *
 * @param request UpdateIntentRequest
 * @return UpdateIntentResponse
 */
UpdateIntentResponse Client::updateIntent(const UpdateIntentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIntentWithOptions(request, runtime);
}

/**
 * @summary 意图-LGF-更新
 *
 * @param tmpReq UpdateLgfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLgfResponse
 */
UpdateLgfResponse Client::updateLgfWithOptions(const UpdateLgfRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateLgfShrinkRequest request = UpdateLgfShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLgfDefinition()) {
    request.setLgfDefinitionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLgfDefinition(), "LgfDefinition", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLgfDefinitionShrink()) {
    query["LgfDefinition"] = request.getLgfDefinitionShrink();
  }

  if (!!request.hasLgfId()) {
    query["LgfId"] = request.getLgfId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateLgf"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLgfResponse>();
}

/**
 * @summary 意图-LGF-更新
 *
 * @param request UpdateLgfRequest
 * @return UpdateLgfResponse
 */
UpdateLgfResponse Client::updateLgf(const UpdateLgfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLgfWithOptions(request, runtime);
}

/**
 * @summary 视角-修改
 *
 * @param request UpdatePerspectiveRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePerspectiveResponse
 */
UpdatePerspectiveResponse Client::updatePerspectiveWithOptions(const UpdatePerspectiveRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPerspectiveId()) {
    query["PerspectiveId"] = request.getPerspectiveId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePerspective"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePerspectiveResponse>();
}

/**
 * @summary 视角-修改
 *
 * @param request UpdatePerspectiveRequest
 * @return UpdatePerspectiveResponse
 */
UpdatePerspectiveResponse Client::updatePerspective(const UpdatePerspectiveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePerspectiveWithOptions(request, runtime);
}

/**
 * @summary Update FAQ Similar Questions
 *
 * @param request UpdateSimQuestionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSimQuestionResponse
 */
UpdateSimQuestionResponse Client::updateSimQuestionWithOptions(const UpdateSimQuestionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasSimQuestionId()) {
    body["SimQuestionId"] = request.getSimQuestionId();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateSimQuestion"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSimQuestionResponse>();
}

/**
 * @summary Update FAQ Similar Questions
 *
 * @param request UpdateSimQuestionRequest
 * @return UpdateSimQuestionResponse
 */
UpdateSimQuestionResponse Client::updateSimQuestion(const UpdateSimQuestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSimQuestionWithOptions(request, runtime);
}

/**
 * @summary Update FAQ Answer
 *
 * @param tmpReq UpdateSolutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSolutionResponse
 */
UpdateSolutionResponse Client::updateSolutionWithOptions(const UpdateSolutionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateSolutionShrinkRequest request = UpdateSolutionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTagIdList()) {
    request.setTagIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTagIdList(), "TagIdList", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasContentType()) {
    body["ContentType"] = request.getContentType();
  }

  if (!!request.hasPerspectiveCodes()) {
    body["PerspectiveCodes"] = request.getPerspectiveCodes();
  }

  if (!!request.hasSolutionId()) {
    body["SolutionId"] = request.getSolutionId();
  }

  if (!!request.hasTagIdListShrink()) {
    body["TagIdList"] = request.getTagIdListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateSolution"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSolutionResponse>();
}

/**
 * @summary Update FAQ Answer
 *
 * @param request UpdateSolutionRequest
 * @return UpdateSolutionResponse
 */
UpdateSolutionResponse Client::updateSolution(const UpdateSolutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSolutionWithOptions(request, runtime);
}

/**
 * @summary 标签编辑
 *
 * @param request UpdateTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTagResponse
 */
UpdateTagResponse Client::updateTagWithOptions(const UpdateTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasGroupId()) {
    body["GroupId"] = request.getGroupId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasTagName()) {
    body["TagName"] = request.getTagName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTag"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTagResponse>();
}

/**
 * @summary 标签编辑
 *
 * @param request UpdateTagRequest
 * @return UpdateTagResponse
 */
UpdateTagResponse Client::updateTag(const UpdateTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTagWithOptions(request, runtime);
}

/**
 * @summary 标签组编辑
 *
 * @param request UpdateTagGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTagGroupResponse
 */
UpdateTagGroupResponse Client::updateTagGroupWithOptions(const UpdateTagGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasGroupName()) {
    body["GroupName"] = request.getGroupName();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTagGroup"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTagGroupResponse>();
}

/**
 * @summary 标签组编辑
 *
 * @param request UpdateTagGroupRequest
 * @return UpdateTagGroupResponse
 */
UpdateTagGroupResponse Client::updateTagGroup(const UpdateTagGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTagGroupWithOptions(request, runtime);
}

/**
 * @summary 意图-话术-更新
 *
 * @param tmpReq UpdateUserSayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserSayResponse
 */
UpdateUserSayResponse Client::updateUserSayWithOptions(const UpdateUserSayRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateUserSayShrinkRequest request = UpdateUserSayShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserSayDefinition()) {
    request.setUserSayDefinitionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserSayDefinition(), "UserSayDefinition", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserSayDefinitionShrink()) {
    query["UserSayDefinition"] = request.getUserSayDefinitionShrink();
  }

  if (!!request.hasUserSayId()) {
    query["UserSayId"] = request.getUserSayId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateUserSay"},
    {"version" , "2022-04-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserSayResponse>();
}

/**
 * @summary 意图-话术-更新
 *
 * @param request UpdateUserSayRequest
 * @return UpdateUserSayResponse
 */
UpdateUserSayResponse Client::updateUserSay(const UpdateUserSayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserSayWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Chatbot20220408