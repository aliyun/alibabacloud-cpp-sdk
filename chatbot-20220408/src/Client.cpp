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
 * @summary 申请流式网关AccessToken
 *
 * @param request ApplyForStreamAccessTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyForStreamAccessTokenResponse
 */
ApplyForStreamAccessTokenResponse Client::applyForStreamAccessTokenWithOptions(const ApplyForStreamAccessTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
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
 * @summary 申请流式网关AccessToken
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
    request.setPerspectiveShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.perspective(), "Perspective", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPerspectiveShrink()) {
    query["Perspective"] = request.perspectiveShrink();
  }

  if (!!request.hasRecommendNum()) {
    query["RecommendNum"] = request.recommendNum();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasUtterance()) {
    query["Utterance"] = request.utterance();
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 取消发布任务
 *
 * @param request CancelPublishTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelPublishTaskResponse
 */
CancelPublishTaskResponse Client::cancelPublishTaskWithOptions(const CancelPublishTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
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
 * @summary 取消发布任务
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
    request.setPerspectiveShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.perspective(), "Perspective", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIntentName()) {
    query["IntentName"] = request.intentName();
  }

  if (!!request.hasKnowledgeId()) {
    query["KnowledgeId"] = request.knowledgeId();
  }

  if (!!request.hasPerspectiveShrink()) {
    query["Perspective"] = request.perspectiveShrink();
  }

  if (!!request.hasSandBox()) {
    query["SandBox"] = request.sandBox();
  }

  if (!!request.hasSenderId()) {
    query["SenderId"] = request.senderId();
  }

  if (!!request.hasSenderNick()) {
    query["SenderNick"] = request.senderNick();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasUtterance()) {
    query["Utterance"] = request.utterance();
  }

  if (!!request.hasVendorParam()) {
    query["VendorParam"] = request.vendorParam();
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 新增类目
 *
 * @param request CreateCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCategoryResponse
 */
CreateCategoryResponse Client::createCategoryWithOptions(const CreateCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  json body = {};
  if (!!request.hasBizCode()) {
    body["BizCode"] = request.bizCode();
  }

  if (!!request.hasKnowledgeType()) {
    body["KnowledgeType"] = request.knowledgeType();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasParentCategoryId()) {
    body["ParentCategoryId"] = request.parentCategoryId();
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
 * @summary 新增类目
 *
 * @param request CreateCategoryRequest
 * @return CreateCategoryResponse
 */
CreateCategoryResponse Client::createCategory(const CreateCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCategoryWithOptions(request, runtime);
}

/**
 * @summary 新建FAQ关联问
 *
 * @param request CreateConnQuestionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateConnQuestionResponse
 */
CreateConnQuestionResponse Client::createConnQuestionWithOptions(const CreateConnQuestionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  json body = {};
  if (!!request.hasConnQuestionId()) {
    body["ConnQuestionId"] = request.connQuestionId();
  }

  if (!!request.hasKnowledgeId()) {
    body["KnowledgeId"] = request.knowledgeId();
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
 * @summary 新建FAQ关联问
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasEntityName()) {
    query["EntityName"] = request.entityName();
  }

  if (!!request.hasEntityType()) {
    query["EntityType"] = request.entityType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
    request.setSynonymsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.synonyms(), "Synonyms", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.content();
  }

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.entityId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  json body = {};
  if (!!request.hasSynonymsShrink()) {
    body["Synonyms"] = request.synonymsShrink();
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
 * @summary 创建文档
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
    request.setDocMetadataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.docMetadata(), "DocMetadata", "json"));
  }

  if (!!tmpReq.hasTagIds()) {
    request.setTagIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tagIds(), "TagIds", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.categoryId();
  }

  if (!!request.hasConfig()) {
    query["Config"] = request.config();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.content();
  }

  if (!!request.hasDocMetadataShrink()) {
    query["DocMetadata"] = request.docMetadataShrink();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasMeta()) {
    query["Meta"] = request.meta();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  if (!!request.hasTagIdsShrink()) {
    query["TagIds"] = request.tagIdsShrink();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.url();
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
 * @summary 创建文档
 *
 * @param request CreateDocRequest
 * @return CreateDocResponse
 */
CreateDocResponse Client::createDoc(const CreateDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDocWithOptions(request, runtime);
}

/**
 * @summary 新建FAQ
 *
 * @param request CreateFaqRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFaqResponse
 */
CreateFaqResponse Client::createFaqWithOptions(const CreateFaqRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  json body = {};
  if (!!request.hasCategoryId()) {
    body["CategoryId"] = request.categoryId();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.endDate();
  }

  if (!!request.hasSolutionContent()) {
    body["SolutionContent"] = request.solutionContent();
  }

  if (!!request.hasSolutionType()) {
    body["SolutionType"] = request.solutionType();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.startDate();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.title();
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
 * @summary 新建FAQ
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasIntroduction()) {
    query["Introduction"] = request.introduction();
  }

  if (!!request.hasLanguageCode()) {
    query["LanguageCode"] = request.languageCode();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasRobotType()) {
    query["RobotType"] = request.robotType();
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
    request.setIntentDefinitionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.intentDefinition(), "IntentDefinition", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIntentDefinitionShrink()) {
    query["IntentDefinition"] = request.intentDefinitionShrink();
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
    request.setLgfDefinitionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.lgfDefinition(), "LgfDefinition", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLgfDefinitionShrink()) {
    query["LgfDefinition"] = request.lgfDefinitionShrink();
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
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
 * @summary 创建发布任务
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
    request.setDataIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.dataIdList(), "DataIdList", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasDataIdListShrink()) {
    query["DataIdList"] = request.dataIdListShrink();
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
 * @summary 创建发布任务
 *
 * @param request CreatePublishTaskRequest
 * @return CreatePublishTaskResponse
 */
CreatePublishTaskResponse Client::createPublishTask(const CreatePublishTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPublishTaskWithOptions(request, runtime);
}

/**
 * @summary 新建FAQ相似问
 *
 * @param request CreateSimQuestionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSimQuestionResponse
 */
CreateSimQuestionResponse Client::createSimQuestionWithOptions(const CreateSimQuestionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  json body = {};
  if (!!request.hasKnowledgeId()) {
    body["KnowledgeId"] = request.knowledgeId();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.title();
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
 * @summary 新建FAQ相似问
 *
 * @param request CreateSimQuestionRequest
 * @return CreateSimQuestionResponse
 */
CreateSimQuestionResponse Client::createSimQuestion(const CreateSimQuestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSimQuestionWithOptions(request, runtime);
}

/**
 * @summary 新建FAQ答案
 *
 * @param request CreateSolutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSolutionResponse
 */
CreateSolutionResponse Client::createSolutionWithOptions(const CreateSolutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.content();
  }

  if (!!request.hasContentType()) {
    query["ContentType"] = request.contentType();
  }

  if (!!request.hasKnowledgeId()) {
    query["KnowledgeId"] = request.knowledgeId();
  }

  if (!!request.hasPerspectiveCodes()) {
    query["PerspectiveCodes"] = request.perspectiveCodes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
 * @summary 新建FAQ答案
 *
 * @param request CreateSolutionRequest
 * @return CreateSolutionResponse
 */
CreateSolutionResponse Client::createSolution(const CreateSolutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSolutionWithOptions(request, runtime);
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
    request.setUserSayDefinitionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.userSayDefinition(), "UserSayDefinition", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasUserSayDefinitionShrink()) {
    query["UserSayDefinition"] = request.userSayDefinitionShrink();
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
 * @summary 删除类目
 *
 * @param request DeleteCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCategoryResponse
 */
DeleteCategoryResponse Client::deleteCategoryWithOptions(const DeleteCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  json body = {};
  if (!!request.hasCategoryId()) {
    body["CategoryId"] = request.categoryId();
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
 * @summary 删除类目
 *
 * @param request DeleteCategoryRequest
 * @return DeleteCategoryResponse
 */
DeleteCategoryResponse Client::deleteCategory(const DeleteCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCategoryWithOptions(request, runtime);
}

/**
 * @summary 删除FAQ关联问
 *
 * @param request DeleteConnQuestionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteConnQuestionResponse
 */
DeleteConnQuestionResponse Client::deleteConnQuestionWithOptions(const DeleteConnQuestionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  json body = {};
  if (!!request.hasOutlineId()) {
    body["OutlineId"] = request.outlineId();
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
 * @summary 删除FAQ关联问
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.entityId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.entityId();
  }

  if (!!request.hasEntityValueId()) {
    query["EntityValueId"] = request.entityValueId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 文档删除
 *
 * @param request DeleteDocRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDocResponse
 */
DeleteDocResponse Client::deleteDocWithOptions(const DeleteDocRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasKnowledgeId()) {
    query["KnowledgeId"] = request.knowledgeId();
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
 * @summary 文档删除
 *
 * @param request DeleteDocRequest
 * @return DeleteDocResponse
 */
DeleteDocResponse Client::deleteDoc(const DeleteDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDocWithOptions(request, runtime);
}

/**
 * @summary 删除FAQ，如果是已发布的知识，删除之后，变成已删除未发布，需要发布才能真正删除
 *
 * @param request DeleteFaqRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFaqResponse
 */
DeleteFaqResponse Client::deleteFaqWithOptions(const DeleteFaqRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  json body = {};
  if (!!request.hasKnowledgeId()) {
    body["KnowledgeId"] = request.knowledgeId();
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
 * @summary 删除FAQ，如果是已发布的知识，删除之后，变成已删除未发布，需要发布才能真正删除
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.intentId();
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.intentId();
  }

  if (!!request.hasLgfId()) {
    query["LgfId"] = request.lgfId();
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasPerspectiveId()) {
    query["PerspectiveId"] = request.perspectiveId();
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
 * @summary 删除FAQ相似问
 *
 * @param request DeleteSimQuestionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSimQuestionResponse
 */
DeleteSimQuestionResponse Client::deleteSimQuestionWithOptions(const DeleteSimQuestionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  json body = {};
  if (!!request.hasSimQuestionId()) {
    body["SimQuestionId"] = request.simQuestionId();
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
 * @summary 删除FAQ相似问
 *
 * @param request DeleteSimQuestionRequest
 * @return DeleteSimQuestionResponse
 */
DeleteSimQuestionResponse Client::deleteSimQuestion(const DeleteSimQuestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSimQuestionWithOptions(request, runtime);
}

/**
 * @summary 删除FAQ答案
 *
 * @param request DeleteSolutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSolutionResponse
 */
DeleteSolutionResponse Client::deleteSolutionWithOptions(const DeleteSolutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  json body = {};
  if (!!request.hasSolutionId()) {
    body["SolutionId"] = request.solutionId();
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
 * @summary 删除FAQ答案
 *
 * @param request DeleteSolutionRequest
 * @return DeleteSolutionResponse
 */
DeleteSolutionResponse Client::deleteSolution(const DeleteSolutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSolutionWithOptions(request, runtime);
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.intentId();
  }

  if (!!request.hasUserSayId()) {
    query["UserSayId"] = request.userSayId();
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
 * @summary 查看单个类目信息
 *
 * @param request DescribeCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCategoryResponse
 */
DescribeCategoryResponse Client::describeCategoryWithOptions(const DescribeCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  json body = {};
  if (!!request.hasCategoryId()) {
    body["CategoryId"] = request.categoryId();
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
 * @summary 查看单个类目信息
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.entityId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 文档详情
 *
 * @param request DescribeDocRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDocResponse
 */
DescribeDocResponse Client::describeDocWithOptions(const DescribeDocRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasKnowledgeId()) {
    query["KnowledgeId"] = request.knowledgeId();
  }

  if (!!request.hasShowDetail()) {
    query["ShowDetail"] = request.showDetail();
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
 * @summary 文档详情
 *
 * @param request DescribeDocRequest
 * @return DescribeDocResponse
 */
DescribeDocResponse Client::describeDoc(const DescribeDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDocWithOptions(request, runtime);
}

/**
 * @summary 知识详情
 *
 * @param request DescribeFaqRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFaqResponse
 */
DescribeFaqResponse Client::describeFaqWithOptions(const DescribeFaqRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  json body = {};
  if (!!request.hasKnowledgeId()) {
    body["KnowledgeId"] = request.knowledgeId();
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
 * @summary 知识详情
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  json body = {};
  if (!!request.hasIntentId()) {
    body["IntentId"] = request.intentId();
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasPerspectiveId()) {
    query["PerspectiveId"] = request.perspectiveId();
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasFeedback()) {
    query["Feedback"] = request.feedback();
  }

  if (!!request.hasFeedbackContent()) {
    query["FeedbackContent"] = request.feedbackContent();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMessageId()) {
    query["MessageId"] = request.messageId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasExpireTime()) {
    query["ExpireTime"] = request.expireTime();
  }

  if (!!request.hasExtraInfo()) {
    query["ExtraInfo"] = request.extraInfo();
  }

  if (!!request.hasForeignId()) {
    query["ForeignId"] = request.foreignId();
  }

  if (!!request.hasNick()) {
    query["Nick"] = request.nick();
  }

  if (!!request.hasTelephone()) {
    query["Telephone"] = request.telephone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
    query["InstanceId"] = request.instanceId();
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasRobotInstanceId()) {
    query["RobotInstanceId"] = request.robotInstanceId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 查询发布进度
 *
 * @param request GetPublishTaskStateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPublishTaskStateResponse
 */
GetPublishTaskStateResponse Client::getPublishTaskStateWithOptions(const GetPublishTaskStateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
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
 * @summary 查询发布进度
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasFrom()) {
    query["From"] = request.from();
  }

  if (!!request.hasUserAccessToken()) {
    query["UserAccessToken"] = request.userAccessToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
    query["AbilityType"] = request.abilityType();
  }

  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  json body = {};
  if (!!request.hasCategoryIds()) {
    body["CategoryIds"] = request.categoryIds();
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
    query["AgentName"] = request.agentName();
  }

  if (!!request.hasGoodsCodes()) {
    query["GoodsCodes"] = request.goodsCodes();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
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
 * @summary 类目列表
 *
 * @param request ListCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCategoryResponse
 */
ListCategoryResponse Client::listCategoryWithOptions(const ListCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  json body = {};
  if (!!request.hasKnowledgeType()) {
    body["KnowledgeType"] = request.knowledgeType();
  }

  if (!!request.hasParentCategoryId()) {
    body["ParentCategoryId"] = request.parentCategoryId();
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
 * @summary 类目列表
 *
 * @param request ListCategoryRequest
 * @return ListCategoryResponse
 */
ListCategoryResponse Client::listCategory(const ListCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCategoryWithOptions(request, runtime);
}

/**
 * @summary 查询FAQ关联问列表
 *
 * @param request ListConnQuestionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConnQuestionResponse
 */
ListConnQuestionResponse Client::listConnQuestionWithOptions(const ListConnQuestionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  json body = {};
  if (!!request.hasKnowledgeId()) {
    body["KnowledgeId"] = request.knowledgeId();
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
 * @summary 查询FAQ关联问列表
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasEntityType()) {
    query["EntityType"] = request.entityType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  json body = {};
  if (!!request.hasEntityId()) {
    body["EntityId"] = request.entityId();
  }

  if (!!request.hasEntityValueId()) {
    body["EntityValueId"] = request.entityValueId();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.keyword();
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRobotType()) {
    query["RobotType"] = request.robotType();
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIntentName()) {
    query["IntentName"] = request.intentName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.intentId();
  }

  if (!!request.hasLgfText()) {
    query["LgfText"] = request.lgfText();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasSaasGroupCodes()) {
    query["SaasGroupCodes"] = request.saasGroupCodes();
  }

  if (!!request.hasSaasName()) {
    query["SaasName"] = request.saasName();
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
    query["AgentKey"] = request.agentKey();
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
 * @summary FAQ相似问列表
 *
 * @param request ListSimQuestionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSimQuestionResponse
 */
ListSimQuestionResponse Client::listSimQuestionWithOptions(const ListSimQuestionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  json body = {};
  if (!!request.hasKnowledgeId()) {
    body["KnowledgeId"] = request.knowledgeId();
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
 * @summary FAQ相似问列表
 *
 * @param request ListSimQuestionRequest
 * @return ListSimQuestionResponse
 */
ListSimQuestionResponse Client::listSimQuestion(const ListSimQuestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSimQuestionWithOptions(request, runtime);
}

/**
 * @summary FAQ答案列表
 *
 * @param request ListSolutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSolutionResponse
 */
ListSolutionResponse Client::listSolutionWithOptions(const ListSolutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  json body = {};
  if (!!request.hasKnowledgeId()) {
    body["KnowledgeId"] = request.knowledgeId();
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
 * @summary FAQ答案列表
 *
 * @param request ListSolutionRequest
 * @return ListSolutionResponse
 */
ListSolutionResponse Client::listSolution(const ListSolutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSolutionWithOptions(request, runtime);
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  if (!!request.hasRobotInstanceId()) {
    query["RobotInstanceId"] = request.robotInstanceId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasRobotInstanceId()) {
    query["RobotInstanceId"] = request.robotInstanceId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.content();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.intentId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasUtterance()) {
    query["Utterance"] = request.utterance();
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
    query["AgentKey"] = request.agentKey();
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
 * @summary 文档重试
 *
 * @param request RetryDocRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RetryDocResponse
 */
RetryDocResponse Client::retryDocWithOptions(const RetryDocRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasKnowledgeId()) {
    query["KnowledgeId"] = request.knowledgeId();
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
 * @summary 文档重试
 *
 * @param request RetryDocRequest
 * @return RetryDocResponse
 */
RetryDocResponse Client::retryDoc(const RetryDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return retryDocWithOptions(request, runtime);
}

/**
 * @summary 文档搜索
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
    request.setCategoryIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.categoryIds(), "CategoryIds", "json"));
  }

  if (!!tmpReq.hasTagIds()) {
    request.setTagIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tagIds(), "TagIds", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasCategoryIdsShrink()) {
    query["CategoryIds"] = request.categoryIdsShrink();
  }

  if (!!request.hasCreateTimeBegin()) {
    query["CreateTimeBegin"] = request.createTimeBegin();
  }

  if (!!request.hasCreateTimeEnd()) {
    query["CreateTimeEnd"] = request.createTimeEnd();
  }

  if (!!request.hasCreateUserName()) {
    query["CreateUserName"] = request.createUserName();
  }

  if (!!request.hasEndTimeBegin()) {
    query["EndTimeBegin"] = request.endTimeBegin();
  }

  if (!!request.hasEndTimeEnd()) {
    query["EndTimeEnd"] = request.endTimeEnd();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasModifyTimeBegin()) {
    query["ModifyTimeBegin"] = request.modifyTimeBegin();
  }

  if (!!request.hasModifyTimeEnd()) {
    query["ModifyTimeEnd"] = request.modifyTimeEnd();
  }

  if (!!request.hasModifyUserName()) {
    query["ModifyUserName"] = request.modifyUserName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProcessStatus()) {
    query["ProcessStatus"] = request.processStatus();
  }

  if (!!request.hasSearchScope()) {
    query["SearchScope"] = request.searchScope();
  }

  if (!!request.hasStartTimeBegin()) {
    query["StartTimeBegin"] = request.startTimeBegin();
  }

  if (!!request.hasStartTimeEnd()) {
    query["StartTimeEnd"] = request.startTimeEnd();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTagIdsShrink()) {
    query["TagIds"] = request.tagIdsShrink();
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
 * @summary 文档搜索
 *
 * @param request SearchDocRequest
 * @return SearchDocResponse
 */
SearchDocResponse Client::searchDoc(const SearchDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchDocWithOptions(request, runtime);
}

/**
 * @summary 知识搜索
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
    request.setCategoryIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.categoryIds(), "CategoryIds", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  json body = {};
  if (!!request.hasCategoryIdsShrink()) {
    body["CategoryIds"] = request.categoryIdsShrink();
  }

  if (!!request.hasCreateTimeBegin()) {
    body["CreateTimeBegin"] = request.createTimeBegin();
  }

  if (!!request.hasCreateTimeEnd()) {
    body["CreateTimeEnd"] = request.createTimeEnd();
  }

  if (!!request.hasCreateUserName()) {
    body["CreateUserName"] = request.createUserName();
  }

  if (!!request.hasEndTimeBegin()) {
    body["EndTimeBegin"] = request.endTimeBegin();
  }

  if (!!request.hasEndTimeEnd()) {
    body["EndTimeEnd"] = request.endTimeEnd();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.keyword();
  }

  if (!!request.hasModifyTimeBegin()) {
    body["ModifyTimeBegin"] = request.modifyTimeBegin();
  }

  if (!!request.hasModifyTimeEnd()) {
    body["ModifyTimeEnd"] = request.modifyTimeEnd();
  }

  if (!!request.hasModifyUserName()) {
    body["ModifyUserName"] = request.modifyUserName();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchScope()) {
    body["SearchScope"] = request.searchScope();
  }

  if (!!request.hasStartTimeBegin()) {
    body["StartTimeBegin"] = request.startTimeBegin();
  }

  if (!!request.hasStartTimeEnd()) {
    body["StartTimeEnd"] = request.startTimeEnd();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
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
 * @summary 知识搜索
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMessageId()) {
    query["MessageId"] = request.messageId();
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
 * @summary 编辑类目
 *
 * @param request UpdateCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCategoryResponse
 */
UpdateCategoryResponse Client::updateCategoryWithOptions(const UpdateCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  json body = {};
  if (!!request.hasBizCode()) {
    body["BizCode"] = request.bizCode();
  }

  if (!!request.hasCategoryId()) {
    body["CategoryId"] = request.categoryId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
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
 * @summary 编辑类目
 *
 * @param request UpdateCategoryRequest
 * @return UpdateCategoryResponse
 */
UpdateCategoryResponse Client::updateCategory(const UpdateCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCategoryWithOptions(request, runtime);
}

/**
 * @summary 更新FAQ关联问
 *
 * @param request UpdateConnQuestionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateConnQuestionResponse
 */
UpdateConnQuestionResponse Client::updateConnQuestionWithOptions(const UpdateConnQuestionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  json body = {};
  if (!!request.hasConnQuestionId()) {
    body["ConnQuestionId"] = request.connQuestionId();
  }

  if (!!request.hasOutlineId()) {
    body["OutlineId"] = request.outlineId();
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
 * @summary 更新FAQ关联问
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.entityId();
  }

  if (!!request.hasEntityName()) {
    query["EntityName"] = request.entityName();
  }

  if (!!request.hasEntityType()) {
    query["EntityType"] = request.entityType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
    request.setSynonymsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.synonyms(), "Synonyms", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.content();
  }

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.entityId();
  }

  if (!!request.hasEntityValueId()) {
    query["EntityValueId"] = request.entityValueId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  json body = {};
  if (!!request.hasSynonymsShrink()) {
    body["Synonyms"] = request.synonymsShrink();
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
 * @summary 文档变更
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
    request.setDocMetadataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.docMetadata(), "DocMetadata", "json"));
  }

  if (!!tmpReq.hasTagIds()) {
    request.setTagIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tagIds(), "TagIds", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.categoryId();
  }

  if (!!request.hasConfig()) {
    query["Config"] = request.config();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.content();
  }

  if (!!request.hasDocMetadataShrink()) {
    query["DocMetadata"] = request.docMetadataShrink();
  }

  if (!!request.hasDocName()) {
    query["DocName"] = request.docName();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasKnowledgeId()) {
    query["KnowledgeId"] = request.knowledgeId();
  }

  if (!!request.hasMeta()) {
    query["Meta"] = request.meta();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  if (!!request.hasTagIdsShrink()) {
    query["TagIds"] = request.tagIdsShrink();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
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
 * @summary 文档变更
 *
 * @param request UpdateDocRequest
 * @return UpdateDocResponse
 */
UpdateDocResponse Client::updateDoc(const UpdateDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDocWithOptions(request, runtime);
}

/**
 * @summary 更新FAQ
 *
 * @param request UpdateFaqRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFaqResponse
 */
UpdateFaqResponse Client::updateFaqWithOptions(const UpdateFaqRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  json body = {};
  if (!!request.hasCategoryId()) {
    body["CategoryId"] = request.categoryId();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.endDate();
  }

  if (!!request.hasKnowledgeId()) {
    body["KnowledgeId"] = request.knowledgeId();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.startDate();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.title();
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
 * @summary 更新FAQ
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIntroduction()) {
    query["Introduction"] = request.introduction();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
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
    request.setIntentDefinitionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.intentDefinition(), "IntentDefinition", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIntentDefinitionShrink()) {
    query["IntentDefinition"] = request.intentDefinitionShrink();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.intentId();
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
    request.setLgfDefinitionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.lgfDefinition(), "LgfDefinition", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLgfDefinitionShrink()) {
    query["LgfDefinition"] = request.lgfDefinitionShrink();
  }

  if (!!request.hasLgfId()) {
    query["LgfId"] = request.lgfId();
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
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPerspectiveId()) {
    query["PerspectiveId"] = request.perspectiveId();
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
 * @summary 更新FAQ相似问
 *
 * @param request UpdateSimQuestionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSimQuestionResponse
 */
UpdateSimQuestionResponse Client::updateSimQuestionWithOptions(const UpdateSimQuestionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  json body = {};
  if (!!request.hasSimQuestionId()) {
    body["SimQuestionId"] = request.simQuestionId();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.title();
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
 * @summary 更新FAQ相似问
 *
 * @param request UpdateSimQuestionRequest
 * @return UpdateSimQuestionResponse
 */
UpdateSimQuestionResponse Client::updateSimQuestion(const UpdateSimQuestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSimQuestionWithOptions(request, runtime);
}

/**
 * @summary 更新FAQ答案
 *
 * @param request UpdateSolutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSolutionResponse
 */
UpdateSolutionResponse Client::updateSolutionWithOptions(const UpdateSolutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.content();
  }

  if (!!request.hasContentType()) {
    body["ContentType"] = request.contentType();
  }

  if (!!request.hasPerspectiveCodes()) {
    body["PerspectiveCodes"] = request.perspectiveCodes();
  }

  if (!!request.hasSolutionId()) {
    body["SolutionId"] = request.solutionId();
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
 * @summary 更新FAQ答案
 *
 * @param request UpdateSolutionRequest
 * @return UpdateSolutionResponse
 */
UpdateSolutionResponse Client::updateSolution(const UpdateSolutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSolutionWithOptions(request, runtime);
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
    request.setUserSayDefinitionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.userSayDefinition(), "UserSayDefinition", "json"));
  }

  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasUserSayDefinitionShrink()) {
    query["UserSayDefinition"] = request.userSayDefinitionShrink();
  }

  if (!!request.hasUserSayId()) {
    query["UserSayId"] = request.userSayId();
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