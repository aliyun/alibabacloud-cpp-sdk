#include <darabonba/Core.hpp>
#include <alibabacloud/Ada20260701.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/gateway/POP.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::Gateway;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using namespace AlibabaCloud::Ada20260701::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Ada20260701
{

AlibabaCloud::Ada20260701::Client::Client(Config &config): OpenApiClient(config){
  this->_productId = "Ada";
  shared_ptr<POP> gatewayClient = make_shared<POP>();
  this->_spi = gatewayClient;
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("ada", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Stops the execution of a session or cancels a specified turn.
 *
 * @description If Params._meta.promptId is provided, only that turn is canceled. If omitted, the current execution of the session is canceled. To avoid affecting other turns, use the actual promptId obtained from the response stream instead of the request Id.
 * A cancellation receipt does not mean the turn has ended, nor does it revoke external operations that have already occurred. After calling this operation, continue reading the original response stream or resume reading through LoadAgentSession to confirm the desired state of the target turn. Disconnecting the stream connection cannot replace a cancellation request.
 *
 * @param tmpReq CancelAgentSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelAgentSessionResponse
 */
CancelAgentSessionResponse Client::cancelAgentSessionWithOptions(const CancelAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CancelAgentSessionShrinkRequest request = CancelAgentSessionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "Params", "json"));
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasJsonrpc()) {
    body["Jsonrpc"] = request.getJsonrpc();
  }

  if (!!request.hasParamsShrink()) {
    body["Params"] = request.getParamsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CancelAgentSession"},
    {"version" , "2026-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelAgentSessionResponse>();
}

/**
 * @summary Stops the execution of a session or cancels a specified turn.
 *
 * @description If Params._meta.promptId is provided, only that turn is canceled. If omitted, the current execution of the session is canceled. To avoid affecting other turns, use the actual promptId obtained from the response stream instead of the request Id.
 * A cancellation receipt does not mean the turn has ended, nor does it revoke external operations that have already occurred. After calling this operation, continue reading the original response stream or resume reading through LoadAgentSession to confirm the desired state of the target turn. Disconnecting the stream connection cannot replace a cancellation request.
 *
 * @param request CancelAgentSessionRequest
 * @return CancelAgentSessionResponse
 */
CancelAgentSessionResponse Client::cancelAgentSession(const CancelAgentSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelAgentSessionWithOptions(request, runtime);
}

/**
 * @summary Creates an agent.
 *
 * @description - `Name` is the unique identifier of the agent within the current tenant. It can contain only letters, digits, underscores (_), and hyphens (-), and must be 1 to 128 characters in length. It cannot be modified after creation.
 * - Each agent can be bound to only one knowledge base.
 *
 * @param request CreateAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAgentResponse
 */
CreateAgentResponse Client::createAgentWithOptions(const CreateAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasKnowledgeBases()) {
    body["KnowledgeBases"] = request.getKnowledgeBases();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasSkills()) {
    body["Skills"] = request.getSkills();
  }

  if (!!request.hasSystemPrompt()) {
    body["SystemPrompt"] = request.getSystemPrompt();
  }

  if (!!request.hasTools()) {
    body["Tools"] = request.getTools();
  }

  if (!!request.hasVisibility()) {
    body["Visibility"] = request.getVisibility();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateAgent"},
    {"version" , "2026-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAgentResponse>();
}

/**
 * @summary Creates an agent.
 *
 * @description - `Name` is the unique identifier of the agent within the current tenant. It can contain only letters, digits, underscores (_), and hyphens (-), and must be 1 to 128 characters in length. It cannot be modified after creation.
 * - Each agent can be bound to only one knowledge base.
 *
 * @param request CreateAgentRequest
 * @return CreateAgentResponse
 */
CreateAgentResponse Client::createAgent(const CreateAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAgentWithOptions(request, runtime);
}

/**
 * @summary Creates a text session for a specified agent and obtains the session ID required for subsequent calls.
 *
 * @description Before calling this operation, obtain the name of an agent accessible to the current identity. After the session is created, save `JsonRpcResponse.result.sessionId` and use it as `Params.sessionId` for subsequent operations such as `PromptAgentSession` and `LoadAgentSession`.
 * You can set the approval mode during creation. If omitted, the default value is `default`. The availability of `yolo` depends on the target agent. If it is not supported, an error is returned. This mode does not change the caller\\"s permissions or replace business Q&A. To retry the same creation request, reuse the same `clientToken` and the same business parameters.
 *
 * @param tmpReq CreateAgentSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAgentSessionResponse
 */
CreateAgentSessionResponse Client::createAgentSessionWithOptions(const CreateAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAgentSessionShrinkRequest request = CreateAgentSessionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "Params", "json"));
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasJsonrpc()) {
    body["Jsonrpc"] = request.getJsonrpc();
  }

  if (!!request.hasParamsShrink()) {
    body["Params"] = request.getParamsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateAgentSession"},
    {"version" , "2026-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAgentSessionResponse>();
}

/**
 * @summary Creates a text session for a specified agent and obtains the session ID required for subsequent calls.
 *
 * @description Before calling this operation, obtain the name of an agent accessible to the current identity. After the session is created, save `JsonRpcResponse.result.sessionId` and use it as `Params.sessionId` for subsequent operations such as `PromptAgentSession` and `LoadAgentSession`.
 * You can set the approval mode during creation. If omitted, the default value is `default`. The availability of `yolo` depends on the target agent. If it is not supported, an error is returned. This mode does not change the caller\\"s permissions or replace business Q&A. To retry the same creation request, reuse the same `clientToken` and the same business parameters.
 *
 * @param request CreateAgentSessionRequest
 * @return CreateAgentSessionResponse
 */
CreateAgentSessionResponse Client::createAgentSession(const CreateAgentSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAgentSessionWithOptions(request, runtime);
}

/**
 * @summary Creates a skill.
 *
 * @description - Creation rules:
 *   - Name must be unique within the current tenant and cannot be the same as an official skill.
 *   - Description and Metadata are required. Metadata must and can only contain one valid content source. Different sources cannot be mixed.
 *   - After the skill is created, you can modify it by calling UpdateSkill.
 * - Content sources:
 *   - skillMd: Directly enter the Markdown body. No YAML front matter is required. Use Name and Description for the name and description respectively.
 *   - transitId: Upload and confirm a ZIP file through Transit. The call sequence is as follows:
 *     1. Call CreateTransitUploadPolicy and pass in FileShowName to obtain TransitId, FilePath, and PolicyInfo.
 *     2. Use PolicyInfo and FilePath to upload the ZIP file to Object Storage Service (OSS).
 *     3. Call ConfirmTransitUpload and pass in TransitId. Proceed with creation only if Confirmed=true is returned.
 *     4. Call CreateSkill and pass the confirmed TransitId in Metadata.transitId.
 *   - bundleUrl: Pass in a public HTTPS ZIP direct link. The platform downloads and saves it as an artifact. The original URL is not saved or echoed.
 *
 * @param request CreateSkillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSkillResponse
 */
CreateSkillResponse Client::createSkillWithOptions(const CreateSkillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasMetadata()) {
    body["Metadata"] = request.getMetadata();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasVisibility()) {
    body["Visibility"] = request.getVisibility();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateSkill"},
    {"version" , "2026-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSkillResponse>();
}

/**
 * @summary Creates a skill.
 *
 * @description - Creation rules:
 *   - Name must be unique within the current tenant and cannot be the same as an official skill.
 *   - Description and Metadata are required. Metadata must and can only contain one valid content source. Different sources cannot be mixed.
 *   - After the skill is created, you can modify it by calling UpdateSkill.
 * - Content sources:
 *   - skillMd: Directly enter the Markdown body. No YAML front matter is required. Use Name and Description for the name and description respectively.
 *   - transitId: Upload and confirm a ZIP file through Transit. The call sequence is as follows:
 *     1. Call CreateTransitUploadPolicy and pass in FileShowName to obtain TransitId, FilePath, and PolicyInfo.
 *     2. Use PolicyInfo and FilePath to upload the ZIP file to Object Storage Service (OSS).
 *     3. Call ConfirmTransitUpload and pass in TransitId. Proceed with creation only if Confirmed=true is returned.
 *     4. Call CreateSkill and pass the confirmed TransitId in Metadata.transitId.
 *   - bundleUrl: Pass in a public HTTPS ZIP direct link. The platform downloads and saves it as an artifact. The original URL is not saved or echoed.
 *
 * @param request CreateSkillRequest
 * @return CreateSkillResponse
 */
CreateSkillResponse Client::createSkill(const CreateSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSkillWithOptions(request, runtime);
}

/**
 * @summary Generates credentials for direct file upload. Callers can use the returned upload policy to upload files directly to object storage.
 *
 * @description - `Network` can be set to `public` or `internal` to generate a public network or same-region internal network upload address, respectively. The default value is `public`.
 * - The maximum size of a single file is 50 MiB.
 * - `PolicyInfo` contains short-term upload authorization information and is only used for the current file upload. Do not log, permanently store, or forward it to other users.
 * - `ExpireMs` specifies the validity period of the current upload policy and Transit record in milliseconds, not an absolute timestamp. Both the default and maximum values are `604800000` (7 days), and the minimum value is `1000` (1 second). The validity period is rounded down to the nearest whole second. For example, 1500 milliseconds takes effect as 1 second.
 * - You can call `GetTransitMeta` to read `ExpireAt` and obtain the expiration time of the Transit record. Confirming the upload and querying do not extend the validity period of the record.
 *
 * @param request CreateTransitUploadPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTransitUploadPolicyResponse
 */
CreateTransitUploadPolicyResponse Client::createTransitUploadPolicyWithOptions(const CreateTransitUploadPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExpireMs()) {
    body["ExpireMs"] = request.getExpireMs();
  }

  if (!!request.hasFileShowName()) {
    body["FileShowName"] = request.getFileShowName();
  }

  if (!!request.hasNetwork()) {
    body["Network"] = request.getNetwork();
  }

  if (!!request.hasPathPrefix()) {
    body["PathPrefix"] = request.getPathPrefix();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateTransitUploadPolicy"},
    {"version" , "2026-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTransitUploadPolicyResponse>();
}

/**
 * @summary Generates credentials for direct file upload. Callers can use the returned upload policy to upload files directly to object storage.
 *
 * @description - `Network` can be set to `public` or `internal` to generate a public network or same-region internal network upload address, respectively. The default value is `public`.
 * - The maximum size of a single file is 50 MiB.
 * - `PolicyInfo` contains short-term upload authorization information and is only used for the current file upload. Do not log, permanently store, or forward it to other users.
 * - `ExpireMs` specifies the validity period of the current upload policy and Transit record in milliseconds, not an absolute timestamp. Both the default and maximum values are `604800000` (7 days), and the minimum value is `1000` (1 second). The validity period is rounded down to the nearest whole second. For example, 1500 milliseconds takes effect as 1 second.
 * - You can call `GetTransitMeta` to read `ExpireAt` and obtain the expiration time of the Transit record. Confirming the upload and querying do not extend the validity period of the record.
 *
 * @param request CreateTransitUploadPolicyRequest
 * @return CreateTransitUploadPolicyResponse
 */
CreateTransitUploadPolicyResponse Client::createTransitUploadPolicy(const CreateTransitUploadPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTransitUploadPolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified agent.
 *
 * @description - Creators can delete the agents they created.
 * - After deletion, the agent can no longer be queried, updated, or executed.
 *
 * @param request DeleteAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAgentResponse
 */
DeleteAgentResponse Client::deleteAgentWithOptions(const DeleteAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAgent"},
    {"version" , "2026-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAgentResponse>();
}

/**
 * @summary Deletes a specified agent.
 *
 * @description - Creators can delete the agents they created.
 * - After deletion, the agent can no longer be queried, updated, or executed.
 *
 * @param request DeleteAgentRequest
 * @return DeleteAgentResponse
 */
DeleteAgentResponse Client::deleteAgent(const DeleteAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAgentWithOptions(request, runtime);
}

/**
 * @summary Deletes an idle session that is no longer needed.
 *
 * @description A session cannot be directly deleted while it is being executed or waiting for interaction. You must first call `CancelAgentSession` and continue reading the original response stream, or resume reading through `LoadAgentSession`. Delete the session only after confirming that the target turn has ended.
 * A successful deletion indicates that the session deletion operation is complete, but it does not mean that external operations that have already occurred are rolled back. Deleting a session does not delete the associated agent or assistant.
 *
 * @param tmpReq DeleteAgentSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAgentSessionResponse
 */
DeleteAgentSessionResponse Client::deleteAgentSessionWithOptions(const DeleteAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteAgentSessionShrinkRequest request = DeleteAgentSessionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "Params", "json"));
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasJsonrpc()) {
    body["Jsonrpc"] = request.getJsonrpc();
  }

  if (!!request.hasParamsShrink()) {
    body["Params"] = request.getParamsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteAgentSession"},
    {"version" , "2026-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAgentSessionResponse>();
}

/**
 * @summary Deletes an idle session that is no longer needed.
 *
 * @description A session cannot be directly deleted while it is being executed or waiting for interaction. You must first call `CancelAgentSession` and continue reading the original response stream, or resume reading through `LoadAgentSession`. Delete the session only after confirming that the target turn has ended.
 * A successful deletion indicates that the session deletion operation is complete, but it does not mean that external operations that have already occurred are rolled back. Deleting a session does not delete the associated agent or assistant.
 *
 * @param request DeleteAgentSessionRequest
 * @return DeleteAgentSessionResponse
 */
DeleteAgentSessionResponse Client::deleteAgentSession(const DeleteAgentSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAgentSessionWithOptions(request, runtime);
}

/**
 * @summary Soft-deletes a skill that the caller has permission to modify.
 *
 * @description - Deletion permissions:
 *   - Only custom skills that the caller has permission to modify can be deleted.
 *   - The caller must be the creator of the skill or the root account of the tenant that has permission to manage the tenant-level skill. Official skills cannot be deleted.
 * - Deletion results:
 *   - Deletion is performed as a soft delete. After a successful deletion, `GetSkill` and `ListSkills` no longer return the skill, and you can create a new skill with the same name.
 *   - Recovery is not supported. You cannot repeatedly delete a skill or delete a non-existent skill.
 *
 * @param request DeleteSkillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSkillResponse
 */
DeleteSkillResponse Client::deleteSkillWithOptions(const DeleteSkillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSkill"},
    {"version" , "2026-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSkillResponse>();
}

/**
 * @summary Soft-deletes a skill that the caller has permission to modify.
 *
 * @description - Deletion permissions:
 *   - Only custom skills that the caller has permission to modify can be deleted.
 *   - The caller must be the creator of the skill or the root account of the tenant that has permission to manage the tenant-level skill. Official skills cannot be deleted.
 * - Deletion results:
 *   - Deletion is performed as a soft delete. After a successful deletion, `GetSkill` and `ListSkills` no longer return the skill, and you can create a new skill with the same name.
 *   - Recovery is not supported. You cannot repeatedly delete a skill or delete a non-existent skill.
 *
 * @param request DeleteSkillRequest
 * @return DeleteSkillResponse
 */
DeleteSkillResponse Client::deleteSkill(const DeleteSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSkillWithOptions(request, runtime);
}

/**
 * @summary Queries agents visible to the current identity by name.
 *
 * @description - You can retrieve agents created by yourself, agents visible within the current tenant, and official agents provided by the platform.
 *
 * @param request GetAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentResponse
 */
GetAgentResponse Client::getAgentWithOptions(const GetAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgent"},
    {"version" , "2026-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentResponse>();
}

/**
 * @summary Queries agents visible to the current identity by name.
 *
 * @description - You can retrieve agents created by yourself, agents visible within the current tenant, and official agents provided by the platform.
 *
 * @param request GetAgentRequest
 * @return GetAgentResponse
 */
GetAgentResponse Client::getAgent(const GetAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgentWithOptions(request, runtime);
}

/**
 * @summary Queries session details such as the title, associated agent, and core timestamps based on the session ID.
 *
 * @description For `Params.sessionId`, use the session ID returned by `CreateAgentSession` or `ListAgentSessions`. The business result is located in `JsonRpcResponse.result`, which is of type `any`. The fields within the object retain their actual casing.
 * This operation provides a session summary and does not return the complete message history, pending interactions, or the final state of real-time turns. For history and disconnection recovery, use `LoadAgentSession`. For approvals and Q&A, read from the streaming notifications of `PromptAgentSession` or `LoadAgentSession`.
 *
 * @param tmpReq GetAgentSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentSessionResponse
 */
GetAgentSessionResponse Client::getAgentSessionWithOptions(const GetAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetAgentSessionShrinkRequest request = GetAgentSessionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "Params", "json"));
  }

  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasJsonrpc()) {
    query["Jsonrpc"] = request.getJsonrpc();
  }

  if (!!request.hasParamsShrink()) {
    query["Params"] = request.getParamsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgentSession"},
    {"version" , "2026-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentSessionResponse>();
}

/**
 * @summary Queries session details such as the title, associated agent, and core timestamps based on the session ID.
 *
 * @description For `Params.sessionId`, use the session ID returned by `CreateAgentSession` or `ListAgentSessions`. The business result is located in `JsonRpcResponse.result`, which is of type `any`. The fields within the object retain their actual casing.
 * This operation provides a session summary and does not return the complete message history, pending interactions, or the final state of real-time turns. For history and disconnection recovery, use `LoadAgentSession`. For approvals and Q&A, read from the streaming notifications of `PromptAgentSession` or `LoadAgentSession`.
 *
 * @param request GetAgentSessionRequest
 * @return GetAgentSessionResponse
 */
GetAgentSessionResponse Client::getAgentSession(const GetAgentSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgentSessionWithOptions(request, runtime);
}

/**
 * @summary Queries the current model and thinking level configuration used by a session.
 *
 * @description - Use the `sessionId` returned by CreateAgentSession to query the configuration. This operation does not send messages or replay session history.
 * - Read the current model from `JsonRpcResponse.result.modelId`. To modify it, call SetAgentSessionModel.
 * - The thinking level is an optional advanced configuration. The supported levels and current values are subject to the actual return values of this operation, which may vary across different agents, models, and sessions.
 *
 * @param tmpReq GetAgentSessionModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentSessionModelResponse
 */
GetAgentSessionModelResponse Client::getAgentSessionModelWithOptions(const GetAgentSessionModelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetAgentSessionModelShrinkRequest request = GetAgentSessionModelShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "Params", "json"));
  }

  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasJsonrpc()) {
    query["Jsonrpc"] = request.getJsonrpc();
  }

  if (!!request.hasParamsShrink()) {
    query["Params"] = request.getParamsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgentSessionModel"},
    {"version" , "2026-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentSessionModelResponse>();
}

/**
 * @summary Queries the current model and thinking level configuration used by a session.
 *
 * @description - Use the `sessionId` returned by CreateAgentSession to query the configuration. This operation does not send messages or replay session history.
 * - Read the current model from `JsonRpcResponse.result.modelId`. To modify it, call SetAgentSessionModel.
 * - The thinking level is an optional advanced configuration. The supported levels and current values are subject to the actual return values of this operation, which may vary across different agents, models, and sessions.
 *
 * @param request GetAgentSessionModelRequest
 * @return GetAgentSessionModelResponse
 */
GetAgentSessionModelResponse Client::getAgentSessionModel(const GetAgentSessionModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgentSessionModelWithOptions(request, runtime);
}

/**
 * @summary Queries the skills visible to the current caller by name.
 *
 * @description - Query target:
 *   - Queries by `Name`. Querying by `SkillId` is not supported.
 *   - Prioritizes returning skills with the same name that are visible to the caller under the current tenant. If no visible records are found, queries official skills with the same name.
 *   - If `SkillVersion` is omitted, the current skill is returned. This parameter is omitted by default.
 * - Download URL:
 *   - `Network` supports `public` and `internal`. If omitted, no download URL is generated.
 *   - If the skill has an accessible artifact, a temporary `DownloadUrl` and the corresponding `DownloadUrlNetwork` are returned.
 *   - If the artifact does not exist, access is denied, or URL generation fails, the skill query can still succeed, but the download URL-related fields may not be returned.
 *   - The original `bundleUrl` used during creation is not saved and is not returned by this API.
 *
 * @param request GetSkillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSkillResponse
 */
GetSkillResponse Client::getSkillWithOptions(const GetSkillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNetwork()) {
    query["Network"] = request.getNetwork();
  }

  if (!!request.hasSkillVersion()) {
    query["SkillVersion"] = request.getSkillVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSkill"},
    {"version" , "2026-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSkillResponse>();
}

/**
 * @summary Queries the skills visible to the current caller by name.
 *
 * @description - Query target:
 *   - Queries by `Name`. Querying by `SkillId` is not supported.
 *   - Prioritizes returning skills with the same name that are visible to the caller under the current tenant. If no visible records are found, queries official skills with the same name.
 *   - If `SkillVersion` is omitted, the current skill is returned. This parameter is omitted by default.
 * - Download URL:
 *   - `Network` supports `public` and `internal`. If omitted, no download URL is generated.
 *   - If the skill has an accessible artifact, a temporary `DownloadUrl` and the corresponding `DownloadUrlNetwork` are returned.
 *   - If the artifact does not exist, access is denied, or URL generation fails, the skill query can still succeed, but the download URL-related fields may not be returned.
 *   - The original `bundleUrl` used during creation is not saved and is not returned by this API.
 *
 * @param request GetSkillRequest
 * @return GetSkillResponse
 */
GetSkillResponse Client::getSkill(const GetSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSkillWithOptions(request, runtime);
}

/**
 * @summary Queries the metadata of a transit file, such as the upload status, file size, and expiration time, and retrieves a temporary download URL on demand.
 *
 * @description - Specify at least one of TransitId and FilePath. If both are provided, TransitId takes precedence.
 * - Use the TransitId returned by CreateTransitUploadPolicy for queries. TransitId is a temporary capability identifier in the file upload process. Do not forward it to irrelevant users.
 * - FilePath is the opaque object path returned by CreateTransitUploadPolicy. Callers must use it as is and must not parse, modify, or concatenate it.
 * - When querying by FilePath, an error is returned if the record does not exist or is inaccessible to the current caller.
 * - ExpireMs specifies the validity period of the download URL in milliseconds. The default value is 900000 (15 minutes). The validity period is rounded down to the nearest whole second. For example, 1500 milliseconds takes effect as 1 second.
 * - ExpireAt indicates the expiration time of the transit record, not the expiration time of the download URL. Querying, generating a download URL, and confirming an upload do not extend the validity period of the record.
 *
 * @param request GetTransitMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTransitMetaResponse
 */
GetTransitMetaResponse Client::getTransitMetaWithOptions(const GetTransitMetaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExpireMs()) {
    query["ExpireMs"] = request.getExpireMs();
  }

  if (!!request.hasFilePath()) {
    query["FilePath"] = request.getFilePath();
  }

  if (!!request.hasNetwork()) {
    query["Network"] = request.getNetwork();
  }

  if (!!request.hasTransitId()) {
    query["TransitId"] = request.getTransitId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTransitMeta"},
    {"version" , "2026-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTransitMetaResponse>();
}

/**
 * @summary Queries the metadata of a transit file, such as the upload status, file size, and expiration time, and retrieves a temporary download URL on demand.
 *
 * @description - Specify at least one of TransitId and FilePath. If both are provided, TransitId takes precedence.
 * - Use the TransitId returned by CreateTransitUploadPolicy for queries. TransitId is a temporary capability identifier in the file upload process. Do not forward it to irrelevant users.
 * - FilePath is the opaque object path returned by CreateTransitUploadPolicy. Callers must use it as is and must not parse, modify, or concatenate it.
 * - When querying by FilePath, an error is returned if the record does not exist or is inaccessible to the current caller.
 * - ExpireMs specifies the validity period of the download URL in milliseconds. The default value is 900000 (15 minutes). The validity period is rounded down to the nearest whole second. For example, 1500 milliseconds takes effect as 1 second.
 * - ExpireAt indicates the expiration time of the transit record, not the expiration time of the download URL. Querying, generating a download URL, and confirming an upload do not extend the validity period of the record.
 *
 * @param request GetTransitMetaRequest
 * @return GetTransitMetaResponse
 */
GetTransitMetaResponse Client::getTransitMeta(const GetTransitMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTransitMetaWithOptions(request, runtime);
}

/**
 * @summary Queries session summary by page, allowing the caller to select or resume existing sessions.
 *
 * @description You can filter sessions by agent name. Omit Params.NextToken on the first page. For subsequent queries, keep the filter conditions and page size unchanged, and pass the JsonRpcResponse.Result.NextToken returned from the previous page as is to Params.NextToken. Pagination ends when the token is not returned or is empty.
 * The list returns session summaries such as session ID, title, and time, but does not provide the final state of the turn execution. After selecting a session, you can use GetAgentSession to query details or LoadAgentSession to load history.
 * Params in the request, and JsonRpcResponse and Result in the response are explicit objects. The pagination field MaxResults is of type integer<int32>, and NextToken is of type string. SessionList retains the any type. For session summary fields, see the supplementary description.
 *
 * @param tmpReq ListAgentSessionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAgentSessionsResponse
 */
ListAgentSessionsResponse Client::listAgentSessionsWithOptions(const ListAgentSessionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAgentSessionsShrinkRequest request = ListAgentSessionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "Params", "json"));
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasJsonrpc()) {
    body["Jsonrpc"] = request.getJsonrpc();
  }

  if (!!request.hasParamsShrink()) {
    body["Params"] = request.getParamsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListAgentSessions"},
    {"version" , "2026-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAgentSessionsResponse>();
}

/**
 * @summary Queries session summary by page, allowing the caller to select or resume existing sessions.
 *
 * @description You can filter sessions by agent name. Omit Params.NextToken on the first page. For subsequent queries, keep the filter conditions and page size unchanged, and pass the JsonRpcResponse.Result.NextToken returned from the previous page as is to Params.NextToken. Pagination ends when the token is not returned or is empty.
 * The list returns session summaries such as session ID, title, and time, but does not provide the final state of the turn execution. After selecting a session, you can use GetAgentSession to query details or LoadAgentSession to load history.
 * Params in the request, and JsonRpcResponse and Result in the response are explicit objects. The pagination field MaxResults is of type integer<int32>, and NextToken is of type string. SessionList retains the any type. For session summary fields, see the supplementary description.
 *
 * @param request ListAgentSessionsRequest
 * @return ListAgentSessionsResponse
 */
ListAgentSessionsResponse Client::listAgentSessions(const ListAgentSessionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAgentSessionsWithOptions(request, runtime);
}

/**
 * @summary Performs a paging query for agents visible to the current identity.
 *
 * @description - By default, the official agents provided by the platform and the tenant agents visible to the current identity are returned.
 * - If `Scope` is set to `SYSTEM`, only official agents are queried. If `Scope` is set to `CUSTOM`, only custom agents are queried.
 * - Both cursor-based pagination and page number-based pagination are supported. When using cursor-based pagination, pass the `NextToken` value returned in the previous response to the next request as is, and keep the calling identity, filter conditions, and `MaxResults` unchanged.
 *
 * @param request ListAgentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAgentsResponse
 */
ListAgentsResponse Client::listAgentsWithOptions(const ListAgentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreatorId()) {
    query["CreatorId"] = request.getCreatorId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQ()) {
    query["Q"] = request.getQ();
  }

  if (!!request.hasRequiredRuntime()) {
    query["RequiredRuntime"] = request.getRequiredRuntime();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.getScope();
  }

  if (!!request.hasVisibility()) {
    query["Visibility"] = request.getVisibility();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAgents"},
    {"version" , "2026-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAgentsResponse>();
}

/**
 * @summary Performs a paging query for agents visible to the current identity.
 *
 * @description - By default, the official agents provided by the platform and the tenant agents visible to the current identity are returned.
 * - If `Scope` is set to `SYSTEM`, only official agents are queried. If `Scope` is set to `CUSTOM`, only custom agents are queried.
 * - Both cursor-based pagination and page number-based pagination are supported. When using cursor-based pagination, pass the `NextToken` value returned in the previous response to the next request as is, and keep the calling identity, filter conditions, and `MaxResults` unchanged.
 *
 * @param request ListAgentsRequest
 * @return ListAgentsResponse
 */
ListAgentsResponse Client::listAgents(const ListAgentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAgentsWithOptions(request, runtime);
}

/**
 * @summary Queries the text models visible to the current caller for selection when setting a session model.
 *
 * @description - For text sessions, pass `ModelType=text` and use `MaxResults` and `NextToken` for paging. The model identity is obtained from `Models[].Id` and passed as the `Params.modelId` for SetAgentSessionModel.
 * - The visibility of a model in the model catalog does not guarantee that the target session supports the model. After configuration, refer to the SetAgentSessionModel response or the GetAgentSessionModel query result.
 * - `ThinkingLevels` and `ThinkingLevel` are used for optional thinking level configurations and do not affect the integration flow when you only select a model.
 *
 * @param request ListModelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListModelsResponse
 */
ListModelsResponse Client::listModelsWithOptions(const ListModelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasModelType()) {
    query["ModelType"] = request.getModelType();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
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
    {"action" , "ListModels"},
    {"version" , "2026-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListModelsResponse>();
}

/**
 * @summary Queries the text models visible to the current caller for selection when setting a session model.
 *
 * @description - For text sessions, pass `ModelType=text` and use `MaxResults` and `NextToken` for paging. The model identity is obtained from `Models[].Id` and passed as the `Params.modelId` for SetAgentSessionModel.
 * - The visibility of a model in the model catalog does not guarantee that the target session supports the model. After configuration, refer to the SetAgentSessionModel response or the GetAgentSessionModel query result.
 * - `ThinkingLevels` and `ThinkingLevel` are used for optional thinking level configurations and do not affect the integration flow when you only select a model.
 *
 * @param request ListModelsRequest
 * @return ListModelsResponse
 */
ListModelsResponse Client::listModels(const ListModelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listModelsWithOptions(request, runtime);
}

/**
 * @summary Performs a paged query using paging for skills visible to the current invoker.
 *
 * @description - Query and filter: 
 *     - `Scope=SYSTEM` queries only official skills, and `Scope=CUSTOM` queries only custom skills. If omitted, both are queried.
 *     - Custom skills with `user` visibility are visible only to the creator, while skills with `tenant` visibility are visible to the current tenant.
 *     - You can filter by `CreatorId`, `Q`, and `Visibility`. `Q` performs a fuzzy match on the skill name or description.
 *     - Results are sorted by update time in descending order by default.
 * - Pagination: 
 *     - Cursor-based pagination uses `MaxResults` and `NextToken`. Do not pass `NextToken` for the first query. For subsequent pages, use the token from the previous response. When using `NextToken` for subsequent pages, `CreatorId`, `Q`, `Visibility`, `Scope`, and `MaxResults` must remain the same as the previous page. If you modify the query conditions, you must query from the first page again.
 *     - Page number-based pagination uses `PageNumber` and `PageSize`. If `MaxResults` is explicitly passed, cursor-based pagination takes precedence. If `NextToken` is passed, `PageNumber` is ignored.
 * - Response content: 
 *     - This operation returns only skill summaries and does not generate bundle download URLs. To obtain a download URL, call `GetSkill` and specify `Network`.
 *
 * @param request ListSkillsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSkillsResponse
 */
ListSkillsResponse Client::listSkillsWithOptions(const ListSkillsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreatorId()) {
    query["CreatorId"] = request.getCreatorId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQ()) {
    query["Q"] = request.getQ();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.getScope();
  }

  if (!!request.hasVisibility()) {
    query["Visibility"] = request.getVisibility();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSkills"},
    {"version" , "2026-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSkillsResponse>();
}

/**
 * @summary Performs a paged query using paging for skills visible to the current invoker.
 *
 * @description - Query and filter: 
 *     - `Scope=SYSTEM` queries only official skills, and `Scope=CUSTOM` queries only custom skills. If omitted, both are queried.
 *     - Custom skills with `user` visibility are visible only to the creator, while skills with `tenant` visibility are visible to the current tenant.
 *     - You can filter by `CreatorId`, `Q`, and `Visibility`. `Q` performs a fuzzy match on the skill name or description.
 *     - Results are sorted by update time in descending order by default.
 * - Pagination: 
 *     - Cursor-based pagination uses `MaxResults` and `NextToken`. Do not pass `NextToken` for the first query. For subsequent pages, use the token from the previous response. When using `NextToken` for subsequent pages, `CreatorId`, `Q`, `Visibility`, `Scope`, and `MaxResults` must remain the same as the previous page. If you modify the query conditions, you must query from the first page again.
 *     - Page number-based pagination uses `PageNumber` and `PageSize`. If `MaxResults` is explicitly passed, cursor-based pagination takes precedence. If `NextToken` is passed, `PageNumber` is ignored.
 * - Response content: 
 *     - This operation returns only skill summaries and does not generate bundle download URLs. To obtain a download URL, call `GetSkill` and specify `Network`.
 *
 * @param request ListSkillsRequest
 * @return ListSkillsResponse
 */
ListSkillsResponse Client::listSkills(const ListSkillsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSkillsWithOptions(request, runtime);
}

/**
 * @summary Loads session history, receives subsequent output, or resumes Server-Sent Events (SSE) from a saved read position.
 *
 * @description - A normal load requires only the session ID. It returns the configuration, history, and output to be continuously received. The response is SSE, not a standard JSON message list.
 * - When resuming from a disconnection, pass back the actually received cursor, event epoch, and turn ID. History and increments may be returned simultaneously. Existing pages should be rebuilt or deduplicated based on the confirmed cursor. Do not directly append all returned data.
 * - During the load process, you may receive pending approvals or questions again. Use the interaction notification that is still valid for this session to call ReplyAgentSession.
 * - For an idle session, `stopReason=end_turn` may only indicate the end of the current load. It cannot be used to determine the success of a previously interrupted turn. You must associate it with the actual desired state of the target turn. If it cannot be determined, keep the result for verification.
 *
 * @param tmpReq LoadAgentSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LoadAgentSessionResponse
 */
FutureGenerator<LoadAgentSessionResponse> Client::loadAgentSessionWithSSE(const LoadAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  LoadAgentSessionShrinkRequest request = LoadAgentSessionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "Params", "json"));
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasJsonrpc()) {
    body["Jsonrpc"] = request.getJsonrpc();
  }

  if (!!request.hasParamsShrink()) {
    body["Params"] = request.getParamsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "LoadAgentSession"},
    {"version" , "2026-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
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
      })).get<LoadAgentSessionResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Loads session history, receives subsequent output, or resumes Server-Sent Events (SSE) from a saved read position.
 *
 * @description - A normal load requires only the session ID. It returns the configuration, history, and output to be continuously received. The response is SSE, not a standard JSON message list.
 * - When resuming from a disconnection, pass back the actually received cursor, event epoch, and turn ID. History and increments may be returned simultaneously. Existing pages should be rebuilt or deduplicated based on the confirmed cursor. Do not directly append all returned data.
 * - During the load process, you may receive pending approvals or questions again. Use the interaction notification that is still valid for this session to call ReplyAgentSession.
 * - For an idle session, `stopReason=end_turn` may only indicate the end of the current load. It cannot be used to determine the success of a previously interrupted turn. You must associate it with the actual desired state of the target turn. If it cannot be determined, keep the result for verification.
 *
 * @param tmpReq LoadAgentSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LoadAgentSessionResponse
 */
LoadAgentSessionResponse Client::loadAgentSessionWithOptions(const LoadAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  LoadAgentSessionShrinkRequest request = LoadAgentSessionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "Params", "json"));
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasJsonrpc()) {
    body["Jsonrpc"] = request.getJsonrpc();
  }

  if (!!request.hasParamsShrink()) {
    body["Params"] = request.getParamsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "LoadAgentSession"},
    {"version" , "2026-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LoadAgentSessionResponse>();
}

/**
 * @summary Loads session history, receives subsequent output, or resumes Server-Sent Events (SSE) from a saved read position.
 *
 * @description - A normal load requires only the session ID. It returns the configuration, history, and output to be continuously received. The response is SSE, not a standard JSON message list.
 * - When resuming from a disconnection, pass back the actually received cursor, event epoch, and turn ID. History and increments may be returned simultaneously. Existing pages should be rebuilt or deduplicated based on the confirmed cursor. Do not directly append all returned data.
 * - During the load process, you may receive pending approvals or questions again. Use the interaction notification that is still valid for this session to call ReplyAgentSession.
 * - For an idle session, `stopReason=end_turn` may only indicate the end of the current load. It cannot be used to determine the success of a previously interrupted turn. You must associate it with the actual desired state of the target turn. If it cannot be determined, keep the result for verification.
 *
 * @param request LoadAgentSessionRequest
 * @return LoadAgentSessionResponse
 */
LoadAgentSessionResponse Client::loadAgentSession(const LoadAgentSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return loadAgentSessionWithOptions(request, runtime);
}

/**
 * @summary Sends text to an existing session and continuously receives agent output through Server-Sent Events (SSE).
 *
 * @description - Pass the session ID returned by CreateAgentSession to `Params.sessionId` and place the user text in `Params.prompt`.
 * - When an execution or pending interaction is already in progress, the default call path rejects new prompts. After receiving an approval or Q&A notification, submit the selection or answer through ReplyAgentSession before continuing to read the original stream.
 * - A connection interruption does not cancel the execution. If the result is unknown, call LoadAgentSession to resume reading. Submitting duplicate prompts may generate new messages, and duplicate `Id` values are not deduplicated.
 *
 * @param tmpReq PromptAgentSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PromptAgentSessionResponse
 */
FutureGenerator<PromptAgentSessionResponse> Client::promptAgentSessionWithSSE(const PromptAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PromptAgentSessionShrinkRequest request = PromptAgentSessionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "Params", "json"));
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasJsonrpc()) {
    body["Jsonrpc"] = request.getJsonrpc();
  }

  if (!!request.hasParamsShrink()) {
    body["Params"] = request.getParamsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PromptAgentSession"},
    {"version" , "2026-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
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
      })).get<PromptAgentSessionResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Sends text to an existing session and continuously receives agent output through Server-Sent Events (SSE).
 *
 * @description - Pass the session ID returned by CreateAgentSession to `Params.sessionId` and place the user text in `Params.prompt`.
 * - When an execution or pending interaction is already in progress, the default call path rejects new prompts. After receiving an approval or Q&A notification, submit the selection or answer through ReplyAgentSession before continuing to read the original stream.
 * - A connection interruption does not cancel the execution. If the result is unknown, call LoadAgentSession to resume reading. Submitting duplicate prompts may generate new messages, and duplicate `Id` values are not deduplicated.
 *
 * @param tmpReq PromptAgentSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PromptAgentSessionResponse
 */
PromptAgentSessionResponse Client::promptAgentSessionWithOptions(const PromptAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PromptAgentSessionShrinkRequest request = PromptAgentSessionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "Params", "json"));
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasJsonrpc()) {
    body["Jsonrpc"] = request.getJsonrpc();
  }

  if (!!request.hasParamsShrink()) {
    body["Params"] = request.getParamsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PromptAgentSession"},
    {"version" , "2026-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PromptAgentSessionResponse>();
}

/**
 * @summary Sends text to an existing session and continuously receives agent output through Server-Sent Events (SSE).
 *
 * @description - Pass the session ID returned by CreateAgentSession to `Params.sessionId` and place the user text in `Params.prompt`.
 * - When an execution or pending interaction is already in progress, the default call path rejects new prompts. After receiving an approval or Q&A notification, submit the selection or answer through ReplyAgentSession before continuing to read the original stream.
 * - A connection interruption does not cancel the execution. If the result is unknown, call LoadAgentSession to resume reading. Submitting duplicate prompts may generate new messages, and duplicate `Id` values are not deduplicated.
 *
 * @param request PromptAgentSessionRequest
 * @return PromptAgentSessionResponse
 */
PromptAgentSessionResponse Client::promptAgentSession(const PromptAgentSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return promptAgentSessionWithOptions(request, runtime);
}

/**
 * @summary Submits the approval choice or question answer for the current pending interaction.
 *
 * @description - Read `data.sessionId`, `data.requestId`, and `data.options` from the `permission_request` notification of PromptAgentSession or LoadAgentSession. This operation uses the interaction ID, not the tool invoke ID or the server-side RequestId.
 * - When selecting an action, use the `optionId` actually provided in the notification. For Q&A scenarios, you must also write the question key and answer text into `answers`. Do not pass this field for common tool approvals.
 * - `accepted=true` only indicates that the reply has been accepted. Subsequent output must still be read through Prompt or Load. `false` indicates that the reply was not adopted this time. You should reload the current interaction and must not automatically change it to approve other requests.
 *
 * @param tmpReq ReplyAgentSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReplyAgentSessionResponse
 */
ReplyAgentSessionResponse Client::replyAgentSessionWithOptions(const ReplyAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ReplyAgentSessionShrinkRequest request = ReplyAgentSessionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "Params", "json"));
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasJsonrpc()) {
    body["Jsonrpc"] = request.getJsonrpc();
  }

  if (!!request.hasParamsShrink()) {
    body["Params"] = request.getParamsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ReplyAgentSession"},
    {"version" , "2026-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReplyAgentSessionResponse>();
}

/**
 * @summary Submits the approval choice or question answer for the current pending interaction.
 *
 * @description - Read `data.sessionId`, `data.requestId`, and `data.options` from the `permission_request` notification of PromptAgentSession or LoadAgentSession. This operation uses the interaction ID, not the tool invoke ID or the server-side RequestId.
 * - When selecting an action, use the `optionId` actually provided in the notification. For Q&A scenarios, you must also write the question key and answer text into `answers`. Do not pass this field for common tool approvals.
 * - `accepted=true` only indicates that the reply has been accepted. Subsequent output must still be read through Prompt or Load. `false` indicates that the reply was not adopted this time. You should reload the current interaction and must not automatically change it to approve other requests.
 *
 * @param request ReplyAgentSessionRequest
 * @return ReplyAgentSessionResponse
 */
ReplyAgentSessionResponse Client::replyAgentSession(const ReplyAgentSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return replyAgentSessionWithOptions(request, runtime);
}

/**
 * @summary Sets the model used by a session and optionally configures the thinking level.
 *
 * @description - Pass the `sessionId` returned by CreateAgentSession and the `Models[].Id` returned by ListModels as `Params.sessionId` and `Params.modelId`, respectively. The visibility of a model in the model catalog does not guarantee that the target session supports the model. The final validation is performed by the target session.
 * - `modelId` is required. When only modifying the model, you can omit `thinkingLevel`. For details about how to configure the thinking level, see the supplementary description of request parameters.
 * - This operation only modifies the target session and does not modify the global default model of the agent or account. The session may deny configuration modifications during execution, and switching models during runtime is not guaranteed to be supported.
 * - The model and thinking level Settings are applied in steps. If the call fails, the model may have already been changed, and a full rollback is not guaranteed. You should call GetAgentSessionModel to query the current configuration before deciding what to do next. After a successful call, you can read the actual effective values from the returned result.
 *
 * @param tmpReq SetAgentSessionModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetAgentSessionModelResponse
 */
SetAgentSessionModelResponse Client::setAgentSessionModelWithOptions(const SetAgentSessionModelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SetAgentSessionModelShrinkRequest request = SetAgentSessionModelShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "Params", "json"));
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasJsonrpc()) {
    body["Jsonrpc"] = request.getJsonrpc();
  }

  if (!!request.hasParamsShrink()) {
    body["Params"] = request.getParamsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SetAgentSessionModel"},
    {"version" , "2026-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetAgentSessionModelResponse>();
}

/**
 * @summary Sets the model used by a session and optionally configures the thinking level.
 *
 * @description - Pass the `sessionId` returned by CreateAgentSession and the `Models[].Id` returned by ListModels as `Params.sessionId` and `Params.modelId`, respectively. The visibility of a model in the model catalog does not guarantee that the target session supports the model. The final validation is performed by the target session.
 * - `modelId` is required. When only modifying the model, you can omit `thinkingLevel`. For details about how to configure the thinking level, see the supplementary description of request parameters.
 * - This operation only modifies the target session and does not modify the global default model of the agent or account. The session may deny configuration modifications during execution, and switching models during runtime is not guaranteed to be supported.
 * - The model and thinking level Settings are applied in steps. If the call fails, the model may have already been changed, and a full rollback is not guaranteed. You should call GetAgentSessionModel to query the current configuration before deciding what to do next. After a successful call, you can read the actual effective values from the returned result.
 *
 * @param request SetAgentSessionModelRequest
 * @return SetAgentSessionModelResponse
 */
SetAgentSessionModelResponse Client::setAgentSessionModel(const SetAgentSessionModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setAgentSessionModelWithOptions(request, runtime);
}

/**
 * @summary Updates the configuration of an agent.
 *
 * @description - `Name` is used only to locate the agent and cannot be modified after creation.
 * - Each agent can be bound to only one knowledge base.
 * - `Tools` is updated according to the rules below. If `Skills` or `KnowledgeBases` is not passed, the original values are retained. If a non-empty array is passed, the entire list is replaced. If an empty array is passed, the corresponding bindings are removed. Other optional fields retain their original values if not passed.
 *
 * @param request UpdateAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAgentResponse
 */
UpdateAgentResponse Client::updateAgentWithOptions(const UpdateAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasExpectedVersion()) {
    body["ExpectedVersion"] = request.getExpectedVersion();
  }

  if (!!request.hasKnowledgeBases()) {
    body["KnowledgeBases"] = request.getKnowledgeBases();
  }

  if (!!request.hasSkills()) {
    body["Skills"] = request.getSkills();
  }

  if (!!request.hasSystemPrompt()) {
    body["SystemPrompt"] = request.getSystemPrompt();
  }

  if (!!request.hasTools()) {
    body["Tools"] = request.getTools();
  }

  if (!!request.hasVisibility()) {
    body["Visibility"] = request.getVisibility();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAgent"},
    {"version" , "2026-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAgentResponse>();
}

/**
 * @summary Updates the configuration of an agent.
 *
 * @description - `Name` is used only to locate the agent and cannot be modified after creation.
 * - Each agent can be bound to only one knowledge base.
 * - `Tools` is updated according to the rules below. If `Skills` or `KnowledgeBases` is not passed, the original values are retained. If a non-empty array is passed, the entire list is replaced. If an empty array is passed, the corresponding bindings are removed. Other optional fields retain their original values if not passed.
 *
 * @param request UpdateAgentRequest
 * @return UpdateAgentResponse
 */
UpdateAgentResponse Client::updateAgent(const UpdateAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAgentWithOptions(request, runtime);
}

/**
 * @summary Updates a skill.
 *
 * @description - Update rules:
 *   - Name is only used to locate the skill and cannot be modified.
 *   - The caller must be the creator of the skill, or the root account of the tenant that has the permission to manage the tenant-level skill.
 * - Replacement rules:
 *   - If Description and Visibility are omitted, their original values are retained. Passing `null` is also treated as omission and cannot be used to clear the original values.
 *   - Metadata is replaced as a whole, not merged incrementally. If Metadata is omitted, the original content is retained. If it is passed, old fields not included in the new object are deleted.
 *   - When modifying only Description or Visibility, do not pass Metadata, and do not pass an empty object `{}`. An empty object replaces the original metadata with an empty object as a whole.
 * - Content sources:
 *   - When replacing the body or bundle, you must and can only choose one of skillMd, transitId, or bundleUrl.
 *   - For the field formats of the three sources, the Transit upload confirmation process, and the bundleUrl restrictions, refer to CreateSkill. Finally, pass the selected source in UpdateSkill.Metadata.
 *
 * @param request UpdateSkillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSkillResponse
 */
UpdateSkillResponse Client::updateSkillWithOptions(const UpdateSkillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasExpectedVersion()) {
    body["ExpectedVersion"] = request.getExpectedVersion();
  }

  if (!!request.hasMetadata()) {
    body["Metadata"] = request.getMetadata();
  }

  if (!!request.hasVisibility()) {
    body["Visibility"] = request.getVisibility();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateSkill"},
    {"version" , "2026-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSkillResponse>();
}

/**
 * @summary Updates a skill.
 *
 * @description - Update rules:
 *   - Name is only used to locate the skill and cannot be modified.
 *   - The caller must be the creator of the skill, or the root account of the tenant that has the permission to manage the tenant-level skill.
 * - Replacement rules:
 *   - If Description and Visibility are omitted, their original values are retained. Passing `null` is also treated as omission and cannot be used to clear the original values.
 *   - Metadata is replaced as a whole, not merged incrementally. If Metadata is omitted, the original content is retained. If it is passed, old fields not included in the new object are deleted.
 *   - When modifying only Description or Visibility, do not pass Metadata, and do not pass an empty object `{}`. An empty object replaces the original metadata with an empty object as a whole.
 * - Content sources:
 *   - When replacing the body or bundle, you must and can only choose one of skillMd, transitId, or bundleUrl.
 *   - For the field formats of the three sources, the Transit upload confirmation process, and the bundleUrl restrictions, refer to CreateSkill. Finally, pass the selected source in UpdateSkill.Metadata.
 *
 * @param request UpdateSkillRequest
 * @return UpdateSkillResponse
 */
UpdateSkillResponse Client::updateSkill(const UpdateSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSkillWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Ada20260701