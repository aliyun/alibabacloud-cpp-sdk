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
  this->_endpointRule = "regional";
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
 * @summary Retrieves the connection information for streaming calls.
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
 * @summary Retrieves the connection information for streaming calls.
 *
 * @param request ApplyForStreamAccessTokenRequest
 * @return ApplyForStreamAccessTokenResponse
 */
ApplyForStreamAccessTokenResponse Client::applyForStreamAccessToken(const ApplyForStreamAccessTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyForStreamAccessTokenWithOptions(request, runtime);
}

/**
 * @summary Suggests FAQs from the knowledge base based on a user query.
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
 * @summary Suggests FAQs from the knowledge base based on a user query.
 *
 * @param request AssociateRequest
 * @return AssociateResponse
 */
AssociateResponse Client::associate(const AssociateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateWithOptions(request, runtime);
}

/**
 * @summary Retrieves the welcome message.
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
 * @summary Retrieves the welcome message.
 *
 * @param request BeginSessionRequest
 * @return BeginSessionResponse
 */
BeginSessionResponse Client::beginSession(const BeginSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return beginSessionWithOptions(request, runtime);
}

/**
 * @summary Cancels or interrupts a specified conversation.
 *
 * @description Only new version chatbots are supported. Only data within the last 90 days can be queried.
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
 * @summary Cancels or interrupts a specified conversation.
 *
 * @description Only new version chatbots are supported. Only data within the last 90 days can be queried.
 *
 * @param request CancelChatRequest
 * @return CancelChatResponse
 */
CancelChatResponse Client::cancelChat(const CancelChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelChatWithOptions(request, runtime);
}

/**
 * @summary Cancels a chatbot publish task during the publishing process.
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
 * @summary Cancels a chatbot publish task during the publishing process.
 *
 * @param request CancelInstancePublishTaskRequest
 * @return CancelInstancePublishTaskResponse
 */
CancelInstancePublishTaskResponse Client::cancelInstancePublishTask(const CancelInstancePublishTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelInstancePublishTaskWithOptions(request, runtime);
}

/**
 * @summary Cancels a publish task that is in progress.
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
 * @summary Cancels a publish task that is in progress.
 *
 * @param request CancelPublishTaskRequest
 * @return CancelPublishTaskResponse
 */
CancelPublishTaskResponse Client::cancelPublishTask(const CancelPublishTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelPublishTaskWithOptions(request, runtime);
}

/**
 * @summary Initiates a conversation with a chatbot by using the unique chatbot identifier (chatbot ID). This operation is applicable only to Chatbot (legacy).
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
 * @summary Initiates a conversation with a chatbot by using the unique chatbot identifier (chatbot ID). This operation is applicable only to Chatbot (legacy).
 *
 * @param request ChatRequest
 * @return ChatResponse
 */
ChatResponse Client::chat(const ChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatWithOptions(request, runtime);
}

/**
 * @summary Ignores alerts and continues publishing when the chatbot triggers a publish alert.
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
 * @summary Ignores alerts and continues publishing when the chatbot triggers a publish alert.
 *
 * @param request ContinueInstancePublishTaskRequest
 * @return ContinueInstancePublishTaskResponse
 */
ContinueInstancePublishTaskResponse Client::continueInstancePublishTask(const ContinueInstancePublishTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return continueInstancePublishTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a category.
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
 * @summary Creates a category.
 *
 * @param request CreateCategoryRequest
 * @return CreateCategoryResponse
 */
CreateCategoryResponse Client::createCategory(const CreateCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCategoryWithOptions(request, runtime);
}

/**
 * @summary Adds associated knowledge to a knowledge entry.
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
 * @summary Adds associated knowledge to a knowledge entry.
 *
 * @param request CreateConnQuestionRequest
 * @return CreateConnQuestionResponse
 */
CreateConnQuestionResponse Client::createConnQuestion(const CreateConnQuestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createConnQuestionWithOptions(request, runtime);
}

/**
 * @summary Creates an entity, specifically the meta information of the entity, such as the entity name and entity type.
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
 * @summary Creates an entity, specifically the meta information of the entity, such as the entity name and entity type.
 *
 * @param request CreateDSEntityRequest
 * @return CreateDSEntityResponse
 */
CreateDSEntityResponse Client::createDSEntity(const CreateDSEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDSEntityWithOptions(request, runtime);
}

/**
 * @summary Adds entity member information for a specified entity, including the entity value and the corresponding synonym list. Entity values and synonyms must be unique within the same entity.
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
 * @summary Adds entity member information for a specified entity, including the entity value and the corresponding synonym list. Entity values and synonyms must be unique within the same entity.
 *
 * @param request CreateDSEntityValueRequest
 * @return CreateDSEntityValueResponse
 */
CreateDSEntityValueResponse Client::createDSEntityValue(const CreateDSEntityValueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDSEntityValueWithOptions(request, runtime);
}

/**
 * @summary Creates a document.
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
 * @summary Creates a document.
 *
 * @param request CreateDocRequest
 * @return CreateDocResponse
 */
CreateDocResponse Client::createDoc(const CreateDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDocWithOptions(request, runtime);
}

/**
 * @summary Creates a knowledge entry.
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
 * @summary Creates a knowledge entry.
 *
 * @param request CreateFaqRequest
 * @return CreateFaqResponse
 */
CreateFaqResponse Client::createFaq(const CreateFaqRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFaqWithOptions(request, runtime);
}

/**
 * @summary Creates a chatbot in a sandbox environment.
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
 * @summary Creates a chatbot in a sandbox environment.
 *
 * @param request CreateInstanceRequest
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstance(const CreateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstanceWithOptions(request, runtime);
}

/**
 * @summary Publishes a sandbox chatbot to the production environment.
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
 * @summary Publishes a sandbox chatbot to the production environment.
 *
 * @param request CreateInstancePublishTaskRequest
 * @return CreateInstancePublishTaskResponse
 */
CreateInstancePublishTaskResponse Client::createInstancePublishTask(const CreateInstancePublishTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstancePublishTaskWithOptions(request, runtime);
}

/**
 * @summary Creates an intent. The intent includes meta information such as the intent name, intent alias, and associated slot information, but does not include intent utterances or LGF.
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
 * @summary Creates an intent. The intent includes meta information such as the intent name, intent alias, and associated slot information, but does not include intent utterances or LGF.
 *
 * @param request CreateIntentRequest
 * @return CreateIntentResponse
 */
CreateIntentResponse Client::createIntent(const CreateIntentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIntentWithOptions(request, runtime);
}

/**
 * @summary Creates an advanced semantic configuration (LGF) for a specified intent.
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
 * @summary Creates an advanced semantic configuration (LGF) for a specified intent.
 *
 * @param request CreateLgfRequest
 * @return CreateLgfResponse
 */
CreateLgfResponse Client::createLgf(const CreateLgfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLgfWithOptions(request, runtime);
}

/**
 * @summary Creates a perspective.
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
 * @summary Creates a perspective.
 *
 * @param request CreatePerspectiveRequest
 * @return CreatePerspectiveResponse
 */
CreatePerspectiveResponse Client::createPerspective(const CreatePerspectiveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPerspectiveWithOptions(request, runtime);
}

/**
 * @summary Creates a publish task in the publish center.
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
 * @summary Creates a publish task in the publish center.
 *
 * @param request CreatePublishTaskRequest
 * @return CreatePublishTaskResponse
 */
CreatePublishTaskResponse Client::createPublishTask(const CreatePublishTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPublishTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a similar question.
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
 * @summary Creates a similar question.
 *
 * @param request CreateSimQuestionRequest
 * @return CreateSimQuestionResponse
 */
CreateSimQuestionResponse Client::createSimQuestion(const CreateSimQuestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSimQuestionWithOptions(request, runtime);
}

/**
 * @summary Creates a knowledge answer.
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
 * @summary Creates a knowledge answer.
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
 * @summary Adds utterance information to a specified intent.
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
 * @summary Adds utterance information to a specified intent.
 *
 * @param request CreateUserSayRequest
 * @return CreateUserSayResponse
 */
CreateUserSayResponse Client::createUserSay(const CreateUserSayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserSayWithOptions(request, runtime);
}

/**
 * @summary Deletes a category. A published category changes to the deleted and unpublished state, while an unpublished category is deleted directly.
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
 * @summary Deletes a category. A published category changes to the deleted and unpublished state, while an unpublished category is deleted directly.
 *
 * @param request DeleteCategoryRequest
 * @return DeleteCategoryResponse
 */
DeleteCategoryResponse Client::deleteCategory(const DeleteCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCategoryWithOptions(request, runtime);
}

/**
 * @summary Deletes the associated knowledge of a knowledge item.
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
 * @summary Deletes the associated knowledge of a knowledge item.
 *
 * @param request DeleteConnQuestionRequest
 * @return DeleteConnQuestionResponse
 */
DeleteConnQuestionResponse Client::deleteConnQuestion(const DeleteConnQuestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteConnQuestionWithOptions(request, runtime);
}

/**
 * @summary Deletes an entity. This operation cascade deletes all entity members, synonyms, and regular expressions under the entity.
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
 * @summary Deletes an entity. This operation cascade deletes all entity members, synonyms, and regular expressions under the entity.
 *
 * @param request DeleteDSEntityRequest
 * @return DeleteDSEntityResponse
 */
DeleteDSEntityResponse Client::deleteDSEntity(const DeleteDSEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDSEntityWithOptions(request, runtime);
}

/**
 * @summary Deletes a member of a specified entity. If the entity is a standard entity, the synonyms of the member are also deleted, if any.
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
 * @summary Deletes a member of a specified entity. If the entity is a standard entity, the synonyms of the member are also deleted, if any.
 *
 * @param request DeleteDSEntityValueRequest
 * @return DeleteDSEntityValueResponse
 */
DeleteDSEntityValueResponse Client::deleteDSEntityValue(const DeleteDSEntityValueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDSEntityValueWithOptions(request, runtime);
}

/**
 * @summary Deletes a document.
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
 * @summary Deletes a document.
 *
 * @param request DeleteDocRequest
 * @return DeleteDocResponse
 */
DeleteDocResponse Client::deleteDoc(const DeleteDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDocWithOptions(request, runtime);
}

/**
 * @summary Deletes a knowledge entry.
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
 * @summary Deletes a knowledge entry.
 *
 * @param request DeleteFaqRequest
 * @return DeleteFaqResponse
 */
DeleteFaqResponse Client::deleteFaq(const DeleteFaqRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFaqWithOptions(request, runtime);
}

/**
 * @summary Deletes a chatbot from both the sandbox and production environments.
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
 * @summary Deletes a chatbot from both the sandbox and production environments.
 *
 * @param request DeleteInstanceRequest
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstance(const DeleteInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInstanceWithOptions(request, runtime);
}

/**
 * @summary Deletes an intent and cascade deletes all intent utterances and advanced semantic configurations (LGF) under the intent.
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
 * @summary Deletes an intent and cascade deletes all intent utterances and advanced semantic configurations (LGF) under the intent.
 *
 * @param request DeleteIntentRequest
 * @return DeleteIntentResponse
 */
DeleteIntentResponse Client::deleteIntent(const DeleteIntentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIntentWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified advanced semantic configuration.
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
 * @summary Deletes a specified advanced semantic configuration.
 *
 * @param request DeleteLgfRequest
 * @return DeleteLgfResponse
 */
DeleteLgfResponse Client::deleteLgf(const DeleteLgfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLgfWithOptions(request, runtime);
}

/**
 * @summary Deletes a perspective.
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
 * @summary Deletes a perspective.
 *
 * @param request DeletePerspectiveRequest
 * @return DeletePerspectiveResponse
 */
DeletePerspectiveResponse Client::deletePerspective(const DeletePerspectiveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePerspectiveWithOptions(request, runtime);
}

/**
 * @summary Deletes a similar question.
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
 * @summary Deletes a similar question.
 *
 * @param request DeleteSimQuestionRequest
 * @return DeleteSimQuestionResponse
 */
DeleteSimQuestionResponse Client::deleteSimQuestion(const DeleteSimQuestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSimQuestionWithOptions(request, runtime);
}

/**
 * @summary Deletes an answer.
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
 * @summary Deletes an answer.
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
 * @summary Modifies the utterance information of an intent.
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
 * @summary Modifies the utterance information of an intent.
 *
 * @param request DeleteUserSayRequest
 * @return DeleteUserSayResponse
 */
DeleteUserSayResponse Client::deleteUserSay(const DeleteUserSayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserSayWithOptions(request, runtime);
}

/**
 * @summary Queries the information of a single category.
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
 * @summary Queries the information of a single category.
 *
 * @param request DescribeCategoryRequest
 * @return DescribeCategoryResponse
 */
DescribeCategoryResponse Client::describeCategory(const DescribeCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCategoryWithOptions(request, runtime);
}

/**
 * @summary Queries the metadata of a specified entity under a specified chatbot, such as entity type, entity name, creation time, and modification time.
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
 * @summary Queries the metadata of a specified entity under a specified chatbot, such as entity type, entity name, creation time, and modification time.
 *
 * @param request DescribeDSEntityRequest
 * @return DescribeDSEntityResponse
 */
DescribeDSEntityResponse Client::describeDSEntity(const DescribeDSEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDSEntityWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a document.
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
 * @summary Queries the details of a document.
 *
 * @param request DescribeDocRequest
 * @return DescribeDocResponse
 */
DescribeDocResponse Client::describeDoc(const DescribeDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDocWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a knowledge entry.
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
 * @summary Queries the details of a knowledge entry.
 *
 * @param request DescribeFaqRequest
 * @return DescribeFaqResponse
 */
DescribeFaqResponse Client::describeFaq(const DescribeFaqRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFaqWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a chatbot.
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
 * @summary Queries the details of a chatbot.
 *
 * @param request DescribeInstanceRequest
 * @return DescribeInstanceResponse
 */
DescribeInstanceResponse Client::describeInstance(const DescribeInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceWithOptions(request, runtime);
}

/**
 * @summary Returns the metadata of a specified intent, such as the intent type, intent name, creation time, and modification time.
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
 * @summary Returns the metadata of a specified intent, such as the intent type, intent name, creation time, and modification time.
 *
 * @param request DescribeIntentRequest
 * @return DescribeIntentResponse
 */
DescribeIntentResponse Client::describeIntent(const DescribeIntentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIntentWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a perspective.
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
 * @summary Queries the details of a perspective.
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
 * @summary Saves user feedback on Q&A results.
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
 * @summary Saves user feedback on Q&A results.
 *
 * @param request FeedbackRequest
 * @return FeedbackResponse
 */
FeedbackResponse Client::feedback(const FeedbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return feedbackWithOptions(request, runtime);
}

/**
 * @summary Retrieves a token for passwordless logon in the chat window, which carries the enterprise identity of the user.
 *
 * @description For security reasons, the generated token is valid only for the first use within the expiration period. If the same user logs on from multiple browsers, call this operation multiple times.
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
 * @summary Retrieves a token for passwordless logon in the chat window, which carries the enterprise identity of the user.
 *
 * @description For security reasons, the generated token is valid only for the first use within the expiration period. If the same user logs on from multiple browsers, call this operation multiple times.
 *
 * @param request GenerateUserAccessTokenRequest
 * @return GenerateUserAccessTokenResponse
 */
GenerateUserAccessTokenResponse Client::generateUserAccessToken(const GenerateUserAccessTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateUserAccessTokenWithOptions(request, runtime);
}

/**
 * @summary Retrieves the business space ID.
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
 * @summary Retrieves the business space ID.
 *
 * @param request GetAgentInfoRequest
 * @return GetAgentInfoResponse
 */
GetAgentInfoResponse Client::getAgentInfo(const GetAgentInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgentInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieves the result of an asynchronous service execution. This operation is used together with the Chat operation.
 *
 * @description Retrieves the result of an asynchronous service execution.
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
 * @summary Retrieves the result of an asynchronous service execution. This operation is used together with the Chat operation.
 *
 * @description Retrieves the result of an asynchronous service execution.
 *
 * @param request GetAsyncResultRequest
 * @return GetAsyncResultResponse
 */
GetAsyncResultResponse Client::getAsyncResult(const GetAsyncResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAsyncResultWithOptions(request, runtime);
}

/**
 * @summary Queries the overview metrics of chatbot Q&A.
 *
 * @description Only data from T-1 (excluding the current day) can be queried.
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
 * @summary Queries the overview metrics of chatbot Q&A.
 *
 * @description Only data from T-1 (excluding the current day) can be queried.
 *
 * @param request GetBotSessionDataRequest
 * @return GetBotSessionDataResponse
 */
GetBotSessionDataResponse Client::getBotSessionData(const GetBotSessionDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBotSessionDataWithOptions(request, runtime);
}

/**
 * @summary Queries the publish progress of a chatbot.
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
 * @summary Queries the publish progress of a chatbot.
 *
 * @param request GetInstancePublishTaskStateRequest
 * @return GetInstancePublishTaskStateResponse
 */
GetInstancePublishTaskStateResponse Client::getInstancePublishTaskState(const GetInstancePublishTaskStateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstancePublishTaskStateWithOptions(request, runtime);
}

/**
 * @summary Queries the publish progress.
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
 * @summary Queries the publish progress.
 *
 * @param request GetPublishTaskStateRequest
 * @return GetPublishTaskStateResponse
 */
GetPublishTaskStateResponse Client::getPublishTaskState(const GetPublishTaskStateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPublishTaskStateWithOptions(request, runtime);
}

/**
 * @summary Initializes an IM connection with custom settings by using the from value generated from the channel backend configuration. Supports passing a user authentication token during initialization.
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
 * @summary Initializes an IM connection with custom settings by using the from value generated from the channel backend configuration. Supports passing a user authentication token during initialization.
 *
 * @param request InitIMConnectRequest
 * @return InitIMConnectResponse
 */
InitIMConnectResponse Client::initIMConnect(const InitIMConnectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initIMConnectWithOptions(request, runtime);
}

/**
 * @summary Associates knowledge categories with a chatbot.
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
 * @summary Associates knowledge categories with a chatbot.
 *
 * @param request LinkInstanceCategoryRequest
 * @return LinkInstanceCategoryResponse
 */
LinkInstanceCategoryResponse Client::linkInstanceCategory(const LinkInstanceCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return linkInstanceCategoryWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of business spaces for the current Alibaba Cloud account.
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
 * @summary Retrieves the list of business spaces for the current Alibaba Cloud account.
 *
 * @param request ListAgentRequest
 * @return ListAgentResponse
 */
ListAgentResponse Client::listAgent(const ListAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAgentWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of categories.
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
 * @summary Retrieves the list of categories.
 *
 * @param request ListCategoryRequest
 * @return ListCategoryResponse
 */
ListCategoryResponse Client::listCategory(const ListCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCategoryWithOptions(request, runtime);
}

/**
 * @summary Queries the list of associated questions for a knowledge item.
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
 * @summary Queries the list of associated questions for a knowledge item.
 *
 * @param request ListConnQuestionRequest
 * @return ListConnQuestionResponse
 */
ListConnQuestionResponse Client::listConnQuestion(const ListConnQuestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listConnQuestionWithOptions(request, runtime);
}

/**
 * @summary Queries the list of entities under a specified chatbot. Only the metadata of each entity is returned, such as entity type, entity name, creation time, and modification time.
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
 * @summary Queries the list of entities under a specified chatbot. Only the metadata of each entity is returned, such as entity type, entity name, creation time, and modification time.
 *
 * @param request ListDSEntityRequest
 * @return ListDSEntityResponse
 */
ListDSEntityResponse Client::listDSEntity(const ListDSEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDSEntityWithOptions(request, runtime);
}

/**
 * @summary Queries the list and details of entity members for a specified entity. Keyword filtering (contains) is supported. The filtering scope includes entity values and synonyms.
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
 * @summary Queries the list and details of entity members for a specified entity. Keyword filtering (contains) is supported. The filtering scope includes entity values and synonyms.
 *
 * @param request ListDSEntityValueRequest
 * @return ListDSEntityValueResponse
 */
ListDSEntityValueResponse Client::listDSEntityValue(const ListDSEntityValueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDSEntityValueWithOptions(request, runtime);
}

/**
 * @summary Queries the list of chatbots.
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
 * @summary Queries the list of chatbots.
 *
 * @param request ListInstanceRequest
 * @return ListInstanceResponse
 */
ListInstanceResponse Client::listInstance(const ListInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the list of intents under a specified chatbot. Only the metadata of each intent is returned, such as the intent type, intent name, creation time, and modification time.
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
 * @summary Queries the list of intents under a specified chatbot. Only the metadata of each intent is returned, such as the intent type, intent name, creation time, and modification time.
 *
 * @param request ListIntentRequest
 * @return ListIntentResponse
 */
ListIntentResponse Client::listIntent(const ListIntentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIntentWithOptions(request, runtime);
}

/**
 * @summary Queries the advanced semantic configuration (LGF) of a specified intent.
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
 * @summary Queries the advanced semantic configuration (LGF) of a specified intent.
 *
 * @param request ListLgfRequest
 * @return ListLgfResponse
 */
ListLgfResponse Client::listLgf(const ListLgfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLgfWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of SaaS integration information.
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
 * @summary Retrieves the list of SaaS integration information.
 *
 * @param request ListSaasInfoRequest
 * @return ListSaasInfoResponse
 */
ListSaasInfoResponse Client::listSaasInfo(const ListSaasInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSaasInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of permission integration information. You can use the permission groups returned in this list to grant permissions to users.
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
 * @summary Retrieves the list of permission integration information. You can use the permission groups returned in this list to grant permissions to users.
 *
 * @param request ListSaasPermissionGroupInfosRequest
 * @return ListSaasPermissionGroupInfosResponse
 */
ListSaasPermissionGroupInfosResponse Client::listSaasPermissionGroupInfos(const ListSaasPermissionGroupInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSaasPermissionGroupInfosWithOptions(request, runtime);
}

/**
 * @summary Queries the list of similar questions for a knowledge entry.
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
 * @summary Queries the list of similar questions for a knowledge entry.
 *
 * @param request ListSimQuestionRequest
 * @return ListSimQuestionResponse
 */
ListSimQuestionResponse Client::listSimQuestion(const ListSimQuestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSimQuestionWithOptions(request, runtime);
}

/**
 * @summary Queries the list of answers for a knowledge item.
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
 * @summary Queries the list of answers for a knowledge item.
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
 * @summary Retrieves the session history details.
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
 * @summary Retrieves the session history details.
 *
 * @param request ListTongyiChatHistorysRequest
 * @return ListTongyiChatHistorysResponse
 */
ListTongyiChatHistorysResponse Client::listTongyiChatHistorys(const ListTongyiChatHistorysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTongyiChatHistorysWithOptions(request, runtime);
}

/**
 * @summary Queries the conversation records of a single session for Chatbot Tongyi Edition.
 *
 * @description Only conversation records from the last 2 hours can be queried.
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
 * @summary Queries the conversation records of a single session for Chatbot Tongyi Edition.
 *
 * @description Only conversation records from the last 2 hours can be queried.
 *
 * @param request ListTongyiConversationLogsRequest
 * @return ListTongyiConversationLogsResponse
 */
ListTongyiConversationLogsResponse Client::listTongyiConversationLogs(const ListTongyiConversationLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTongyiConversationLogsWithOptions(request, runtime);
}

/**
 * @summary Queries the utterance content and associated slot information of a specified intent. Supports filtering utterances by keyword (contains).
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
 * @summary Queries the utterance content and associated slot information of a specified intent. Supports filtering utterances by keyword (contains).
 *
 * @param request ListUserSayRequest
 * @return ListUserSayResponse
 */
ListUserSayResponse Client::listUserSay(const ListUserSayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserSayWithOptions(request, runtime);
}

/**
 * @summary Returns the natural language understanding (NLU) result of a chatbot for a user query. Currently, only NLU information from dialog flow and the central controller is supported. Other engines will be supported as needed.
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
 * @summary Returns the natural language understanding (NLU) result of a chatbot for a user query. Currently, only NLU information from dialog flow and the central controller is supported. Other engines will be supported as needed.
 *
 * @param request NluRequest
 * @return NluResponse
 */
NluResponse Client::nlu(const NluRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return nluWithOptions(request, runtime);
}

/**
 * @summary Queries the list of perspectives.
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
 * @summary Queries the list of perspectives.
 *
 * @param request QueryPerspectivesRequest
 * @return QueryPerspectivesResponse
 */
QueryPerspectivesResponse Client::queryPerspectives(const QueryPerspectivesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPerspectivesWithOptions(request, runtime);
}

/**
 * @summary Retries document processing.
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
 * @summary Retries document processing.
 *
 * @param request RetryDocRequest
 * @return RetryDocResponse
 */
RetryDocResponse Client::retryDoc(const RetryDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return retryDocWithOptions(request, runtime);
}

/**
 * @summary Searches for documents.
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
 * @summary Searches for documents.
 *
 * @param request SearchDocRequest
 * @return SearchDocResponse
 */
SearchDocResponse Client::searchDoc(const SearchDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchDocWithOptions(request, runtime);
}

/**
 * @summary Searches for knowledge.
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
 * @summary Searches for knowledge.
 *
 * @param request SearchFaqRequest
 * @return SearchFaqResponse
 */
SearchFaqResponse Client::searchFaq(const SearchFaqRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchFaqWithOptions(request, runtime);
}

/**
 * @summary Retrieves the debugging information for large language model Q&A.
 *
 * @description Supports only new-version chatbots. You can query only data generated within the last 90 days.
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
 * @summary Retrieves the debugging information for large language model Q&A.
 *
 * @description Supports only new-version chatbots. You can query only data generated within the last 90 days.
 *
 * @param request TongyiChatDebugInfoRequest
 * @return TongyiChatDebugInfoResponse
 */
TongyiChatDebugInfoResponse Client::tongyiChatDebugInfo(const TongyiChatDebugInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tongyiChatDebugInfoWithOptions(request, runtime);
}

/**
 * @summary Updates a category.
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
 * @summary Updates a category.
 *
 * @param request UpdateCategoryRequest
 * @return UpdateCategoryResponse
 */
UpdateCategoryResponse Client::updateCategory(const UpdateCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCategoryWithOptions(request, runtime);
}

/**
 * @summary Updates an association.
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
 * @summary Updates an association.
 *
 * @param request UpdateConnQuestionRequest
 * @return UpdateConnQuestionResponse
 */
UpdateConnQuestionResponse Client::updateConnQuestion(const UpdateConnQuestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateConnQuestionWithOptions(request, runtime);
}

/**
 * @summary Modifies the meta information of an entity. Only the entity name can be modified. The entity type cannot be modified.
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
 * @summary Modifies the meta information of an entity. Only the entity name can be modified. The entity type cannot be modified.
 *
 * @param request UpdateDSEntityRequest
 * @return UpdateDSEntityResponse
 */
UpdateDSEntityResponse Client::updateDSEntity(const UpdateDSEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDSEntityWithOptions(request, runtime);
}

/**
 * @summary Modifies a member of a specified entity. Two types of data can be modified: entity values with synonyms, and regular expressions. Note: Adding a regular expression to a standard entity is not allowed, and vice versa.
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
 * @summary Modifies a member of a specified entity. Two types of data can be modified: entity values with synonyms, and regular expressions. Note: Adding a regular expression to a standard entity is not allowed, and vice versa.
 *
 * @param request UpdateDSEntityValueRequest
 * @return UpdateDSEntityValueResponse
 */
UpdateDSEntityValueResponse Client::updateDSEntityValue(const UpdateDSEntityValueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDSEntityValueWithOptions(request, runtime);
}

/**
 * @summary Updates a document.
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
 * @summary Updates a document.
 *
 * @param request UpdateDocRequest
 * @return UpdateDocResponse
 */
UpdateDocResponse Client::updateDoc(const UpdateDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDocWithOptions(request, runtime);
}

/**
 * @summary Edits a knowledge entry.
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
 * @summary Edits a knowledge entry.
 *
 * @param request UpdateFaqRequest
 * @return UpdateFaqResponse
 */
UpdateFaqResponse Client::updateFaq(const UpdateFaqRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFaqWithOptions(request, runtime);
}

/**
 * @summary Updates the name and description of a chatbot.
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
 * @summary Updates the name and description of a chatbot.
 *
 * @param request UpdateInstanceRequest
 * @return UpdateInstanceResponse
 */
UpdateInstanceResponse Client::updateInstance(const UpdateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateInstanceWithOptions(request, runtime);
}

/**
 * @summary Modifies an intent, including the meta information of the intent, such as the intent name, intent alias, and slot information associated with the intent. This operation does not include intent utterances or LGF.
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
 * @summary Modifies an intent, including the meta information of the intent, such as the intent name, intent alias, and slot information associated with the intent. This operation does not include intent utterances or LGF.
 *
 * @param request UpdateIntentRequest
 * @return UpdateIntentResponse
 */
UpdateIntentResponse Client::updateIntent(const UpdateIntentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIntentWithOptions(request, runtime);
}

/**
 * @summary Creates an advanced semantic configuration (LGF) for a specified intent.
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
 * @summary Creates an advanced semantic configuration (LGF) for a specified intent.
 *
 * @param request UpdateLgfRequest
 * @return UpdateLgfResponse
 */
UpdateLgfResponse Client::updateLgf(const UpdateLgfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLgfWithOptions(request, runtime);
}

/**
 * @summary Updates the name and description of a perspective.
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
 * @summary Updates the name and description of a perspective.
 *
 * @param request UpdatePerspectiveRequest
 * @return UpdatePerspectiveResponse
 */
UpdatePerspectiveResponse Client::updatePerspective(const UpdatePerspectiveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePerspectiveWithOptions(request, runtime);
}

/**
 * @summary Updates a similar question.
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
 * @summary Updates a similar question.
 *
 * @param request UpdateSimQuestionRequest
 * @return UpdateSimQuestionResponse
 */
UpdateSimQuestionResponse Client::updateSimQuestion(const UpdateSimQuestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSimQuestionWithOptions(request, runtime);
}

/**
 * @summary Updates an answer.
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
 * @summary Updates an answer.
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
 * @summary Modifies the utterance information of an intent.
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
 * @summary Modifies the utterance information of an intent.
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