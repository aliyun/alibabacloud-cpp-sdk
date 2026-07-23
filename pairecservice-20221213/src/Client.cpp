#include <darabonba/Core.hpp>
#include <alibabacloud/PaiRecService20221213.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::PaiRecService20221213::Models;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{

AlibabaCloud::PaiRecService20221213::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"us-west-1" , "pairecservice.us-west-1.aliyuncs.com"},
    {"us-east-1" , "pairecservice.us-east-1.aliyuncs.com"},
    {"eu-central-1" , "pairecservice.eu-central-1.aliyuncs.com"},
    {"cn-shenzhen" , "pairecservice.cn-shenzhen.aliyuncs.com"},
    {"cn-shanghai" , "pairecservice.cn-shanghai.aliyuncs.com"},
    {"cn-hongkong" , "pairecservice.cn-hongkong.aliyuncs.com"},
    {"cn-hangzhou" , "pairecservice.cn-hangzhou.aliyuncs.com"},
    {"cn-beijing" , "pairecservice.cn-beijing.aliyuncs.com"},
    {"ap-southeast-5" , "pairecservice.ap-southeast-5.aliyuncs.com"},
    {"ap-southeast-1" , "pairecservice.ap-southeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("pairecservice", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Applies an engine configuration.
 *
 * @param request ApplyEngineConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyEngineConfigResponse
 */
ApplyEngineConfigResponse Client::applyEngineConfigWithOptions(const string &EngineConfigId, const ApplyEngineConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApplyEngineConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/engineconfigs/" , Darabonba::Encode::Encoder::percentEncode(EngineConfigId) , "/action/apply")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyEngineConfigResponse>();
}

/**
 * @summary Applies an engine configuration.
 *
 * @param request ApplyEngineConfigRequest
 * @return ApplyEngineConfigResponse
 */
ApplyEngineConfigResponse Client::applyEngineConfig(const string &EngineConfigId, const ApplyEngineConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return applyEngineConfigWithOptions(EngineConfigId, request, headers, runtime);
}

/**
 * @summary Performs data backflow for the latest job of a specified feature consistency check job configuration.
 *
 * @param request BackflowFeatureConsistencyCheckJobDataRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BackflowFeatureConsistencyCheckJobDataResponse
 */
BackflowFeatureConsistencyCheckJobDataResponse Client::backflowFeatureConsistencyCheckJobDataWithOptions(const BackflowFeatureConsistencyCheckJobDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFeatureConsistencyCheckJobConfigId()) {
    body["FeatureConsistencyCheckJobConfigId"] = request.getFeatureConsistencyCheckJobConfigId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasItemFeatures()) {
    body["ItemFeatures"] = request.getItemFeatures();
  }

  if (!!request.hasLogItemId()) {
    body["LogItemId"] = request.getLogItemId();
  }

  if (!!request.hasLogRequestId()) {
    body["LogRequestId"] = request.getLogRequestId();
  }

  if (!!request.hasLogRequestTime()) {
    body["LogRequestTime"] = request.getLogRequestTime();
  }

  if (!!request.hasLogUserId()) {
    body["LogUserId"] = request.getLogUserId();
  }

  if (!!request.hasSceneName()) {
    body["SceneName"] = request.getSceneName();
  }

  if (!!request.hasScores()) {
    body["Scores"] = request.getScores();
  }

  if (!!request.hasServiceName()) {
    body["ServiceName"] = request.getServiceName();
  }

  if (!!request.hasUserFeatures()) {
    body["UserFeatures"] = request.getUserFeatures();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BackflowFeatureConsistencyCheckJobData"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/featureconsistencycheck/jobs/action/backflowdata")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BackflowFeatureConsistencyCheckJobDataResponse>();
}

/**
 * @summary Performs data backflow for the latest job of a specified feature consistency check job configuration.
 *
 * @param request BackflowFeatureConsistencyCheckJobDataRequest
 * @return BackflowFeatureConsistencyCheckJobDataResponse
 */
BackflowFeatureConsistencyCheckJobDataResponse Client::backflowFeatureConsistencyCheckJobData(const BackflowFeatureConsistencyCheckJobDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return backflowFeatureConsistencyCheckJobDataWithOptions(request, headers, runtime);
}

/**
 * @summary This API changes the version of a recall management service.
 *
 * @description ## Request
 * Use this API to change the version of a recall management service. Ensure that the provided `RecallManagementServiceId`, `InstanceId`, and target `RecallManagementServiceVersionId` are valid, and that you have the required permissions for these resources.
 * - **RecallManagementServiceId**: The unique identifier of the recall management service.
 * - **InstanceId**: The instance ID associated with the recall management service.
 * - **RecallManagementServiceVersionId**: The target version ID to switch to.
 * Note: Before changing the version, confirm that the new version is fully tested and ready for production.
 *
 * @param request ChangeRecallManagementServiceVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeRecallManagementServiceVersionResponse
 */
ChangeRecallManagementServiceVersionResponse Client::changeRecallManagementServiceVersionWithOptions(const string &RecallManagementServiceId, const ChangeRecallManagementServiceVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRecallManagementServiceVersionId()) {
    body["RecallManagementServiceVersionId"] = request.getRecallManagementServiceVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ChangeRecallManagementServiceVersion"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementservices/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceId) , "/action/changeversion")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeRecallManagementServiceVersionResponse>();
}

/**
 * @summary This API changes the version of a recall management service.
 *
 * @description ## Request
 * Use this API to change the version of a recall management service. Ensure that the provided `RecallManagementServiceId`, `InstanceId`, and target `RecallManagementServiceVersionId` are valid, and that you have the required permissions for these resources.
 * - **RecallManagementServiceId**: The unique identifier of the recall management service.
 * - **InstanceId**: The instance ID associated with the recall management service.
 * - **RecallManagementServiceVersionId**: The target version ID to switch to.
 * Note: Before changing the version, confirm that the new version is fully tested and ready for production.
 *
 * @param request ChangeRecallManagementServiceVersionRequest
 * @return ChangeRecallManagementServiceVersionResponse
 */
ChangeRecallManagementServiceVersionResponse Client::changeRecallManagementServiceVersion(const string &RecallManagementServiceId, const ChangeRecallManagementServiceVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return changeRecallManagementServiceVersionWithOptions(RecallManagementServiceId, request, headers, runtime);
}

/**
 * @summary Sends a conversation message to an agent. Supports Server-Sent Events (SSE). Creates a new session or continues a conversation in an existing session.
 *
 * @description ## Operation description
 * - Call this API operation to send a conversation message to an agent. Server-Sent Events (SSE) is supported.
 * - If the `ConversationId` parameter is specified, the conversation continues in the context of the specified existing session. If this parameter is not specified, automatic creation of a new session is performed.
 * - The `Config` field allows you to pass additional information input. The value must be in JSON format.
 * - If the request succeeds, the response includes the message ID, reply content, and other information for this conversation. If a fault occurs, the corresponding error code and error message are returned.
 *
 * @param request ChatConversationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatConversationResponse
 */
FutureGenerator<ChatConversationResponse> Client::chatConversationWithSSE(const ChatConversationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
  }

  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasConversationId()) {
    body["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ChatConversation"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/conversations/chat")},
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
      })).get<ChatConversationResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Sends a conversation message to an agent. Supports Server-Sent Events (SSE). Creates a new session or continues a conversation in an existing session.
 *
 * @description ## Operation description
 * - Call this API operation to send a conversation message to an agent. Server-Sent Events (SSE) is supported.
 * - If the `ConversationId` parameter is specified, the conversation continues in the context of the specified existing session. If this parameter is not specified, automatic creation of a new session is performed.
 * - The `Config` field allows you to pass additional information input. The value must be in JSON format.
 * - If the request succeeds, the response includes the message ID, reply content, and other information for this conversation. If a fault occurs, the corresponding error code and error message are returned.
 *
 * @param request ChatConversationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatConversationResponse
 */
ChatConversationResponse Client::chatConversationWithOptions(const ChatConversationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
  }

  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasConversationId()) {
    body["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ChatConversation"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/conversations/chat")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatConversationResponse>();
}

/**
 * @summary Sends a conversation message to an agent. Supports Server-Sent Events (SSE). Creates a new session or continues a conversation in an existing session.
 *
 * @description ## Operation description
 * - Call this API operation to send a conversation message to an agent. Server-Sent Events (SSE) is supported.
 * - If the `ConversationId` parameter is specified, the conversation continues in the context of the specified existing session. If this parameter is not specified, automatic creation of a new session is performed.
 * - The `Config` field allows you to pass additional information input. The value must be in JSON format.
 * - If the request succeeds, the response includes the message ID, reply content, and other information for this conversation. If a fault occurs, the corresponding error code and error message are returned.
 *
 * @param request ChatConversationRequest
 * @return ChatConversationResponse
 */
ChatConversationResponse Client::chatConversation(const ChatConversationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return chatConversationWithOptions(request, headers, runtime);
}

/**
 * @summary Verifies access to resources configured for an instance.
 *
 * @param request CheckInstanceResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckInstanceResourcesResponse
 */
CheckInstanceResourcesResponse Client::checkInstanceResourcesWithOptions(const string &InstanceId, const CheckInstanceResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  if (!!request.hasUri()) {
    body["Uri"] = request.getUri();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CheckInstanceResources"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/action/checkresources")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckInstanceResourcesResponse>();
}

/**
 * @summary Verifies access to resources configured for an instance.
 *
 * @param request CheckInstanceResourcesRequest
 * @return CheckInstanceResourcesResponse
 */
CheckInstanceResourcesResponse Client::checkInstanceResources(const string &InstanceId, const CheckInstanceResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return checkInstanceResourcesWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Validates a traffic control task expression.
 *
 * @description ## Description
 * This operation validates a traffic control task expression for a specific instance and table. Provide the correct `InstanceId`, `TableMetaId`, and `Expression` parameters.
 *
 * @param request CheckTrafficControlTaskExpressionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckTrafficControlTaskExpressionResponse
 */
CheckTrafficControlTaskExpressionResponse Client::checkTrafficControlTaskExpressionWithOptions(const CheckTrafficControlTaskExpressionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExpression()) {
    query["Expression"] = request.getExpression();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTableMetaId()) {
    query["TableMetaId"] = request.getTableMetaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckTrafficControlTaskExpression"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltasks/action/checkexpression")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckTrafficControlTaskExpressionResponse>();
}

/**
 * @summary Validates a traffic control task expression.
 *
 * @description ## Description
 * This operation validates a traffic control task expression for a specific instance and table. Provide the correct `InstanceId`, `TableMetaId`, and `Expression` parameters.
 *
 * @param request CheckTrafficControlTaskExpressionRequest
 * @return CheckTrafficControlTaskExpressionResponse
 */
CheckTrafficControlTaskExpressionResponse Client::checkTrafficControlTaskExpression(const CheckTrafficControlTaskExpressionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return checkTrafficControlTaskExpressionWithOptions(request, headers, runtime);
}

/**
 * @summary Clones an engine configuration.
 *
 * @param request CloneEngineConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloneEngineConfigResponse
 */
CloneEngineConfigResponse Client::cloneEngineConfigWithOptions(const string &EngineConfigId, const CloneEngineConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfigValue()) {
    body["ConfigValue"] = request.getConfigValue();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CloneEngineConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/engineconfigs/" , Darabonba::Encode::Encoder::percentEncode(EngineConfigId) , "/action/clone")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloneEngineConfigResponse>();
}

/**
 * @summary Clones an engine configuration.
 *
 * @param request CloneEngineConfigRequest
 * @return CloneEngineConfigResponse
 */
CloneEngineConfigResponse Client::cloneEngineConfig(const string &EngineConfigId, const CloneEngineConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cloneEngineConfigWithOptions(EngineConfigId, request, headers, runtime);
}

/**
 * @summary Clones a specified experiment.
 *
 * @param request CloneExperimentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloneExperimentResponse
 */
CloneExperimentResponse Client::cloneExperimentWithOptions(const string &ExperimentId, const CloneExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CloneExperiment"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments/" , Darabonba::Encode::Encoder::percentEncode(ExperimentId) , "/action/clone")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloneExperimentResponse>();
}

/**
 * @summary Clones a specified experiment.
 *
 * @param request CloneExperimentRequest
 * @return CloneExperimentResponse
 */
CloneExperimentResponse Client::cloneExperiment(const string &ExperimentId, const CloneExperimentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cloneExperimentWithOptions(ExperimentId, request, headers, runtime);
}

/**
 * @summary Clones an experiment group to a specified environment.
 *
 * @param request CloneExperimentGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloneExperimentGroupResponse
 */
CloneExperimentGroupResponse Client::cloneExperimentGroupWithOptions(const string &ExperimentGroupId, const CloneExperimentGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLayerId()) {
    body["LayerId"] = request.getLayerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CloneExperimentGroup"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experimentgroups/" , Darabonba::Encode::Encoder::percentEncode(ExperimentGroupId) , "/action/clone")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloneExperimentGroupResponse>();
}

/**
 * @summary Clones an experiment group to a specified environment.
 *
 * @param request CloneExperimentGroupRequest
 * @return CloneExperimentGroupResponse
 */
CloneExperimentGroupResponse Client::cloneExperimentGroup(const string &ExperimentGroupId, const CloneExperimentGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cloneExperimentGroupWithOptions(ExperimentGroupId, request, headers, runtime);
}

/**
 * @summary Clones a feature consistency check job configuration.
 *
 * @param request CloneFeatureConsistencyCheckJobConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloneFeatureConsistencyCheckJobConfigResponse
 */
CloneFeatureConsistencyCheckJobConfigResponse Client::cloneFeatureConsistencyCheckJobConfigWithOptions(const string &SourceFeatureConsistencyCheckJobConfigId, const CloneFeatureConsistencyCheckJobConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CloneFeatureConsistencyCheckJobConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/featureconsistencycheck/jobconfigs/" , Darabonba::Encode::Encoder::percentEncode(SourceFeatureConsistencyCheckJobConfigId) , "/action/clone")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloneFeatureConsistencyCheckJobConfigResponse>();
}

/**
 * @summary Clones a feature consistency check job configuration.
 *
 * @param request CloneFeatureConsistencyCheckJobConfigRequest
 * @return CloneFeatureConsistencyCheckJobConfigResponse
 */
CloneFeatureConsistencyCheckJobConfigResponse Client::cloneFeatureConsistencyCheckJobConfig(const string &SourceFeatureConsistencyCheckJobConfigId, const CloneFeatureConsistencyCheckJobConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cloneFeatureConsistencyCheckJobConfigWithOptions(SourceFeatureConsistencyCheckJobConfigId, request, headers, runtime);
}

/**
 * @summary Clones a specified laboratory to a designated environment. You can specify whether to clone the experiment groups within the laboratory.
 *
 * @param request CloneLaboratoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloneLaboratoryResponse
 */
CloneLaboratoryResponse Client::cloneLaboratoryWithOptions(const string &LaboratoryId, const CloneLaboratoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCloneExperimentGroup()) {
    body["CloneExperimentGroup"] = request.getCloneExperimentGroup();
  }

  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CloneLaboratory"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/laboratories/" , Darabonba::Encode::Encoder::percentEncode(LaboratoryId) , "/action/clone")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloneLaboratoryResponse>();
}

/**
 * @summary Clones a specified laboratory to a designated environment. You can specify whether to clone the experiment groups within the laboratory.
 *
 * @param request CloneLaboratoryRequest
 * @return CloneLaboratoryResponse
 */
CloneLaboratoryResponse Client::cloneLaboratory(const string &LaboratoryId, const CloneLaboratoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cloneLaboratoryWithOptions(LaboratoryId, request, headers, runtime);
}

/**
 * @summary Clones a specified traffic control task to a new instance.
 *
 * @description ## Request description
 * This API clones an existing traffic control task to another specified instance. Ensure that the `InstanceId` you provide is valid and that you have the required permissions for the target instance.
 * Note: The cloning process does not affect the status or configuration of the original task.
 *
 * @param request CloneTrafficControlTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloneTrafficControlTaskResponse
 */
CloneTrafficControlTaskResponse Client::cloneTrafficControlTaskWithOptions(const string &TrafficControlTaskId, const CloneTrafficControlTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CloneTrafficControlTask"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltasks/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTaskId) , "/action/clone")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloneTrafficControlTaskResponse>();
}

/**
 * @summary Clones a specified traffic control task to a new instance.
 *
 * @description ## Request description
 * This API clones an existing traffic control task to another specified instance. Ensure that the `InstanceId` you provide is valid and that you have the required permissions for the target instance.
 * Note: The cloning process does not affect the status or configuration of the original task.
 *
 * @param request CloneTrafficControlTaskRequest
 * @return CloneTrafficControlTaskResponse
 */
CloneTrafficControlTaskResponse Client::cloneTrafficControlTask(const string &TrafficControlTaskId, const CloneTrafficControlTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cloneTrafficControlTaskWithOptions(TrafficControlTaskId, request, headers, runtime);
}

/**
 * @summary 对比样本一致性任务
 *
 * @param request CompareSampleConsistencyJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CompareSampleConsistencyJobResponse
 */
CompareSampleConsistencyJobResponse Client::compareSampleConsistencyJobWithOptions(const string &SampleConsistencyJobId, const CompareSampleConsistencyJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CompareSampleConsistencyJob"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/sampleconsistencyjobs/" , Darabonba::Encode::Encoder::percentEncode(SampleConsistencyJobId) , "/action/compare")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CompareSampleConsistencyJobResponse>();
}

/**
 * @summary 对比样本一致性任务
 *
 * @param request CompareSampleConsistencyJobRequest
 * @return CompareSampleConsistencyJobResponse
 */
CompareSampleConsistencyJobResponse Client::compareSampleConsistencyJob(const string &SampleConsistencyJobId, const CompareSampleConsistencyJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return compareSampleConsistencyJobWithOptions(SampleConsistencyJobId, request, headers, runtime);
}

/**
 * @summary Creates an AB metric.
 *
 * @param request CreateABMetricRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateABMetricResponse
 */
CreateABMetricResponse Client::createABMetricWithOptions(const CreateABMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAggregationByUser()) {
    body["AggregationByUser"] = request.getAggregationByUser();
  }

  if (!!request.hasDefinition()) {
    body["Definition"] = request.getDefinition();
  }

  if (!!request.hasDenominator()) {
    body["Denominator"] = request.getDenominator();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsBinomialDistribution()) {
    body["IsBinomialDistribution"] = request.getIsBinomialDistribution();
  }

  if (!!request.hasLeftMetricId()) {
    body["LeftMetricId"] = request.getLeftMetricId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasNeedSignificance()) {
    body["NeedSignificance"] = request.getNeedSignificance();
  }

  if (!!request.hasNumerator()) {
    body["Numerator"] = request.getNumerator();
  }

  if (!!request.hasOperator()) {
    body["Operator"] = request.getOperator();
  }

  if (!!request.hasRealtime()) {
    body["Realtime"] = request.getRealtime();
  }

  if (!!request.hasResultResourceId()) {
    body["ResultResourceId"] = request.getResultResourceId();
  }

  if (!!request.hasRightMetricId()) {
    body["RightMetricId"] = request.getRightMetricId();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
  }

  if (!!request.hasStatisticsCycle()) {
    body["StatisticsCycle"] = request.getStatisticsCycle();
  }

  if (!!request.hasTableMetaId()) {
    body["TableMetaId"] = request.getTableMetaId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateABMetric"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/abmetrics")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateABMetricResponse>();
}

/**
 * @summary Creates an AB metric.
 *
 * @param request CreateABMetricRequest
 * @return CreateABMetricResponse
 */
CreateABMetricResponse Client::createABMetric(const CreateABMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createABMetricWithOptions(request, headers, runtime);
}

/**
 * @summary Creates an A/B metric group.
 *
 * @param request CreateABMetricGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateABMetricGroupResponse
 */
CreateABMetricGroupResponse Client::createABMetricGroupWithOptions(const CreateABMetricGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasABMetricIds()) {
    body["ABMetricIds"] = request.getABMetricIds();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasRealtime()) {
    body["Realtime"] = request.getRealtime();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateABMetricGroup"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/abmetricgroups")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateABMetricGroupResponse>();
}

/**
 * @summary Creates an A/B metric group.
 *
 * @param request CreateABMetricGroupRequest
 * @return CreateABMetricGroupResponse
 */
CreateABMetricGroupResponse Client::createABMetricGroup(const CreateABMetricGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createABMetricGroupWithOptions(request, headers, runtime);
}

/**
 * @summary Creates multiple calculation jobs.
 *
 * @param request CreateCalculationJobsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCalculationJobsResponse
 */
CreateCalculationJobsResponse Client::createCalculationJobsWithOptions(const CreateCalculationJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasABMetricIds()) {
    body["ABMetricIds"] = request.getABMetricIds();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.getEndDate();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateCalculationJobs"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/batch/calculationjobs/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCalculationJobsResponse>();
}

/**
 * @summary Creates multiple calculation jobs.
 *
 * @param request CreateCalculationJobsRequest
 * @return CreateCalculationJobsResponse
 */
CreateCalculationJobsResponse Client::createCalculationJobs(const CreateCalculationJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createCalculationJobsWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a crowd that represents a group of users.
 *
 * @param request CreateCrowdRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCrowdResponse
 */
CreateCrowdResponse Client::createCrowdWithOptions(const CreateCrowdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLabel()) {
    body["Label"] = request.getLabel();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasSource()) {
    body["Source"] = request.getSource();
  }

  if (!!request.hasUsers()) {
    body["Users"] = request.getUsers();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateCrowd"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/crowds")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCrowdResponse>();
}

/**
 * @summary Creates a crowd that represents a group of users.
 *
 * @param request CreateCrowdRequest
 * @return CreateCrowdResponse
 */
CreateCrowdResponse Client::createCrowd(const CreateCrowdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createCrowdWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a data diagnosis task. This API supports various analysis types.
 *
 * @description ## Description
 * - This API creates a data diagnosis task. It supports various analysis types, including item or user change rate analysis, user preference statistics cycle analysis, two-table join analysis, basic statistical analysis, and abnormal behavior analysis.
 * - The content of the `Config` parameter depends on the value of the `Type` parameter. For more information, see the example configurations in this topic.
 * - To run the task on a schedule, specify the `CycleTime` parameter. If this parameter is omitted, the task runs only once.
 * - The optional `TopNQuantity` parameter specifies the number of top results to return.
 *
 * @param request CreateDataDiagnosisRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataDiagnosisResponse
 */
CreateDataDiagnosisResponse Client::createDataDiagnosisWithOptions(const CreateDataDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
  }

  if (!!request.hasCycleTime()) {
    body["CycleTime"] = request.getCycleTime();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLeftTableMetaId()) {
    body["LeftTableMetaId"] = request.getLeftTableMetaId();
  }

  if (!!request.hasLeftTablePartitionField()) {
    body["LeftTablePartitionField"] = request.getLeftTablePartitionField();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPartitionField()) {
    body["PartitionField"] = request.getPartitionField();
  }

  if (!!request.hasRightTableMetaId()) {
    body["RightTableMetaId"] = request.getRightTableMetaId();
  }

  if (!!request.hasRightTablePartitionField()) {
    body["RightTablePartitionField"] = request.getRightTablePartitionField();
  }

  if (!!request.hasTableMetaId()) {
    body["TableMetaId"] = request.getTableMetaId();
  }

  if (!!request.hasTopNQuantity()) {
    body["TopNQuantity"] = request.getTopNQuantity();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDataDiagnosis"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datadiagnoses")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataDiagnosisResponse>();
}

/**
 * @summary Creates a data diagnosis task. This API supports various analysis types.
 *
 * @description ## Description
 * - This API creates a data diagnosis task. It supports various analysis types, including item or user change rate analysis, user preference statistics cycle analysis, two-table join analysis, basic statistical analysis, and abnormal behavior analysis.
 * - The content of the `Config` parameter depends on the value of the `Type` parameter. For more information, see the example configurations in this topic.
 * - To run the task on a schedule, specify the `CycleTime` parameter. If this parameter is omitted, the task runs only once.
 * - The optional `TopNQuantity` parameter specifies the number of top results to return.
 *
 * @param request CreateDataDiagnosisRequest
 * @return CreateDataDiagnosisResponse
 */
CreateDataDiagnosisResponse Client::createDataDiagnosis(const CreateDataDiagnosisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDataDiagnosisWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a data diagnosis (rerun) job for a specified time period.
 *
 * @description ## Description
 * This operation creates a data diagnosis (rerun) job for a specific instance within a specified time frame. To ensure the job runs correctly, provide accurate values for the `DataDiagnosisId`, `InstanceId`, `StartDate`, and `EndDate` parameters.
 *
 * @param request CreateDataDiagnosisJobsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataDiagnosisJobsResponse
 */
CreateDataDiagnosisJobsResponse Client::createDataDiagnosisJobsWithOptions(const CreateDataDiagnosisJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDataDiagnosisId()) {
    body["DataDiagnosisId"] = request.getDataDiagnosisId();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.getEndDate();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDataDiagnosisJobs"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/batch/datadiagnosisjobs/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataDiagnosisJobsResponse>();
}

/**
 * @summary Creates a data diagnosis (rerun) job for a specified time period.
 *
 * @description ## Description
 * This operation creates a data diagnosis (rerun) job for a specific instance within a specified time frame. To ensure the job runs correctly, provide accurate values for the `DataDiagnosisId`, `InstanceId`, `StartDate`, and `EndDate` parameters.
 *
 * @param request CreateDataDiagnosisJobsRequest
 * @return CreateDataDiagnosisJobsResponse
 */
CreateDataDiagnosisJobsResponse Client::createDataDiagnosisJobs(const CreateDataDiagnosisJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDataDiagnosisJobsWithOptions(request, headers, runtime);
}

/**
 * @summary Creates an engine config.
 *
 * @param request CreateEngineConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEngineConfigResponse
 */
CreateEngineConfigResponse Client::createEngineConfigWithOptions(const CreateEngineConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfigValue()) {
    body["ConfigValue"] = request.getConfigValue();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateEngineConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/engineconfigs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEngineConfigResponse>();
}

/**
 * @summary Creates an engine config.
 *
 * @param request CreateEngineConfigRequest
 * @return CreateEngineConfigResponse
 */
CreateEngineConfigResponse Client::createEngineConfig(const CreateEngineConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createEngineConfigWithOptions(request, headers, runtime);
}

/**
 * @summary Creates an experiment in a specified experiment group.
 *
 * @param request CreateExperimentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateExperimentResponse
 */
CreateExperimentResponse Client::createExperimentWithOptions(const CreateExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
  }

  if (!!request.hasDebugCrowdId()) {
    body["DebugCrowdId"] = request.getDebugCrowdId();
  }

  if (!!request.hasDebugUsers()) {
    body["DebugUsers"] = request.getDebugUsers();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasExperimentGroupId()) {
    body["ExperimentGroupId"] = request.getExperimentGroupId();
  }

  if (!!request.hasFlowPercent()) {
    body["FlowPercent"] = request.getFlowPercent();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateExperiment"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateExperimentResponse>();
}

/**
 * @summary Creates an experiment in a specified experiment group.
 *
 * @param request CreateExperimentRequest
 * @return CreateExperimentResponse
 */
CreateExperimentResponse Client::createExperiment(const CreateExperimentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createExperimentWithOptions(request, headers, runtime);
}

/**
 * @summary Creates an experiment group in a specified layer. You can use experiment groups to categorize experiments and observe their overall performance.
 *
 * @param request CreateExperimentGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateExperimentGroupResponse
 */
CreateExperimentGroupResponse Client::createExperimentGroupWithOptions(const CreateExperimentGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
  }

  if (!!request.hasCrowdId()) {
    body["CrowdId"] = request.getCrowdId();
  }

  if (!!request.hasCrowdTargetType()) {
    body["CrowdTargetType"] = request.getCrowdTargetType();
  }

  if (!!request.hasDebugCrowdId()) {
    body["DebugCrowdId"] = request.getDebugCrowdId();
  }

  if (!!request.hasDebugUsers()) {
    body["DebugUsers"] = request.getDebugUsers();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDistributionTimeDuration()) {
    body["DistributionTimeDuration"] = request.getDistributionTimeDuration();
  }

  if (!!request.hasDistributionType()) {
    body["DistributionType"] = request.getDistributionType();
  }

  if (!!request.hasFilter()) {
    body["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLayerId()) {
    body["LayerId"] = request.getLayerId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasNeedAA()) {
    body["NeedAA"] = request.getNeedAA();
  }

  if (!!request.hasRandomFlow()) {
    body["RandomFlow"] = request.getRandomFlow();
  }

  if (!!request.hasReservedBuckets()) {
    body["ReservedBuckets"] = request.getReservedBuckets();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateExperimentGroup"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experimentgroups")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateExperimentGroupResponse>();
}

/**
 * @summary Creates an experiment group in a specified layer. You can use experiment groups to categorize experiments and observe their overall performance.
 *
 * @param request CreateExperimentGroupRequest
 * @return CreateExperimentGroupResponse
 */
CreateExperimentGroupResponse Client::createExperimentGroup(const CreateExperimentGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createExperimentGroupWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a feature consistency check job.
 *
 * @param request CreateFeatureConsistencyCheckJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFeatureConsistencyCheckJobResponse
 */
CreateFeatureConsistencyCheckJobResponse Client::createFeatureConsistencyCheckJobWithOptions(const CreateFeatureConsistencyCheckJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasFeatureConsistencyCheckJobConfigId()) {
    body["FeatureConsistencyCheckJobConfigId"] = request.getFeatureConsistencyCheckJobConfigId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSamplingDuration()) {
    body["SamplingDuration"] = request.getSamplingDuration();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateFeatureConsistencyCheckJob"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/featureconsistencycheck/jobs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFeatureConsistencyCheckJobResponse>();
}

/**
 * @summary Creates a feature consistency check job.
 *
 * @param request CreateFeatureConsistencyCheckJobRequest
 * @return CreateFeatureConsistencyCheckJobResponse
 */
CreateFeatureConsistencyCheckJobResponse Client::createFeatureConsistencyCheckJob(const CreateFeatureConsistencyCheckJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createFeatureConsistencyCheckJobWithOptions(request, headers, runtime);
}

/**
 * @summary Configure a feature consistency check task.
 *
 * @param request CreateFeatureConsistencyCheckJobConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFeatureConsistencyCheckJobConfigResponse
 */
CreateFeatureConsistencyCheckJobConfigResponse Client::createFeatureConsistencyCheckJobConfigWithOptions(const CreateFeatureConsistencyCheckJobConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCompareFeature()) {
    body["CompareFeature"] = request.getCompareFeature();
  }

  if (!!request.hasDatasetId()) {
    body["DatasetId"] = request.getDatasetId();
  }

  if (!!request.hasDatasetMountPath()) {
    body["DatasetMountPath"] = request.getDatasetMountPath();
  }

  if (!!request.hasDatasetName()) {
    body["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasDatasetType()) {
    body["DatasetType"] = request.getDatasetType();
  }

  if (!!request.hasDatasetUri()) {
    body["DatasetUri"] = request.getDatasetUri();
  }

  if (!!request.hasDefaultRoute()) {
    body["DefaultRoute"] = request.getDefaultRoute();
  }

  if (!!request.hasEasServiceName()) {
    body["EasServiceName"] = request.getEasServiceName();
  }

  if (!!request.hasEasyRecPackagePath()) {
    body["EasyRecPackagePath"] = request.getEasyRecPackagePath();
  }

  if (!!request.hasEasyRecVersion()) {
    body["EasyRecVersion"] = request.getEasyRecVersion();
  }

  if (!!request.hasFeatureDisplayExclude()) {
    body["FeatureDisplayExclude"] = request.getFeatureDisplayExclude();
  }

  if (!!request.hasFeatureLandingResourceId()) {
    body["FeatureLandingResourceId"] = request.getFeatureLandingResourceId();
  }

  if (!!request.hasFeaturePriority()) {
    body["FeaturePriority"] = request.getFeaturePriority();
  }

  if (!!request.hasFeatureStoreItemId()) {
    body["FeatureStoreItemId"] = request.getFeatureStoreItemId();
  }

  if (!!request.hasFeatureStoreModelId()) {
    body["FeatureStoreModelId"] = request.getFeatureStoreModelId();
  }

  if (!!request.hasFeatureStoreProjectId()) {
    body["FeatureStoreProjectId"] = request.getFeatureStoreProjectId();
  }

  if (!!request.hasFeatureStoreProjectName()) {
    body["FeatureStoreProjectName"] = request.getFeatureStoreProjectName();
  }

  if (!!request.hasFeatureStoreSeqFeatureView()) {
    body["FeatureStoreSeqFeatureView"] = request.getFeatureStoreSeqFeatureView();
  }

  if (!!request.hasFeatureStoreUserId()) {
    body["FeatureStoreUserId"] = request.getFeatureStoreUserId();
  }

  if (!!request.hasFgJarVersion()) {
    body["FgJarVersion"] = request.getFgJarVersion();
  }

  if (!!request.hasFgJsonFileName()) {
    body["FgJsonFileName"] = request.getFgJsonFileName();
  }

  if (!!request.hasGenerateZip()) {
    body["GenerateZip"] = request.getGenerateZip();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasItemIdField()) {
    body["ItemIdField"] = request.getItemIdField();
  }

  if (!!request.hasItemTable()) {
    body["ItemTable"] = request.getItemTable();
  }

  if (!!request.hasItemTablePartitionField()) {
    body["ItemTablePartitionField"] = request.getItemTablePartitionField();
  }

  if (!!request.hasItemTablePartitionFieldFormat()) {
    body["ItemTablePartitionFieldFormat"] = request.getItemTablePartitionFieldFormat();
  }

  if (!!request.hasMaxcomputeSchema()) {
    body["MaxcomputeSchema"] = request.getMaxcomputeSchema();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasOssResourceId()) {
    body["OssResourceId"] = request.getOssResourceId();
  }

  if (!!request.hasPredictWorkerCount()) {
    body["PredictWorkerCount"] = request.getPredictWorkerCount();
  }

  if (!!request.hasPredictWorkerCpu()) {
    body["PredictWorkerCpu"] = request.getPredictWorkerCpu();
  }

  if (!!request.hasPredictWorkerMemory()) {
    body["PredictWorkerMemory"] = request.getPredictWorkerMemory();
  }

  if (!!request.hasResourceConfig()) {
    body["ResourceConfig"] = request.getResourceConfig();
  }

  if (!!request.hasSampleRate()) {
    body["SampleRate"] = request.getSampleRate();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
  }

  if (!!request.hasSecurityGroupId()) {
    body["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasServiceId()) {
    body["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasSwitchId()) {
    body["SwitchId"] = request.getSwitchId();
  }

  if (!!request.hasUseFeatureStore()) {
    body["UseFeatureStore"] = request.getUseFeatureStore();
  }

  if (!!request.hasUserIdField()) {
    body["UserIdField"] = request.getUserIdField();
  }

  if (!!request.hasUserTable()) {
    body["UserTable"] = request.getUserTable();
  }

  if (!!request.hasUserTablePartitionField()) {
    body["UserTablePartitionField"] = request.getUserTablePartitionField();
  }

  if (!!request.hasUserTablePartitionFieldFormat()) {
    body["UserTablePartitionFieldFormat"] = request.getUserTablePartitionFieldFormat();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.getVpcId();
  }

  if (!!request.hasWorkflowName()) {
    body["WorkflowName"] = request.getWorkflowName();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateFeatureConsistencyCheckJobConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/featureconsistencycheck/jobconfigs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFeatureConsistencyCheckJobConfigResponse>();
}

/**
 * @summary Configure a feature consistency check task.
 *
 * @param request CreateFeatureConsistencyCheckJobConfigRequest
 * @return CreateFeatureConsistencyCheckJobConfigResponse
 */
CreateFeatureConsistencyCheckJobConfigResponse Client::createFeatureConsistencyCheckJobConfig(const CreateFeatureConsistencyCheckJobConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createFeatureConsistencyCheckJobConfigWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a configuration resource for a specified instance.
 *
 * @param request CreateInstanceResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceResourceResponse
 */
CreateInstanceResourceResponse Client::createInstanceResourceWithOptions(const string &InstanceId, const CreateInstanceResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCategory()) {
    body["Category"] = request.getCategory();
  }

  if (!!request.hasGroup()) {
    body["Group"] = request.getGroup();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  if (!!request.hasUri()) {
    body["Uri"] = request.getUri();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateInstanceResource"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/resources")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceResourceResponse>();
}

/**
 * @summary Creates a configuration resource for a specified instance.
 *
 * @param request CreateInstanceResourceRequest
 * @return CreateInstanceResourceResponse
 */
CreateInstanceResourceResponse Client::createInstanceResource(const string &InstanceId, const CreateInstanceResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createInstanceResourceWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Creates a laboratory. A laboratory isolates a segment of traffic for running experiments.
 *
 * @param request CreateLaboratoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLaboratoryResponse
 */
CreateLaboratoryResponse Client::createLaboratoryWithOptions(const CreateLaboratoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBucketCount()) {
    body["BucketCount"] = request.getBucketCount();
  }

  if (!!request.hasBucketType()) {
    body["BucketType"] = request.getBucketType();
  }

  if (!!request.hasBuckets()) {
    body["Buckets"] = request.getBuckets();
  }

  if (!!request.hasDebugCrowdId()) {
    body["DebugCrowdId"] = request.getDebugCrowdId();
  }

  if (!!request.hasDebugUsers()) {
    body["DebugUsers"] = request.getDebugUsers();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasFilter()) {
    body["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateLaboratory"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/laboratories")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLaboratoryResponse>();
}

/**
 * @summary Creates a laboratory. A laboratory isolates a segment of traffic for running experiments.
 *
 * @param request CreateLaboratoryRequest
 * @return CreateLaboratoryResponse
 */
CreateLaboratoryResponse Client::createLaboratory(const CreateLaboratoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createLaboratoryWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a layer in a specified laboratory for layered experiments. Layers are orthogonal to each other, allowing experiments to run independently and preventing traffic starvation.
 *
 * @param request CreateLayerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLayerResponse
 */
CreateLayerResponse Client::createLayerWithOptions(const CreateLayerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLaboratoryId()) {
    body["LaboratoryId"] = request.getLaboratoryId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateLayer"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/layers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLayerResponse>();
}

/**
 * @summary Creates a layer in a specified laboratory for layered experiments. Layers are orthogonal to each other, allowing experiments to run independently and preventing traffic starvation.
 *
 * @param request CreateLayerRequest
 * @return CreateLayerResponse
 */
CreateLayerResponse Client::createLayer(const CreateLayerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createLayerWithOptions(request, headers, runtime);
}

/**
 * @summary Creates an ABTest parameter for a specific scene in a specified environment.
 *
 * @description ## Operation description.
 *
 * @param request CreateParamRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateParamResponse
 */
CreateParamResponse Client::createParamWithOptions(const CreateParamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  if (!!request.hasValue()) {
    body["Value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateParam"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/params")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateParamResponse>();
}

/**
 * @summary Creates an ABTest parameter for a specific scene in a specified environment.
 *
 * @description ## Operation description.
 *
 * @param request CreateParamRequest
 * @return CreateParamResponse
 */
CreateParamResponse Client::createParam(const CreateParamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createParamWithOptions(request, headers, runtime);
}

/**
 * @summary Initializes a Recall Management configuration, including the instance ID, user information, and network configurations.
 *
 * @description ## Request
 *
 * @param request CreateRecallManagementConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRecallManagementConfigResponse
 */
CreateRecallManagementConfigResponse Client::createRecallManagementConfigWithOptions(const CreateRecallManagementConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkConfigs()) {
    body["NetworkConfigs"] = request.getNetworkConfigs();
  }

  if (!!request.hasPassword()) {
    body["Password"] = request.getPassword();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateRecallManagementConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementconfigs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRecallManagementConfigResponse>();
}

/**
 * @summary Initializes a Recall Management configuration, including the instance ID, user information, and network configurations.
 *
 * @description ## Request
 *
 * @param request CreateRecallManagementConfigRequest
 * @return CreateRecallManagementConfigResponse
 */
CreateRecallManagementConfigResponse Client::createRecallManagementConfig(const CreateRecallManagementConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createRecallManagementConfigWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a new recall management service.
 *
 * @description ## Description
 * To create a recall management service, call this API with a specified instance ID, service name, and service description. Ensure that the `InstanceId` parameter is valid.
 *
 * @param request CreateRecallManagementServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRecallManagementServiceResponse
 */
CreateRecallManagementServiceResponse Client::createRecallManagementServiceWithOptions(const CreateRecallManagementServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateRecallManagementService"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementservices")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRecallManagementServiceResponse>();
}

/**
 * @summary Creates a new recall management service.
 *
 * @description ## Description
 * To create a recall management service, call this API with a specified instance ID, service name, and service description. Ensure that the `InstanceId` parameter is valid.
 *
 * @param request CreateRecallManagementServiceRequest
 * @return CreateRecallManagementServiceResponse
 */
CreateRecallManagementServiceResponse Client::createRecallManagementService(const CreateRecallManagementServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createRecallManagementServiceWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a new recall management service version that supports configuring multiple recall strategies.
 *
 * @description ## Request
 * - Use this API to create a new version of a recall management service.
 * - To create a new version from an existing one, specify the source recall management service version ID.
 * - You can configure detailed recall rules, such as the recall name, description, priority, and recall type.
 * - Configure operators such as filter, trigger, feature extraction, and join.
 * - The merge configuration specifies how to merge multiple recall results and supports two merge methods: weight-based and alternating.
 * - All configuration items are optional.
 *
 * @param request CreateRecallManagementServiceVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRecallManagementServiceVersionResponse
 */
CreateRecallManagementServiceVersionResponse Client::createRecallManagementServiceVersionWithOptions(const string &RecallManagementServiceId, const CreateRecallManagementServiceVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfigs()) {
    body["Configs"] = request.getConfigs();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSourceRecallManagementServiceVersionId()) {
    body["SourceRecallManagementServiceVersionId"] = request.getSourceRecallManagementServiceVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateRecallManagementServiceVersion"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementservices/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceId) , "/versions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRecallManagementServiceVersionResponse>();
}

/**
 * @summary Creates a new recall management service version that supports configuring multiple recall strategies.
 *
 * @description ## Request
 * - Use this API to create a new version of a recall management service.
 * - To create a new version from an existing one, specify the source recall management service version ID.
 * - You can configure detailed recall rules, such as the recall name, description, priority, and recall type.
 * - Configure operators such as filter, trigger, feature extraction, and join.
 * - The merge configuration specifies how to merge multiple recall results and supports two merge methods: weight-based and alternating.
 * - All configuration items are optional.
 *
 * @param request CreateRecallManagementServiceVersionRequest
 * @return CreateRecallManagementServiceVersionResponse
 */
CreateRecallManagementServiceVersionResponse Client::createRecallManagementServiceVersion(const string &RecallManagementServiceId, const CreateRecallManagementServiceVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createRecallManagementServiceVersionWithOptions(RecallManagementServiceId, request, headers, runtime);
}

/**
 * @summary Creates a configuration for a specified version of the Recall Manager service, including its recall and merge settings.
 *
 * @description ## Request
 * - This API creates a configuration for a specific version of the Recall Management Service.
 * - The `ConfigType` parameter specifies the configuration type, which can be either recall or merge.
 * - Use the `RecallConfig` and `MergeConfig` parameters to provide the recall and merge configurations, respectively.
 * - Required parameters must be provided in the specified data formats.
 * - Optional parameter values must be consistent with your business logic.
 *
 * @param request CreateRecallManagementServiceVersionConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRecallManagementServiceVersionConfigResponse
 */
CreateRecallManagementServiceVersionConfigResponse Client::createRecallManagementServiceVersionConfigWithOptions(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const CreateRecallManagementServiceVersionConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfigType()) {
    body["ConfigType"] = request.getConfigType();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMergeConfig()) {
    body["MergeConfig"] = request.getMergeConfig();
  }

  if (!!request.hasRecallConfig()) {
    body["RecallConfig"] = request.getRecallConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateRecallManagementServiceVersionConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementservices/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceId) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceVersionId) , "/configs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRecallManagementServiceVersionConfigResponse>();
}

/**
 * @summary Creates a configuration for a specified version of the Recall Manager service, including its recall and merge settings.
 *
 * @description ## Request
 * - This API creates a configuration for a specific version of the Recall Management Service.
 * - The `ConfigType` parameter specifies the configuration type, which can be either recall or merge.
 * - Use the `RecallConfig` and `MergeConfig` parameters to provide the recall and merge configurations, respectively.
 * - Required parameters must be provided in the specified data formats.
 * - Optional parameter values must be consistent with your business logic.
 *
 * @param request CreateRecallManagementServiceVersionConfigRequest
 * @return CreateRecallManagementServiceVersionConfigResponse
 */
CreateRecallManagementServiceVersionConfigResponse Client::createRecallManagementServiceVersionConfig(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const CreateRecallManagementServiceVersionConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createRecallManagementServiceVersionConfigWithOptions(RecallManagementServiceId, RecallManagementServiceVersionId, request, headers, runtime);
}

/**
 * @summary Creates a recall management table that supports multiple data sources and configuration options.
 *
 * @description ## Request
 * - The **InstanceId**, **Name**, **Description**, **Type**, and **DataSource** parameters are required.
 * - The **RecallType** parameter is optional. If provided, it must be a valid enum value.
 * - For each field in the **Fields** parameter, you must define its name, type, and attributes. You must mark at least one field as Primary.
 * - If you use MaxCompute as the data source, you must specify the **MaxcomputeProjectName** and **MaxcomputeTableName** parameters. The **MaxcomputeSchema** parameter is optional.
 * - For vector fields, the values of the **VectorDimension** and **VectorMetricType** parameters must match the actual data.
 * - Use the **Config** field to provide additional configuration as a JSON string.
 * - Use fluctuation threshold parameters, such as **EnableRowCountFluctuationThreshold**, to monitor changes in row count or table size. Enable these parameters and set appropriate thresholds as needed.
 *
 * @param request CreateRecallManagementTableRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRecallManagementTableResponse
 */
CreateRecallManagementTableResponse Client::createRecallManagementTableWithOptions(const CreateRecallManagementTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
  }

  if (!!request.hasDataSource()) {
    body["DataSource"] = request.getDataSource();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEnableDataSizeFluctuationThreshold()) {
    body["EnableDataSizeFluctuationThreshold"] = request.getEnableDataSizeFluctuationThreshold();
  }

  if (!!request.hasEnableRowCountFluctuationThreshold()) {
    body["EnableRowCountFluctuationThreshold"] = request.getEnableRowCountFluctuationThreshold();
  }

  if (!!request.hasFields()) {
    body["Fields"] = request.getFields();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxDataSizeFluctuationThreshold()) {
    body["MaxDataSizeFluctuationThreshold"] = request.getMaxDataSizeFluctuationThreshold();
  }

  if (!!request.hasMaxRowCountFluctuationThreshold()) {
    body["MaxRowCountFluctuationThreshold"] = request.getMaxRowCountFluctuationThreshold();
  }

  if (!!request.hasMaxcomputeProjectName()) {
    body["MaxcomputeProjectName"] = request.getMaxcomputeProjectName();
  }

  if (!!request.hasMaxcomputeSchema()) {
    body["MaxcomputeSchema"] = request.getMaxcomputeSchema();
  }

  if (!!request.hasMaxcomputeTableName()) {
    body["MaxcomputeTableName"] = request.getMaxcomputeTableName();
  }

  if (!!request.hasMinDataSizeFluctuationThreshold()) {
    body["MinDataSizeFluctuationThreshold"] = request.getMinDataSizeFluctuationThreshold();
  }

  if (!!request.hasMinRowCountFluctuationThreshold()) {
    body["MinRowCountFluctuationThreshold"] = request.getMinRowCountFluctuationThreshold();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasRecallType()) {
    body["RecallType"] = request.getRecallType();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateRecallManagementTable"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementtables")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRecallManagementTableResponse>();
}

/**
 * @summary Creates a recall management table that supports multiple data sources and configuration options.
 *
 * @description ## Request
 * - The **InstanceId**, **Name**, **Description**, **Type**, and **DataSource** parameters are required.
 * - The **RecallType** parameter is optional. If provided, it must be a valid enum value.
 * - For each field in the **Fields** parameter, you must define its name, type, and attributes. You must mark at least one field as Primary.
 * - If you use MaxCompute as the data source, you must specify the **MaxcomputeProjectName** and **MaxcomputeTableName** parameters. The **MaxcomputeSchema** parameter is optional.
 * - For vector fields, the values of the **VectorDimension** and **VectorMetricType** parameters must match the actual data.
 * - Use the **Config** field to provide additional configuration as a JSON string.
 * - Use fluctuation threshold parameters, such as **EnableRowCountFluctuationThreshold**, to monitor changes in row count or table size. Enable these parameters and set appropriate thresholds as needed.
 *
 * @param request CreateRecallManagementTableRequest
 * @return CreateRecallManagementTableResponse
 */
CreateRecallManagementTableResponse Client::createRecallManagementTable(const CreateRecallManagementTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createRecallManagementTableWithOptions(request, headers, runtime);
}

/**
 * @summary 创建资源规则
 *
 * @param request CreateResourceRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateResourceRuleResponse
 */
CreateResourceRuleResponse Client::createResourceRuleWithOptions(const CreateResourceRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMetricOperationType()) {
    body["MetricOperationType"] = request.getMetricOperationType();
  }

  if (!!request.hasMetricPullInfo()) {
    body["MetricPullInfo"] = request.getMetricPullInfo();
  }

  if (!!request.hasMetricPullPeriod()) {
    body["MetricPullPeriod"] = request.getMetricPullPeriod();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasRuleComputingDefinition()) {
    body["RuleComputingDefinition"] = request.getRuleComputingDefinition();
  }

  if (!!request.hasRuleItems()) {
    body["RuleItems"] = request.getRuleItems();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateResourceRule"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resourcerules")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateResourceRuleResponse>();
}

/**
 * @summary 创建资源规则
 *
 * @param request CreateResourceRuleRequest
 * @return CreateResourceRuleResponse
 */
CreateResourceRuleResponse Client::createResourceRule(const CreateResourceRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createResourceRuleWithOptions(request, headers, runtime);
}

/**
 * @summary 创建资源规则条目
 *
 * @param request CreateResourceRuleItemRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateResourceRuleItemResponse
 */
CreateResourceRuleItemResponse Client::createResourceRuleItemWithOptions(const string &ResourceRuleId, const CreateResourceRuleItemRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxValue()) {
    body["MaxValue"] = request.getMaxValue();
  }

  if (!!request.hasMinValue()) {
    body["MinValue"] = request.getMinValue();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasValue()) {
    body["Value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateResourceRuleItem"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resourcerules/" , Darabonba::Encode::Encoder::percentEncode(ResourceRuleId) , "/items")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateResourceRuleItemResponse>();
}

/**
 * @summary 创建资源规则条目
 *
 * @param request CreateResourceRuleItemRequest
 * @return CreateResourceRuleItemResponse
 */
CreateResourceRuleItemResponse Client::createResourceRuleItem(const string &ResourceRuleId, const CreateResourceRuleItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createResourceRuleItemWithOptions(ResourceRuleId, request, headers, runtime);
}

/**
 * @summary 创建样本一致性任务
 *
 * @param request CreateSampleConsistencyJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSampleConsistencyJobResponse
 */
CreateSampleConsistencyJobResponse Client::createSampleConsistencyJobWithOptions(const CreateSampleConsistencyJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDuration()) {
    body["Duration"] = request.getDuration();
  }

  if (!!request.hasEasModelServiceName()) {
    body["EasModelServiceName"] = request.getEasModelServiceName();
  }

  if (!!request.hasFeatureSaveResourceId()) {
    body["FeatureSaveResourceId"] = request.getFeatureSaveResourceId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasItemIdField()) {
    body["ItemIdField"] = request.getItemIdField();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPartitionField()) {
    body["PartitionField"] = request.getPartitionField();
  }

  if (!!request.hasPartitionFieldFormat()) {
    body["PartitionFieldFormat"] = request.getPartitionFieldFormat();
  }

  if (!!request.hasRequestIdField()) {
    body["RequestIdField"] = request.getRequestIdField();
  }

  if (!!request.hasSampleRate()) {
    body["SampleRate"] = request.getSampleRate();
  }

  if (!!request.hasSampleTableName()) {
    body["SampleTableName"] = request.getSampleTableName();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
  }

  if (!!request.hasUserIdField()) {
    body["UserIdField"] = request.getUserIdField();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSampleConsistencyJob"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/sampleconsistencyjobs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSampleConsistencyJobResponse>();
}

/**
 * @summary 创建样本一致性任务
 *
 * @param request CreateSampleConsistencyJobRequest
 * @return CreateSampleConsistencyJobResponse
 */
CreateSampleConsistencyJobResponse Client::createSampleConsistencyJob(const CreateSampleConsistencyJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createSampleConsistencyJobWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a scene for metric and experiment analysis.
 *
 * @param request CreateSceneRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSceneResponse
 */
CreateSceneResponse Client::createSceneWithOptions(const CreateSceneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasFlows()) {
    body["Flows"] = request.getFlows();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateScene"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/scenes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSceneResponse>();
}

/**
 * @summary Creates a scene for metric and experiment analysis.
 *
 * @param request CreateSceneRequest
 * @return CreateSceneResponse
 */
CreateSceneResponse Client::createScene(const CreateSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createSceneWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a sub-crowd for a specified crowd.
 *
 * @param request CreateSubCrowdRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSubCrowdResponse
 */
CreateSubCrowdResponse Client::createSubCrowdWithOptions(const string &CrowdId, const CreateSubCrowdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSource()) {
    body["Source"] = request.getSource();
  }

  if (!!request.hasUsers()) {
    body["Users"] = request.getUsers();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSubCrowd"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/crowds/" , Darabonba::Encode::Encoder::percentEncode(CrowdId) , "/subcrowds")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSubCrowdResponse>();
}

/**
 * @summary Creates a sub-crowd for a specified crowd.
 *
 * @param request CreateSubCrowdRequest
 * @return CreateSubCrowdResponse
 */
CreateSubCrowdResponse Client::createSubCrowd(const string &CrowdId, const CreateSubCrowdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createSubCrowdWithOptions(CrowdId, request, headers, runtime);
}

/**
 * @summary Creates a data table.
 *
 * @param request CreateTableMetaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTableMetaResponse
 */
CreateTableMetaResponse Client::createTableMetaWithOptions(const CreateTableMetaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasFields()) {
    body["Fields"] = request.getFields();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasModule()) {
    body["Module"] = request.getModule();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasTableName()) {
    body["TableName"] = request.getTableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTableMeta"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/tablemetas")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTableMetaResponse>();
}

/**
 * @summary Creates a data table.
 *
 * @param request CreateTableMetaRequest
 * @return CreateTableMetaResponse
 */
CreateTableMetaResponse Client::createTableMeta(const CreateTableMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTableMetaWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a new traffic control target and sets its parameters, such as the item condition, event, and value.
 *
 * @description ## Usage notes
 * - The `ItemConditionType` parameter supports two formats: array format (Array) and expression format (Expression). Based on the format you select, you must provide either `ItemConditionArray` or `ItemConditionExpress`.
 * - The `StatisPeriod` parameter defaults to daily. For hourly statistics, you must set this parameter explicitly.
 * - The `ToleranceValue` and `NewProductRegulation` parameters are optional.
 * - The `Status` parameter controls whether a new traffic control target takes effect immediately. By default, new targets are inactive.
 *
 * @param request CreateTrafficControlTargetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTrafficControlTargetResponse
 */
CreateTrafficControlTargetResponse Client::createTrafficControlTargetWithOptions(const CreateTrafficControlTargetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEvent()) {
    body["Event"] = request.getEvent();
  }

  if (!!request.hasItemConditionArray()) {
    body["ItemConditionArray"] = request.getItemConditionArray();
  }

  if (!!request.hasItemConditionExpress()) {
    body["ItemConditionExpress"] = request.getItemConditionExpress();
  }

  if (!!request.hasItemConditionType()) {
    body["ItemConditionType"] = request.getItemConditionType();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasNewProductRegulation()) {
    body["NewProductRegulation"] = request.getNewProductRegulation();
  }

  if (!!request.hasRecallName()) {
    body["RecallName"] = request.getRecallName();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatisPeriod()) {
    body["StatisPeriod"] = request.getStatisPeriod();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasToleranceValue()) {
    body["ToleranceValue"] = request.getToleranceValue();
  }

  if (!!request.hasTrafficControlTaskId()) {
    body["TrafficControlTaskId"] = request.getTrafficControlTaskId();
  }

  if (!!request.hasValue()) {
    body["Value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTrafficControlTarget"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltargets")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTrafficControlTargetResponse>();
}

/**
 * @summary Creates a new traffic control target and sets its parameters, such as the item condition, event, and value.
 *
 * @description ## Usage notes
 * - The `ItemConditionType` parameter supports two formats: array format (Array) and expression format (Expression). Based on the format you select, you must provide either `ItemConditionArray` or `ItemConditionExpress`.
 * - The `StatisPeriod` parameter defaults to daily. For hourly statistics, you must set this parameter explicitly.
 * - The `ToleranceValue` and `NewProductRegulation` parameters are optional.
 * - The `Status` parameter controls whether a new traffic control target takes effect immediately. By default, new targets are inactive.
 *
 * @param request CreateTrafficControlTargetRequest
 * @return CreateTrafficControlTargetResponse
 */
CreateTrafficControlTargetResponse Client::createTrafficControlTarget(const CreateTrafficControlTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTrafficControlTargetWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a new traffic control task with multiple conditions and target configurations.
 *
 * @description ## Request
 * - Use this API to create a new traffic control task. You can define a traffic control policy for different scenarios, time ranges, and conditions for users or items.
 * - The `ExecutionTime` parameter specifies the execution time mode for the task. If you select the `TimeRange` mode, you must provide both the `StartTime` and `EndTime` parameters.
 * - The `TrafficControlTargets` parameter is required. For each traffic control target, you must specify its name, time range, event type, and expected value.
 * - You can use the `UserConditionType` and `ItemConditionType` parameters to define conditions for the target user group and items.
 * - Set the `ControlLogic` parameter to `Guaranteed` for guaranteed control or to `Approach` for approach control.
 * - To configure new product regulation, use the `NewProductRegulation` field.
 *
 * @param request CreateTrafficControlTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTrafficControlTaskResponse
 */
CreateTrafficControlTaskResponse Client::createTrafficControlTaskWithOptions(const CreateTrafficControlTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBehaviorTableMetaId()) {
    body["BehaviorTableMetaId"] = request.getBehaviorTableMetaId();
  }

  if (!!request.hasControlGranularity()) {
    body["ControlGranularity"] = request.getControlGranularity();
  }

  if (!!request.hasControlLogic()) {
    body["ControlLogic"] = request.getControlLogic();
  }

  if (!!request.hasControlType()) {
    body["ControlType"] = request.getControlType();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEffectiveSceneIds()) {
    body["EffectiveSceneIds"] = request.getEffectiveSceneIds();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasExecutionTime()) {
    body["ExecutionTime"] = request.getExecutionTime();
  }

  if (!!request.hasFlinkResourceId()) {
    body["FlinkResourceId"] = request.getFlinkResourceId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasItemConditionArray()) {
    body["ItemConditionArray"] = request.getItemConditionArray();
  }

  if (!!request.hasItemConditionExpress()) {
    body["ItemConditionExpress"] = request.getItemConditionExpress();
  }

  if (!!request.hasItemConditionType()) {
    body["ItemConditionType"] = request.getItemConditionType();
  }

  if (!!request.hasItemTableMetaId()) {
    body["ItemTableMetaId"] = request.getItemTableMetaId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPreExperimentIds()) {
    body["PreExperimentIds"] = request.getPreExperimentIds();
  }

  if (!!request.hasProdExperimentIds()) {
    body["ProdExperimentIds"] = request.getProdExperimentIds();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
  }

  if (!!request.hasServiceId()) {
    body["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasServiceIds()) {
    body["ServiceIds"] = request.getServiceIds();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatisBehaviorConditionArray()) {
    body["StatisBehaviorConditionArray"] = request.getStatisBehaviorConditionArray();
  }

  if (!!request.hasStatisBehaviorConditionExpress()) {
    body["StatisBehaviorConditionExpress"] = request.getStatisBehaviorConditionExpress();
  }

  if (!!request.hasStatisBehaviorConditionType()) {
    body["StatisBehaviorConditionType"] = request.getStatisBehaviorConditionType();
  }

  if (!!request.hasTrafficControlTargets()) {
    body["TrafficControlTargets"] = request.getTrafficControlTargets();
  }

  if (!!request.hasUserConditionArray()) {
    body["UserConditionArray"] = request.getUserConditionArray();
  }

  if (!!request.hasUserConditionExpress()) {
    body["UserConditionExpress"] = request.getUserConditionExpress();
  }

  if (!!request.hasUserConditionType()) {
    body["UserConditionType"] = request.getUserConditionType();
  }

  if (!!request.hasUserTableMetaId()) {
    body["UserTableMetaId"] = request.getUserTableMetaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTrafficControlTask"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltasks")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTrafficControlTaskResponse>();
}

/**
 * @summary Creates a new traffic control task with multiple conditions and target configurations.
 *
 * @description ## Request
 * - Use this API to create a new traffic control task. You can define a traffic control policy for different scenarios, time ranges, and conditions for users or items.
 * - The `ExecutionTime` parameter specifies the execution time mode for the task. If you select the `TimeRange` mode, you must provide both the `StartTime` and `EndTime` parameters.
 * - The `TrafficControlTargets` parameter is required. For each traffic control target, you must specify its name, time range, event type, and expected value.
 * - You can use the `UserConditionType` and `ItemConditionType` parameters to define conditions for the target user group and items.
 * - Set the `ControlLogic` parameter to `Guaranteed` for guaranteed control or to `Approach` for approach control.
 * - To configure new product regulation, use the `NewProductRegulation` field.
 *
 * @param request CreateTrafficControlTaskRequest
 * @return CreateTrafficControlTaskResponse
 */
CreateTrafficControlTaskResponse Client::createTrafficControlTask(const CreateTrafficControlTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTrafficControlTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 对指定资源规则中的计算公式进行调试
 *
 * @param tmpReq DebugResourceRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DebugResourceRuleResponse
 */
DebugResourceRuleResponse Client::debugResourceRuleWithOptions(const string &ResourceRuleId, const DebugResourceRuleRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DebugResourceRuleShrinkRequest request = DebugResourceRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMetricInfo()) {
    request.setMetricInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMetricInfo(), "MetricInfo", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMetricInfoShrink()) {
    query["MetricInfo"] = request.getMetricInfoShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DebugResourceRule"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resourcerules/" , Darabonba::Encode::Encoder::percentEncode(ResourceRuleId) , "/action/debug")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DebugResourceRuleResponse>();
}

/**
 * @summary 对指定资源规则中的计算公式进行调试
 *
 * @param request DebugResourceRuleRequest
 * @return DebugResourceRuleResponse
 */
DebugResourceRuleResponse Client::debugResourceRule(const string &ResourceRuleId, const DebugResourceRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return debugResourceRuleWithOptions(ResourceRuleId, request, headers, runtime);
}

/**
 * @summary Deletes the specified A/B test metric.
 *
 * @param request DeleteABMetricRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteABMetricResponse
 */
DeleteABMetricResponse Client::deleteABMetricWithOptions(const string &ABMetricId, const DeleteABMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteABMetric"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/abmetrics/" , Darabonba::Encode::Encoder::percentEncode(ABMetricId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteABMetricResponse>();
}

/**
 * @summary Deletes the specified A/B test metric.
 *
 * @param request DeleteABMetricRequest
 * @return DeleteABMetricResponse
 */
DeleteABMetricResponse Client::deleteABMetric(const string &ABMetricId, const DeleteABMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteABMetricWithOptions(ABMetricId, request, headers, runtime);
}

/**
 * @summary Deletes an A/B test metric group.
 *
 * @param request DeleteABMetricGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteABMetricGroupResponse
 */
DeleteABMetricGroupResponse Client::deleteABMetricGroupWithOptions(const string &ABMetricGroupId, const DeleteABMetricGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteABMetricGroup"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/abmetricgroups/" , Darabonba::Encode::Encoder::percentEncode(ABMetricGroupId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteABMetricGroupResponse>();
}

/**
 * @summary Deletes an A/B test metric group.
 *
 * @param request DeleteABMetricGroupRequest
 * @return DeleteABMetricGroupResponse
 */
DeleteABMetricGroupResponse Client::deleteABMetricGroup(const string &ABMetricGroupId, const DeleteABMetricGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteABMetricGroupWithOptions(ABMetricGroupId, request, headers, runtime);
}

/**
 * @summary Delete the specified audience.
 *
 * @param request DeleteCrowdRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCrowdResponse
 */
DeleteCrowdResponse Client::deleteCrowdWithOptions(const string &CrowdId, const DeleteCrowdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCrowd"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/crowds/" , Darabonba::Encode::Encoder::percentEncode(CrowdId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCrowdResponse>();
}

/**
 * @summary Delete the specified audience.
 *
 * @param request DeleteCrowdRequest
 * @return DeleteCrowdResponse
 */
DeleteCrowdResponse Client::deleteCrowd(const string &CrowdId, const DeleteCrowdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteCrowdWithOptions(CrowdId, request, headers, runtime);
}

/**
 * @summary Deletes a data diagnosis configuration using the specified DataDiagnosisId and InstanceId.
 *
 * @description ## Description
 * Ensure you provide the correct `DataDiagnosisId` and `InstanceId` to avoid accidental deletion.
 *
 * @param request DeleteDataDiagnosisRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataDiagnosisResponse
 */
DeleteDataDiagnosisResponse Client::deleteDataDiagnosisWithOptions(const string &DataDiagnosisId, const DeleteDataDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataDiagnosis"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datadiagnoses/" , Darabonba::Encode::Encoder::percentEncode(DataDiagnosisId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataDiagnosisResponse>();
}

/**
 * @summary Deletes a data diagnosis configuration using the specified DataDiagnosisId and InstanceId.
 *
 * @description ## Description
 * Ensure you provide the correct `DataDiagnosisId` and `InstanceId` to avoid accidental deletion.
 *
 * @param request DeleteDataDiagnosisRequest
 * @return DeleteDataDiagnosisResponse
 */
DeleteDataDiagnosisResponse Client::deleteDataDiagnosis(const string &DataDiagnosisId, const DeleteDataDiagnosisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDataDiagnosisWithOptions(DataDiagnosisId, request, headers, runtime);
}

/**
 * @summary Deletes a specified engine configuration.
 *
 * @description Deletes a specified engine configuration.
 *
 * @param request DeleteEngineConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEngineConfigResponse
 */
DeleteEngineConfigResponse Client::deleteEngineConfigWithOptions(const string &EngineConfigId, const DeleteEngineConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeleteAll()) {
    query["DeleteAll"] = request.getDeleteAll();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEngineConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/engineconfigs/" , Darabonba::Encode::Encoder::percentEncode(EngineConfigId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEngineConfigResponse>();
}

/**
 * @summary Deletes a specified engine configuration.
 *
 * @description Deletes a specified engine configuration.
 *
 * @param request DeleteEngineConfigRequest
 * @return DeleteEngineConfigResponse
 */
DeleteEngineConfigResponse Client::deleteEngineConfig(const string &EngineConfigId, const DeleteEngineConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteEngineConfigWithOptions(EngineConfigId, request, headers, runtime);
}

/**
 * @summary Delete the specified experiment.
 *
 * @param request DeleteExperimentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteExperimentResponse
 */
DeleteExperimentResponse Client::deleteExperimentWithOptions(const string &ExperimentId, const DeleteExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteExperiment"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments/" , Darabonba::Encode::Encoder::percentEncode(ExperimentId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteExperimentResponse>();
}

/**
 * @summary Delete the specified experiment.
 *
 * @param request DeleteExperimentRequest
 * @return DeleteExperimentResponse
 */
DeleteExperimentResponse Client::deleteExperiment(const string &ExperimentId, const DeleteExperimentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteExperimentWithOptions(ExperimentId, request, headers, runtime);
}

/**
 * @summary Delete the specified experiment group.
 *
 * @param request DeleteExperimentGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteExperimentGroupResponse
 */
DeleteExperimentGroupResponse Client::deleteExperimentGroupWithOptions(const string &ExperimentGroupId, const DeleteExperimentGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteExperimentGroup"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experimentgroups/" , Darabonba::Encode::Encoder::percentEncode(ExperimentGroupId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteExperimentGroupResponse>();
}

/**
 * @summary Delete the specified experiment group.
 *
 * @param request DeleteExperimentGroupRequest
 * @return DeleteExperimentGroupResponse
 */
DeleteExperimentGroupResponse Client::deleteExperimentGroup(const string &ExperimentGroupId, const DeleteExperimentGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteExperimentGroupWithOptions(ExperimentGroupId, request, headers, runtime);
}

/**
 * @summary Deletes a configuration resource from an instance.
 *
 * @param request DeleteInstanceResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceResourceResponse
 */
DeleteInstanceResourceResponse Client::deleteInstanceResourceWithOptions(const string &InstanceId, const string &ResourceId, const DeleteInstanceResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstanceResource"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/resources/" , Darabonba::Encode::Encoder::percentEncode(ResourceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceResourceResponse>();
}

/**
 * @summary Deletes a configuration resource from an instance.
 *
 * @param request DeleteInstanceResourceRequest
 * @return DeleteInstanceResourceResponse
 */
DeleteInstanceResourceResponse Client::deleteInstanceResource(const string &InstanceId, const string &ResourceId, const DeleteInstanceResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteInstanceResourceWithOptions(InstanceId, ResourceId, request, headers, runtime);
}

/**
 * @summary Delete the specified Lab.
 *
 * @param request DeleteLaboratoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLaboratoryResponse
 */
DeleteLaboratoryResponse Client::deleteLaboratoryWithOptions(const string &LaboratoryId, const DeleteLaboratoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLaboratory"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/laboratories/" , Darabonba::Encode::Encoder::percentEncode(LaboratoryId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLaboratoryResponse>();
}

/**
 * @summary Delete the specified Lab.
 *
 * @param request DeleteLaboratoryRequest
 * @return DeleteLaboratoryResponse
 */
DeleteLaboratoryResponse Client::deleteLaboratory(const string &LaboratoryId, const DeleteLaboratoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteLaboratoryWithOptions(LaboratoryId, request, headers, runtime);
}

/**
 * @summary Delete the specified layer.
 *
 * @param request DeleteLayerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLayerResponse
 */
DeleteLayerResponse Client::deleteLayerWithOptions(const string &LayerId, const DeleteLayerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLayer"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/layers/" , Darabonba::Encode::Encoder::percentEncode(LayerId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLayerResponse>();
}

/**
 * @summary Delete the specified layer.
 *
 * @param request DeleteLayerRequest
 * @return DeleteLayerResponse
 */
DeleteLayerResponse Client::deleteLayer(const string &LayerId, const DeleteLayerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteLayerWithOptions(LayerId, request, headers, runtime);
}

/**
 * @summary Delete the specified parameter.
 *
 * @param request DeleteParamRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteParamResponse
 */
DeleteParamResponse Client::deleteParamWithOptions(const string &ParamId, const DeleteParamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteParam"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/params/" , Darabonba::Encode::Encoder::percentEncode(ParamId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteParamResponse>();
}

/**
 * @summary Delete the specified parameter.
 *
 * @param request DeleteParamRequest
 * @return DeleteParamResponse
 */
DeleteParamResponse Client::deleteParam(const string &ParamId, const DeleteParamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteParamWithOptions(ParamId, request, headers, runtime);
}

/**
 * @summary Deletes a recall management service.
 *
 * @description ## Request description
 * This operation deletes a recall management service based on the RecallManagementServiceId and InstanceId. Before you call this API, ensure you have the correct information for the service to be deleted.
 *
 * @param request DeleteRecallManagementServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRecallManagementServiceResponse
 */
DeleteRecallManagementServiceResponse Client::deleteRecallManagementServiceWithOptions(const string &RecallManagementServiceId, const DeleteRecallManagementServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRecallManagementService"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementservices/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRecallManagementServiceResponse>();
}

/**
 * @summary Deletes a recall management service.
 *
 * @description ## Request description
 * This operation deletes a recall management service based on the RecallManagementServiceId and InstanceId. Before you call this API, ensure you have the correct information for the service to be deleted.
 *
 * @param request DeleteRecallManagementServiceRequest
 * @return DeleteRecallManagementServiceResponse
 */
DeleteRecallManagementServiceResponse Client::deleteRecallManagementService(const string &RecallManagementServiceId, const DeleteRecallManagementServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteRecallManagementServiceWithOptions(RecallManagementServiceId, request, headers, runtime);
}

/**
 * @summary Deletes a specified version of a recall management service.
 *
 * @description ## Request
 * This operation deletes a specific version of a recall management service. You must provide the recall management service ID, the recall management service version ID, and the instance ID. This operation is irreversible, so back up all critical data before proceeding.
 *
 * @param request DeleteRecallManagementServiceVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRecallManagementServiceVersionResponse
 */
DeleteRecallManagementServiceVersionResponse Client::deleteRecallManagementServiceVersionWithOptions(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const DeleteRecallManagementServiceVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRecallManagementServiceVersion"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementservices/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceId) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceVersionId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRecallManagementServiceVersionResponse>();
}

/**
 * @summary Deletes a specified version of a recall management service.
 *
 * @description ## Request
 * This operation deletes a specific version of a recall management service. You must provide the recall management service ID, the recall management service version ID, and the instance ID. This operation is irreversible, so back up all critical data before proceeding.
 *
 * @param request DeleteRecallManagementServiceVersionRequest
 * @return DeleteRecallManagementServiceVersionResponse
 */
DeleteRecallManagementServiceVersionResponse Client::deleteRecallManagementServiceVersion(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const DeleteRecallManagementServiceVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteRecallManagementServiceVersionWithOptions(RecallManagementServiceId, RecallManagementServiceVersionId, request, headers, runtime);
}

/**
 * @summary Deletes the specified recall management service version configuration.
 *
 * @description ## Usage notes
 * - Specify the recall management service ID, recall management version ID, and recall management configuration ID.
 * - `InstanceId` is a required query parameter.
 * - The request fails if any of the specified IDs are invalid.
 *
 * @param request DeleteRecallManagementServiceVersionConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRecallManagementServiceVersionConfigResponse
 */
DeleteRecallManagementServiceVersionConfigResponse Client::deleteRecallManagementServiceVersionConfigWithOptions(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const string &RecallManagementServiceVersionConfigId, const DeleteRecallManagementServiceVersionConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRecallManagementServiceVersionConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementservices/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceId) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceVersionId) , "/configs/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceVersionConfigId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRecallManagementServiceVersionConfigResponse>();
}

/**
 * @summary Deletes the specified recall management service version configuration.
 *
 * @description ## Usage notes
 * - Specify the recall management service ID, recall management version ID, and recall management configuration ID.
 * - `InstanceId` is a required query parameter.
 * - The request fails if any of the specified IDs are invalid.
 *
 * @param request DeleteRecallManagementServiceVersionConfigRequest
 * @return DeleteRecallManagementServiceVersionConfigResponse
 */
DeleteRecallManagementServiceVersionConfigResponse Client::deleteRecallManagementServiceVersionConfig(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const string &RecallManagementServiceVersionConfigId, const DeleteRecallManagementServiceVersionConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteRecallManagementServiceVersionConfigWithOptions(RecallManagementServiceId, RecallManagementServiceVersionId, RecallManagementServiceVersionConfigId, request, headers, runtime);
}

/**
 * @summary This API deletes a recall management table using the specified recall management table ID and instance ID.
 *
 * @description ## Request
 * - The required **path parameter** `RecallManagementTableId` specifies the ID of the recall management table to delete.
 * - The required **query parameter** `InstanceId` specifies the ID of the instance.
 * - A successful operation returns a `RequestId` in the response body for request tracking.
 *
 * @param request DeleteRecallManagementTableRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRecallManagementTableResponse
 */
DeleteRecallManagementTableResponse Client::deleteRecallManagementTableWithOptions(const string &RecallManagementTableId, const DeleteRecallManagementTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRecallManagementTable"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementtables/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementTableId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRecallManagementTableResponse>();
}

/**
 * @summary This API deletes a recall management table using the specified recall management table ID and instance ID.
 *
 * @description ## Request
 * - The required **path parameter** `RecallManagementTableId` specifies the ID of the recall management table to delete.
 * - The required **query parameter** `InstanceId` specifies the ID of the instance.
 * - A successful operation returns a `RequestId` in the response body for request tracking.
 *
 * @param request DeleteRecallManagementTableRequest
 * @return DeleteRecallManagementTableResponse
 */
DeleteRecallManagementTableResponse Client::deleteRecallManagementTable(const string &RecallManagementTableId, const DeleteRecallManagementTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteRecallManagementTableWithOptions(RecallManagementTableId, request, headers, runtime);
}

/**
 * @summary 删除资源规则
 *
 * @param request DeleteResourceRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteResourceRuleResponse
 */
DeleteResourceRuleResponse Client::deleteResourceRuleWithOptions(const string &ResourceRuleId, const DeleteResourceRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteResourceRule"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resourcerules/" , Darabonba::Encode::Encoder::percentEncode(ResourceRuleId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteResourceRuleResponse>();
}

/**
 * @summary 删除资源规则
 *
 * @param request DeleteResourceRuleRequest
 * @return DeleteResourceRuleResponse
 */
DeleteResourceRuleResponse Client::deleteResourceRule(const string &ResourceRuleId, const DeleteResourceRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteResourceRuleWithOptions(ResourceRuleId, request, headers, runtime);
}

/**
 * @summary 删除资源规则条目
 *
 * @param request DeleteResourceRuleItemRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteResourceRuleItemResponse
 */
DeleteResourceRuleItemResponse Client::deleteResourceRuleItemWithOptions(const string &ResourceRuleId, const string &ResourceRuleItemId, const DeleteResourceRuleItemRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteResourceRuleItem"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resourcerules/" , Darabonba::Encode::Encoder::percentEncode(ResourceRuleId) , "/items/" , Darabonba::Encode::Encoder::percentEncode(ResourceRuleItemId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteResourceRuleItemResponse>();
}

/**
 * @summary 删除资源规则条目
 *
 * @param request DeleteResourceRuleItemRequest
 * @return DeleteResourceRuleItemResponse
 */
DeleteResourceRuleItemResponse Client::deleteResourceRuleItem(const string &ResourceRuleId, const string &ResourceRuleItemId, const DeleteResourceRuleItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteResourceRuleItemWithOptions(ResourceRuleId, ResourceRuleItemId, request, headers, runtime);
}

/**
 * @summary 删除指定的样本一致性任务
 *
 * @param request DeleteSampleConsistencyJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSampleConsistencyJobResponse
 */
DeleteSampleConsistencyJobResponse Client::deleteSampleConsistencyJobWithOptions(const string &SampleConsistencyJobId, const DeleteSampleConsistencyJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSampleConsistencyJob"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/sampleconsistencyjobs/" , Darabonba::Encode::Encoder::percentEncode(SampleConsistencyJobId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSampleConsistencyJobResponse>();
}

/**
 * @summary 删除指定的样本一致性任务
 *
 * @param request DeleteSampleConsistencyJobRequest
 * @return DeleteSampleConsistencyJobResponse
 */
DeleteSampleConsistencyJobResponse Client::deleteSampleConsistencyJob(const string &SampleConsistencyJobId, const DeleteSampleConsistencyJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteSampleConsistencyJobWithOptions(SampleConsistencyJobId, request, headers, runtime);
}

/**
 * @summary Delete the specified scenario.
 *
 * @param request DeleteSceneRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSceneResponse
 */
DeleteSceneResponse Client::deleteSceneWithOptions(const string &SceneId, const DeleteSceneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteScene"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/scenes/" , Darabonba::Encode::Encoder::percentEncode(SceneId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSceneResponse>();
}

/**
 * @summary Delete the specified scenario.
 *
 * @param request DeleteSceneRequest
 * @return DeleteSceneResponse
 */
DeleteSceneResponse Client::deleteScene(const string &SceneId, const DeleteSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteSceneWithOptions(SceneId, request, headers, runtime);
}

/**
 * @summary Deletes the specified subcrowd.
 *
 * @param request DeleteSubCrowdRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSubCrowdResponse
 */
DeleteSubCrowdResponse Client::deleteSubCrowdWithOptions(const string &CrowdId, const string &SubCrowdId, const DeleteSubCrowdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSubCrowd"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/crowds/" , Darabonba::Encode::Encoder::percentEncode(CrowdId) , "/subcrowds/" , Darabonba::Encode::Encoder::percentEncode(SubCrowdId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSubCrowdResponse>();
}

/**
 * @summary Deletes the specified subcrowd.
 *
 * @param request DeleteSubCrowdRequest
 * @return DeleteSubCrowdResponse
 */
DeleteSubCrowdResponse Client::deleteSubCrowd(const string &CrowdId, const string &SubCrowdId, const DeleteSubCrowdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteSubCrowdWithOptions(CrowdId, SubCrowdId, request, headers, runtime);
}

/**
 * @summary Deletes a data table.
 *
 * @param request DeleteTableMetaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTableMetaResponse
 */
DeleteTableMetaResponse Client::deleteTableMetaWithOptions(const string &TableMetaId, const DeleteTableMetaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTableMeta"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/tablemetas/" , Darabonba::Encode::Encoder::percentEncode(TableMetaId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTableMetaResponse>();
}

/**
 * @summary Deletes a data table.
 *
 * @param request DeleteTableMetaRequest
 * @return DeleteTableMetaResponse
 */
DeleteTableMetaResponse Client::deleteTableMeta(const string &TableMetaId, const DeleteTableMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTableMetaWithOptions(TableMetaId, request, headers, runtime);
}

/**
 * @summary Deletes the specified traffic control target.
 *
 * @description ## Request
 * - **TrafficControlTargetId** is a required path parameter that specifies the traffic control target to delete.
 * - **InstanceId** is a required query parameter that specifies the instance ID for this operation.
 * - A successful response includes a `RequestId` field to track the request.
 *
 * @param request DeleteTrafficControlTargetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTrafficControlTargetResponse
 */
DeleteTrafficControlTargetResponse Client::deleteTrafficControlTargetWithOptions(const string &TrafficControlTargetId, const DeleteTrafficControlTargetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTrafficControlTarget"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltargets/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTargetId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTrafficControlTargetResponse>();
}

/**
 * @summary Deletes the specified traffic control target.
 *
 * @description ## Request
 * - **TrafficControlTargetId** is a required path parameter that specifies the traffic control target to delete.
 * - **InstanceId** is a required query parameter that specifies the instance ID for this operation.
 * - A successful response includes a `RequestId` field to track the request.
 *
 * @param request DeleteTrafficControlTargetRequest
 * @return DeleteTrafficControlTargetResponse
 */
DeleteTrafficControlTargetResponse Client::deleteTrafficControlTarget(const string &TrafficControlTargetId, const DeleteTrafficControlTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTrafficControlTargetWithOptions(TrafficControlTargetId, request, headers, runtime);
}

/**
 * @summary Deletes a specified traffic control task.
 *
 * @description ## Description
 * - This API uses `TrafficControlTaskId` and `InstanceId` to delete a traffic control task.
 * - Ensure the `TrafficControlTaskId` and `InstanceId` are correct, or the operation may fail.
 * - This operation is irreversible. Proceed with caution.
 *
 * @param request DeleteTrafficControlTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTrafficControlTaskResponse
 */
DeleteTrafficControlTaskResponse Client::deleteTrafficControlTaskWithOptions(const string &TrafficControlTaskId, const DeleteTrafficControlTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTrafficControlTask"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltasks/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTaskId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTrafficControlTaskResponse>();
}

/**
 * @summary Deletes a specified traffic control task.
 *
 * @description ## Description
 * - This API uses `TrafficControlTaskId` and `InstanceId` to delete a traffic control task.
 * - Ensure the `TrafficControlTaskId` and `InstanceId` are correct, or the operation may fail.
 * - This operation is irreversible. Proceed with caution.
 *
 * @param request DeleteTrafficControlTaskRequest
 * @return DeleteTrafficControlTaskResponse
 */
DeleteTrafficControlTaskResponse Client::deleteTrafficControlTask(const string &TrafficControlTaskId, const DeleteTrafficControlTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTrafficControlTaskWithOptions(TrafficControlTaskId, request, headers, runtime);
}

/**
 * @summary Deploys Flink code for a traffic control task in a specified environment.
 *
 * @description ## Overview
 * - This API deploys Flink code for a specific traffic control task.
 * - `TrafficControlTaskId` is a path parameter and requires a valid task ID.
 * - `InstanceId` and `Environment` are required request body parameters that specify the instance ID and the target deployment environment.
 * - The optional `RetryDeploy` parameter specifies whether to automatically retry the deployment on failure. The default value is `false`.
 * - The value for `Environment` must be one of the following: Daily, Pre, or Prod.
 *
 * @param request DeployTrafficControlTaskCodeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeployTrafficControlTaskCodeResponse
 */
DeployTrafficControlTaskCodeResponse Client::deployTrafficControlTaskCodeWithOptions(const string &TrafficControlTaskId, const DeployTrafficControlTaskCodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRetryDeploy()) {
    body["RetryDeploy"] = request.getRetryDeploy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeployTrafficControlTaskCode"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltasks/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTaskId) , "/action/deploycode")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeployTrafficControlTaskCodeResponse>();
}

/**
 * @summary Deploys Flink code for a traffic control task in a specified environment.
 *
 * @description ## Overview
 * - This API deploys Flink code for a specific traffic control task.
 * - `TrafficControlTaskId` is a path parameter and requires a valid task ID.
 * - `InstanceId` and `Environment` are required request body parameters that specify the instance ID and the target deployment environment.
 * - The optional `RetryDeploy` parameter specifies whether to automatically retry the deployment on failure. The default value is `false`.
 * - The value for `Environment` must be one of the following: Daily, Pre, or Prod.
 *
 * @param request DeployTrafficControlTaskCodeRequest
 * @return DeployTrafficControlTaskCodeResponse
 */
DeployTrafficControlTaskCodeResponse Client::deployTrafficControlTaskCode(const string &TrafficControlTaskId, const DeployTrafficControlTaskCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deployTrafficControlTaskCodeWithOptions(TrafficControlTaskId, request, headers, runtime);
}

/**
 * @summary Exports a specified table from the recall engine to a MaxCompute project.
 *
 * @description ## Description
 * Use this API to export a specific table from the recall engine to Alibaba Cloud MaxCompute for further data processing or analysis. Ensure the provided MaxCompute project name, schema, and table name are valid and that you have the required permissions.
 * ### Usage notes
 * - The `Partitions` field must be a JSON object that specifies the table partitions to export.
 * - The request may fail if any required parameters are missing or incorrect.
 * - The export process is asynchronous and may take some time. You can use the returned job ID to track the status of the job.
 *
 * @param request ExportRecallManagementTableRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportRecallManagementTableResponse
 */
ExportRecallManagementTableResponse Client::exportRecallManagementTableWithOptions(const string &RecallManagementTableId, const ExportRecallManagementTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxcomputeProjectName()) {
    body["MaxcomputeProjectName"] = request.getMaxcomputeProjectName();
  }

  if (!!request.hasMaxcomputeSchema()) {
    body["MaxcomputeSchema"] = request.getMaxcomputeSchema();
  }

  if (!!request.hasMaxcomputeTableName()) {
    body["MaxcomputeTableName"] = request.getMaxcomputeTableName();
  }

  if (!!request.hasPartitions()) {
    body["Partitions"] = request.getPartitions();
  }

  if (!!request.hasRecallManagementTableVersionId()) {
    body["RecallManagementTableVersionId"] = request.getRecallManagementTableVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExportRecallManagementTable"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementtables/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementTableId) , "/action/export")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportRecallManagementTableResponse>();
}

/**
 * @summary Exports a specified table from the recall engine to a MaxCompute project.
 *
 * @description ## Description
 * Use this API to export a specific table from the recall engine to Alibaba Cloud MaxCompute for further data processing or analysis. Ensure the provided MaxCompute project name, schema, and table name are valid and that you have the required permissions.
 * ### Usage notes
 * - The `Partitions` field must be a JSON object that specifies the table partitions to export.
 * - The request may fail if any required parameters are missing or incorrect.
 * - The export process is asynchronous and may take some time. You can use the returned job ID to track the status of the job.
 *
 * @param request ExportRecallManagementTableRequest
 * @return ExportRecallManagementTableResponse
 */
ExportRecallManagementTableResponse Client::exportRecallManagementTable(const string &RecallManagementTableId, const ExportRecallManagementTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return exportRecallManagementTableWithOptions(RecallManagementTableId, request, headers, runtime);
}

/**
 * @summary Generates an algorithm customization script.
 *
 * @param request GenerateAlgorithmCustomizationScriptRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateAlgorithmCustomizationScriptResponse
 */
GenerateAlgorithmCustomizationScriptResponse Client::generateAlgorithmCustomizationScriptWithOptions(const string &AlgorithmCustomizationId, const GenerateAlgorithmCustomizationScriptRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDeployMode()) {
    body["DeployMode"] = request.getDeployMode();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasModuleFieldTypes()) {
    body["ModuleFieldTypes"] = request.getModuleFieldTypes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GenerateAlgorithmCustomizationScript"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/algorithmcustomizations/" , Darabonba::Encode::Encoder::percentEncode(AlgorithmCustomizationId) , "/action/generatescript")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateAlgorithmCustomizationScriptResponse>();
}

/**
 * @summary Generates an algorithm customization script.
 *
 * @param request GenerateAlgorithmCustomizationScriptRequest
 * @return GenerateAlgorithmCustomizationScriptResponse
 */
GenerateAlgorithmCustomizationScriptResponse Client::generateAlgorithmCustomizationScript(const string &AlgorithmCustomizationId, const GenerateAlgorithmCustomizationScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return generateAlgorithmCustomizationScriptWithOptions(AlgorithmCustomizationId, request, headers, runtime);
}

/**
 * @summary Generates Flink code for a specified traffic control task ID and instance information.
 *
 * @description ## Description
 * - This API generates Flink code for a specified traffic control task ID, instance ID, and environment type.
 * - The `Environment` parameter accepts three values: `Daily` for the daily environment, `Pre` for the pre-release environment, and `Prod` for the production environment.
 * - Check the `PreNeedConfig` field in the response. A `true` value indicates that necessary configuration information might be missing in the pre-release environment. If this occurs, add or adjust the required settings.
 *
 * @param request GenerateTrafficControlTaskCodeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateTrafficControlTaskCodeResponse
 */
GenerateTrafficControlTaskCodeResponse Client::generateTrafficControlTaskCodeWithOptions(const string &TrafficControlTaskId, const GenerateTrafficControlTaskCodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GenerateTrafficControlTaskCode"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltasks/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTaskId) , "/action/generatecode")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateTrafficControlTaskCodeResponse>();
}

/**
 * @summary Generates Flink code for a specified traffic control task ID and instance information.
 *
 * @description ## Description
 * - This API generates Flink code for a specified traffic control task ID, instance ID, and environment type.
 * - The `Environment` parameter accepts three values: `Daily` for the daily environment, `Pre` for the pre-release environment, and `Prod` for the production environment.
 * - Check the `PreNeedConfig` field in the response. A `true` value indicates that necessary configuration information might be missing in the pre-release environment. If this occurs, add or adjust the required settings.
 *
 * @param request GenerateTrafficControlTaskCodeRequest
 * @return GenerateTrafficControlTaskCodeResponse
 */
GenerateTrafficControlTaskCodeResponse Client::generateTrafficControlTaskCode(const string &TrafficControlTaskId, const GenerateTrafficControlTaskCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return generateTrafficControlTaskCodeWithOptions(TrafficControlTaskId, request, headers, runtime);
}

/**
 * @summary 产生流量调控的相关召回配置
 *
 * @param request GenerateTrafficControlTaskConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateTrafficControlTaskConfigResponse
 */
GenerateTrafficControlTaskConfigResponse Client::generateTrafficControlTaskConfigWithOptions(const string &TrafficControlTaskId, const GenerateTrafficControlTaskConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GenerateTrafficControlTaskConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltasks/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTaskId) , "/action/generateconfig")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateTrafficControlTaskConfigResponse>();
}

/**
 * @summary 产生流量调控的相关召回配置
 *
 * @param request GenerateTrafficControlTaskConfigRequest
 * @return GenerateTrafficControlTaskConfigResponse
 */
GenerateTrafficControlTaskConfigResponse Client::generateTrafficControlTaskConfig(const string &TrafficControlTaskId, const GenerateTrafficControlTaskConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return generateTrafficControlTaskConfigWithOptions(TrafficControlTaskId, request, headers, runtime);
}

/**
 * @summary Gets the details of an A/B metric.
 *
 * @param request GetABMetricRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetABMetricResponse
 */
GetABMetricResponse Client::getABMetricWithOptions(const string &ABMetricId, const GetABMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetABMetric"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/abmetrics/" , Darabonba::Encode::Encoder::percentEncode(ABMetricId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetABMetricResponse>();
}

/**
 * @summary Gets the details of an A/B metric.
 *
 * @param request GetABMetricRequest
 * @return GetABMetricResponse
 */
GetABMetricResponse Client::getABMetric(const string &ABMetricId, const GetABMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getABMetricWithOptions(ABMetricId, request, headers, runtime);
}

/**
 * @summary Retrieves the details of an A/B testing metric group.
 *
 * @param request GetABMetricGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetABMetricGroupResponse
 */
GetABMetricGroupResponse Client::getABMetricGroupWithOptions(const string &ABMetricGroupId, const GetABMetricGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetABMetricGroup"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/abmetricgroups/" , Darabonba::Encode::Encoder::percentEncode(ABMetricGroupId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetABMetricGroupResponse>();
}

/**
 * @summary Retrieves the details of an A/B testing metric group.
 *
 * @param request GetABMetricGroupRequest
 * @return GetABMetricGroupResponse
 */
GetABMetricGroupResponse Client::getABMetricGroup(const string &ABMetricGroupId, const GetABMetricGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getABMetricGroupWithOptions(ABMetricGroupId, request, headers, runtime);
}

/**
 * @summary Gets the details of a specified calculation job.
 *
 * @param request GetCalculationJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCalculationJobResponse
 */
GetCalculationJobResponse Client::getCalculationJobWithOptions(const string &CalculationJobId, const GetCalculationJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCalculationJob"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/calculationjobs/" , Darabonba::Encode::Encoder::percentEncode(CalculationJobId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCalculationJobResponse>();
}

/**
 * @summary Gets the details of a specified calculation job.
 *
 * @param request GetCalculationJobRequest
 * @return GetCalculationJobResponse
 */
GetCalculationJobResponse Client::getCalculationJob(const string &CalculationJobId, const GetCalculationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCalculationJobWithOptions(CalculationJobId, request, headers, runtime);
}

/**
 * @summary Retrieves details of a data diagnosis task using its data diagnosis task ID and instance ID.
 *
 * @description ## Request
 * - This API retrieves the details of a specific data diagnosis task using the provided `DataDiagnosisId` (data diagnosis task configuration ID) and `InstanceId` (instance ID).
 * - The `CycleTime` field specifies the time for periodic execution. If this field is empty, the task does not execute periodically.
 * - The value of `Type` determines the content of the `Config` field. For details about the required configuration for each type, see the relevant documentation.
 * - `GmtCreateTime` and `GmtModifiedTime` are timestamps for the record\\"s creation and modification times, respectively.
 *
 * @param request GetDataDiagnosisRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataDiagnosisResponse
 */
GetDataDiagnosisResponse Client::getDataDiagnosisWithOptions(const string &DataDiagnosisId, const GetDataDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataDiagnosis"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datadiagnoses/" , Darabonba::Encode::Encoder::percentEncode(DataDiagnosisId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataDiagnosisResponse>();
}

/**
 * @summary Retrieves details of a data diagnosis task using its data diagnosis task ID and instance ID.
 *
 * @description ## Request
 * - This API retrieves the details of a specific data diagnosis task using the provided `DataDiagnosisId` (data diagnosis task configuration ID) and `InstanceId` (instance ID).
 * - The `CycleTime` field specifies the time for periodic execution. If this field is empty, the task does not execute periodically.
 * - The value of `Type` determines the content of the `Config` field. For details about the required configuration for each type, see the relevant documentation.
 * - `GmtCreateTime` and `GmtModifiedTime` are timestamps for the record\\"s creation and modification times, respectively.
 *
 * @param request GetDataDiagnosisRequest
 * @return GetDataDiagnosisResponse
 */
GetDataDiagnosisResponse Client::getDataDiagnosis(const string &DataDiagnosisId, const GetDataDiagnosisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDataDiagnosisWithOptions(DataDiagnosisId, request, headers, runtime);
}

/**
 * @summary Gets the details of an engine configuration.
 *
 * @param request GetEngineConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEngineConfigResponse
 */
GetEngineConfigResponse Client::getEngineConfigWithOptions(const string &EngineConfigId, const GetEngineConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEngineConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/engineconfigs/" , Darabonba::Encode::Encoder::percentEncode(EngineConfigId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEngineConfigResponse>();
}

/**
 * @summary Gets the details of an engine configuration.
 *
 * @param request GetEngineConfigRequest
 * @return GetEngineConfigResponse
 */
GetEngineConfigResponse Client::getEngineConfig(const string &EngineConfigId, const GetEngineConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getEngineConfigWithOptions(EngineConfigId, request, headers, runtime);
}

/**
 * @summary Retrieves the details of a specified experiment.
 *
 * @param request GetExperimentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetExperimentResponse
 */
GetExperimentResponse Client::getExperimentWithOptions(const string &ExperimentId, const GetExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetExperiment"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments/" , Darabonba::Encode::Encoder::percentEncode(ExperimentId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetExperimentResponse>();
}

/**
 * @summary Retrieves the details of a specified experiment.
 *
 * @param request GetExperimentRequest
 * @return GetExperimentResponse
 */
GetExperimentResponse Client::getExperiment(const string &ExperimentId, const GetExperimentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getExperimentWithOptions(ExperimentId, request, headers, runtime);
}

/**
 * @summary Retrieves details for a specified experiment group.
 *
 * @param request GetExperimentGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetExperimentGroupResponse
 */
GetExperimentGroupResponse Client::getExperimentGroupWithOptions(const string &ExperimentGroupId, const GetExperimentGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetExperimentGroup"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experimentgroups/" , Darabonba::Encode::Encoder::percentEncode(ExperimentGroupId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetExperimentGroupResponse>();
}

/**
 * @summary Retrieves details for a specified experiment group.
 *
 * @param request GetExperimentGroupRequest
 * @return GetExperimentGroupResponse
 */
GetExperimentGroupResponse Client::getExperimentGroup(const string &ExperimentGroupId, const GetExperimentGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getExperimentGroupWithOptions(ExperimentGroupId, request, headers, runtime);
}

/**
 * @summary Gets the details of a feature consistency check job.
 *
 * @param request GetFeatureConsistencyCheckJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFeatureConsistencyCheckJobResponse
 */
GetFeatureConsistencyCheckJobResponse Client::getFeatureConsistencyCheckJobWithOptions(const string &FeatureConsistencyCheckJobId, const GetFeatureConsistencyCheckJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFeatureConsistencyCheckJob"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/featureconsistencycheck/jobs/" , Darabonba::Encode::Encoder::percentEncode(FeatureConsistencyCheckJobId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFeatureConsistencyCheckJobResponse>();
}

/**
 * @summary Gets the details of a feature consistency check job.
 *
 * @param request GetFeatureConsistencyCheckJobRequest
 * @return GetFeatureConsistencyCheckJobResponse
 */
GetFeatureConsistencyCheckJobResponse Client::getFeatureConsistencyCheckJob(const string &FeatureConsistencyCheckJobId, const GetFeatureConsistencyCheckJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getFeatureConsistencyCheckJobWithOptions(FeatureConsistencyCheckJobId, request, headers, runtime);
}

/**
 * @summary Retrieves the configuration details of a feature consistency check task.
 *
 * @param request GetFeatureConsistencyCheckJobConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFeatureConsistencyCheckJobConfigResponse
 */
GetFeatureConsistencyCheckJobConfigResponse Client::getFeatureConsistencyCheckJobConfigWithOptions(const string &FeatureConsistencyCheckJobConfigId, const GetFeatureConsistencyCheckJobConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFeatureConsistencyCheckJobConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/featureconsistencycheck/jobconfigs/" , Darabonba::Encode::Encoder::percentEncode(FeatureConsistencyCheckJobConfigId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFeatureConsistencyCheckJobConfigResponse>();
}

/**
 * @summary Retrieves the configuration details of a feature consistency check task.
 *
 * @param request GetFeatureConsistencyCheckJobConfigRequest
 * @return GetFeatureConsistencyCheckJobConfigResponse
 */
GetFeatureConsistencyCheckJobConfigResponse Client::getFeatureConsistencyCheckJobConfig(const string &FeatureConsistencyCheckJobConfigId, const GetFeatureConsistencyCheckJobConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getFeatureConsistencyCheckJobConfigWithOptions(FeatureConsistencyCheckJobConfigId, request, headers, runtime);
}

/**
 * @summary Gets the details of a specified PAI-REC instance.
 *
 * @param request GetInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstanceWithOptions(const string &InstanceId, const GetInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstance"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceResponse>();
}

/**
 * @summary Gets the details of a specified PAI-REC instance.
 *
 * @param request GetInstanceRequest
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstance(const string &InstanceId, const GetInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getInstanceWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Retrieves the details of a specific resource in a specified instance.
 *
 * @param request GetInstanceResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceResourceResponse
 */
GetInstanceResourceResponse Client::getInstanceResourceWithOptions(const string &InstanceId, const string &ResourceId, const GetInstanceResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceResource"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/resources/" , Darabonba::Encode::Encoder::percentEncode(ResourceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceResourceResponse>();
}

/**
 * @summary Retrieves the details of a specific resource in a specified instance.
 *
 * @param request GetInstanceResourceRequest
 * @return GetInstanceResourceResponse
 */
GetInstanceResourceResponse Client::getInstanceResource(const string &InstanceId, const string &ResourceId, const GetInstanceResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getInstanceResourceWithOptions(InstanceId, ResourceId, request, headers, runtime);
}

/**
 * @summary Retrieves the schema of a specified data table within a resource.
 *
 * @param request GetInstanceResourceTableRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceResourceTableResponse
 */
GetInstanceResourceTableResponse Client::getInstanceResourceTableWithOptions(const string &InstanceId, const string &ResourceId, const string &TableName, const GetInstanceResourceTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceResourceTable"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/resources/" , Darabonba::Encode::Encoder::percentEncode(ResourceId) , "/tables/" , Darabonba::Encode::Encoder::percentEncode(TableName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceResourceTableResponse>();
}

/**
 * @summary Retrieves the schema of a specified data table within a resource.
 *
 * @param request GetInstanceResourceTableRequest
 * @return GetInstanceResourceTableResponse
 */
GetInstanceResourceTableResponse Client::getInstanceResourceTable(const string &InstanceId, const string &ResourceId, const string &TableName, const GetInstanceResourceTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getInstanceResourceTableWithOptions(InstanceId, ResourceId, TableName, request, headers, runtime);
}

/**
 * @summary Retrieves the details of a specified laboratory.
 *
 * @param request GetLaboratoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLaboratoryResponse
 */
GetLaboratoryResponse Client::getLaboratoryWithOptions(const string &LaboratoryId, const GetLaboratoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLaboratory"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/laboratories/" , Darabonba::Encode::Encoder::percentEncode(LaboratoryId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLaboratoryResponse>();
}

/**
 * @summary Retrieves the details of a specified laboratory.
 *
 * @param request GetLaboratoryRequest
 * @return GetLaboratoryResponse
 */
GetLaboratoryResponse Client::getLaboratory(const string &LaboratoryId, const GetLaboratoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getLaboratoryWithOptions(LaboratoryId, request, headers, runtime);
}

/**
 * @summary Retrieves the details of a specified layer.
 *
 * @param request GetLayerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLayerResponse
 */
GetLayerResponse Client::getLayerWithOptions(const string &LayerId, const GetLayerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLayer"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/layers/" , Darabonba::Encode::Encoder::percentEncode(LayerId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLayerResponse>();
}

/**
 * @summary Retrieves the details of a specified layer.
 *
 * @param request GetLayerRequest
 * @return GetLayerResponse
 */
GetLayerResponse Client::getLayer(const string &LayerId, const GetLayerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getLayerWithOptions(LayerId, request, headers, runtime);
}

/**
 * @summary Retrieves the recall management configuration.
 *
 * @param request GetRecallManagementConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRecallManagementConfigResponse
 */
GetRecallManagementConfigResponse Client::getRecallManagementConfigWithOptions(const GetRecallManagementConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRecallManagementConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementconfigs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRecallManagementConfigResponse>();
}

/**
 * @summary Retrieves the recall management configuration.
 *
 * @param request GetRecallManagementConfigRequest
 * @return GetRecallManagementConfigResponse
 */
GetRecallManagementConfigResponse Client::getRecallManagementConfig(const GetRecallManagementConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRecallManagementConfigWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the details of a specific recall management job, including its status and log.
 *
 * @description ## Description
 * Retrieves the details of a specific recall management job using its `RecallManagementJobId` and `InstanceId`. The response includes the job\\"s status (such as Init, Running, Success, or Failed), start and end times, related table information, and operation log. To make a request, specify the `RecallManagementJobId` as a path parameter and the `InstanceId` as a query parameter.
 *
 * @param request GetRecallManagementJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRecallManagementJobResponse
 */
GetRecallManagementJobResponse Client::getRecallManagementJobWithOptions(const string &RecallManagementJobId, const GetRecallManagementJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRecallManagementJob"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementjobs/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementJobId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRecallManagementJobResponse>();
}

/**
 * @summary Retrieves the details of a specific recall management job, including its status and log.
 *
 * @description ## Description
 * Retrieves the details of a specific recall management job using its `RecallManagementJobId` and `InstanceId`. The response includes the job\\"s status (such as Init, Running, Success, or Failed), start and end times, related table information, and operation log. To make a request, specify the `RecallManagementJobId` as a path parameter and the `InstanceId` as a query parameter.
 *
 * @param request GetRecallManagementJobRequest
 * @return GetRecallManagementJobResponse
 */
GetRecallManagementJobResponse Client::getRecallManagementJob(const string &RecallManagementJobId, const GetRecallManagementJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRecallManagementJobWithOptions(RecallManagementJobId, request, headers, runtime);
}

/**
 * @summary Retrieves the details of a specified recall management service, including its status and version.
 *
 * @description ## Request
 *
 * @param request GetRecallManagementServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRecallManagementServiceResponse
 */
GetRecallManagementServiceResponse Client::getRecallManagementServiceWithOptions(const string &RecallManagementServiceId, const GetRecallManagementServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRecallManagementService"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementservices/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRecallManagementServiceResponse>();
}

/**
 * @summary Retrieves the details of a specified recall management service, including its status and version.
 *
 * @description ## Request
 *
 * @param request GetRecallManagementServiceRequest
 * @return GetRecallManagementServiceResponse
 */
GetRecallManagementServiceResponse Client::getRecallManagementService(const string &RecallManagementServiceId, const GetRecallManagementServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRecallManagementServiceWithOptions(RecallManagementServiceId, request, headers, runtime);
}

/**
 * @summary Retrieves the version details of the recall management service.
 *
 * @param request GetRecallManagementServiceVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRecallManagementServiceVersionResponse
 */
GetRecallManagementServiceVersionResponse Client::getRecallManagementServiceVersionWithOptions(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const GetRecallManagementServiceVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRecallManagementServiceVersion"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementservices/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceId) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceVersionId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRecallManagementServiceVersionResponse>();
}

/**
 * @summary Retrieves the version details of the recall management service.
 *
 * @param request GetRecallManagementServiceVersionRequest
 * @return GetRecallManagementServiceVersionResponse
 */
GetRecallManagementServiceVersionResponse Client::getRecallManagementServiceVersion(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const GetRecallManagementServiceVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRecallManagementServiceVersionWithOptions(RecallManagementServiceId, RecallManagementServiceVersionId, request, headers, runtime);
}

/**
 * @summary This API retrieves the configuration details of a specific recall management service version.
 *
 * @description ## Request
 * Retrieves the configuration details for a specific version of a Recall Management Service by specifying its service, version, and configuration IDs. Ensure the parameter values are correct. The `InstanceId` is crucial for locating the correct instance.
 * - **Note**: All path parameters (`RecallManagementServiceId`, `RecallManagementServiceVersionId`, and `RecallManagementServiceVersionConfigId`) are required and must reference an existing resource.
 * - **Extended configuration**: The response includes the `ExtendedConfig` field, which is used for future extensions and custom settings. Parse this field as needed.
 *
 * @param request GetRecallManagementServiceVersionConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRecallManagementServiceVersionConfigResponse
 */
GetRecallManagementServiceVersionConfigResponse Client::getRecallManagementServiceVersionConfigWithOptions(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const string &RecallManagementServiceVersionConfigId, const GetRecallManagementServiceVersionConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRecallManagementServiceVersionConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementservices/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceId) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceVersionId) , "/configs/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceVersionConfigId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRecallManagementServiceVersionConfigResponse>();
}

/**
 * @summary This API retrieves the configuration details of a specific recall management service version.
 *
 * @description ## Request
 * Retrieves the configuration details for a specific version of a Recall Management Service by specifying its service, version, and configuration IDs. Ensure the parameter values are correct. The `InstanceId` is crucial for locating the correct instance.
 * - **Note**: All path parameters (`RecallManagementServiceId`, `RecallManagementServiceVersionId`, and `RecallManagementServiceVersionConfigId`) are required and must reference an existing resource.
 * - **Extended configuration**: The response includes the `ExtendedConfig` field, which is used for future extensions and custom settings. Parse this field as needed.
 *
 * @param request GetRecallManagementServiceVersionConfigRequest
 * @return GetRecallManagementServiceVersionConfigResponse
 */
GetRecallManagementServiceVersionConfigResponse Client::getRecallManagementServiceVersionConfig(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const string &RecallManagementServiceVersionConfigId, const GetRecallManagementServiceVersionConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRecallManagementServiceVersionConfigWithOptions(RecallManagementServiceId, RecallManagementServiceVersionId, RecallManagementServiceVersionConfigId, request, headers, runtime);
}

/**
 * @summary Retrieves the details of a specified recall management table, including its table structure and configuration.
 *
 * @description ## Request
 * This API retrieves details of a specific recall management table using the provided `RecallManagementTableId` and `InstanceId`. Ensure you provide the correct values for these parameters.
 * - **Note**: The `CanDelete` field indicates whether the data table supports delete operations. Use this value to control delete functionality in your application.
 * - The `Fields` list contains the definitions for each field in the data table, including their name, type, and properties.
 * - To monitor data changes, you can configure or query the fluctuation thresholds for row count and size using the corresponding fields.
 *
 * @param request GetRecallManagementTableRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRecallManagementTableResponse
 */
GetRecallManagementTableResponse Client::getRecallManagementTableWithOptions(const string &RecallManagementTableId, const GetRecallManagementTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRecallManagementTable"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementtables/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementTableId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRecallManagementTableResponse>();
}

/**
 * @summary Retrieves the details of a specified recall management table, including its table structure and configuration.
 *
 * @description ## Request
 * This API retrieves details of a specific recall management table using the provided `RecallManagementTableId` and `InstanceId`. Ensure you provide the correct values for these parameters.
 * - **Note**: The `CanDelete` field indicates whether the data table supports delete operations. Use this value to control delete functionality in your application.
 * - The `Fields` list contains the definitions for each field in the data table, including their name, type, and properties.
 * - To monitor data changes, you can configure or query the fluctuation thresholds for row count and size using the corresponding fields.
 *
 * @param request GetRecallManagementTableRequest
 * @return GetRecallManagementTableResponse
 */
GetRecallManagementTableResponse Client::getRecallManagementTable(const string &RecallManagementTableId, const GetRecallManagementTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRecallManagementTableWithOptions(RecallManagementTableId, request, headers, runtime);
}

/**
 * @summary 获取资源规则详细信息
 *
 * @param request GetResourceRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceRuleResponse
 */
GetResourceRuleResponse Client::getResourceRuleWithOptions(const string &ResourceRuleId, const GetResourceRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourceRule"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resourcerules/" , Darabonba::Encode::Encoder::percentEncode(ResourceRuleId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceRuleResponse>();
}

/**
 * @summary 获取资源规则详细信息
 *
 * @param request GetResourceRuleRequest
 * @return GetResourceRuleResponse
 */
GetResourceRuleResponse Client::getResourceRule(const string &ResourceRuleId, const GetResourceRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getResourceRuleWithOptions(ResourceRuleId, request, headers, runtime);
}

/**
 * @summary 获取样本一致性任务详细信息
 *
 * @param request GetSampleConsistencyJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSampleConsistencyJobResponse
 */
GetSampleConsistencyJobResponse Client::getSampleConsistencyJobWithOptions(const string &SampleConsistencyJobId, const GetSampleConsistencyJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSampleConsistencyJob"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/sampleconsistencyjobs/" , Darabonba::Encode::Encoder::percentEncode(SampleConsistencyJobId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSampleConsistencyJobResponse>();
}

/**
 * @summary 获取样本一致性任务详细信息
 *
 * @param request GetSampleConsistencyJobRequest
 * @return GetSampleConsistencyJobResponse
 */
GetSampleConsistencyJobResponse Client::getSampleConsistencyJob(const string &SampleConsistencyJobId, const GetSampleConsistencyJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSampleConsistencyJobWithOptions(SampleConsistencyJobId, request, headers, runtime);
}

/**
 * @summary Retrieves the details of a specified scene.
 *
 * @param request GetSceneRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSceneResponse
 */
GetSceneResponse Client::getSceneWithOptions(const string &SceneId, const GetSceneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetScene"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/scenes/" , Darabonba::Encode::Encoder::percentEncode(SceneId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSceneResponse>();
}

/**
 * @summary Retrieves the details of a specified scene.
 *
 * @param request GetSceneRequest
 * @return GetSceneResponse
 */
GetSceneResponse Client::getScene(const string &SceneId, const GetSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSceneWithOptions(SceneId, request, headers, runtime);
}

/**
 * @summary Retrieves the details of a service.
 *
 * @param request GetServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceResponse
 */
GetServiceResponse Client::getServiceWithOptions(const string &ServiceId, const GetServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetService"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/services/" , Darabonba::Encode::Encoder::percentEncode(ServiceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceResponse>();
}

/**
 * @summary Retrieves the details of a service.
 *
 * @param request GetServiceRequest
 * @return GetServiceResponse
 */
GetServiceResponse Client::getService(const string &ServiceId, const GetServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getServiceWithOptions(ServiceId, request, headers, runtime);
}

/**
 * @summary Retrieves the details of a sub-crowd.
 *
 * @param request GetSubCrowdRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSubCrowdResponse
 */
GetSubCrowdResponse Client::getSubCrowdWithOptions(const string &CrowdId, const string &SubCrowdId, const GetSubCrowdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSubCrowd"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/crowds/" , Darabonba::Encode::Encoder::percentEncode(CrowdId) , "/subcrowds/" , Darabonba::Encode::Encoder::percentEncode(SubCrowdId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSubCrowdResponse>();
}

/**
 * @summary Retrieves the details of a sub-crowd.
 *
 * @param request GetSubCrowdRequest
 * @return GetSubCrowdResponse
 */
GetSubCrowdResponse Client::getSubCrowd(const string &CrowdId, const string &SubCrowdId, const GetSubCrowdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSubCrowdWithOptions(CrowdId, SubCrowdId, request, headers, runtime);
}

/**
 * @summary Returns the details of a table.
 *
 * @param request GetTableMetaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTableMetaResponse
 */
GetTableMetaResponse Client::getTableMetaWithOptions(const string &TableMetaId, const GetTableMetaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTableMeta"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/tablemetas/" , Darabonba::Encode::Encoder::percentEncode(TableMetaId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTableMetaResponse>();
}

/**
 * @summary Returns the details of a table.
 *
 * @param request GetTableMetaRequest
 * @return GetTableMetaResponse
 */
GetTableMetaResponse Client::getTableMeta(const string &TableMetaId, const GetTableMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTableMetaWithOptions(TableMetaId, request, headers, runtime);
}

/**
 * @summary Gets the details of a traffic throttling objective by its ID.
 *
 * @description ## Request
 * Retrieves the detailed configuration of a traffic control target. The configuration includes the target name, time range, and condition settings. This operation requires the `TrafficControlTargetId` and `InstanceId` parameters.
 *
 * @param request GetTrafficControlTargetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTrafficControlTargetResponse
 */
GetTrafficControlTargetResponse Client::getTrafficControlTargetWithOptions(const string &TrafficControlTargetId, const GetTrafficControlTargetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTrafficControlTarget"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltargets/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTargetId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTrafficControlTargetResponse>();
}

/**
 * @summary Gets the details of a traffic throttling objective by its ID.
 *
 * @description ## Request
 * Retrieves the detailed configuration of a traffic control target. The configuration includes the target name, time range, and condition settings. This operation requires the `TrafficControlTargetId` and `InstanceId` parameters.
 *
 * @param request GetTrafficControlTargetRequest
 * @return GetTrafficControlTargetResponse
 */
GetTrafficControlTargetResponse Client::getTrafficControlTarget(const string &TrafficControlTargetId, const GetTrafficControlTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTrafficControlTargetWithOptions(TrafficControlTargetId, request, headers, runtime);
}

/**
 * @summary Queries the details of a traffic control task with a specified ID.
 *
 * @description ## Description
 * - This operation retrieves the details of a specific traffic control task, including but not limited to the task name, description, and status.
 * - TrafficControlTaskId and InstanceId are required parameters that specify the task ID and instance ID to query.
 * - Optional parameters such as Environment, Version, and ControlTargetFilter help refine the request to retrieve more specific task data or version information.
 * - Check the returned data structure, especially the TrafficControlTargets section, which contains multiple control targets and their related properties.
 *
 * @param request GetTrafficControlTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTrafficControlTaskResponse
 */
GetTrafficControlTaskResponse Client::getTrafficControlTaskWithOptions(const string &TrafficControlTaskId, const GetTrafficControlTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasControlTargetFilter()) {
    query["ControlTargetFilter"] = request.getControlTargetFilter();
  }

  if (!!request.hasEnvironment()) {
    query["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTrafficControlTask"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltasks/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTaskId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTrafficControlTaskResponse>();
}

/**
 * @summary Queries the details of a traffic control task with a specified ID.
 *
 * @description ## Description
 * - This operation retrieves the details of a specific traffic control task, including but not limited to the task name, description, and status.
 * - TrafficControlTaskId and InstanceId are required parameters that specify the task ID and instance ID to query.
 * - Optional parameters such as Environment, Version, and ControlTargetFilter help refine the request to retrieve more specific task data or version information.
 * - Check the returned data structure, especially the TrafficControlTargets section, which contains multiple control targets and their related properties.
 *
 * @param request GetTrafficControlTaskRequest
 * @return GetTrafficControlTaskResponse
 */
GetTrafficControlTaskResponse Client::getTrafficControlTask(const string &TrafficControlTaskId, const GetTrafficControlTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTrafficControlTaskWithOptions(TrafficControlTaskId, request, headers, runtime);
}

/**
 * @summary Retrieves traffic allocation details for a specific traffic control task.
 *
 * @description ## Description
 * This API retrieves the traffic details for a specific traffic control task. The request must include the `TrafficControlTaskId`, `InstanceId`, and `Environment`.
 * - `TrafficControlTaskId`: The unique identifier for the traffic control task.
 * - `InstanceId`: The instance ID.
 * - `Environment`: The environment type, such as the production environment (Prod).
 * The response includes the traffic allocation for each experiment and traffic control target. This data allows you to analyze and manage your traffic control strategies.
 *
 * @param request GetTrafficControlTaskTrafficRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTrafficControlTaskTrafficResponse
 */
GetTrafficControlTaskTrafficResponse Client::getTrafficControlTaskTrafficWithOptions(const string &TrafficControlTaskId, const GetTrafficControlTaskTrafficRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnvironment()) {
    query["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTrafficControlTaskTraffic"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltasks/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTaskId) , "/trafficinfo")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTrafficControlTaskTrafficResponse>();
}

/**
 * @summary Retrieves traffic allocation details for a specific traffic control task.
 *
 * @description ## Description
 * This API retrieves the traffic details for a specific traffic control task. The request must include the `TrafficControlTaskId`, `InstanceId`, and `Environment`.
 * - `TrafficControlTaskId`: The unique identifier for the traffic control task.
 * - `InstanceId`: The instance ID.
 * - `Environment`: The environment type, such as the production environment (Prod).
 * The response includes the traffic allocation for each experiment and traffic control target. This data allows you to analyze and manage your traffic control strategies.
 *
 * @param request GetTrafficControlTaskTrafficRequest
 * @return GetTrafficControlTaskTrafficResponse
 */
GetTrafficControlTaskTrafficResponse Client::getTrafficControlTaskTraffic(const string &TrafficControlTaskId, const GetTrafficControlTaskTrafficRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTrafficControlTaskTrafficWithOptions(TrafficControlTaskId, request, headers, runtime);
}

/**
 * @summary Retrieves a list of A/B metric groups.
 *
 * @param request ListABMetricGroupsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListABMetricGroupsResponse
 */
ListABMetricGroupsResponse Client::listABMetricGroupsWithOptions(const ListABMetricGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRealtime()) {
    query["Realtime"] = request.getRealtime();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListABMetricGroups"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/abmetricgroups")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListABMetricGroupsResponse>();
}

/**
 * @summary Retrieves a list of A/B metric groups.
 *
 * @param request ListABMetricGroupsRequest
 * @return ListABMetricGroupsResponse
 */
ListABMetricGroupsResponse Client::listABMetricGroups(const ListABMetricGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listABMetricGroupsWithOptions(request, headers, runtime);
}

/**
 * @summary Lists A/B testing metrics.
 *
 * @param request ListABMetricsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListABMetricsResponse
 */
ListABMetricsResponse Client::listABMetricsWithOptions(const ListABMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasRealtime()) {
    query["Realtime"] = request.getRealtime();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
  }

  if (!!request.hasTableMetaId()) {
    query["TableMetaId"] = request.getTableMetaId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListABMetrics"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/abmetrics")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListABMetricsResponse>();
}

/**
 * @summary Lists A/B testing metrics.
 *
 * @param request ListABMetricsRequest
 * @return ListABMetricsResponse
 */
ListABMetricsResponse Client::listABMetrics(const ListABMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listABMetricsWithOptions(request, headers, runtime);
}

/**
 * @summary Lists calculation jobs.
 *
 * @param request ListCalculationJobsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCalculationJobsResponse
 */
ListCalculationJobsResponse Client::listCalculationJobsWithOptions(const ListCalculationJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCalculationJobs"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/calculationjobs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCalculationJobsResponse>();
}

/**
 * @summary Lists calculation jobs.
 *
 * @param request ListCalculationJobsRequest
 * @return ListCalculationJobsResponse
 */
ListCalculationJobsResponse Client::listCalculationJobs(const ListCalculationJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listCalculationJobsWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves all users within a specified crowd, including those in its sub-crowds.
 *
 * @param request ListCrowdUsersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCrowdUsersResponse
 */
ListCrowdUsersResponse Client::listCrowdUsersWithOptions(const string &CrowdId, const ListCrowdUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCrowdUsers"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/crowds/" , Darabonba::Encode::Encoder::percentEncode(CrowdId) , "/users")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCrowdUsersResponse>();
}

/**
 * @summary Retrieves all users within a specified crowd, including those in its sub-crowds.
 *
 * @param request ListCrowdUsersRequest
 * @return ListCrowdUsersResponse
 */
ListCrowdUsersResponse Client::listCrowdUsers(const string &CrowdId, const ListCrowdUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listCrowdUsersWithOptions(CrowdId, request, headers, runtime);
}

/**
 * @summary Lists the Crowds in a specified instance.
 *
 * @param request ListCrowdsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCrowdsResponse
 */
ListCrowdsResponse Client::listCrowdsWithOptions(const ListCrowdsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCrowds"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/crowds")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCrowdsResponse>();
}

/**
 * @summary Lists the Crowds in a specified instance.
 *
 * @param request ListCrowdsRequest
 * @return ListCrowdsResponse
 */
ListCrowdsResponse Client::listCrowds(const ListCrowdsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listCrowdsWithOptions(request, headers, runtime);
}

/**
 * @summary Lists the data diagnostic tasks for the specified instance.
 *
 * @description ## Request
 * This API retrieves a list of data diagnosis tasks. It requires the `InstanceId` parameter and accepts optional parameters—such as data diagnosis type, page number, and page size—for filtering and pagination.
 * - The **Types** parameter accepts multiple data diagnosis types, allowing you to view reports for all selected types at once.
 * - To paginate results, use the `PageNumber` and `PageSize` parameters.
 *
 * @param tmpReq ListDataDiagnosesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataDiagnosesResponse
 */
ListDataDiagnosesResponse Client::listDataDiagnosesWithOptions(const ListDataDiagnosesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDataDiagnosesShrinkRequest request = ListDataDiagnosesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTypes()) {
    request.setTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTypes(), "Types", "simple"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTypesShrink()) {
    query["Types"] = request.getTypesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataDiagnoses"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datadiagnoses")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataDiagnosesResponse>();
}

/**
 * @summary Lists the data diagnostic tasks for the specified instance.
 *
 * @description ## Request
 * This API retrieves a list of data diagnosis tasks. It requires the `InstanceId` parameter and accepts optional parameters—such as data diagnosis type, page number, and page size—for filtering and pagination.
 * - The **Types** parameter accepts multiple data diagnosis types, allowing you to view reports for all selected types at once.
 * - To paginate results, use the `PageNumber` and `PageSize` parameters.
 *
 * @param request ListDataDiagnosesRequest
 * @return ListDataDiagnosesResponse
 */
ListDataDiagnosesResponse Client::listDataDiagnoses(const ListDataDiagnosesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDataDiagnosesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries data diagnosis jobs for a specified instance.
 *
 * @description ## Description
 * This API retrieves data diagnosis jobs for a specific instance. You can filter the jobs by parameters such as `InstanceId` and `Status`, and use the `PageNumber` and `PageSize` parameters to control pagination.
 * - The **InstanceId** parameter is required and specifies the instance to query.
 * - Optional parameters include **Status**, **Types**, **PageNumber**, and **PageSize**.
 * - Note: If you omit filter conditions, the operation returns all matching data diagnosis jobs.
 *
 * @param tmpReq ListDataDiagnosisJobsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataDiagnosisJobsResponse
 */
ListDataDiagnosisJobsResponse Client::listDataDiagnosisJobsWithOptions(const ListDataDiagnosisJobsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDataDiagnosisJobsShrinkRequest request = ListDataDiagnosisJobsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTypes()) {
    request.setTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTypes(), "Types", "simple"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTypesShrink()) {
    query["Types"] = request.getTypesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataDiagnosisJobs"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datadiagnosisjobs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataDiagnosisJobsResponse>();
}

/**
 * @summary Queries data diagnosis jobs for a specified instance.
 *
 * @description ## Description
 * This API retrieves data diagnosis jobs for a specific instance. You can filter the jobs by parameters such as `InstanceId` and `Status`, and use the `PageNumber` and `PageSize` parameters to control pagination.
 * - The **InstanceId** parameter is required and specifies the instance to query.
 * - Optional parameters include **Status**, **Types**, **PageNumber**, and **PageSize**.
 * - Note: If you omit filter conditions, the operation returns all matching data diagnosis jobs.
 *
 * @param request ListDataDiagnosisJobsRequest
 * @return ListDataDiagnosisJobsResponse
 */
ListDataDiagnosisJobsResponse Client::listDataDiagnosisJobs(const ListDataDiagnosisJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDataDiagnosisJobsWithOptions(request, headers, runtime);
}

/**
 * @summary Specify parameters to retrieve data diagnosis reports for a specific time range.
 *
 * @description ## Request
 * - This API retrieves data diagnosis reports based on parameters such as the data diagnosis ID, instance ID, and a date range.
 * - The `FeatureName` parameter filters reports by a specific feature, and the `TopN` parameter limits the number of results.
 * - The `RemainRateType` parameter specifies the type of retention rate report, such as a periodic report.
 * - Report content includes item and user change rate analysis, periodic user preference analysis, correlation analysis, basic statistical analysis, and anomaly detection.
 * - Important: All date values must use the `YYYY-MM-DD` format.
 *
 * @param request ListDataDiagnosisReportsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataDiagnosisReportsResponse
 */
ListDataDiagnosisReportsResponse Client::listDataDiagnosisReportsWithOptions(const string &DataDiagnosisId, const ListDataDiagnosisReportsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasFeatureName()) {
    query["FeatureName"] = request.getFeatureName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRemainRateType()) {
    query["RemainRateType"] = request.getRemainRateType();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasTopN()) {
    query["TopN"] = request.getTopN();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataDiagnosisReports"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datadiagnoses/" , Darabonba::Encode::Encoder::percentEncode(DataDiagnosisId) , "/reports")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataDiagnosisReportsResponse>();
}

/**
 * @summary Specify parameters to retrieve data diagnosis reports for a specific time range.
 *
 * @description ## Request
 * - This API retrieves data diagnosis reports based on parameters such as the data diagnosis ID, instance ID, and a date range.
 * - The `FeatureName` parameter filters reports by a specific feature, and the `TopN` parameter limits the number of results.
 * - The `RemainRateType` parameter specifies the type of retention rate report, such as a periodic report.
 * - Report content includes item and user change rate analysis, periodic user preference analysis, correlation analysis, basic statistical analysis, and anomaly detection.
 * - Important: All date values must use the `YYYY-MM-DD` format.
 *
 * @param request ListDataDiagnosisReportsRequest
 * @return ListDataDiagnosisReportsResponse
 */
ListDataDiagnosisReportsResponse Client::listDataDiagnosisReports(const string &DataDiagnosisId, const ListDataDiagnosisReportsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDataDiagnosisReportsWithOptions(DataDiagnosisId, request, headers, runtime);
}

/**
 * @summary Retrieves a list of engine configurations.
 *
 * @param request ListEngineConfigsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEngineConfigsResponse
 */
ListEngineConfigsResponse Client::listEngineConfigsWithOptions(const ListEngineConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnvironment()) {
    query["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEngineConfigs"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/engineconfigs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEngineConfigsResponse>();
}

/**
 * @summary Retrieves a list of engine configurations.
 *
 * @param request ListEngineConfigsRequest
 * @return ListEngineConfigsResponse
 */
ListEngineConfigsResponse Client::listEngineConfigs(const ListEngineConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listEngineConfigsWithOptions(request, headers, runtime);
}

/**
 * @summary Returns a list of experiment groups.
 *
 * @param request ListExperimentGroupsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExperimentGroupsResponse
 */
ListExperimentGroupsResponse Client::listExperimentGroupsWithOptions(const ListExperimentGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLayerId()) {
    query["LayerId"] = request.getLayerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTimeRangeEnd()) {
    query["TimeRangeEnd"] = request.getTimeRangeEnd();
  }

  if (!!request.hasTimeRangeStart()) {
    query["TimeRangeStart"] = request.getTimeRangeStart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListExperimentGroups"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experimentgroups")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListExperimentGroupsResponse>();
}

/**
 * @summary Returns a list of experiment groups.
 *
 * @param request ListExperimentGroupsRequest
 * @return ListExperimentGroupsResponse
 */
ListExperimentGroupsResponse Client::listExperimentGroups(const ListExperimentGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listExperimentGroupsWithOptions(request, headers, runtime);
}

/**
 * @summary Lists the experiments in the specified experiment group.
 *
 * @param request ListExperimentsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExperimentsResponse
 */
ListExperimentsResponse Client::listExperimentsWithOptions(const ListExperimentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExperimentGroupId()) {
    query["ExperimentGroupId"] = request.getExperimentGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListExperiments"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListExperimentsResponse>();
}

/**
 * @summary Lists the experiments in the specified experiment group.
 *
 * @param request ListExperimentsRequest
 * @return ListExperimentsResponse
 */
ListExperimentsResponse Client::listExperiments(const ListExperimentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listExperimentsWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves a list of feature consistency check task configurations.
 *
 * @param request ListFeatureConsistencyCheckJobConfigsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFeatureConsistencyCheckJobConfigsResponse
 */
ListFeatureConsistencyCheckJobConfigsResponse Client::listFeatureConsistencyCheckJobConfigsWithOptions(const ListFeatureConsistencyCheckJobConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFeatureConsistencyCheckJobConfigs"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/featureconsistencycheck/jobconfigs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFeatureConsistencyCheckJobConfigsResponse>();
}

/**
 * @summary Retrieves a list of feature consistency check task configurations.
 *
 * @param request ListFeatureConsistencyCheckJobConfigsRequest
 * @return ListFeatureConsistencyCheckJobConfigsResponse
 */
ListFeatureConsistencyCheckJobConfigsResponse Client::listFeatureConsistencyCheckJobConfigs(const ListFeatureConsistencyCheckJobConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listFeatureConsistencyCheckJobConfigsWithOptions(request, headers, runtime);
}

/**
 * @summary Lists feature reports for a feature consistency check job.
 *
 * @param request ListFeatureConsistencyCheckJobFeatureReportsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFeatureConsistencyCheckJobFeatureReportsResponse
 */
ListFeatureConsistencyCheckJobFeatureReportsResponse Client::listFeatureConsistencyCheckJobFeatureReportsWithOptions(const string &FeatureConsistencyCheckJobId, const ListFeatureConsistencyCheckJobFeatureReportsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLogItemId()) {
    query["LogItemId"] = request.getLogItemId();
  }

  if (!!request.hasLogRequestId()) {
    query["LogRequestId"] = request.getLogRequestId();
  }

  if (!!request.hasLogUserId()) {
    query["LogUserId"] = request.getLogUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFeatureConsistencyCheckJobFeatureReports"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/featureconsistencycheck/jobs/" , Darabonba::Encode::Encoder::percentEncode(FeatureConsistencyCheckJobId) , "/featurereports")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFeatureConsistencyCheckJobFeatureReportsResponse>();
}

/**
 * @summary Lists feature reports for a feature consistency check job.
 *
 * @param request ListFeatureConsistencyCheckJobFeatureReportsRequest
 * @return ListFeatureConsistencyCheckJobFeatureReportsResponse
 */
ListFeatureConsistencyCheckJobFeatureReportsResponse Client::listFeatureConsistencyCheckJobFeatureReports(const string &FeatureConsistencyCheckJobId, const ListFeatureConsistencyCheckJobFeatureReportsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listFeatureConsistencyCheckJobFeatureReportsWithOptions(FeatureConsistencyCheckJobId, request, headers, runtime);
}

/**
 * @summary Retrieves the score difference reports for a feature consistency check job.
 *
 * @param tmpReq ListFeatureConsistencyCheckJobScoreReportsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFeatureConsistencyCheckJobScoreReportsResponse
 */
ListFeatureConsistencyCheckJobScoreReportsResponse Client::listFeatureConsistencyCheckJobScoreReportsWithOptions(const string &FeatureConsistencyCheckJobId, const ListFeatureConsistencyCheckJobScoreReportsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListFeatureConsistencyCheckJobScoreReportsShrinkRequest request = ListFeatureConsistencyCheckJobScoreReportsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExcludeRequestIds()) {
    request.setExcludeRequestIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExcludeRequestIds(), "ExcludeRequestIds", "json"));
  }

  json query = {};
  if (!!request.hasExcludeRequestIdsShrink()) {
    query["ExcludeRequestIds"] = request.getExcludeRequestIdsShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFeatureConsistencyCheckJobScoreReports"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/featureconsistencycheck/jobs/" , Darabonba::Encode::Encoder::percentEncode(FeatureConsistencyCheckJobId) , "/scorereports")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFeatureConsistencyCheckJobScoreReportsResponse>();
}

/**
 * @summary Retrieves the score difference reports for a feature consistency check job.
 *
 * @param request ListFeatureConsistencyCheckJobScoreReportsRequest
 * @return ListFeatureConsistencyCheckJobScoreReportsResponse
 */
ListFeatureConsistencyCheckJobScoreReportsResponse Client::listFeatureConsistencyCheckJobScoreReports(const string &FeatureConsistencyCheckJobId, const ListFeatureConsistencyCheckJobScoreReportsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listFeatureConsistencyCheckJobScoreReportsWithOptions(FeatureConsistencyCheckJobId, request, headers, runtime);
}

/**
 * @summary Retrieves a list of feature consistency check jobs.
 *
 * @param request ListFeatureConsistencyCheckJobsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFeatureConsistencyCheckJobsResponse
 */
ListFeatureConsistencyCheckJobsResponse Client::listFeatureConsistencyCheckJobsWithOptions(const ListFeatureConsistencyCheckJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFeatureConsistencyCheckJobs"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/featureconsistencycheck/jobs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFeatureConsistencyCheckJobsResponse>();
}

/**
 * @summary Retrieves a list of feature consistency check jobs.
 *
 * @param request ListFeatureConsistencyCheckJobsRequest
 * @return ListFeatureConsistencyCheckJobsResponse
 */
ListFeatureConsistencyCheckJobsResponse Client::listFeatureConsistencyCheckJobs(const ListFeatureConsistencyCheckJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listFeatureConsistencyCheckJobsWithOptions(request, headers, runtime);
}

/**
 * @summary Lists all schemas for a specified resource in an instance.
 *
 * @description ## Description
 * To retrieve a list of all schemas for a specified resource, provide the instance ID (InstanceId) and resource ID (ResourceId). Use the optional SchemaName parameter to filter the schemas by a name prefix.
 *
 * @param request ListInstanceResourceSchemasRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceResourceSchemasResponse
 */
ListInstanceResourceSchemasResponse Client::listInstanceResourceSchemasWithOptions(const string &InstanceId, const string &ResourceId, const ListInstanceResourceSchemasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSchemaName()) {
    query["SchemaName"] = request.getSchemaName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceResourceSchemas"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/resources/" , Darabonba::Encode::Encoder::percentEncode(ResourceId) , "/schemas")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceResourceSchemasResponse>();
}

/**
 * @summary Lists all schemas for a specified resource in an instance.
 *
 * @description ## Description
 * To retrieve a list of all schemas for a specified resource, provide the instance ID (InstanceId) and resource ID (ResourceId). Use the optional SchemaName parameter to filter the schemas by a name prefix.
 *
 * @param request ListInstanceResourceSchemasRequest
 * @return ListInstanceResourceSchemasResponse
 */
ListInstanceResourceSchemasResponse Client::listInstanceResourceSchemas(const string &InstanceId, const string &ResourceId, const ListInstanceResourceSchemasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInstanceResourceSchemasWithOptions(InstanceId, ResourceId, request, headers, runtime);
}

/**
 * @summary Retrieves a list of data tables for a specified instance and data source.
 *
 * @description ## Description
 * Provide the instance ID (InstanceId) and data source ID (ResourceId) to retrieve a list of data tables from the specified data source. Use the optional `MaxcomputeSchema` parameter to filter the results by a MaxCompute schema.
 *
 * @param request ListInstanceResourceTablesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceResourceTablesResponse
 */
ListInstanceResourceTablesResponse Client::listInstanceResourceTablesWithOptions(const string &InstanceId, const string &ResourceId, const ListInstanceResourceTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxcomputeSchema()) {
    query["MaxcomputeSchema"] = request.getMaxcomputeSchema();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceResourceTables"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/resources/" , Darabonba::Encode::Encoder::percentEncode(ResourceId) , "/tables")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceResourceTablesResponse>();
}

/**
 * @summary Retrieves a list of data tables for a specified instance and data source.
 *
 * @description ## Description
 * Provide the instance ID (InstanceId) and data source ID (ResourceId) to retrieve a list of data tables from the specified data source. Use the optional `MaxcomputeSchema` parameter to filter the results by a MaxCompute schema.
 *
 * @param request ListInstanceResourceTablesRequest
 * @return ListInstanceResourceTablesResponse
 */
ListInstanceResourceTablesResponse Client::listInstanceResourceTables(const string &InstanceId, const string &ResourceId, const ListInstanceResourceTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInstanceResourceTablesWithOptions(InstanceId, ResourceId, request, headers, runtime);
}

/**
 * @summary Lists the resources configured for an instance.
 *
 * @param request ListInstanceResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceResourcesResponse
 */
ListInstanceResourcesResponse Client::listInstanceResourcesWithOptions(const string &InstanceId, const ListInstanceResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasGroup()) {
    query["Group"] = request.getGroup();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceResources"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/resources")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceResourcesResponse>();
}

/**
 * @summary Lists the resources configured for an instance.
 *
 * @param request ListInstanceResourcesRequest
 * @return ListInstanceResourcesResponse
 */
ListInstanceResourcesResponse Client::listInstanceResources(const string &InstanceId, const ListInstanceResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInstanceResourcesWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary Gets a list of PAIRec instances.
 *
 * @param request ListInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstancesWithOptions(const ListInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstances"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancesResponse>();
}

/**
 * @summary Gets a list of PAIRec instances.
 *
 * @param request ListInstancesRequest
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstances(const ListInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInstancesWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the laboratories in a specified scene.
 *
 * @param request ListLaboratoriesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLaboratoriesResponse
 */
ListLaboratoriesResponse Client::listLaboratoriesWithOptions(const ListLaboratoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnvironment()) {
    query["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLaboratories"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/laboratories")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLaboratoriesResponse>();
}

/**
 * @summary Retrieves the laboratories in a specified scene.
 *
 * @param request ListLaboratoriesRequest
 * @return ListLaboratoriesResponse
 */
ListLaboratoriesResponse Client::listLaboratories(const ListLaboratoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listLaboratoriesWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves a list of layers in a specified laboratory.
 *
 * @param request ListLayersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLayersResponse
 */
ListLayersResponse Client::listLayersWithOptions(const ListLayersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLaboratoryId()) {
    query["LaboratoryId"] = request.getLaboratoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLayers"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/layers")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLayersResponse>();
}

/**
 * @summary Retrieves a list of layers in a specified laboratory.
 *
 * @param request ListLayersRequest
 * @return ListLayersResponse
 */
ListLayersResponse Client::listLayers(const ListLayersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listLayersWithOptions(request, headers, runtime);
}

/**
 * @summary Lists parameters.
 *
 * @param request ListParamsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListParamsResponse
 */
ListParamsResponse Client::listParamsWithOptions(const ListParamsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEncrypted()) {
    query["Encrypted"] = request.getEncrypted();
  }

  if (!!request.hasEnvironment()) {
    query["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListParams"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/params")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListParamsResponse>();
}

/**
 * @summary Lists parameters.
 *
 * @param request ListParamsRequest
 * @return ListParamsResponse
 */
ListParamsResponse Client::listParams(const ListParamsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listParamsWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves a list of recall management tasks that match specified conditions.
 *
 * @description ## Request
 * - Use this API operation to retrieve a list of recall management tasks.
 * - The `InstanceId` and `Type` parameters are required. All other parameters are optional.
 * - Use the `Condition` parameter to set filter conditions on specific table types, such as filtering by `RecallManagementTableId`.
 * - Use the `SortBy` and `Order` parameters to control the sort order of the results. The default sort order is ascending by creation time.
 * - Use the `PageNumber` and `PageSize` parameters for pagination. The `PageNumber` parameter defaults to 1, and the `PageSize` parameter defaults to 10.
 * - The response includes details about each recall management task, such as its basic information and status.
 *
 * @param request ListRecallManagementJobsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRecallManagementJobsResponse
 */
ListRecallManagementJobsResponse Client::listRecallManagementJobsWithOptions(const ListRecallManagementJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCondition()) {
    query["Condition"] = request.getCondition();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRecallManagementJobs"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementjobs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRecallManagementJobsResponse>();
}

/**
 * @summary Retrieves a list of recall management tasks that match specified conditions.
 *
 * @description ## Request
 * - Use this API operation to retrieve a list of recall management tasks.
 * - The `InstanceId` and `Type` parameters are required. All other parameters are optional.
 * - Use the `Condition` parameter to set filter conditions on specific table types, such as filtering by `RecallManagementTableId`.
 * - Use the `SortBy` and `Order` parameters to control the sort order of the results. The default sort order is ascending by creation time.
 * - Use the `PageNumber` and `PageSize` parameters for pagination. The `PageNumber` parameter defaults to 1, and the `PageSize` parameter defaults to 10.
 * - The response includes details about each recall management task, such as its basic information and status.
 *
 * @param request ListRecallManagementJobsRequest
 * @return ListRecallManagementJobsResponse
 */
ListRecallManagementJobsResponse Client::listRecallManagementJobs(const ListRecallManagementJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRecallManagementJobsWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves a list of all versions for a specified Recall Management Service.
 *
 * @description ## Description
 * This operation queries the details of all versions for a specific Recall Management Service, including the version ID, name, effective status, creation time, and modification time. For accurate results, provide the correct `RecallManagementServiceId` and `InstanceId`.
 * - Use the `PageNumber` and `PageSize` parameters for pagination. By default, the query starts from the first page and returns 50 entries per page.
 * - Use the `SortBy` parameter to sort the results by creation time or modification time. By default, the results are sorted by creation time in ascending order.
 * - The `Order` parameter specifies the sort order. Valid values are `ASC` for ascending order and `DESC` for descending order.
 *
 * @param request ListRecallManagementServiceVersionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRecallManagementServiceVersionsResponse
 */
ListRecallManagementServiceVersionsResponse Client::listRecallManagementServiceVersionsWithOptions(const string &RecallManagementServiceId, const ListRecallManagementServiceVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRecallManagementServiceVersions"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementservices/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceId) , "/versions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRecallManagementServiceVersionsResponse>();
}

/**
 * @summary Retrieves a list of all versions for a specified Recall Management Service.
 *
 * @description ## Description
 * This operation queries the details of all versions for a specific Recall Management Service, including the version ID, name, effective status, creation time, and modification time. For accurate results, provide the correct `RecallManagementServiceId` and `InstanceId`.
 * - Use the `PageNumber` and `PageSize` parameters for pagination. By default, the query starts from the first page and returns 50 entries per page.
 * - Use the `SortBy` parameter to sort the results by creation time or modification time. By default, the results are sorted by creation time in ascending order.
 * - The `Order` parameter specifies the sort order. Valid values are `ASC` for ascending order and `DESC` for descending order.
 *
 * @param request ListRecallManagementServiceVersionsRequest
 * @return ListRecallManagementServiceVersionsResponse
 */
ListRecallManagementServiceVersionsResponse Client::listRecallManagementServiceVersions(const string &RecallManagementServiceId, const ListRecallManagementServiceVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRecallManagementServiceVersionsWithOptions(RecallManagementServiceId, request, headers, runtime);
}

/**
 * @summary This API returns a list of recall management services for a specified instance.
 *
 * @description ## Description
 * Call `ListRecallManagementServices` to retrieve a list of recall management services for a specified instance based on parameters such as `InstanceId`, `PageNumber`, and `PageSize`. You can sort the results by creation time or modification time in ascending or descending order.
 * - **InstanceId** is required. It specifies the target instance.
 * - The pagination parameters **PageNumber** and **PageSize** control the number of returned items and the page from which to start. This operation returns the first page of results by default.
 * - Use the **SortBy** and **Order** parameters to customize the sort order of the list.
 *
 * @param request ListRecallManagementServicesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRecallManagementServicesResponse
 */
ListRecallManagementServicesResponse Client::listRecallManagementServicesWithOptions(const ListRecallManagementServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRecallManagementServices"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementservices")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRecallManagementServicesResponse>();
}

/**
 * @summary This API returns a list of recall management services for a specified instance.
 *
 * @description ## Description
 * Call `ListRecallManagementServices` to retrieve a list of recall management services for a specified instance based on parameters such as `InstanceId`, `PageNumber`, and `PageSize`. You can sort the results by creation time or modification time in ascending or descending order.
 * - **InstanceId** is required. It specifies the target instance.
 * - The pagination parameters **PageNumber** and **PageSize** control the number of returned items and the page from which to start. This operation returns the first page of results by default.
 * - Use the **SortBy** and **Order** parameters to customize the sort order of the list.
 *
 * @param request ListRecallManagementServicesRequest
 * @return ListRecallManagementServicesResponse
 */
ListRecallManagementServicesResponse Client::listRecallManagementServices(const ListRecallManagementServicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRecallManagementServicesWithOptions(request, headers, runtime);
}

/**
 * @summary Lists all versions of a specified RecallManagementTable.
 *
 * @description ## Usage
 * - To retrieve the version history of a specific RecallManagementTable, provide the `RecallManagementTableId` and `InstanceId`.
 * - Use the `SortBy` parameter to sort the results by creation time or update time. By default, the results are sorted by creation time in ascending order.
 * - The `PageNumber` and `PageSize` parameters enable pagination, which allows you to control the number of items to return and the page to display.
 * - If the `Order` parameter is not specified, the results are sorted in ascending order by default.
 *
 * @param request ListRecallManagementTableVersionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRecallManagementTableVersionsResponse
 */
ListRecallManagementTableVersionsResponse Client::listRecallManagementTableVersionsWithOptions(const string &RecallManagementTableId, const ListRecallManagementTableVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRecallManagementTableVersions"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementtables/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementTableId) , "/versions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRecallManagementTableVersionsResponse>();
}

/**
 * @summary Lists all versions of a specified RecallManagementTable.
 *
 * @description ## Usage
 * - To retrieve the version history of a specific RecallManagementTable, provide the `RecallManagementTableId` and `InstanceId`.
 * - Use the `SortBy` parameter to sort the results by creation time or update time. By default, the results are sorted by creation time in ascending order.
 * - The `PageNumber` and `PageSize` parameters enable pagination, which allows you to control the number of items to return and the page to display.
 * - If the `Order` parameter is not specified, the results are sorted in ascending order by default.
 *
 * @param request ListRecallManagementTableVersionsRequest
 * @return ListRecallManagementTableVersionsResponse
 */
ListRecallManagementTableVersionsResponse Client::listRecallManagementTableVersions(const string &RecallManagementTableId, const ListRecallManagementTableVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRecallManagementTableVersionsWithOptions(RecallManagementTableId, request, headers, runtime);
}

/**
 * @summary Retrieves the recall management tables for a specified instance. Pagination and sorting are supported.
 *
 * @description ## Request
 * - **InstanceId** is a required parameter specifying the instance to query.
 * - The **Name** and **Type** parameters filter recall management tables by name or type.
 * - The **PageNumber** and **PageSize** parameters control pagination. By default, the query returns the first 50 records.
 * - You can sort results by creation time (GmtCreateTime) or modification time (GmtModifiedTime) in ascending (ASC) or descending (DESC) order.
 *
 * @param request ListRecallManagementTablesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRecallManagementTablesResponse
 */
ListRecallManagementTablesResponse Client::listRecallManagementTablesWithOptions(const ListRecallManagementTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRecallManagementTables"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementtables")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRecallManagementTablesResponse>();
}

/**
 * @summary Retrieves the recall management tables for a specified instance. Pagination and sorting are supported.
 *
 * @description ## Request
 * - **InstanceId** is a required parameter specifying the instance to query.
 * - The **Name** and **Type** parameters filter recall management tables by name or type.
 * - The **PageNumber** and **PageSize** parameters control pagination. By default, the query returns the first 50 records.
 * - You can sort results by creation time (GmtCreateTime) or modification time (GmtModifiedTime) in ascending (ASC) or descending (DESC) order.
 *
 * @param request ListRecallManagementTablesRequest
 * @return ListRecallManagementTablesResponse
 */
ListRecallManagementTablesResponse Client::listRecallManagementTables(const ListRecallManagementTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRecallManagementTablesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取资源规则列表
 *
 * @param request ListResourceRulesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceRulesResponse
 */
ListResourceRulesResponse Client::listResourceRulesWithOptions(const ListResourceRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.getAll();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceRuleId()) {
    query["ResourceRuleId"] = request.getResourceRuleId();
  }

  if (!!request.hasResourceRuleName()) {
    query["ResourceRuleName"] = request.getResourceRuleName();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourceRules"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resourcerules")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceRulesResponse>();
}

/**
 * @summary 获取资源规则列表
 *
 * @param request ListResourceRulesRequest
 * @return ListResourceRulesResponse
 */
ListResourceRulesResponse Client::listResourceRules(const ListResourceRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listResourceRulesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取样本一致性任务列表
 *
 * @param request ListSampleConsistencyJobsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSampleConsistencyJobsResponse
 */
ListSampleConsistencyJobsResponse Client::listSampleConsistencyJobsWithOptions(const ListSampleConsistencyJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSampleConsistencyJobs"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/sampleconsistencyjobs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSampleConsistencyJobsResponse>();
}

/**
 * @summary 获取样本一致性任务列表
 *
 * @param request ListSampleConsistencyJobsRequest
 * @return ListSampleConsistencyJobsResponse
 */
ListSampleConsistencyJobsResponse Client::listSampleConsistencyJobs(const ListSampleConsistencyJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSampleConsistencyJobsWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves a list of scenes.
 *
 * @param request ListScenesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScenesResponse
 */
ListScenesResponse Client::listScenesWithOptions(const ListScenesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListScenes"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/scenes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListScenesResponse>();
}

/**
 * @summary Retrieves a list of scenes.
 *
 * @param request ListScenesRequest
 * @return ListScenesResponse
 */
ListScenesResponse Client::listScenes(const ListScenesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listScenesWithOptions(request, headers, runtime);
}

/**
 * @summary Lists the subcrowds for a specified crowd.
 *
 * @param request ListSubCrowdsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSubCrowdsResponse
 */
ListSubCrowdsResponse Client::listSubCrowdsWithOptions(const string &CrowdId, const ListSubCrowdsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSubCrowds"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/crowds/" , Darabonba::Encode::Encoder::percentEncode(CrowdId) , "/subcrowds")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSubCrowdsResponse>();
}

/**
 * @summary Lists the subcrowds for a specified crowd.
 *
 * @param request ListSubCrowdsRequest
 * @return ListSubCrowdsResponse
 */
ListSubCrowdsResponse Client::listSubCrowds(const string &CrowdId, const ListSubCrowdsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSubCrowdsWithOptions(CrowdId, request, headers, runtime);
}

/**
 * @summary Retrieves a list of data tables.
 *
 * @param request ListTableMetasRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTableMetasResponse
 */
ListTableMetasResponse Client::listTableMetasWithOptions(const ListTableMetasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasModule()) {
    query["Module"] = request.getModule();
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

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTableMetas"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/tablemetas")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTableMetasResponse>();
}

/**
 * @summary Retrieves a list of data tables.
 *
 * @param request ListTableMetasRequest
 * @return ListTableMetasResponse
 */
ListTableMetasResponse Client::listTableMetas(const ListTableMetasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTableMetasWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the historical traffic records for a specific traffic control target.
 *
 * @description ## Usage notes
 * - The `TrafficControlTargetId`, `InstanceId`, and `Environment` parameters are required.
 * - You can use `StartTime` and `EndTime` to specify the time range.
 * - The `Threshold` parameter is optional.
 * - Use `ExperimentId` and `ExperimentGroupId` to filter data for a specific experiment or experiment group.
 * - Use `ItemId` to filter traffic data for a specific item.
 * - The supported environments are the Daily environment, pre-production environment (Pre), and production environment (Prod).
 *
 * @param request ListTrafficControlTargetTrafficHistoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTrafficControlTargetTrafficHistoryResponse
 */
ListTrafficControlTargetTrafficHistoryResponse Client::listTrafficControlTargetTrafficHistoryWithOptions(const string &TrafficControlTargetId, const ListTrafficControlTargetTrafficHistoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEnvironment()) {
    query["Environment"] = request.getEnvironment();
  }

  if (!!request.hasExperimentGroupId()) {
    query["ExperimentGroupId"] = request.getExperimentGroupId();
  }

  if (!!request.hasExperimentId()) {
    query["ExperimentId"] = request.getExperimentId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasItemId()) {
    query["ItemId"] = request.getItemId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.getThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTrafficControlTargetTrafficHistory"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltargets/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTargetId) , "/traffichistories")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTrafficControlTargetTrafficHistoryResponse>();
}

/**
 * @summary Retrieves the historical traffic records for a specific traffic control target.
 *
 * @description ## Usage notes
 * - The `TrafficControlTargetId`, `InstanceId`, and `Environment` parameters are required.
 * - You can use `StartTime` and `EndTime` to specify the time range.
 * - The `Threshold` parameter is optional.
 * - Use `ExperimentId` and `ExperimentGroupId` to filter data for a specific experiment or experiment group.
 * - Use `ItemId` to filter traffic data for a specific item.
 * - The supported environments are the Daily environment, pre-production environment (Pre), and production environment (Prod).
 *
 * @param request ListTrafficControlTargetTrafficHistoryRequest
 * @return ListTrafficControlTargetTrafficHistoryResponse
 */
ListTrafficControlTargetTrafficHistoryResponse Client::listTrafficControlTargetTrafficHistory(const string &TrafficControlTargetId, const ListTrafficControlTargetTrafficHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTrafficControlTargetTrafficHistoryWithOptions(TrafficControlTargetId, request, headers, runtime);
}

/**
 * @summary Lists traffic control tasks that meet specified conditions.
 *
 * @description ## Request
 * - This API retrieves a list of traffic control tasks.
 * - Use query parameters to filter and sort the results.
 * - This operation supports pagination. You can also retrieve all results in a single response.
 * - Note: The `InstanceId` is a required parameter. All other parameters are optional.
 *
 * @param request ListTrafficControlTasksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTrafficControlTasksResponse
 */
ListTrafficControlTasksResponse Client::listTrafficControlTasksWithOptions(const ListTrafficControlTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.getAll();
  }

  if (!!request.hasControlTargetFilter()) {
    query["ControlTargetFilter"] = request.getControlTargetFilter();
  }

  if (!!request.hasEnvironment()) {
    query["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTrafficControlTaskId()) {
    query["TrafficControlTaskId"] = request.getTrafficControlTaskId();
  }

  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTrafficControlTasks"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltasks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTrafficControlTasksResponse>();
}

/**
 * @summary Lists traffic control tasks that meet specified conditions.
 *
 * @description ## Request
 * - This API retrieves a list of traffic control tasks.
 * - Use query parameters to filter and sort the results.
 * - This operation supports pagination. You can also retrieve all results in a single response.
 * - Note: The `InstanceId` is a required parameter. All other parameters are optional.
 *
 * @param request ListTrafficControlTasksRequest
 * @return ListTrafficControlTasksResponse
 */
ListTrafficControlTasksResponse Client::listTrafficControlTasks(const ListTrafficControlTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTrafficControlTasksWithOptions(request, headers, runtime);
}

/**
 * @summary Takes an experiment offline.
 *
 * @param request OfflineExperimentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OfflineExperimentResponse
 */
OfflineExperimentResponse Client::offlineExperimentWithOptions(const string &ExperimentId, const OfflineExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OfflineExperiment"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments/" , Darabonba::Encode::Encoder::percentEncode(ExperimentId) , "/action/offline")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OfflineExperimentResponse>();
}

/**
 * @summary Takes an experiment offline.
 *
 * @param request OfflineExperimentRequest
 * @return OfflineExperimentResponse
 */
OfflineExperimentResponse Client::offlineExperiment(const string &ExperimentId, const OfflineExperimentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return offlineExperimentWithOptions(ExperimentId, request, headers, runtime);
}

/**
 * @summary Takes a specified experiment group offline.
 *
 * @param request OfflineExperimentGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OfflineExperimentGroupResponse
 */
OfflineExperimentGroupResponse Client::offlineExperimentGroupWithOptions(const string &ExperimentGroupId, const OfflineExperimentGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OfflineExperimentGroup"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experimentgroups/" , Darabonba::Encode::Encoder::percentEncode(ExperimentGroupId) , "/action/offline")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OfflineExperimentGroupResponse>();
}

/**
 * @summary Takes a specified experiment group offline.
 *
 * @param request OfflineExperimentGroupRequest
 * @return OfflineExperimentGroupResponse
 */
OfflineExperimentGroupResponse Client::offlineExperimentGroup(const string &ExperimentGroupId, const OfflineExperimentGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return offlineExperimentGroupWithOptions(ExperimentGroupId, request, headers, runtime);
}

/**
 * @summary Takes the specified laboratory offline.
 *
 * @param request OfflineLaboratoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OfflineLaboratoryResponse
 */
OfflineLaboratoryResponse Client::offlineLaboratoryWithOptions(const string &LaboratoryId, const OfflineLaboratoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OfflineLaboratory"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/laboratories/" , Darabonba::Encode::Encoder::percentEncode(LaboratoryId) , "/action/offline")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OfflineLaboratoryResponse>();
}

/**
 * @summary Takes the specified laboratory offline.
 *
 * @param request OfflineLaboratoryRequest
 * @return OfflineLaboratoryResponse
 */
OfflineLaboratoryResponse Client::offlineLaboratory(const string &LaboratoryId, const OfflineLaboratoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return offlineLaboratoryWithOptions(LaboratoryId, request, headers, runtime);
}

/**
 * @summary Takes a specified recall management service offline.
 *
 * @description ## Description
 * Use this API to take a specific recall management service offline. Ensure that the provided `RecallManagementServiceId` and `InstanceId` are accurate to prevent unintended operations.
 * - **Important**: Once a recall management service is taken offline, it stops processing new requests until you reactivate it.
 * - Back up any required data or configurations before you perform this operation in case you need to restore the current state.
 *
 * @param request OfflineRecallManagementServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OfflineRecallManagementServiceResponse
 */
OfflineRecallManagementServiceResponse Client::offlineRecallManagementServiceWithOptions(const string &RecallManagementServiceId, const OfflineRecallManagementServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OfflineRecallManagementService"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementservices/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceId) , "/action/offline")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OfflineRecallManagementServiceResponse>();
}

/**
 * @summary Takes a specified recall management service offline.
 *
 * @description ## Description
 * Use this API to take a specific recall management service offline. Ensure that the provided `RecallManagementServiceId` and `InstanceId` are accurate to prevent unintended operations.
 * - **Important**: Once a recall management service is taken offline, it stops processing new requests until you reactivate it.
 * - Back up any required data or configurations before you perform this operation in case you need to restore the current state.
 *
 * @param request OfflineRecallManagementServiceRequest
 * @return OfflineRecallManagementServiceResponse
 */
OfflineRecallManagementServiceResponse Client::offlineRecallManagementService(const string &RecallManagementServiceId, const OfflineRecallManagementServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return offlineRecallManagementServiceWithOptions(RecallManagementServiceId, request, headers, runtime);
}

/**
 * @summary Brings a specified experiment online.
 *
 * @param request OnlineExperimentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnlineExperimentResponse
 */
OnlineExperimentResponse Client::onlineExperimentWithOptions(const string &ExperimentId, const OnlineExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OnlineExperiment"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments/" , Darabonba::Encode::Encoder::percentEncode(ExperimentId) , "/action/online")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnlineExperimentResponse>();
}

/**
 * @summary Brings a specified experiment online.
 *
 * @param request OnlineExperimentRequest
 * @return OnlineExperimentResponse
 */
OnlineExperimentResponse Client::onlineExperiment(const string &ExperimentId, const OnlineExperimentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return onlineExperimentWithOptions(ExperimentId, request, headers, runtime);
}

/**
 * @summary Brings a specified experiment group online.
 *
 * @param request OnlineExperimentGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnlineExperimentGroupResponse
 */
OnlineExperimentGroupResponse Client::onlineExperimentGroupWithOptions(const string &ExperimentGroupId, const OnlineExperimentGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OnlineExperimentGroup"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experimentgroups/" , Darabonba::Encode::Encoder::percentEncode(ExperimentGroupId) , "/action/online")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnlineExperimentGroupResponse>();
}

/**
 * @summary Brings a specified experiment group online.
 *
 * @param request OnlineExperimentGroupRequest
 * @return OnlineExperimentGroupResponse
 */
OnlineExperimentGroupResponse Client::onlineExperimentGroup(const string &ExperimentGroupId, const OnlineExperimentGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return onlineExperimentGroupWithOptions(ExperimentGroupId, request, headers, runtime);
}

/**
 * @summary Publishes a specified laboratory for experimental analysis.
 *
 * @param request OnlineLaboratoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnlineLaboratoryResponse
 */
OnlineLaboratoryResponse Client::onlineLaboratoryWithOptions(const string &LaboratoryId, const OnlineLaboratoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OnlineLaboratory"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/laboratories/" , Darabonba::Encode::Encoder::percentEncode(LaboratoryId) , "/action/online")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnlineLaboratoryResponse>();
}

/**
 * @summary Publishes a specified laboratory for experimental analysis.
 *
 * @param request OnlineLaboratoryRequest
 * @return OnlineLaboratoryResponse
 */
OnlineLaboratoryResponse Client::onlineLaboratory(const string &LaboratoryId, const OnlineLaboratoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return onlineLaboratoryWithOptions(LaboratoryId, request, headers, runtime);
}

/**
 * @summary This operation brings a specified Recall Management Service online.
 *
 * @description ## Request
 * You can use this operation to bring a Recall Management Service online by specifying the Recall Management Service ID and the instance ID. Ensure that the `RecallManagementServiceId` and `InstanceId` are correct and that you have the required permissions.
 *
 * @param request OnlineRecallManagementServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnlineRecallManagementServiceResponse
 */
OnlineRecallManagementServiceResponse Client::onlineRecallManagementServiceWithOptions(const string &RecallManagementServiceId, const OnlineRecallManagementServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OnlineRecallManagementService"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementservices/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceId) , "/action/online")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnlineRecallManagementServiceResponse>();
}

/**
 * @summary This operation brings a specified Recall Management Service online.
 *
 * @description ## Request
 * You can use this operation to bring a Recall Management Service online by specifying the Recall Management Service ID and the instance ID. Ensure that the `RecallManagementServiceId` and `InstanceId` are correct and that you have the required permissions.
 *
 * @param request OnlineRecallManagementServiceRequest
 * @return OnlineRecallManagementServiceResponse
 */
OnlineRecallManagementServiceResponse Client::onlineRecallManagementService(const string &RecallManagementServiceId, const OnlineRecallManagementServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return onlineRecallManagementServiceWithOptions(RecallManagementServiceId, request, headers, runtime);
}

/**
 * @summary Synchronizes a MaxCompute table with the recall engine. This operation allows you to publish specific partitions and select a synchronization mode.
 *
 * @description ## Request details
 * This API synchronizes a specified MaxCompute table with the recall engine. You must provide the correct `RecallManagementTableId` in the path parameter and the instance ID in the request body. You can also specify the table partitions to publish, whether to skip the threshold check, and the synchronization mode. To publish specific partitions, provide them as key-value pairs in the `Partitions` field.
 *
 * @param request PublishRecallManagementTableRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishRecallManagementTableResponse
 */
PublishRecallManagementTableResponse Client::publishRecallManagementTableWithOptions(const string &RecallManagementTableId, const PublishRecallManagementTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMode()) {
    body["Mode"] = request.getMode();
  }

  if (!!request.hasPartition()) {
    body["Partition"] = request.getPartition();
  }

  if (!!request.hasPartitions()) {
    body["Partitions"] = request.getPartitions();
  }

  if (!!request.hasSkipThresholdCheck()) {
    body["SkipThresholdCheck"] = request.getSkipThresholdCheck();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PublishRecallManagementTable"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementtables/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementTableId) , "/action/publish")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishRecallManagementTableResponse>();
}

/**
 * @summary Synchronizes a MaxCompute table with the recall engine. This operation allows you to publish specific partitions and select a synchronization mode.
 *
 * @description ## Request details
 * This API synchronizes a specified MaxCompute table with the recall engine. You must provide the correct `RecallManagementTableId` in the path parameter and the instance ID in the request body. You can also specify the table partitions to publish, whether to skip the threshold check, and the synchronization mode. To publish specific partitions, provide them as key-value pairs in the `Partitions` field.
 *
 * @param request PublishRecallManagementTableRequest
 * @return PublishRecallManagementTableResponse
 */
PublishRecallManagementTableResponse Client::publishRecallManagementTable(const string &RecallManagementTableId, const PublishRecallManagementTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return publishRecallManagementTableWithOptions(RecallManagementTableId, request, headers, runtime);
}

/**
 * @summary If an experiment is stable and performs well, you can push all traffic to it. This action retires the original experiment group and creates a new one that contains only this experiment. The new group receives 100% of the traffic.
 *
 * @param request PushAllExperimentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushAllExperimentResponse
 */
PushAllExperimentResponse Client::pushAllExperimentWithOptions(const string &ExperimentId, const PushAllExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PushAllExperiment"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments/" , Darabonba::Encode::Encoder::percentEncode(ExperimentId) , "/action/pushall")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushAllExperimentResponse>();
}

/**
 * @summary If an experiment is stable and performs well, you can push all traffic to it. This action retires the original experiment group and creates a new one that contains only this experiment. The new group receives 100% of the traffic.
 *
 * @param request PushAllExperimentRequest
 * @return PushAllExperimentResponse
 */
PushAllExperimentResponse Client::pushAllExperiment(const string &ExperimentId, const PushAllExperimentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return pushAllExperimentWithOptions(ExperimentId, request, headers, runtime);
}

/**
 * @summary 推送指标到指定资源规则
 *
 * @param tmpReq PushResourceRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushResourceRuleResponse
 */
PushResourceRuleResponse Client::pushResourceRuleWithOptions(const string &ResourceRuleId, const PushResourceRuleRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PushResourceRuleShrinkRequest request = PushResourceRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMetricInfo()) {
    request.setMetricInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMetricInfo(), "MetricInfo", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMetricInfoShrink()) {
    query["MetricInfo"] = request.getMetricInfoShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PushResourceRule"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resourcerules/" , Darabonba::Encode::Encoder::percentEncode(ResourceRuleId) , "/action/push")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushResourceRuleResponse>();
}

/**
 * @summary 推送指标到指定资源规则
 *
 * @param request PushResourceRuleRequest
 * @return PushResourceRuleResponse
 */
PushResourceRuleResponse Client::pushResourceRule(const string &ResourceRuleId, const PushResourceRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return pushResourceRuleWithOptions(ResourceRuleId, request, headers, runtime);
}

/**
 * @summary Retrieves statistics for a specified data diagnosis task within a time range.
 *
 * @description ## Request description
 * - The `DataDiagnosisId` parameter is required and specifies the data diagnosis task.
 * - The `InstanceId` parameter is also required and specifies the instance.
 * - The `StartDate` and `EndDate` parameters specify the start and end dates of the time range. The format is YYYY-MM-DD.
 * - The `RemainRateType` parameter is optional. It specifies the retention rate report type. The default value is \\"Period\\", which indicates a periodic report.
 * - The response includes the request ID (`RequestId`) and a `Statistics` object. This object contains the dates of task failures (`FailedDates`) and dates with missing task data (`NoDataDates`).
 *
 * @param request QueryDataDiagnosisStatisticsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDataDiagnosisStatisticsResponse
 */
QueryDataDiagnosisStatisticsResponse Client::queryDataDiagnosisStatisticsWithOptions(const string &DataDiagnosisId, const QueryDataDiagnosisStatisticsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRemainRateType()) {
    query["RemainRateType"] = request.getRemainRateType();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDataDiagnosisStatistics"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datadiagnoses/" , Darabonba::Encode::Encoder::percentEncode(DataDiagnosisId) , "/statistics/action/query")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDataDiagnosisStatisticsResponse>();
}

/**
 * @summary Retrieves statistics for a specified data diagnosis task within a time range.
 *
 * @description ## Request description
 * - The `DataDiagnosisId` parameter is required and specifies the data diagnosis task.
 * - The `InstanceId` parameter is also required and specifies the instance.
 * - The `StartDate` and `EndDate` parameters specify the start and end dates of the time range. The format is YYYY-MM-DD.
 * - The `RemainRateType` parameter is optional. It specifies the retention rate report type. The default value is \\"Period\\", which indicates a periodic report.
 * - The response includes the request ID (`RequestId`) and a `Statistics` object. This object contains the dates of task failures (`FailedDates`) and dates with missing task data (`NoDataDates`).
 *
 * @param request QueryDataDiagnosisStatisticsRequest
 * @return QueryDataDiagnosisStatisticsResponse
 */
QueryDataDiagnosisStatisticsResponse Client::queryDataDiagnosisStatistics(const string &DataDiagnosisId, const QueryDataDiagnosisStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryDataDiagnosisStatisticsWithOptions(DataDiagnosisId, request, headers, runtime);
}

/**
 * @summary Retrieves records from a specified recall management table.
 *
 * @description ## Request
 * This API retrieves records from a specific recall management table using the provided primary keys. You must provide a valid `InstanceId` and `RecallManagementTableId`, and a non-empty `PrimaryKeys` list. If you specify `RecallManagementTableVersionId`, the API returns records from that version; otherwise, it uses the currently published version.
 *
 * @param request QueryRecallManagementTableRecordsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRecallManagementTableRecordsResponse
 */
QueryRecallManagementTableRecordsResponse Client::queryRecallManagementTableRecordsWithOptions(const string &RecallManagementTableId, const QueryRecallManagementTableRecordsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPrimaryKeys()) {
    query["PrimaryKeys"] = request.getPrimaryKeys();
  }

  if (!!request.hasRecallManagementTableVersionId()) {
    query["RecallManagementTableVersionId"] = request.getRecallManagementTableVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRecallManagementTableRecords"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementtables/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementTableId) , "/queryrecords")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRecallManagementTableRecordsResponse>();
}

/**
 * @summary Retrieves records from a specified recall management table.
 *
 * @description ## Request
 * This API retrieves records from a specific recall management table using the provided primary keys. You must provide a valid `InstanceId` and `RecallManagementTableId`, and a non-empty `PrimaryKeys` list. If you specify `RecallManagementTableVersionId`, the API returns records from that version; otherwise, it uses the currently published version.
 *
 * @param request QueryRecallManagementTableRecordsRequest
 * @return QueryRecallManagementTableRecordsResponse
 */
QueryRecallManagementTableRecordsResponse Client::queryRecallManagementTableRecords(const string &RecallManagementTableId, const QueryRecallManagementTableRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryRecallManagementTableRecordsWithOptions(RecallManagementTableId, request, headers, runtime);
}

/**
 * @summary 查看样本一致性任务差异的详情
 *
 * @param request QuerySampleConsistencyJobDifferenceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySampleConsistencyJobDifferenceResponse
 */
QuerySampleConsistencyJobDifferenceResponse Client::querySampleConsistencyJobDifferenceWithOptions(const string &SampleConsistencyJobId, const QuerySampleConsistencyJobDifferenceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeatureName()) {
    query["FeatureName"] = request.getFeatureName();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySampleConsistencyJobDifference"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/sampleconsistencyjobs/" , Darabonba::Encode::Encoder::percentEncode(SampleConsistencyJobId) , "/action/querydifference")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySampleConsistencyJobDifferenceResponse>();
}

/**
 * @summary 查看样本一致性任务差异的详情
 *
 * @param request QuerySampleConsistencyJobDifferenceRequest
 * @return QuerySampleConsistencyJobDifferenceResponse
 */
QuerySampleConsistencyJobDifferenceResponse Client::querySampleConsistencyJobDifference(const string &SampleConsistencyJobId, const QuerySampleConsistencyJobDifferenceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return querySampleConsistencyJobDifferenceWithOptions(SampleConsistencyJobId, request, headers, runtime);
}

/**
 * @summary Retrieves the traffic control details of a target item for a given environment and date range.
 *
 * @description ## Request
 * Use this API to query the details of single-item control for a given traffic control target on a specified date and for a specific instance ID and environment. The details include traffic data and feature information for the top 100 items before and after the control is applied. Ensure that the `TrafficControlTargetId`, `InstanceId`, and `Environment` parameters are accurate, and that the `Date` is in YYYY-MM-DD format. Although the `Date` parameter is optional, we recommend specifying a date for meaningful results.
 *
 * @param request QueryTrafficControlTargetItemReportDetailRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTrafficControlTargetItemReportDetailResponse
 */
QueryTrafficControlTargetItemReportDetailResponse Client::queryTrafficControlTargetItemReportDetailWithOptions(const string &TrafficControlTargetId, const QueryTrafficControlTargetItemReportDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDate()) {
    query["Date"] = request.getDate();
  }

  if (!!request.hasEnvironment()) {
    query["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryTrafficControlTargetItemReportDetail"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltargets/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTargetId) , "/itemcontrolreportdetail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTrafficControlTargetItemReportDetailResponse>();
}

/**
 * @summary Retrieves the traffic control details of a target item for a given environment and date range.
 *
 * @description ## Request
 * Use this API to query the details of single-item control for a given traffic control target on a specified date and for a specific instance ID and environment. The details include traffic data and feature information for the top 100 items before and after the control is applied. Ensure that the `TrafficControlTargetId`, `InstanceId`, and `Environment` parameters are accurate, and that the `Date` is in YYYY-MM-DD format. Although the `Date` parameter is optional, we recommend specifying a date for meaningful results.
 *
 * @param request QueryTrafficControlTargetItemReportDetailRequest
 * @return QueryTrafficControlTargetItemReportDetailResponse
 */
QueryTrafficControlTargetItemReportDetailResponse Client::queryTrafficControlTargetItemReportDetail(const string &TrafficControlTargetId, const QueryTrafficControlTargetItemReportDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryTrafficControlTargetItemReportDetailWithOptions(TrafficControlTargetId, request, headers, runtime);
}

/**
 * @summary Retrieves the deployment status and related information of a specified traffic control task in a specific environment.
 *
 * @description ## Operation description
 * You can call this operation to query the deployment result of a traffic control task specified by TrafficControlTaskId for a given instance ID and environment. Make sure that the specified InstanceId is associated with your account and that the Environment parameter value is valid (Daily for daily environment, Pre for staging environment, Prod for production environment). All request parameters are required.
 *
 * @param request QueryTrafficControlTaskDeployResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTrafficControlTaskDeployResultResponse
 */
QueryTrafficControlTaskDeployResultResponse Client::queryTrafficControlTaskDeployResultWithOptions(const string &TrafficControlTaskId, const QueryTrafficControlTaskDeployResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnvironment()) {
    query["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryTrafficControlTaskDeployResult"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltasks/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTaskId) , "/action/queryresult")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTrafficControlTaskDeployResultResponse>();
}

/**
 * @summary Retrieves the deployment status and related information of a specified traffic control task in a specific environment.
 *
 * @description ## Operation description
 * You can call this operation to query the deployment result of a traffic control task specified by TrafficControlTaskId for a given instance ID and environment. Make sure that the specified InstanceId is associated with your account and that the Environment parameter value is valid (Daily for daily environment, Pre for staging environment, Prod for production environment). All request parameters are required.
 *
 * @param request QueryTrafficControlTaskDeployResultRequest
 * @return QueryTrafficControlTaskDeployResultResponse
 */
QueryTrafficControlTaskDeployResultResponse Client::queryTrafficControlTaskDeployResult(const string &TrafficControlTaskId, const QueryTrafficControlTaskDeployResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryTrafficControlTaskDeployResultWithOptions(TrafficControlTaskId, request, headers, runtime);
}

/**
 * @summary Retrieves a detailed report on item control for a specified traffic control task.
 *
 * @description ## Description
 * - This API retrieves the item control results for a specific traffic control task within a given time range.
 * - `TrafficControlTaskId` is the unique identifier for a traffic control task.
 * - `InstanceId` specifies the instance that runs the task.
 * - The `Environment` parameter specifies the task\\"s execution environment. Valid values are Daily (development environment), Pre (staging environment), and Prod (production environment).
 * - `StartTime` and `EndTime` specify the start and end of the time range for the report, respectively. The format is "YYYY-MM-DD HH:MM:SS".
 * - The specified start and end times must be valid and span no more than two consecutive calendar days.
 *
 * @param request QueryTrafficControlTaskItemReportRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTrafficControlTaskItemReportResponse
 */
QueryTrafficControlTaskItemReportResponse Client::queryTrafficControlTaskItemReportWithOptions(const string &TrafficControlTaskId, const QueryTrafficControlTaskItemReportRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEnvironment()) {
    query["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryTrafficControlTaskItemReport"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltasks/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTaskId) , "/action/queryitemreport")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTrafficControlTaskItemReportResponse>();
}

/**
 * @summary Retrieves a detailed report on item control for a specified traffic control task.
 *
 * @description ## Description
 * - This API retrieves the item control results for a specific traffic control task within a given time range.
 * - `TrafficControlTaskId` is the unique identifier for a traffic control task.
 * - `InstanceId` specifies the instance that runs the task.
 * - The `Environment` parameter specifies the task\\"s execution environment. Valid values are Daily (development environment), Pre (staging environment), and Prod (production environment).
 * - `StartTime` and `EndTime` specify the start and end of the time range for the report, respectively. The format is "YYYY-MM-DD HH:MM:SS".
 * - The specified start and end times must be valid and span no more than two consecutive calendar days.
 *
 * @param request QueryTrafficControlTaskItemReportRequest
 * @return QueryTrafficControlTaskItemReportResponse
 */
QueryTrafficControlTaskItemReportResponse Client::queryTrafficControlTaskItemReport(const string &TrafficControlTaskId, const QueryTrafficControlTaskItemReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryTrafficControlTaskItemReportWithOptions(TrafficControlTaskId, request, headers, runtime);
}

/**
 * @summary Releases a traffic control task for the specified instance and environment.
 *
 * @description ## Request
 * Use this API to release a traffic control task for a specific instance and environment (Daily, Pre, or Prod). Your request must include the `TrafficControlTaskId`, `InstanceId`, and `Environment` parameters.
 * - `TrafficControlTaskId`: The unique ID of the traffic control task.
 * - `InstanceId`: The ID of the target instance.
 * - `Environment`: The execution environment for the traffic control task. Valid values: `Daily`, `Pre`, and `Prod`.
 * The request succeeds only if all required parameters are provided correctly. A successful response includes a `RequestId`.
 *
 * @param request ReleaseTrafficControlTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseTrafficControlTaskResponse
 */
ReleaseTrafficControlTaskResponse Client::releaseTrafficControlTaskWithOptions(const string &TrafficControlTaskId, const ReleaseTrafficControlTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReleaseTrafficControlTask"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltasks/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTaskId) , "/action/release")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseTrafficControlTaskResponse>();
}

/**
 * @summary Releases a traffic control task for the specified instance and environment.
 *
 * @description ## Request
 * Use this API to release a traffic control task for a specific instance and environment (Daily, Pre, or Prod). Your request must include the `TrafficControlTaskId`, `InstanceId`, and `Environment` parameters.
 * - `TrafficControlTaskId`: The unique ID of the traffic control task.
 * - `InstanceId`: The ID of the target instance.
 * - `Environment`: The execution environment for the traffic control task. Valid values: `Daily`, `Pre`, and `Prod`.
 * The request succeeds only if all required parameters are provided correctly. A successful response includes a `RequestId`.
 *
 * @param request ReleaseTrafficControlTaskRequest
 * @return ReleaseTrafficControlTaskResponse
 */
ReleaseTrafficControlTaskResponse Client::releaseTrafficControlTask(const string &TrafficControlTaskId, const ReleaseTrafficControlTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return releaseTrafficControlTaskWithOptions(TrafficControlTaskId, request, headers, runtime);
}

/**
 * @summary Retrieve a metric group\\"s report.
 *
 * @param request ReportABMetricGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReportABMetricGroupResponse
 */
ReportABMetricGroupResponse Client::reportABMetricGroupWithOptions(const string &ABMetricGroupId, const ReportABMetricGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBaseExperimentId()) {
    body["BaseExperimentId"] = request.getBaseExperimentId();
  }

  if (!!request.hasDimensionFields()) {
    body["DimensionFields"] = request.getDimensionFields();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.getEndDate();
  }

  if (!!request.hasExperimentGroupId()) {
    body["ExperimentGroupId"] = request.getExperimentGroupId();
  }

  if (!!request.hasExperimentIds()) {
    body["ExperimentIds"] = request.getExperimentIds();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasReportType()) {
    body["ReportType"] = request.getReportType();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.getStartDate();
  }

  if (!!request.hasTimeStatisticsMethod()) {
    body["TimeStatisticsMethod"] = request.getTimeStatisticsMethod();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReportABMetricGroup"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/abmetricgroups/" , Darabonba::Encode::Encoder::percentEncode(ABMetricGroupId) , "/action/report")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReportABMetricGroupResponse>();
}

/**
 * @summary Retrieve a metric group\\"s report.
 *
 * @param request ReportABMetricGroupRequest
 * @return ReportABMetricGroupResponse
 */
ReportABMetricGroupResponse Client::reportABMetricGroup(const string &ABMetricGroupId, const ReportABMetricGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return reportABMetricGroupWithOptions(ABMetricGroupId, request, headers, runtime);
}

/**
 * @summary 样本一致性任务报表
 *
 * @param request ReportSampleConsistencyJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReportSampleConsistencyJobResponse
 */
ReportSampleConsistencyJobResponse Client::reportSampleConsistencyJobWithOptions(const string &SampleConsistencyJobId, const ReportSampleConsistencyJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReportSampleConsistencyJob"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/sampleconsistencyjobs/" , Darabonba::Encode::Encoder::percentEncode(SampleConsistencyJobId) , "/action/report")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReportSampleConsistencyJobResponse>();
}

/**
 * @summary 样本一致性任务报表
 *
 * @param request ReportSampleConsistencyJobRequest
 * @return ReportSampleConsistencyJobResponse
 */
ReportSampleConsistencyJobResponse Client::reportSampleConsistencyJob(const string &SampleConsistencyJobId, const ReportSampleConsistencyJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return reportSampleConsistencyJobWithOptions(SampleConsistencyJobId, request, headers, runtime);
}

/**
 * @summary Conducts conversations with users through an AI shopping guide to provide product recommendation services.
 *
 * @description ## Operation description
 * - This API is used to send conversation messages to the AI shopping guide and supports Server-Sent Events (SSE).
 * - `InstanceId`, `SessionId`, `SceneId`, `ServiceId`, `Environment`, `Uid`, and `Language` are required parameters. Ensure the accuracy of these values to obtain optimal responses.
 * - The `InputMessage` must contain at least one text-type message that describes the user\\"s request or question.
 * - Based on the provided input, the system returns corresponding recommendation results or other relevant information.
 * - Check the returned `StopReason` field to understand whether the session has ended and the reason.
 *
 * @param request ShoppingAssistantRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ShoppingAssistantResponse
 */
FutureGenerator<ShoppingAssistantResponse> Client::shoppingAssistantWithSSE(const ShoppingAssistantRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
  }

  if (!!request.hasContents()) {
    body["Contents"] = request.getContents();
  }

  if (!!request.hasConversationId()) {
    body["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInputMessage()) {
    body["InputMessage"] = request.getInputMessage();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.getLanguage();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
  }

  if (!!request.hasServiceId()) {
    body["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasUid()) {
    body["Uid"] = request.getUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ShoppingAssistant"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/conversations/shopping_assistant/chat")},
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
      })).get<ShoppingAssistantResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Conducts conversations with users through an AI shopping guide to provide product recommendation services.
 *
 * @description ## Operation description
 * - This API is used to send conversation messages to the AI shopping guide and supports Server-Sent Events (SSE).
 * - `InstanceId`, `SessionId`, `SceneId`, `ServiceId`, `Environment`, `Uid`, and `Language` are required parameters. Ensure the accuracy of these values to obtain optimal responses.
 * - The `InputMessage` must contain at least one text-type message that describes the user\\"s request or question.
 * - Based on the provided input, the system returns corresponding recommendation results or other relevant information.
 * - Check the returned `StopReason` field to understand whether the session has ended and the reason.
 *
 * @param request ShoppingAssistantRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ShoppingAssistantResponse
 */
ShoppingAssistantResponse Client::shoppingAssistantWithOptions(const ShoppingAssistantRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
  }

  if (!!request.hasContents()) {
    body["Contents"] = request.getContents();
  }

  if (!!request.hasConversationId()) {
    body["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInputMessage()) {
    body["InputMessage"] = request.getInputMessage();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.getLanguage();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
  }

  if (!!request.hasServiceId()) {
    body["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasUid()) {
    body["Uid"] = request.getUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ShoppingAssistant"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/conversations/shopping_assistant/chat")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ShoppingAssistantResponse>();
}

/**
 * @summary Conducts conversations with users through an AI shopping guide to provide product recommendation services.
 *
 * @description ## Operation description
 * - This API is used to send conversation messages to the AI shopping guide and supports Server-Sent Events (SSE).
 * - `InstanceId`, `SessionId`, `SceneId`, `ServiceId`, `Environment`, `Uid`, and `Language` are required parameters. Ensure the accuracy of these values to obtain optimal responses.
 * - The `InputMessage` must contain at least one text-type message that describes the user\\"s request or question.
 * - Based on the provided input, the system returns corresponding recommendation results or other relevant information.
 * - Check the returned `StopReason` field to understand whether the session has ended and the reason.
 *
 * @param request ShoppingAssistantRequest
 * @return ShoppingAssistantResponse
 */
ShoppingAssistantResponse Client::shoppingAssistant(const ShoppingAssistantRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return shoppingAssistantWithOptions(request, headers, runtime);
}

/**
 * @summary Splits the target values for a traffic control target into time intervals.
 *
 * @description Splits the target values for a traffic control target into time intervals.
 *
 * @param request SplitTrafficControlTargetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SplitTrafficControlTargetResponse
 */
SplitTrafficControlTargetResponse Client::splitTrafficControlTargetWithOptions(const string &TrafficControlTargetId, const SplitTrafficControlTargetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSetPoints()) {
    body["SetPoints"] = request.getSetPoints();
  }

  if (!!request.hasSetValues()) {
    body["SetValues"] = request.getSetValues();
  }

  if (!!request.hasTimePoints()) {
    body["TimePoints"] = request.getTimePoints();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SplitTrafficControlTarget"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltargets/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTargetId) , "/action/split")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SplitTrafficControlTargetResponse>();
}

/**
 * @summary Splits the target values for a traffic control target into time intervals.
 *
 * @description Splits the target values for a traffic control target into time intervals.
 *
 * @param request SplitTrafficControlTargetRequest
 * @return SplitTrafficControlTargetResponse
 */
SplitTrafficControlTargetResponse Client::splitTrafficControlTarget(const string &TrafficControlTargetId, const SplitTrafficControlTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return splitTrafficControlTargetWithOptions(TrafficControlTargetId, request, headers, runtime);
}

/**
 * @summary Starts a traffic control task for a specific traffic control target.
 *
 * @description ## Request
 * Call this operation to start a traffic control task by providing the `TrafficControlTargetId` and `InstanceId`.
 *
 * @param request StartTrafficControlTargetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartTrafficControlTargetResponse
 */
StartTrafficControlTargetResponse Client::startTrafficControlTargetWithOptions(const string &TrafficControlTargetId, const StartTrafficControlTargetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StartTrafficControlTarget"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltargets/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTargetId) , "/action/start")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartTrafficControlTargetResponse>();
}

/**
 * @summary Starts a traffic control task for a specific traffic control target.
 *
 * @description ## Request
 * Call this operation to start a traffic control task by providing the `TrafficControlTargetId` and `InstanceId`.
 *
 * @param request StartTrafficControlTargetRequest
 * @return StartTrafficControlTargetResponse
 */
StartTrafficControlTargetResponse Client::startTrafficControlTarget(const string &TrafficControlTargetId, const StartTrafficControlTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startTrafficControlTargetWithOptions(TrafficControlTargetId, request, headers, runtime);
}

/**
 * @summary Starts a traffic control task with a specified ID for instances in different environments.
 *
 * @description ## Request details
 * - This operation starts the traffic control task identified by `TrafficControlTaskId`.
 * - `InstanceId` specifies the target instance.
 * - `Environment` specifies the target environment. Valid values: Daily, Pre, and Prod.
 * - Ensure that all required parameters are set correctly before you call this operation. The specified `TrafficControlTaskId` must exist in the system.
 *
 * @param request StartTrafficControlTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartTrafficControlTaskResponse
 */
StartTrafficControlTaskResponse Client::startTrafficControlTaskWithOptions(const string &TrafficControlTaskId, const StartTrafficControlTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StartTrafficControlTask"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltasks/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTaskId) , "/action/start")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartTrafficControlTaskResponse>();
}

/**
 * @summary Starts a traffic control task with a specified ID for instances in different environments.
 *
 * @description ## Request details
 * - This operation starts the traffic control task identified by `TrafficControlTaskId`.
 * - `InstanceId` specifies the target instance.
 * - `Environment` specifies the target environment. Valid values: Daily, Pre, and Prod.
 * - Ensure that all required parameters are set correctly before you call this operation. The specified `TrafficControlTaskId` must exist in the system.
 *
 * @param request StartTrafficControlTaskRequest
 * @return StartTrafficControlTaskResponse
 */
StartTrafficControlTaskResponse Client::startTrafficControlTask(const string &TrafficControlTaskId, const StartTrafficControlTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startTrafficControlTaskWithOptions(TrafficControlTaskId, request, headers, runtime);
}

/**
 * @summary 停止样本一致性任务
 *
 * @param request StopSampleConsistencyJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopSampleConsistencyJobResponse
 */
StopSampleConsistencyJobResponse Client::stopSampleConsistencyJobWithOptions(const string &SampleConsistencyJobId, const StopSampleConsistencyJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopSampleConsistencyJob"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/sampleconsistencyjobs/" , Darabonba::Encode::Encoder::percentEncode(SampleConsistencyJobId) , "/action/stop")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopSampleConsistencyJobResponse>();
}

/**
 * @summary 停止样本一致性任务
 *
 * @param request StopSampleConsistencyJobRequest
 * @return StopSampleConsistencyJobResponse
 */
StopSampleConsistencyJobResponse Client::stopSampleConsistencyJob(const string &SampleConsistencyJobId, const StopSampleConsistencyJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopSampleConsistencyJobWithOptions(SampleConsistencyJobId, request, headers, runtime);
}

/**
 * @summary Stops a traffic control Flink task with the specified ID.
 *
 * @description ## Request description
 * You can call this operation to stop a specific traffic control Flink task based on the specified TrafficControlTaskId. Make sure that you have prepared the correct InstanceId and the environment to which the instance belongs (Daily for daily environment, Pre for staging environment, Prod for production environment). Include this information in the request body to ensure that the operation is correctly performed.
 *
 * @param request StopTrafficControlFlinkTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopTrafficControlFlinkTaskResponse
 */
StopTrafficControlFlinkTaskResponse Client::stopTrafficControlFlinkTaskWithOptions(const string &TrafficControlTaskId, const StopTrafficControlFlinkTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StopTrafficControlFlinkTask"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltasks/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTaskId) , "/action/stopflink")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopTrafficControlFlinkTaskResponse>();
}

/**
 * @summary Stops a traffic control Flink task with the specified ID.
 *
 * @description ## Request description
 * You can call this operation to stop a specific traffic control Flink task based on the specified TrafficControlTaskId. Make sure that you have prepared the correct InstanceId and the environment to which the instance belongs (Daily for daily environment, Pre for staging environment, Prod for production environment). Include this information in the request body to ensure that the operation is correctly performed.
 *
 * @param request StopTrafficControlFlinkTaskRequest
 * @return StopTrafficControlFlinkTaskResponse
 */
StopTrafficControlFlinkTaskResponse Client::stopTrafficControlFlinkTask(const string &TrafficControlTaskId, const StopTrafficControlFlinkTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopTrafficControlFlinkTaskWithOptions(TrafficControlTaskId, request, headers, runtime);
}

/**
 * @summary Stops a specific traffic control target.
 *
 * @description ## Request
 * This operation stops a traffic control task using the provided `TrafficControlTargetId` and `InstanceId`. Ensure that the parameter values are accurate to avoid stopping the wrong target or instance.
 *
 * @param request StopTrafficControlTargetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopTrafficControlTargetResponse
 */
StopTrafficControlTargetResponse Client::stopTrafficControlTargetWithOptions(const string &TrafficControlTargetId, const StopTrafficControlTargetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StopTrafficControlTarget"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltargets/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTargetId) , "/action/stop")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopTrafficControlTargetResponse>();
}

/**
 * @summary Stops a specific traffic control target.
 *
 * @description ## Request
 * This operation stops a traffic control task using the provided `TrafficControlTargetId` and `InstanceId`. Ensure that the parameter values are accurate to avoid stopping the wrong target or instance.
 *
 * @param request StopTrafficControlTargetRequest
 * @return StopTrafficControlTargetResponse
 */
StopTrafficControlTargetResponse Client::stopTrafficControlTarget(const string &TrafficControlTargetId, const StopTrafficControlTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopTrafficControlTargetWithOptions(TrafficControlTargetId, request, headers, runtime);
}

/**
 * @summary Stops a traffic control task for a specific instance and environment.
 *
 * @description ## Usage notes
 * - This API stops a traffic control task identified by a specific `TrafficControlTaskId`.
 * - The `InstanceId` and `Environment` parameters are required to identify the target instance and its environment.
 * - Ensure that you provide the correct `TrafficControlTaskId` to prevent the request from failing.
 *
 * @param request StopTrafficControlTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopTrafficControlTaskResponse
 */
StopTrafficControlTaskResponse Client::stopTrafficControlTaskWithOptions(const string &TrafficControlTaskId, const StopTrafficControlTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StopTrafficControlTask"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltasks/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTaskId) , "/action/stop")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopTrafficControlTaskResponse>();
}

/**
 * @summary Stops a traffic control task for a specific instance and environment.
 *
 * @description ## Usage notes
 * - This API stops a traffic control task identified by a specific `TrafficControlTaskId`.
 * - The `InstanceId` and `Environment` parameters are required to identify the target instance and its environment.
 * - Ensure that you provide the correct `TrafficControlTaskId` to prevent the request from failing.
 *
 * @param request StopTrafficControlTaskRequest
 * @return StopTrafficControlTaskResponse
 */
StopTrafficControlTaskResponse Client::stopTrafficControlTask(const string &TrafficControlTaskId, const StopTrafficControlTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopTrafficControlTaskWithOptions(TrafficControlTaskId, request, headers, runtime);
}

/**
 * @summary Syncs the replay log for a feature consistency check job.
 *
 * @param request SyncFeatureConsistencyCheckJobReplayLogRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncFeatureConsistencyCheckJobReplayLogResponse
 */
SyncFeatureConsistencyCheckJobReplayLogResponse Client::syncFeatureConsistencyCheckJobReplayLogWithOptions(const SyncFeatureConsistencyCheckJobReplayLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContextFeatures()) {
    body["ContextFeatures"] = request.getContextFeatures();
  }

  if (!!request.hasFeatureConsistencyCheckJobConfigId()) {
    body["FeatureConsistencyCheckJobConfigId"] = request.getFeatureConsistencyCheckJobConfigId();
  }

  if (!!request.hasGeneratedFeatures()) {
    body["GeneratedFeatures"] = request.getGeneratedFeatures();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLogItemId()) {
    body["LogItemId"] = request.getLogItemId();
  }

  if (!!request.hasLogRequestId()) {
    body["LogRequestId"] = request.getLogRequestId();
  }

  if (!!request.hasLogRequestTime()) {
    body["LogRequestTime"] = request.getLogRequestTime();
  }

  if (!!request.hasLogUserId()) {
    body["LogUserId"] = request.getLogUserId();
  }

  if (!!request.hasRawFeatures()) {
    body["RawFeatures"] = request.getRawFeatures();
  }

  if (!!request.hasSceneName()) {
    body["SceneName"] = request.getSceneName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SyncFeatureConsistencyCheckJobReplayLog"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/featureconsistencycheck/jobs/action/syncreplaylog")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncFeatureConsistencyCheckJobReplayLogResponse>();
}

/**
 * @summary Syncs the replay log for a feature consistency check job.
 *
 * @param request SyncFeatureConsistencyCheckJobReplayLogRequest
 * @return SyncFeatureConsistencyCheckJobReplayLogResponse
 */
SyncFeatureConsistencyCheckJobReplayLogResponse Client::syncFeatureConsistencyCheckJobReplayLog(const SyncFeatureConsistencyCheckJobReplayLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return syncFeatureConsistencyCheckJobReplayLogWithOptions(request, headers, runtime);
}

/**
 * @summary Terminates a feature consistency check job.
 *
 * @param request TerminateFeatureConsistencyCheckJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TerminateFeatureConsistencyCheckJobResponse
 */
TerminateFeatureConsistencyCheckJobResponse Client::terminateFeatureConsistencyCheckJobWithOptions(const string &FeatureConsistencyCheckJobId, const TerminateFeatureConsistencyCheckJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TerminateFeatureConsistencyCheckJob"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/featureconsistencycheck/jobs/" , Darabonba::Encode::Encoder::percentEncode(FeatureConsistencyCheckJobId) , "/action/terminate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TerminateFeatureConsistencyCheckJobResponse>();
}

/**
 * @summary Terminates a feature consistency check job.
 *
 * @param request TerminateFeatureConsistencyCheckJobRequest
 * @return TerminateFeatureConsistencyCheckJobResponse
 */
TerminateFeatureConsistencyCheckJobResponse Client::terminateFeatureConsistencyCheckJob(const string &FeatureConsistencyCheckJobId, const TerminateFeatureConsistencyCheckJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return terminateFeatureConsistencyCheckJobWithOptions(FeatureConsistencyCheckJobId, request, headers, runtime);
}

/**
 * @summary Modifies the metric configuration of an existing ABTest experiment.
 *
 * @description ## Operation description
 * This API operation allows you to update the attributes of a specified ABTest metric, including whether to calculate significance and the aggregation method. Make sure that you have obtained the correct `ABMetricId` before calling this operation.
 * - `NeedSignificance`: Specifies whether to perform significance analysis on the current metric. Default value: `false`.
 * - `AggregationByUser`: When significance calculation is enabled, specifies whether to aggregate data by user or by sample. Default value: `false` (by sample).
 * - `Numerator` and `Denominator`: The specific definitions of the numerator and denominator used in significance calculation.
 * - `IsBinomialDistribution`: Valid only for derived metrics. Specifies whether the metric follows a binomial distribution, which affects subsequent data processing logic.
 * Note: You do not need to provide all fields at the same time. Include only the parameters whose values you want to change in the request body.
 *
 * @param request UpdateABMetricRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateABMetricResponse
 */
UpdateABMetricResponse Client::updateABMetricWithOptions(const string &ABMetricId, const UpdateABMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAggregationByUser()) {
    body["AggregationByUser"] = request.getAggregationByUser();
  }

  if (!!request.hasDefinition()) {
    body["Definition"] = request.getDefinition();
  }

  if (!!request.hasDenominator()) {
    body["Denominator"] = request.getDenominator();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsBinomialDistribution()) {
    body["IsBinomialDistribution"] = request.getIsBinomialDistribution();
  }

  if (!!request.hasLeftMetricId()) {
    body["LeftMetricId"] = request.getLeftMetricId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasNeedSignificance()) {
    body["NeedSignificance"] = request.getNeedSignificance();
  }

  if (!!request.hasNumerator()) {
    body["Numerator"] = request.getNumerator();
  }

  if (!!request.hasOperator()) {
    body["Operator"] = request.getOperator();
  }

  if (!!request.hasRealtime()) {
    body["Realtime"] = request.getRealtime();
  }

  if (!!request.hasResultResourceId()) {
    body["ResultResourceId"] = request.getResultResourceId();
  }

  if (!!request.hasRightMetricId()) {
    body["RightMetricId"] = request.getRightMetricId();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
  }

  if (!!request.hasStatisticsCycle()) {
    body["StatisticsCycle"] = request.getStatisticsCycle();
  }

  if (!!request.hasTableMetaId()) {
    body["TableMetaId"] = request.getTableMetaId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateABMetric"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/abmetrics/" , Darabonba::Encode::Encoder::percentEncode(ABMetricId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateABMetricResponse>();
}

/**
 * @summary Modifies the metric configuration of an existing ABTest experiment.
 *
 * @description ## Operation description
 * This API operation allows you to update the attributes of a specified ABTest metric, including whether to calculate significance and the aggregation method. Make sure that you have obtained the correct `ABMetricId` before calling this operation.
 * - `NeedSignificance`: Specifies whether to perform significance analysis on the current metric. Default value: `false`.
 * - `AggregationByUser`: When significance calculation is enabled, specifies whether to aggregate data by user or by sample. Default value: `false` (by sample).
 * - `Numerator` and `Denominator`: The specific definitions of the numerator and denominator used in significance calculation.
 * - `IsBinomialDistribution`: Valid only for derived metrics. Specifies whether the metric follows a binomial distribution, which affects subsequent data processing logic.
 * Note: You do not need to provide all fields at the same time. Include only the parameters whose values you want to change in the request body.
 *
 * @param request UpdateABMetricRequest
 * @return UpdateABMetricResponse
 */
UpdateABMetricResponse Client::updateABMetric(const string &ABMetricId, const UpdateABMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateABMetricWithOptions(ABMetricId, request, headers, runtime);
}

/**
 * @summary Updates an A/B test metric group.
 *
 * @param request UpdateABMetricGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateABMetricGroupResponse
 */
UpdateABMetricGroupResponse Client::updateABMetricGroupWithOptions(const string &ABMetricGroupId, const UpdateABMetricGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasABMetricIds()) {
    body["ABMetricIds"] = request.getABMetricIds();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasRealtime()) {
    body["Realtime"] = request.getRealtime();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateABMetricGroup"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/abmetricgroups/" , Darabonba::Encode::Encoder::percentEncode(ABMetricGroupId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateABMetricGroupResponse>();
}

/**
 * @summary Updates an A/B test metric group.
 *
 * @param request UpdateABMetricGroupRequest
 * @return UpdateABMetricGroupResponse
 */
UpdateABMetricGroupResponse Client::updateABMetricGroup(const string &ABMetricGroupId, const UpdateABMetricGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateABMetricGroupWithOptions(ABMetricGroupId, request, headers, runtime);
}

/**
 * @summary Updates a crowd\\"s information, such as its name and description.
 *
 * @param request UpdateCrowdRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCrowdResponse
 */
UpdateCrowdResponse Client::updateCrowdWithOptions(const string &CrowdId, const UpdateCrowdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateCrowd"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/crowds/" , Darabonba::Encode::Encoder::percentEncode(CrowdId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCrowdResponse>();
}

/**
 * @summary Updates a crowd\\"s information, such as its name and description.
 *
 * @param request UpdateCrowdRequest
 * @return UpdateCrowdResponse
 */
UpdateCrowdResponse Client::updateCrowd(const string &CrowdId, const UpdateCrowdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateCrowdWithOptions(CrowdId, request, headers, runtime);
}

/**
 * @summary Updates the configuration of a specified data diagnosis task.
 *
 * @description ## Request
 * This API updates the configuration of an existing data diagnosis task, including the instance ID, task name, task type, and specific configuration content. Provide the `DataDiagnosisId` in the request path to identify the task to update. You must also specify the `Config` parameter based on the task `Type`. For periodic runs, set the execution time in the `CycleTime` field. If a periodic run is not required, omit this field.
 * ## Usage notes
 * - `DataDiagnosisId` is a required path parameter that uniquely identifies a data diagnosis task.
 * - The structure of the `Config` field varies depending on the value of `Type`. Refer to the examples in this document for configuration details.
 * - To disable periodic runs, omit the `CycleTime` field.
 * - When updating a task for two-table join analysis (`JoinTables`), provide the information for the left and right tables, including `LeftTableMetaId` and `RightTableMetaId`.
 * - The `InstanceId`, `Name`, and `Type` parameters are required for all types of data diagnosis tasks.
 *
 * @param request UpdateDataDiagnosisRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataDiagnosisResponse
 */
UpdateDataDiagnosisResponse Client::updateDataDiagnosisWithOptions(const string &DataDiagnosisId, const UpdateDataDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
  }

  if (!!request.hasCycleTime()) {
    body["CycleTime"] = request.getCycleTime();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLeftTableMetaId()) {
    body["LeftTableMetaId"] = request.getLeftTableMetaId();
  }

  if (!!request.hasLeftTablePartitionField()) {
    body["LeftTablePartitionField"] = request.getLeftTablePartitionField();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPartitionField()) {
    body["PartitionField"] = request.getPartitionField();
  }

  if (!!request.hasRightTableMetaId()) {
    body["RightTableMetaId"] = request.getRightTableMetaId();
  }

  if (!!request.hasRightTablePartitionField()) {
    body["RightTablePartitionField"] = request.getRightTablePartitionField();
  }

  if (!!request.hasTableMetaId()) {
    body["TableMetaId"] = request.getTableMetaId();
  }

  if (!!request.hasTopNQuantity()) {
    body["TopNQuantity"] = request.getTopNQuantity();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDataDiagnosis"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datadiagnoses/" , Darabonba::Encode::Encoder::percentEncode(DataDiagnosisId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataDiagnosisResponse>();
}

/**
 * @summary Updates the configuration of a specified data diagnosis task.
 *
 * @description ## Request
 * This API updates the configuration of an existing data diagnosis task, including the instance ID, task name, task type, and specific configuration content. Provide the `DataDiagnosisId` in the request path to identify the task to update. You must also specify the `Config` parameter based on the task `Type`. For periodic runs, set the execution time in the `CycleTime` field. If a periodic run is not required, omit this field.
 * ## Usage notes
 * - `DataDiagnosisId` is a required path parameter that uniquely identifies a data diagnosis task.
 * - The structure of the `Config` field varies depending on the value of `Type`. Refer to the examples in this document for configuration details.
 * - To disable periodic runs, omit the `CycleTime` field.
 * - When updating a task for two-table join analysis (`JoinTables`), provide the information for the left and right tables, including `LeftTableMetaId` and `RightTableMetaId`.
 * - The `InstanceId`, `Name`, and `Type` parameters are required for all types of data diagnosis tasks.
 *
 * @param request UpdateDataDiagnosisRequest
 * @return UpdateDataDiagnosisResponse
 */
UpdateDataDiagnosisResponse Client::updateDataDiagnosis(const string &DataDiagnosisId, const UpdateDataDiagnosisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateDataDiagnosisWithOptions(DataDiagnosisId, request, headers, runtime);
}

/**
 * @summary Updates an engine configuration.
 *
 * @param request UpdateEngineConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEngineConfigResponse
 */
UpdateEngineConfigResponse Client::updateEngineConfigWithOptions(const string &EngineConfigId, const UpdateEngineConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfigValue()) {
    body["ConfigValue"] = request.getConfigValue();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateEngineConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/engineconfigs/" , Darabonba::Encode::Encoder::percentEncode(EngineConfigId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEngineConfigResponse>();
}

/**
 * @summary Updates an engine configuration.
 *
 * @param request UpdateEngineConfigRequest
 * @return UpdateEngineConfigResponse
 */
UpdateEngineConfigResponse Client::updateEngineConfig(const string &EngineConfigId, const UpdateEngineConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateEngineConfigWithOptions(EngineConfigId, request, headers, runtime);
}

/**
 * @summary Updates the properties of a specified experiment, such as its name.
 *
 * @param request UpdateExperimentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateExperimentResponse
 */
UpdateExperimentResponse Client::updateExperimentWithOptions(const string &ExperimentId, const UpdateExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
  }

  if (!!request.hasDebugCrowdId()) {
    body["DebugCrowdId"] = request.getDebugCrowdId();
  }

  if (!!request.hasDebugUsers()) {
    body["DebugUsers"] = request.getDebugUsers();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasFlowPercent()) {
    body["FlowPercent"] = request.getFlowPercent();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateExperiment"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments/" , Darabonba::Encode::Encoder::percentEncode(ExperimentId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateExperimentResponse>();
}

/**
 * @summary Updates the properties of a specified experiment, such as its name.
 *
 * @param request UpdateExperimentRequest
 * @return UpdateExperimentResponse
 */
UpdateExperimentResponse Client::updateExperiment(const string &ExperimentId, const UpdateExperimentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateExperimentWithOptions(ExperimentId, request, headers, runtime);
}

/**
 * @summary Updates information for a specified experiment group, such as its name and description.
 *
 * @param request UpdateExperimentGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateExperimentGroupResponse
 */
UpdateExperimentGroupResponse Client::updateExperimentGroupWithOptions(const string &ExperimentGroupId, const UpdateExperimentGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
  }

  if (!!request.hasCrowdId()) {
    body["CrowdId"] = request.getCrowdId();
  }

  if (!!request.hasCrowdTargetType()) {
    body["CrowdTargetType"] = request.getCrowdTargetType();
  }

  if (!!request.hasDebugCrowdId()) {
    body["DebugCrowdId"] = request.getDebugCrowdId();
  }

  if (!!request.hasDebugUsers()) {
    body["DebugUsers"] = request.getDebugUsers();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDistributionTimeDuration()) {
    body["DistributionTimeDuration"] = request.getDistributionTimeDuration();
  }

  if (!!request.hasDistributionType()) {
    body["DistributionType"] = request.getDistributionType();
  }

  if (!!request.hasFilter()) {
    body["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLayerId()) {
    body["LayerId"] = request.getLayerId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasNeedAA()) {
    body["NeedAA"] = request.getNeedAA();
  }

  if (!!request.hasRandomFlow()) {
    body["RandomFlow"] = request.getRandomFlow();
  }

  if (!!request.hasReservcedBuckets()) {
    body["ReservcedBuckets"] = request.getReservcedBuckets();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateExperimentGroup"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experimentgroups/" , Darabonba::Encode::Encoder::percentEncode(ExperimentGroupId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateExperimentGroupResponse>();
}

/**
 * @summary Updates information for a specified experiment group, such as its name and description.
 *
 * @param request UpdateExperimentGroupRequest
 * @return UpdateExperimentGroupResponse
 */
UpdateExperimentGroupResponse Client::updateExperimentGroup(const string &ExperimentGroupId, const UpdateExperimentGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateExperimentGroupWithOptions(ExperimentGroupId, request, headers, runtime);
}

/**
 * @summary Updates the configuration details of a feature consistency check task, such as the name.
 *
 * @description ## Operation description
 * This API operation allows you to update the configuration of an existing feature consistency check task. By providing new configuration parameters, you can modify multiple properties including the instance ID, name, and scene ID. Ensure that all required parameters are included in the request, and provide optional parameters as needed.
 * - **FeatureConsistencyCheckJobConfigId** is a path parameter that specifies the feature consistency check task to update.
 * - All other parameters are in the request body. Some are required (such as InstanceId and Name), and the rest are optional.
 * - The SampleRate value must be a floating-point number between 0 and 1, which indicates the sampling ratio.
 * - If you use FeatureStore-related features, make sure that you correctly set the IsUseFeatureStore flag and the related FeatureStore* fields.
 * - For network configuration parameters (such as VpcId and SwitchId), make sure that the values match your Alibaba Cloud environment.
 *
 * @param request UpdateFeatureConsistencyCheckJobConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFeatureConsistencyCheckJobConfigResponse
 */
UpdateFeatureConsistencyCheckJobConfigResponse Client::updateFeatureConsistencyCheckJobConfigWithOptions(const string &FeatureConsistencyCheckJobConfigId, const UpdateFeatureConsistencyCheckJobConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCompareFeature()) {
    body["CompareFeature"] = request.getCompareFeature();
  }

  if (!!request.hasDatasetId()) {
    body["DatasetId"] = request.getDatasetId();
  }

  if (!!request.hasDatasetMountPath()) {
    body["DatasetMountPath"] = request.getDatasetMountPath();
  }

  if (!!request.hasDatasetName()) {
    body["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasDatasetType()) {
    body["DatasetType"] = request.getDatasetType();
  }

  if (!!request.hasDatasetUri()) {
    body["DatasetUri"] = request.getDatasetUri();
  }

  if (!!request.hasDefaultRoute()) {
    body["DefaultRoute"] = request.getDefaultRoute();
  }

  if (!!request.hasEasServiceName()) {
    body["EasServiceName"] = request.getEasServiceName();
  }

  if (!!request.hasEasyRecPackagePath()) {
    body["EasyRecPackagePath"] = request.getEasyRecPackagePath();
  }

  if (!!request.hasEasyRecVersion()) {
    body["EasyRecVersion"] = request.getEasyRecVersion();
  }

  if (!!request.hasFeatureDisplayExclude()) {
    body["FeatureDisplayExclude"] = request.getFeatureDisplayExclude();
  }

  if (!!request.hasFeatureLandingResourceId()) {
    body["FeatureLandingResourceId"] = request.getFeatureLandingResourceId();
  }

  if (!!request.hasFeaturePriority()) {
    body["FeaturePriority"] = request.getFeaturePriority();
  }

  if (!!request.hasFeatureStoreItemId()) {
    body["FeatureStoreItemId"] = request.getFeatureStoreItemId();
  }

  if (!!request.hasFeatureStoreModelId()) {
    body["FeatureStoreModelId"] = request.getFeatureStoreModelId();
  }

  if (!!request.hasFeatureStoreProjectId()) {
    body["FeatureStoreProjectId"] = request.getFeatureStoreProjectId();
  }

  if (!!request.hasFeatureStoreProjectName()) {
    body["FeatureStoreProjectName"] = request.getFeatureStoreProjectName();
  }

  if (!!request.hasFeatureStoreSeqFeatureView()) {
    body["FeatureStoreSeqFeatureView"] = request.getFeatureStoreSeqFeatureView();
  }

  if (!!request.hasFeatureStoreUserId()) {
    body["FeatureStoreUserId"] = request.getFeatureStoreUserId();
  }

  if (!!request.hasFgJarVersion()) {
    body["FgJarVersion"] = request.getFgJarVersion();
  }

  if (!!request.hasFgJsonFileName()) {
    body["FgJsonFileName"] = request.getFgJsonFileName();
  }

  if (!!request.hasGenerateZip()) {
    body["GenerateZip"] = request.getGenerateZip();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsUseFeatureStore()) {
    body["IsUseFeatureStore"] = request.getIsUseFeatureStore();
  }

  if (!!request.hasItemIdField()) {
    body["ItemIdField"] = request.getItemIdField();
  }

  if (!!request.hasItemTable()) {
    body["ItemTable"] = request.getItemTable();
  }

  if (!!request.hasItemTablePartitionField()) {
    body["ItemTablePartitionField"] = request.getItemTablePartitionField();
  }

  if (!!request.hasItemTablePartitionFieldFormat()) {
    body["ItemTablePartitionFieldFormat"] = request.getItemTablePartitionFieldFormat();
  }

  if (!!request.hasMaxcomputeSchema()) {
    body["MaxcomputeSchema"] = request.getMaxcomputeSchema();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasOssResourceId()) {
    body["OssResourceId"] = request.getOssResourceId();
  }

  if (!!request.hasPredictWorkerCount()) {
    body["PredictWorkerCount"] = request.getPredictWorkerCount();
  }

  if (!!request.hasPredictWorkerCpu()) {
    body["PredictWorkerCpu"] = request.getPredictWorkerCpu();
  }

  if (!!request.hasPredictWorkerMemory()) {
    body["PredictWorkerMemory"] = request.getPredictWorkerMemory();
  }

  if (!!request.hasResourceConfig()) {
    body["ResourceConfig"] = request.getResourceConfig();
  }

  if (!!request.hasSampleRate()) {
    body["SampleRate"] = request.getSampleRate();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
  }

  if (!!request.hasSecurityGroupId()) {
    body["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasServiceId()) {
    body["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasSwitchId()) {
    body["SwitchId"] = request.getSwitchId();
  }

  if (!!request.hasUserIdField()) {
    body["UserIdField"] = request.getUserIdField();
  }

  if (!!request.hasUserTable()) {
    body["UserTable"] = request.getUserTable();
  }

  if (!!request.hasUserTablePartitionField()) {
    body["UserTablePartitionField"] = request.getUserTablePartitionField();
  }

  if (!!request.hasUserTablePartitionFieldFormat()) {
    body["UserTablePartitionFieldFormat"] = request.getUserTablePartitionFieldFormat();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.getVpcId();
  }

  if (!!request.hasWorkflowName()) {
    body["WorkflowName"] = request.getWorkflowName();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateFeatureConsistencyCheckJobConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/featureconsistencycheck/jobconfigs/" , Darabonba::Encode::Encoder::percentEncode(FeatureConsistencyCheckJobConfigId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFeatureConsistencyCheckJobConfigResponse>();
}

/**
 * @summary Updates the configuration details of a feature consistency check task, such as the name.
 *
 * @description ## Operation description
 * This API operation allows you to update the configuration of an existing feature consistency check task. By providing new configuration parameters, you can modify multiple properties including the instance ID, name, and scene ID. Ensure that all required parameters are included in the request, and provide optional parameters as needed.
 * - **FeatureConsistencyCheckJobConfigId** is a path parameter that specifies the feature consistency check task to update.
 * - All other parameters are in the request body. Some are required (such as InstanceId and Name), and the rest are optional.
 * - The SampleRate value must be a floating-point number between 0 and 1, which indicates the sampling ratio.
 * - If you use FeatureStore-related features, make sure that you correctly set the IsUseFeatureStore flag and the related FeatureStore* fields.
 * - For network configuration parameters (such as VpcId and SwitchId), make sure that the values match your Alibaba Cloud environment.
 *
 * @param request UpdateFeatureConsistencyCheckJobConfigRequest
 * @return UpdateFeatureConsistencyCheckJobConfigResponse
 */
UpdateFeatureConsistencyCheckJobConfigResponse Client::updateFeatureConsistencyCheckJobConfig(const string &FeatureConsistencyCheckJobConfigId, const UpdateFeatureConsistencyCheckJobConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateFeatureConsistencyCheckJobConfigWithOptions(FeatureConsistencyCheckJobConfigId, request, headers, runtime);
}

/**
 * @summary Updates a specified resource for a specified instance.
 *
 * @param request UpdateInstanceResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceResourceResponse
 */
UpdateInstanceResourceResponse Client::updateInstanceResourceWithOptions(const string &InstanceId, const string &ResourceId, const UpdateInstanceResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
  }

  if (!!request.hasUri()) {
    body["Uri"] = request.getUri();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateInstanceResource"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/resources/" , Darabonba::Encode::Encoder::percentEncode(ResourceId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceResourceResponse>();
}

/**
 * @summary Updates a specified resource for a specified instance.
 *
 * @param request UpdateInstanceResourceRequest
 * @return UpdateInstanceResourceResponse
 */
UpdateInstanceResourceResponse Client::updateInstanceResource(const string &InstanceId, const string &ResourceId, const UpdateInstanceResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateInstanceResourceWithOptions(InstanceId, ResourceId, request, headers, runtime);
}

/**
 * @summary Updates a laboratory\\"s information, such as its name.
 *
 * @param request UpdateLaboratoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLaboratoryResponse
 */
UpdateLaboratoryResponse Client::updateLaboratoryWithOptions(const string &LaboratoryId, const UpdateLaboratoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBucketCount()) {
    body["BucketCount"] = request.getBucketCount();
  }

  if (!!request.hasBucketType()) {
    body["BucketType"] = request.getBucketType();
  }

  if (!!request.hasBuckets()) {
    body["Buckets"] = request.getBuckets();
  }

  if (!!request.hasDebugCrowdId()) {
    body["DebugCrowdId"] = request.getDebugCrowdId();
  }

  if (!!request.hasDebugUsers()) {
    body["DebugUsers"] = request.getDebugUsers();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasFilter()) {
    body["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateLaboratory"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/laboratories/" , Darabonba::Encode::Encoder::percentEncode(LaboratoryId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLaboratoryResponse>();
}

/**
 * @summary Updates a laboratory\\"s information, such as its name.
 *
 * @param request UpdateLaboratoryRequest
 * @return UpdateLaboratoryResponse
 */
UpdateLaboratoryResponse Client::updateLaboratory(const string &LaboratoryId, const UpdateLaboratoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateLaboratoryWithOptions(LaboratoryId, request, headers, runtime);
}

/**
 * @summary Updates the name and description of a specified layer.
 *
 * @param request UpdateLayerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLayerResponse
 */
UpdateLayerResponse Client::updateLayerWithOptions(const string &LayerId, const UpdateLayerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateLayer"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/layers/" , Darabonba::Encode::Encoder::percentEncode(LayerId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLayerResponse>();
}

/**
 * @summary Updates the name and description of a specified layer.
 *
 * @param request UpdateLayerRequest
 * @return UpdateLayerResponse
 */
UpdateLayerResponse Client::updateLayer(const string &LayerId, const UpdateLayerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateLayerWithOptions(LayerId, request, headers, runtime);
}

/**
 * @summary Updates information for a specified parameter, such as its value.
 *
 * @param request UpdateParamRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateParamResponse
 */
UpdateParamResponse Client::updateParamWithOptions(const string &ParamId, const UpdateParamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasValue()) {
    body["Value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateParam"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/params/" , Darabonba::Encode::Encoder::percentEncode(ParamId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateParamResponse>();
}

/**
 * @summary Updates information for a specified parameter, such as its value.
 *
 * @param request UpdateParamRequest
 * @return UpdateParamResponse
 */
UpdateParamResponse Client::updateParam(const string &ParamId, const UpdateParamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateParamWithOptions(ParamId, request, headers, runtime);
}

/**
 * @summary Updates the recall management configuration, including the instance ID, password, and network configuration.
 *
 * @description ## Request
 * - `InstanceId` is required. It specifies the instance to update.
 * - `Password` and `NetworkConfigs` are optional.
 * - Use `NetworkConfigs` to define the network by specifying the Virtual Private Cloud (VPC) ID (`VpcId`) and mapping availability zones to VSwitch IDs (`VswitchIds`).
 * - Note: Ensure that sensitive information, such as the password, is transmitted securely.
 *
 * @param request UpdateRecallManagementConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRecallManagementConfigResponse
 */
UpdateRecallManagementConfigResponse Client::updateRecallManagementConfigWithOptions(const UpdateRecallManagementConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkConfigs()) {
    body["NetworkConfigs"] = request.getNetworkConfigs();
  }

  if (!!request.hasPassword()) {
    body["Password"] = request.getPassword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateRecallManagementConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementconfigs")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRecallManagementConfigResponse>();
}

/**
 * @summary Updates the recall management configuration, including the instance ID, password, and network configuration.
 *
 * @description ## Request
 * - `InstanceId` is required. It specifies the instance to update.
 * - `Password` and `NetworkConfigs` are optional.
 * - Use `NetworkConfigs` to define the network by specifying the Virtual Private Cloud (VPC) ID (`VpcId`) and mapping availability zones to VSwitch IDs (`VswitchIds`).
 * - Note: Ensure that sensitive information, such as the password, is transmitted securely.
 *
 * @param request UpdateRecallManagementConfigRequest
 * @return UpdateRecallManagementConfigResponse
 */
UpdateRecallManagementConfigResponse Client::updateRecallManagementConfig(const UpdateRecallManagementConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateRecallManagementConfigWithOptions(request, headers, runtime);
}

/**
 * @summary Updates the instance ID and description of a specified recall management service.
 *
 * @description ## Request description
 * This operation updates the instance ID and description of a specific recall management service. Make sure to specify the `InstanceId` and `Description` fields in the request body.
 * - **RecallManagementServiceId**: The unique identifier of the recall management service.
 * - **InstanceId**: The instance ID to associate with this recall management service.
 * - **Description**: A new description for the recall management service.
 * Note: You must provide all required parameters, or the update may fail.
 *
 * @param request UpdateRecallManagementServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRecallManagementServiceResponse
 */
UpdateRecallManagementServiceResponse Client::updateRecallManagementServiceWithOptions(const string &RecallManagementServiceId, const UpdateRecallManagementServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateRecallManagementService"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementservices/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRecallManagementServiceResponse>();
}

/**
 * @summary Updates the instance ID and description of a specified recall management service.
 *
 * @description ## Request description
 * This operation updates the instance ID and description of a specific recall management service. Make sure to specify the `InstanceId` and `Description` fields in the request body.
 * - **RecallManagementServiceId**: The unique identifier of the recall management service.
 * - **InstanceId**: The instance ID to associate with this recall management service.
 * - **Description**: A new description for the recall management service.
 * Note: You must provide all required parameters, or the update may fail.
 *
 * @param request UpdateRecallManagementServiceRequest
 * @return UpdateRecallManagementServiceResponse
 */
UpdateRecallManagementServiceResponse Client::updateRecallManagementService(const string &RecallManagementServiceId, const UpdateRecallManagementServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateRecallManagementServiceWithOptions(RecallManagementServiceId, request, headers, runtime);
}

/**
 * @summary Updates the configuration of a specific Recall Management Service version.
 *
 * @description ## Request
 * This API updates the recall and merge configurations for a specific recall management service version. Your request must include the correct `InstanceId` and the configurations to update. Refer to the parameter descriptions for details on required parameters.
 *
 * @param request UpdateRecallManagementServiceVersionConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRecallManagementServiceVersionConfigResponse
 */
UpdateRecallManagementServiceVersionConfigResponse Client::updateRecallManagementServiceVersionConfigWithOptions(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const string &RecallManagementServiceVersionConfigId, const UpdateRecallManagementServiceVersionConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfigType()) {
    body["ConfigType"] = request.getConfigType();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMergeConfig()) {
    body["MergeConfig"] = request.getMergeConfig();
  }

  if (!!request.hasRecallConfig()) {
    body["RecallConfig"] = request.getRecallConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateRecallManagementServiceVersionConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementservices/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceId) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceVersionId) , "/configs/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceVersionConfigId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRecallManagementServiceVersionConfigResponse>();
}

/**
 * @summary Updates the configuration of a specific Recall Management Service version.
 *
 * @description ## Request
 * This API updates the recall and merge configurations for a specific recall management service version. Your request must include the correct `InstanceId` and the configurations to update. Refer to the parameter descriptions for details on required parameters.
 *
 * @param request UpdateRecallManagementServiceVersionConfigRequest
 * @return UpdateRecallManagementServiceVersionConfigResponse
 */
UpdateRecallManagementServiceVersionConfigResponse Client::updateRecallManagementServiceVersionConfig(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const string &RecallManagementServiceVersionConfigId, const UpdateRecallManagementServiceVersionConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateRecallManagementServiceVersionConfigWithOptions(RecallManagementServiceId, RecallManagementServiceVersionId, RecallManagementServiceVersionConfigId, request, headers, runtime);
}

/**
 * @summary Updates the configuration of a recall management table specified by its ID.
 *
 * @description ## Request details
 * - Updates the recall management table specified by `RecallManagementTableId`.
 * - You can enable fluctuation thresholds for the row count or data size and define the specific ranges for these thresholds.
 * - You can add or modify fields in the table, including their names, types, and attributes.
 * - The `InstanceId` parameter is required and identifies the specific instance.
 * - For vector-related fields, you can also specify the vector dimension and metric type.
 * - Note: Optional parameters in the request body selectively update the target table.
 *
 * @param request UpdateRecallManagementTableRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRecallManagementTableResponse
 */
UpdateRecallManagementTableResponse Client::updateRecallManagementTableWithOptions(const string &RecallManagementTableId, const UpdateRecallManagementTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnableDataSizeFluctuationThreshold()) {
    body["EnableDataSizeFluctuationThreshold"] = request.getEnableDataSizeFluctuationThreshold();
  }

  if (!!request.hasEnableRowCountFluctuationThreshold()) {
    body["EnableRowCountFluctuationThreshold"] = request.getEnableRowCountFluctuationThreshold();
  }

  if (!!request.hasFields()) {
    body["Fields"] = request.getFields();
  }

  if (!!request.hasIndexVersionId()) {
    body["IndexVersionId"] = request.getIndexVersionId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxDataSizeFluctuationThreshold()) {
    body["MaxDataSizeFluctuationThreshold"] = request.getMaxDataSizeFluctuationThreshold();
  }

  if (!!request.hasMaxRowCountFluctuationThreshold()) {
    body["MaxRowCountFluctuationThreshold"] = request.getMaxRowCountFluctuationThreshold();
  }

  if (!!request.hasMinDataSizeFluctuationThreshold()) {
    body["MinDataSizeFluctuationThreshold"] = request.getMinDataSizeFluctuationThreshold();
  }

  if (!!request.hasMinRowCountFluctuationThreshold()) {
    body["MinRowCountFluctuationThreshold"] = request.getMinRowCountFluctuationThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateRecallManagementTable"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementtables/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementTableId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRecallManagementTableResponse>();
}

/**
 * @summary Updates the configuration of a recall management table specified by its ID.
 *
 * @description ## Request details
 * - Updates the recall management table specified by `RecallManagementTableId`.
 * - You can enable fluctuation thresholds for the row count or data size and define the specific ranges for these thresholds.
 * - You can add or modify fields in the table, including their names, types, and attributes.
 * - The `InstanceId` parameter is required and identifies the specific instance.
 * - For vector-related fields, you can also specify the vector dimension and metric type.
 * - Note: Optional parameters in the request body selectively update the target table.
 *
 * @param request UpdateRecallManagementTableRequest
 * @return UpdateRecallManagementTableResponse
 */
UpdateRecallManagementTableResponse Client::updateRecallManagementTable(const string &RecallManagementTableId, const UpdateRecallManagementTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateRecallManagementTableWithOptions(RecallManagementTableId, request, headers, runtime);
}

/**
 * @summary 获取资源规则列表
 *
 * @param request UpdateResourceRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateResourceRuleResponse
 */
UpdateResourceRuleResponse Client::updateResourceRuleWithOptions(const string &ResourceRuleId, const UpdateResourceRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMetricOperationType()) {
    body["MetricOperationType"] = request.getMetricOperationType();
  }

  if (!!request.hasMetricPullInfo()) {
    body["MetricPullInfo"] = request.getMetricPullInfo();
  }

  if (!!request.hasMetricPullPeriod()) {
    body["MetricPullPeriod"] = request.getMetricPullPeriod();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasRuleComputingDefinition()) {
    body["RuleComputingDefinition"] = request.getRuleComputingDefinition();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateResourceRule"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resourcerules/" , Darabonba::Encode::Encoder::percentEncode(ResourceRuleId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateResourceRuleResponse>();
}

/**
 * @summary 获取资源规则列表
 *
 * @param request UpdateResourceRuleRequest
 * @return UpdateResourceRuleResponse
 */
UpdateResourceRuleResponse Client::updateResourceRule(const string &ResourceRuleId, const UpdateResourceRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateResourceRuleWithOptions(ResourceRuleId, request, headers, runtime);
}

/**
 * @summary 更新资源规则条目
 *
 * @param request UpdateResourceRuleItemRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateResourceRuleItemResponse
 */
UpdateResourceRuleItemResponse Client::updateResourceRuleItemWithOptions(const string &ResourceRuleId, const string &ResourceRuleItemId, const UpdateResourceRuleItemRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxValue()) {
    body["MaxValue"] = request.getMaxValue();
  }

  if (!!request.hasMinValue()) {
    body["MinValue"] = request.getMinValue();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasValue()) {
    body["Value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateResourceRuleItem"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resourcerules/" , Darabonba::Encode::Encoder::percentEncode(ResourceRuleId) , "/items/" , Darabonba::Encode::Encoder::percentEncode(ResourceRuleItemId))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateResourceRuleItemResponse>();
}

/**
 * @summary 更新资源规则条目
 *
 * @param request UpdateResourceRuleItemRequest
 * @return UpdateResourceRuleItemResponse
 */
UpdateResourceRuleItemResponse Client::updateResourceRuleItem(const string &ResourceRuleId, const string &ResourceRuleItemId, const UpdateResourceRuleItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateResourceRuleItemWithOptions(ResourceRuleId, ResourceRuleItemId, request, headers, runtime);
}

/**
 * @summary Updates information for a scene, such as its name and description.
 *
 * @param request UpdateSceneRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSceneResponse
 */
UpdateSceneResponse Client::updateSceneWithOptions(const string &SceneId, const UpdateSceneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasFlows()) {
    body["Flows"] = request.getFlows();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateScene"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/scenes/" , Darabonba::Encode::Encoder::percentEncode(SceneId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSceneResponse>();
}

/**
 * @summary Updates information for a scene, such as its name and description.
 *
 * @param request UpdateSceneRequest
 * @return UpdateSceneResponse
 */
UpdateSceneResponse Client::updateScene(const string &SceneId, const UpdateSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateSceneWithOptions(SceneId, request, headers, runtime);
}

/**
 * @summary Updates a data table.
 *
 * @param request UpdateTableMetaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTableMetaResponse
 */
UpdateTableMetaResponse Client::updateTableMetaWithOptions(const string &TableMetaId, const UpdateTableMetaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasFields()) {
    body["Fields"] = request.getFields();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasModule()) {
    body["Module"] = request.getModule();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasTableName()) {
    body["TableName"] = request.getTableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTableMeta"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/tablemetas/" , Darabonba::Encode::Encoder::percentEncode(TableMetaId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTableMetaResponse>();
}

/**
 * @summary Updates a data table.
 *
 * @param request UpdateTableMetaRequest
 * @return UpdateTableMetaResponse
 */
UpdateTableMetaResponse Client::updateTableMeta(const string &TableMetaId, const UpdateTableMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTableMetaWithOptions(TableMetaId, request, headers, runtime);
}

/**
 * @summary Updates the configuration of a traffic control target, including its control period, conditions, and value.
 *
 * @description ## Description
 * - Updates a traffic control target specified by its ID.
 * - `TrafficControlTargetId` is a path parameter that specifies the ID of the traffic control target to update.
 * - The `ItemConditionType` parameter specifies the format of the item condition, which can be either `Array` or `Expression`. Based on your selection, you must provide a value for either the `ItemConditionArray` or `ItemConditionExpress` parameter.
 * - If `NewProductRegulation` is set to `true`, the control rule applies to a new product.
 * - The `StatisPeriod` parameter specifies the statistics period. Valid values are `Daily` and `hourly`.
 * - Ensure that the time interval between `StartTime` and `EndTime` is reasonable and meets your business requirements.
 *
 * @param request UpdateTrafficControlTargetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTrafficControlTargetResponse
 */
UpdateTrafficControlTargetResponse Client::updateTrafficControlTargetWithOptions(const string &TrafficControlTargetId, const UpdateTrafficControlTargetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewParam3()) {
    query["new-param-3"] = request.getNewParam3();
  }

  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEvent()) {
    body["Event"] = request.getEvent();
  }

  if (!!request.hasItemConditionArray()) {
    body["ItemConditionArray"] = request.getItemConditionArray();
  }

  if (!!request.hasItemConditionExpress()) {
    body["ItemConditionExpress"] = request.getItemConditionExpress();
  }

  if (!!request.hasItemConditionType()) {
    body["ItemConditionType"] = request.getItemConditionType();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasNewProductRegulation()) {
    body["NewProductRegulation"] = request.getNewProductRegulation();
  }

  if (!!request.hasRecallName()) {
    body["RecallName"] = request.getRecallName();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatisPeriod()) {
    body["StatisPeriod"] = request.getStatisPeriod();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasToleranceValue()) {
    body["ToleranceValue"] = request.getToleranceValue();
  }

  if (!!request.hasValue()) {
    body["Value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTrafficControlTarget"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltargets/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTargetId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTrafficControlTargetResponse>();
}

/**
 * @summary Updates the configuration of a traffic control target, including its control period, conditions, and value.
 *
 * @description ## Description
 * - Updates a traffic control target specified by its ID.
 * - `TrafficControlTargetId` is a path parameter that specifies the ID of the traffic control target to update.
 * - The `ItemConditionType` parameter specifies the format of the item condition, which can be either `Array` or `Expression`. Based on your selection, you must provide a value for either the `ItemConditionArray` or `ItemConditionExpress` parameter.
 * - If `NewProductRegulation` is set to `true`, the control rule applies to a new product.
 * - The `StatisPeriod` parameter specifies the statistics period. Valid values are `Daily` and `hourly`.
 * - Ensure that the time interval between `StartTime` and `EndTime` is reasonable and meets your business requirements.
 *
 * @param request UpdateTrafficControlTargetRequest
 * @return UpdateTrafficControlTargetResponse
 */
UpdateTrafficControlTargetResponse Client::updateTrafficControlTarget(const string &TrafficControlTargetId, const UpdateTrafficControlTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTrafficControlTargetWithOptions(TrafficControlTargetId, request, headers, runtime);
}

/**
 * @summary Updates the configuration and target of a specified traffic control task.
 *
 * @description ## Usage notes
 * - Use this API to update an existing traffic control task.
 * - When `ExecutionTime` is set to `TimeRange`, you must also provide `StartTime` and `EndTime`.
 * - Each element in the `TrafficControlTargets` array is a traffic control target. Ensure each target\\"s time range, condition type, and other information are complete and valid.
 * - If you set `UserConditionType` or `ItemConditionType` to `Expression`, you must specify the corresponding expression field (for example, `UserConditionExpress`).
 * - `ServiceIds` and `EffectiveSceneIds` are optional parameters. If you include them, ensure the ID lists are correctly formatted.
 * - Ensure you complete all required fields to avoid a failed request.
 *
 * @param request UpdateTrafficControlTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTrafficControlTaskResponse
 */
UpdateTrafficControlTaskResponse Client::updateTrafficControlTaskWithOptions(const string &TrafficControlTaskId, const UpdateTrafficControlTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBehaviorTableMetaId()) {
    body["BehaviorTableMetaId"] = request.getBehaviorTableMetaId();
  }

  if (!!request.hasControlGranularity()) {
    body["ControlGranularity"] = request.getControlGranularity();
  }

  if (!!request.hasControlLogic()) {
    body["ControlLogic"] = request.getControlLogic();
  }

  if (!!request.hasControlType()) {
    body["ControlType"] = request.getControlType();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEffectiveSceneIds()) {
    body["EffectiveSceneIds"] = request.getEffectiveSceneIds();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasExecutionTime()) {
    body["ExecutionTime"] = request.getExecutionTime();
  }

  if (!!request.hasFlinkResourceId()) {
    body["FlinkResourceId"] = request.getFlinkResourceId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasItemConditionArray()) {
    body["ItemConditionArray"] = request.getItemConditionArray();
  }

  if (!!request.hasItemConditionExpress()) {
    body["ItemConditionExpress"] = request.getItemConditionExpress();
  }

  if (!!request.hasItemConditionType()) {
    body["ItemConditionType"] = request.getItemConditionType();
  }

  if (!!request.hasItemTableMetaId()) {
    body["ItemTableMetaId"] = request.getItemTableMetaId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPreExperimentIds()) {
    body["PreExperimentIds"] = request.getPreExperimentIds();
  }

  if (!!request.hasProdExperimentIds()) {
    body["ProdExperimentIds"] = request.getProdExperimentIds();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
  }

  if (!!request.hasServiceId()) {
    body["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasServiceIds()) {
    body["ServiceIds"] = request.getServiceIds();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatisBaeaviorConditionArray()) {
    body["StatisBaeaviorConditionArray"] = request.getStatisBaeaviorConditionArray();
  }

  if (!!request.hasStatisBehaviorConditionArray()) {
    body["StatisBehaviorConditionArray"] = request.getStatisBehaviorConditionArray();
  }

  if (!!request.hasStatisBehaviorConditionExpress()) {
    body["StatisBehaviorConditionExpress"] = request.getStatisBehaviorConditionExpress();
  }

  if (!!request.hasStatisBehaviorConditionType()) {
    body["StatisBehaviorConditionType"] = request.getStatisBehaviorConditionType();
  }

  if (!!request.hasTrafficControlTargets()) {
    body["TrafficControlTargets"] = request.getTrafficControlTargets();
  }

  if (!!request.hasUserConditionArray()) {
    body["UserConditionArray"] = request.getUserConditionArray();
  }

  if (!!request.hasUserConditionExpress()) {
    body["UserConditionExpress"] = request.getUserConditionExpress();
  }

  if (!!request.hasUserConditionType()) {
    body["UserConditionType"] = request.getUserConditionType();
  }

  if (!!request.hasUserTableMetaId()) {
    body["UserTableMetaId"] = request.getUserTableMetaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTrafficControlTask"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltasks/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTaskId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTrafficControlTaskResponse>();
}

/**
 * @summary Updates the configuration and target of a specified traffic control task.
 *
 * @description ## Usage notes
 * - Use this API to update an existing traffic control task.
 * - When `ExecutionTime` is set to `TimeRange`, you must also provide `StartTime` and `EndTime`.
 * - Each element in the `TrafficControlTargets` array is a traffic control target. Ensure each target\\"s time range, condition type, and other information are complete and valid.
 * - If you set `UserConditionType` or `ItemConditionType` to `Expression`, you must specify the corresponding expression field (for example, `UserConditionExpress`).
 * - `ServiceIds` and `EffectiveSceneIds` are optional parameters. If you include them, ensure the ID lists are correctly formatted.
 * - Ensure you complete all required fields to avoid a failed request.
 *
 * @param request UpdateTrafficControlTaskRequest
 * @return UpdateTrafficControlTaskResponse
 */
UpdateTrafficControlTaskResponse Client::updateTrafficControlTask(const string &TrafficControlTaskId, const UpdateTrafficControlTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTrafficControlTaskWithOptions(TrafficControlTaskId, request, headers, runtime);
}

/**
 * @summary Updates the traffic parameters for a specified traffic control task, including target traffic and actual traffic.
 *
 * @description ## Request
 * This API updates the traffic configuration for a specific traffic control task. The configuration includes the traffic control target ID, record time, target traffic, and overall traffic. Ensure that the provided`TrafficControlTaskId` is valid and within your permission scope. Additionally, each object in the`Traffics` array must contain the required fields.
 *
 * @param request UpdateTrafficControlTaskTrafficRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTrafficControlTaskTrafficResponse
 */
UpdateTrafficControlTaskTrafficResponse Client::updateTrafficControlTaskTrafficWithOptions(const string &TrafficControlTaskId, const UpdateTrafficControlTaskTrafficRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewParam3()) {
    query["new-param-3"] = request.getNewParam3();
  }

  json body = {};
  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTraffics()) {
    body["Traffics"] = request.getTraffics();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTrafficControlTaskTraffic"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltasks/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTaskId) , "/action/traffic")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTrafficControlTaskTrafficResponse>();
}

/**
 * @summary Updates the traffic parameters for a specified traffic control task, including target traffic and actual traffic.
 *
 * @description ## Request
 * This API updates the traffic configuration for a specific traffic control task. The configuration includes the traffic control target ID, record time, target traffic, and overall traffic. Ensure that the provided`TrafficControlTaskId` is valid and within your permission scope. Additionally, each object in the`Traffics` array must contain the required fields.
 *
 * @param request UpdateTrafficControlTaskTrafficRequest
 * @return UpdateTrafficControlTaskTrafficResponse
 */
UpdateTrafficControlTaskTrafficResponse Client::updateTrafficControlTaskTraffic(const string &TrafficControlTaskId, const UpdateTrafficControlTaskTrafficRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTrafficControlTaskTrafficWithOptions(TrafficControlTaskId, request, headers, runtime);
}

/**
 * @summary 上传数据
 *
 * @param request UploadRecommendationDataRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadRecommendationDataResponse
 */
UploadRecommendationDataResponse Client::uploadRecommendationDataWithOptions(const UploadRecommendationDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasDataType()) {
    body["DataType"] = request.getDataType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UploadRecommendationData"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recommendationdata/action/upload")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadRecommendationDataResponse>();
}

/**
 * @summary 上传数据
 *
 * @param request UploadRecommendationDataRequest
 * @return UploadRecommendationDataResponse
 */
UploadRecommendationDataResponse Client::uploadRecommendationData(const UploadRecommendationDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return uploadRecommendationDataWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace PaiRecService20221213